// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from atm_interfaces:msg/SlaveStatus.idl
// generated code does not contain a copyright notice
#include "atm_interfaces/msg/detail/slave_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "atm_interfaces/msg/detail/slave_status__functions.h"
#include "atm_interfaces/msg/detail/slave_status__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace atm_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_atm_interfaces
cdr_serialize(
  const atm_interfaces::msg::SlaveStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: state
  cdr << ros_message.state;

  // Member: at_base
  cdr << (ros_message.at_base ? true : false);

  // Member: moving
  cdr << (ros_message.moving ? true : false);

  // Member: atomizer_up
  cdr << (ros_message.atomizer_up ? true : false);

  // Member: atomizer_down
  cdr << (ros_message.atomizer_down ? true : false);

  // Member: current_line_id
  cdr << ros_message.current_line_id;

  // Member: current_stop_index
  cdr << ros_message.current_stop_index;

  // Member: link_ok
  cdr << (ros_message.link_ok ? true : false);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_atm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  atm_interfaces::msg::SlaveStatus & ros_message)
{
  // Member: state
  cdr >> ros_message.state;

  // Member: at_base
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.at_base = tmp ? true : false;
  }

  // Member: moving
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.moving = tmp ? true : false;
  }

  // Member: atomizer_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.atomizer_up = tmp ? true : false;
  }

  // Member: atomizer_down
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.atomizer_down = tmp ? true : false;
  }

  // Member: current_line_id
  cdr >> ros_message.current_line_id;

  // Member: current_stop_index
  cdr >> ros_message.current_stop_index;

  // Member: link_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.link_ok = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_atm_interfaces
get_serialized_size(
  const atm_interfaces::msg::SlaveStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.state.size() + 1);

  // Member: at_base
  {
    size_t item_size = sizeof(ros_message.at_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: moving
  {
    size_t item_size = sizeof(ros_message.moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: atomizer_up
  {
    size_t item_size = sizeof(ros_message.atomizer_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: atomizer_down
  {
    size_t item_size = sizeof(ros_message.atomizer_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: current_line_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.current_line_id.size() + 1);

  // Member: current_stop_index
  {
    size_t item_size = sizeof(ros_message.current_stop_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: link_ok
  {
    size_t item_size = sizeof(ros_message.link_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_atm_interfaces
max_serialized_size_SlaveStatus(
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

  // Member: state
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
  // Member: at_base
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: moving
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: atomizer_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: atomizer_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: current_line_id
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
  // Member: current_stop_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: link_ok
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
    using DataType = atm_interfaces::msg::SlaveStatus;
    is_plain =
      (
      offsetof(DataType, link_ok) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_atm_interfaces
cdr_serialize_key(
  const atm_interfaces::msg::SlaveStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: state
  cdr << ros_message.state;

  // Member: at_base
  cdr << (ros_message.at_base ? true : false);

  // Member: moving
  cdr << (ros_message.moving ? true : false);

  // Member: atomizer_up
  cdr << (ros_message.atomizer_up ? true : false);

  // Member: atomizer_down
  cdr << (ros_message.atomizer_down ? true : false);

  // Member: current_line_id
  cdr << ros_message.current_line_id;

  // Member: current_stop_index
  cdr << ros_message.current_stop_index;

  // Member: link_ok
  cdr << (ros_message.link_ok ? true : false);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_atm_interfaces
get_serialized_size_key(
  const atm_interfaces::msg::SlaveStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.state.size() + 1);

  // Member: at_base
  {
    size_t item_size = sizeof(ros_message.at_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: moving
  {
    size_t item_size = sizeof(ros_message.moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: atomizer_up
  {
    size_t item_size = sizeof(ros_message.atomizer_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: atomizer_down
  {
    size_t item_size = sizeof(ros_message.atomizer_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: current_line_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.current_line_id.size() + 1);

  // Member: current_stop_index
  {
    size_t item_size = sizeof(ros_message.current_stop_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: link_ok
  {
    size_t item_size = sizeof(ros_message.link_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_atm_interfaces
max_serialized_size_key_SlaveStatus(
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

  // Member: state
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

  // Member: at_base
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: moving
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: atomizer_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: atomizer_down
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: current_line_id
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

  // Member: current_stop_index
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: link_ok
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
    using DataType = atm_interfaces::msg::SlaveStatus;
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
  auto typed_message =
    static_cast<const atm_interfaces::msg::SlaveStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SlaveStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<atm_interfaces::msg::SlaveStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SlaveStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const atm_interfaces::msg::SlaveStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SlaveStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SlaveStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SlaveStatus__callbacks = {
  "atm_interfaces::msg",
  "SlaveStatus",
  _SlaveStatus__cdr_serialize,
  _SlaveStatus__cdr_deserialize,
  _SlaveStatus__get_serialized_size,
  _SlaveStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SlaveStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SlaveStatus__callbacks,
  get_message_typesupport_handle_function,
  &atm_interfaces__msg__SlaveStatus__get_type_hash,
  &atm_interfaces__msg__SlaveStatus__get_type_description,
  &atm_interfaces__msg__SlaveStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace atm_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_atm_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<atm_interfaces::msg::SlaveStatus>()
{
  return &atm_interfaces::msg::typesupport_fastrtps_cpp::_SlaveStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, atm_interfaces, msg, SlaveStatus)() {
  return &atm_interfaces::msg::typesupport_fastrtps_cpp::_SlaveStatus__handle;
}

#ifdef __cplusplus
}
#endif
