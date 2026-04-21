// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from atm_interfaces:msg/StopDetection.idl
// generated code does not contain a copyright notice
#include "atm_interfaces/msg/detail/stop_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `detected_class`
// Member `estimated_gap_id`
// Member `estimated_line_id`
#include "rosidl_runtime_c/string_functions.h"

bool
atm_interfaces__msg__StopDetection__init(atm_interfaces__msg__StopDetection * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    atm_interfaces__msg__StopDetection__fini(msg);
    return false;
  }
  // detected
  // detected_class
  if (!rosidl_runtime_c__String__init(&msg->detected_class)) {
    atm_interfaces__msg__StopDetection__fini(msg);
    return false;
  }
  // estimated_gap_id
  if (!rosidl_runtime_c__String__init(&msg->estimated_gap_id)) {
    atm_interfaces__msg__StopDetection__fini(msg);
    return false;
  }
  // estimated_line_id
  if (!rosidl_runtime_c__String__init(&msg->estimated_line_id)) {
    atm_interfaces__msg__StopDetection__fini(msg);
    return false;
  }
  // confidence
  // mission_match
  return true;
}

void
atm_interfaces__msg__StopDetection__fini(atm_interfaces__msg__StopDetection * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // detected
  // detected_class
  rosidl_runtime_c__String__fini(&msg->detected_class);
  // estimated_gap_id
  rosidl_runtime_c__String__fini(&msg->estimated_gap_id);
  // estimated_line_id
  rosidl_runtime_c__String__fini(&msg->estimated_line_id);
  // confidence
  // mission_match
}

bool
atm_interfaces__msg__StopDetection__are_equal(const atm_interfaces__msg__StopDetection * lhs, const atm_interfaces__msg__StopDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // detected
  if (lhs->detected != rhs->detected) {
    return false;
  }
  // detected_class
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detected_class), &(rhs->detected_class)))
  {
    return false;
  }
  // estimated_gap_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->estimated_gap_id), &(rhs->estimated_gap_id)))
  {
    return false;
  }
  // estimated_line_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->estimated_line_id), &(rhs->estimated_line_id)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // mission_match
  if (lhs->mission_match != rhs->mission_match) {
    return false;
  }
  return true;
}

bool
atm_interfaces__msg__StopDetection__copy(
  const atm_interfaces__msg__StopDetection * input,
  atm_interfaces__msg__StopDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // detected
  output->detected = input->detected;
  // detected_class
  if (!rosidl_runtime_c__String__copy(
      &(input->detected_class), &(output->detected_class)))
  {
    return false;
  }
  // estimated_gap_id
  if (!rosidl_runtime_c__String__copy(
      &(input->estimated_gap_id), &(output->estimated_gap_id)))
  {
    return false;
  }
  // estimated_line_id
  if (!rosidl_runtime_c__String__copy(
      &(input->estimated_line_id), &(output->estimated_line_id)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // mission_match
  output->mission_match = input->mission_match;
  return true;
}

atm_interfaces__msg__StopDetection *
atm_interfaces__msg__StopDetection__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__StopDetection * msg = (atm_interfaces__msg__StopDetection *)allocator.allocate(sizeof(atm_interfaces__msg__StopDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__msg__StopDetection));
  bool success = atm_interfaces__msg__StopDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__msg__StopDetection__destroy(atm_interfaces__msg__StopDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__msg__StopDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__msg__StopDetection__Sequence__init(atm_interfaces__msg__StopDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__StopDetection * data = NULL;

  if (size) {
    data = (atm_interfaces__msg__StopDetection *)allocator.zero_allocate(size, sizeof(atm_interfaces__msg__StopDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__msg__StopDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__msg__StopDetection__fini(&data[i - 1]);
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
atm_interfaces__msg__StopDetection__Sequence__fini(atm_interfaces__msg__StopDetection__Sequence * array)
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
      atm_interfaces__msg__StopDetection__fini(&array->data[i]);
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

atm_interfaces__msg__StopDetection__Sequence *
atm_interfaces__msg__StopDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__StopDetection__Sequence * array = (atm_interfaces__msg__StopDetection__Sequence *)allocator.allocate(sizeof(atm_interfaces__msg__StopDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__msg__StopDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__msg__StopDetection__Sequence__destroy(atm_interfaces__msg__StopDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__msg__StopDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__msg__StopDetection__Sequence__are_equal(const atm_interfaces__msg__StopDetection__Sequence * lhs, const atm_interfaces__msg__StopDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__msg__StopDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__msg__StopDetection__Sequence__copy(
  const atm_interfaces__msg__StopDetection__Sequence * input,
  atm_interfaces__msg__StopDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__msg__StopDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__msg__StopDetection * data =
      (atm_interfaces__msg__StopDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__msg__StopDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__msg__StopDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__msg__StopDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
