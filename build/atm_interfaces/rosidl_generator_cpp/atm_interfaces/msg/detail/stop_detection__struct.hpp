// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atm_interfaces:msg/StopDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/stop_detection.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__STOP_DETECTION__STRUCT_HPP_
#define ATM_INTERFACES__MSG__DETAIL__STOP_DETECTION__STRUCT_HPP_

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
# define DEPRECATED__atm_interfaces__msg__StopDetection __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__msg__StopDetection __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StopDetection_
{
  using Type = StopDetection_<ContainerAllocator>;

  explicit StopDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      this->detected_class = "";
      this->estimated_gap_id = "";
      this->estimated_line_id = "";
      this->confidence = 0.0f;
      this->mission_match = false;
    }
  }

  explicit StopDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    detected_class(_alloc),
    estimated_gap_id(_alloc),
    estimated_line_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      this->detected_class = "";
      this->estimated_gap_id = "";
      this->estimated_line_id = "";
      this->confidence = 0.0f;
      this->mission_match = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _detected_type =
    bool;
  _detected_type detected;
  using _detected_class_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detected_class_type detected_class;
  using _estimated_gap_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _estimated_gap_id_type estimated_gap_id;
  using _estimated_line_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _estimated_line_id_type estimated_line_id;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _mission_match_type =
    bool;
  _mission_match_type mission_match;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__detected(
    const bool & _arg)
  {
    this->detected = _arg;
    return *this;
  }
  Type & set__detected_class(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->detected_class = _arg;
    return *this;
  }
  Type & set__estimated_gap_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->estimated_gap_id = _arg;
    return *this;
  }
  Type & set__estimated_line_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->estimated_line_id = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__mission_match(
    const bool & _arg)
  {
    this->mission_match = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atm_interfaces::msg::StopDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::msg::StopDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::msg::StopDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::msg::StopDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::StopDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::StopDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::StopDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::StopDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::msg::StopDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::msg::StopDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__msg__StopDetection
    std::shared_ptr<atm_interfaces::msg::StopDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__msg__StopDetection
    std::shared_ptr<atm_interfaces::msg::StopDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopDetection_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->detected != other.detected) {
      return false;
    }
    if (this->detected_class != other.detected_class) {
      return false;
    }
    if (this->estimated_gap_id != other.estimated_gap_id) {
      return false;
    }
    if (this->estimated_line_id != other.estimated_line_id) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->mission_match != other.mission_match) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopDetection_

// alias to use template instance with default allocator
using StopDetection =
  atm_interfaces::msg::StopDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__STOP_DETECTION__STRUCT_HPP_
