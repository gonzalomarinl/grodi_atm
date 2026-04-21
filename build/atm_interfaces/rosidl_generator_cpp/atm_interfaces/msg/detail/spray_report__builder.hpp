// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:msg/SprayReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/spray_report.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__SPRAY_REPORT__BUILDER_HPP_
#define ATM_INTERFACES__MSG__DETAIL__SPRAY_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/msg/detail/spray_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace msg
{

namespace builder
{

class Init_SprayReport_stamp
{
public:
  explicit Init_SprayReport_stamp(::atm_interfaces::msg::SprayReport & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::msg::SprayReport stamp(::atm_interfaces::msg::SprayReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::msg::SprayReport msg_;
};

class Init_SprayReport_duration_sec
{
public:
  explicit Init_SprayReport_duration_sec(::atm_interfaces::msg::SprayReport & msg)
  : msg_(msg)
  {}
  Init_SprayReport_stamp duration_sec(::atm_interfaces::msg::SprayReport::_duration_sec_type arg)
  {
    msg_.duration_sec = std::move(arg);
    return Init_SprayReport_stamp(msg_);
  }

private:
  ::atm_interfaces::msg::SprayReport msg_;
};

class Init_SprayReport_success
{
public:
  explicit Init_SprayReport_success(::atm_interfaces::msg::SprayReport & msg)
  : msg_(msg)
  {}
  Init_SprayReport_duration_sec success(::atm_interfaces::msg::SprayReport::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SprayReport_duration_sec(msg_);
  }

private:
  ::atm_interfaces::msg::SprayReport msg_;
};

class Init_SprayReport_stop_index
{
public:
  explicit Init_SprayReport_stop_index(::atm_interfaces::msg::SprayReport & msg)
  : msg_(msg)
  {}
  Init_SprayReport_success stop_index(::atm_interfaces::msg::SprayReport::_stop_index_type arg)
  {
    msg_.stop_index = std::move(arg);
    return Init_SprayReport_success(msg_);
  }

private:
  ::atm_interfaces::msg::SprayReport msg_;
};

class Init_SprayReport_line_id
{
public:
  explicit Init_SprayReport_line_id(::atm_interfaces::msg::SprayReport & msg)
  : msg_(msg)
  {}
  Init_SprayReport_stop_index line_id(::atm_interfaces::msg::SprayReport::_line_id_type arg)
  {
    msg_.line_id = std::move(arg);
    return Init_SprayReport_stop_index(msg_);
  }

private:
  ::atm_interfaces::msg::SprayReport msg_;
};

class Init_SprayReport_mission_id
{
public:
  Init_SprayReport_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayReport_line_id mission_id(::atm_interfaces::msg::SprayReport::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_SprayReport_line_id(msg_);
  }

private:
  ::atm_interfaces::msg::SprayReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::msg::SprayReport>()
{
  return atm_interfaces::msg::builder::Init_SprayReport_mission_id();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__SPRAY_REPORT__BUILDER_HPP_
