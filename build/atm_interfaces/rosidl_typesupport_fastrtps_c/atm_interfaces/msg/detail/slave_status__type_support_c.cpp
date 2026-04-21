// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from atm_interfaces:msg/SlaveStatus.idl
// generated code does not contain a copyright notice
#include "atm_interfaces/msg/detail/slave_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "atm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "atm_interfaces/msg/detail/slave_status__struct.h"
#include "atm_interfaces/msg/detail/slave_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // current_line_id, state
#include "rosidl_runtime_c/string_functions.h"  // current_line_id, state

// forward declare type support functions


using _SlaveStatus__ros_msg_type = atm_interfaces__msg__SlaveStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
bool cdr_serialize_atm_interfaces__msg__SlaveStatus(
  const atm_interfaces__msg__SlaveStatus * ros_message,
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

  // Field name: at_base
  {
    cdr << (ros_message->at_base ? true : false);
  }

  // Field name: moving
  {
    cdr << (ros_message->moving ? true : false);
  }

  // Field name: atomizer_up
  {
    cdr << (ros_message->atomizer_up ? true : false);
  }

  // Field name: atomizer_down
  {
    cdr << (ros_message->atomizer_down ? true : false);
  }

  // Field name: current_line_id
  {
    const rosidl_runtime_c__String * str = &ros_message->current_line_id;
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

  // Field name: current_stop_index
  {
    cdr << ros_message->current_stop_index;
  }

  // Field name: link_ok
  {
    cdr << (ros_message->link_ok ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
bool cdr_deserialize_atm_interfaces__msg__SlaveStatus(
  eprosima::fastcdr::Cdr & cdr,
  atm_interfaces__msg__SlaveStatus * ros_message)
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

  // Field name: at_base
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->at_base = tmp ? true : false;
  }

  // Field name: moving
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->moving = tmp ? true : false;
  }

  // Field name: atomizer_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->atomizer_up = tmp ? true : false;
  }

  // Field name: atomizer_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->atomizer_down = tmp ? true : false;
  }

  // Field name: current_line_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->current_line_id.data) {
      rosidl_runtime_c__String__init(&ros_message->current_line_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->current_line_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'current_line_id'\n");
      return false;
    }
  }

  // Field name: current_stop_index
  {
    cdr >> ros_message->current_stop_index;
  }

  // Field name: link_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->link_ok = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
size_t get_serialized_size_atm_interfaces__msg__SlaveStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SlaveStatus__ros_msg_type * ros_message = static_cast<const _SlaveStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: at_base
  {
    size_t item_size = sizeof(ros_message->at_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: moving
  {
    size_t item_size = sizeof(ros_message->moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: atomizer_up
  {
    size_t item_size = sizeof(ros_message->atomizer_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: atomizer_down
  {
    size_t item_size = sizeof(ros_message->atomizer_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_line_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->current_line_id.size + 1);

  // Field name: current_stop_index
  {
    size_t item_size = sizeof(ros_message->current_stop_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link_ok
  {
    size_t item_size = sizeof(ros_message->link_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
size_t max_serialized_size_atm_interfaces__msg__SlaveStatus(
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

  // Field name: at_base
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: moving
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: atomizer_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: atomizer_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: current_line_id
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

  // Field name: current_stop_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: link_ok
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
    using DataType = atm_interfaces__msg__SlaveStatus;
    is_plain =
      (
      offsetof(DataType, link_ok) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
bool cdr_serialize_key_atm_interfaces__msg__SlaveStatus(
  const atm_interfaces__msg__SlaveStatus * ros_message,
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

  // Field name: at_base
  {
    cdr << (ros_message->at_base ? true : false);
  }

  // Field name: moving
  {
    cdr << (ros_message->moving ? true : false);
  }

  // Field name: atomizer_up
  {
    cdr << (ros_message->atomizer_up ? true : false);
  }

  // Field name: atomizer_down
  {
    cdr << (ros_message->atomizer_down ? true : false);
  }

  // Field name: current_line_id
  {
    const rosidl_runtime_c__String * str = &ros_message->current_line_id;
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

  // Field name: current_stop_index
  {
    cdr << ros_message->current_stop_index;
  }

  // Field name: link_ok
  {
    cdr << (ros_message->link_ok ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
size_t get_serialized_size_key_atm_interfaces__msg__SlaveStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SlaveStatus__ros_msg_type * ros_message = static_cast<const _SlaveStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: at_base
  {
    size_t item_size = sizeof(ros_message->at_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: moving
  {
    size_t item_size = sizeof(ros_message->moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: atomizer_up
  {
    size_t item_size = sizeof(ros_message->atomizer_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: atomizer_down
  {
    size_t item_size = sizeof(ros_message->atomizer_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: current_line_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->current_line_id.size + 1);

  // Field name: current_stop_index
  {
    size_t item_size = sizeof(ros_message->current_stop_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: link_ok
  {
    size_t item_size = sizeof(ros_message->link_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
size_t max_serialized_size_key_atm_interfaces__msg__SlaveStatus(
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

  // Field name: at_base
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: moving
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: atomizer_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: atomizer_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: current_line_id
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

  // Field name: current_stop_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: link_ok
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
    using DataType = atm_interfaces__msg__SlaveStatus;
    is_plain =
      (
      offsetof(DataType, link_ok) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SlaveStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const atm_interfaces__msg__SlaveStatus * ros_message = static_cast<const atm_interfaces__msg__SlaveStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_atm_interfaces__msg__SlaveStatus(ros_message, cdr);
}

static bool _SlaveStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  atm_interfaces__msg__SlaveStatus * ros_message = static_cast<atm_interfaces__msg__SlaveStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_atm_interfaces__msg__SlaveStatus(cdr, ros_message);
}

static uint32_t _SlaveStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_atm_interfaces__msg__SlaveStatus(
      untyped_ros_message, 0));
}

static size_t _SlaveStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_atm_interfaces__msg__SlaveStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SlaveStatus = {
  "atm_interfaces::msg",
  "SlaveStatus",
  _SlaveStatus__cdr_serialize,
  _SlaveStatus__cdr_deserialize,
  _SlaveStatus__get_serialized_size,
  _SlaveStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SlaveStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SlaveStatus,
  get_message_typesupport_handle_function,
  &atm_interfaces__msg__SlaveStatus__get_type_hash,
  &atm_interfaces__msg__SlaveStatus__get_type_description,
  &atm_interfaces__msg__SlaveStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, msg, SlaveStatus)() {
  return &_SlaveStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
