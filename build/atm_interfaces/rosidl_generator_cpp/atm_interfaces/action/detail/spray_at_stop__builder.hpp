// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from atm_interfaces:action/SprayAtStop.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/action/spray_at_stop.hpp"


#ifndef ATM_INTERFACES__ACTION__DETAIL__SPRAY_AT_STOP__BUILDER_HPP_
#define ATM_INTERFACES__ACTION__DETAIL__SPRAY_AT_STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "atm_interfaces/action/detail/spray_at_stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace atm_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayAtStop_Goal_stop_index
{
public:
  explicit Init_SprayAtStop_Goal_stop_index(::atm_interfaces::action::SprayAtStop_Goal & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::action::SprayAtStop_Goal stop_index(::atm_interfaces::action::SprayAtStop_Goal::_stop_index_type arg)
  {
    msg_.stop_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_Goal msg_;
};

class Init_SprayAtStop_Goal_line_id
{
public:
  explicit Init_SprayAtStop_Goal_line_id(::atm_interfaces::action::SprayAtStop_Goal & msg)
  : msg_(msg)
  {}
  Init_SprayAtStop_Goal_stop_index line_id(::atm_interfaces::action::SprayAtStop_Goal::_line_id_type arg)
  {
    msg_.line_id = std::move(arg);
    return Init_SprayAtStop_Goal_stop_index(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_Goal msg_;
};

class Init_SprayAtStop_Goal_mission_id
{
public:
  Init_SprayAtStop_Goal_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayAtStop_Goal_line_id mission_id(::atm_interfaces::action::SprayAtStop_Goal::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_SprayAtStop_Goal_line_id(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::action::SprayAtStop_Goal>()
{
  return atm_interfaces::action::builder::Init_SprayAtStop_Goal_mission_id();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayAtStop_Result_message
{
public:
  explicit Init_SprayAtStop_Result_message(::atm_interfaces::action::SprayAtStop_Result & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::action::SprayAtStop_Result message(::atm_interfaces::action::SprayAtStop_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_Result msg_;
};

class Init_SprayAtStop_Result_success
{
public:
  Init_SprayAtStop_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayAtStop_Result_message success(::atm_interfaces::action::SprayAtStop_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SprayAtStop_Result_message(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::action::SprayAtStop_Result>()
{
  return atm_interfaces::action::builder::Init_SprayAtStop_Result_success();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayAtStop_Feedback_phase
{
public:
  Init_SprayAtStop_Feedback_phase()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::atm_interfaces::action::SprayAtStop_Feedback phase(::atm_interfaces::action::SprayAtStop_Feedback::_phase_type arg)
  {
    msg_.phase = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::action::SprayAtStop_Feedback>()
{
  return atm_interfaces::action::builder::Init_SprayAtStop_Feedback_phase();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayAtStop_SendGoal_Request_goal
{
public:
  explicit Init_SprayAtStop_SendGoal_Request_goal(::atm_interfaces::action::SprayAtStop_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::action::SprayAtStop_SendGoal_Request goal(::atm_interfaces::action::SprayAtStop_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_SendGoal_Request msg_;
};

class Init_SprayAtStop_SendGoal_Request_goal_id
{
public:
  Init_SprayAtStop_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayAtStop_SendGoal_Request_goal goal_id(::atm_interfaces::action::SprayAtStop_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SprayAtStop_SendGoal_Request_goal(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::action::SprayAtStop_SendGoal_Request>()
{
  return atm_interfaces::action::builder::Init_SprayAtStop_SendGoal_Request_goal_id();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayAtStop_SendGoal_Response_stamp
{
public:
  explicit Init_SprayAtStop_SendGoal_Response_stamp(::atm_interfaces::action::SprayAtStop_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::action::SprayAtStop_SendGoal_Response stamp(::atm_interfaces::action::SprayAtStop_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_SendGoal_Response msg_;
};

class Init_SprayAtStop_SendGoal_Response_accepted
{
public:
  Init_SprayAtStop_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayAtStop_SendGoal_Response_stamp accepted(::atm_interfaces::action::SprayAtStop_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SprayAtStop_SendGoal_Response_stamp(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::action::SprayAtStop_SendGoal_Response>()
{
  return atm_interfaces::action::builder::Init_SprayAtStop_SendGoal_Response_accepted();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayAtStop_SendGoal_Event_response
{
public:
  explicit Init_SprayAtStop_SendGoal_Event_response(::atm_interfaces::action::SprayAtStop_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::action::SprayAtStop_SendGoal_Event response(::atm_interfaces::action::SprayAtStop_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_SendGoal_Event msg_;
};

class Init_SprayAtStop_SendGoal_Event_request
{
public:
  explicit Init_SprayAtStop_SendGoal_Event_request(::atm_interfaces::action::SprayAtStop_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_SprayAtStop_SendGoal_Event_response request(::atm_interfaces::action::SprayAtStop_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SprayAtStop_SendGoal_Event_response(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_SendGoal_Event msg_;
};

class Init_SprayAtStop_SendGoal_Event_info
{
public:
  Init_SprayAtStop_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayAtStop_SendGoal_Event_request info(::atm_interfaces::action::SprayAtStop_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SprayAtStop_SendGoal_Event_request(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::action::SprayAtStop_SendGoal_Event>()
{
  return atm_interfaces::action::builder::Init_SprayAtStop_SendGoal_Event_info();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayAtStop_GetResult_Request_goal_id
{
public:
  Init_SprayAtStop_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::atm_interfaces::action::SprayAtStop_GetResult_Request goal_id(::atm_interfaces::action::SprayAtStop_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::action::SprayAtStop_GetResult_Request>()
{
  return atm_interfaces::action::builder::Init_SprayAtStop_GetResult_Request_goal_id();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayAtStop_GetResult_Response_result
{
public:
  explicit Init_SprayAtStop_GetResult_Response_result(::atm_interfaces::action::SprayAtStop_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::action::SprayAtStop_GetResult_Response result(::atm_interfaces::action::SprayAtStop_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_GetResult_Response msg_;
};

class Init_SprayAtStop_GetResult_Response_status
{
public:
  Init_SprayAtStop_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayAtStop_GetResult_Response_result status(::atm_interfaces::action::SprayAtStop_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SprayAtStop_GetResult_Response_result(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::action::SprayAtStop_GetResult_Response>()
{
  return atm_interfaces::action::builder::Init_SprayAtStop_GetResult_Response_status();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayAtStop_GetResult_Event_response
{
public:
  explicit Init_SprayAtStop_GetResult_Event_response(::atm_interfaces::action::SprayAtStop_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::action::SprayAtStop_GetResult_Event response(::atm_interfaces::action::SprayAtStop_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_GetResult_Event msg_;
};

class Init_SprayAtStop_GetResult_Event_request
{
public:
  explicit Init_SprayAtStop_GetResult_Event_request(::atm_interfaces::action::SprayAtStop_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_SprayAtStop_GetResult_Event_response request(::atm_interfaces::action::SprayAtStop_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SprayAtStop_GetResult_Event_response(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_GetResult_Event msg_;
};

class Init_SprayAtStop_GetResult_Event_info
{
public:
  Init_SprayAtStop_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayAtStop_GetResult_Event_request info(::atm_interfaces::action::SprayAtStop_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SprayAtStop_GetResult_Event_request(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::action::SprayAtStop_GetResult_Event>()
{
  return atm_interfaces::action::builder::Init_SprayAtStop_GetResult_Event_info();
}

}  // namespace atm_interfaces


namespace atm_interfaces
{

namespace action
{

namespace builder
{

class Init_SprayAtStop_FeedbackMessage_feedback
{
public:
  explicit Init_SprayAtStop_FeedbackMessage_feedback(::atm_interfaces::action::SprayAtStop_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::atm_interfaces::action::SprayAtStop_FeedbackMessage feedback(::atm_interfaces::action::SprayAtStop_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_FeedbackMessage msg_;
};

class Init_SprayAtStop_FeedbackMessage_goal_id
{
public:
  Init_SprayAtStop_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SprayAtStop_FeedbackMessage_feedback goal_id(::atm_interfaces::action::SprayAtStop_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SprayAtStop_FeedbackMessage_feedback(msg_);
  }

private:
  ::atm_interfaces::action::SprayAtStop_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::atm_interfaces::action::SprayAtStop_FeedbackMessage>()
{
  return atm_interfaces::action::builder::Init_SprayAtStop_FeedbackMessage_goal_id();
}

}  // namespace atm_interfaces

#endif  // ATM_INTERFACES__ACTION__DETAIL__SPRAY_AT_STOP__BUILDER_HPP_
