from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    simulation_share = FindPackageShare("atm_simulation")
    params_file = PathJoinSubstitution([simulation_share, "config", "simulation_params.yaml"])

    world_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([simulation_share, "launch", "atomizer_world.launch.py"]))
    )

    master_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([FindPackageShare("atm_master"), "launch", "master.launch.py"])
        )
    )

    slave_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([FindPackageShare("atm_slave"), "launch", "slave.launch.py"])
        )
    )

    controller_node = Node(
        package="atm_simulation",
        executable="gazebo_atomizer_controller_node",
        output="screen",
        parameters=[params_file],
    )

    visualizer_node = Node(
        package="atm_simulation",
        executable="real_stack_visualizer_node",
        output="screen",
        parameters=[params_file],
    )

    console_node = Node(
        package="atm_simulation",
        executable="real_stack_operator_console_node",
        output="screen",
        parameters=[params_file],
    )

    return LaunchDescription(
        [
            world_launch,
            TimerAction(period=1.0, actions=[master_launch]),
            TimerAction(period=1.5, actions=[slave_launch]),
            TimerAction(period=2.5, actions=[controller_node]),
            TimerAction(period=3.0, actions=[visualizer_node]),
            TimerAction(period=4.0, actions=[console_node]),
        ]
    )
