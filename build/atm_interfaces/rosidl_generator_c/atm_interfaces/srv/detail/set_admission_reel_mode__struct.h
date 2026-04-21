// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atm_interfaces:srv/SetAdmissionReelMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/srv/set_admission_reel_mode.h"


#ifndef ATM_INTERFACES__SRV__DETAIL__SET_ADMISSION_REEL_MODE__STRUCT_H_
#define ATM_INTERFACES__SRV__DETAIL__SET_ADMISSION_REEL_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetAdmissionReelMode in the package atm_interfaces.
typedef struct atm_interfaces__srv__SetAdmissionReelMode_Request
{
  rosidl_runtime_c__String mode;
  float speed;
} atm_interfaces__srv__SetAdmissionReelMode_Request;

// Struct for a sequence of atm_interfaces__srv__SetAdmissionReelMode_Request.
typedef struct atm_interfaces__srv__SetAdmissionReelMode_Request__Sequence
{
  atm_interfaces__srv__SetAdmissionReelMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__srv__SetAdmissionReelMode_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetAdmissionReelMode in the package atm_interfaces.
typedef struct atm_interfaces__srv__SetAdmissionReelMode_Response
{
  bool success;
  rosidl_runtime_c__String message;
} atm_interfaces__srv__SetAdmissionReelMode_Response;

// Struct for a sequence of atm_interfaces__srv__SetAdmissionReelMode_Response.
typedef struct atm_interfaces__srv__SetAdmissionReelMode_Response__Sequence
{
  atm_interfaces__srv__SetAdmissionReelMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__srv__SetAdmissionReelMode_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  atm_interfaces__srv__SetAdmissionReelMode_Event__request__MAX_SIZE = 1
};
// response
enum
{
  atm_interfaces__srv__SetAdmissionReelMode_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetAdmissionReelMode in the package atm_interfaces.
typedef struct atm_interfaces__srv__SetAdmissionReelMode_Event
{
  service_msgs__msg__ServiceEventInfo info;
  atm_interfaces__srv__SetAdmissionReelMode_Request__Sequence request;
  atm_interfaces__srv__SetAdmissionReelMode_Response__Sequence response;
} atm_interfaces__srv__SetAdmissionReelMode_Event;

// Struct for a sequence of atm_interfaces__srv__SetAdmissionReelMode_Event.
typedef struct atm_interfaces__srv__SetAdmissionReelMode_Event__Sequence
{
  atm_interfaces__srv__SetAdmissionReelMode_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__srv__SetAdmissionReelMode_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__SRV__DETAIL__SET_ADMISSION_REEL_MODE__STRUCT_H_
