// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atm_interfaces:msg/LineTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/line_target.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__LINE_TARGET__STRUCT_HPP_
#define ATM_INTERFACES__MSG__DETAIL__LINE_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__atm_interfaces__msg__LineTarget __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__msg__LineTarget __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LineTarget_
{
  using Type = LineTarget_<ContainerAllocator>;

  explicit LineTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->gap_id = "";
      this->line_id = "";
      this->stop_index = 0ul;
      this->mode = "";
      this->selected_by_vega = false;
      this->notes = "";
    }
  }

  explicit LineTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_id(_alloc),
    gap_id(_alloc),
    line_id(_alloc),
    mode(_alloc),
    notes(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->gap_id = "";
      this->line_id = "";
      this->stop_index = 0ul;
      this->mode = "";
      this->selected_by_vega = false;
      this->notes = "";
    }
  }

  // field types and members
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;
  using _gap_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gap_id_type gap_id;
  using _line_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _line_id_type line_id;
  using _stop_index_type =
    uint32_t;
  _stop_index_type stop_index;
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;
  using _selected_by_vega_type =
    bool;
  _selected_by_vega_type selected_by_vega;
  using _notes_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _notes_type notes;

  // setters for named parameter idiom
  Type & set__mission_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }
  Type & set__gap_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gap_id = _arg;
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
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__selected_by_vega(
    const bool & _arg)
  {
    this->selected_by_vega = _arg;
    return *this;
  }
  Type & set__notes(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->notes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atm_interfaces::msg::LineTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::msg::LineTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::msg::LineTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::msg::LineTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::LineTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::LineTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::LineTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::LineTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::msg::LineTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::msg::LineTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__msg__LineTarget
    std::shared_ptr<atm_interfaces::msg::LineTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__msg__LineTarget
    std::shared_ptr<atm_interfaces::msg::LineTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LineTarget_ & other) const
  {
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->gap_id != other.gap_id) {
      return false;
    }
    if (this->line_id != other.line_id) {
      return false;
    }
    if (this->stop_index != other.stop_index) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->selected_by_vega != other.selected_by_vega) {
      return false;
    }
    if (this->notes != other.notes) {
      return false;
    }
    return true;
  }
  bool operator!=(const LineTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LineTarget_

// alias to use template instance with default allocator
using LineTarget =
  atm_interfaces::msg::LineTarget_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__LINE_TARGET__STRUCT_HPP_
