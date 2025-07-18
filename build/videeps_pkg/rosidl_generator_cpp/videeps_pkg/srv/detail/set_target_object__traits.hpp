// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from videeps_pkg:srv/SetTargetObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "videeps_pkg/srv/set_target_object.hpp"


#ifndef VIDEEPS_PKG__SRV__DETAIL__SET_TARGET_OBJECT__TRAITS_HPP_
#define VIDEEPS_PKG__SRV__DETAIL__SET_TARGET_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "videeps_pkg/srv/detail/set_target_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace videeps_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTargetObject_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_name
  {
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTargetObject_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTargetObject_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace videeps_pkg

namespace rosidl_generator_traits
{

[[deprecated("use videeps_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const videeps_pkg::srv::SetTargetObject_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  videeps_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use videeps_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const videeps_pkg::srv::SetTargetObject_Request & msg)
{
  return videeps_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<videeps_pkg::srv::SetTargetObject_Request>()
{
  return "videeps_pkg::srv::SetTargetObject_Request";
}

template<>
inline const char * name<videeps_pkg::srv::SetTargetObject_Request>()
{
  return "videeps_pkg/srv/SetTargetObject_Request";
}

template<>
struct has_fixed_size<videeps_pkg::srv::SetTargetObject_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<videeps_pkg::srv::SetTargetObject_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<videeps_pkg::srv::SetTargetObject_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace videeps_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTargetObject_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTargetObject_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTargetObject_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace videeps_pkg

namespace rosidl_generator_traits
{

[[deprecated("use videeps_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const videeps_pkg::srv::SetTargetObject_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  videeps_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use videeps_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const videeps_pkg::srv::SetTargetObject_Response & msg)
{
  return videeps_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<videeps_pkg::srv::SetTargetObject_Response>()
{
  return "videeps_pkg::srv::SetTargetObject_Response";
}

template<>
inline const char * name<videeps_pkg::srv::SetTargetObject_Response>()
{
  return "videeps_pkg/srv/SetTargetObject_Response";
}

template<>
struct has_fixed_size<videeps_pkg::srv::SetTargetObject_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<videeps_pkg::srv::SetTargetObject_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<videeps_pkg::srv::SetTargetObject_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace videeps_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTargetObject_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTargetObject_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTargetObject_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace videeps_pkg

namespace rosidl_generator_traits
{

[[deprecated("use videeps_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const videeps_pkg::srv::SetTargetObject_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  videeps_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use videeps_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const videeps_pkg::srv::SetTargetObject_Event & msg)
{
  return videeps_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<videeps_pkg::srv::SetTargetObject_Event>()
{
  return "videeps_pkg::srv::SetTargetObject_Event";
}

template<>
inline const char * name<videeps_pkg::srv::SetTargetObject_Event>()
{
  return "videeps_pkg/srv/SetTargetObject_Event";
}

template<>
struct has_fixed_size<videeps_pkg::srv::SetTargetObject_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<videeps_pkg::srv::SetTargetObject_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<videeps_pkg::srv::SetTargetObject_Request>::value && has_bounded_size<videeps_pkg::srv::SetTargetObject_Response>::value> {};

template<>
struct is_message<videeps_pkg::srv::SetTargetObject_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<videeps_pkg::srv::SetTargetObject>()
{
  return "videeps_pkg::srv::SetTargetObject";
}

template<>
inline const char * name<videeps_pkg::srv::SetTargetObject>()
{
  return "videeps_pkg/srv/SetTargetObject";
}

template<>
struct has_fixed_size<videeps_pkg::srv::SetTargetObject>
  : std::integral_constant<
    bool,
    has_fixed_size<videeps_pkg::srv::SetTargetObject_Request>::value &&
    has_fixed_size<videeps_pkg::srv::SetTargetObject_Response>::value
  >
{
};

template<>
struct has_bounded_size<videeps_pkg::srv::SetTargetObject>
  : std::integral_constant<
    bool,
    has_bounded_size<videeps_pkg::srv::SetTargetObject_Request>::value &&
    has_bounded_size<videeps_pkg::srv::SetTargetObject_Response>::value
  >
{
};

template<>
struct is_service<videeps_pkg::srv::SetTargetObject>
  : std::true_type
{
};

template<>
struct is_service_request<videeps_pkg::srv::SetTargetObject_Request>
  : std::true_type
{
};

template<>
struct is_service_response<videeps_pkg::srv::SetTargetObject_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VIDEEPS_PKG__SRV__DETAIL__SET_TARGET_OBJECT__TRAITS_HPP_
