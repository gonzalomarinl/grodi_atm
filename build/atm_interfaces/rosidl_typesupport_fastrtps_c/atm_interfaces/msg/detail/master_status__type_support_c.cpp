// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from atm_interfaces:msg/MasterStatus.idl
// generated code does not contain a copyright notice
#include "atm_interfaces/msg/detail/master_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "atm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "atm_interfaces/msg/detail/master_status__struct.h"
#include "atm_interfaces/msg/detail/master_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // reel_state, state
#include "rosidl_runtime_c/string_functions.h"  // reel_state, state

// forward declare type support functions


using _MasterStatus__ros_msg_type = atm_interfaces__msg__MasterStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
bool cdr_serialize_atm_interfaces__msg__MasterStatus(
  const atm_interfaces__msg__MasterStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: state
  {
    const rosidl_runtime_c__String * str = &ros_message->state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pump_enabled
  {
    cdr << (ros_message->pump_enabled ? true : false);
  }

  // Field name: reel_state
  {
    const rosidl_runtime_c__String * str = &ros_message->reel_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: link_ok
  {
    cdr << (ros_message->link_ok ? true : false);
  }

  // Field name: system_armed
  {
    cdr << (ros_message->system_armed ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
bool cdr_deserialize_atm_interfaces__msg__MasterStatus(
  eprosima::fastcdr::Cdr & cdr,
  atm_interfaces__msg__MasterStatus * ros_message)
{
  // Field name: state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->state.data) {
      rosidl_runtime_c__String__init(&ros_message->state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state'\n");
      return false;
    }
  }

  // Field name: pump_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pump_enabled = tmp ? true : false;
  }

  // Field name: reel_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reel_state.data) {
      rosidl_runtime_c__String__init(&ros_message->reel_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reel_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reel_state'\n");
      return false;
    }
  }

  // Field name: link_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->link_ok = tmp ? true : false;
  }

  // Field name: system_armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->system_armed = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
size_t get_serialized_size_atm_interfaces__msg__MasterStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MasterStatus__ros_msg_type * ros_message = static_cast<const _MasterStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state.size + 1);

  // Field name: pump_enabled
  {
    size_t item_size = sizeof(ros_message->pump_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reel_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reel_state.size + 1);

  // Field name: link_ok
  {
    size_t item_size = sizeof(ros_message->link_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: system_armed
  {
    size_t item_size = sizeof(ros_message->system_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
size_t max_serialized_size_atm_interfaces__msg__MasterStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: state
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: pump_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reel_state
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: link_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: system_armed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = atm_interfaces__msg__MasterStatus;
    is_plain =
      (
      offsetof(DataType, system_armed) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
bool cdr_serialize_key_atm_interfaces__msg__MasterStatus(
  const atm_interfaces__msg__MasterStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: state
  {
    const rosidl_runtime_c__String * str = &ros_message->state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pump_enabled
  {
    cdr << (ros_message->pump_enabled ? true : false);
  }

  // Field name: reel_state
  {
    const rosidl_runtime_c__String * str = &ros_message->reel_state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: link_ok
  {
    cdr << (ros_message->link_ok ? true : false);
  }

  // Field name: system_armed
  {
    cdr << (ros_message->system_armed ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
size_t get_serialized_size_key_atm_interfaces__msg__MasterStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MasterStatus__ros_msg_type * ros_message = static_cast<const _MasterStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state.size + 1);

  // Field name: pump_enabled
  {
    size_t item_size = sizeof(ros_message->pump_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reel_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reel_state.size + 1);

  // Field name: link_ok
  {
    size_t item_size = sizeof(ros_message->link_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: system_armed
  {
    size_t item_size = sizeof(ros_message->system_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
size_t max_serialized_size_key_atm_interfaces__msg__MasterStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: state
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: pump_enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: reel_state
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: link_ok
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: system_armed
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = atm_interfaces__msg__MasterStatus;
    is_plain =
      (
      offsetof(DataType, system_armed) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _MasterStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const atm_interfaces__msg__MasterStatus * ros_message = static_cast<const atm_interfaces__msg__MasterStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_atm_interfaces__msg__MasterStatus(ros_message, cdr);
}

static bool _MasterStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  atm_interfaces__msg__MasterStatus * ros_message = static_cast<atm_interfaces__msg__MasterStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_atm_interfaces__msg__MasterStatus(cdr, ros_message);
}

static uint32_t _MasterStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_atm_interfaces__msg__MasterStatus(
      untyped_ros_message, 0));
}

static size_t _MasterStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_atm_interfaces__msg__MasterStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MasterStatus = {
  "atm_interfaces::msg",
  "MasterStatus",
  _MasterStatus__cdr_serialize,
  _MasterStatus__cdr_deserialize,
  _MasterStatus__get_serialized_size,
  _MasterStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MasterStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MasterStatus,
  get_message_typesupport_handle_function,
  &atm_interfaces__msg__MasterStatus__get_type_hash,
  &atm_interfaces__msg__MasterStatus__get_type_description,
  &atm_interfaces__msg__MasterStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, msg, MasterStatus)() {
  return &_MasterStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
