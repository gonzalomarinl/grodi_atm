from setuptools import find_packages, setup

package_name = 'atm_logging'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/config', ['config/logging_params.yaml']),
        ('share/' + package_name + '/launch', ['launch/logging.launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gonzalo',
    maintainer_email='gonzalo@todo.todo',
    description='Persistencia y trazabilidad de eventos, fallos y misiones del atomizador.',
    license='MIT',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'structured_event_logger_node = atm_logging.structured_event_logger_node:main',
            'link_diagnostics_logger_node = atm_logging.link_diagnostics_logger_node:main',
            'mission_summary_logger_node = atm_logging.mission_summary_logger_node:main',
        ],
    },
)
