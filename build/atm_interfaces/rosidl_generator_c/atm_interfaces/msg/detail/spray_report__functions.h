// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from atm_interfaces:msg/SprayReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "atm_interfaces/msg/spray_report.h"


#ifndef ATM_INTERFACES__MSG__DETAIL__SPRAY_REPORT__FUNCTIONS_H_
#define ATM_INTERFACES__MSG__DETAIL__SPRAY_REPORT__FUNCTIONS_H_

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

#include "atm_interfaces/msg/detail/spray_report__struct.h"

/// Initialize msg/SprayReport message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * atm_interfaces__msg__SprayReport
 * )) before or use
 * atm_interfaces__msg__SprayReport__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
bool
atm_interfaces__msg__SprayReport__init(atm_interfaces__msg__SprayReport * msg);

/// Finalize msg/SprayReport message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
void
atm_interfaces__msg__SprayReport__fini(atm_interfaces__msg__SprayReport * msg);

/// Create msg/SprayReport message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * atm_interfaces__msg__SprayReport__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
atm_interfaces__msg__SprayReport *
atm_interfaces__msg__SprayReport__create(void);

/// Destroy msg/SprayReport message.
/**
 * It calls
 * atm_interfaces__msg__SprayReport__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
void
atm_interfaces__msg__SprayReport__destroy(atm_interfaces__msg__SprayReport * msg);

/// Check for msg/SprayReport message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
bool
atm_interfaces__msg__SprayReport__are_equal(const atm_interfaces__msg__SprayReport * lhs, const atm_interfaces__msg__SprayReport * rhs);

/// Copy a msg/SprayReport message.
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
atm_interfaces__msg__SprayReport__copy(
  const atm_interfaces__msg__SprayReport * input,
  atm_interfaces__msg__SprayReport * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_type_hash_t *
atm_interfaces__msg__SprayReport__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
atm_interfaces__msg__SprayReport__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_runtime_c__type_description__TypeSource *
atm_interfaces__msg__SprayReport__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
atm_interfaces__msg__SprayReport__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/SprayReport messages.
/**
 * It allocates the memory for the number of elements and calls
 * atm_interfaces__msg__SprayReport__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
bool
atm_interfaces__msg__SprayReport__Sequence__init(atm_interfaces__msg__SprayReport__Sequence * array, size_t size);

/// Finalize array of msg/SprayReport messages.
/**
 * It calls
 * atm_interfaces__msg__SprayReport__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
void
atm_interfaces__msg__SprayReport__Sequence__fini(atm_interfaces__msg__SprayReport__Sequence * array);

/// Create array of msg/SprayReport messages.
/**
 * It allocates the memory for the array and calls
 * atm_interfaces__msg__SprayReport__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
atm_interfaces__msg__SprayReport__Sequence *
atm_interfaces__msg__SprayReport__Sequence__create(size_t size);

/// Destroy array of msg/SprayReport messages.
/**
 * It calls
 * atm_interfaces__msg__SprayReport__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
void
atm_interfaces__msg__SprayReport__Sequence__destroy(atm_interfaces__msg__SprayReport__Sequence * array);

/// Check for msg/SprayReport message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
bool
atm_interfaces__msg__SprayReport__Sequence__are_equal(const atm_interfaces__msg__SprayReport__Sequence * lhs, const atm_interfaces__msg__SprayReport__Sequence * rhs);

/// Copy an array of msg/SprayReport messages.
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
atm_interfaces__msg__SprayReport__Sequence__copy(
  const atm_interfaces__msg__SprayReport__Sequence * input,
  atm_interfaces__msg__SprayReport__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ATM_INTERFACES__MSG__DETAIL__SPRAY_REPORT__FUNCTIONS_H_
