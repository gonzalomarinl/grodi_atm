// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from atm_interfaces:msg/StopDetection.idl
// generated code does not contain a copyright notice

#include "atm_interfaces/msg/detail/stop_detection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_atm_interfaces
const rosidl_type_hash_t *
atm_interfaces__msg__StopDetection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0xbb, 0x36, 0xac, 0x99, 0xeb, 0xb2, 0xba,
      0x02, 0x2f, 0xb0, 0x88, 0xe3, 0xa1, 0x9e, 0x13,
      0x90, 0x02, 0xce, 0xca, 0x56, 0x0e, 0x63, 0xe7,
      0x74, 0xf7, 0xfd, 0x75, 0xc0, 0x3b, 0xbd, 0xa9,
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

static char atm_interfaces__msg__StopDetection__TYPE_NAME[] = "atm_interfaces/msg/StopDetection";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char atm_interfaces__msg__StopDetection__FIELD_NAME__stamp[] = "stamp";
static char atm_interfaces__msg__StopDetection__FIELD_NAME__detected[] = "detected";
static char atm_interfaces__msg__StopDetection__FIELD_NAME__detected_class[] = "detected_class";
static char atm_interfaces__msg__StopDetection__FIELD_NAME__estimated_gap_id[] = "estimated_gap_id";
static char atm_interfaces__msg__StopDetection__FIELD_NAME__estimated_line_id[] = "estimated_line_id";
static char atm_interfaces__msg__StopDetection__FIELD_NAME__confidence[] = "confidence";
static char atm_interfaces__msg__StopDetection__FIELD_NAME__mission_match[] = "mission_match";

static rosidl_runtime_c__type_description__Field atm_interfaces__msg__StopDetection__FIELDS[] = {
  {
    {atm_interfaces__msg__StopDetection__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__StopDetection__FIELD_NAME__detected, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__StopDetection__FIELD_NAME__detected_class, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__StopDetection__FIELD_NAME__estimated_gap_id, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__StopDetection__FIELD_NAME__estimated_line_id, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__StopDetection__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {atm_interfaces__msg__StopDetection__FIELD_NAME__mission_match, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription atm_interfaces__msg__StopDetection__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
atm_interfaces__msg__StopDetection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {atm_interfaces__msg__StopDetection__TYPE_NAME, 32, 32},
      {atm_interfaces__msg__StopDetection__FIELDS, 7, 7},
    },
    {atm_interfaces__msg__StopDetection__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp\n"
  "bool detected\n"
  "string detected_class\n"
  "string estimated_gap_id\n"
  "string estimated_line_id\n"
  "float32 confidence\n"
  "bool mission_match";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
atm_interfaces__msg__StopDetection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {atm_interfaces__msg__StopDetection__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 153, 153},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
atm_interfaces__msg__StopDetection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *atm_interfaces__msg__StopDetection__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
