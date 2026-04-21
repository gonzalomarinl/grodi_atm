// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from atm_interfaces:msg/LineTarget.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "atm_interfaces/msg/detail/line_target__rosidl_typesupport_introspection_c.h"
#include "atm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "atm_interfaces/msg/detail/line_target__functions.h"
#include "atm_interfaces/msg/detail/line_target__struct.h"


// Include directives for member types
// Member `mission_id`
// Member `gap_id`
// Member `line_id`
// Member `mode`
// Member `notes`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void atm_interfaces__msg__LineTarget__rosidl_typesupport_introspection_c__LineTarget_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  atm_interfaces__msg__LineTarget__init(message_memory);
}

void atm_interfaces__msg__LineTarget__rosidl_typesupport_introspection_c__LineTarget_fini_function(void * message_memory)
{
  atm_interfaces__msg__LineTarget__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember atm_interfaces__msg__LineTarget__rosidl_typesupport_introspection_c__LineTarget_message_member_array[7] = {
  {
    "mission_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__LineTarget, mission_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gap_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__LineTarget, gap_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "line_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__LineTarget, line_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__LineTarget, stop_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__LineTarget, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "selected_by_vega",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__LineTarget, selected_by_vega),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "notes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(atm_interfaces__msg__LineTarget, notes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers atm_interfaces__msg__LineTarget__rosidl_typesupport_introspection_c__LineTarget_message_members = {
  "atm_interfaces__msg",  // message namespace
  "LineTarget",  // message name
  7,  // number of fields
  sizeof(atm_interfaces__msg__LineTarget),
  false,  // has_any_key_member_
  atm_interfaces__msg__LineTarget__rosidl_typesupport_introspection_c__LineTarget_message_member_array,  // message members
  atm_interfaces__msg__LineTarget__rosidl_typesupport_introspection_c__LineTarget_init_function,  // function to initialize message memory (memory has to be allocated)
  atm_interfaces__msg__LineTarget__rosidl_typesupport_introspection_c__LineTarget_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t atm_interfaces__msg__LineTarget__rosidl_typesupport_introspection_c__LineTarget_message_type_support_handle = {
  0,
  &atm_interfaces__msg__LineTarget__rosidl_typesupport_introspection_c__LineTarget_message_members,
  get_message_typesupport_handle_function,
  &atm_interfaces__msg__LineTarget__get_type_hash,
  &atm_interfaces__msg__LineTarget__get_type_description,
  &atm_interfaces__msg__LineTarget__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_atm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, atm_interfaces, msg, LineTarget)() {
  if (!atm_interfaces__msg__LineTarget__rosidl_typesupport_introspection_c__LineTarget_message_type_support_handle.typesupport_identifier) {
    atm_interfaces__msg__LineTarget__rosidl_typesupport_introspection_c__LineTarget_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &atm_interfaces__msg__LineTarget__rosidl_typesupport_introspection_c__LineTarget_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
