import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yunfeibi/Ros_projects/ros2-learning/chapt10/install/learn_executor_py'
