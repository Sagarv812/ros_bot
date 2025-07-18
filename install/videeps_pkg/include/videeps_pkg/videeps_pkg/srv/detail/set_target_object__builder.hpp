// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from videeps_pkg:srv/SetTargetObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "videeps_pkg/srv/set_target_object.hpp"


#ifndef VIDEEPS_PKG__SRV__DETAIL__SET_TARGET_OBJECT__BUILDER_HPP_
#define VIDEEPS_PKG__SRV__DETAIL__SET_TARGET_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "videeps_pkg/srv/detail/set_target_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace videeps_pkg
{

namespace srv
{

namespace builder
{

class Init_SetTargetObject_Request_object_name
{
public:
  Init_SetTargetObject_Request_object_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::videeps_pkg::srv::SetTargetObject_Request object_name(::videeps_pkg::srv::SetTargetObject_Request::_object_name_type arg)
  {
    msg_.object_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::videeps_pkg::srv::SetTargetObject_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::videeps_pkg::srv::SetTargetObject_Request>()
{
  return videeps_pkg::srv::builder::Init_SetTargetObject_Request_object_name();
}

}  // namespace videeps_pkg


namespace videeps_pkg
{

namespace srv
{

namespace builder
{

class Init_SetTargetObject_Response_message
{
public:
  explicit Init_SetTargetObject_Response_message(::videeps_pkg::srv::SetTargetObject_Response & msg)
  : msg_(msg)
  {}
  ::videeps_pkg::srv::SetTargetObject_Response message(::videeps_pkg::srv::SetTargetObject_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::videeps_pkg::srv::SetTargetObject_Response msg_;
};

class Init_SetTargetObject_Response_success
{
public:
  Init_SetTargetObject_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTargetObject_Response_message success(::videeps_pkg::srv::SetTargetObject_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetTargetObject_Response_message(msg_);
  }

private:
  ::videeps_pkg::srv::SetTargetObject_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::videeps_pkg::srv::SetTargetObject_Response>()
{
  return videeps_pkg::srv::builder::Init_SetTargetObject_Response_success();
}

}  // namespace videeps_pkg


namespace videeps_pkg
{

namespace srv
{

namespace builder
{

class Init_SetTargetObject_Event_response
{
public:
  explicit Init_SetTargetObject_Event_response(::videeps_pkg::srv::SetTargetObject_Event & msg)
  : msg_(msg)
  {}
  ::videeps_pkg::srv::SetTargetObject_Event response(::videeps_pkg::srv::SetTargetObject_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::videeps_pkg::srv::SetTargetObject_Event msg_;
};

class Init_SetTargetObject_Event_request
{
public:
  explicit Init_SetTargetObject_Event_request(::videeps_pkg::srv::SetTargetObject_Event & msg)
  : msg_(msg)
  {}
  Init_SetTargetObject_Event_response request(::videeps_pkg::srv::SetTargetObject_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetTargetObject_Event_response(msg_);
  }

private:
  ::videeps_pkg::srv::SetTargetObject_Event msg_;
};

class Init_SetTargetObject_Event_info
{
public:
  Init_SetTargetObject_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTargetObject_Event_request info(::videeps_pkg::srv::SetTargetObject_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetTargetObject_Event_request(msg_);
  }

private:
  ::videeps_pkg::srv::SetTargetObject_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::videeps_pkg::srv::SetTargetObject_Event>()
{
  return videeps_pkg::srv::builder::Init_SetTargetObject_Event_info();
}

}  // namespace videeps_pkg

#endif  // VIDEEPS_PKG__SRV__DETAIL__SET_TARGET_OBJECT__BUILDER_HPP_
