// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:msg/MasterStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/master_status.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__MASTER_STATUS__BUILDER_HPP_
#define ATM_INTERFACES__MSG__DETAIL__MASTER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/msg/detail/master_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace msg
{

namespace builder
{

class Init_MasterStatus_system_armed
{
public:
  explicit Init_MasterStatus_system_armed(::atm_interfaces::msg::MasterStatus & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::msg::MasterStatus system_armed(::atm_interfaces::msg::MasterStatus::_system_armed_type arg)
  {
    msg_.system_armed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::msg::MasterStatus msg_;
};

class Init_MasterStatus_link_ok
{
public:
  explicit Init_MasterStatus_link_ok(::atm_interfaces::msg::MasterStatus & msg)
  : msg_(msg)
  {}
  Init_MasterStatus_system_armed link_ok(::atm_interfaces::msg::MasterStatus::_link_ok_type arg)
  {
    msg_.link_ok = std::move(arg);
    return Init_MasterStatus_system_armed(msg_);
  }

private:
  ::atm_interfaces::msg::MasterStatus msg_;
};

class Init_MasterStatus_reel_state
{
public:
  explicit Init_MasterStatus_reel_state(::atm_interfaces::msg::MasterStatus & msg)
  : msg_(msg)
  {}
  Init_MasterStatus_link_ok reel_state(::atm_interfaces::msg::MasterStatus::_reel_state_type arg)
  {
    msg_.reel_state = std::move(arg);
    return Init_MasterStatus_link_ok(msg_);
  }

private:
  ::atm_interfaces::msg::MasterStatus msg_;
};

class Init_MasterStatus_pump_enabled
{
public:
  explicit Init_MasterStatus_pump_enabled(::atm_interfaces::msg::MasterStatus & msg)
  : msg_(msg)
  {}
  Init_MasterStatus_reel_state pump_enabled(::atm_interfaces::msg::MasterStatus::_pump_enabled_type arg)
  {
    msg_.pump_enabled = std::move(arg);
    return Init_MasterStatus_reel_state(msg_);
  }

private:
  ::atm_interfaces::msg::MasterStatus msg_;
};

class Init_MasterStatus_state
{
public:
  Init_MasterStatus_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MasterStatus_pump_enabled state(::atm_interfaces::msg::MasterStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MasterStatus_pump_enabled(msg_);
  }

private:
  ::atm_interfaces::msg::MasterStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::msg::MasterStatus>()
{
  return atm_interfaces::msg::builder::Init_MasterStatus_state();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__MASTER_STATUS__BUILDER_HPP_
