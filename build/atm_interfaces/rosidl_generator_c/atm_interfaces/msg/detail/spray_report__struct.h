// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atm_interfaces:msg/SprayReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/spray_report.h"


#ifndef ATM_INTERFACES__MSG__DETAIL__SPRAY_REPORT__STRUCT_H_
#define ATM_INTERFACES__MSG__DETAIL__SPRAY_REPORT__STRUCT_H_

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
// Member 'line_id'
#include "rosidl_runtime_c/string.h"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/SprayReport in the package atm_interfaces.
typedef struct atm_interfaces__msg__SprayReport
{
  rosidl_runtime_c__String mission_id;
  rosidl_runtime_c__String line_id;
  uint32_t stop_index;
  bool success;
  float duration_sec;
  builtin_interfaces__msg__Time stamp;
} atm_interfaces__msg__SprayReport;

// Struct for a sequence of atm_interfaces__msg__SprayReport.
typedef struct atm_interfaces__msg__SprayReport__Sequence
{
  atm_interfaces__msg__SprayReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__msg__SprayReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__MSG__DETAIL__SPRAY_REPORT__STRUCT_H_
