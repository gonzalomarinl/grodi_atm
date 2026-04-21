// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:srv/GetSystemState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/srv/get_system_state.hpp"


#ifndef ATM_INTERFACES__SRV__DETAIL__GET_SYSTEM_STATE__BUILDER_HPP_
#define ATM_INTERFACES__SRV__DETAIL__GET_SYSTEM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/srv/detail/get_system_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSystemState_Request_verbose
{
public:
  Init_GetSystemState_Request_verbose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::atm_interfaces::srv::GetSystemState_Request verbose(::atm_interfaces::srv::GetSystemState_Request::_verbose_type arg)
  {
    msg_.verbose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::GetSystemState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::GetSystemState_Request>()
{
  return atm_interfaces::srv::builder::Init_GetSystemState_Request_verbose();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSystemState_Response_detail
{
public:
  explicit Init_GetSystemState_Response_detail(::atm_interfaces::srv::GetSystemState_Response & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::srv::GetSystemState_Response detail(::atm_interfaces::srv::GetSystemState_Response::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::GetSystemState_Response msg_;
};

class Init_GetSystemState_Response_mission_id
{
public:
  explicit Init_GetSystemState_Response_mission_id(::atm_interfaces::srv::GetSystemState_Response & msg)
  : msg_(msg)
  {}
  Init_GetSystemState_Response_detail mission_id(::atm_interfaces::srv::GetSystemState_Response::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_GetSystemState_Response_detail(msg_);
  }

private:
  ::atm_interfaces::srv::GetSystemState_Response msg_;
};

class Init_GetSystemState_Response_slave_state
{
public:
  explicit Init_GetSystemState_Response_slave_state(::atm_interfaces::srv::GetSystemState_Response & msg)
  : msg_(msg)
  {}
  Init_GetSystemState_Response_mission_id slave_state(::atm_interfaces::srv::GetSystemState_Response::_slave_state_type arg)
  {
    msg_.slave_state = std::move(arg);
    return Init_GetSystemState_Response_mission_id(msg_);
  }

private:
  ::atm_interfaces::srv::GetSystemState_Response msg_;
};

class Init_GetSystemState_Response_master_state
{
public:
  explicit Init_GetSystemState_Response_master_state(::atm_interfaces::srv::GetSystemState_Response & msg)
  : msg_(msg)
  {}
  Init_GetSystemState_Response_slave_state master_state(::atm_interfaces::srv::GetSystemState_Response::_master_state_type arg)
  {
    msg_.master_state = std::move(arg);
    return Init_GetSystemState_Response_slave_state(msg_);
  }

private:
  ::atm_interfaces::srv::GetSystemState_Response msg_;
};

class Init_GetSystemState_Response_success
{
public:
  Init_GetSystemState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSystemState_Response_master_state success(::atm_interfaces::srv::GetSystemState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetSystemState_Response_master_state(msg_);
  }

private:
  ::atm_interfaces::srv::GetSystemState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::GetSystemState_Response>()
{
  return atm_interfaces::srv::builder::Init_GetSystemState_Response_success();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSystemState_Event_response
{
public:
  explicit Init_GetSystemState_Event_response(::atm_interfaces::srv::GetSystemState_Event & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::srv::GetSystemState_Event response(::atm_interfaces::srv::GetSystemState_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::srv::GetSystemState_Event msg_;
};

class Init_GetSystemState_Event_request
{
public:
  explicit Init_GetSystemState_Event_request(::atm_interfaces::srv::GetSystemState_Event & msg)
  : msg_(msg)
  {}
  Init_GetSystemState_Event_response request(::atm_interfaces::srv::GetSystemState_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetSystemState_Event_response(msg_);
  }

private:
  ::atm_interfaces::srv::GetSystemState_Event msg_;
};

class Init_GetSystemState_Event_info
{
public:
  Init_GetSystemState_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSystemState_Event_request info(::atm_interfaces::srv::GetSystemState_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetSystemState_Event_request(msg_);
  }

private:
  ::atm_interfaces::srv::GetSystemState_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::srv::GetSystemState_Event>()
{
  return atm_interfaces::srv::builder::Init_GetSystemState_Event_info();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__SRV__DETAIL__GET_SYSTEM_STATE__BUILDER_HPP_
