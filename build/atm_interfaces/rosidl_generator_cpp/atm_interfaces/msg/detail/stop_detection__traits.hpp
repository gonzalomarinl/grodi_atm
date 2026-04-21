// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from atm_interfaces:msg/StopDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/stop_detection.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__STOP_DETECTION__TRAITS_HPP_
#define ATM_INTERFACES__MSG__DETAIL__STOP_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "atm_interfaces/msg/detail/stop_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace atm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const StopDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: detected
  {
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << ", ";
  }

  // member: detected_class
  {
    out << "detected_class: ";
    rosidl_generator_traits::value_to_yaml(msg.detected_class, out);
    out << ", ";
  }

  // member: estimated_gap_id
  {
    out << "estimated_gap_id: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_gap_id, out);
    out << ", ";
  }

  // member: estimated_line_id
  {
    out << "estimated_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_line_id, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: mission_match
  {
    out << "mission_match: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_match, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StopDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << "\n";
  }

  // member: detected_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detected_class: ";
    rosidl_generator_traits::value_to_yaml(msg.detected_class, out);
    out << "\n";
  }

  // member: estimated_gap_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_gap_id: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_gap_id, out);
    out << "\n";
  }

  // member: estimated_line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_line_id, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: mission_match
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_match: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_match, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StopDetection & msg, bool use_flow_style = false)
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
  const atm_interfaces::msg::StopDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  atm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const atm_interfaces::msg::StopDetection & msg)
{
  return atm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<atm_interfaces::msg::StopDetection>()
{
  return "atm_interfaces::msg::StopDetection";
}

template<>
inline const char * name<atm_interfaces::msg::StopDetection>()
{
  return "atm_interfaces/msg/StopDetection";
}

template<>
struct has_fixed_size<atm_interfaces::msg::StopDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atm_interfaces::msg::StopDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<atm_interfaces::msg::StopDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ATM_INTERFACES__MSG__DETAIL__STOP_DETECTION__TRAITS_HPP_
