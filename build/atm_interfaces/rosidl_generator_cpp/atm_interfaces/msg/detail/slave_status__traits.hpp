// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from atm_interfaces:msg/SlaveStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/slave_status.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__SLAVE_STATUS__TRAITS_HPP_
#define ATM_INTERFACES__MSG__DETAIL__SLAVE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "atm_interfaces/msg/detail/slave_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace atm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SlaveStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: at_base
  {
    out << "at_base: ";
    rosidl_generator_traits::value_to_yaml(msg.at_base, out);
    out << ", ";
  }

  // member: moving
  {
    out << "moving: ";
    rosidl_generator_traits::value_to_yaml(msg.moving, out);
    out << ", ";
  }

  // member: atomizer_up
  {
    out << "atomizer_up: ";
    rosidl_generator_traits::value_to_yaml(msg.atomizer_up, out);
    out << ", ";
  }

  // member: atomizer_down
  {
    out << "atomizer_down: ";
    rosidl_generator_traits::value_to_yaml(msg.atomizer_down, out);
    out << ", ";
  }

  // member: current_line_id
  {
    out << "current_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_line_id, out);
    out << ", ";
  }

  // member: current_stop_index
  {
    out << "current_stop_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_stop_index, out);
    out << ", ";
  }

  // member: link_ok
  {
    out << "link_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.link_ok, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SlaveStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: at_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "at_base: ";
    rosidl_generator_traits::value_to_yaml(msg.at_base, out);
    out << "\n";
  }

  // member: moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving: ";
    rosidl_generator_traits::value_to_yaml(msg.moving, out);
    out << "\n";
  }

  // member: atomizer_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "atomizer_up: ";
    rosidl_generator_traits::value_to_yaml(msg.atomizer_up, out);
    out << "\n";
  }

  // member: atomizer_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "atomizer_down: ";
    rosidl_generator_traits::value_to_yaml(msg.atomizer_down, out);
    out << "\n";
  }

  // member: current_line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_line_id, out);
    out << "\n";
  }

  // member: current_stop_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_stop_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_stop_index, out);
    out << "\n";
  }

  // member: link_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.link_ok, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SlaveStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace atm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use atm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const atm_interfaces::msg::SlaveStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  atm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const atm_interfaces::msg::SlaveStatus & msg)
{
  return atm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<atm_interfaces::msg::SlaveStatus>()
{
  return "atm_interfaces::msg::SlaveStatus";
}

template<>
inline const char * name<atm_interfaces::msg::SlaveStatus>()
{
  return "atm_interfaces/msg/SlaveStatus";
}

template<>
struct has_fixed_size<atm_interfaces::msg::SlaveStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atm_interfaces::msg::SlaveStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<atm_interfaces::msg::SlaveStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ATM_INTERFACES__MSG__DETAIL__SLAVE_STATUS__TRAITS_HPP_
