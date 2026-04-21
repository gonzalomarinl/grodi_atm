// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from atm_interfaces:msg/MissionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/mission_state.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__MISSION_STATE__TRAITS_HPP_
#define ATM_INTERFACES__MSG__DETAIL__MISSION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "atm_interfaces/msg/detail/mission_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace atm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionState & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << ", ";
  }

  // member: mission_type
  {
    out << "mission_type: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_type, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: current_stop_index
  {
    out << "current_stop_index: ";
    rosidl_generator_traits::value_to_yaml(msg.current_stop_index, out);
    out << ", ";
  }

  // member: current_line_id
  {
    out << "current_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_line_id, out);
    out << ", ";
  }

  // member: comms_degraded
  {
    out << "comms_degraded: ";
    rosidl_generator_traits::value_to_yaml(msg.comms_degraded, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionState & msg,
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

  // member: mission_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_type: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_type, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
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

  // member: current_line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_line_id, out);
    out << "\n";
  }

  // member: comms_degraded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comms_degraded: ";
    rosidl_generator_traits::value_to_yaml(msg.comms_degraded, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionState & msg, bool use_flow_style = false)
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
  const atm_interfaces::msg::MissionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  atm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const atm_interfaces::msg::MissionState & msg)
{
  return atm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<atm_interfaces::msg::MissionState>()
{
  return "atm_interfaces::msg::MissionState";
}

template<>
inline const char * name<atm_interfaces::msg::MissionState>()
{
  return "atm_interfaces/msg/MissionState";
}

template<>
struct has_fixed_size<atm_interfaces::msg::MissionState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atm_interfaces::msg::MissionState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<atm_interfaces::msg::MissionState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ATM_INTERFACES__MSG__DETAIL__MISSION_STATE__TRAITS_HPP_
