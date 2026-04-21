// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:msg/Heartbeat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/heartbeat.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__HEARTBEAT__BUILDER_HPP_
#define ATM_INTERFACES__MSG__DETAIL__HEARTBEAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/msg/detail/heartbeat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace msg
{

namespace builder
{

class Init_Heartbeat_state
{
public:
  explicit Init_Heartbeat_state(::atm_interfaces::msg::Heartbeat & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::msg::Heartbeat state(::atm_interfaces::msg::Heartbeat::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::msg::Heartbeat msg_;
};

class Init_Heartbeat_ok
{
public:
  explicit Init_Heartbeat_ok(::atm_interfaces::msg::Heartbeat & msg)
  : msg_(msg)
  {}
  Init_Heartbeat_state ok(::atm_interfaces::msg::Heartbeat::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return Init_Heartbeat_state(msg_);
  }

private:
  ::atm_interfaces::msg::Heartbeat msg_;
};

class Init_Heartbeat_seq
{
public:
  explicit Init_Heartbeat_seq(::atm_interfaces::msg::Heartbeat & msg)
  : msg_(msg)
  {}
  Init_Heartbeat_ok seq(::atm_interfaces::msg::Heartbeat::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_Heartbeat_ok(msg_);
  }

private:
  ::atm_interfaces::msg::Heartbeat msg_;
};

class Init_Heartbeat_stamp
{
public:
  explicit Init_Heartbeat_stamp(::atm_interfaces::msg::Heartbeat & msg)
  : msg_(msg)
  {}
  Init_Heartbeat_seq stamp(::atm_interfaces::msg::Heartbeat::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Heartbeat_seq(msg_);
  }

private:
  ::atm_interfaces::msg::Heartbeat msg_;
};

class Init_Heartbeat_machine_id
{
public:
  explicit Init_Heartbeat_machine_id(::atm_interfaces::msg::Heartbeat & msg)
  : msg_(msg)
  {}
  Init_Heartbeat_stamp machine_id(::atm_interfaces::msg::Heartbeat::_machine_id_type arg)
  {
    msg_.machine_id = std::move(arg);
    return Init_Heartbeat_stamp(msg_);
  }

private:
  ::atm_interfaces::msg::Heartbeat msg_;
};

class Init_Heartbeat_node_name
{
public:
  Init_Heartbeat_node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Heartbeat_machine_id node_name(::atm_interfaces::msg::Heartbeat::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_Heartbeat_machine_id(msg_);
  }

private:
  ::atm_interfaces::msg::Heartbeat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::msg::Heartbeat>()
{
  return atm_interfaces::msg::builder::Init_Heartbeat_node_name();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__HEARTBEAT__BUILDER_HPP_
