// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from atm_interfaces:srv/ResetFault.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "atm_interfaces/srv/detail/reset_fault__struct.h"
#include "atm_interfaces/srv/detail/reset_fault__type_support.h"
#include "atm_interfaces/srv/detail/reset_fault__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetFault_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetFault_Request_type_support_ids_t;

static const _ResetFault_Request_type_support_ids_t _ResetFault_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetFault_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetFault_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetFault_Request_type_support_symbol_names_t _ResetFault_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, srv, ResetFault_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, srv, ResetFault_Request)),
  }
};

typedef struct _ResetFault_Request_type_support_data_t
{
  void * data[2];
} _ResetFault_Request_type_support_data_t;

static _ResetFault_Request_type_support_data_t _ResetFault_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetFault_Request_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_ResetFault_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ResetFault_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ResetFault_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetFault_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetFault_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &atm_interfaces__srv__ResetFault_Request__get_type_hash,
  &atm_interfaces__srv__ResetFault_Request__get_type_description,
  &atm_interfaces__srv__ResetFault_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, srv, ResetFault_Request)() {
  return &::atm_interfaces::srv::rosidl_typesupport_c::ResetFault_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/srv/detail/reset_fault__struct.h"
// already included above
// #include "atm_interfaces/srv/detail/reset_fault__type_support.h"
// already included above
// #include "atm_interfaces/srv/detail/reset_fault__functions.h"
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

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetFault_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetFault_Response_type_support_ids_t;

static const _ResetFault_Response_type_support_ids_t _ResetFault_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetFault_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetFault_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetFault_Response_type_support_symbol_names_t _ResetFault_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, srv, ResetFault_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, srv, ResetFault_Response)),
  }
};

typedef struct _ResetFault_Response_type_support_data_t
{
  void * data[2];
} _ResetFault_Response_type_support_data_t;

static _ResetFault_Response_type_support_data_t _ResetFault_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetFault_Response_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_ResetFault_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ResetFault_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ResetFault_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetFault_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetFault_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &atm_interfaces__srv__ResetFault_Response__get_type_hash,
  &atm_interfaces__srv__ResetFault_Response__get_type_description,
  &atm_interfaces__srv__ResetFault_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, srv, ResetFault_Response)() {
  return &::atm_interfaces::srv::rosidl_typesupport_c::ResetFault_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/srv/detail/reset_fault__struct.h"
// already included above
// #include "atm_interfaces/srv/detail/reset_fault__type_support.h"
// already included above
// #include "atm_interfaces/srv/detail/reset_fault__functions.h"
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

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetFault_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetFault_Event_type_support_ids_t;

static const _ResetFault_Event_type_support_ids_t _ResetFault_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetFault_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetFault_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetFault_Event_type_support_symbol_names_t _ResetFault_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, srv, ResetFault_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, srv, ResetFault_Event)),
  }
};

typedef struct _ResetFault_Event_type_support_data_t
{
  void * data[2];
} _ResetFault_Event_type_support_data_t;

static _ResetFault_Event_type_support_data_t _ResetFault_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetFault_Event_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_ResetFault_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ResetFault_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ResetFault_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetFault_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetFault_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &atm_interfaces__srv__ResetFault_Event__get_type_hash,
  &atm_interfaces__srv__ResetFault_Event__get_type_description,
  &atm_interfaces__srv__ResetFault_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, srv, ResetFault_Event)() {
  return &::atm_interfaces::srv::rosidl_typesupport_c::ResetFault_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "atm_interfaces/srv/detail/reset_fault__type_support.h"
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

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ResetFault_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetFault_type_support_ids_t;

static const _ResetFault_type_support_ids_t _ResetFault_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetFault_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetFault_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetFault_type_support_symbol_names_t _ResetFault_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, srv, ResetFault)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, srv, ResetFault)),
  }
};

typedef struct _ResetFault_type_support_data_t
{
  void * data[2];
} _ResetFault_type_support_data_t;

static _ResetFault_type_support_data_t _ResetFault_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetFault_service_typesupport_map = {
  2,
  "atm_interfaces",
  &_ResetFault_service_typesupport_ids.typesupport_identifier[0],
  &_ResetFault_service_typesupport_symbol_names.symbol_name[0],
  &_ResetFault_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ResetFault_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetFault_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ResetFault_Request_message_type_support_handle,
  &ResetFault_Response_message_type_support_handle,
  &ResetFault_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    atm_interfaces,
    srv,
    ResetFault
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    atm_interfaces,
    srv,
    ResetFault
  ),
  &atm_interfaces__srv__ResetFault__get_type_hash,
  &atm_interfaces__srv__ResetFault__get_type_description,
  &atm_interfaces__srv__ResetFault__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace atm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, atm_interfaces, srv, ResetFault)() {
  return &::atm_interfaces::srv::rosidl_typesupport_c::ResetFault_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
