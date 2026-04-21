// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from atm_interfaces:action/RunPurge.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "atm_interfaces/action/detail/run_purge__functions.h"
#include "atm_interfaces/action/detail/run_purge__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunPurge_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPurge_Goal_type_support_ids_t;

static const _RunPurge_Goal_type_support_ids_t _RunPurge_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunPurge_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPurge_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPurge_Goal_type_support_symbol_names_t _RunPurge_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, action, RunPurge_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, action, RunPurge_Goal)),
  }
};

typedef struct _RunPurge_Goal_type_support_data_t
{
  void * data[2];
} _RunPurge_Goal_type_support_data_t;

static _RunPurge_Goal_type_support_data_t _RunPurge_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPurge_Goal_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_RunPurge_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_RunPurge_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_RunPurge_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPurge_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPurge_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__action__RunPurge_Goal__get_type_hash,
  &atm_interfaces__action__RunPurge_Goal__get_type_description,
  &atm_interfaces__action__RunPurge_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::action::RunPurge_Goal>()
{
  return &::atm_interfaces::action::rosidl_typesupport_cpp::RunPurge_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, action, RunPurge_Goal)() {
  return get_message_type_support_handle<atm_interfaces::action::RunPurge_Goal>();
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
// #include "atm_interfaces/action/detail/run_purge__functions.h"
// already included above
// #include "atm_interfaces/action/detail/run_purge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunPurge_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPurge_Result_type_support_ids_t;

static const _RunPurge_Result_type_support_ids_t _RunPurge_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunPurge_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPurge_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPurge_Result_type_support_symbol_names_t _RunPurge_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, action, RunPurge_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, action, RunPurge_Result)),
  }
};

typedef struct _RunPurge_Result_type_support_data_t
{
  void * data[2];
} _RunPurge_Result_type_support_data_t;

static _RunPurge_Result_type_support_data_t _RunPurge_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPurge_Result_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_RunPurge_Result_message_typesupport_ids.typesupport_identifier[0],
  &_RunPurge_Result_message_typesupport_symbol_names.symbol_name[0],
  &_RunPurge_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPurge_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPurge_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__action__RunPurge_Result__get_type_hash,
  &atm_interfaces__action__RunPurge_Result__get_type_description,
  &atm_interfaces__action__RunPurge_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::action::RunPurge_Result>()
{
  return &::atm_interfaces::action::rosidl_typesupport_cpp::RunPurge_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, action, RunPurge_Result)() {
  return get_message_type_support_handle<atm_interfaces::action::RunPurge_Result>();
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
// #include "atm_interfaces/action/detail/run_purge__functions.h"
// already included above
// #include "atm_interfaces/action/detail/run_purge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunPurge_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPurge_Feedback_type_support_ids_t;

static const _RunPurge_Feedback_type_support_ids_t _RunPurge_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunPurge_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPurge_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPurge_Feedback_type_support_symbol_names_t _RunPurge_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, action, RunPurge_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, action, RunPurge_Feedback)),
  }
};

typedef struct _RunPurge_Feedback_type_support_data_t
{
  void * data[2];
} _RunPurge_Feedback_type_support_data_t;

static _RunPurge_Feedback_type_support_data_t _RunPurge_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPurge_Feedback_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_RunPurge_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_RunPurge_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_RunPurge_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPurge_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPurge_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__action__RunPurge_Feedback__get_type_hash,
  &atm_interfaces__action__RunPurge_Feedback__get_type_description,
  &atm_interfaces__action__RunPurge_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::action::RunPurge_Feedback>()
{
  return &::atm_interfaces::action::rosidl_typesupport_cpp::RunPurge_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, action, RunPurge_Feedback)() {
  return get_message_type_support_handle<atm_interfaces::action::RunPurge_Feedback>();
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
// #include "atm_interfaces/action/detail/run_purge__functions.h"
// already included above
// #include "atm_interfaces/action/detail/run_purge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunPurge_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPurge_SendGoal_Request_type_support_ids_t;

static const _RunPurge_SendGoal_Request_type_support_ids_t _RunPurge_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunPurge_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPurge_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPurge_SendGoal_Request_type_support_symbol_names_t _RunPurge_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, action, RunPurge_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, action, RunPurge_SendGoal_Request)),
  }
};

typedef struct _RunPurge_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _RunPurge_SendGoal_Request_type_support_data_t;

static _RunPurge_SendGoal_Request_type_support_data_t _RunPurge_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPurge_SendGoal_Request_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_RunPurge_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RunPurge_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RunPurge_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPurge_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPurge_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__action__RunPurge_SendGoal_Request__get_type_hash,
  &atm_interfaces__action__RunPurge_SendGoal_Request__get_type_description,
  &atm_interfaces__action__RunPurge_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::action::RunPurge_SendGoal_Request>()
{
  return &::atm_interfaces::action::rosidl_typesupport_cpp::RunPurge_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, action, RunPurge_SendGoal_Request)() {
  return get_message_type_support_handle<atm_interfaces::action::RunPurge_SendGoal_Request>();
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
// #include "atm_interfaces/action/detail/run_purge__functions.h"
// already included above
// #include "atm_interfaces/action/detail/run_purge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunPurge_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPurge_SendGoal_Response_type_support_ids_t;

static const _RunPurge_SendGoal_Response_type_support_ids_t _RunPurge_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunPurge_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPurge_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPurge_SendGoal_Response_type_support_symbol_names_t _RunPurge_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, action, RunPurge_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, action, RunPurge_SendGoal_Response)),
  }
};

typedef struct _RunPurge_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _RunPurge_SendGoal_Response_type_support_data_t;

static _RunPurge_SendGoal_Response_type_support_data_t _RunPurge_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPurge_SendGoal_Response_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_RunPurge_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RunPurge_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RunPurge_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPurge_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPurge_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__action__RunPurge_SendGoal_Response__get_type_hash,
  &atm_interfaces__action__RunPurge_SendGoal_Response__get_type_description,
  &atm_interfaces__action__RunPurge_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::action::RunPurge_SendGoal_Response>()
{
  return &::atm_interfaces::action::rosidl_typesupport_cpp::RunPurge_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, action, RunPurge_SendGoal_Response)() {
  return get_message_type_support_handle<atm_interfaces::action::RunPurge_SendGoal_Response>();
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
// #include "atm_interfaces/action/detail/run_purge__functions.h"
// already included above
// #include "atm_interfaces/action/detail/run_purge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunPurge_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPurge_SendGoal_Event_type_support_ids_t;

static const _RunPurge_SendGoal_Event_type_support_ids_t _RunPurge_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunPurge_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPurge_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPurge_SendGoal_Event_type_support_symbol_names_t _RunPurge_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, action, RunPurge_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, action, RunPurge_SendGoal_Event)),
  }
};

typedef struct _RunPurge_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _RunPurge_SendGoal_Event_type_support_data_t;

static _RunPurge_SendGoal_Event_type_support_data_t _RunPurge_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPurge_SendGoal_Event_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_RunPurge_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RunPurge_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RunPurge_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPurge_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPurge_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__action__RunPurge_SendGoal_Event__get_type_hash,
  &atm_interfaces__action__RunPurge_SendGoal_Event__get_type_description,
  &atm_interfaces__action__RunPurge_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::action::RunPurge_SendGoal_Event>()
{
  return &::atm_interfaces::action::rosidl_typesupport_cpp::RunPurge_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, action, RunPurge_SendGoal_Event)() {
  return get_message_type_support_handle<atm_interfaces::action::RunPurge_SendGoal_Event>();
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
// #include "atm_interfaces/action/detail/run_purge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunPurge_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPurge_SendGoal_type_support_ids_t;

static const _RunPurge_SendGoal_type_support_ids_t _RunPurge_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunPurge_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPurge_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPurge_SendGoal_type_support_symbol_names_t _RunPurge_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, action, RunPurge_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, action, RunPurge_SendGoal)),
  }
};

typedef struct _RunPurge_SendGoal_type_support_data_t
{
  void * data[2];
} _RunPurge_SendGoal_type_support_data_t;

static _RunPurge_SendGoal_type_support_data_t _RunPurge_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPurge_SendGoal_service_typesupport_map = {
  2,
  "atm_interfaces",
  &_RunPurge_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_RunPurge_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_RunPurge_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RunPurge_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPurge_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<atm_interfaces::action::RunPurge_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<atm_interfaces::action::RunPurge_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<atm_interfaces::action::RunPurge_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<atm_interfaces::action::RunPurge_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<atm_interfaces::action::RunPurge_SendGoal>,
  &atm_interfaces__action__RunPurge_SendGoal__get_type_hash,
  &atm_interfaces__action__RunPurge_SendGoal__get_type_description,
  &atm_interfaces__action__RunPurge_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<atm_interfaces::action::RunPurge_SendGoal>()
{
  return &::atm_interfaces::action::rosidl_typesupport_cpp::RunPurge_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, action, RunPurge_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<atm_interfaces::action::RunPurge_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/action/detail/run_purge__functions.h"
// already included above
// #include "atm_interfaces/action/detail/run_purge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunPurge_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPurge_GetResult_Request_type_support_ids_t;

static const _RunPurge_GetResult_Request_type_support_ids_t _RunPurge_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunPurge_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPurge_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPurge_GetResult_Request_type_support_symbol_names_t _RunPurge_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, action, RunPurge_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, action, RunPurge_GetResult_Request)),
  }
};

typedef struct _RunPurge_GetResult_Request_type_support_data_t
{
  void * data[2];
} _RunPurge_GetResult_Request_type_support_data_t;

static _RunPurge_GetResult_Request_type_support_data_t _RunPurge_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPurge_GetResult_Request_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_RunPurge_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RunPurge_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RunPurge_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPurge_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPurge_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__action__RunPurge_GetResult_Request__get_type_hash,
  &atm_interfaces__action__RunPurge_GetResult_Request__get_type_description,
  &atm_interfaces__action__RunPurge_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::action::RunPurge_GetResult_Request>()
{
  return &::atm_interfaces::action::rosidl_typesupport_cpp::RunPurge_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, action, RunPurge_GetResult_Request)() {
  return get_message_type_support_handle<atm_interfaces::action::RunPurge_GetResult_Request>();
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
// #include "atm_interfaces/action/detail/run_purge__functions.h"
// already included above
// #include "atm_interfaces/action/detail/run_purge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunPurge_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPurge_GetResult_Response_type_support_ids_t;

static const _RunPurge_GetResult_Response_type_support_ids_t _RunPurge_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunPurge_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPurge_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPurge_GetResult_Response_type_support_symbol_names_t _RunPurge_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, action, RunPurge_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, action, RunPurge_GetResult_Response)),
  }
};

typedef struct _RunPurge_GetResult_Response_type_support_data_t
{
  void * data[2];
} _RunPurge_GetResult_Response_type_support_data_t;

static _RunPurge_GetResult_Response_type_support_data_t _RunPurge_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPurge_GetResult_Response_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_RunPurge_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RunPurge_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RunPurge_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPurge_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPurge_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__action__RunPurge_GetResult_Response__get_type_hash,
  &atm_interfaces__action__RunPurge_GetResult_Response__get_type_description,
  &atm_interfaces__action__RunPurge_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::action::RunPurge_GetResult_Response>()
{
  return &::atm_interfaces::action::rosidl_typesupport_cpp::RunPurge_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, action, RunPurge_GetResult_Response)() {
  return get_message_type_support_handle<atm_interfaces::action::RunPurge_GetResult_Response>();
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
// #include "atm_interfaces/action/detail/run_purge__functions.h"
// already included above
// #include "atm_interfaces/action/detail/run_purge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunPurge_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPurge_GetResult_Event_type_support_ids_t;

static const _RunPurge_GetResult_Event_type_support_ids_t _RunPurge_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunPurge_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPurge_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPurge_GetResult_Event_type_support_symbol_names_t _RunPurge_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, action, RunPurge_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, action, RunPurge_GetResult_Event)),
  }
};

typedef struct _RunPurge_GetResult_Event_type_support_data_t
{
  void * data[2];
} _RunPurge_GetResult_Event_type_support_data_t;

static _RunPurge_GetResult_Event_type_support_data_t _RunPurge_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPurge_GetResult_Event_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_RunPurge_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RunPurge_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RunPurge_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPurge_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPurge_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__action__RunPurge_GetResult_Event__get_type_hash,
  &atm_interfaces__action__RunPurge_GetResult_Event__get_type_description,
  &atm_interfaces__action__RunPurge_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::action::RunPurge_GetResult_Event>()
{
  return &::atm_interfaces::action::rosidl_typesupport_cpp::RunPurge_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, action, RunPurge_GetResult_Event)() {
  return get_message_type_support_handle<atm_interfaces::action::RunPurge_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "atm_interfaces/action/detail/run_purge__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunPurge_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPurge_GetResult_type_support_ids_t;

static const _RunPurge_GetResult_type_support_ids_t _RunPurge_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunPurge_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPurge_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPurge_GetResult_type_support_symbol_names_t _RunPurge_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, action, RunPurge_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, action, RunPurge_GetResult)),
  }
};

typedef struct _RunPurge_GetResult_type_support_data_t
{
  void * data[2];
} _RunPurge_GetResult_type_support_data_t;

static _RunPurge_GetResult_type_support_data_t _RunPurge_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPurge_GetResult_service_typesupport_map = {
  2,
  "atm_interfaces",
  &_RunPurge_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_RunPurge_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_RunPurge_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RunPurge_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPurge_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<atm_interfaces::action::RunPurge_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<atm_interfaces::action::RunPurge_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<atm_interfaces::action::RunPurge_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<atm_interfaces::action::RunPurge_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<atm_interfaces::action::RunPurge_GetResult>,
  &atm_interfaces__action__RunPurge_GetResult__get_type_hash,
  &atm_interfaces__action__RunPurge_GetResult__get_type_description,
  &atm_interfaces__action__RunPurge_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<atm_interfaces::action::RunPurge_GetResult>()
{
  return &::atm_interfaces::action::rosidl_typesupport_cpp::RunPurge_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, action, RunPurge_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<atm_interfaces::action::RunPurge_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "atm_interfaces/action/detail/run_purge__functions.h"
// already included above
// #include "atm_interfaces/action/detail/run_purge__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunPurge_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunPurge_FeedbackMessage_type_support_ids_t;

static const _RunPurge_FeedbackMessage_type_support_ids_t _RunPurge_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunPurge_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunPurge_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunPurge_FeedbackMessage_type_support_symbol_names_t _RunPurge_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, action, RunPurge_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, atm_interfaces, action, RunPurge_FeedbackMessage)),
  }
};

typedef struct _RunPurge_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _RunPurge_FeedbackMessage_type_support_data_t;

static _RunPurge_FeedbackMessage_type_support_data_t _RunPurge_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunPurge_FeedbackMessage_message_typesupport_map = {
  2,
  "atm_interfaces",
  &_RunPurge_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_RunPurge_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_RunPurge_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunPurge_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunPurge_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &atm_interfaces__action__RunPurge_FeedbackMessage__get_type_hash,
  &atm_interfaces__action__RunPurge_FeedbackMessage__get_type_description,
  &atm_interfaces__action__RunPurge_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::action::RunPurge_FeedbackMessage>()
{
  return &::atm_interfaces::action::rosidl_typesupport_cpp::RunPurge_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, action, RunPurge_FeedbackMessage)() {
  return get_message_type_support_handle<atm_interfaces::action::RunPurge_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "atm_interfaces/action/detail/run_purge__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace atm_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t RunPurge_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &atm_interfaces__action__RunPurge__get_type_hash,
  &atm_interfaces__action__RunPurge__get_type_description,
  &atm_interfaces__action__RunPurge__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace atm_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<atm_interfaces::action::RunPurge>()
{
  using ::atm_interfaces::action::rosidl_typesupport_cpp::RunPurge_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  RunPurge_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::atm_interfaces::action::RunPurge::Impl::SendGoalService>();
  RunPurge_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::atm_interfaces::action::RunPurge::Impl::GetResultService>();
  RunPurge_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::atm_interfaces::action::RunPurge::Impl::CancelGoalService>();
  RunPurge_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::atm_interfaces::action::RunPurge::Impl::FeedbackMessage>();
  RunPurge_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::atm_interfaces::action::RunPurge::Impl::GoalStatusMessage>();
  return &RunPurge_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, atm_interfaces, action, RunPurge)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<atm_interfaces::action::RunPurge>();
}

#ifdef __cplusplus
}
#endif
