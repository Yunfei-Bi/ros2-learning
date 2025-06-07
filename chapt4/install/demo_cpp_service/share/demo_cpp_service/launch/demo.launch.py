import launch
import launch_ros

def generate_launch_description():
    action_declare_arg_max_speed = launch.actions.DeclareLaunchArgument(
        'launch_max_speed', default_value = '2.0'
    )
    action_node_turtle_control = launch_ros.actions.Node(
        package='demo_cpp_service',
        executable="turtle_control",
        output = 'screen',
        parameters = [{'max_speed' : launch.substitutions.LaunchConfiguration(
            'launch_max_speed', default = '2.0'
        )}],
    )
    action_node_patrol_client = launch_ros.actions.Node(
        package = 'demo_cpp_service',
        executable = 'turtlesim_node',
        output= 'log',
    )
    action_node_turtlesim_node = launch_ros.actions.Node(
        package = 'tuetlesim',
        executable = 'tuetlesim_node',
        output = 'both',
    )

    # 合成启动描述并返回
    launch_description = launch.LaunchDescroption([
        action_declare_arg_max_speed,
        action_node_turtle_control,
        action_node_patrol_client,
        action_node_turtlesim_node,
    ])
    return launch_description