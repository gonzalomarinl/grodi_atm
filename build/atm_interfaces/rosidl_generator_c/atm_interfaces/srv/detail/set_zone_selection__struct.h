// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atm_interfaces:srv/SetZoneSelection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/srv/set_zone_selection.h"


#ifndef ATM_INTERFACES__SRV__DETAIL__SET_ZONE_SELECTION__STRUCT_H_
#define ATM_INTERFACES__SRV__DETAIL__SET_ZONE_SELECTION__STRUCT_H_

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

/// Struct defined in srv/SetZoneSelection in the package atm_interfaces.
typedef struct atm_interfaces__srv__SetZoneSelection_Request
{
  rosidl_runtime_c__String mission_id;
  rosidl_runtime_c__String line_id;
} atm_interfaces__srv__SetZoneSelection_Request;

// Struct for a sequence of atm_interfaces__srv__SetZoneSelection_Request.
typedef struct atm_interfaces__srv__SetZoneSelection_Request__Sequence
{
  atm_interfaces__srv__SetZoneSelection_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__srv__SetZoneSelection_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetZoneSelection in the package atm_interfaces.
typedef struct atm_interfaces__srv__SetZoneSelection_Response
{
  bool success;
  rosidl_runtime_c__String message;
} atm_interfaces__srv__SetZoneSelection_Response;

// Struct for a sequence of atm_interfaces__srv__SetZoneSelection_Response.
typedef struct atm_interfaces__srv__SetZoneSelection_Response__Sequence
{
  atm_interfaces__srv__SetZoneSelection_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__srv__SetZoneSelection_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  atm_interfaces__srv__SetZoneSelection_Event__request__MAX_SIZE = 1
};
// response
enum
{
  atm_interfaces__srv__SetZoneSelection_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetZoneSelection in the package atm_interfaces.
typedef struct atm_interfaces__srv__SetZoneSelection_Event
{
  service_msgs__msg__ServiceEventInfo info;
  atm_interfaces__srv__SetZoneSelection_Request__Sequence request;
  atm_interfaces__srv__SetZoneSelection_Response__Sequence response;
} atm_interfaces__srv__SetZoneSelection_Event;

// Struct for a sequence of atm_interfaces__srv__SetZoneSelection_Event.
typedef struct atm_interfaces__srv__SetZoneSelection_Event__Sequence
{
  atm_interfaces__srv__SetZoneSelection_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__srv__SetZoneSelection_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__SRV__DETAIL__SET_ZONE_SELECTION__STRUCT_H_
