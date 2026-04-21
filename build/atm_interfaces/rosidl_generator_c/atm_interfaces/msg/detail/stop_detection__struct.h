// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atm_interfaces:msg/StopDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/stop_detection.h"


#ifndef ATM_INTERFACES__MSG__DETAIL__STOP_DETECTION__STRUCT_H_
#define ATM_INTERFACES__MSG__DETAIL__STOP_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'detected_class'
// Member 'estimated_gap_id'
// Member 'estimated_line_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StopDetection in the package atm_interfaces.
typedef struct atm_interfaces__msg__StopDetection
{
  builtin_interfaces__msg__Time stamp;
  bool detected;
  rosidl_runtime_c__String detected_class;
  rosidl_runtime_c__String estimated_gap_id;
  rosidl_runtime_c__String estimated_line_id;
  float confidence;
  bool mission_match;
} atm_interfaces__msg__StopDetection;

// Struct for a sequence of atm_interfaces__msg__StopDetection.
typedef struct atm_interfaces__msg__StopDetection__Sequence
{
  atm_interfaces__msg__StopDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__msg__StopDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__MSG__DETAIL__STOP_DETECTION__STRUCT_H_
