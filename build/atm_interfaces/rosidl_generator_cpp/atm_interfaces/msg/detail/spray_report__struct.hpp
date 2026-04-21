// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atm_interfaces:msg/SprayReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/spray_report.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__SPRAY_REPORT__STRUCT_HPP_
#define ATM_INTERFACES__MSG__DETAIL__SPRAY_REPORT__STRUCT_HPP_

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
# define DEPRECATED__atm_interfaces__msg__SprayReport __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__msg__SprayReport __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SprayReport_
{
  using Type = SprayReport_<ContainerAllocator>;

  explicit SprayReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->line_id = "";
      this->stop_index = 0ul;
      this->success = false;
      this->duration_sec = 0.0f;
    }
  }

  explicit SprayReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_id(_alloc),
    line_id(_alloc),
    stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->line_id = "";
      this->stop_index = 0ul;
      this->success = false;
      this->duration_sec = 0.0f;
    }
  }

  // field types and members
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;
  using _line_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _line_id_type line_id;
  using _stop_index_type =
    uint32_t;
  _stop_index_type stop_index;
  using _success_type =
    bool;
  _success_type success;
  using _duration_sec_type =
    float;
  _duration_sec_type duration_sec;
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
  Type & set__line_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->line_id = _arg;
    return *this;
  }
  Type & set__stop_index(
    const uint32_t & _arg)
  {
    this->stop_index = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__duration_sec(
    const float & _arg)
  {
    this->duration_sec = _arg;
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
    atm_interfaces::msg::SprayReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::msg::SprayReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::msg::SprayReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::msg::SprayReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::SprayReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::SprayReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::SprayReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::SprayReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::msg::SprayReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::msg::SprayReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__msg__SprayReport
    std::shared_ptr<atm_interfaces::msg::SprayReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__msg__SprayReport
    std::shared_ptr<atm_interfaces::msg::SprayReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SprayReport_ & other) const
  {
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->line_id != other.line_id) {
      return false;
    }
    if (this->stop_index != other.stop_index) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->duration_sec != other.duration_sec) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SprayReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SprayReport_

// alias to use template instance with default allocator
using SprayReport =
  atm_interfaces::msg::SprayReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__SPRAY_REPORT__STRUCT_HPP_
