// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from atm_interfaces:msg/LineTarget.idl
// generated code does not contain a copyright notice

#include "atm_interfaces/msg/detail/line_target__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_type_hash_t *
atm_interfaces__msg__LineTarget__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb9, 0xc7, 0xe0, 0xe9, 0x2a, 0x53, 0x9c, 0x13,
      0x8e, 0x3c, 0xca, 0x9c, 0xb3, 0xab, 0xf2, 0xf2,
      0xb1, 0xbb, 0x61, 0x1d, 0xc7, 0x3a, 0x76, 0xea,
      0xe8, 0xb2, 0x8d, 0x07, 0x9e, 0x89, 0x80, 0x12,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char atm_interfaces__msg__LineTarget__TYPE_NAME[] = "atm_interfaces/msg/LineTarget";

// Define type names, field names, and default values
static char atm_interfaces__msg__LineTarget__FIELD_NAME__mission_id[] = "mission_id";
static char atm_interfaces__msg__LineTarget__FIELD_NAME__gap_id[] = "gap_id";
static char atm_interfaces__msg__LineTarget__FIELD_NAME__line_id[] = "line_id";
static char atm_interfaces__msg__LineTarget__FIELD_NAME__stop_index[] = "stop_index";
static char atm_interfaces__msg__LineTarget__FIELD_NAME__mode[] = "mode";
static char atm_interfaces__msg__LineTarget__FIELD_NAME__selected_by_vega[] = "selected_by_vega";
static char atm_interfaces__msg__LineTarget__FIELD_NAME__notes[] = "notes";

static rosidl_runtime_c__type_description__Field atm_interfaces__msg__LineTarget__FIELDS[] = {
  {
    {atm_interfaces__msg__LineTarget__FIELD_NAME__mission_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__LineTarget__FIELD_NAME__gap_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__LineTarget__FIELD_NAME__line_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__LineTarget__FIELD_NAME__stop_index, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__LineTarget__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__LineTarget__FIELD_NAME__selected_by_vega, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__LineTarget__FIELD_NAME__notes, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
atm_interfaces__msg__LineTarget__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {atm_interfaces__msg__LineTarget__TYPE_NAME, 29, 29},
      {atm_interfaces__msg__LineTarget__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string mission_id\n"
  "string gap_id\n"
  "string line_id\n"
  "uint32 stop_index\n"
  "string mode\n"
  "bool selected_by_vega\n"
  "string notes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
atm_interfaces__msg__LineTarget__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {atm_interfaces__msg__LineTarget__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 112, 112},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
atm_interfaces__msg__LineTarget__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *atm_interfaces__msg__LineTarget__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
