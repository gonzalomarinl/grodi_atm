// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:msg/MissionEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/mission_event.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__MISSION_EVENT__BUILDER_HPP_
#define ATM_INTERFACES__MSG__DETAIL__MISSION_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/msg/detail/mission_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace msg
{

namespace builder
{

class Init_MissionEvent_stamp
{
public:
  explicit Init_MissionEvent_stamp(::atm_interfaces::msg::MissionEvent & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::msg::MissionEvent stamp(::atm_interfaces::msg::MissionEvent::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::msg::MissionEvent msg_;
};

class Init_MissionEvent_detail
{
public:
  explicit Init_MissionEvent_detail(::atm_interfaces::msg::MissionEvent & msg)
  : msg_(msg)
  {}
  Init_MissionEvent_stamp detail(::atm_interfaces::msg::MissionEvent::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return Init_MissionEvent_stamp(msg_);
  }

private:
  ::atm_interfaces::msg::MissionEvent msg_;
};

class Init_MissionEvent_source
{
public:
  explicit Init_MissionEvent_source(::atm_interfaces::msg::MissionEvent & msg)
  : msg_(msg)
  {}
  Init_MissionEvent_detail source(::atm_interfaces::msg::MissionEvent::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_MissionEvent_detail(msg_);
  }

private:
  ::atm_interfaces::msg::MissionEvent msg_;
};

class Init_MissionEvent_event_type
{
public:
  explicit Init_MissionEvent_event_type(::atm_interfaces::msg::MissionEvent & msg)
  : msg_(msg)
  {}
  Init_MissionEvent_source event_type(::atm_interfaces::msg::MissionEvent::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return Init_MissionEvent_source(msg_);
  }

private:
  ::atm_interfaces::msg::MissionEvent msg_;
};

class Init_MissionEvent_mission_id
{
public:
  Init_MissionEvent_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionEvent_event_type mission_id(::atm_interfaces::msg::MissionEvent::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_MissionEvent_event_type(msg_);
  }

private:
  ::atm_interfaces::msg::MissionEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::msg::MissionEvent>()
{
  return atm_interfaces::msg::builder::Init_MissionEvent_mission_id();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__MISSION_EVENT__BUILDER_HPP_
