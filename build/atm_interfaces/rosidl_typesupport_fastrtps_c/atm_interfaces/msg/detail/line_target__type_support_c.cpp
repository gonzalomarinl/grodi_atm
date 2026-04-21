// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from atm_interfaces:msg/LineTarget.idl
// generated code does not contain a copyright notice
#include "atm_interfaces/msg/detail/line_target__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "atm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "atm_interfaces/msg/detail/line_target__struct.h"
#include "atm_interfaces/msg/detail/line_target__functions.h"
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

#include "rosidl_runtime_c/string.h"  // gap_id, line_id, mission_id, mode, notes
#include "rosidl_runtime_c/string_functions.h"  // gap_id, line_id, mission_id, mode, notes

// forward declare type support functions


using _LineTarget__ros_msg_type = atm_interfaces__msg__LineTarget;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
bool cdr_serialize_atm_interfaces__msg__LineTarget(
  const atm_interfaces__msg__LineTarget * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: mission_id
  {
    const rosidl_runtime_c__String * str = &ros_message->mission_id;
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

  // Field name: gap_id
  {
    const rosidl_runtime_c__String * str = &ros_message->gap_id;
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

  // Field name: line_id
  {
    const rosidl_runtime_c__String * str = &ros_message->line_id;
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

  // Field name: stop_index
  {
    cdr << ros_message->stop_index;
  }

  // Field name: mode
  {
    const rosidl_runtime_c__String * str = &ros_message->mode;
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

  // Field name: selected_by_vega
  {
    cdr << (ros_message->selected_by_vega ? true : false);
  }

  // Field name: notes
  {
    const rosidl_runtime_c__String * str = &ros_message->notes;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
bool cdr_deserialize_atm_interfaces__msg__LineTarget(
  eprosima::fastcdr::Cdr & cdr,
  atm_interfaces__msg__LineTarget * ros_message)
{
  // Field name: mission_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mission_id.data) {
      rosidl_runtime_c__String__init(&ros_message->mission_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mission_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mission_id'\n");
      return false;
    }
  }

  // Field name: gap_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gap_id.data) {
      rosidl_runtime_c__String__init(&ros_message->gap_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gap_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gap_id'\n");
      return false;
    }
  }

  // Field name: line_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->line_id.data) {
      rosidl_runtime_c__String__init(&ros_message->line_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->line_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'line_id'\n");
      return false;
    }
  }

  // Field name: stop_index
  {
    cdr >> ros_message->stop_index;
  }

  // Field name: mode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mode.data) {
      rosidl_runtime_c__String__init(&ros_message->mode);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mode'\n");
      return false;
    }
  }

  // Field name: selected_by_vega
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->selected_by_vega = tmp ? true : false;
  }

  // Field name: notes
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->notes.data) {
      rosidl_runtime_c__String__init(&ros_message->notes);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->notes,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'notes'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
size_t get_serialized_size_atm_interfaces__msg__LineTarget(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LineTarget__ros_msg_type * ros_message = static_cast<const _LineTarget__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: mission_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mission_id.size + 1);

  // Field name: gap_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gap_id.size + 1);

  // Field name: line_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->line_id.size + 1);

  // Field name: stop_index
  {
    size_t item_size = sizeof(ros_message->stop_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mode.size + 1);

  // Field name: selected_by_vega
  {
    size_t item_size = sizeof(ros_message->selected_by_vega);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: notes
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->notes.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
size_t max_serialized_size_atm_interfaces__msg__LineTarget(
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

  // Field name: mission_id
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

  // Field name: gap_id
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

  // Field name: line_id
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

  // Field name: stop_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mode
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

  // Field name: selected_by_vega
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: notes
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = atm_interfaces__msg__LineTarget;
    is_plain =
      (
      offsetof(DataType, notes) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
bool cdr_serialize_key_atm_interfaces__msg__LineTarget(
  const atm_interfaces__msg__LineTarget * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: mission_id
  {
    const rosidl_runtime_c__String * str = &ros_message->mission_id;
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

  // Field name: gap_id
  {
    const rosidl_runtime_c__String * str = &ros_message->gap_id;
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

  // Field name: line_id
  {
    const rosidl_runtime_c__String * str = &ros_message->line_id;
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

  // Field name: stop_index
  {
    cdr << ros_message->stop_index;
  }

  // Field name: mode
  {
    const rosidl_runtime_c__String * str = &ros_message->mode;
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

  // Field name: selected_by_vega
  {
    cdr << (ros_message->selected_by_vega ? true : false);
  }

  // Field name: notes
  {
    const rosidl_runtime_c__String * str = &ros_message->notes;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
size_t get_serialized_size_key_atm_interfaces__msg__LineTarget(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LineTarget__ros_msg_type * ros_message = static_cast<const _LineTarget__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: mission_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mission_id.size + 1);

  // Field name: gap_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gap_id.size + 1);

  // Field name: line_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->line_id.size + 1);

  // Field name: stop_index
  {
    size_t item_size = sizeof(ros_message->stop_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mode.size + 1);

  // Field name: selected_by_vega
  {
    size_t item_size = sizeof(ros_message->selected_by_vega);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: notes
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->notes.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_atm_interfaces
size_t max_serialized_size_key_atm_interfaces__msg__LineTarget(
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
  // Field name: mission_id
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

  // Field name: gap_id
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

  // Field name: line_id
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

  // Field name: stop_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: mode
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

  // Field name: selected_by_vega
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: notes
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = atm_interfaces__msg__LineTarget;
    is_plain =
      (
      offsetof(DataType, notes) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LineTarget__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const atm_interfaces__msg__LineTarget * ros_message = static_cast<const atm_interfaces__msg__LineTarget *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_atm_interfaces__msg__LineTarget(ros_message, cdr);
}

static bool _LineTarget__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  atm_interfaces__msg__LineTarget * ros_message = static_cast<atm_interfaces__msg__LineTarget *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_atm_interfaces__msg__LineTarget(cdr, ros_message);
}

static uint32_t _LineTarget__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_atm_interfaces__msg__LineTarget(
      untyped_ros_message, 0));
}

static size_t _LineTarget__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_atm_interfaces__msg__LineTarget(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LineTarget = {
  "atm_interfaces::msg",
  "LineTarget",
  _LineTarget__cdr_serialize,
  _LineTarget__cdr_deserialize,
  _LineTarget__get_serialized_size,
  _LineTarget__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LineTarget__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LineTarget,
  get_message_typesupport_handle_function,
  &atm_interfaces__msg__LineTarget__get_type_hash,
  &atm_interfaces__msg__LineTarget__get_type_description,
  &atm_interfaces__msg__LineTarget__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, atm_interfaces, msg, LineTarget)() {
  return &_LineTarget__type_support;
}

#if defined(__cplusplus)
}
#endif
