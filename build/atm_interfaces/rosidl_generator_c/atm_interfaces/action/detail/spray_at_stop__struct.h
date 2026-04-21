// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from atm_interfaces:action/SprayAtStop.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/action/spray_at_stop.h"


#ifndef ATM_INTERFACES__ACTION__DETAIL__SPRAY_AT_STOP__STRUCT_H_
#define ATM_INTERFACES__ACTION__DETAIL__SPRAY_AT_STOP__STRUCT_H_

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

/// Struct defined in action/SprayAtStop in the package atm_interfaces.
typedef struct atm_interfaces__action__SprayAtStop_Goal
{
  rosidl_runtime_c__String mission_id;
  rosidl_runtime_c__String line_id;
  uint32_t stop_index;
} atm_interfaces__action__SprayAtStop_Goal;

// Struct for a sequence of atm_interfaces__action__SprayAtStop_Goal.
typedef struct atm_interfaces__action__SprayAtStop_Goal__Sequence
{
  atm_interfaces__action__SprayAtStop_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__action__SprayAtStop_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SprayAtStop in the package atm_interfaces.
typedef struct atm_interfaces__action__SprayAtStop_Result
{
  bool success;
  rosidl_runtime_c__String message;
} atm_interfaces__action__SprayAtStop_Result;

// Struct for a sequence of atm_interfaces__action__SprayAtStop_Result.
typedef struct atm_interfaces__action__SprayAtStop_Result__Sequence
{
  atm_interfaces__action__SprayAtStop_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__action__SprayAtStop_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'phase'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SprayAtStop in the package atm_interfaces.
typedef struct atm_interfaces__action__SprayAtStop_Feedback
{
  rosidl_runtime_c__String phase;
} atm_interfaces__action__SprayAtStop_Feedback;

// Struct for a sequence of atm_interfaces__action__SprayAtStop_Feedback.
typedef struct atm_interfaces__action__SprayAtStop_Feedback__Sequence
{
  atm_interfaces__action__SprayAtStop_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__action__SprayAtStop_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "atm_interfaces/action/detail/spray_at_stop__struct.h"

/// Struct defined in action/SprayAtStop in the package atm_interfaces.
typedef struct atm_interfaces__action__SprayAtStop_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  atm_interfaces__action__SprayAtStop_Goal goal;
} atm_interfaces__action__SprayAtStop_SendGoal_Request;

// Struct for a sequence of atm_interfaces__action__SprayAtStop_SendGoal_Request.
typedef struct atm_interfaces__action__SprayAtStop_SendGoal_Request__Sequence
{
  atm_interfaces__action__SprayAtStop_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__action__SprayAtStop_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SprayAtStop in the package atm_interfaces.
typedef struct atm_interfaces__action__SprayAtStop_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} atm_interfaces__action__SprayAtStop_SendGoal_Response;

// Struct for a sequence of atm_interfaces__action__SprayAtStop_SendGoal_Response.
typedef struct atm_interfaces__action__SprayAtStop_SendGoal_Response__Sequence
{
  atm_interfaces__action__SprayAtStop_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__action__SprayAtStop_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  atm_interfaces__action__SprayAtStop_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  atm_interfaces__action__SprayAtStop_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SprayAtStop in the package atm_interfaces.
typedef struct atm_interfaces__action__SprayAtStop_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  atm_interfaces__action__SprayAtStop_SendGoal_Request__Sequence request;
  atm_interfaces__action__SprayAtStop_SendGoal_Response__Sequence response;
} atm_interfaces__action__SprayAtStop_SendGoal_Event;

// Struct for a sequence of atm_interfaces__action__SprayAtStop_SendGoal_Event.
typedef struct atm_interfaces__action__SprayAtStop_SendGoal_Event__Sequence
{
  atm_interfaces__action__SprayAtStop_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__action__SprayAtStop_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SprayAtStop in the package atm_interfaces.
typedef struct atm_interfaces__action__SprayAtStop_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} atm_interfaces__action__SprayAtStop_GetResult_Request;

// Struct for a sequence of atm_interfaces__action__SprayAtStop_GetResult_Request.
typedef struct atm_interfaces__action__SprayAtStop_GetResult_Request__Sequence
{
  atm_interfaces__action__SprayAtStop_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__action__SprayAtStop_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "atm_interfaces/action/detail/spray_at_stop__struct.h"

/// Struct defined in action/SprayAtStop in the package atm_interfaces.
typedef struct atm_interfaces__action__SprayAtStop_GetResult_Response
{
  int8_t status;
  atm_interfaces__action__SprayAtStop_Result result;
} atm_interfaces__action__SprayAtStop_GetResult_Response;

// Struct for a sequence of atm_interfaces__action__SprayAtStop_GetResult_Response.
typedef struct atm_interfaces__action__SprayAtStop_GetResult_Response__Sequence
{
  atm_interfaces__action__SprayAtStop_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__action__SprayAtStop_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  atm_interfaces__action__SprayAtStop_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  atm_interfaces__action__SprayAtStop_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SprayAtStop in the package atm_interfaces.
typedef struct atm_interfaces__action__SprayAtStop_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  atm_interfaces__action__SprayAtStop_GetResult_Request__Sequence request;
  atm_interfaces__action__SprayAtStop_GetResult_Response__Sequence response;
} atm_interfaces__action__SprayAtStop_GetResult_Event;

// Struct for a sequence of atm_interfaces__action__SprayAtStop_GetResult_Event.
typedef struct atm_interfaces__action__SprayAtStop_GetResult_Event__Sequence
{
  atm_interfaces__action__SprayAtStop_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__action__SprayAtStop_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "atm_interfaces/action/detail/spray_at_stop__struct.h"

/// Struct defined in action/SprayAtStop in the package atm_interfaces.
typedef struct atm_interfaces__action__SprayAtStop_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  atm_interfaces__action__SprayAtStop_Feedback feedback;
} atm_interfaces__action__SprayAtStop_FeedbackMessage;

// Struct for a sequence of atm_interfaces__action__SprayAtStop_FeedbackMessage.
typedef struct atm_interfaces__action__SprayAtStop_FeedbackMessage__Sequence
{
  atm_interfaces__action__SprayAtStop_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} atm_interfaces__action__SprayAtStop_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__ACTION__DETAIL__SPRAY_AT_STOP__STRUCT_H_
