// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from atm_interfaces:msg/LineTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/line_target.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__LINE_TARGET__TRAITS_HPP_
#define ATM_INTERFACES__MSG__DETAIL__LINE_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "atm_interfaces/msg/detail/line_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace atm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LineTarget & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << ", ";
  }

  // member: gap_id
  {
    out << "gap_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gap_id, out);
    out << ", ";
  }

  // member: line_id
  {
    out << "line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.line_id, out);
    out << ", ";
  }

  // member: stop_index
  {
    out << "stop_index: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_index, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: selected_by_vega
  {
    out << "selected_by_vega: ";
    rosidl_generator_traits::value_to_yaml(msg.selected_by_vega, out);
    out << ", ";
  }

  // member: notes
  {
    out << "notes: ";
    rosidl_generator_traits::value_to_yaml(msg.notes, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LineTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << "\n";
  }

  // member: gap_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gap_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gap_id, out);
    out << "\n";
  }

  // member: line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.line_id, out);
    out << "\n";
  }

  // member: stop_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_index: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_index, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: selected_by_vega
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selected_by_vega: ";
    rosidl_generator_traits::value_to_yaml(msg.selected_by_vega, out);
    out << "\n";
  }

  // member: notes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "notes: ";
    rosidl_generator_traits::value_to_yaml(msg.notes, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LineTarget & msg, bool use_flow_style = false)
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
  const atm_interfaces::msg::LineTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  atm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const atm_interfaces::msg::LineTarget & msg)
{
  return atm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<atm_interfaces::msg::LineTarget>()
{
  return "atm_interfaces::msg::LineTarget";
}

template<>
inline const char * name<atm_interfaces::msg::LineTarget>()
{
  return "atm_interfaces/msg/LineTarget";
}

template<>
struct has_fixed_size<atm_interfaces::msg::LineTarget>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atm_interfaces::msg::LineTarget>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<atm_interfaces::msg::LineTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ATM_INTERFACES__MSG__DETAIL__LINE_TARGET__TRAITS_HPP_
