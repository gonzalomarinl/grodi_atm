// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:srv/StartPump.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/srv/start_pump.hpp"


#ifndef ATM_INTERFACES__SRV__DETAIL__START_PUMP__BUILDER_HPP_
#define ATM_INTERFACES__SRV__DETAIL__START_PUMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/srv/detail/start_pump__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_StartPump_Request_enable
{
public:
  Init_StartPump_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::atm_interfaces::srv::StartPump_Request enable(::atm_interfaces::srv::StartPump_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::StartPump_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::StartPump_Request>()
{
  return atm_interfaces::srv::builder::Init_StartPump_Request_enable();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_StartPump_Response_message
{
public:
  explicit Init_StartPump_Response_message(::atm_interfaces::srv::StartPump_Response & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::srv::StartPump_Response message(::atm_interfaces::srv::StartPump_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::StartPump_Response msg_;
};

class Init_StartPump_Response_success
{
public:
  Init_StartPump_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartPump_Response_message success(::atm_interfaces::srv::StartPump_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_StartPump_Response_message(msg_);
  }

private:
  ::atm_interfaces::srv::StartPump_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::StartPump_Response>()
{
  return atm_interfaces::srv::builder::Init_StartPump_Response_success();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_StartPump_Event_response
{
public:
  explicit Init_StartPump_Event_response(::atm_interfaces::srv::StartPump_Event & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::srv::StartPump_Event response(::atm_interfaces::srv::StartPump_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::StartPump_Event msg_;
};

class Init_StartPump_Event_request
{
public:
  explicit Init_StartPump_Event_request(::atm_interfaces::srv::StartPump_Event & msg)
  : msg_(msg)
  {}
  Init_StartPump_Event_response request(::atm_interfaces::srv::StartPump_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StartPump_Event_response(msg_);
  }

private:
  ::atm_interfaces::srv::StartPump_Event msg_;
};

class Init_StartPump_Event_info
{
public:
  Init_StartPump_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartPump_Event_request info(::atm_interfaces::srv::StartPump_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StartPump_Event_request(msg_);
  }

private:
  ::atm_interfaces::srv::StartPump_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::StartPump_Event>()
{
  return atm_interfaces::srv::builder::Init_StartPump_Event_info();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__SRV__DETAIL__START_PUMP__BUILDER_HPP_
