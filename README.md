# ROS BOT

## Modules required
  - cvzone
  - ultralytics
  - numpy<2 `pip install "numpy<2"`

## Steps to run
  - `colcon build`
  - `source install/local_setup.sh`
  - `ros2 launch bme_ros2_navigation spawn_robot.launch.py`
  - `ros2 launch bme_ros2_navigation navigation_with_slam.launch.py`
  - `ros2 launch object_finder full_launch.py`