import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from geometry_msgs.msg import Twist
import cv2
from videeps_pkg.srv import SetTargetObject
import numpy as np
import threading
from ultralytics import YOLO as yolo
import cvzone
import math
from sensor_msgs.msg import LaserScan
from std_msgs.msg import Bool 
from geometry_msgs.msg import PoseStamped
from nav2_msgs.action import NavigateToPose
from rclpy.action import ActionClient
import tf2_ros
from tf2_geometry_msgs import do_transform_pose_stamped

class ImageSubscriber(Node):
    def __init__(self):
        super().__init__('image_subscriber')
        
        # Create a subscriber with a queue size of 1 to only keep the last frame
        self.subscription = self.create_subscription(
            Image,
            'camera/image',
            self.image_callback,
            1  # Queue size of 1
        )

        self.goal_in_progress = False

        self.nav_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        self.last_goal_time = self.get_clock().now()
        self.goal_interval_sec = 2.0  # minimum interval between goals
        self.current_goal_handle = None 

        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        self.detection_pub = self.create_publisher(Bool, "/object_detected", 10)
        self.object_found = False
        self.should_stop = False

        self.scan_data = None
        self.create_subscription(LaserScan, '/scan', self.scan_callback, 10)

        self.publisher = self.create_publisher(Twist, 'cmd_vel', 10)

        self.step_distance = 0.3
        self.error_count = 0

        self.send_stop_signal = False
        
        # Initialize CvBridge
        self.bridge = CvBridge()

        self.Area = 640*480

        self.model = yolo('~/yolobot/yolov8l.pt')
        self.img_pub = self.create_publisher(Image, "/detection", 1)

        self.classNames = ["person", "bicycle", "car", "motorbike", "aeroplane", "bus", "train", "truck", "boat",
              "traffic light", "fire hydrant", "stop sign", "parking meter", "bench", "bird", "cat",
              "dog", "horse", "sheep", "cow", "elephant", "bear", "zebra", "giraffe", "backpack", "umbrella",
              "handbag", "tie", "suitcase", "frisbee", "skis", "snowboard", "sports ball", "kite", "baseball bat",
              "baseball glove", "skateboard", "surfboard", "tennis racket", "bottle", "wine glass", "cup",
              "fork", "knife", "spoon", "bowl", "banana", "apple", "sandwich", "orange", "broccoli",
              "carrot", "hot dog", "pizza", "donut", "cake", "chair", "sofa", "pottedplant", "bed",
              "diningtable", "toilet", "tvmonitor", "laptop", "mouse", "remote", "keyboard", "cell phone",
              "microwave", "oven", "toaster", "sink", "refrigerator", "book", "clock", "vase", "scissors",
              "teddy bear", "hair drier", "toothbrush"
            ]
        # Variable to store the latest frame
        self.latest_frame = None
        self.frame_lock = threading.Lock()  # Lock to ensure thread safety
        
        # Flag to control the display loop
        self.running = True

        # Start a separate thread for spinning (to ensure image_callback keeps receiving new frames)
        self.spin_thread = threading.Thread(target=self.spin_thread_func)
        self.spin_thread.start()
        
        #to receive the object to follow 
        self.target_object = "person"
        self.srv = self.create_service(SetTargetObject, 'set_target_object', self.set_target_callback)
        self.get_logger().info("Searching for object")
        
    def set_target_callback(self, request, response):
        self.target_object = request.object_name
        response.success = True
        response.message = f"Now following: {self.target_object}"
        self.get_logger().info(response.message)
        return response

    def spin_thread_func(self):
        """Separate thread function for rclpy spinning."""
        while rclpy.ok() and self.running:
            rclpy.spin_once(self, timeout_sec=0.05)

    def send_incremental_goal(self, angle_rad: float, step_distance: float = 0.3):

        if self.goal_in_progress:
            return

        if not self.nav_client.wait_for_server(timeout_sec=4.0):
            self.get_logger().error("Nav2 action server not available.")
            return

        dx = math.cos(angle_rad) * self.step_distance
        dy = math.sin(angle_rad) * self.step_distance
        self.get_logger().info(f"Step distance = {self.step_distance}")

        pose = PoseStamped()
        pose.header.frame_id = "base_link"
        pose.header.stamp = self.get_clock().now().to_msg()
        pose.pose.position.x = dx
        pose.pose.position.y = dy
        pose.pose.orientation.w = 1.0

        # try:
        transform = self.tf_buffer.lookup_transform(
            "map", pose.header.frame_id, rclpy.time.Time())

        pose_map = do_transform_pose_stamped(pose, transform)
        # except Exception as e:
            # self.get_logger().error(f"TF transform failed: {e}")
            # return

        goal_msg = NavigateToPose.Goal()
        goal_msg.pose = pose_map

        self.goal_in_progress = True
        self.get_logger().info(
            f"Sending nav goal to ({pose_map.pose.position.x:.2f}, {pose_map.pose.position.y:.2f})"
        )

        send_future = self.nav_client.send_goal_async(goal_msg)

        # now = self.get_clock().now()
        # if (now - self.last_goal_time).nanoseconds / 1e9 < self.goal_interval_sec:
        #     self.get_logger().info("Waiting before sending next nav goal...")
        #     return

        # self.get_logger().info(f"Sending nav goal: {dx:.2f}, {dy:.2f} (angle {math.degrees(angle_rad):.1f}°)")
        # self.nav_client.send_goal_async(goal_msg)
        # self.last_goal_time = now
        def goal_response_callback(future):
            goal_handle = future.result()
            self.current_goal_handle = goal_handle
            if not goal_handle.accepted:
                self.get_logger().warn("Goal rejected.")
                self.goal_in_progress = False
                return

            result_future = goal_handle.get_result_async()

            def result_callback(result_future):
                result = result_future.result()
                code = result.status
                if code == 4:  # ABORTED
                    self.get_logger().error("Goal aborted.")
                    self.error_count += 1
                    self.step_distance = 0.3 + self.error_count * 0.1
                    
                elif code == 3:  # SUCCEEDED
                    self.get_logger().info("Goal succeeded.")
                    self.error_count = 0
                    self.step_distance = 0.3
                else:
                    self.error_count = 0
                    self.step_distance = 0.3
                    self.get_logger().warn(f"Goal ended with status: {code}")
                self.goal_in_progress = False  # Ready for next goal

            result_future.add_done_callback(result_callback)

        send_future.add_done_callback(goal_response_callback)


    def image_callback(self, msg):
        """Callback function to receive and store the latest frame."""
        # Convert ROS Image message to OpenCV format and store it
        with self.frame_lock:
            self.latest_frame = self.bridge.imgmsg_to_cv2(msg, "bgr8")

    def scan_callback(self, msg):
        self.scan_data = msg

    def display_image(self):
        """Main loop to process and display the latest frame."""
        # Create a single OpenCV window
        cv2.namedWindow("frame", cv2.WINDOW_NORMAL)
        cv2.resizeWindow("frame", 800,600)

        while rclpy.ok():
            # Check if there is a new frame available
            if self.latest_frame is not None:

                # Process the current image
                # mask, contour, crosshair = self.process_image(self.latest_frame)
                # identfied = self.process_image(self.latest_frame.copy())
                self.identify_image(self.latest_frame.copy())
                # Show the latest frame
                cv2.imshow("frame", self.latest_frame)
                # cv2.imshow("objects", identfied)
                # cv2.imshow("mask", mask)
                # cv2.imshow("contour", contour)
                # cv2.imshow("crosshair", crosshair)
                self.latest_frame = None  # Clear the frame after displaying

            # Check for quit key
            if cv2.waitKey(1) & 0xFF == ord('q'):
                self.running = False
                break

        # Close OpenCV window after quitting
        cv2.destroyAllWindows()
        self.running = False

    def process_image(self, img):
        """Image processing task."""
        msg = Twist()
        msg.linear.x = 0.0
        msg.linear.y = 0.0
        msg.linear.z = 0.0
        msg.angular.x = 0.0
        msg.angular.y = 0.0
        msg.angular.z = 0.0

        rows,cols = img.shape[:2]

        R,G,B = self.convert2rgb(img)

        redMask = self.threshold_binary(R, (220, 255))
        stackedMask = np.dstack((redMask, redMask, redMask))
        contourMask = stackedMask.copy()
        crosshairMask = stackedMask.copy()

        

        # return value of findContours depends on OpenCV version
        (contours, hierarchy) = cv2.findContours(redMask.copy(), 1, cv2.CHAIN_APPROX_NONE)

        # Find the biggest contour (if detected)
        if len(contours) > 0:
            
            c = max(contours, key=cv2.contourArea)
            M = cv2.moments(c)

            # Make sure that "m00" won't cause ZeroDivisionError: float division by zero
            if M["m00"] != 0:
                cx = int(M["m10"] / M["m00"])
                cy = int(M["m01"] / M["m00"])
            else:
                cx, cy = 0, 0

            # Show contour and centroid
            cv2.drawContours(contourMask, contours, -1, (0,255,0), 10)
            cv2.circle(contourMask, (cx, cy), 5, (0, 255, 0), -1)

            # Show crosshair and difference from middle point
            cv2.line(crosshairMask,(cx,0),(cx,rows),(0,0,255),10)
            cv2.line(crosshairMask,(0,cy),(cols,cy),(0,0,255),10)
            cv2.line(crosshairMask,(int(cols/2),0),(int(cols/2),rows),(255,0,0),10)
        
        
            # Chase the ball
            if abs(cols/2 - cx) > 20:
                msg.linear.x = 0.0
                if cols/2 > cx:
                    msg.angular.z = 0.2
                else:
                    msg.angular.z = -0.2

            else:
                msg.linear.x = 0.2
                msg.angular.z = 0.0

        else:
            msg.linear.x = 0.0
            msg.angular.z = 0.0

        # Publish cmd_vel
        self.publisher.publish(msg)


        # Return processed frames
        return redMask, contourMask, crosshairMask
    
    def identify_image(self, img):
        
        msg = Twist()
        msg.linear.x = 0.0
        msg.linear.y = 0.0
        msg.linear.z = 0.0
        msg.angular.x = 0.0
        msg.angular.y = 0.0
        msg.angular.z = 0.0

        rows, cols = img.shape[:2]

        results = self.model(img)

        # def angle_to_scan_index(theta, scan_msg):
        #     angle_min = scan_msg.angle_min
        #     angle_max = scan_msg.angle_max
        #     angle_increment = scan_msg.angle_increment
        #     num_ranges = len(scan_msg.ranges)
        #     theta = max(angle_min, min(angle_max, theta))
        #     index = int(round((theta - angle_min) / angle_increment))
        #     return max(0, min(index, num_ranges - 1))

        for r in results:
            boxes = r.boxes
            for box in boxes:
                x1,y1,x2,y2 = box.xyxy[0]
                x1,y1,x2,y2 = int(x1), int(y1), int(x2), int(y2)
                
                # cv.rectangle(img, (x1, y1), (x2, y2), (0,255,0), 3)
                
                w, h = x2-x1, y2-y1
                
                # cvzone.cornerRect(img, (x1,y1,w,h), colorR=(0,255,0), rt=5)

                conf = box.conf[0]
                conf = math.ceil(conf*100)/100

                cls = box.cls[0]
                name = self.classNames[int(cls)]
                if name == self.target_object:
                    
                    image_center_x = cols/2
                    

                    cx = (x1+x2)/2

                    relative_x = (cx - image_center_x)/cols
                    max_angle = math.radians(60)

                    cy = (y1+y2)/2

                    angle = relative_x*max_angle


                    print("YAYYY")
                    if not self.object_found:
                        detection_msg = Bool()
                        detection_msg.data = True
                        self.detection_pub.publish(detection_msg)
                        self.get_logger().info("Published object detection signal!")
                        self.object_found = True
                        msg.angular.z = 0.0
                        self.publisher.publish(msg)

                    # if abs(cols/2 - cx) > 20:
                    #     msg.linear.x = 0.0
                    #     if cols/2 > cx:
                    #         msg.angular.z = 0.2
                    #     else:
                    #         msg.angular.z = -0.2

                    # else:
                    #     msg.linear.x = 0.2
                    #     msg.angular.z = 0.0
                    # image_center_x = cols / 2
                    # relative_x = (cx - image_center_x) / cols
                    # lidar_fov = math.radians(180)  # adjust if your LiDAR has smaller FOV

                    # # Estimate angle from center (in radians)
                    # theta = relative_x * (lidar_fov / 2)

                    # # Safety stop distance
                    # stop_distance = 0.8  # meters
                    # scan = self.scan_data
                    # self.should_stop = False

                    # if scan:
                    #     center_index = angle_to_scan_index(theta, scan)
                    #     spread_deg = 10
                    #     spread_rad = math.radians(spread_deg)
                    #     num_points = int(spread_rad / scan.angle_increment)

                    #     start = max(center_index - num_points, 0)
                    #     end = min(center_index + num_points + 1, len(scan.ranges))
                    #     distances = [scan.ranges[i] for i in range(start, end)
                    #                  if math.isfinite(scan.ranges[i]) and scan.ranges[i] > 0.05]

                    #     if distances and min(distances) < stop_distance:
                    #         # self.should_stop = True
                    #         pass
                    #     elif not distances:
                    #         self.get_logger().warn("No valid LiDAR data in object direction.")
                    # else:
                    #     self.get_logger().warn("Waiting for LiDAR scan data...")
                    #     # msg.linear.x = 0.0
                    #     # msg.angular.z = 0.0

                    area = w * h
                    if area > self.Area / 3.5 or h > 480 * 3 / 4 or w > 640 * 3 / 4:
                        self.should_stop = True

                    if self.should_stop:
                        self.get_logger().info("I am stopping rahh")
                        msg.linear.x = 0.0
                        msg.linear.y = 0.0
                        msg.angular.z = 0.0
                        self.publisher.publish(msg)

                        if self.goal_in_progress:
                            self.get_logger().warn("Aborting current navigation goal!")
                            self.nav_client._cancel_goal_async(self.current_goal_handle) 
                            self.goal_in_progress = False

                        return
                        
                    # else:
                    #     if abs(image_center_x - cx) > 20:
                    #         self.get_logger().info("I am turning rahhh")
                    #         msg.linear.x = 0.0
                    #         msg.angular.z = 0.2 if image_center_x > cx else -0.2
                    #     else:
                    #         self.get_logger().info("I am going straight rahh")
                    #         msg.linear.x = 0.2
                    #         msg.angular.z = 0.0

                    if abs(cx-cols/2) < 30:
                        if not self.send_stop_signal:
                            msg.angular.z = 0.0
                            self.publisher.publish(msg)
                            self.send_stop_signal = True
                        if not self.should_stop:
                            self.send_incremental_goal(angle)
                        
                    else:
                        self.send_stop_signal = False
                        if not self.goal_in_progress:
                            if (cx-cols/2)>0:
                                msg.angular.z = -0.2
                            else:
                                msg.angular.z = 0.2

                            self.publisher.publish(msg)


                    

                # else:
                #     self.get_logger().info("I am stopping outside rahh")
                #     msg.linear.x = 0.0
                #     msg.angular.z = 0.0

                # self.publisher.publish(msg)
                # cvzone.putTextRect(img, f'{self.classNames[int(cls)]} {conf}', (x1,y1-20))
            if not any(self.classNames[int(b.cls[0])] == self.target_object for b in boxes):
                
                # self.get_logger().info("I am stopping outside rahh")
                # msg.linear.x = 0.0
                

                if self.object_found and not self.goal_in_progress:
                    self.object_found = False
                    msg.angular.z = 0.0
                    self.publisher.publish(msg)
                    detection_msg = Bool()
                    detection_msg.data = False
                    self.should_stop = False
                    self.detection_pub.publish(detection_msg)
                    self.get_logger().info("Object died resuming explore rahh")
                    

        # self.publisher.publish(msg)

        annotated_frame = results[0].plot()
        img_msg = self.bridge.cv2_to_imgmsg(annotated_frame)

        self.img_pub.publish(img_msg)

    # Convert to RGB channels
    def convert2rgb(self, img):
        R = img[:, :, 2]
        G = img[:, :, 1]
        B = img[:, :, 0]

        return R, G, B

    # Apply threshold and result a binary image
    def threshold_binary(self, img, thresh=(200, 255)):
        binary = np.zeros_like(img)
        binary[(img >= thresh[0]) & (img <= thresh[1])] = 1

        return binary*255
    
    def stop(self):
        """Stop the node and the spin thread."""
        self.running = False
        self.spin_thread.join()

        # Add small images to the top row of the main image
    # def add_small_pictures(self, img, small_images, size=(160, 120)):

    #     x_base_offset = 40
    #     y_base_offset = 10

    #     x_offset = x_base_offset
    #     y_offset = y_base_offset

    #     for small in small_images:
    #         small = cv2.resize(small, size)
    #         if len(small.shape) == 2:
    #             small = np.dstack((small, small, small))

    #         img[y_offset: y_offset + size[1], x_offset: x_offset + size[0]] = small

    #         x_offset += size[0] + x_base_offset

    #     return img

def main(args=None):

    print("OpenCV version: %s" % cv2.__version__)

    rclpy.init(args=args)
    node = ImageSubscriber()
    
    try:
        node.display_image()  # Run the display loop
    except KeyboardInterrupt:
        pass
    finally:
        node.stop()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()