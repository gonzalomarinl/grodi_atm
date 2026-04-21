// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from atm_interfaces:action/NavigateToStop.idl
// generated code does not contain a copyright notice
#include "atm_interfaces/action/detail/navigate_to_stop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mission_id`
// Member `line_id`
#include "rosidl_runtime_c/string_functions.h"

bool
atm_interfaces__action__NavigateToStop_Goal__init(atm_interfaces__action__NavigateToStop_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    atm_interfaces__action__NavigateToStop_Goal__fini(msg);
    return false;
  }
  // line_id
  if (!rosidl_runtime_c__String__init(&msg->line_id)) {
    atm_interfaces__action__NavigateToStop_Goal__fini(msg);
    return false;
  }
  // stop_index
  return true;
}

void
atm_interfaces__action__NavigateToStop_Goal__fini(atm_interfaces__action__NavigateToStop_Goal * msg)
{
  if (!msg) {
    return;
  }
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // line_id
  rosidl_runtime_c__String__fini(&msg->line_id);
  // stop_index
}

bool
atm_interfaces__action__NavigateToStop_Goal__are_equal(const atm_interfaces__action__NavigateToStop_Goal * lhs, const atm_interfaces__action__NavigateToStop_Goal * rhs)
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
  return true;
}

bool
atm_interfaces__action__NavigateToStop_Goal__copy(
  const atm_interfaces__action__NavigateToStop_Goal * input,
  atm_interfaces__action__NavigateToStop_Goal * output)
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
  // line_id
  if (!rosidl_runtime_c__String__copy(
      &(input->line_id), &(output->line_id)))
  {
    return false;
  }
  // stop_index
  output->stop_index = input->stop_index;
  return true;
}

atm_interfaces__action__NavigateToStop_Goal *
atm_interfaces__action__NavigateToStop_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_Goal * msg = (atm_interfaces__action__NavigateToStop_Goal *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__action__NavigateToStop_Goal));
  bool success = atm_interfaces__action__NavigateToStop_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__action__NavigateToStop_Goal__destroy(atm_interfaces__action__NavigateToStop_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__action__NavigateToStop_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__action__NavigateToStop_Goal__Sequence__init(atm_interfaces__action__NavigateToStop_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_Goal * data = NULL;

  if (size) {
    data = (atm_interfaces__action__NavigateToStop_Goal *)allocator.zero_allocate(size, sizeof(atm_interfaces__action__NavigateToStop_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__action__NavigateToStop_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__action__NavigateToStop_Goal__fini(&data[i - 1]);
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
atm_interfaces__action__NavigateToStop_Goal__Sequence__fini(atm_interfaces__action__NavigateToStop_Goal__Sequence * array)
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
      atm_interfaces__action__NavigateToStop_Goal__fini(&array->data[i]);
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

atm_interfaces__action__NavigateToStop_Goal__Sequence *
atm_interfaces__action__NavigateToStop_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_Goal__Sequence * array = (atm_interfaces__action__NavigateToStop_Goal__Sequence *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__action__NavigateToStop_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__action__NavigateToStop_Goal__Sequence__destroy(atm_interfaces__action__NavigateToStop_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__action__NavigateToStop_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__action__NavigateToStop_Goal__Sequence__are_equal(const atm_interfaces__action__NavigateToStop_Goal__Sequence * lhs, const atm_interfaces__action__NavigateToStop_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_Goal__Sequence__copy(
  const atm_interfaces__action__NavigateToStop_Goal__Sequence * input,
  atm_interfaces__action__NavigateToStop_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__action__NavigateToStop_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__action__NavigateToStop_Goal * data =
      (atm_interfaces__action__NavigateToStop_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__action__NavigateToStop_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__action__NavigateToStop_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_Goal__copy(
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
atm_interfaces__action__NavigateToStop_Result__init(atm_interfaces__action__NavigateToStop_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // stop_found
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    atm_interfaces__action__NavigateToStop_Result__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__action__NavigateToStop_Result__fini(atm_interfaces__action__NavigateToStop_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // stop_found
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
atm_interfaces__action__NavigateToStop_Result__are_equal(const atm_interfaces__action__NavigateToStop_Result * lhs, const atm_interfaces__action__NavigateToStop_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // stop_found
  if (lhs->stop_found != rhs->stop_found) {
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
atm_interfaces__action__NavigateToStop_Result__copy(
  const atm_interfaces__action__NavigateToStop_Result * input,
  atm_interfaces__action__NavigateToStop_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // stop_found
  output->stop_found = input->stop_found;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

atm_interfaces__action__NavigateToStop_Result *
atm_interfaces__action__NavigateToStop_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_Result * msg = (atm_interfaces__action__NavigateToStop_Result *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__action__NavigateToStop_Result));
  bool success = atm_interfaces__action__NavigateToStop_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__action__NavigateToStop_Result__destroy(atm_interfaces__action__NavigateToStop_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__action__NavigateToStop_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__action__NavigateToStop_Result__Sequence__init(atm_interfaces__action__NavigateToStop_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_Result * data = NULL;

  if (size) {
    data = (atm_interfaces__action__NavigateToStop_Result *)allocator.zero_allocate(size, sizeof(atm_interfaces__action__NavigateToStop_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__action__NavigateToStop_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__action__NavigateToStop_Result__fini(&data[i - 1]);
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
atm_interfaces__action__NavigateToStop_Result__Sequence__fini(atm_interfaces__action__NavigateToStop_Result__Sequence * array)
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
      atm_interfaces__action__NavigateToStop_Result__fini(&array->data[i]);
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

atm_interfaces__action__NavigateToStop_Result__Sequence *
atm_interfaces__action__NavigateToStop_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_Result__Sequence * array = (atm_interfaces__action__NavigateToStop_Result__Sequence *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__action__NavigateToStop_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__action__NavigateToStop_Result__Sequence__destroy(atm_interfaces__action__NavigateToStop_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__action__NavigateToStop_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__action__NavigateToStop_Result__Sequence__are_equal(const atm_interfaces__action__NavigateToStop_Result__Sequence * lhs, const atm_interfaces__action__NavigateToStop_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_Result__Sequence__copy(
  const atm_interfaces__action__NavigateToStop_Result__Sequence * input,
  atm_interfaces__action__NavigateToStop_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__action__NavigateToStop_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__action__NavigateToStop_Result * data =
      (atm_interfaces__action__NavigateToStop_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__action__NavigateToStop_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__action__NavigateToStop_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `navigation_state`
// Member `current_line_id`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
atm_interfaces__action__NavigateToStop_Feedback__init(atm_interfaces__action__NavigateToStop_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // navigation_state
  if (!rosidl_runtime_c__String__init(&msg->navigation_state)) {
    atm_interfaces__action__NavigateToStop_Feedback__fini(msg);
    return false;
  }
  // current_line_id
  if (!rosidl_runtime_c__String__init(&msg->current_line_id)) {
    atm_interfaces__action__NavigateToStop_Feedback__fini(msg);
    return false;
  }
  // vision_confidence
  return true;
}

void
atm_interfaces__action__NavigateToStop_Feedback__fini(atm_interfaces__action__NavigateToStop_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // navigation_state
  rosidl_runtime_c__String__fini(&msg->navigation_state);
  // current_line_id
  rosidl_runtime_c__String__fini(&msg->current_line_id);
  // vision_confidence
}

bool
atm_interfaces__action__NavigateToStop_Feedback__are_equal(const atm_interfaces__action__NavigateToStop_Feedback * lhs, const atm_interfaces__action__NavigateToStop_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // navigation_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->navigation_state), &(rhs->navigation_state)))
  {
    return false;
  }
  // current_line_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_line_id), &(rhs->current_line_id)))
  {
    return false;
  }
  // vision_confidence
  if (lhs->vision_confidence != rhs->vision_confidence) {
    return false;
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_Feedback__copy(
  const atm_interfaces__action__NavigateToStop_Feedback * input,
  atm_interfaces__action__NavigateToStop_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // navigation_state
  if (!rosidl_runtime_c__String__copy(
      &(input->navigation_state), &(output->navigation_state)))
  {
    return false;
  }
  // current_line_id
  if (!rosidl_runtime_c__String__copy(
      &(input->current_line_id), &(output->current_line_id)))
  {
    return false;
  }
  // vision_confidence
  output->vision_confidence = input->vision_confidence;
  return true;
}

atm_interfaces__action__NavigateToStop_Feedback *
atm_interfaces__action__NavigateToStop_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_Feedback * msg = (atm_interfaces__action__NavigateToStop_Feedback *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__action__NavigateToStop_Feedback));
  bool success = atm_interfaces__action__NavigateToStop_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__action__NavigateToStop_Feedback__destroy(atm_interfaces__action__NavigateToStop_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__action__NavigateToStop_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__action__NavigateToStop_Feedback__Sequence__init(atm_interfaces__action__NavigateToStop_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_Feedback * data = NULL;

  if (size) {
    data = (atm_interfaces__action__NavigateToStop_Feedback *)allocator.zero_allocate(size, sizeof(atm_interfaces__action__NavigateToStop_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__action__NavigateToStop_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__action__NavigateToStop_Feedback__fini(&data[i - 1]);
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
atm_interfaces__action__NavigateToStop_Feedback__Sequence__fini(atm_interfaces__action__NavigateToStop_Feedback__Sequence * array)
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
      atm_interfaces__action__NavigateToStop_Feedback__fini(&array->data[i]);
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

atm_interfaces__action__NavigateToStop_Feedback__Sequence *
atm_interfaces__action__NavigateToStop_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_Feedback__Sequence * array = (atm_interfaces__action__NavigateToStop_Feedback__Sequence *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__action__NavigateToStop_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__action__NavigateToStop_Feedback__Sequence__destroy(atm_interfaces__action__NavigateToStop_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__action__NavigateToStop_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__action__NavigateToStop_Feedback__Sequence__are_equal(const atm_interfaces__action__NavigateToStop_Feedback__Sequence * lhs, const atm_interfaces__action__NavigateToStop_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_Feedback__Sequence__copy(
  const atm_interfaces__action__NavigateToStop_Feedback__Sequence * input,
  atm_interfaces__action__NavigateToStop_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__action__NavigateToStop_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__action__NavigateToStop_Feedback * data =
      (atm_interfaces__action__NavigateToStop_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__action__NavigateToStop_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__action__NavigateToStop_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"

bool
atm_interfaces__action__NavigateToStop_SendGoal_Request__init(atm_interfaces__action__NavigateToStop_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    atm_interfaces__action__NavigateToStop_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!atm_interfaces__action__NavigateToStop_Goal__init(&msg->goal)) {
    atm_interfaces__action__NavigateToStop_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__action__NavigateToStop_SendGoal_Request__fini(atm_interfaces__action__NavigateToStop_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  atm_interfaces__action__NavigateToStop_Goal__fini(&msg->goal);
}

bool
atm_interfaces__action__NavigateToStop_SendGoal_Request__are_equal(const atm_interfaces__action__NavigateToStop_SendGoal_Request * lhs, const atm_interfaces__action__NavigateToStop_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!atm_interfaces__action__NavigateToStop_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_SendGoal_Request__copy(
  const atm_interfaces__action__NavigateToStop_SendGoal_Request * input,
  atm_interfaces__action__NavigateToStop_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!atm_interfaces__action__NavigateToStop_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

atm_interfaces__action__NavigateToStop_SendGoal_Request *
atm_interfaces__action__NavigateToStop_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_SendGoal_Request * msg = (atm_interfaces__action__NavigateToStop_SendGoal_Request *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Request));
  bool success = atm_interfaces__action__NavigateToStop_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__action__NavigateToStop_SendGoal_Request__destroy(atm_interfaces__action__NavigateToStop_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__action__NavigateToStop_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__init(atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_SendGoal_Request * data = NULL;

  if (size) {
    data = (atm_interfaces__action__NavigateToStop_SendGoal_Request *)allocator.zero_allocate(size, sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__action__NavigateToStop_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__action__NavigateToStop_SendGoal_Request__fini(&data[i - 1]);
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
atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__fini(atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence * array)
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
      atm_interfaces__action__NavigateToStop_SendGoal_Request__fini(&array->data[i]);
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

atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence *
atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence * array = (atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__destroy(atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__are_equal(const atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence * lhs, const atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__copy(
  const atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence * input,
  atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__action__NavigateToStop_SendGoal_Request * data =
      (atm_interfaces__action__NavigateToStop_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__action__NavigateToStop_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__action__NavigateToStop_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
atm_interfaces__action__NavigateToStop_SendGoal_Response__init(atm_interfaces__action__NavigateToStop_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    atm_interfaces__action__NavigateToStop_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__action__NavigateToStop_SendGoal_Response__fini(atm_interfaces__action__NavigateToStop_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
atm_interfaces__action__NavigateToStop_SendGoal_Response__are_equal(const atm_interfaces__action__NavigateToStop_SendGoal_Response * lhs, const atm_interfaces__action__NavigateToStop_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
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
atm_interfaces__action__NavigateToStop_SendGoal_Response__copy(
  const atm_interfaces__action__NavigateToStop_SendGoal_Response * input,
  atm_interfaces__action__NavigateToStop_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

atm_interfaces__action__NavigateToStop_SendGoal_Response *
atm_interfaces__action__NavigateToStop_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_SendGoal_Response * msg = (atm_interfaces__action__NavigateToStop_SendGoal_Response *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Response));
  bool success = atm_interfaces__action__NavigateToStop_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__action__NavigateToStop_SendGoal_Response__destroy(atm_interfaces__action__NavigateToStop_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__action__NavigateToStop_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__init(atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_SendGoal_Response * data = NULL;

  if (size) {
    data = (atm_interfaces__action__NavigateToStop_SendGoal_Response *)allocator.zero_allocate(size, sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__action__NavigateToStop_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__action__NavigateToStop_SendGoal_Response__fini(&data[i - 1]);
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
atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__fini(atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence * array)
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
      atm_interfaces__action__NavigateToStop_SendGoal_Response__fini(&array->data[i]);
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

atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence *
atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence * array = (atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__destroy(atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__are_equal(const atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence * lhs, const atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__copy(
  const atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence * input,
  atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__action__NavigateToStop_SendGoal_Response * data =
      (atm_interfaces__action__NavigateToStop_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__action__NavigateToStop_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__action__NavigateToStop_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_SendGoal_Response__copy(
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
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"

bool
atm_interfaces__action__NavigateToStop_SendGoal_Event__init(atm_interfaces__action__NavigateToStop_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    atm_interfaces__action__NavigateToStop_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    atm_interfaces__action__NavigateToStop_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    atm_interfaces__action__NavigateToStop_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__action__NavigateToStop_SendGoal_Event__fini(atm_interfaces__action__NavigateToStop_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
atm_interfaces__action__NavigateToStop_SendGoal_Event__are_equal(const atm_interfaces__action__NavigateToStop_SendGoal_Event * lhs, const atm_interfaces__action__NavigateToStop_SendGoal_Event * rhs)
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
  if (!atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_SendGoal_Event__copy(
  const atm_interfaces__action__NavigateToStop_SendGoal_Event * input,
  atm_interfaces__action__NavigateToStop_SendGoal_Event * output)
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
  if (!atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

atm_interfaces__action__NavigateToStop_SendGoal_Event *
atm_interfaces__action__NavigateToStop_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_SendGoal_Event * msg = (atm_interfaces__action__NavigateToStop_SendGoal_Event *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Event));
  bool success = atm_interfaces__action__NavigateToStop_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__action__NavigateToStop_SendGoal_Event__destroy(atm_interfaces__action__NavigateToStop_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__action__NavigateToStop_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence__init(atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_SendGoal_Event * data = NULL;

  if (size) {
    data = (atm_interfaces__action__NavigateToStop_SendGoal_Event *)allocator.zero_allocate(size, sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__action__NavigateToStop_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__action__NavigateToStop_SendGoal_Event__fini(&data[i - 1]);
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
atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence__fini(atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence * array)
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
      atm_interfaces__action__NavigateToStop_SendGoal_Event__fini(&array->data[i]);
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

atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence *
atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence * array = (atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence__destroy(atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence__are_equal(const atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence * lhs, const atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence__copy(
  const atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence * input,
  atm_interfaces__action__NavigateToStop_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__action__NavigateToStop_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__action__NavigateToStop_SendGoal_Event * data =
      (atm_interfaces__action__NavigateToStop_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__action__NavigateToStop_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__action__NavigateToStop_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
atm_interfaces__action__NavigateToStop_GetResult_Request__init(atm_interfaces__action__NavigateToStop_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    atm_interfaces__action__NavigateToStop_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__action__NavigateToStop_GetResult_Request__fini(atm_interfaces__action__NavigateToStop_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
atm_interfaces__action__NavigateToStop_GetResult_Request__are_equal(const atm_interfaces__action__NavigateToStop_GetResult_Request * lhs, const atm_interfaces__action__NavigateToStop_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_GetResult_Request__copy(
  const atm_interfaces__action__NavigateToStop_GetResult_Request * input,
  atm_interfaces__action__NavigateToStop_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

atm_interfaces__action__NavigateToStop_GetResult_Request *
atm_interfaces__action__NavigateToStop_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_GetResult_Request * msg = (atm_interfaces__action__NavigateToStop_GetResult_Request *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__action__NavigateToStop_GetResult_Request));
  bool success = atm_interfaces__action__NavigateToStop_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__action__NavigateToStop_GetResult_Request__destroy(atm_interfaces__action__NavigateToStop_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__action__NavigateToStop_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__init(atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_GetResult_Request * data = NULL;

  if (size) {
    data = (atm_interfaces__action__NavigateToStop_GetResult_Request *)allocator.zero_allocate(size, sizeof(atm_interfaces__action__NavigateToStop_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__action__NavigateToStop_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__action__NavigateToStop_GetResult_Request__fini(&data[i - 1]);
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
atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__fini(atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence * array)
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
      atm_interfaces__action__NavigateToStop_GetResult_Request__fini(&array->data[i]);
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

atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence *
atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence * array = (atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__destroy(atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__are_equal(const atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence * lhs, const atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__copy(
  const atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence * input,
  atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__action__NavigateToStop_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__action__NavigateToStop_GetResult_Request * data =
      (atm_interfaces__action__NavigateToStop_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__action__NavigateToStop_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__action__NavigateToStop_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"

bool
atm_interfaces__action__NavigateToStop_GetResult_Response__init(atm_interfaces__action__NavigateToStop_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!atm_interfaces__action__NavigateToStop_Result__init(&msg->result)) {
    atm_interfaces__action__NavigateToStop_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__action__NavigateToStop_GetResult_Response__fini(atm_interfaces__action__NavigateToStop_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  atm_interfaces__action__NavigateToStop_Result__fini(&msg->result);
}

bool
atm_interfaces__action__NavigateToStop_GetResult_Response__are_equal(const atm_interfaces__action__NavigateToStop_GetResult_Response * lhs, const atm_interfaces__action__NavigateToStop_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!atm_interfaces__action__NavigateToStop_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_GetResult_Response__copy(
  const atm_interfaces__action__NavigateToStop_GetResult_Response * input,
  atm_interfaces__action__NavigateToStop_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!atm_interfaces__action__NavigateToStop_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

atm_interfaces__action__NavigateToStop_GetResult_Response *
atm_interfaces__action__NavigateToStop_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_GetResult_Response * msg = (atm_interfaces__action__NavigateToStop_GetResult_Response *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__action__NavigateToStop_GetResult_Response));
  bool success = atm_interfaces__action__NavigateToStop_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__action__NavigateToStop_GetResult_Response__destroy(atm_interfaces__action__NavigateToStop_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__action__NavigateToStop_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__init(atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_GetResult_Response * data = NULL;

  if (size) {
    data = (atm_interfaces__action__NavigateToStop_GetResult_Response *)allocator.zero_allocate(size, sizeof(atm_interfaces__action__NavigateToStop_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__action__NavigateToStop_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__action__NavigateToStop_GetResult_Response__fini(&data[i - 1]);
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
atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__fini(atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence * array)
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
      atm_interfaces__action__NavigateToStop_GetResult_Response__fini(&array->data[i]);
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

atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence *
atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence * array = (atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__destroy(atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__are_equal(const atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence * lhs, const atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__copy(
  const atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence * input,
  atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__action__NavigateToStop_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__action__NavigateToStop_GetResult_Response * data =
      (atm_interfaces__action__NavigateToStop_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__action__NavigateToStop_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__action__NavigateToStop_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"

bool
atm_interfaces__action__NavigateToStop_GetResult_Event__init(atm_interfaces__action__NavigateToStop_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    atm_interfaces__action__NavigateToStop_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__init(&msg->request, 0)) {
    atm_interfaces__action__NavigateToStop_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__init(&msg->response, 0)) {
    atm_interfaces__action__NavigateToStop_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__action__NavigateToStop_GetResult_Event__fini(atm_interfaces__action__NavigateToStop_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__fini(&msg->request);
  // response
  atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__fini(&msg->response);
}

bool
atm_interfaces__action__NavigateToStop_GetResult_Event__are_equal(const atm_interfaces__action__NavigateToStop_GetResult_Event * lhs, const atm_interfaces__action__NavigateToStop_GetResult_Event * rhs)
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
  if (!atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_GetResult_Event__copy(
  const atm_interfaces__action__NavigateToStop_GetResult_Event * input,
  atm_interfaces__action__NavigateToStop_GetResult_Event * output)
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
  if (!atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

atm_interfaces__action__NavigateToStop_GetResult_Event *
atm_interfaces__action__NavigateToStop_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_GetResult_Event * msg = (atm_interfaces__action__NavigateToStop_GetResult_Event *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__action__NavigateToStop_GetResult_Event));
  bool success = atm_interfaces__action__NavigateToStop_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__action__NavigateToStop_GetResult_Event__destroy(atm_interfaces__action__NavigateToStop_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__action__NavigateToStop_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence__init(atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_GetResult_Event * data = NULL;

  if (size) {
    data = (atm_interfaces__action__NavigateToStop_GetResult_Event *)allocator.zero_allocate(size, sizeof(atm_interfaces__action__NavigateToStop_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__action__NavigateToStop_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__action__NavigateToStop_GetResult_Event__fini(&data[i - 1]);
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
atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence__fini(atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence * array)
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
      atm_interfaces__action__NavigateToStop_GetResult_Event__fini(&array->data[i]);
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

atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence *
atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence * array = (atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence__destroy(atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence__are_equal(const atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence * lhs, const atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence__copy(
  const atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence * input,
  atm_interfaces__action__NavigateToStop_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__action__NavigateToStop_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__action__NavigateToStop_GetResult_Event * data =
      (atm_interfaces__action__NavigateToStop_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__action__NavigateToStop_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__action__NavigateToStop_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "atm_interfaces/action/detail/navigate_to_stop__functions.h"

bool
atm_interfaces__action__NavigateToStop_FeedbackMessage__init(atm_interfaces__action__NavigateToStop_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    atm_interfaces__action__NavigateToStop_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!atm_interfaces__action__NavigateToStop_Feedback__init(&msg->feedback)) {
    atm_interfaces__action__NavigateToStop_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
atm_interfaces__action__NavigateToStop_FeedbackMessage__fini(atm_interfaces__action__NavigateToStop_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  atm_interfaces__action__NavigateToStop_Feedback__fini(&msg->feedback);
}

bool
atm_interfaces__action__NavigateToStop_FeedbackMessage__are_equal(const atm_interfaces__action__NavigateToStop_FeedbackMessage * lhs, const atm_interfaces__action__NavigateToStop_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!atm_interfaces__action__NavigateToStop_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_FeedbackMessage__copy(
  const atm_interfaces__action__NavigateToStop_FeedbackMessage * input,
  atm_interfaces__action__NavigateToStop_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!atm_interfaces__action__NavigateToStop_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

atm_interfaces__action__NavigateToStop_FeedbackMessage *
atm_interfaces__action__NavigateToStop_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_FeedbackMessage * msg = (atm_interfaces__action__NavigateToStop_FeedbackMessage *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(atm_interfaces__action__NavigateToStop_FeedbackMessage));
  bool success = atm_interfaces__action__NavigateToStop_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
atm_interfaces__action__NavigateToStop_FeedbackMessage__destroy(atm_interfaces__action__NavigateToStop_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    atm_interfaces__action__NavigateToStop_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__init(atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_FeedbackMessage * data = NULL;

  if (size) {
    data = (atm_interfaces__action__NavigateToStop_FeedbackMessage *)allocator.zero_allocate(size, sizeof(atm_interfaces__action__NavigateToStop_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = atm_interfaces__action__NavigateToStop_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        atm_interfaces__action__NavigateToStop_FeedbackMessage__fini(&data[i - 1]);
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
atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__fini(atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence * array)
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
      atm_interfaces__action__NavigateToStop_FeedbackMessage__fini(&array->data[i]);
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

atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence *
atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence * array = (atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence *)allocator.allocate(sizeof(atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__destroy(atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__are_equal(const atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence * lhs, const atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__copy(
  const atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence * input,
  atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(atm_interfaces__action__NavigateToStop_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    atm_interfaces__action__NavigateToStop_FeedbackMessage * data =
      (atm_interfaces__action__NavigateToStop_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!atm_interfaces__action__NavigateToStop_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          atm_interfaces__action__NavigateToStop_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!atm_interfaces__action__NavigateToStop_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
