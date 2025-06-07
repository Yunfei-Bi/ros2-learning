import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yunfeibi/Ros_projects/ros2-learning/chapt2/chapt2_ws/src_python/install/demo_python_pkg'
