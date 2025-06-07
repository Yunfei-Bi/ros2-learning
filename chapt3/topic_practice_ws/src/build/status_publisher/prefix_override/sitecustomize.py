import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yunfeibi/Ros_projects/ros2-learning/chapt3/topic_practice_ws/src/install/status_publisher'
