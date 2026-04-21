// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:msg/SlaveStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/slave_status.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__SLAVE_STATUS__BUILDER_HPP_
#define ATM_INTERFACES__MSG__DETAIL__SLAVE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/msg/detail/slave_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace msg
{

namespace builder
{

class Init_SlaveStatus_link_ok
{
public:
  explicit Init_SlaveStatus_link_ok(::atm_interfaces::msg::SlaveStatus & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::msg::SlaveStatus link_ok(::atm_interfaces::msg::SlaveStatus::_link_ok_type arg)
  {
    msg_.link_ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::msg::SlaveStatus msg_;
};

class Init_SlaveStatus_current_stop_index
{
public:
  explicit Init_SlaveStatus_current_stop_index(::atm_interfaces::msg::SlaveStatus & msg)
  : msg_(msg)
  {}
  Init_SlaveStatus_link_ok current_stop_index(::atm_interfaces::msg::SlaveStatus::_current_stop_index_type arg)
  {
    msg_.current_stop_index = std::move(arg);
    return Init_SlaveStatus_link_ok(msg_);
  }

private:
  ::atm_interfaces::msg::SlaveStatus msg_;
};

class Init_SlaveStatus_current_line_id
{
public:
  explicit Init_SlaveStatus_current_line_id(::atm_interfaces::msg::SlaveStatus & msg)
  : msg_(msg)
  {}
  Init_SlaveStatus_current_stop_index current_line_id(::atm_interfaces::msg::SlaveStatus::_current_line_id_type arg)
  {
    msg_.current_line_id = std::move(arg);
    return Init_SlaveStatus_current_stop_index(msg_);
  }

private:
  ::atm_interfaces::msg::SlaveStatus msg_;
};

class Init_SlaveStatus_atomizer_down
{
public:
  explicit Init_SlaveStatus_atomizer_down(::atm_interfaces::msg::SlaveStatus & msg)
  : msg_(msg)
  {}
  Init_SlaveStatus_current_line_id atomizer_down(::atm_interfaces::msg::SlaveStatus::_atomizer_down_type arg)
  {
    msg_.atomizer_down = std::move(arg);
    return Init_SlaveStatus_current_line_id(msg_);
  }

private:
  ::atm_interfaces::msg::SlaveStatus msg_;
};

class Init_SlaveStatus_atomizer_up
{
public:
  explicit Init_SlaveStatus_atomizer_up(::atm_interfaces::msg::SlaveStatus & msg)
  : msg_(msg)
  {}
  Init_SlaveStatus_atomizer_down atomizer_up(::atm_interfaces::msg::SlaveStatus::_atomizer_up_type arg)
  {
    msg_.atomizer_up = std::move(arg);
    return Init_SlaveStatus_atomizer_down(msg_);
  }

private:
  ::atm_interfaces::msg::SlaveStatus msg_;
};

class Init_SlaveStatus_moving
{
public:
  explicit Init_SlaveStatus_moving(::atm_interfaces::msg::SlaveStatus & msg)
  : msg_(msg)
  {}
  Init_SlaveStatus_atomizer_up moving(::atm_interfaces::msg::SlaveStatus::_moving_type arg)
  {
    msg_.moving = std::move(arg);
    return Init_SlaveStatus_atomizer_up(msg_);
  }

private:
  ::atm_interfaces::msg::SlaveStatus msg_;
};

class Init_SlaveStatus_at_base
{
public:
  explicit Init_SlaveStatus_at_base(::atm_interfaces::msg::SlaveStatus & msg)
  : msg_(msg)
  {}
  Init_SlaveStatus_moving at_base(::atm_interfaces::msg::SlaveStatus::_at_base_type arg)
  {
    msg_.at_base = std::move(arg);
    return Init_SlaveStatus_moving(msg_);
  }

private:
  ::atm_interfaces::msg::SlaveStatus msg_;
};

class Init_SlaveStatus_state
{
public:
  Init_SlaveStatus_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SlaveStatus_at_base state(::atm_interfaces::msg::SlaveStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SlaveStatus_at_base(msg_);
  }

private:
  ::atm_interfaces::msg::SlaveStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::msg::SlaveStatus>()
{
  return atm_interfaces::msg::builder::Init_SlaveStatus_state();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__SLAVE_STATUS__BUILDER_HPP_
