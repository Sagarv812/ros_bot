import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/videep/ROS2/projectStuff/ros_bot/install/object_finder'
