// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:srv/SetZoneSelection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/srv/set_zone_selection.hpp"


#ifndef ATM_INTERFACES__SRV__DETAIL__SET_ZONE_SELECTION__BUILDER_HPP_
#define ATM_INTERFACES__SRV__DETAIL__SET_ZONE_SELECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/srv/detail/set_zone_selection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetZoneSelection_Request_line_id
{
public:
  explicit Init_SetZoneSelection_Request_line_id(::atm_interfaces::srv::SetZoneSelection_Request & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::srv::SetZoneSelection_Request line_id(::atm_interfaces::srv::SetZoneSelection_Request::_line_id_type arg)
  {
    msg_.line_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::SetZoneSelection_Request msg_;
};

class Init_SetZoneSelection_Request_mission_id
{
public:
  Init_SetZoneSelection_Request_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetZoneSelection_Request_line_id mission_id(::atm_interfaces::srv::SetZoneSelection_Request::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_SetZoneSelection_Request_line_id(msg_);
  }

private:
  ::atm_interfaces::srv::SetZoneSelection_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::SetZoneSelection_Request>()
{
  return atm_interfaces::srv::builder::Init_SetZoneSelection_Request_mission_id();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetZoneSelection_Response_message
{
public:
  explicit Init_SetZoneSelection_Response_message(::atm_interfaces::srv::SetZoneSelection_Response & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::srv::SetZoneSelection_Response message(::atm_interfaces::srv::SetZoneSelection_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::SetZoneSelection_Response msg_;
};

class Init_SetZoneSelection_Response_success
{
public:
  Init_SetZoneSelection_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetZoneSelection_Response_message success(::atm_interfaces::srv::SetZoneSelection_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetZoneSelection_Response_message(msg_);
  }

private:
  ::atm_interfaces::srv::SetZoneSelection_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::SetZoneSelection_Response>()
{
  return atm_interfaces::srv::builder::Init_SetZoneSelection_Response_success();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetZoneSelection_Event_response
{
public:
  explicit Init_SetZoneSelection_Event_response(::atm_interfaces::srv::SetZoneSelection_Event & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::srv::SetZoneSelection_Event response(::atm_interfaces::srv::SetZoneSelection_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::SetZoneSelection_Event msg_;
};

class Init_SetZoneSelection_Event_request
{
public:
  explicit Init_SetZoneSelection_Event_request(::atm_interfaces::srv::SetZoneSelection_Event & msg)
  : msg_(msg)
  {}
  Init_SetZoneSelection_Event_response request(::atm_interfaces::srv::SetZoneSelection_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetZoneSelection_Event_response(msg_);
  }

private:
  ::atm_interfaces::srv::SetZoneSelection_Event msg_;
};

class Init_SetZoneSelection_Event_info
{
public:
  Init_SetZoneSelection_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetZoneSelection_Event_request info(::atm_interfaces::srv::SetZoneSelection_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetZoneSelection_Event_request(msg_);
  }

private:
  ::atm_interfaces::srv::SetZoneSelection_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::SetZoneSelection_Event>()
{
  return atm_interfaces::srv::builder::Init_SetZoneSelection_Event_info();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__SRV__DETAIL__SET_ZONE_SELECTION__BUILDER_HPP_
