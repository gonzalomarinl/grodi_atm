// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from atm_interfaces:msg/MasterStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/master_status.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__MASTER_STATUS__TRAITS_HPP_
#define ATM_INTERFACES__MSG__DETAIL__MASTER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "atm_interfaces/msg/detail/master_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace atm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MasterStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: pump_enabled
  {
    out << "pump_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.pump_enabled, out);
    out << ", ";
  }

  // member: reel_state
  {
    out << "reel_state: ";
    rosidl_generator_traits::value_to_yaml(msg.reel_state, out);
    out << ", ";
  }

  // member: link_ok
  {
    out << "link_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.link_ok, out);
    out << ", ";
  }

  // member: system_armed
  {
    out << "system_armed: ";
    rosidl_generator_traits::value_to_yaml(msg.system_armed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MasterStatus & msg,
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

  // member: pump_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pump_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.pump_enabled, out);
    out << "\n";
  }

  // member: reel_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reel_state: ";
    rosidl_generator_traits::value_to_yaml(msg.reel_state, out);
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

  // member: system_armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_armed: ";
    rosidl_generator_traits::value_to_yaml(msg.system_armed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MasterStatus & msg, bool use_flow_style = false)
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
  const atm_interfaces::msg::MasterStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  atm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const atm_interfaces::msg::MasterStatus & msg)
{
  return atm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<atm_interfaces::msg::MasterStatus>()
{
  return "atm_interfaces::msg::MasterStatus";
}

template<>
inline const char * name<atm_interfaces::msg::MasterStatus>()
{
  return "atm_interfaces/msg/MasterStatus";
}

template<>
struct has_fixed_size<atm_interfaces::msg::MasterStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atm_interfaces::msg::MasterStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<atm_interfaces::msg::MasterStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ATM_INTERFACES__MSG__DETAIL__MASTER_STATUS__TRAITS_HPP_
