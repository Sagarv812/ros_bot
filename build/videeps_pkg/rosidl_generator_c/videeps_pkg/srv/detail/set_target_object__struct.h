// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from videeps_pkg:srv/SetTargetObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "videeps_pkg/srv/set_target_object.h"


#ifndef VIDEEPS_PKG__SRV__DETAIL__SET_TARGET_OBJECT__STRUCT_H_
#define VIDEEPS_PKG__SRV__DETAIL__SET_TARGET_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetTargetObject in the package videeps_pkg.
typedef struct videeps_pkg__srv__SetTargetObject_Request
{
  rosidl_runtime_c__String object_name;
} videeps_pkg__srv__SetTargetObject_Request;

// Struct for a sequence of videeps_pkg__srv__SetTargetObject_Request.
typedef struct videeps_pkg__srv__SetTargetObject_Request__Sequence
{
  videeps_pkg__srv__SetTargetObject_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} videeps_pkg__srv__SetTargetObject_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetTargetObject in the package videeps_pkg.
typedef struct videeps_pkg__srv__SetTargetObject_Response
{
  bool success;
  rosidl_runtime_c__String message;
} videeps_pkg__srv__SetTargetObject_Response;

// Struct for a sequence of videeps_pkg__srv__SetTargetObject_Response.
typedef struct videeps_pkg__srv__SetTargetObject_Response__Sequence
{
  videeps_pkg__srv__SetTargetObject_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} videeps_pkg__srv__SetTargetObject_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  videeps_pkg__srv__SetTargetObject_Event__request__MAX_SIZE = 1
};
// response
enum
{
  videeps_pkg__srv__SetTargetObject_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetTargetObject in the package videeps_pkg.
typedef struct videeps_pkg__srv__SetTargetObject_Event
{
  service_msgs__msg__ServiceEventInfo info;
  videeps_pkg__srv__SetTargetObject_Request__Sequence request;
  videeps_pkg__srv__SetTargetObject_Response__Sequence response;
} videeps_pkg__srv__SetTargetObject_Event;

// Struct for a sequence of videeps_pkg__srv__SetTargetObject_Event.
typedef struct videeps_pkg__srv__SetTargetObject_Event__Sequence
{
  videeps_pkg__srv__SetTargetObject_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} videeps_pkg__srv__SetTargetObject_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIDEEPS_PKG__SRV__DETAIL__SET_TARGET_OBJECT__STRUCT_H_
