// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from atm_interfaces:srv/GetSystemState.idl
// generated code does not contain a copyright notice
#include "atm_interfaces/srv/detail/get_system_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
atm_interfaces__srv__GetSystemState_Request__init(atm_interfaces__srv__GetSystemState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // verbose
  return true;
}

void
atm_interfaces__srv__GetSystemState_Request__fini(atm_interfaces__srv__GetSystemState_Request * msg)
{
  if (!msg) {
    return;
  }
  // verbose
}

bool
atm_interfaces__srv__GetSystemState_Request__are_equal(const atm_interfaces__srv__GetSystemState_Request * lhs, const atm_interfaces__srv__GetSystemState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // verbose
  if (lhs->verbose != rhs->verbose) {
    return false;
  }
  return true;
}

bool
atm_interfaces__srv__GetSystemState_Request__copy(
  const atm_interfaces__srv__GetSystemState_Request * input,
  atm_interfaces__srv__GetSystemState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // verbose
  output->verbose = input->verbose;
  return true;
}

atm_interfaces__srv__GetSystemState_Request *
atm_interfaces__srv__GetSystemState_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__srv__GetSystemState_Request * msg = (atm_interfaces__srv__GetSystemState_Request *)allocator.allocate(sizeof(atm_interfaces__srv__GetSystemState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__srv__GetSystemState_Request));
  bool success = atm_interfaces__srv__GetSystemState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__srv__GetSystemState_Request__destroy(atm_interfaces__srv__GetSystemState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__srv__GetSystemState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__srv__GetSystemState_Request__Sequence__init(atm_interfaces__srv__GetSystemState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__srv__GetSystemState_Request * data = NULL;

  if (size) {
    data = (atm_interfaces__srv__GetSystemState_Request *)allocator.zero_allocate(size, sizeof(atm_interfaces__srv__GetSystemState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__srv__GetSystemState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__srv__GetSystemState_Request__fini(&data[i - 1]);
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
atm_interfaces__srv__GetSystemState_Request__Sequence__fini(atm_interfaces__srv__GetSystemState_Request__Sequence * array)
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
      atm_interfaces__srv__GetSystemState_Request__fini(&array->data[i]);
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

atm_interfaces__srv__GetSystemState_Request__Sequence *
atm_interfaces__srv__GetSystemState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__srv__GetSystemState_Request__Sequence * array = (atm_interfaces__srv__GetSystemState_Request__Sequence *)allocator.allocate(sizeof(atm_interfaces__srv__GetSystemState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__srv__GetSystemState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__srv__GetSystemState_Request__Sequence__destroy(atm_interfaces__srv__GetSystemState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__srv__GetSystemState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__srv__GetSystemState_Request__Sequence__are_equal(const atm_interfaces__srv__GetSystemState_Request__Sequence * lhs, const atm_interfaces__srv__GetSystemState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__srv__GetSystemState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__srv__GetSystemState_Request__Sequence__copy(
  const atm_interfaces__srv__GetSystemState_Request__Sequence * input,
  atm_interfaces__srv__GetSystemState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__srv__GetSystemState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__srv__GetSystemState_Request * data =
      (atm_interfaces__srv__GetSystemState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__srv__GetSystemState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__srv__GetSystemState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__srv__GetSystemState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `master_state`
// Member `slave_state`
// Member `mission_id`
// Member `detail`
#include "rosidl_runtime_c/string_functions.h"

bool
atm_interfaces__srv__GetSystemState_Response__init(atm_interfaces__srv__GetSystemState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // master_state
  if (!rosidl_runtime_c__String__init(&msg->master_state)) {
    atm_interfaces__srv__GetSystemState_Response__fini(msg);
    return false;
  }
  // slave_state
  if (!rosidl_runtime_c__String__init(&msg->slave_state)) {
    atm_interfaces__srv__GetSystemState_Response__fini(msg);
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    atm_interfaces__srv__GetSystemState_Response__fini(msg);
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__init(&msg->detail)) {
    atm_interfaces__srv__GetSystemState_Response__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__srv__GetSystemState_Response__fini(atm_interfaces__srv__GetSystemState_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // master_state
  rosidl_runtime_c__String__fini(&msg->master_state);
  // slave_state
  rosidl_runtime_c__String__fini(&msg->slave_state);
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // detail
  rosidl_runtime_c__String__fini(&msg->detail);
}

bool
atm_interfaces__srv__GetSystemState_Response__are_equal(const atm_interfaces__srv__GetSystemState_Response * lhs, const atm_interfaces__srv__GetSystemState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // master_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->master_state), &(rhs->master_state)))
  {
    return false;
  }
  // slave_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->slave_state), &(rhs->slave_state)))
  {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_id), &(rhs->mission_id)))
  {
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detail), &(rhs->detail)))
  {
    return false;
  }
  return true;
}

bool
atm_interfaces__srv__GetSystemState_Response__copy(
  const atm_interfaces__srv__GetSystemState_Response * input,
  atm_interfaces__srv__GetSystemState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // master_state
  if (!rosidl_runtime_c__String__copy(
      &(input->master_state), &(output->master_state)))
  {
    return false;
  }
  // slave_state
  if (!rosidl_runtime_c__String__copy(
      &(input->slave_state), &(output->slave_state)))
  {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_id), &(output->mission_id)))
  {
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__copy(
      &(input->detail), &(output->detail)))
  {
    return false;
  }
  return true;
}

atm_interfaces__srv__GetSystemState_Response *
atm_interfaces__srv__GetSystemState_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__srv__GetSystemState_Response * msg = (atm_interfaces__srv__GetSystemState_Response *)allocator.allocate(sizeof(atm_interfaces__srv__GetSystemState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__srv__GetSystemState_Response));
  bool success = atm_interfaces__srv__GetSystemState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__srv__GetSystemState_Response__destroy(atm_interfaces__srv__GetSystemState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__srv__GetSystemState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__srv__GetSystemState_Response__Sequence__init(atm_interfaces__srv__GetSystemState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__srv__GetSystemState_Response * data = NULL;

  if (size) {
    data = (atm_interfaces__srv__GetSystemState_Response *)allocator.zero_allocate(size, sizeof(atm_interfaces__srv__GetSystemState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__srv__GetSystemState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__srv__GetSystemState_Response__fini(&data[i - 1]);
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
atm_interfaces__srv__GetSystemState_Response__Sequence__fini(atm_interfaces__srv__GetSystemState_Response__Sequence * array)
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
      atm_interfaces__srv__GetSystemState_Response__fini(&array->data[i]);
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

atm_interfaces__srv__GetSystemState_Response__Sequence *
atm_interfaces__srv__GetSystemState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__srv__GetSystemState_Response__Sequence * array = (atm_interfaces__srv__GetSystemState_Response__Sequence *)allocator.allocate(sizeof(atm_interfaces__srv__GetSystemState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__srv__GetSystemState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__srv__GetSystemState_Response__Sequence__destroy(atm_interfaces__srv__GetSystemState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__srv__GetSystemState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__srv__GetSystemState_Response__Sequence__are_equal(const atm_interfaces__srv__GetSystemState_Response__Sequence * lhs, const atm_interfaces__srv__GetSystemState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__srv__GetSystemState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__srv__GetSystemState_Response__Sequence__copy(
  const atm_interfaces__srv__GetSystemState_Response__Sequence * input,
  atm_interfaces__srv__GetSystemState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__srv__GetSystemState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__srv__GetSystemState_Response * data =
      (atm_interfaces__srv__GetSystemState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__srv__GetSystemState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__srv__GetSystemState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__srv__GetSystemState_Response__copy(
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
// #include "atm_interfaces/srv/detail/get_system_state__functions.h"

bool
atm_interfaces__srv__GetSystemState_Event__init(atm_interfaces__srv__GetSystemState_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    atm_interfaces__srv__GetSystemState_Event__fini(msg);
    return false;
  }
  // request
  if (!atm_interfaces__srv__GetSystemState_Request__Sequence__init(&msg->request, 0)) {
    atm_interfaces__srv__GetSystemState_Event__fini(msg);
    return false;
  }
  // response
  if (!atm_interfaces__srv__GetSystemState_Response__Sequence__init(&msg->response, 0)) {
    atm_interfaces__srv__GetSystemState_Event__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__srv__GetSystemState_Event__fini(atm_interfaces__srv__GetSystemState_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  atm_interfaces__srv__GetSystemState_Request__Sequence__fini(&msg->request);
  // response
  atm_interfaces__srv__GetSystemState_Response__Sequence__fini(&msg->response);
}

bool
atm_interfaces__srv__GetSystemState_Event__are_equal(const atm_interfaces__srv__GetSystemState_Event * lhs, const atm_interfaces__srv__GetSystemState_Event * rhs)
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
  if (!atm_interfaces__srv__GetSystemState_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!atm_interfaces__srv__GetSystemState_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
atm_interfaces__srv__GetSystemState_Event__copy(
  const atm_interfaces__srv__GetSystemState_Event * input,
  atm_interfaces__srv__GetSystemState_Event * output)
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
  if (!atm_interfaces__srv__GetSystemState_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!atm_interfaces__srv__GetSystemState_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

atm_interfaces__srv__GetSystemState_Event *
atm_interfaces__srv__GetSystemState_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__srv__GetSystemState_Event * msg = (atm_interfaces__srv__GetSystemState_Event *)allocator.allocate(sizeof(atm_interfaces__srv__GetSystemState_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__srv__GetSystemState_Event));
  bool success = atm_interfaces__srv__GetSystemState_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__srv__GetSystemState_Event__destroy(atm_interfaces__srv__GetSystemState_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__srv__GetSystemState_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__srv__GetSystemState_Event__Sequence__init(atm_interfaces__srv__GetSystemState_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__srv__GetSystemState_Event * data = NULL;

  if (size) {
    data = (atm_interfaces__srv__GetSystemState_Event *)allocator.zero_allocate(size, sizeof(atm_interfaces__srv__GetSystemState_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__srv__GetSystemState_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__srv__GetSystemState_Event__fini(&data[i - 1]);
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
atm_interfaces__srv__GetSystemState_Event__Sequence__fini(atm_interfaces__srv__GetSystemState_Event__Sequence * array)
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
      atm_interfaces__srv__GetSystemState_Event__fini(&array->data[i]);
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

atm_interfaces__srv__GetSystemState_Event__Sequence *
atm_interfaces__srv__GetSystemState_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__srv__GetSystemState_Event__Sequence * array = (atm_interfaces__srv__GetSystemState_Event__Sequence *)allocator.allocate(sizeof(atm_interfaces__srv__GetSystemState_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__srv__GetSystemState_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__srv__GetSystemState_Event__Sequence__destroy(atm_interfaces__srv__GetSystemState_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__srv__GetSystemState_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__srv__GetSystemState_Event__Sequence__are_equal(const atm_interfaces__srv__GetSystemState_Event__Sequence * lhs, const atm_interfaces__srv__GetSystemState_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__srv__GetSystemState_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__srv__GetSystemState_Event__Sequence__copy(
  const atm_interfaces__srv__GetSystemState_Event__Sequence * input,
  atm_interfaces__srv__GetSystemState_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__srv__GetSystemState_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__srv__GetSystemState_Event * data =
      (atm_interfaces__srv__GetSystemState_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__srv__GetSystemState_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__srv__GetSystemState_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__srv__GetSystemState_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
