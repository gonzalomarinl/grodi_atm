// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atm_interfaces:srv/ResetFault.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/srv/reset_fault.hpp"


#ifndef ATM_INTERFACES__SRV__DETAIL__RESET_FAULT__STRUCT_HPP_
#define ATM_INTERFACES__SRV__DETAIL__RESET_FAULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__atm_interfaces__srv__ResetFault_Request __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__srv__ResetFault_Request __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetFault_Request_
{
  using Type = ResetFault_Request_<ContainerAllocator>;

  explicit ResetFault_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->reason = "";
    }
  }

  explicit ResetFault_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc),
    reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->reason = "";
    }
  }

  // field types and members
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atm_interfaces::srv::ResetFault_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::srv::ResetFault_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::srv::ResetFault_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::srv::ResetFault_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::srv::ResetFault_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::srv::ResetFault_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::srv::ResetFault_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::srv::ResetFault_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::srv::ResetFault_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::srv::ResetFault_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__srv__ResetFault_Request
    std::shared_ptr<atm_interfaces::srv::ResetFault_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__srv__ResetFault_Request
    std::shared_ptr<atm_interfaces::srv::ResetFault_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetFault_Request_ & other) const
  {
    if (this->source != other.source) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetFault_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetFault_Request_

// alias to use template instance with default allocator
using ResetFault_Request =
  atm_interfaces::srv::ResetFault_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace atm_interfaces


#ifndef _WIN32
# define DEPRECATED__atm_interfaces__srv__ResetFault_Response __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__srv__ResetFault_Response __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetFault_Response_
{
  using Type = ResetFault_Response_<ContainerAllocator>;

  explicit ResetFault_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ResetFault_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atm_interfaces::srv::ResetFault_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::srv::ResetFault_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::srv::ResetFault_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::srv::ResetFault_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::srv::ResetFault_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::srv::ResetFault_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::srv::ResetFault_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::srv::ResetFault_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::srv::ResetFault_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::srv::ResetFault_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__srv__ResetFault_Response
    std::shared_ptr<atm_interfaces::srv::ResetFault_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__srv__ResetFault_Response
    std::shared_ptr<atm_interfaces::srv::ResetFault_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetFault_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetFault_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetFault_Response_

// alias to use template instance with default allocator
using ResetFault_Response =
  atm_interfaces::srv::ResetFault_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace atm_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__atm_interfaces__srv__ResetFault_Event __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__srv__ResetFault_Event __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetFault_Event_
{
  using Type = ResetFault_Event_<ContainerAllocator>;

  explicit ResetFault_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ResetFault_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<atm_interfaces::srv::ResetFault_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atm_interfaces::srv::ResetFault_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<atm_interfaces::srv::ResetFault_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atm_interfaces::srv::ResetFault_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<atm_interfaces::srv::ResetFault_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atm_interfaces::srv::ResetFault_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<atm_interfaces::srv::ResetFault_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atm_interfaces::srv::ResetFault_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atm_interfaces::srv::ResetFault_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::srv::ResetFault_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::srv::ResetFault_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::srv::ResetFault_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::srv::ResetFault_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::srv::ResetFault_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::srv::ResetFault_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::srv::ResetFault_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::srv::ResetFault_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::srv::ResetFault_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__srv__ResetFault_Event
    std::shared_ptr<atm_interfaces::srv::ResetFault_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__srv__ResetFault_Event
    std::shared_ptr<atm_interfaces::srv::ResetFault_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetFault_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetFault_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetFault_Event_

// alias to use template instance with default allocator
using ResetFault_Event =
  atm_interfaces::srv::ResetFault_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace atm_interfaces

namespace atm_interfaces
{

namespace srv
{

struct ResetFault
{
  using Request = atm_interfaces::srv::ResetFault_Request;
  using Response = atm_interfaces::srv::ResetFault_Response;
  using Event = atm_interfaces::srv::ResetFault_Event;
};

}  // namespace srv

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__SRV__DETAIL__RESET_FAULT__STRUCT_HPP_
