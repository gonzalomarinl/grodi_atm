// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atm_interfaces:msg/MissionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/mission_state.hpp"


#ifndef ATM_INTERFACES__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_
#define ATM_INTERFACES__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_

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
# define DEPRECATED__atm_interfaces__msg__MissionState __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__msg__MissionState __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionState_
{
  using Type = MissionState_<ContainerAllocator>;

  explicit MissionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->mission_type = "";
      this->state = "";
      this->current_stop_index = 0ul;
      this->current_line_id = "";
      this->comms_degraded = false;
    }
  }

  explicit MissionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_id(_alloc),
    mission_type(_alloc),
    state(_alloc),
    current_line_id(_alloc),
    stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_id = "";
      this->mission_type = "";
      this->state = "";
      this->current_stop_index = 0ul;
      this->current_line_id = "";
      this->comms_degraded = false;
    }
  }

  // field types and members
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;
  using _mission_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_type_type mission_type;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _current_stop_index_type =
    uint32_t;
  _current_stop_index_type current_stop_index;
  using _current_line_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_line_id_type current_line_id;
  using _comms_degraded_type =
    bool;
  _comms_degraded_type comms_degraded;
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
  Type & set__mission_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_type = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__current_stop_index(
    const uint32_t & _arg)
  {
    this->current_stop_index = _arg;
    return *this;
  }
  Type & set__current_line_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_line_id = _arg;
    return *this;
  }
  Type & set__comms_degraded(
    const bool & _arg)
  {
    this->comms_degraded = _arg;
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
    atm_interfaces::msg::MissionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::msg::MissionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::msg::MissionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::msg::MissionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::MissionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::MissionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::msg::MissionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::msg::MissionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::msg::MissionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::msg::MissionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__msg__MissionState
    std::shared_ptr<atm_interfaces::msg::MissionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__msg__MissionState
    std::shared_ptr<atm_interfaces::msg::MissionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionState_ & other) const
  {
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->mission_type != other.mission_type) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->current_stop_index != other.current_stop_index) {
      return false;
    }
    if (this->current_line_id != other.current_line_id) {
      return false;
    }
    if (this->comms_degraded != other.comms_degraded) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionState_

// alias to use template instance with default allocator
using MissionState =
  atm_interfaces::msg::MissionState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__MSG__DETAIL__MISSION_STATE__STRUCT_HPP_
