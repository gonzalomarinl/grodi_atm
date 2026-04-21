// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:msg/LineTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/line_target.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__LINE_TARGET__BUILDER_HPP_
#define ATM_INTERFACES__MSG__DETAIL__LINE_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/msg/detail/line_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace msg
{

namespace builder
{

class Init_LineTarget_notes
{
public:
  explicit Init_LineTarget_notes(::atm_interfaces::msg::LineTarget & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::msg::LineTarget notes(::atm_interfaces::msg::LineTarget::_notes_type arg)
  {
    msg_.notes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::msg::LineTarget msg_;
};

class Init_LineTarget_selected_by_vega
{
public:
  explicit Init_LineTarget_selected_by_vega(::atm_interfaces::msg::LineTarget & msg)
  : msg_(msg)
  {}
  Init_LineTarget_notes selected_by_vega(::atm_interfaces::msg::LineTarget::_selected_by_vega_type arg)
  {
    msg_.selected_by_vega = std::move(arg);
    return Init_LineTarget_notes(msg_);
  }

private:
  ::atm_interfaces::msg::LineTarget msg_;
};

class Init_LineTarget_mode
{
public:
  explicit Init_LineTarget_mode(::atm_interfaces::msg::LineTarget & msg)
  : msg_(msg)
  {}
  Init_LineTarget_selected_by_vega mode(::atm_interfaces::msg::LineTarget::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_LineTarget_selected_by_vega(msg_);
  }

private:
  ::atm_interfaces::msg::LineTarget msg_;
};

class Init_LineTarget_stop_index
{
public:
  explicit Init_LineTarget_stop_index(::atm_interfaces::msg::LineTarget & msg)
  : msg_(msg)
  {}
  Init_LineTarget_mode stop_index(::atm_interfaces::msg::LineTarget::_stop_index_type arg)
  {
    msg_.stop_index = std::move(arg);
    return Init_LineTarget_mode(msg_);
  }

private:
  ::atm_interfaces::msg::LineTarget msg_;
};

class Init_LineTarget_line_id
{
public:
  explicit Init_LineTarget_line_id(::atm_interfaces::msg::LineTarget & msg)
  : msg_(msg)
  {}
  Init_LineTarget_stop_index line_id(::atm_interfaces::msg::LineTarget::_line_id_type arg)
  {
    msg_.line_id = std::move(arg);
    return Init_LineTarget_stop_index(msg_);
  }

private:
  ::atm_interfaces::msg::LineTarget msg_;
};

class Init_LineTarget_gap_id
{
public:
  explicit Init_LineTarget_gap_id(::atm_interfaces::msg::LineTarget & msg)
  : msg_(msg)
  {}
  Init_LineTarget_line_id gap_id(::atm_interfaces::msg::LineTarget::_gap_id_type arg)
  {
    msg_.gap_id = std::move(arg);
    return Init_LineTarget_line_id(msg_);
  }

private:
  ::atm_interfaces::msg::LineTarget msg_;
};

class Init_LineTarget_mission_id
{
public:
  Init_LineTarget_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LineTarget_gap_id mission_id(::atm_interfaces::msg::LineTarget::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_LineTarget_gap_id(msg_);
  }

private:
  ::atm_interfaces::msg::LineTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::msg::LineTarget>()
{
  return atm_interfaces::msg::builder::Init_LineTarget_mission_id();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__LINE_TARGET__BUILDER_HPP_
