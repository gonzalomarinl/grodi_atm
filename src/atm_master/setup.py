from setuptools import find_packages, setup

package_name = 'atm_master'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/master.launch.py']),
        ('share/' + package_name + '/config', ['config/master_params.yaml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gonzalo',
    maintainer_email='gonzalo@todo.todo',
    description='Nodos ROS 2 de la Raspberry maestra del atomizador.',
    license='MIT',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'mission_manager_node = atm_master.mission_manager_node:main',
            'pump_controller_node = atm_master.pump_controller_node:main',
            'admission_reel_controller_node = atm_master.admission_reel_controller_node:main',
            'master_watchdog_node = atm_master.master_watchdog_node:main',
            'mission_event_logger_node = atm_master.mission_event_logger_node:main',
            'master_health_publisher_node = atm_master.master_health_publisher_node:main',
            'server_mission_loader_node = atm_master.server_mission_loader_node:main',
        ],
    },
)
