// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from videeps_pkg:srv/SetTargetObject.idl
// generated code does not contain a copyright notice
#include "videeps_pkg/srv/detail/set_target_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `object_name`
#include "rosidl_runtime_c/string_functions.h"

bool
videeps_pkg__srv__SetTargetObject_Request__init(videeps_pkg__srv__SetTargetObject_Request * msg)
{
  if (!msg) {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__init(&msg->object_name)) {
    videeps_pkg__srv__SetTargetObject_Request__fini(msg);
    return false;
  }
  return true;
}

void
videeps_pkg__srv__SetTargetObject_Request__fini(videeps_pkg__srv__SetTargetObject_Request * msg)
{
  if (!msg) {
    return;
  }
  // object_name
  rosidl_runtime_c__String__fini(&msg->object_name);
}

bool
videeps_pkg__srv__SetTargetObject_Request__are_equal(const videeps_pkg__srv__SetTargetObject_Request * lhs, const videeps_pkg__srv__SetTargetObject_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_name), &(rhs->object_name)))
  {
    return false;
  }
  return true;
}

bool
videeps_pkg__srv__SetTargetObject_Request__copy(
  const videeps_pkg__srv__SetTargetObject_Request * input,
  videeps_pkg__srv__SetTargetObject_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__copy(
      &(input->object_name), &(output->object_name)))
  {
    return false;
  }
  return true;
}

videeps_pkg__srv__SetTargetObject_Request *
videeps_pkg__srv__SetTargetObject_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  videeps_pkg__srv__SetTargetObject_Request * msg = (videeps_pkg__srv__SetTargetObject_Request *)allocator.allocate(sizeof(videeps_pkg__srv__SetTargetObject_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(videeps_pkg__srv__SetTargetObject_Request));
  bool success = videeps_pkg__srv__SetTargetObject_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
videeps_pkg__srv__SetTargetObject_Request__destroy(videeps_pkg__srv__SetTargetObject_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    videeps_pkg__srv__SetTargetObject_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
videeps_pkg__srv__SetTargetObject_Request__Sequence__init(videeps_pkg__srv__SetTargetObject_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  videeps_pkg__srv__SetTargetObject_Request * data = NULL;

  if (size) {
    data = (videeps_pkg__srv__SetTargetObject_Request *)allocator.zero_allocate(size, sizeof(videeps_pkg__srv__SetTargetObject_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = videeps_pkg__srv__SetTargetObject_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        videeps_pkg__srv__SetTargetObject_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
videeps_pkg__srv__SetTargetObject_Request__Sequence__fini(videeps_pkg__srv__SetTargetObject_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      videeps_pkg__srv__SetTargetObject_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

videeps_pkg__srv__SetTargetObject_Request__Sequence *
videeps_pkg__srv__SetTargetObject_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  videeps_pkg__srv__SetTargetObject_Request__Sequence * array = (videeps_pkg__srv__SetTargetObject_Request__Sequence *)allocator.allocate(sizeof(videeps_pkg__srv__SetTargetObject_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = videeps_pkg__srv__SetTargetObject_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
videeps_pkg__srv__SetTargetObject_Request__Sequence__destroy(videeps_pkg__srv__SetTargetObject_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    videeps_pkg__srv__SetTargetObject_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
videeps_pkg__srv__SetTargetObject_Request__Sequence__are_equal(const videeps_pkg__srv__SetTargetObject_Request__Sequence * lhs, const videeps_pkg__srv__SetTargetObject_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!videeps_pkg__srv__SetTargetObject_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
videeps_pkg__srv__SetTargetObject_Request__Sequence__copy(
  const videeps_pkg__srv__SetTargetObject_Request__Sequence * input,
  videeps_pkg__srv__SetTargetObject_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(videeps_pkg__srv__SetTargetObject_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    videeps_pkg__srv__SetTargetObject_Request * data =
      (videeps_pkg__srv__SetTargetObject_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!videeps_pkg__srv__SetTargetObject_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          videeps_pkg__srv__SetTargetObject_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!videeps_pkg__srv__SetTargetObject_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
videeps_pkg__srv__SetTargetObject_Response__init(videeps_pkg__srv__SetTargetObject_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    videeps_pkg__srv__SetTargetObject_Response__fini(msg);
    return false;
  }
  return true;
}

void
videeps_pkg__srv__SetTargetObject_Response__fini(videeps_pkg__srv__SetTargetObject_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
videeps_pkg__srv__SetTargetObject_Response__are_equal(const videeps_pkg__srv__SetTargetObject_Response * lhs, const videeps_pkg__srv__SetTargetObject_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
videeps_pkg__srv__SetTargetObject_Response__copy(
  const videeps_pkg__srv__SetTargetObject_Response * input,
  videeps_pkg__srv__SetTargetObject_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

videeps_pkg__srv__SetTargetObject_Response *
videeps_pkg__srv__SetTargetObject_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  videeps_pkg__srv__SetTargetObject_Response * msg = (videeps_pkg__srv__SetTargetObject_Response *)allocator.allocate(sizeof(videeps_pkg__srv__SetTargetObject_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(videeps_pkg__srv__SetTargetObject_Response));
  bool success = videeps_pkg__srv__SetTargetObject_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
videeps_pkg__srv__SetTargetObject_Response__destroy(videeps_pkg__srv__SetTargetObject_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    videeps_pkg__srv__SetTargetObject_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
videeps_pkg__srv__SetTargetObject_Response__Sequence__init(videeps_pkg__srv__SetTargetObject_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  videeps_pkg__srv__SetTargetObject_Response * data = NULL;

  if (size) {
    data = (videeps_pkg__srv__SetTargetObject_Response *)allocator.zero_allocate(size, sizeof(videeps_pkg__srv__SetTargetObject_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = videeps_pkg__srv__SetTargetObject_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        videeps_pkg__srv__SetTargetObject_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
videeps_pkg__srv__SetTargetObject_Response__Sequence__fini(videeps_pkg__srv__SetTargetObject_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      videeps_pkg__srv__SetTargetObject_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

videeps_pkg__srv__SetTargetObject_Response__Sequence *
videeps_pkg__srv__SetTargetObject_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  videeps_pkg__srv__SetTargetObject_Response__Sequence * array = (videeps_pkg__srv__SetTargetObject_Response__Sequence *)allocator.allocate(sizeof(videeps_pkg__srv__SetTargetObject_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = videeps_pkg__srv__SetTargetObject_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
videeps_pkg__srv__SetTargetObject_Response__Sequence__destroy(videeps_pkg__srv__SetTargetObject_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    videeps_pkg__srv__SetTargetObject_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
videeps_pkg__srv__SetTargetObject_Response__Sequence__are_equal(const videeps_pkg__srv__SetTargetObject_Response__Sequence * lhs, const videeps_pkg__srv__SetTargetObject_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!videeps_pkg__srv__SetTargetObject_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
videeps_pkg__srv__SetTargetObject_Response__Sequence__copy(
  const videeps_pkg__srv__SetTargetObject_Response__Sequence * input,
  videeps_pkg__srv__SetTargetObject_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(videeps_pkg__srv__SetTargetObject_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    videeps_pkg__srv__SetTargetObject_Response * data =
      (videeps_pkg__srv__SetTargetObject_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!videeps_pkg__srv__SetTargetObject_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          videeps_pkg__srv__SetTargetObject_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!videeps_pkg__srv__SetTargetObject_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "videeps_pkg/srv/detail/set_target_object__functions.h"

bool
videeps_pkg__srv__SetTargetObject_Event__init(videeps_pkg__srv__SetTargetObject_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    videeps_pkg__srv__SetTargetObject_Event__fini(msg);
    return false;
  }
  // request
  if (!videeps_pkg__srv__SetTargetObject_Request__Sequence__init(&msg->request, 0)) {
    videeps_pkg__srv__SetTargetObject_Event__fini(msg);
    return false;
  }
  // response
  if (!videeps_pkg__srv__SetTargetObject_Response__Sequence__init(&msg->response, 0)) {
    videeps_pkg__srv__SetTargetObject_Event__fini(msg);
    return false;
  }
  return true;
}

void
videeps_pkg__srv__SetTargetObject_Event__fini(videeps_pkg__srv__SetTargetObject_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  videeps_pkg__srv__SetTargetObject_Request__Sequence__fini(&msg->request);
  // response
  videeps_pkg__srv__SetTargetObject_Response__Sequence__fini(&msg->response);
}

bool
videeps_pkg__srv__SetTargetObject_Event__are_equal(const videeps_pkg__srv__SetTargetObject_Event * lhs, const videeps_pkg__srv__SetTargetObject_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!videeps_pkg__srv__SetTargetObject_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!videeps_pkg__srv__SetTargetObject_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
videeps_pkg__srv__SetTargetObject_Event__copy(
  const videeps_pkg__srv__SetTargetObject_Event * input,
  videeps_pkg__srv__SetTargetObject_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!videeps_pkg__srv__SetTargetObject_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!videeps_pkg__srv__SetTargetObject_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

videeps_pkg__srv__SetTargetObject_Event *
videeps_pkg__srv__SetTargetObject_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  videeps_pkg__srv__SetTargetObject_Event * msg = (videeps_pkg__srv__SetTargetObject_Event *)allocator.allocate(sizeof(videeps_pkg__srv__SetTargetObject_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(videeps_pkg__srv__SetTargetObject_Event));
  bool success = videeps_pkg__srv__SetTargetObject_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
videeps_pkg__srv__SetTargetObject_Event__destroy(videeps_pkg__srv__SetTargetObject_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    videeps_pkg__srv__SetTargetObject_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
videeps_pkg__srv__SetTargetObject_Event__Sequence__init(videeps_pkg__srv__SetTargetObject_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  videeps_pkg__srv__SetTargetObject_Event * data = NULL;

  if (size) {
    data = (videeps_pkg__srv__SetTargetObject_Event *)allocator.zero_allocate(size, sizeof(videeps_pkg__srv__SetTargetObject_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = videeps_pkg__srv__SetTargetObject_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        videeps_pkg__srv__SetTargetObject_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
videeps_pkg__srv__SetTargetObject_Event__Sequence__fini(videeps_pkg__srv__SetTargetObject_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      videeps_pkg__srv__SetTargetObject_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

videeps_pkg__srv__SetTargetObject_Event__Sequence *
videeps_pkg__srv__SetTargetObject_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  videeps_pkg__srv__SetTargetObject_Event__Sequence * array = (videeps_pkg__srv__SetTargetObject_Event__Sequence *)allocator.allocate(sizeof(videeps_pkg__srv__SetTargetObject_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = videeps_pkg__srv__SetTargetObject_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
videeps_pkg__srv__SetTargetObject_Event__Sequence__destroy(videeps_pkg__srv__SetTargetObject_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    videeps_pkg__srv__SetTargetObject_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
videeps_pkg__srv__SetTargetObject_Event__Sequence__are_equal(const videeps_pkg__srv__SetTargetObject_Event__Sequence * lhs, const videeps_pkg__srv__SetTargetObject_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!videeps_pkg__srv__SetTargetObject_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
videeps_pkg__srv__SetTargetObject_Event__Sequence__copy(
  const videeps_pkg__srv__SetTargetObject_Event__Sequence * input,
  videeps_pkg__srv__SetTargetObject_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(videeps_pkg__srv__SetTargetObject_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    videeps_pkg__srv__SetTargetObject_Event * data =
      (videeps_pkg__srv__SetTargetObject_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!videeps_pkg__srv__SetTargetObject_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          videeps_pkg__srv__SetTargetObject_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!videeps_pkg__srv__SetTargetObject_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
