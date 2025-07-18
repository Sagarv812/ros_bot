// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from videeps_pkg:srv/SetTargetObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "videeps_pkg/srv/set_target_object.hpp"


#ifndef VIDEEPS_PKG__SRV__DETAIL__SET_TARGET_OBJECT__STRUCT_HPP_
#define VIDEEPS_PKG__SRV__DETAIL__SET_TARGET_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__videeps_pkg__srv__SetTargetObject_Request __attribute__((deprecated))
#else
# define DEPRECATED__videeps_pkg__srv__SetTargetObject_Request __declspec(deprecated)
#endif

namespace videeps_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetTargetObject_Request_
{
  using Type = SetTargetObject_Request_<ContainerAllocator>;

  explicit SetTargetObject_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
    }
  }

  explicit SetTargetObject_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
    }
  }

  // field types and members
  using _object_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_name_type object_name;

  // setters for named parameter idiom
  Type & set__object_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__videeps_pkg__srv__SetTargetObject_Request
    std::shared_ptr<videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__videeps_pkg__srv__SetTargetObject_Request
    std::shared_ptr<videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTargetObject_Request_ & other) const
  {
    if (this->object_name != other.object_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTargetObject_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTargetObject_Request_

// alias to use template instance with default allocator
using SetTargetObject_Request =
  videeps_pkg::srv::SetTargetObject_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace videeps_pkg


#ifndef _WIN32
# define DEPRECATED__videeps_pkg__srv__SetTargetObject_Response __attribute__((deprecated))
#else
# define DEPRECATED__videeps_pkg__srv__SetTargetObject_Response __declspec(deprecated)
#endif

namespace videeps_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetTargetObject_Response_
{
  using Type = SetTargetObject_Response_<ContainerAllocator>;

  explicit SetTargetObject_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetTargetObject_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__videeps_pkg__srv__SetTargetObject_Response
    std::shared_ptr<videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__videeps_pkg__srv__SetTargetObject_Response
    std::shared_ptr<videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTargetObject_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTargetObject_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTargetObject_Response_

// alias to use template instance with default allocator
using SetTargetObject_Response =
  videeps_pkg::srv::SetTargetObject_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace videeps_pkg


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__videeps_pkg__srv__SetTargetObject_Event __attribute__((deprecated))
#else
# define DEPRECATED__videeps_pkg__srv__SetTargetObject_Event __declspec(deprecated)
#endif

namespace videeps_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetTargetObject_Event_
{
  using Type = SetTargetObject_Event_<ContainerAllocator>;

  explicit SetTargetObject_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetTargetObject_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<videeps_pkg::srv::SetTargetObject_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<videeps_pkg::srv::SetTargetObject_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    videeps_pkg::srv::SetTargetObject_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const videeps_pkg::srv::SetTargetObject_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<videeps_pkg::srv::SetTargetObject_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<videeps_pkg::srv::SetTargetObject_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      videeps_pkg::srv::SetTargetObject_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<videeps_pkg::srv::SetTargetObject_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      videeps_pkg::srv::SetTargetObject_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<videeps_pkg::srv::SetTargetObject_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<videeps_pkg::srv::SetTargetObject_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<videeps_pkg::srv::SetTargetObject_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__videeps_pkg__srv__SetTargetObject_Event
    std::shared_ptr<videeps_pkg::srv::SetTargetObject_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__videeps_pkg__srv__SetTargetObject_Event
    std::shared_ptr<videeps_pkg::srv::SetTargetObject_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTargetObject_Event_ & other) const
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
  bool operator!=(const SetTargetObject_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTargetObject_Event_

// alias to use template instance with default allocator
using SetTargetObject_Event =
  videeps_pkg::srv::SetTargetObject_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace videeps_pkg

namespace videeps_pkg
{

namespace srv
{

struct SetTargetObject
{
  using Request = videeps_pkg::srv::SetTargetObject_Request;
  using Response = videeps_pkg::srv::SetTargetObject_Response;
  using Event = videeps_pkg::srv::SetTargetObject_Event;
};

}  // namespace srv

}  // namespace videeps_pkg

#endif  // VIDEEPS_PKG__SRV__DETAIL__SET_TARGET_OBJECT__STRUCT_HPP_
