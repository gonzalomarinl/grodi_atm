// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from atm_interfaces:srv/StartPump.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "atm_interfaces/srv/detail/start_pump__functions.h"
#include "atm_interfaces/srv/detail/start_pump__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StartPump_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartPump_Request_type_support_ids_t;

static const _StartPump_Request_type_support_ids_t _StartPump_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StartPump_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartPump_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartPump_Request_type_support_symbol_names_t _StartPump_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, srv, StartPump_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, srv, StartPump_Request)),
  }
};

typedef struct _StartPump_Request_type_support_data_t
{
  void * data[2];
} _StartPump_Request_type_support_data_t;

static _StartPump_Request_type_support_data_t _StartPump_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartPump_Request_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_StartPump_Request_message_typesupport_ids.typesupport_identifier[0],
  &_StartPump_Request_message_typesupport_symbol_names.symbol_name[0],
  &_StartPump_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartPump_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartPump_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__srv__StartPump_Request__get_type_hash,
  &atm_interfaces__srv__StartPump_Request__get_type_description,
  &atm_interfaces__srv__StartPump_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::srv::StartPump_Request>()
{
  return &::atm_interfaces::srv::rosidl_typesupport_cpp::StartPump_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, srv, StartPump_Request)() {
  return get_message_type_support_handle<atm_interfaces::srv::StartPump_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/srv/detail/start_pump__functions.h"
// already included above
// #include "atm_interfaces/srv/detail/start_pump__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StartPump_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartPump_Response_type_support_ids_t;

static const _StartPump_Response_type_support_ids_t _StartPump_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StartPump_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartPump_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartPump_Response_type_support_symbol_names_t _StartPump_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, srv, StartPump_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, srv, StartPump_Response)),
  }
};

typedef struct _StartPump_Response_type_support_data_t
{
  void * data[2];
} _StartPump_Response_type_support_data_t;

static _StartPump_Response_type_support_data_t _StartPump_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartPump_Response_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_StartPump_Response_message_typesupport_ids.typesupport_identifier[0],
  &_StartPump_Response_message_typesupport_symbol_names.symbol_name[0],
  &_StartPump_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartPump_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartPump_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__srv__StartPump_Response__get_type_hash,
  &atm_interfaces__srv__StartPump_Response__get_type_description,
  &atm_interfaces__srv__StartPump_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::srv::StartPump_Response>()
{
  return &::atm_interfaces::srv::rosidl_typesupport_cpp::StartPump_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, srv, StartPump_Response)() {
  return get_message_type_support_handle<atm_interfaces::srv::StartPump_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/srv/detail/start_pump__functions.h"
// already included above
// #include "atm_interfaces/srv/detail/start_pump__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StartPump_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartPump_Event_type_support_ids_t;

static const _StartPump_Event_type_support_ids_t _StartPump_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StartPump_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartPump_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartPump_Event_type_support_symbol_names_t _StartPump_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, srv, StartPump_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, srv, StartPump_Event)),
  }
};

typedef struct _StartPump_Event_type_support_data_t
{
  void * data[2];
} _StartPump_Event_type_support_data_t;

static _StartPump_Event_type_support_data_t _StartPump_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartPump_Event_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_StartPump_Event_message_typesupport_ids.typesupport_identifier[0],
  &_StartPump_Event_message_typesupport_symbol_names.symbol_name[0],
  &_StartPump_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StartPump_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartPump_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__srv__StartPump_Event__get_type_hash,
  &atm_interfaces__srv__StartPump_Event__get_type_description,
  &atm_interfaces__srv__StartPump_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::srv::StartPump_Event>()
{
  return &::atm_interfaces::srv::rosidl_typesupport_cpp::StartPump_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, srv, StartPump_Event)() {
  return get_message_type_support_handle<atm_interfaces::srv::StartPump_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "atm_interfaces/srv/detail/start_pump__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StartPump_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StartPump_type_support_ids_t;

static const _StartPump_type_support_ids_t _StartPump_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StartPump_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StartPump_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StartPump_type_support_symbol_names_t _StartPump_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, srv, StartPump)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, srv, StartPump)),
  }
};

typedef struct _StartPump_type_support_data_t
{
  void * data[2];
} _StartPump_type_support_data_t;

static _StartPump_type_support_data_t _StartPump_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StartPump_service_typesupport_map = {
  2,
  "atm_interfaces",
  &_StartPump_service_typesupport_ids.typesupport_identifier[0],
  &_StartPump_service_typesupport_symbol_names.symbol_name[0],
  &_StartPump_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t StartPump_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StartPump_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<atm_interfaces::srv::StartPump_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<atm_interfaces::srv::StartPump_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<atm_interfaces::srv::StartPump_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<atm_interfaces::srv::StartPump>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<atm_interfaces::srv::StartPump>,
  &atm_interfaces__srv__StartPump__get_type_hash,
  &atm_interfaces__srv__StartPump__get_type_description,
  &atm_interfaces__srv__StartPump__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<atm_interfaces::srv::StartPump>()
{
  return &::atm_interfaces::srv::rosidl_typesupport_cpp::StartPump_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, srv, StartPump)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<atm_interfaces::srv::StartPump>();
}

#ifdef __cplusplus
}
#endif
