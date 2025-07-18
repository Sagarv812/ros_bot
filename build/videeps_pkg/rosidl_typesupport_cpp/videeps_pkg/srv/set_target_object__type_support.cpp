// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from videeps_pkg:srv/SetTargetObject.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "videeps_pkg/srv/detail/set_target_object__functions.h"
#include "videeps_pkg/srv/detail/set_target_object__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace videeps_pkg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetTargetObject_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTargetObject_Request_type_support_ids_t;

static const _SetTargetObject_Request_type_support_ids_t _SetTargetObject_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, videeps_pkg, srv, SetTargetObject_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, videeps_pkg, srv, SetTargetObject_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTargetObject_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &videeps_pkg__srv__SetTargetObject_Request__get_type_hash,
  &videeps_pkg__srv__SetTargetObject_Request__get_type_description,
  &videeps_pkg__srv__SetTargetObject_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace videeps_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<videeps_pkg::srv::SetTargetObject_Request>()
{
  return &::videeps_pkg::srv::rosidl_typesupport_cpp::SetTargetObject_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, videeps_pkg, srv, SetTargetObject_Request)() {
  return get_message_type_support_handle<videeps_pkg::srv::SetTargetObject_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__functions.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace videeps_pkg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetTargetObject_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTargetObject_Response_type_support_ids_t;

static const _SetTargetObject_Response_type_support_ids_t _SetTargetObject_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, videeps_pkg, srv, SetTargetObject_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, videeps_pkg, srv, SetTargetObject_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTargetObject_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &videeps_pkg__srv__SetTargetObject_Response__get_type_hash,
  &videeps_pkg__srv__SetTargetObject_Response__get_type_description,
  &videeps_pkg__srv__SetTargetObject_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace videeps_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<videeps_pkg::srv::SetTargetObject_Response>()
{
  return &::videeps_pkg::srv::rosidl_typesupport_cpp::SetTargetObject_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, videeps_pkg, srv, SetTargetObject_Response)() {
  return get_message_type_support_handle<videeps_pkg::srv::SetTargetObject_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__functions.h"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace videeps_pkg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetTargetObject_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTargetObject_Event_type_support_ids_t;

static const _SetTargetObject_Event_type_support_ids_t _SetTargetObject_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, videeps_pkg, srv, SetTargetObject_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, videeps_pkg, srv, SetTargetObject_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTargetObject_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &videeps_pkg__srv__SetTargetObject_Event__get_type_hash,
  &videeps_pkg__srv__SetTargetObject_Event__get_type_description,
  &videeps_pkg__srv__SetTargetObject_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace videeps_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<videeps_pkg::srv::SetTargetObject_Event>()
{
  return &::videeps_pkg::srv::rosidl_typesupport_cpp::SetTargetObject_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, videeps_pkg, srv, SetTargetObject_Event)() {
  return get_message_type_support_handle<videeps_pkg::srv::SetTargetObject_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace videeps_pkg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetTargetObject_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetTargetObject_type_support_ids_t;

static const _SetTargetObject_type_support_ids_t _SetTargetObject_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, videeps_pkg, srv, SetTargetObject)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, videeps_pkg, srv, SetTargetObject)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetTargetObject_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<videeps_pkg::srv::SetTargetObject_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<videeps_pkg::srv::SetTargetObject_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<videeps_pkg::srv::SetTargetObject_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<videeps_pkg::srv::SetTargetObject>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<videeps_pkg::srv::SetTargetObject>,
  &videeps_pkg__srv__SetTargetObject__get_type_hash,
  &videeps_pkg__srv__SetTargetObject__get_type_description,
  &videeps_pkg__srv__SetTargetObject__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace videeps_pkg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<videeps_pkg::srv::SetTargetObject>()
{
  return &::videeps_pkg::srv::rosidl_typesupport_cpp::SetTargetObject_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, videeps_pkg, srv, SetTargetObject)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<videeps_pkg::srv::SetTargetObject>();
}

#ifdef __cplusplus
}
#endif
