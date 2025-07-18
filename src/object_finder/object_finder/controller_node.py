import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool

class ExploreController(Node):
    def __init__(self):
        super().__init__('explore_controller')
        self.sub = self.create_subscription(Bool, '/object_detected', self.detected_callback, 10)
        self.pub = self.create_publisher(Bool, '/explore/resume', 10)
        self.stopped = False

    def detected_callback(self, msg):
        if msg.data and not self.stopped:
            self.get_logger().info("Object detected, stopping exploration...")
            stop_msg = Bool()
            stop_msg.data = False  # send false to stop explore_lite
            self.pub.publish(stop_msg)
            self.stopped = True
        else:
            self.get_logger().info("Object lost nooooooo")
            stop_msg = Bool()
            stop_msg.data = True  # send false to stop explore_lite
            self.pub.publish(stop_msg)
            self.stopped = False


def main(args=None):
    rclpy.init(args=args)
    node = ExploreController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
