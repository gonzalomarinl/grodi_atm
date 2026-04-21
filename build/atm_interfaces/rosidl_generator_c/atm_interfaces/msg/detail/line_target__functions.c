// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from atm_interfaces:msg/LineTarget.idl
// generated code does not contain a copyright notice
#include "atm_interfaces/msg/detail/line_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mission_id`
// Member `gap_id`
// Member `line_id`
// Member `mode`
// Member `notes`
#include "rosidl_runtime_c/string_functions.h"

bool
atm_interfaces__msg__LineTarget__init(atm_interfaces__msg__LineTarget * msg)
{
  if (!msg) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    atm_interfaces__msg__LineTarget__fini(msg);
    return false;
  }
  // gap_id
  if (!rosidl_runtime_c__String__init(&msg->gap_id)) {
    atm_interfaces__msg__LineTarget__fini(msg);
    return false;
  }
  // line_id
  if (!rosidl_runtime_c__String__init(&msg->line_id)) {
    atm_interfaces__msg__LineTarget__fini(msg);
    return false;
  }
  // stop_index
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    atm_interfaces__msg__LineTarget__fini(msg);
    return false;
  }
  // selected_by_vega
  // notes
  if (!rosidl_runtime_c__String__init(&msg->notes)) {
    atm_interfaces__msg__LineTarget__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__msg__LineTarget__fini(atm_interfaces__msg__LineTarget * msg)
{
  if (!msg) {
    return;
  }
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // gap_id
  rosidl_runtime_c__String__fini(&msg->gap_id);
  // line_id
  rosidl_runtime_c__String__fini(&msg->line_id);
  // stop_index
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // selected_by_vega
  // notes
  rosidl_runtime_c__String__fini(&msg->notes);
}

bool
atm_interfaces__msg__LineTarget__are_equal(const atm_interfaces__msg__LineTarget * lhs, const atm_interfaces__msg__LineTarget * rhs)
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
  // gap_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gap_id), &(rhs->gap_id)))
  {
    return false;
  }
  // line_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->line_id), &(rhs->line_id)))
  {
    return false;
  }
  // stop_index
  if (lhs->stop_index != rhs->stop_index) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // selected_by_vega
  if (lhs->selected_by_vega != rhs->selected_by_vega) {
    return false;
  }
  // notes
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->notes), &(rhs->notes)))
  {
    return false;
  }
  return true;
}

bool
atm_interfaces__msg__LineTarget__copy(
  const atm_interfaces__msg__LineTarget * input,
  atm_interfaces__msg__LineTarget * output)
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
  // gap_id
  if (!rosidl_runtime_c__String__copy(
      &(input->gap_id), &(output->gap_id)))
  {
    return false;
  }
  // line_id
  if (!rosidl_runtime_c__String__copy(
      &(input->line_id), &(output->line_id)))
  {
    return false;
  }
  // stop_index
  output->stop_index = input->stop_index;
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // selected_by_vega
  output->selected_by_vega = input->selected_by_vega;
  // notes
  if (!rosidl_runtime_c__String__copy(
      &(input->notes), &(output->notes)))
  {
    return false;
  }
  return true;
}

atm_interfaces__msg__LineTarget *
atm_interfaces__msg__LineTarget__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__LineTarget * msg = (atm_interfaces__msg__LineTarget *)allocator.allocate(sizeof(atm_interfaces__msg__LineTarget), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__msg__LineTarget));
  bool success = atm_interfaces__msg__LineTarget__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__msg__LineTarget__destroy(atm_interfaces__msg__LineTarget * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__msg__LineTarget__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__msg__LineTarget__Sequence__init(atm_interfaces__msg__LineTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__LineTarget * data = NULL;

  if (size) {
    data = (atm_interfaces__msg__LineTarget *)allocator.zero_allocate(size, sizeof(atm_interfaces__msg__LineTarget), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__msg__LineTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__msg__LineTarget__fini(&data[i - 1]);
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
atm_interfaces__msg__LineTarget__Sequence__fini(atm_interfaces__msg__LineTarget__Sequence * array)
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
      atm_interfaces__msg__LineTarget__fini(&array->data[i]);
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

atm_interfaces__msg__LineTarget__Sequence *
atm_interfaces__msg__LineTarget__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__LineTarget__Sequence * array = (atm_interfaces__msg__LineTarget__Sequence *)allocator.allocate(sizeof(atm_interfaces__msg__LineTarget__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__msg__LineTarget__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__msg__LineTarget__Sequence__destroy(atm_interfaces__msg__LineTarget__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__msg__LineTarget__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__msg__LineTarget__Sequence__are_equal(const atm_interfaces__msg__LineTarget__Sequence * lhs, const atm_interfaces__msg__LineTarget__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__msg__LineTarget__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__msg__LineTarget__Sequence__copy(
  const atm_interfaces__msg__LineTarget__Sequence * input,
  atm_interfaces__msg__LineTarget__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__msg__LineTarget);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__msg__LineTarget * data =
      (atm_interfaces__msg__LineTarget *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__msg__LineTarget__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__msg__LineTarget__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__msg__LineTarget__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
