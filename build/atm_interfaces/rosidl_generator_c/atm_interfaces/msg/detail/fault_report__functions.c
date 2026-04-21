// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from atm_interfaces:msg/FaultReport.idl
// generated code does not contain a copyright notice
#include "atm_interfaces/msg/detail/fault_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mission_id`
// Member `source`
// Member `fault_code`
// Member `severity`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
atm_interfaces__msg__FaultReport__init(atm_interfaces__msg__FaultReport * msg)
{
  if (!msg) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    atm_interfaces__msg__FaultReport__fini(msg);
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    atm_interfaces__msg__FaultReport__fini(msg);
    return false;
  }
  // fault_code
  if (!rosidl_runtime_c__String__init(&msg->fault_code)) {
    atm_interfaces__msg__FaultReport__fini(msg);
    return false;
  }
  // severity
  if (!rosidl_runtime_c__String__init(&msg->severity)) {
    atm_interfaces__msg__FaultReport__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    atm_interfaces__msg__FaultReport__fini(msg);
    return false;
  }
  // requires_return_home
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    atm_interfaces__msg__FaultReport__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__msg__FaultReport__fini(atm_interfaces__msg__FaultReport * msg)
{
  if (!msg) {
    return;
  }
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // fault_code
  rosidl_runtime_c__String__fini(&msg->fault_code);
  // severity
  rosidl_runtime_c__String__fini(&msg->severity);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // requires_return_home
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
atm_interfaces__msg__FaultReport__are_equal(const atm_interfaces__msg__FaultReport * lhs, const atm_interfaces__msg__FaultReport * rhs)
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
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // fault_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fault_code), &(rhs->fault_code)))
  {
    return false;
  }
  // severity
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->severity), &(rhs->severity)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // requires_return_home
  if (lhs->requires_return_home != rhs->requires_return_home) {
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
atm_interfaces__msg__FaultReport__copy(
  const atm_interfaces__msg__FaultReport * input,
  atm_interfaces__msg__FaultReport * output)
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
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // fault_code
  if (!rosidl_runtime_c__String__copy(
      &(input->fault_code), &(output->fault_code)))
  {
    return false;
  }
  // severity
  if (!rosidl_runtime_c__String__copy(
      &(input->severity), &(output->severity)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // requires_return_home
  output->requires_return_home = input->requires_return_home;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

atm_interfaces__msg__FaultReport *
atm_interfaces__msg__FaultReport__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__FaultReport * msg = (atm_interfaces__msg__FaultReport *)allocator.allocate(sizeof(atm_interfaces__msg__FaultReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__msg__FaultReport));
  bool success = atm_interfaces__msg__FaultReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__msg__FaultReport__destroy(atm_interfaces__msg__FaultReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__msg__FaultReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__msg__FaultReport__Sequence__init(atm_interfaces__msg__FaultReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__FaultReport * data = NULL;

  if (size) {
    data = (atm_interfaces__msg__FaultReport *)allocator.zero_allocate(size, sizeof(atm_interfaces__msg__FaultReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__msg__FaultReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__msg__FaultReport__fini(&data[i - 1]);
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
atm_interfaces__msg__FaultReport__Sequence__fini(atm_interfaces__msg__FaultReport__Sequence * array)
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
      atm_interfaces__msg__FaultReport__fini(&array->data[i]);
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

atm_interfaces__msg__FaultReport__Sequence *
atm_interfaces__msg__FaultReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__msg__FaultReport__Sequence * array = (atm_interfaces__msg__FaultReport__Sequence *)allocator.allocate(sizeof(atm_interfaces__msg__FaultReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__msg__FaultReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__msg__FaultReport__Sequence__destroy(atm_interfaces__msg__FaultReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__msg__FaultReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__msg__FaultReport__Sequence__are_equal(const atm_interfaces__msg__FaultReport__Sequence * lhs, const atm_interfaces__msg__FaultReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__msg__FaultReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__msg__FaultReport__Sequence__copy(
  const atm_interfaces__msg__FaultReport__Sequence * input,
  atm_interfaces__msg__FaultReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__msg__FaultReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__msg__FaultReport * data =
      (atm_interfaces__msg__FaultReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__msg__FaultReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__msg__FaultReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__msg__FaultReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
