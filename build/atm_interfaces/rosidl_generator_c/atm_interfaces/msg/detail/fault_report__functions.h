// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from atm_interfaces:msg/FaultReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/fault_report.h"


#ifndef ATM_INTERFACES__MSG__DETAIL__FAULT_REPORT__FUNCTIONS_H_
#define ATM_INTERFACES__MSG__DETAIL__FAULT_REPORT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "atm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "atm_interfaces/msg/detail/fault_report__struct.h"

/// Initialize msg/FaultReport message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * atm_interfaces__msg__FaultReport
 * )) before or use
 * atm_interfaces__msg__FaultReport__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
bool
atm_interfaces__msg__FaultReport__init(atm_interfaces__msg__FaultReport * msg);

/// Finalize msg/FaultReport message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
void
atm_interfaces__msg__FaultReport__fini(atm_interfaces__msg__FaultReport * msg);

/// Create msg/FaultReport message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * atm_interfaces__msg__FaultReport__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
atm_interfaces__msg__FaultReport *
atm_interfaces__msg__FaultReport__create(void);

/// Destroy msg/FaultReport message.
/**
 * It calls
 * atm_interfaces__msg__FaultReport__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
void
atm_interfaces__msg__FaultReport__destroy(atm_interfaces__msg__FaultReport * msg);

/// Check for msg/FaultReport message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
bool
atm_interfaces__msg__FaultReport__are_equal(const atm_interfaces__msg__FaultReport * lhs, const atm_interfaces__msg__FaultReport * rhs);

/// Copy a msg/FaultReport message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
bool
atm_interfaces__msg__FaultReport__copy(
  const atm_interfaces__msg__FaultReport * input,
  atm_interfaces__msg__FaultReport * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_type_hash_t *
atm_interfaces__msg__FaultReport__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
atm_interfaces__msg__FaultReport__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_runtime_c__type_description__TypeSource *
atm_interfaces__msg__FaultReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
atm_interfaces__msg__FaultReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/FaultReport messages.
/**
 * It allocates the memory for the number of elements and calls
 * atm_interfaces__msg__FaultReport__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
bool
atm_interfaces__msg__FaultReport__Sequence__init(atm_interfaces__msg__FaultReport__Sequence * array, size_t size);

/// Finalize array of msg/FaultReport messages.
/**
 * It calls
 * atm_interfaces__msg__FaultReport__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
void
atm_interfaces__msg__FaultReport__Sequence__fini(atm_interfaces__msg__FaultReport__Sequence * array);

/// Create array of msg/FaultReport messages.
/**
 * It allocates the memory for the array and calls
 * atm_interfaces__msg__FaultReport__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
atm_interfaces__msg__FaultReport__Sequence *
atm_interfaces__msg__FaultReport__Sequence__create(size_t size);

/// Destroy array of msg/FaultReport messages.
/**
 * It calls
 * atm_interfaces__msg__FaultReport__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
void
atm_interfaces__msg__FaultReport__Sequence__destroy(atm_interfaces__msg__FaultReport__Sequence * array);

/// Check for msg/FaultReport message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
bool
atm_interfaces__msg__FaultReport__Sequence__are_equal(const atm_interfaces__msg__FaultReport__Sequence * lhs, const atm_interfaces__msg__FaultReport__Sequence * rhs);

/// Copy an array of msg/FaultReport messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
bool
atm_interfaces__msg__FaultReport__Sequence__copy(
  const atm_interfaces__msg__FaultReport__Sequence * input,
  atm_interfaces__msg__FaultReport__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__MSG__DETAIL__FAULT_REPORT__FUNCTIONS_H_
