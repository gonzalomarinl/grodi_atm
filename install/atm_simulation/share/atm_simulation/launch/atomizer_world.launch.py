from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    world_path = PathJoinSubstitution(
        [FindPackageShare('atm_simulation'), 'worlds', 'atomizer_greenhouse.sdf']
    )

    gz_args_default = ['-s -r ', world_path]

    return LaunchDescription([
        DeclareLaunchArgument(
            'gz_args',
            default_value=gz_args_default,
            description='Argumentos para Gazebo Sim.',
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                PathJoinSubstitution([FindPackageShare('ros_gz_sim'), 'launch', 'gz_sim.launch.py'])
            ),
            launch_arguments={
                'gz_args': LaunchConfiguration('gz_args'),
                'on_exit_shutdown': 'true',
            }.items(),
        ),
    ])
