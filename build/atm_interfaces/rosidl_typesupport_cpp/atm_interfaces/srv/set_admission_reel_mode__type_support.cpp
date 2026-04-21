// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from atm_interfaces:srv/SetAdmissionReelMode.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "atm_interfaces/srv/detail/set_admission_reel_mode__functions.h"
#include "atm_interfaces/srv/detail/set_admission_reel_mode__struct.hpp"
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

typedef struct _SetAdmissionReelMode_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAdmissionReelMode_Request_type_support_ids_t;

static const _SetAdmissionReelMode_Request_type_support_ids_t _SetAdmissionReelMode_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetAdmissionReelMode_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAdmissionReelMode_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAdmissionReelMode_Request_type_support_symbol_names_t _SetAdmissionReelMode_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, srv, SetAdmissionReelMode_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, srv, SetAdmissionReelMode_Request)),
  }
};

typedef struct _SetAdmissionReelMode_Request_type_support_data_t
{
  void * data[2];
} _SetAdmissionReelMode_Request_type_support_data_t;

static _SetAdmissionReelMode_Request_type_support_data_t _SetAdmissionReelMode_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAdmissionReelMode_Request_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_SetAdmissionReelMode_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetAdmissionReelMode_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetAdmissionReelMode_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAdmissionReelMode_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAdmissionReelMode_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__srv__SetAdmissionReelMode_Request__get_type_hash,
  &atm_interfaces__srv__SetAdmissionReelMode_Request__get_type_description,
  &atm_interfaces__srv__SetAdmissionReelMode_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::srv::SetAdmissionReelMode_Request>()
{
  return &::atm_interfaces::srv::rosidl_typesupport_cpp::SetAdmissionReelMode_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, srv, SetAdmissionReelMode_Request)() {
  return get_message_type_support_handle<atm_interfaces::srv::SetAdmissionReelMode_Request>();
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
// #include "atm_interfaces/srv/detail/set_admission_reel_mode__functions.h"
// already included above
// #include "atm_interfaces/srv/detail/set_admission_reel_mode__struct.hpp"
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

typedef struct _SetAdmissionReelMode_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAdmissionReelMode_Response_type_support_ids_t;

static const _SetAdmissionReelMode_Response_type_support_ids_t _SetAdmissionReelMode_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetAdmissionReelMode_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAdmissionReelMode_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAdmissionReelMode_Response_type_support_symbol_names_t _SetAdmissionReelMode_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, srv, SetAdmissionReelMode_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, srv, SetAdmissionReelMode_Response)),
  }
};

typedef struct _SetAdmissionReelMode_Response_type_support_data_t
{
  void * data[2];
} _SetAdmissionReelMode_Response_type_support_data_t;

static _SetAdmissionReelMode_Response_type_support_data_t _SetAdmissionReelMode_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAdmissionReelMode_Response_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_SetAdmissionReelMode_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetAdmissionReelMode_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetAdmissionReelMode_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAdmissionReelMode_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAdmissionReelMode_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__srv__SetAdmissionReelMode_Response__get_type_hash,
  &atm_interfaces__srv__SetAdmissionReelMode_Response__get_type_description,
  &atm_interfaces__srv__SetAdmissionReelMode_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::srv::SetAdmissionReelMode_Response>()
{
  return &::atm_interfaces::srv::rosidl_typesupport_cpp::SetAdmissionReelMode_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, srv, SetAdmissionReelMode_Response)() {
  return get_message_type_support_handle<atm_interfaces::srv::SetAdmissionReelMode_Response>();
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
// #include "atm_interfaces/srv/detail/set_admission_reel_mode__functions.h"
// already included above
// #include "atm_interfaces/srv/detail/set_admission_reel_mode__struct.hpp"
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

typedef struct _SetAdmissionReelMode_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAdmissionReelMode_Event_type_support_ids_t;

static const _SetAdmissionReelMode_Event_type_support_ids_t _SetAdmissionReelMode_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetAdmissionReelMode_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAdmissionReelMode_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAdmissionReelMode_Event_type_support_symbol_names_t _SetAdmissionReelMode_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, srv, SetAdmissionReelMode_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, srv, SetAdmissionReelMode_Event)),
  }
};

typedef struct _SetAdmissionReelMode_Event_type_support_data_t
{
  void * data[2];
} _SetAdmissionReelMode_Event_type_support_data_t;

static _SetAdmissionReelMode_Event_type_support_data_t _SetAdmissionReelMode_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAdmissionReelMode_Event_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_SetAdmissionReelMode_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetAdmissionReelMode_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetAdmissionReelMode_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetAdmissionReelMode_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAdmissionReelMode_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__srv__SetAdmissionReelMode_Event__get_type_hash,
  &atm_interfaces__srv__SetAdmissionReelMode_Event__get_type_description,
  &atm_interfaces__srv__SetAdmissionReelMode_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::srv::SetAdmissionReelMode_Event>()
{
  return &::atm_interfaces::srv::rosidl_typesupport_cpp::SetAdmissionReelMode_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, srv, SetAdmissionReelMode_Event)() {
  return get_message_type_support_handle<atm_interfaces::srv::SetAdmissionReelMode_Event>();
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
// #include "atm_interfaces/srv/detail/set_admission_reel_mode__struct.hpp"
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

typedef struct _SetAdmissionReelMode_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetAdmissionReelMode_type_support_ids_t;

static const _SetAdmissionReelMode_type_support_ids_t _SetAdmissionReelMode_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetAdmissionReelMode_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetAdmissionReelMode_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetAdmissionReelMode_type_support_symbol_names_t _SetAdmissionReelMode_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, srv, SetAdmissionReelMode)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, srv, SetAdmissionReelMode)),
  }
};

typedef struct _SetAdmissionReelMode_type_support_data_t
{
  void * data[2];
} _SetAdmissionReelMode_type_support_data_t;

static _SetAdmissionReelMode_type_support_data_t _SetAdmissionReelMode_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetAdmissionReelMode_service_typesupport_map = {
  2,
  "atm_interfaces",
  &_SetAdmissionReelMode_service_typesupport_ids.typesupport_identifier[0],
  &_SetAdmissionReelMode_service_typesupport_symbol_names.symbol_name[0],
  &_SetAdmissionReelMode_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetAdmissionReelMode_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetAdmissionReelMode_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<atm_interfaces::srv::SetAdmissionReelMode_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<atm_interfaces::srv::SetAdmissionReelMode_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<atm_interfaces::srv::SetAdmissionReelMode_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<atm_interfaces::srv::SetAdmissionReelMode>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<atm_interfaces::srv::SetAdmissionReelMode>,
  &atm_interfaces__srv__SetAdmissionReelMode__get_type_hash,
  &atm_interfaces__srv__SetAdmissionReelMode__get_type_description,
  &atm_interfaces__srv__SetAdmissionReelMode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<atm_interfaces::srv::SetAdmissionReelMode>()
{
  return &::atm_interfaces::srv::rosidl_typesupport_cpp::SetAdmissionReelMode_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, srv, SetAdmissionReelMode)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<atm_interfaces::srv::SetAdmissionReelMode>();
}

#ifdef __cplusplus
}
#endif
