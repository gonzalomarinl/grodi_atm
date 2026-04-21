// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from atm_interfaces:msg/SlaveStatus.idl
// generated code does not contain a copyright notice

#include "atm_interfaces/msg/detail/slave_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_type_hash_t *
atm_interfaces__msg__SlaveStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa8, 0x4f, 0xa4, 0x6e, 0x10, 0xce, 0x90, 0xc3,
      0xe1, 0xa7, 0x9f, 0xa2, 0x38, 0xe5, 0x7f, 0x1b,
      0xb6, 0xbb, 0xd9, 0x4e, 0xbd, 0x15, 0xdf, 0xff,
      0xef, 0xf2, 0xa9, 0x7a, 0x5a, 0xa9, 0x4e, 0xa0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char atm_interfaces__msg__SlaveStatus__TYPE_NAME[] = "atm_interfaces/msg/SlaveStatus";

// Define type names, field names, and default values
static char atm_interfaces__msg__SlaveStatus__FIELD_NAME__state[] = "state";
static char atm_interfaces__msg__SlaveStatus__FIELD_NAME__at_base[] = "at_base";
static char atm_interfaces__msg__SlaveStatus__FIELD_NAME__moving[] = "moving";
static char atm_interfaces__msg__SlaveStatus__FIELD_NAME__atomizer_up[] = "atomizer_up";
static char atm_interfaces__msg__SlaveStatus__FIELD_NAME__atomizer_down[] = "atomizer_down";
static char atm_interfaces__msg__SlaveStatus__FIELD_NAME__current_line_id[] = "current_line_id";
static char atm_interfaces__msg__SlaveStatus__FIELD_NAME__current_stop_index[] = "current_stop_index";
static char atm_interfaces__msg__SlaveStatus__FIELD_NAME__link_ok[] = "link_ok";

static rosidl_runtime_c__type_description__Field atm_interfaces__msg__SlaveStatus__FIELDS[] = {
  {
    {atm_interfaces__msg__SlaveStatus__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__SlaveStatus__FIELD_NAME__at_base, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__SlaveStatus__FIELD_NAME__moving, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__SlaveStatus__FIELD_NAME__atomizer_up, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__SlaveStatus__FIELD_NAME__atomizer_down, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__SlaveStatus__FIELD_NAME__current_line_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__SlaveStatus__FIELD_NAME__current_stop_index, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__SlaveStatus__FIELD_NAME__link_ok, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
atm_interfaces__msg__SlaveStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {atm_interfaces__msg__SlaveStatus__TYPE_NAME, 30, 30},
      {atm_interfaces__msg__SlaveStatus__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string state\n"
  "bool at_base\n"
  "bool moving\n"
  "bool atomizer_up\n"
  "bool atomizer_down\n"
  "string current_line_id\n"
  "uint32 current_stop_index\n"
  "bool link_ok";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
atm_interfaces__msg__SlaveStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {atm_interfaces__msg__SlaveStatus__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 136, 136},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
atm_interfaces__msg__SlaveStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *atm_interfaces__msg__SlaveStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
