// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:msg/FaultReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/fault_report.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__FAULT_REPORT__BUILDER_HPP_
#define ATM_INTERFACES__MSG__DETAIL__FAULT_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/msg/detail/fault_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace msg
{

namespace builder
{

class Init_FaultReport_stamp
{
public:
  explicit Init_FaultReport_stamp(::atm_interfaces::msg::FaultReport & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::msg::FaultReport stamp(::atm_interfaces::msg::FaultReport::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::msg::FaultReport msg_;
};

class Init_FaultReport_requires_return_home
{
public:
  explicit Init_FaultReport_requires_return_home(::atm_interfaces::msg::FaultReport & msg)
  : msg_(msg)
  {}
  Init_FaultReport_stamp requires_return_home(::atm_interfaces::msg::FaultReport::_requires_return_home_type arg)
  {
    msg_.requires_return_home = std::move(arg);
    return Init_FaultReport_stamp(msg_);
  }

private:
  ::atm_interfaces::msg::FaultReport msg_;
};

class Init_FaultReport_description
{
public:
  explicit Init_FaultReport_description(::atm_interfaces::msg::FaultReport & msg)
  : msg_(msg)
  {}
  Init_FaultReport_requires_return_home description(::atm_interfaces::msg::FaultReport::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_FaultReport_requires_return_home(msg_);
  }

private:
  ::atm_interfaces::msg::FaultReport msg_;
};

class Init_FaultReport_severity
{
public:
  explicit Init_FaultReport_severity(::atm_interfaces::msg::FaultReport & msg)
  : msg_(msg)
  {}
  Init_FaultReport_description severity(::atm_interfaces::msg::FaultReport::_severity_type arg)
  {
    msg_.severity = std::move(arg);
    return Init_FaultReport_description(msg_);
  }

private:
  ::atm_interfaces::msg::FaultReport msg_;
};

class Init_FaultReport_fault_code
{
public:
  explicit Init_FaultReport_fault_code(::atm_interfaces::msg::FaultReport & msg)
  : msg_(msg)
  {}
  Init_FaultReport_severity fault_code(::atm_interfaces::msg::FaultReport::_fault_code_type arg)
  {
    msg_.fault_code = std::move(arg);
    return Init_FaultReport_severity(msg_);
  }

private:
  ::atm_interfaces::msg::FaultReport msg_;
};

class Init_FaultReport_source
{
public:
  explicit Init_FaultReport_source(::atm_interfaces::msg::FaultReport & msg)
  : msg_(msg)
  {}
  Init_FaultReport_fault_code source(::atm_interfaces::msg::FaultReport::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_FaultReport_fault_code(msg_);
  }

private:
  ::atm_interfaces::msg::FaultReport msg_;
};

class Init_FaultReport_mission_id
{
public:
  Init_FaultReport_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaultReport_source mission_id(::atm_interfaces::msg::FaultReport::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_FaultReport_source(msg_);
  }

private:
  ::atm_interfaces::msg::FaultReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::msg::FaultReport>()
{
  return atm_interfaces::msg::builder::Init_FaultReport_mission_id();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__FAULT_REPORT__BUILDER_HPP_
