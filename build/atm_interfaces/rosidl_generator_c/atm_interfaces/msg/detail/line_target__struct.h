// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atm_interfaces:msg/LineTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/line_target.h"


#ifndef ATM_INTERFACES__MSG__DETAIL__LINE_TARGET__STRUCT_H_
#define ATM_INTERFACES__MSG__DETAIL__LINE_TARGET__STRUCT_H_

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
// Member 'gap_id'
// Member 'line_id'
// Member 'mode'
// Member 'notes'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LineTarget in the package atm_interfaces.
typedef struct atm_interfaces__msg__LineTarget
{
  rosidl_runtime_c__String mission_id;
  rosidl_runtime_c__String gap_id;
  rosidl_runtime_c__String line_id;
  uint32_t stop_index;
  rosidl_runtime_c__String mode;
  bool selected_by_vega;
  rosidl_runtime_c__String notes;
} atm_interfaces__msg__LineTarget;

// Struct for a sequence of atm_interfaces__msg__LineTarget.
typedef struct atm_interfaces__msg__LineTarget__Sequence
{
  atm_interfaces__msg__LineTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__msg__LineTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__MSG__DETAIL__LINE_TARGET__STRUCT_H_
