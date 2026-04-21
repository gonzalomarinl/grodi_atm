// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from atm_interfaces:msg/Heartbeat.idl
// generated code does not contain a copyright notice

#include "atm_interfaces/msg/detail/heartbeat__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_type_hash_t *
atm_interfaces__msg__Heartbeat__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0x2b, 0xc9, 0x84, 0x57, 0x01, 0x5f, 0xd4,
      0x7f, 0xf6, 0x03, 0xe1, 0x38, 0x05, 0x58, 0x8c,
      0xfe, 0x6f, 0xbb, 0x49, 0xcb, 0x96, 0xb2, 0x25,
      0x41, 0x05, 0x2c, 0x5c, 0xc3, 0xa0, 0xd2, 0xd5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char atm_interfaces__msg__Heartbeat__TYPE_NAME[] = "atm_interfaces/msg/Heartbeat";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char atm_interfaces__msg__Heartbeat__FIELD_NAME__node_name[] = "node_name";
static char atm_interfaces__msg__Heartbeat__FIELD_NAME__machine_id[] = "machine_id";
static char atm_interfaces__msg__Heartbeat__FIELD_NAME__stamp[] = "stamp";
static char atm_interfaces__msg__Heartbeat__FIELD_NAME__seq[] = "seq";
static char atm_interfaces__msg__Heartbeat__FIELD_NAME__ok[] = "ok";
static char atm_interfaces__msg__Heartbeat__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field atm_interfaces__msg__Heartbeat__FIELDS[] = {
  {
    {atm_interfaces__msg__Heartbeat__FIELD_NAME__node_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__Heartbeat__FIELD_NAME__machine_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__Heartbeat__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__Heartbeat__FIELD_NAME__seq, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__Heartbeat__FIELD_NAME__ok, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__Heartbeat__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription atm_interfaces__msg__Heartbeat__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
atm_interfaces__msg__Heartbeat__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {atm_interfaces__msg__Heartbeat__TYPE_NAME, 28, 28},
      {atm_interfaces__msg__Heartbeat__FIELDS, 6, 6},
    },
    {atm_interfaces__msg__Heartbeat__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string node_name\n"
  "string machine_id\n"
  "builtin_interfaces/Time stamp\n"
  "uint32 seq\n"
  "bool ok\n"
  "string state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
atm_interfaces__msg__Heartbeat__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {atm_interfaces__msg__Heartbeat__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 97, 97},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
atm_interfaces__msg__Heartbeat__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *atm_interfaces__msg__Heartbeat__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
