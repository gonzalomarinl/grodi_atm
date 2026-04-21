// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:srv/SetAdmissionReelMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/srv/set_admission_reel_mode.hpp"


#ifndef ATM_INTERFACES__SRV__DETAIL__SET_ADMISSION_REEL_MODE__BUILDER_HPP_
#define ATM_INTERFACES__SRV__DETAIL__SET_ADMISSION_REEL_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/srv/detail/set_admission_reel_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetAdmissionReelMode_Request_speed
{
public:
  explicit Init_SetAdmissionReelMode_Request_speed(::atm_interfaces::srv::SetAdmissionReelMode_Request & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::srv::SetAdmissionReelMode_Request speed(::atm_interfaces::srv::SetAdmissionReelMode_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::SetAdmissionReelMode_Request msg_;
};

class Init_SetAdmissionReelMode_Request_mode
{
public:
  Init_SetAdmissionReelMode_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAdmissionReelMode_Request_speed mode(::atm_interfaces::srv::SetAdmissionReelMode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_SetAdmissionReelMode_Request_speed(msg_);
  }

private:
  ::atm_interfaces::srv::SetAdmissionReelMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::SetAdmissionReelMode_Request>()
{
  return atm_interfaces::srv::builder::Init_SetAdmissionReelMode_Request_mode();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetAdmissionReelMode_Response_message
{
public:
  explicit Init_SetAdmissionReelMode_Response_message(::atm_interfaces::srv::SetAdmissionReelMode_Response & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::srv::SetAdmissionReelMode_Response message(::atm_interfaces::srv::SetAdmissionReelMode_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::SetAdmissionReelMode_Response msg_;
};

class Init_SetAdmissionReelMode_Response_success
{
public:
  Init_SetAdmissionReelMode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAdmissionReelMode_Response_message success(::atm_interfaces::srv::SetAdmissionReelMode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetAdmissionReelMode_Response_message(msg_);
  }

private:
  ::atm_interfaces::srv::SetAdmissionReelMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::SetAdmissionReelMode_Response>()
{
  return atm_interfaces::srv::builder::Init_SetAdmissionReelMode_Response_success();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetAdmissionReelMode_Event_response
{
public:
  explicit Init_SetAdmissionReelMode_Event_response(::atm_interfaces::srv::SetAdmissionReelMode_Event & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::srv::SetAdmissionReelMode_Event response(::atm_interfaces::srv::SetAdmissionReelMode_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::SetAdmissionReelMode_Event msg_;
};

class Init_SetAdmissionReelMode_Event_request
{
public:
  explicit Init_SetAdmissionReelMode_Event_request(::atm_interfaces::srv::SetAdmissionReelMode_Event & msg)
  : msg_(msg)
  {}
  Init_SetAdmissionReelMode_Event_response request(::atm_interfaces::srv::SetAdmissionReelMode_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetAdmissionReelMode_Event_response(msg_);
  }

private:
  ::atm_interfaces::srv::SetAdmissionReelMode_Event msg_;
};

class Init_SetAdmissionReelMode_Event_info
{
public:
  Init_SetAdmissionReelMode_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAdmissionReelMode_Event_request info(::atm_interfaces::srv::SetAdmissionReelMode_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetAdmissionReelMode_Event_request(msg_);
  }

private:
  ::atm_interfaces::srv::SetAdmissionReelMode_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::SetAdmissionReelMode_Event>()
{
  return atm_interfaces::srv::builder::Init_SetAdmissionReelMode_Event_info();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__SRV__DETAIL__SET_ADMISSION_REEL_MODE__BUILDER_HPP_
