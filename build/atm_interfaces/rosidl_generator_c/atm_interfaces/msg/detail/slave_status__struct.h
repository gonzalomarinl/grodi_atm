// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atm_interfaces:msg/SlaveStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/slave_status.h"


#ifndef ATM_INTERFACES__MSG__DETAIL__SLAVE_STATUS__STRUCT_H_
#define ATM_INTERFACES__MSG__DETAIL__SLAVE_STATUS__STRUCT_H_

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
// Member 'current_line_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SlaveStatus in the package atm_interfaces.
typedef struct atm_interfaces__msg__SlaveStatus
{
  rosidl_runtime_c__String state;
  bool at_base;
  bool moving;
  bool atomizer_up;
  bool atomizer_down;
  rosidl_runtime_c__String current_line_id;
  uint32_t current_stop_index;
  bool link_ok;
} atm_interfaces__msg__SlaveStatus;

// Struct for a sequence of atm_interfaces__msg__SlaveStatus.
typedef struct atm_interfaces__msg__SlaveStatus__Sequence
{
  atm_interfaces__msg__SlaveStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__msg__SlaveStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__MSG__DETAIL__SLAVE_STATUS__STRUCT_H_
