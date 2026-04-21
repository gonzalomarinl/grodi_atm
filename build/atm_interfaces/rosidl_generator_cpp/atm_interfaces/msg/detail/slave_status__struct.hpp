// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atm_interfaces:msg/SlaveStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/slave_status.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__SLAVE_STATUS__STRUCT_HPP_
#define ATM_INTERFACES__MSG__DETAIL__SLAVE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__atm_interfaces__msg__SlaveStatus __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__msg__SlaveStatus __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SlaveStatus_
{
  using Type = SlaveStatus_<ContainerAllocator>;

  explicit SlaveStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->at_base = false;
      this->moving = false;
      this->atomizer_up = false;
      this->atomizer_down = false;
      this->current_line_id = "";
      this->current_stop_index = 0ul;
      this->link_ok = false;
    }
  }

  explicit SlaveStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc),
    current_line_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->at_base = false;
      this->moving = false;
      this->atomizer_up = false;
      this->atomizer_down = false;
      this->current_line_id = "";
      this->current_stop_index = 0ul;
      this->link_ok = false;
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _at_base_type =
    bool;
  _at_base_type at_base;
  using _moving_type =
    bool;
  _moving_type moving;
  using _atomizer_up_type =
    bool;
  _atomizer_up_type atomizer_up;
  using _atomizer_down_type =
    bool;
  _atomizer_down_type atomizer_down;
  using _current_line_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_line_id_type current_line_id;
  using _current_stop_index_type =
    uint32_t;
  _current_stop_index_type current_stop_index;
  using _link_ok_type =
    bool;
  _link_ok_type link_ok;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__at_base(
    const bool & _arg)
  {
    this->at_base = _arg;
    return *this;
  }
  Type & set__moving(
    const bool & _arg)
  {
    this->moving = _arg;
    return *this;
  }
  Type & set__atomizer_up(
    const bool & _arg)
  {
    this->atomizer_up = _arg;
    return *this;
  }
  Type & set__atomizer_down(
    const bool & _arg)
  {
    this->atomizer_down = _arg;
    return *this;
  }
  Type & set__current_line_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_line_id = _arg;
    return *this;
  }
  Type & set__current_stop_index(
    const uint32_t & _arg)
  {
    this->current_stop_index = _arg;
    return *this;
  }
  Type & set__link_ok(
    const bool & _arg)
  {
    this->link_ok = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atm_interfaces::msg::SlaveStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::msg::SlaveStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::msg::SlaveStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::msg::SlaveStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::SlaveStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::SlaveStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::SlaveStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::SlaveStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::msg::SlaveStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::msg::SlaveStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__msg__SlaveStatus
    std::shared_ptr<atm_interfaces::msg::SlaveStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__msg__SlaveStatus
    std::shared_ptr<atm_interfaces::msg::SlaveStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SlaveStatus_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->at_base != other.at_base) {
      return false;
    }
    if (this->moving != other.moving) {
      return false;
    }
    if (this->atomizer_up != other.atomizer_up) {
      return false;
    }
    if (this->atomizer_down != other.atomizer_down) {
      return false;
    }
    if (this->current_line_id != other.current_line_id) {
      return false;
    }
    if (this->current_stop_index != other.current_stop_index) {
      return false;
    }
    if (this->link_ok != other.link_ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const SlaveStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SlaveStatus_

// alias to use template instance with default allocator
using SlaveStatus =
  atm_interfaces::msg::SlaveStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__SLAVE_STATUS__STRUCT_HPP_
