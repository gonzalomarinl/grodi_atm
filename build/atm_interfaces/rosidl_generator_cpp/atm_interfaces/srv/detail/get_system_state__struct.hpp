// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from atm_interfaces:srv/GetSystemState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/srv/get_system_state.hpp"


#ifndef ATM_INTERFACES__SRV__DETAIL__GET_SYSTEM_STATE__STRUCT_HPP_
#define ATM_INTERFACES__SRV__DETAIL__GET_SYSTEM_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__atm_interfaces__srv__GetSystemState_Request __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__srv__GetSystemState_Request __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSystemState_Request_
{
  using Type = GetSystemState_Request_<ContainerAllocator>;

  explicit GetSystemState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->verbose = false;
    }
  }

  explicit GetSystemState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->verbose = false;
    }
  }

  // field types and members
  using _verbose_type =
    bool;
  _verbose_type verbose;

  // setters for named parameter idiom
  Type & set__verbose(
    const bool & _arg)
  {
    this->verbose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__srv__GetSystemState_Request
    std::shared_ptr<atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__srv__GetSystemState_Request
    std::shared_ptr<atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSystemState_Request_ & other) const
  {
    if (this->verbose != other.verbose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSystemState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSystemState_Request_

// alias to use template instance with default allocator
using GetSystemState_Request =
  atm_interfaces::srv::GetSystemState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace atm_interfaces


#ifndef _WIN32
# define DEPRECATED__atm_interfaces__srv__GetSystemState_Response __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__srv__GetSystemState_Response __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSystemState_Response_
{
  using Type = GetSystemState_Response_<ContainerAllocator>;

  explicit GetSystemState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->master_state = "";
      this->slave_state = "";
      this->mission_id = "";
      this->detail = "";
    }
  }

  explicit GetSystemState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : master_state(_alloc),
    slave_state(_alloc),
    mission_id(_alloc),
    detail(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->master_state = "";
      this->slave_state = "";
      this->mission_id = "";
      this->detail = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _master_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _master_state_type master_state;
  using _slave_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _slave_state_type slave_state;
  using _mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_id_type mission_id;
  using _detail_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detail_type detail;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__master_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->master_state = _arg;
    return *this;
  }
  Type & set__slave_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->slave_state = _arg;
    return *this;
  }
  Type & set__mission_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }
  Type & set__detail(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->detail = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__srv__GetSystemState_Response
    std::shared_ptr<atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__srv__GetSystemState_Response
    std::shared_ptr<atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSystemState_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->master_state != other.master_state) {
      return false;
    }
    if (this->slave_state != other.slave_state) {
      return false;
    }
    if (this->mission_id != other.mission_id) {
      return false;
    }
    if (this->detail != other.detail) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSystemState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSystemState_Response_

// alias to use template instance with default allocator
using GetSystemState_Response =
  atm_interfaces::srv::GetSystemState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace atm_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__atm_interfaces__srv__GetSystemState_Event __attribute__((deprecated))
#else
# define DEPRECATED__atm_interfaces__srv__GetSystemState_Event __declspec(deprecated)
#endif

namespace atm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSystemState_Event_
{
  using Type = GetSystemState_Event_<ContainerAllocator>;

  explicit GetSystemState_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetSystemState_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atm_interfaces::srv::GetSystemState_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<atm_interfaces::srv::GetSystemState_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    atm_interfaces::srv::GetSystemState_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const atm_interfaces::srv::GetSystemState_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<atm_interfaces::srv::GetSystemState_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<atm_interfaces::srv::GetSystemState_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::srv::GetSystemState_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::srv::GetSystemState_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      atm_interfaces::srv::GetSystemState_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<atm_interfaces::srv::GetSystemState_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<atm_interfaces::srv::GetSystemState_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<atm_interfaces::srv::GetSystemState_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__atm_interfaces__srv__GetSystemState_Event
    std::shared_ptr<atm_interfaces::srv::GetSystemState_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__atm_interfaces__srv__GetSystemState_Event
    std::shared_ptr<atm_interfaces::srv::GetSystemState_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSystemState_Event_ & other) const
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
  bool operator!=(const GetSystemState_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSystemState_Event_

// alias to use template instance with default allocator
using GetSystemState_Event =
  atm_interfaces::srv::GetSystemState_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace atm_interfaces

namespace atm_interfaces
{

namespace srv
{

struct GetSystemState
{
  using Request = atm_interfaces::srv::GetSystemState_Request;
  using Response = atm_interfaces::srv::GetSystemState_Response;
  using Event = atm_interfaces::srv::GetSystemState_Event;
};

}  // namespace srv

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__SRV__DETAIL__GET_SYSTEM_STATE__STRUCT_HPP_
