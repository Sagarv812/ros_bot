// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from videeps_pkg:srv/SetTargetObject.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "videeps_pkg/srv/detail/set_target_object__struct.h"
#include "videeps_pkg/srv/detail/set_target_object__type_support.h"
#include "videeps_pkg/srv/detail/set_target_object__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace videeps_pkg
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetTargetObject_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTargetObject_Request_type_support_ids_t;

static const _SetTargetObject_Request_type_support_ids_t _SetTargetObject_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTargetObject_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTargetObject_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTargetObject_Request_type_support_symbol_names_t _SetTargetObject_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, videeps_pkg, srv, SetTargetObject_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Request)),
  }
};

typedef struct _SetTargetObject_Request_type_support_data_t
{
  void * data[2];
} _SetTargetObject_Request_type_support_data_t;

static _SetTargetObject_Request_type_support_data_t _SetTargetObject_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTargetObject_Request_message_typesupport_map = {
  2,
  "videeps_pkg",
  &_SetTargetObject_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetTargetObject_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetTargetObject_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTargetObject_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTargetObject_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &videeps_pkg__srv__SetTargetObject_Request__get_type_hash,
  &videeps_pkg__srv__SetTargetObject_Request__get_type_description,
  &videeps_pkg__srv__SetTargetObject_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace videeps_pkg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, videeps_pkg, srv, SetTargetObject_Request)() {
  return &::videeps_pkg::srv::rosidl_typesupport_c::SetTargetObject_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__struct.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__type_support.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace videeps_pkg
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetTargetObject_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTargetObject_Response_type_support_ids_t;

static const _SetTargetObject_Response_type_support_ids_t _SetTargetObject_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTargetObject_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTargetObject_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTargetObject_Response_type_support_symbol_names_t _SetTargetObject_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, videeps_pkg, srv, SetTargetObject_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Response)),
  }
};

typedef struct _SetTargetObject_Response_type_support_data_t
{
  void * data[2];
} _SetTargetObject_Response_type_support_data_t;

static _SetTargetObject_Response_type_support_data_t _SetTargetObject_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTargetObject_Response_message_typesupport_map = {
  2,
  "videeps_pkg",
  &_SetTargetObject_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetTargetObject_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetTargetObject_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTargetObject_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTargetObject_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &videeps_pkg__srv__SetTargetObject_Response__get_type_hash,
  &videeps_pkg__srv__SetTargetObject_Response__get_type_description,
  &videeps_pkg__srv__SetTargetObject_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace videeps_pkg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, videeps_pkg, srv, SetTargetObject_Response)() {
  return &::videeps_pkg::srv::rosidl_typesupport_c::SetTargetObject_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__struct.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__type_support.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace videeps_pkg
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetTargetObject_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTargetObject_Event_type_support_ids_t;

static const _SetTargetObject_Event_type_support_ids_t _SetTargetObject_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTargetObject_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTargetObject_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTargetObject_Event_type_support_symbol_names_t _SetTargetObject_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, videeps_pkg, srv, SetTargetObject_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject_Event)),
  }
};

typedef struct _SetTargetObject_Event_type_support_data_t
{
  void * data[2];
} _SetTargetObject_Event_type_support_data_t;

static _SetTargetObject_Event_type_support_data_t _SetTargetObject_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTargetObject_Event_message_typesupport_map = {
  2,
  "videeps_pkg",
  &_SetTargetObject_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetTargetObject_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetTargetObject_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetTargetObject_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTargetObject_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &videeps_pkg__srv__SetTargetObject_Event__get_type_hash,
  &videeps_pkg__srv__SetTargetObject_Event__get_type_description,
  &videeps_pkg__srv__SetTargetObject_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace videeps_pkg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, videeps_pkg, srv, SetTargetObject_Event)() {
  return &::videeps_pkg::srv::rosidl_typesupport_c::SetTargetObject_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace videeps_pkg
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetTargetObject_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTargetObject_type_support_ids_t;

static const _SetTargetObject_type_support_ids_t _SetTargetObject_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetTargetObject_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetTargetObject_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetTargetObject_type_support_symbol_names_t _SetTargetObject_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, videeps_pkg, srv, SetTargetObject)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, videeps_pkg, srv, SetTargetObject)),
  }
};

typedef struct _SetTargetObject_type_support_data_t
{
  void * data[2];
} _SetTargetObject_type_support_data_t;

static _SetTargetObject_type_support_data_t _SetTargetObject_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetTargetObject_service_typesupport_map = {
  2,
  "videeps_pkg",
  &_SetTargetObject_service_typesupport_ids.typesupport_identifier[0],
  &_SetTargetObject_service_typesupport_symbol_names.symbol_name[0],
  &_SetTargetObject_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetTargetObject_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTargetObject_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetTargetObject_Request_message_type_support_handle,
  &SetTargetObject_Response_message_type_support_handle,
  &SetTargetObject_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace videeps_pkg

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, videeps_pkg, srv, SetTargetObject)() {
  return &::videeps_pkg::srv::rosidl_typesupport_c::SetTargetObject_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
