// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from atm_interfaces:msg/SlaveStatus.idl
// generated code does not contain a copyright notice
#include "atm_interfaces/msg/detail/slave_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state`
// Member `current_line_id`
#include "rosidl_runtime_c/string_functions.h"

bool
atm_interfaces__msg__SlaveStatus__init(atm_interfaces__msg__SlaveStatus * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    atm_interfaces__msg__SlaveStatus__fini(msg);
    return false;
  }
  // at_base
  // moving
  // atomizer_up
  // atomizer_down
  // current_line_id
  if (!rosidl_runtime_c__String__init(&msg->current_line_id)) {
    atm_interfaces__msg__SlaveStatus__fini(msg);
    return false;
  }
  // current_stop_index
  // link_ok
  return true;
}

void
atm_interfaces__msg__SlaveStatus__fini(atm_interfaces__msg__SlaveStatus * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // at_base
  // moving
  // atomizer_up
  // atomizer_down
  // current_line_id
  rosidl_runtime_c__String__fini(&msg->current_line_id);
  // current_stop_index
  // link_ok
}

bool
atm_interfaces__msg__SlaveStatus__are_equal(const atm_interfaces__msg__SlaveStatus * lhs, const atm_interfaces__msg__SlaveStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // at_base
  if (lhs->at_base != rhs->at_base) {
    return false;
  }
  // moving
  if (lhs->moving != rhs->moving) {
    return false;
  }
  // atomizer_up
  if (lhs->atomizer_up != rhs->atomizer_up) {
    return false;
  }
  // atomizer_down
  if (lhs->atomizer_down != rhs->atomizer_down) {
    return false;
  }
  // current_line_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_line_id), &(rhs->current_line_id)))
  {
    return false;
  }
  // current_stop_index
  if (lhs->current_stop_index != rhs->current_stop_index) {
    return false;
  }
  // link_ok
  if (lhs->link_ok != rhs->link_ok) {
    return false;
  }
  return true;
}

bool
atm_interfaces__msg__SlaveStatus__copy(
  const atm_interfaces__msg__SlaveStatus * input,
  atm_interfaces__msg__SlaveStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // at_base
  output->at_base = input->at_base;
  // moving
  output->moving = input->moving;
  // atomizer_up
  output->atomizer_up = input->atomizer_up;
  // atomizer_down
  output->atomizer_down = input->atomizer_down;
  // current_line_id
  if (!rosidl_runtime_c__String__copy(
      &(input->current_line_id), &(output->current_line_id)))
  {
    return false;
  }
  // current_stop_index
  output->current_stop_index = input->current_stop_index;
  // link_ok
  output->link_ok = input->link_ok;
  return true;
}

atm_interfaces__msg__SlaveStatus *
atm_interfaces__msg__SlaveStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__SlaveStatus * msg = (atm_interfaces__msg__SlaveStatus *)allocator.allocate(sizeof(atm_interfaces__msg__SlaveStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__msg__SlaveStatus));
  bool success = atm_interfaces__msg__SlaveStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__msg__SlaveStatus__destroy(atm_interfaces__msg__SlaveStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__msg__SlaveStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__msg__SlaveStatus__Sequence__init(atm_interfaces__msg__SlaveStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__SlaveStatus * data = NULL;

  if (size) {
    data = (atm_interfaces__msg__SlaveStatus *)allocator.zero_allocate(size, sizeof(atm_interfaces__msg__SlaveStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__msg__SlaveStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__msg__SlaveStatus__fini(&data[i - 1]);
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
atm_interfaces__msg__SlaveStatus__Sequence__fini(atm_interfaces__msg__SlaveStatus__Sequence * array)
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
      atm_interfaces__msg__SlaveStatus__fini(&array->data[i]);
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

atm_interfaces__msg__SlaveStatus__Sequence *
atm_interfaces__msg__SlaveStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__SlaveStatus__Sequence * array = (atm_interfaces__msg__SlaveStatus__Sequence *)allocator.allocate(sizeof(atm_interfaces__msg__SlaveStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__msg__SlaveStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__msg__SlaveStatus__Sequence__destroy(atm_interfaces__msg__SlaveStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__msg__SlaveStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__msg__SlaveStatus__Sequence__are_equal(const atm_interfaces__msg__SlaveStatus__Sequence * lhs, const atm_interfaces__msg__SlaveStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__msg__SlaveStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__msg__SlaveStatus__Sequence__copy(
  const atm_interfaces__msg__SlaveStatus__Sequence * input,
  atm_interfaces__msg__SlaveStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__msg__SlaveStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__msg__SlaveStatus * data =
      (atm_interfaces__msg__SlaveStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__msg__SlaveStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__msg__SlaveStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__msg__SlaveStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
