// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from atm_interfaces:srv/ResetFault.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/srv/reset_fault.hpp"


#ifndef ATM_INTERFACES__SRV__DETAIL__RESET_FAULT__TRAITS_HPP_
#define ATM_INTERFACES__SRV__DETAIL__RESET_FAULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "atm_interfaces/srv/detail/reset_fault__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace atm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetFault_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetFault_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetFault_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace atm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use atm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const atm_interfaces::srv::ResetFault_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  atm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const atm_interfaces::srv::ResetFault_Request & msg)
{
  return atm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<atm_interfaces::srv::ResetFault_Request>()
{
  return "atm_interfaces::srv::ResetFault_Request";
}

template<>
inline const char * name<atm_interfaces::srv::ResetFault_Request>()
{
  return "atm_interfaces/srv/ResetFault_Request";
}

template<>
struct has_fixed_size<atm_interfaces::srv::ResetFault_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atm_interfaces::srv::ResetFault_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<atm_interfaces::srv::ResetFault_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace atm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetFault_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetFault_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetFault_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace atm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use atm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const atm_interfaces::srv::ResetFault_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  atm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const atm_interfaces::srv::ResetFault_Response & msg)
{
  return atm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<atm_interfaces::srv::ResetFault_Response>()
{
  return "atm_interfaces::srv::ResetFault_Response";
}

template<>
inline const char * name<atm_interfaces::srv::ResetFault_Response>()
{
  return "atm_interfaces/srv/ResetFault_Response";
}

template<>
struct has_fixed_size<atm_interfaces::srv::ResetFault_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atm_interfaces::srv::ResetFault_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<atm_interfaces::srv::ResetFault_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace atm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetFault_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetFault_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetFault_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace atm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use atm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const atm_interfaces::srv::ResetFault_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  atm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use atm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const atm_interfaces::srv::ResetFault_Event & msg)
{
  return atm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<atm_interfaces::srv::ResetFault_Event>()
{
  return "atm_interfaces::srv::ResetFault_Event";
}

template<>
inline const char * name<atm_interfaces::srv::ResetFault_Event>()
{
  return "atm_interfaces/srv/ResetFault_Event";
}

template<>
struct has_fixed_size<atm_interfaces::srv::ResetFault_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<atm_interfaces::srv::ResetFault_Event>
  : std::integral_constant<bool, has_bounded_size<atm_interfaces::srv::ResetFault_Request>::value && has_bounded_size<atm_interfaces::srv::ResetFault_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<atm_interfaces::srv::ResetFault_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<atm_interfaces::srv::ResetFault>()
{
  return "atm_interfaces::srv::ResetFault";
}

template<>
inline const char * name<atm_interfaces::srv::ResetFault>()
{
  return "atm_interfaces/srv/ResetFault";
}

template<>
struct has_fixed_size<atm_interfaces::srv::ResetFault>
  : std::integral_constant<
    bool,
    has_fixed_size<atm_interfaces::srv::ResetFault_Request>::value &&
    has_fixed_size<atm_interfaces::srv::ResetFault_Response>::value
  >
{
};

template<>
struct has_bounded_size<atm_interfaces::srv::ResetFault>
  : std::integral_constant<
    bool,
    has_bounded_size<atm_interfaces::srv::ResetFault_Request>::value &&
    has_bounded_size<atm_interfaces::srv::ResetFault_Response>::value
  >
{
};

template<>
struct is_service<atm_interfaces::srv::ResetFault>
  : std::true_type
{
};

template<>
struct is_service_request<atm_interfaces::srv::ResetFault_Request>
  : std::true_type
{
};

template<>
struct is_service_response<atm_interfaces::srv::ResetFault_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ATM_INTERFACES__SRV__DETAIL__RESET_FAULT__TRAITS_HPP_
