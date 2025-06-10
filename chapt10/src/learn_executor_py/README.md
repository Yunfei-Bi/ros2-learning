### learn_executor_py
调试方法：
- 可能出现`ros2 node list`卡死的现象，这是需要手动关闭VPN
- 如果`ros2 node list` 或者 `ros2 service list` 后显示为空， 通常是由于节点间通信失败或环境配置问题导致的，可能的原因如下：
> 1. ROS_DOMAIN_ID不匹配：发布节点和ros2 node list命令使用的ROS_DOMAIN_ID不同。

> 2. DDS 中间件不兼容：节点和客户端使用了不同的 DDS 实现（如 Fast DDS 和 Cyclone DDS）。

解决方案如下：
首先在运行节点的终端和进行`ros2 node/service list`的终端分别查看:
```bash
echo $ROS_DOMAIN_ID
echo $RMW_IMPLEMENTATION
```

如果都没有显示，或者两个终端中的内容不同，那么重新设置
```bash
export ROS_DOMAIN_ID=0
export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
```

然后重新
```bash
# 节点终端
ros2 run learn_executor_py learn_executor
# list终端
ros2 service list
# yunfeibi@yunfeibi:~$ ros2 service call 
# /add_two_ints
# /learn_executor/describe_parameters
# /learn_executor/get_parameters
# /learn_executor/get_parameter_types
# /learn_executor/list_parameters
# /learn_executor/set_parameters
# /learn_executor/set_parameters_atomically
# -r
# --rate
# yunfeibi@yunfeibi:~$ ros2 service call /add_two_ints 
```

最后进行调试，会看到
```bash
yunfeibi@yunfeibi:~$ ros2 service call /add_two_ints  example_interfaces/srv/AddTwoInts 
waiting for service to become available...
requester: making request: example_interfaces.srv.AddTwoInts_Request(a=0, b=0)

response:
example_interfaces.srv.AddTwoInts_Response(sum=0)

yunfeibi@yunfeibi:~$ 
```