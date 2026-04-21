// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from atm_interfaces:action/NavigateToStop.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "atm_interfaces/action/detail/navigate_to_stop__struct.h"
#include "atm_interfaces/action/detail/navigate_to_stop__type_support.h"
#include "atm_interfaces/action/detail/navigate_to_stop__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateToStop_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToStop_Goal_type_support_ids_t;

static const _NavigateToStop_Goal_type_support_ids_t _NavigateToStop_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateToStop_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToStop_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToStop_Goal_type_support_symbol_names_t _NavigateToStop_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, action, NavigateToStop_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, action, NavigateToStop_Goal)),
  }
};

typedef struct _NavigateToStop_Goal_type_support_data_t
{
  void * data[2];
} _NavigateToStop_Goal_type_support_data_t;

static _NavigateToStop_Goal_type_support_data_t _NavigateToStop_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToStop_Goal_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_NavigateToStop_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToStop_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToStop_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToStop_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToStop_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &atm_interfaces__action__NavigateToStop_Goal__get_type_hash,
  &atm_interfaces__action__NavigateToStop_Goal__get_type_description,
  &atm_interfaces__action__NavigateToStop_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_Goal)() {
  return &::atm_interfaces::action::rosidl_typesupport_c::NavigateToStop_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__type_support.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateToStop_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToStop_Result_type_support_ids_t;

static const _NavigateToStop_Result_type_support_ids_t _NavigateToStop_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateToStop_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToStop_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToStop_Result_type_support_symbol_names_t _NavigateToStop_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, action, NavigateToStop_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, action, NavigateToStop_Result)),
  }
};

typedef struct _NavigateToStop_Result_type_support_data_t
{
  void * data[2];
} _NavigateToStop_Result_type_support_data_t;

static _NavigateToStop_Result_type_support_data_t _NavigateToStop_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToStop_Result_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_NavigateToStop_Result_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToStop_Result_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToStop_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToStop_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToStop_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &atm_interfaces__action__NavigateToStop_Result__get_type_hash,
  &atm_interfaces__action__NavigateToStop_Result__get_type_description,
  &atm_interfaces__action__NavigateToStop_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_Result)() {
  return &::atm_interfaces::action::rosidl_typesupport_c::NavigateToStop_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__type_support.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateToStop_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToStop_Feedback_type_support_ids_t;

static const _NavigateToStop_Feedback_type_support_ids_t _NavigateToStop_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateToStop_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToStop_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToStop_Feedback_type_support_symbol_names_t _NavigateToStop_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, action, NavigateToStop_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, action, NavigateToStop_Feedback)),
  }
};

typedef struct _NavigateToStop_Feedback_type_support_data_t
{
  void * data[2];
} _NavigateToStop_Feedback_type_support_data_t;

static _NavigateToStop_Feedback_type_support_data_t _NavigateToStop_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToStop_Feedback_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_NavigateToStop_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToStop_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToStop_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToStop_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToStop_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &atm_interfaces__action__NavigateToStop_Feedback__get_type_hash,
  &atm_interfaces__action__NavigateToStop_Feedback__get_type_description,
  &atm_interfaces__action__NavigateToStop_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_Feedback)() {
  return &::atm_interfaces::action::rosidl_typesupport_c::NavigateToStop_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__type_support.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateToStop_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToStop_SendGoal_Request_type_support_ids_t;

static const _NavigateToStop_SendGoal_Request_type_support_ids_t _NavigateToStop_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateToStop_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToStop_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToStop_SendGoal_Request_type_support_symbol_names_t _NavigateToStop_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, action, NavigateToStop_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, action, NavigateToStop_SendGoal_Request)),
  }
};

typedef struct _NavigateToStop_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _NavigateToStop_SendGoal_Request_type_support_data_t;

static _NavigateToStop_SendGoal_Request_type_support_data_t _NavigateToStop_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToStop_SendGoal_Request_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_NavigateToStop_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToStop_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToStop_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToStop_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToStop_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &atm_interfaces__action__NavigateToStop_SendGoal_Request__get_type_hash,
  &atm_interfaces__action__NavigateToStop_SendGoal_Request__get_type_description,
  &atm_interfaces__action__NavigateToStop_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_SendGoal_Request)() {
  return &::atm_interfaces::action::rosidl_typesupport_c::NavigateToStop_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__type_support.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateToStop_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToStop_SendGoal_Response_type_support_ids_t;

static const _NavigateToStop_SendGoal_Response_type_support_ids_t _NavigateToStop_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateToStop_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToStop_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToStop_SendGoal_Response_type_support_symbol_names_t _NavigateToStop_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, action, NavigateToStop_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, action, NavigateToStop_SendGoal_Response)),
  }
};

typedef struct _NavigateToStop_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _NavigateToStop_SendGoal_Response_type_support_data_t;

static _NavigateToStop_SendGoal_Response_type_support_data_t _NavigateToStop_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToStop_SendGoal_Response_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_NavigateToStop_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToStop_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToStop_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToStop_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToStop_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &atm_interfaces__action__NavigateToStop_SendGoal_Response__get_type_hash,
  &atm_interfaces__action__NavigateToStop_SendGoal_Response__get_type_description,
  &atm_interfaces__action__NavigateToStop_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_SendGoal_Response)() {
  return &::atm_interfaces::action::rosidl_typesupport_c::NavigateToStop_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__type_support.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateToStop_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToStop_SendGoal_Event_type_support_ids_t;

static const _NavigateToStop_SendGoal_Event_type_support_ids_t _NavigateToStop_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateToStop_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToStop_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToStop_SendGoal_Event_type_support_symbol_names_t _NavigateToStop_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, action, NavigateToStop_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, action, NavigateToStop_SendGoal_Event)),
  }
};

typedef struct _NavigateToStop_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _NavigateToStop_SendGoal_Event_type_support_data_t;

static _NavigateToStop_SendGoal_Event_type_support_data_t _NavigateToStop_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToStop_SendGoal_Event_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_NavigateToStop_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToStop_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToStop_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToStop_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToStop_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &atm_interfaces__action__NavigateToStop_SendGoal_Event__get_type_hash,
  &atm_interfaces__action__NavigateToStop_SendGoal_Event__get_type_description,
  &atm_interfaces__action__NavigateToStop_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_SendGoal_Event)() {
  return &::atm_interfaces::action::rosidl_typesupport_c::NavigateToStop_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _NavigateToStop_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToStop_SendGoal_type_support_ids_t;

static const _NavigateToStop_SendGoal_type_support_ids_t _NavigateToStop_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateToStop_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToStop_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToStop_SendGoal_type_support_symbol_names_t _NavigateToStop_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, action, NavigateToStop_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, action, NavigateToStop_SendGoal)),
  }
};

typedef struct _NavigateToStop_SendGoal_type_support_data_t
{
  void * data[2];
} _NavigateToStop_SendGoal_type_support_data_t;

static _NavigateToStop_SendGoal_type_support_data_t _NavigateToStop_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToStop_SendGoal_service_typesupport_map = {
  2,
  "atm_interfaces",
  &_NavigateToStop_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_NavigateToStop_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_NavigateToStop_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavigateToStop_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToStop_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &NavigateToStop_SendGoal_Request_message_type_support_handle,
  &NavigateToStop_SendGoal_Response_message_type_support_handle,
  &NavigateToStop_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    atm_interfaces,
    action,
    NavigateToStop_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    atm_interfaces,
    action,
    NavigateToStop_SendGoal
  ),
  &atm_interfaces__action__NavigateToStop_SendGoal__get_type_hash,
  &atm_interfaces__action__NavigateToStop_SendGoal__get_type_description,
  &atm_interfaces__action__NavigateToStop_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_SendGoal)() {
  return &::atm_interfaces::action::rosidl_typesupport_c::NavigateToStop_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__type_support.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateToStop_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToStop_GetResult_Request_type_support_ids_t;

static const _NavigateToStop_GetResult_Request_type_support_ids_t _NavigateToStop_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateToStop_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToStop_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToStop_GetResult_Request_type_support_symbol_names_t _NavigateToStop_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, action, NavigateToStop_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, action, NavigateToStop_GetResult_Request)),
  }
};

typedef struct _NavigateToStop_GetResult_Request_type_support_data_t
{
  void * data[2];
} _NavigateToStop_GetResult_Request_type_support_data_t;

static _NavigateToStop_GetResult_Request_type_support_data_t _NavigateToStop_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToStop_GetResult_Request_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_NavigateToStop_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToStop_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToStop_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToStop_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToStop_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &atm_interfaces__action__NavigateToStop_GetResult_Request__get_type_hash,
  &atm_interfaces__action__NavigateToStop_GetResult_Request__get_type_description,
  &atm_interfaces__action__NavigateToStop_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_GetResult_Request)() {
  return &::atm_interfaces::action::rosidl_typesupport_c::NavigateToStop_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__type_support.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateToStop_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToStop_GetResult_Response_type_support_ids_t;

static const _NavigateToStop_GetResult_Response_type_support_ids_t _NavigateToStop_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateToStop_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToStop_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToStop_GetResult_Response_type_support_symbol_names_t _NavigateToStop_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, action, NavigateToStop_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, action, NavigateToStop_GetResult_Response)),
  }
};

typedef struct _NavigateToStop_GetResult_Response_type_support_data_t
{
  void * data[2];
} _NavigateToStop_GetResult_Response_type_support_data_t;

static _NavigateToStop_GetResult_Response_type_support_data_t _NavigateToStop_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToStop_GetResult_Response_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_NavigateToStop_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToStop_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToStop_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToStop_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToStop_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &atm_interfaces__action__NavigateToStop_GetResult_Response__get_type_hash,
  &atm_interfaces__action__NavigateToStop_GetResult_Response__get_type_description,
  &atm_interfaces__action__NavigateToStop_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_GetResult_Response)() {
  return &::atm_interfaces::action::rosidl_typesupport_c::NavigateToStop_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__type_support.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateToStop_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToStop_GetResult_Event_type_support_ids_t;

static const _NavigateToStop_GetResult_Event_type_support_ids_t _NavigateToStop_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateToStop_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToStop_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToStop_GetResult_Event_type_support_symbol_names_t _NavigateToStop_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, action, NavigateToStop_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, action, NavigateToStop_GetResult_Event)),
  }
};

typedef struct _NavigateToStop_GetResult_Event_type_support_data_t
{
  void * data[2];
} _NavigateToStop_GetResult_Event_type_support_data_t;

static _NavigateToStop_GetResult_Event_type_support_data_t _NavigateToStop_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToStop_GetResult_Event_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_NavigateToStop_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToStop_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToStop_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToStop_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToStop_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &atm_interfaces__action__NavigateToStop_GetResult_Event__get_type_hash,
  &atm_interfaces__action__NavigateToStop_GetResult_Event__get_type_description,
  &atm_interfaces__action__NavigateToStop_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_GetResult_Event)() {
  return &::atm_interfaces::action::rosidl_typesupport_c::NavigateToStop_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _NavigateToStop_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToStop_GetResult_type_support_ids_t;

static const _NavigateToStop_GetResult_type_support_ids_t _NavigateToStop_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateToStop_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToStop_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToStop_GetResult_type_support_symbol_names_t _NavigateToStop_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, action, NavigateToStop_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, action, NavigateToStop_GetResult)),
  }
};

typedef struct _NavigateToStop_GetResult_type_support_data_t
{
  void * data[2];
} _NavigateToStop_GetResult_type_support_data_t;

static _NavigateToStop_GetResult_type_support_data_t _NavigateToStop_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToStop_GetResult_service_typesupport_map = {
  2,
  "atm_interfaces",
  &_NavigateToStop_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_NavigateToStop_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_NavigateToStop_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavigateToStop_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToStop_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &NavigateToStop_GetResult_Request_message_type_support_handle,
  &NavigateToStop_GetResult_Response_message_type_support_handle,
  &NavigateToStop_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    atm_interfaces,
    action,
    NavigateToStop_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    atm_interfaces,
    action,
    NavigateToStop_GetResult
  ),
  &atm_interfaces__action__NavigateToStop_GetResult__get_type_hash,
  &atm_interfaces__action__NavigateToStop_GetResult__get_type_description,
  &atm_interfaces__action__NavigateToStop_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_GetResult)() {
  return &::atm_interfaces::action::rosidl_typesupport_c::NavigateToStop_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__struct.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__type_support.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NavigateToStop_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavigateToStop_FeedbackMessage_type_support_ids_t;

static const _NavigateToStop_FeedbackMessage_type_support_ids_t _NavigateToStop_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _NavigateToStop_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavigateToStop_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavigateToStop_FeedbackMessage_type_support_symbol_names_t _NavigateToStop_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, action, NavigateToStop_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, action, NavigateToStop_FeedbackMessage)),
  }
};

typedef struct _NavigateToStop_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _NavigateToStop_FeedbackMessage_type_support_data_t;

static _NavigateToStop_FeedbackMessage_type_support_data_t _NavigateToStop_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavigateToStop_FeedbackMessage_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_NavigateToStop_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_NavigateToStop_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_NavigateToStop_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavigateToStop_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavigateToStop_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &atm_interfaces__action__NavigateToStop_FeedbackMessage__get_type_hash,
  &atm_interfaces__action__NavigateToStop_FeedbackMessage__get_type_description,
  &atm_interfaces__action__NavigateToStop_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_FeedbackMessage)() {
  return &::atm_interfaces::action::rosidl_typesupport_c::NavigateToStop_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "atm_interfaces/action/navigate_to_stop.h"
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__type_support.h"

static rosidl_action_type_support_t _atm_interfaces__action__NavigateToStop__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &atm_interfaces__action__NavigateToStop__get_type_hash,
  &atm_interfaces__action__NavigateToStop__get_type_description,
  &atm_interfaces__action__NavigateToStop__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, atm_interfaces, action, NavigateToStop)()
{
  // Thread-safe by always writing the same values to the static struct
  _atm_interfaces__action__NavigateToStop__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_SendGoal)();
  _atm_interfaces__action__NavigateToStop__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_GetResult)();
  _atm_interfaces__action__NavigateToStop__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _atm_interfaces__action__NavigateToStop__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, atm_interfaces, action, NavigateToStop_FeedbackMessage)();
  _atm_interfaces__action__NavigateToStop__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_atm_interfaces__action__NavigateToStop__typesupport_c;
}

#ifdef __cplusplus
}
#endif
