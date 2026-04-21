// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atm_interfaces:msg/MasterStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/master_status.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__MASTER_STATUS__STRUCT_HPP_
#define ATM_INTERFACES__MSG__DETAIL__MASTER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__atm_interfaces__msg__MasterStatus __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__msg__MasterStatus __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MasterStatus_
{
  using Type = MasterStatus_<ContainerAllocator>;

  explicit MasterStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->pump_enabled = false;
      this->reel_state = "";
      this->link_ok = false;
      this->system_armed = false;
    }
  }

  explicit MasterStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc),
    reel_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->pump_enabled = false;
      this->reel_state = "";
      this->link_ok = false;
      this->system_armed = false;
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _pump_enabled_type =
    bool;
  _pump_enabled_type pump_enabled;
  using _reel_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reel_state_type reel_state;
  using _link_ok_type =
    bool;
  _link_ok_type link_ok;
  using _system_armed_type =
    bool;
  _system_armed_type system_armed;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__pump_enabled(
    const bool & _arg)
  {
    this->pump_enabled = _arg;
    return *this;
  }
  Type & set__reel_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reel_state = _arg;
    return *this;
  }
  Type & set__link_ok(
    const bool & _arg)
  {
    this->link_ok = _arg;
    return *this;
  }
  Type & set__system_armed(
    const bool & _arg)
  {
    this->system_armed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atm_interfaces::msg::MasterStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::msg::MasterStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::msg::MasterStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::msg::MasterStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::MasterStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::MasterStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::MasterStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::MasterStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::msg::MasterStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::msg::MasterStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__msg__MasterStatus
    std::shared_ptr<atm_interfaces::msg::MasterStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__msg__MasterStatus
    std::shared_ptr<atm_interfaces::msg::MasterStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MasterStatus_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->pump_enabled != other.pump_enabled) {
      return false;
    }
    if (this->reel_state != other.reel_state) {
      return false;
    }
    if (this->link_ok != other.link_ok) {
      return false;
    }
    if (this->system_armed != other.system_armed) {
      return false;
    }
    return true;
  }
  bool operator!=(const MasterStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MasterStatus_

// alias to use template instance with default allocator
using MasterStatus =
  atm_interfaces::msg::MasterStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__MASTER_STATUS__STRUCT_HPP_
