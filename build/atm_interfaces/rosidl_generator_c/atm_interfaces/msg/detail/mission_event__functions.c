// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from atm_interfaces:msg/MissionEvent.idl
// generated code does not contain a copyright notice
#include "atm_interfaces/msg/detail/mission_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mission_id`
// Member `event_type`
// Member `source`
// Member `detail`
#include "rosidl_runtime_c/string_functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
atm_interfaces__msg__MissionEvent__init(atm_interfaces__msg__MissionEvent * msg)
{
  if (!msg) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    atm_interfaces__msg__MissionEvent__fini(msg);
    return false;
  }
  // event_type
  if (!rosidl_runtime_c__String__init(&msg->event_type)) {
    atm_interfaces__msg__MissionEvent__fini(msg);
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    atm_interfaces__msg__MissionEvent__fini(msg);
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__init(&msg->detail)) {
    atm_interfaces__msg__MissionEvent__fini(msg);
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    atm_interfaces__msg__MissionEvent__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__msg__MissionEvent__fini(atm_interfaces__msg__MissionEvent * msg)
{
  if (!msg) {
    return;
  }
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // event_type
  rosidl_runtime_c__String__fini(&msg->event_type);
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // detail
  rosidl_runtime_c__String__fini(&msg->detail);
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
atm_interfaces__msg__MissionEvent__are_equal(const atm_interfaces__msg__MissionEvent * lhs, const atm_interfaces__msg__MissionEvent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_id), &(rhs->mission_id)))
  {
    return false;
  }
  // event_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->event_type), &(rhs->event_type)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detail), &(rhs->detail)))
  {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
atm_interfaces__msg__MissionEvent__copy(
  const atm_interfaces__msg__MissionEvent * input,
  atm_interfaces__msg__MissionEvent * output)
{
  if (!input || !output) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_id), &(output->mission_id)))
  {
    return false;
  }
  // event_type
  if (!rosidl_runtime_c__String__copy(
      &(input->event_type), &(output->event_type)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__copy(
      &(input->detail), &(output->detail)))
  {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

atm_interfaces__msg__MissionEvent *
atm_interfaces__msg__MissionEvent__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__MissionEvent * msg = (atm_interfaces__msg__MissionEvent *)allocator.allocate(sizeof(atm_interfaces__msg__MissionEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__msg__MissionEvent));
  bool success = atm_interfaces__msg__MissionEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__msg__MissionEvent__destroy(atm_interfaces__msg__MissionEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__msg__MissionEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__msg__MissionEvent__Sequence__init(atm_interfaces__msg__MissionEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__MissionEvent * data = NULL;

  if (size) {
    data = (atm_interfaces__msg__MissionEvent *)allocator.zero_allocate(size, sizeof(atm_interfaces__msg__MissionEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__msg__MissionEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__msg__MissionEvent__fini(&data[i - 1]);
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
atm_interfaces__msg__MissionEvent__Sequence__fini(atm_interfaces__msg__MissionEvent__Sequence * array)
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
      atm_interfaces__msg__MissionEvent__fini(&array->data[i]);
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

atm_interfaces__msg__MissionEvent__Sequence *
atm_interfaces__msg__MissionEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__MissionEvent__Sequence * array = (atm_interfaces__msg__MissionEvent__Sequence *)allocator.allocate(sizeof(atm_interfaces__msg__MissionEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__msg__MissionEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__msg__MissionEvent__Sequence__destroy(atm_interfaces__msg__MissionEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__msg__MissionEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__msg__MissionEvent__Sequence__are_equal(const atm_interfaces__msg__MissionEvent__Sequence * lhs, const atm_interfaces__msg__MissionEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__msg__MissionEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__msg__MissionEvent__Sequence__copy(
  const atm_interfaces__msg__MissionEvent__Sequence * input,
  atm_interfaces__msg__MissionEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__msg__MissionEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__msg__MissionEvent * data =
      (atm_interfaces__msg__MissionEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__msg__MissionEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__msg__MissionEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__msg__MissionEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
