// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:srv/StopPump.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/srv/stop_pump.hpp"


#ifndef ATM_INTERFACES__SRV__DETAIL__STOP_PUMP__BUILDER_HPP_
#define ATM_INTERFACES__SRV__DETAIL__STOP_PUMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/srv/detail/stop_pump__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_StopPump_Request_stop
{
public:
  Init_StopPump_Request_stop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::atm_interfaces::srv::StopPump_Request stop(::atm_interfaces::srv::StopPump_Request::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::StopPump_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::StopPump_Request>()
{
  return atm_interfaces::srv::builder::Init_StopPump_Request_stop();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_StopPump_Response_message
{
public:
  explicit Init_StopPump_Response_message(::atm_interfaces::srv::StopPump_Response & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::srv::StopPump_Response message(::atm_interfaces::srv::StopPump_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::StopPump_Response msg_;
};

class Init_StopPump_Response_success
{
public:
  Init_StopPump_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopPump_Response_message success(::atm_interfaces::srv::StopPump_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_StopPump_Response_message(msg_);
  }

private:
  ::atm_interfaces::srv::StopPump_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::StopPump_Response>()
{
  return atm_interfaces::srv::builder::Init_StopPump_Response_success();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_StopPump_Event_response
{
public:
  explicit Init_StopPump_Event_response(::atm_interfaces::srv::StopPump_Event & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::srv::StopPump_Event response(::atm_interfaces::srv::StopPump_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::StopPump_Event msg_;
};

class Init_StopPump_Event_request
{
public:
  explicit Init_StopPump_Event_request(::atm_interfaces::srv::StopPump_Event & msg)
  : msg_(msg)
  {}
  Init_StopPump_Event_response request(::atm_interfaces::srv::StopPump_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StopPump_Event_response(msg_);
  }

private:
  ::atm_interfaces::srv::StopPump_Event msg_;
};

class Init_StopPump_Event_info
{
public:
  Init_StopPump_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopPump_Event_request info(::atm_interfaces::srv::StopPump_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StopPump_Event_request(msg_);
  }

private:
  ::atm_interfaces::srv::StopPump_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::StopPump_Event>()
{
  return atm_interfaces::srv::builder::Init_StopPump_Event_info();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__SRV__DETAIL__STOP_PUMP__BUILDER_HPP_
