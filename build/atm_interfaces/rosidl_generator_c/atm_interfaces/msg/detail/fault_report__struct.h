// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atm_interfaces:msg/FaultReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/fault_report.h"


#ifndef ATM_INTERFACES__MSG__DETAIL__FAULT_REPORT__STRUCT_H_
#define ATM_INTERFACES__MSG__DETAIL__FAULT_REPORT__STRUCT_H_

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
// Member 'source'
// Member 'fault_code'
// Member 'severity'
// Member 'description'
#include "rosidl_runtime_c/string.h"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/FaultReport in the package atm_interfaces.
typedef struct atm_interfaces__msg__FaultReport
{
  rosidl_runtime_c__String mission_id;
  rosidl_runtime_c__String source;
  rosidl_runtime_c__String fault_code;
  rosidl_runtime_c__String severity;
  rosidl_runtime_c__String description;
  bool requires_return_home;
  builtin_interfaces__msg__Time stamp;
} atm_interfaces__msg__FaultReport;

// Struct for a sequence of atm_interfaces__msg__FaultReport.
typedef struct atm_interfaces__msg__FaultReport__Sequence
{
  atm_interfaces__msg__FaultReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__msg__FaultReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__MSG__DETAIL__FAULT_REPORT__STRUCT_H_
