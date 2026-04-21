// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atm_interfaces:msg/MissionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/mission_state.h"


#ifndef ATM_INTERFACES__MSG__DETAIL__MISSION_STATE__STRUCT_H_
#define ATM_INTERFACES__MSG__DETAIL__MISSION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'mission_id'
// Member 'mission_type'
// Member 'state'
// Member 'current_line_id'
#include "rosidl_runtime_c/string.h"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/MissionState in the package atm_interfaces.
typedef struct atm_interfaces__msg__MissionState
{
  rosidl_runtime_c__String mission_id;
  rosidl_runtime_c__String mission_type;
  rosidl_runtime_c__String state;
  uint32_t current_stop_index;
  rosidl_runtime_c__String current_line_id;
  bool comms_degraded;
  builtin_interfaces__msg__Time stamp;
} atm_interfaces__msg__MissionState;

// Struct for a sequence of atm_interfaces__msg__MissionState.
typedef struct atm_interfaces__msg__MissionState__Sequence
{
  atm_interfaces__msg__MissionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__msg__MissionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__MSG__DETAIL__MISSION_STATE__STRUCT_H_
