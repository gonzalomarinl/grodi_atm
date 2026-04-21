// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from atm_interfaces:msg/FaultReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "atm_interfaces/msg/detail/fault_report__rosidl_typesupport_introspection_c.h"
#include "atm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "atm_interfaces/msg/detail/fault_report__functions.h"
#include "atm_interfaces/msg/detail/fault_report__struct.h"


// Include directives for member types
// Member `mission_id`
// Member `source`
// Member `fault_code`
// Member `severity`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void atm_interfaces__msg__FaultReport__rosidl_typesupport_introspection_c__FaultReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  atm_interfaces__msg__FaultReport__init(message_memory);
}

void atm_interfaces__msg__FaultReport__rosidl_typesupport_introspection_c__FaultReport_fini_function(void * message_memory)
{
  atm_interfaces__msg__FaultReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember atm_interfaces__msg__FaultReport__rosidl_typesupport_introspection_c__FaultReport_message_member_array[7] = {
  {
    "mission_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__FaultReport, mission_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__FaultReport, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fault_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__FaultReport, fault_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "severity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__FaultReport, severity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__FaultReport, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requires_return_home",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__FaultReport, requires_return_home),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__FaultReport, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers atm_interfaces__msg__FaultReport__rosidl_typesupport_introspection_c__FaultReport_message_members = {
  "atm_interfaces__msg",  // message namespace
  "FaultReport",  // message name
  7,  // number of fields
  sizeof(atm_interfaces__msg__FaultReport),
  false,  // has_any_key_member_
  atm_interfaces__msg__FaultReport__rosidl_typesupport_introspection_c__FaultReport_message_member_array,  // message members
  atm_interfaces__msg__FaultReport__rosidl_typesupport_introspection_c__FaultReport_init_function,  // function to initialize message memory (memory has to be allocated)
  atm_interfaces__msg__FaultReport__rosidl_typesupport_introspection_c__FaultReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t atm_interfaces__msg__FaultReport__rosidl_typesupport_introspection_c__FaultReport_message_type_support_handle = {
  0,
  &atm_interfaces__msg__FaultReport__rosidl_typesupport_introspection_c__FaultReport_message_members,
  get_message_typesupport_handle_function,
  &atm_interfaces__msg__FaultReport__get_type_hash,
  &atm_interfaces__msg__FaultReport__get_type_description,
  &atm_interfaces__msg__FaultReport__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_atm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, msg, FaultReport)() {
  atm_interfaces__msg__FaultReport__rosidl_typesupport_introspection_c__FaultReport_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!atm_interfaces__msg__FaultReport__rosidl_typesupport_introspection_c__FaultReport_message_type_support_handle.typesupport_identifier) {
    atm_interfaces__msg__FaultReport__rosidl_typesupport_introspection_c__FaultReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &atm_interfaces__msg__FaultReport__rosidl_typesupport_introspection_c__FaultReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
