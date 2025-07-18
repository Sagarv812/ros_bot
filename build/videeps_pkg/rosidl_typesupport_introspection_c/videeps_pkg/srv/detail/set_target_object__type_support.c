// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from videeps_pkg:srv/SetTargetObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "videeps_pkg/srv/detail/set_target_object__rosidl_typesupport_introspection_c.h"
#include "videeps_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "videeps_pkg/srv/detail/set_target_object__functions.h"
#include "videeps_pkg/srv/detail/set_target_object__struct.h"


// Include directives for member types
// Member `object_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void videeps_pkg__srv__SetTargetObject_Request__rosidl_typesupport_introspection_c__SetTargetObject_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  videeps_pkg__srv__SetTargetObject_Request__init(message_memory);
}

void videeps_pkg__srv__SetTargetObject_Request__rosidl_typesupport_introspection_c__SetTargetObject_Request_fini_function(void * message_memory)
{
  videeps_pkg__srv__SetTargetObject_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember videeps_pkg__srv__SetTargetObject_Request__rosidl_typesupport_introspection_c__SetTargetObject_Request_message_member_array[1] = {
  {
    "object_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(videeps_pkg__srv__SetTargetObject_Request, object_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers videeps_pkg__srv__SetTargetObject_Request__rosidl_typesupport_introspection_c__SetTargetObject_Request_message_members = {
  "videeps_pkg__srv",  // message namespace
  "SetTargetObject_Request",  // message name
  1,  // number of fields
  sizeof(videeps_pkg__srv__SetTargetObject_Request),
  false,  // has_any_key_member_
  videeps_pkg__srv__SetTargetObject_Request__rosidl_typesupport_introspection_c__SetTargetObject_Request_message_member_array,  // message members
  videeps_pkg__srv__SetTargetObject_Request__rosidl_typesupport_introspection_c__SetTargetObject_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  videeps_pkg__srv__SetTargetObject_Request__rosidl_typesupport_introspection_c__SetTargetObject_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t videeps_pkg__srv__SetTargetObject_Request__rosidl_typesupport_introspection_c__SetTargetObject_Request_message_type_support_handle = {
  0,
  &videeps_pkg__srv__SetTargetObject_Request__rosidl_typesupport_introspection_c__SetTargetObject_Request_message_members,
  get_message_typesupport_handle_function,
  &videeps_pkg__srv__SetTargetObject_Request__get_type_hash,
  &videeps_pkg__srv__SetTargetObject_Request__get_type_description,
  &videeps_pkg__srv__SetTargetObject_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_videeps_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Request)() {
  if (!videeps_pkg__srv__SetTargetObject_Request__rosidl_typesupport_introspection_c__SetTargetObject_Request_message_type_support_handle.typesupport_identifier) {
    videeps_pkg__srv__SetTargetObject_Request__rosidl_typesupport_introspection_c__SetTargetObject_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &videeps_pkg__srv__SetTargetObject_Request__rosidl_typesupport_introspection_c__SetTargetObject_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__rosidl_typesupport_introspection_c.h"
// already included above
// #include "videeps_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__functions.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void videeps_pkg__srv__SetTargetObject_Response__rosidl_typesupport_introspection_c__SetTargetObject_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  videeps_pkg__srv__SetTargetObject_Response__init(message_memory);
}

void videeps_pkg__srv__SetTargetObject_Response__rosidl_typesupport_introspection_c__SetTargetObject_Response_fini_function(void * message_memory)
{
  videeps_pkg__srv__SetTargetObject_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember videeps_pkg__srv__SetTargetObject_Response__rosidl_typesupport_introspection_c__SetTargetObject_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(videeps_pkg__srv__SetTargetObject_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(videeps_pkg__srv__SetTargetObject_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers videeps_pkg__srv__SetTargetObject_Response__rosidl_typesupport_introspection_c__SetTargetObject_Response_message_members = {
  "videeps_pkg__srv",  // message namespace
  "SetTargetObject_Response",  // message name
  2,  // number of fields
  sizeof(videeps_pkg__srv__SetTargetObject_Response),
  false,  // has_any_key_member_
  videeps_pkg__srv__SetTargetObject_Response__rosidl_typesupport_introspection_c__SetTargetObject_Response_message_member_array,  // message members
  videeps_pkg__srv__SetTargetObject_Response__rosidl_typesupport_introspection_c__SetTargetObject_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  videeps_pkg__srv__SetTargetObject_Response__rosidl_typesupport_introspection_c__SetTargetObject_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t videeps_pkg__srv__SetTargetObject_Response__rosidl_typesupport_introspection_c__SetTargetObject_Response_message_type_support_handle = {
  0,
  &videeps_pkg__srv__SetTargetObject_Response__rosidl_typesupport_introspection_c__SetTargetObject_Response_message_members,
  get_message_typesupport_handle_function,
  &videeps_pkg__srv__SetTargetObject_Response__get_type_hash,
  &videeps_pkg__srv__SetTargetObject_Response__get_type_description,
  &videeps_pkg__srv__SetTargetObject_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_videeps_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Response)() {
  if (!videeps_pkg__srv__SetTargetObject_Response__rosidl_typesupport_introspection_c__SetTargetObject_Response_message_type_support_handle.typesupport_identifier) {
    videeps_pkg__srv__SetTargetObject_Response__rosidl_typesupport_introspection_c__SetTargetObject_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &videeps_pkg__srv__SetTargetObject_Response__rosidl_typesupport_introspection_c__SetTargetObject_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__rosidl_typesupport_introspection_c.h"
// already included above
// #include "videeps_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__functions.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "videeps_pkg/srv/set_target_object.h"
// Member `request`
// Member `response`
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  videeps_pkg__srv__SetTargetObject_Event__init(message_memory);
}

void videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_fini_function(void * message_memory)
{
  videeps_pkg__srv__SetTargetObject_Event__fini(message_memory);
}

size_t videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__size_function__SetTargetObject_Event__request(
  const void * untyped_member)
{
  const videeps_pkg__srv__SetTargetObject_Request__Sequence * member =
    (const videeps_pkg__srv__SetTargetObject_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__get_const_function__SetTargetObject_Event__request(
  const void * untyped_member, size_t index)
{
  const videeps_pkg__srv__SetTargetObject_Request__Sequence * member =
    (const videeps_pkg__srv__SetTargetObject_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__get_function__SetTargetObject_Event__request(
  void * untyped_member, size_t index)
{
  videeps_pkg__srv__SetTargetObject_Request__Sequence * member =
    (videeps_pkg__srv__SetTargetObject_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__fetch_function__SetTargetObject_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const videeps_pkg__srv__SetTargetObject_Request * item =
    ((const videeps_pkg__srv__SetTargetObject_Request *)
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__get_const_function__SetTargetObject_Event__request(untyped_member, index));
  videeps_pkg__srv__SetTargetObject_Request * value =
    (videeps_pkg__srv__SetTargetObject_Request *)(untyped_value);
  *value = *item;
}

void videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__assign_function__SetTargetObject_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  videeps_pkg__srv__SetTargetObject_Request * item =
    ((videeps_pkg__srv__SetTargetObject_Request *)
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__get_function__SetTargetObject_Event__request(untyped_member, index));
  const videeps_pkg__srv__SetTargetObject_Request * value =
    (const videeps_pkg__srv__SetTargetObject_Request *)(untyped_value);
  *item = *value;
}

bool videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__resize_function__SetTargetObject_Event__request(
  void * untyped_member, size_t size)
{
  videeps_pkg__srv__SetTargetObject_Request__Sequence * member =
    (videeps_pkg__srv__SetTargetObject_Request__Sequence *)(untyped_member);
  videeps_pkg__srv__SetTargetObject_Request__Sequence__fini(member);
  return videeps_pkg__srv__SetTargetObject_Request__Sequence__init(member, size);
}

size_t videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__size_function__SetTargetObject_Event__response(
  const void * untyped_member)
{
  const videeps_pkg__srv__SetTargetObject_Response__Sequence * member =
    (const videeps_pkg__srv__SetTargetObject_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__get_const_function__SetTargetObject_Event__response(
  const void * untyped_member, size_t index)
{
  const videeps_pkg__srv__SetTargetObject_Response__Sequence * member =
    (const videeps_pkg__srv__SetTargetObject_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__get_function__SetTargetObject_Event__response(
  void * untyped_member, size_t index)
{
  videeps_pkg__srv__SetTargetObject_Response__Sequence * member =
    (videeps_pkg__srv__SetTargetObject_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__fetch_function__SetTargetObject_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const videeps_pkg__srv__SetTargetObject_Response * item =
    ((const videeps_pkg__srv__SetTargetObject_Response *)
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__get_const_function__SetTargetObject_Event__response(untyped_member, index));
  videeps_pkg__srv__SetTargetObject_Response * value =
    (videeps_pkg__srv__SetTargetObject_Response *)(untyped_value);
  *value = *item;
}

void videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__assign_function__SetTargetObject_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  videeps_pkg__srv__SetTargetObject_Response * item =
    ((videeps_pkg__srv__SetTargetObject_Response *)
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__get_function__SetTargetObject_Event__response(untyped_member, index));
  const videeps_pkg__srv__SetTargetObject_Response * value =
    (const videeps_pkg__srv__SetTargetObject_Response *)(untyped_value);
  *item = *value;
}

bool videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__resize_function__SetTargetObject_Event__response(
  void * untyped_member, size_t size)
{
  videeps_pkg__srv__SetTargetObject_Response__Sequence * member =
    (videeps_pkg__srv__SetTargetObject_Response__Sequence *)(untyped_member);
  videeps_pkg__srv__SetTargetObject_Response__Sequence__fini(member);
  return videeps_pkg__srv__SetTargetObject_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(videeps_pkg__srv__SetTargetObject_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(videeps_pkg__srv__SetTargetObject_Event, request),  // bytes offset in struct
    NULL,  // default value
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__size_function__SetTargetObject_Event__request,  // size() function pointer
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__get_const_function__SetTargetObject_Event__request,  // get_const(index) function pointer
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__get_function__SetTargetObject_Event__request,  // get(index) function pointer
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__fetch_function__SetTargetObject_Event__request,  // fetch(index, &value) function pointer
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__assign_function__SetTargetObject_Event__request,  // assign(index, value) function pointer
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__resize_function__SetTargetObject_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(videeps_pkg__srv__SetTargetObject_Event, response),  // bytes offset in struct
    NULL,  // default value
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__size_function__SetTargetObject_Event__response,  // size() function pointer
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__get_const_function__SetTargetObject_Event__response,  // get_const(index) function pointer
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__get_function__SetTargetObject_Event__response,  // get(index) function pointer
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__fetch_function__SetTargetObject_Event__response,  // fetch(index, &value) function pointer
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__assign_function__SetTargetObject_Event__response,  // assign(index, value) function pointer
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__resize_function__SetTargetObject_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_message_members = {
  "videeps_pkg__srv",  // message namespace
  "SetTargetObject_Event",  // message name
  3,  // number of fields
  sizeof(videeps_pkg__srv__SetTargetObject_Event),
  false,  // has_any_key_member_
  videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_message_member_array,  // message members
  videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_message_type_support_handle = {
  0,
  &videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_message_members,
  get_message_typesupport_handle_function,
  &videeps_pkg__srv__SetTargetObject_Event__get_type_hash,
  &videeps_pkg__srv__SetTargetObject_Event__get_type_description,
  &videeps_pkg__srv__SetTargetObject_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_videeps_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Event)() {
  videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Request)();
  videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Response)();
  if (!videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_message_type_support_handle.typesupport_identifier) {
    videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "videeps_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers videeps_pkg__srv__detail__set_target_object__rosidl_typesupport_introspection_c__SetTargetObject_service_members = {
  "videeps_pkg__srv",  // service namespace
  "SetTargetObject",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // videeps_pkg__srv__detail__set_target_object__rosidl_typesupport_introspection_c__SetTargetObject_Request_message_type_support_handle,
  NULL,  // response message
  // videeps_pkg__srv__detail__set_target_object__rosidl_typesupport_introspection_c__SetTargetObject_Response_message_type_support_handle
  NULL  // event_message
  // videeps_pkg__srv__detail__set_target_object__rosidl_typesupport_introspection_c__SetTargetObject_Response_message_type_support_handle
};


static rosidl_service_type_support_t videeps_pkg__srv__detail__set_target_object__rosidl_typesupport_introspection_c__SetTargetObject_service_type_support_handle = {
  0,
  &videeps_pkg__srv__detail__set_target_object__rosidl_typesupport_introspection_c__SetTargetObject_service_members,
  get_service_typesupport_handle_function,
  &videeps_pkg__srv__SetTargetObject_Request__rosidl_typesupport_introspection_c__SetTargetObject_Request_message_type_support_handle,
  &videeps_pkg__srv__SetTargetObject_Response__rosidl_typesupport_introspection_c__SetTargetObject_Response_message_type_support_handle,
  &videeps_pkg__srv__SetTargetObject_Event__rosidl_typesupport_introspection_c__SetTargetObject_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    videeps_pkg,
    srv,
    SetTargetObject
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    videeps_pkg,
    srv,
    SetTargetObject
  ),
  &videeps_pkg__srv__SetTargetObject__get_type_hash,
  &videeps_pkg__srv__SetTargetObject__get_type_description,
  &videeps_pkg__srv__SetTargetObject__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_videeps_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject)(void) {
  if (!videeps_pkg__srv__detail__set_target_object__rosidl_typesupport_introspection_c__SetTargetObject_service_type_support_handle.typesupport_identifier) {
    videeps_pkg__srv__detail__set_target_object__rosidl_typesupport_introspection_c__SetTargetObject_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)videeps_pkg__srv__detail__set_target_object__rosidl_typesupport_introspection_c__SetTargetObject_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Event)()->data;
  }

  return &videeps_pkg__srv__detail__set_target_object__rosidl_typesupport_introspection_c__SetTargetObject_service_type_support_handle;
}
