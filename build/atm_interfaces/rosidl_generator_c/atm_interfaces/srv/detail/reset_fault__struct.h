// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atm_interfaces:srv/ResetFault.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/srv/reset_fault.h"


#ifndef ATM_INTERFACES__SRV__DETAIL__RESET_FAULT__STRUCT_H_
#define ATM_INTERFACES__SRV__DETAIL__RESET_FAULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'source'
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ResetFault in the package atm_interfaces.
typedef struct atm_interfaces__srv__ResetFault_Request
{
  rosidl_runtime_c__String source;
  rosidl_runtime_c__String reason;
} atm_interfaces__srv__ResetFault_Request;

// Struct for a sequence of atm_interfaces__srv__ResetFault_Request.
typedef struct atm_interfaces__srv__ResetFault_Request__Sequence
{
  atm_interfaces__srv__ResetFault_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__srv__ResetFault_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ResetFault in the package atm_interfaces.
typedef struct atm_interfaces__srv__ResetFault_Response
{
  bool success;
  rosidl_runtime_c__String message;
} atm_interfaces__srv__ResetFault_Response;

// Struct for a sequence of atm_interfaces__srv__ResetFault_Response.
typedef struct atm_interfaces__srv__ResetFault_Response__Sequence
{
  atm_interfaces__srv__ResetFault_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__srv__ResetFault_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  atm_interfaces__srv__ResetFault_Event__request__MAX_SIZE = 1
};
// response
enum
{
  atm_interfaces__srv__ResetFault_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ResetFault in the package atm_interfaces.
typedef struct atm_interfaces__srv__ResetFault_Event
{
  service_msgs__msg__ServiceEventInfo info;
  atm_interfaces__srv__ResetFault_Request__Sequence request;
  atm_interfaces__srv__ResetFault_Response__Sequence response;
} atm_interfaces__srv__ResetFault_Event;

// Struct for a sequence of atm_interfaces__srv__ResetFault_Event.
typedef struct atm_interfaces__srv__ResetFault_Event__Sequence
{
  atm_interfaces__srv__ResetFault_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__srv__ResetFault_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__SRV__DETAIL__RESET_FAULT__STRUCT_H_
