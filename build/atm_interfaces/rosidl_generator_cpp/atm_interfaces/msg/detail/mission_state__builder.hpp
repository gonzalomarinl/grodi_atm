// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:msg/MissionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/mission_state.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_
#define ATM_INTERFACES__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/msg/detail/mission_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace msg
{

namespace builder
{

class Init_MissionState_stamp
{
public:
  explicit Init_MissionState_stamp(::atm_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::msg::MissionState stamp(::atm_interfaces::msg::MissionState::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::msg::MissionState msg_;
};

class Init_MissionState_comms_degraded
{
public:
  explicit Init_MissionState_comms_degraded(::atm_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_stamp comms_degraded(::atm_interfaces::msg::MissionState::_comms_degraded_type arg)
  {
    msg_.comms_degraded = std::move(arg);
    return Init_MissionState_stamp(msg_);
  }

private:
  ::atm_interfaces::msg::MissionState msg_;
};

class Init_MissionState_current_line_id
{
public:
  explicit Init_MissionState_current_line_id(::atm_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_comms_degraded current_line_id(::atm_interfaces::msg::MissionState::_current_line_id_type arg)
  {
    msg_.current_line_id = std::move(arg);
    return Init_MissionState_comms_degraded(msg_);
  }

private:
  ::atm_interfaces::msg::MissionState msg_;
};

class Init_MissionState_current_stop_index
{
public:
  explicit Init_MissionState_current_stop_index(::atm_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_current_line_id current_stop_index(::atm_interfaces::msg::MissionState::_current_stop_index_type arg)
  {
    msg_.current_stop_index = std::move(arg);
    return Init_MissionState_current_line_id(msg_);
  }

private:
  ::atm_interfaces::msg::MissionState msg_;
};

class Init_MissionState_state
{
public:
  explicit Init_MissionState_state(::atm_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_current_stop_index state(::atm_interfaces::msg::MissionState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MissionState_current_stop_index(msg_);
  }

private:
  ::atm_interfaces::msg::MissionState msg_;
};

class Init_MissionState_mission_type
{
public:
  explicit Init_MissionState_mission_type(::atm_interfaces::msg::MissionState & msg)
  : msg_(msg)
  {}
  Init_MissionState_state mission_type(::atm_interfaces::msg::MissionState::_mission_type_type arg)
  {
    msg_.mission_type = std::move(arg);
    return Init_MissionState_state(msg_);
  }

private:
  ::atm_interfaces::msg::MissionState msg_;
};

class Init_MissionState_mission_id
{
public:
  Init_MissionState_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionState_mission_type mission_id(::atm_interfaces::msg::MissionState::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_MissionState_mission_type(msg_);
  }

private:
  ::atm_interfaces::msg::MissionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::msg::MissionState>()
{
  return atm_interfaces::msg::builder::Init_MissionState_mission_id();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__MISSION_STATE__BUILDER_HPP_
