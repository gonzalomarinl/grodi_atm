// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from atm_interfaces:msg/Heartbeat.idl
// generated code does not contain a copyright notice
#include "atm_interfaces/msg/detail/heartbeat__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_name`
// Member `machine_id`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
atm_interfaces__msg__Heartbeat__init(atm_interfaces__msg__Heartbeat * msg)
{
  if (!msg) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    atm_interfaces__msg__Heartbeat__fini(msg);
    return false;
  }
  // machine_id
  if (!rosidl_runtime_c__String__init(&msg->machine_id)) {
    atm_interfaces__msg__Heartbeat__fini(msg);
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    atm_interfaces__msg__Heartbeat__fini(msg);
    return false;
  }
  // seq
  // ok
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    atm_interfaces__msg__Heartbeat__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__msg__Heartbeat__fini(atm_interfaces__msg__Heartbeat * msg)
{
  if (!msg) {
    return;
  }
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // machine_id
  rosidl_runtime_c__String__fini(&msg->machine_id);
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // seq
  // ok
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

bool
atm_interfaces__msg__Heartbeat__are_equal(const atm_interfaces__msg__Heartbeat * lhs, const atm_interfaces__msg__Heartbeat * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_name), &(rhs->node_name)))
  {
    return false;
  }
  // machine_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->machine_id), &(rhs->machine_id)))
  {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // seq
  if (lhs->seq != rhs->seq) {
    return false;
  }
  // ok
  if (lhs->ok != rhs->ok) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
atm_interfaces__msg__Heartbeat__copy(
  const atm_interfaces__msg__Heartbeat * input,
  atm_interfaces__msg__Heartbeat * output)
{
  if (!input || !output) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->node_name), &(output->node_name)))
  {
    return false;
  }
  // machine_id
  if (!rosidl_runtime_c__String__copy(
      &(input->machine_id), &(output->machine_id)))
  {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // seq
  output->seq = input->seq;
  // ok
  output->ok = input->ok;
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

atm_interfaces__msg__Heartbeat *
atm_interfaces__msg__Heartbeat__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__Heartbeat * msg = (atm_interfaces__msg__Heartbeat *)allocator.allocate(sizeof(atm_interfaces__msg__Heartbeat), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__msg__Heartbeat));
  bool success = atm_interfaces__msg__Heartbeat__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__msg__Heartbeat__destroy(atm_interfaces__msg__Heartbeat * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__msg__Heartbeat__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__msg__Heartbeat__Sequence__init(atm_interfaces__msg__Heartbeat__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__Heartbeat * data = NULL;

  if (size) {
    data = (atm_interfaces__msg__Heartbeat *)allocator.zero_allocate(size, sizeof(atm_interfaces__msg__Heartbeat), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__msg__Heartbeat__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__msg__Heartbeat__fini(&data[i - 1]);
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
atm_interfaces__msg__Heartbeat__Sequence__fini(atm_interfaces__msg__Heartbeat__Sequence * array)
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
      atm_interfaces__msg__Heartbeat__fini(&array->data[i]);
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

atm_interfaces__msg__Heartbeat__Sequence *
atm_interfaces__msg__Heartbeat__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__Heartbeat__Sequence * array = (atm_interfaces__msg__Heartbeat__Sequence *)allocator.allocate(sizeof(atm_interfaces__msg__Heartbeat__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__msg__Heartbeat__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__msg__Heartbeat__Sequence__destroy(atm_interfaces__msg__Heartbeat__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__msg__Heartbeat__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__msg__Heartbeat__Sequence__are_equal(const atm_interfaces__msg__Heartbeat__Sequence * lhs, const atm_interfaces__msg__Heartbeat__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__msg__Heartbeat__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__msg__Heartbeat__Sequence__copy(
  const atm_interfaces__msg__Heartbeat__Sequence * input,
  atm_interfaces__msg__Heartbeat__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__msg__Heartbeat);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__msg__Heartbeat * data =
      (atm_interfaces__msg__Heartbeat *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__msg__Heartbeat__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__msg__Heartbeat__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__msg__Heartbeat__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
