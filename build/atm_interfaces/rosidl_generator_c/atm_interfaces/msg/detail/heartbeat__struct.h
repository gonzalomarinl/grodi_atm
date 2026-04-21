// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atm_interfaces:msg/Heartbeat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/heartbeat.h"


#ifndef ATM_INTERFACES__MSG__DETAIL__HEARTBEAT__STRUCT_H_
#define ATM_INTERFACES__MSG__DETAIL__HEARTBEAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'node_name'
// Member 'machine_id'
// Member 'state'
#include "rosidl_runtime_c/string.h"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/Heartbeat in the package atm_interfaces.
typedef struct atm_interfaces__msg__Heartbeat
{
  rosidl_runtime_c__String node_name;
  rosidl_runtime_c__String machine_id;
  builtin_interfaces__msg__Time stamp;
  uint32_t seq;
  bool ok;
  rosidl_runtime_c__String state;
} atm_interfaces__msg__Heartbeat;

// Struct for a sequence of atm_interfaces__msg__Heartbeat.
typedef struct atm_interfaces__msg__Heartbeat__Sequence
{
  atm_interfaces__msg__Heartbeat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__msg__Heartbeat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__MSG__DETAIL__HEARTBEAT__STRUCT_H_
