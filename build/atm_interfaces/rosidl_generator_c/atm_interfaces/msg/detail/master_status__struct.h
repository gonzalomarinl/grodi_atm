// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atm_interfaces:msg/MasterStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/master_status.h"


#ifndef ATM_INTERFACES__MSG__DETAIL__MASTER_STATUS__STRUCT_H_
#define ATM_INTERFACES__MSG__DETAIL__MASTER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'state'
// Member 'reel_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MasterStatus in the package atm_interfaces.
typedef struct atm_interfaces__msg__MasterStatus
{
  rosidl_runtime_c__String state;
  bool pump_enabled;
  rosidl_runtime_c__String reel_state;
  bool link_ok;
  bool system_armed;
} atm_interfaces__msg__MasterStatus;

// Struct for a sequence of atm_interfaces__msg__MasterStatus.
typedef struct atm_interfaces__msg__MasterStatus__Sequence
{
  atm_interfaces__msg__MasterStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__msg__MasterStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__MSG__DETAIL__MASTER_STATUS__STRUCT_H_
