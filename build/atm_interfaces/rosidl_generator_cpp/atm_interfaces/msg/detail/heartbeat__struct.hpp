// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atm_interfaces:msg/Heartbeat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/heartbeat.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__HEARTBEAT__STRUCT_HPP_
#define ATM_INTERFACES__MSG__DETAIL__HEARTBEAT__STRUCT_HPP_

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
# define DEPRECATED__atm_interfaces__msg__Heartbeat __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__msg__Heartbeat __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Heartbeat_
{
  using Type = Heartbeat_<ContainerAllocator>;

  explicit Heartbeat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->machine_id = "";
      this->seq = 0ul;
      this->ok = false;
      this->state = "";
    }
  }

  explicit Heartbeat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_name(_alloc),
    machine_id(_alloc),
    stamp(_alloc, _init),
    state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->machine_id = "";
      this->seq = 0ul;
      this->ok = false;
      this->state = "";
    }
  }

  // field types and members
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_name_type node_name;
  using _machine_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _machine_id_type machine_id;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _seq_type =
    uint32_t;
  _seq_type seq;
  using _ok_type =
    bool;
  _ok_type ok;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }
  Type & set__machine_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->machine_id = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__seq(
    const uint32_t & _arg)
  {
    this->seq = _arg;
    return *this;
  }
  Type & set__ok(
    const bool & _arg)
  {
    this->ok = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atm_interfaces::msg::Heartbeat_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::msg::Heartbeat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::msg::Heartbeat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::msg::Heartbeat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::Heartbeat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::Heartbeat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::Heartbeat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::Heartbeat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::msg::Heartbeat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::msg::Heartbeat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__msg__Heartbeat
    std::shared_ptr<atm_interfaces::msg::Heartbeat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__msg__Heartbeat
    std::shared_ptr<atm_interfaces::msg::Heartbeat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Heartbeat_ & other) const
  {
    if (this->node_name != other.node_name) {
      return false;
    }
    if (this->machine_id != other.machine_id) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->seq != other.seq) {
      return false;
    }
    if (this->ok != other.ok) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Heartbeat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Heartbeat_

// alias to use template instance with default allocator
using Heartbeat =
  atm_interfaces::msg::Heartbeat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__HEARTBEAT__STRUCT_HPP_
