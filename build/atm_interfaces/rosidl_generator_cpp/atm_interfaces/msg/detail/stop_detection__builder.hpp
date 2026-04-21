// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:msg/StopDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/stop_detection.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__STOP_DETECTION__BUILDER_HPP_
#define ATM_INTERFACES__MSG__DETAIL__STOP_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/msg/detail/stop_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace msg
{

namespace builder
{

class Init_StopDetection_mission_match
{
public:
  explicit Init_StopDetection_mission_match(::atm_interfaces::msg::StopDetection & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::msg::StopDetection mission_match(::atm_interfaces::msg::StopDetection::_mission_match_type arg)
  {
    msg_.mission_match = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::msg::StopDetection msg_;
};

class Init_StopDetection_confidence
{
public:
  explicit Init_StopDetection_confidence(::atm_interfaces::msg::StopDetection & msg)
  : msg_(msg)
  {}
  Init_StopDetection_mission_match confidence(::atm_interfaces::msg::StopDetection::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_StopDetection_mission_match(msg_);
  }

private:
  ::atm_interfaces::msg::StopDetection msg_;
};

class Init_StopDetection_estimated_line_id
{
public:
  explicit Init_StopDetection_estimated_line_id(::atm_interfaces::msg::StopDetection & msg)
  : msg_(msg)
  {}
  Init_StopDetection_confidence estimated_line_id(::atm_interfaces::msg::StopDetection::_estimated_line_id_type arg)
  {
    msg_.estimated_line_id = std::move(arg);
    return Init_StopDetection_confidence(msg_);
  }

private:
  ::atm_interfaces::msg::StopDetection msg_;
};

class Init_StopDetection_estimated_gap_id
{
public:
  explicit Init_StopDetection_estimated_gap_id(::atm_interfaces::msg::StopDetection & msg)
  : msg_(msg)
  {}
  Init_StopDetection_estimated_line_id estimated_gap_id(::atm_interfaces::msg::StopDetection::_estimated_gap_id_type arg)
  {
    msg_.estimated_gap_id = std::move(arg);
    return Init_StopDetection_estimated_line_id(msg_);
  }

private:
  ::atm_interfaces::msg::StopDetection msg_;
};

class Init_StopDetection_detected_class
{
public:
  explicit Init_StopDetection_detected_class(::atm_interfaces::msg::StopDetection & msg)
  : msg_(msg)
  {}
  Init_StopDetection_estimated_gap_id detected_class(::atm_interfaces::msg::StopDetection::_detected_class_type arg)
  {
    msg_.detected_class = std::move(arg);
    return Init_StopDetection_estimated_gap_id(msg_);
  }

private:
  ::atm_interfaces::msg::StopDetection msg_;
};

class Init_StopDetection_detected
{
public:
  explicit Init_StopDetection_detected(::atm_interfaces::msg::StopDetection & msg)
  : msg_(msg)
  {}
  Init_StopDetection_detected_class detected(::atm_interfaces::msg::StopDetection::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_StopDetection_detected_class(msg_);
  }

private:
  ::atm_interfaces::msg::StopDetection msg_;
};

class Init_StopDetection_stamp
{
public:
  Init_StopDetection_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopDetection_detected stamp(::atm_interfaces::msg::StopDetection::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_StopDetection_detected(msg_);
  }

private:
  ::atm_interfaces::msg::StopDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::msg::StopDetection>()
{
  return atm_interfaces::msg::builder::Init_StopDetection_stamp();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__STOP_DETECTION__BUILDER_HPP_
