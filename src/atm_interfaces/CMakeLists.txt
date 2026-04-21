cmake_minimum_required(VERSION 3.8)
project(atm_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)

set(msg_files
  "msg/Heartbeat.msg"
  "msg/MissionState.msg"
  "msg/MissionEvent.msg"
  "msg/FaultReport.msg"
  "msg/LineTarget.msg"
  "msg/StopDetection.msg"
  "msg/MasterStatus.msg"
  "msg/SlaveStatus.msg"
  "msg/SprayReport.msg"
)

set(srv_files
  "srv/ArmSystem.srv"
  "srv/ResetFault.srv"
  "srv/StartPump.srv"
  "srv/StopPump.srv"
  "srv/SetAdmissionReelMode.srv"
  "srv/SetZoneSelection.srv"
  "srv/GetSystemState.srv"
)

set(action_files
  "action/ExecuteMission.action"
  "action/NavigateToStop.action"
  "action/SprayAtStop.action"
  "action/ReturnToBase.action"
  "action/RunPurge.action"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
  ${action_files}
  DEPENDENCIES builtin_interfaces
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
