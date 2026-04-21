// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atm_interfaces:msg/FaultReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/fault_report.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__FAULT_REPORT__STRUCT_HPP_
#define ATM_INTERFACES__MSG__DETAIL__FAULT_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__atm_interfaces__msg__FaultReport __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__msg__FaultReport __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaultReport_
{
  using Type = FaultReport_<ContainerAllocator>;

  explicit FaultReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->source = "";
      this->fault_code = "";
      this->severity = "";
      this->description = "";
      this->requires_return_home = false;
    }
  }

  explicit FaultReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_id(_alloc),
    source(_alloc),
    fault_code(_alloc),
    severity(_alloc),
    description(_alloc),
    stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->source = "";
      this->fault_code = "";
      this->severity = "";
      this->description = "";
      this->requires_return_home = false;
    }
  }

  // field types and members
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _fault_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fault_code_type fault_code;
  using _severity_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _severity_type severity;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _requires_return_home_type =
    bool;
  _requires_return_home_type requires_return_home;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__mission_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__fault_code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fault_code = _arg;
    return *this;
  }
  Type & set__severity(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->severity = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__requires_return_home(
    const bool & _arg)
  {
    this->requires_return_home = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atm_interfaces::msg::FaultReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::msg::FaultReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::msg::FaultReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::msg::FaultReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::FaultReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::FaultReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::FaultReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::FaultReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::msg::FaultReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::msg::FaultReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__msg__FaultReport
    std::shared_ptr<atm_interfaces::msg::FaultReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__msg__FaultReport
    std::shared_ptr<atm_interfaces::msg::FaultReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaultReport_ & other) const
  {
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->fault_code != other.fault_code) {
      return false;
    }
    if (this->severity != other.severity) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->requires_return_home != other.requires_return_home) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaultReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaultReport_

// alias to use template instance with default allocator
using FaultReport =
  atm_interfaces::msg::FaultReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__FAULT_REPORT__STRUCT_HPP_
