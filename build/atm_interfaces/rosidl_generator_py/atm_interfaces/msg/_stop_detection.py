# generated from rosidl_generator_py/resource/_idl.py.em
# with input from atm_interfaces:msg/StopDetection.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StopDetection(type):
    """Metaclass of message 'StopDetection'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('atm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'atm_interfaces.msg.StopDetection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stop_detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stop_detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stop_detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stop_detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stop_detection

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StopDetection(metaclass=Metaclass_StopDetection):
    """Message class 'StopDetection'."""

    __slots__ = [
        '_stamp',
        '_detected',
        '_detected_class',
        '_estimated_gap_id',
        '_estimated_line_id',
        '_confidence',
        '_mission_match',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'detected': 'boolean',
        'detected_class': 'string',
        'estimated_gap_id': 'string',
        'estimated_line_id': 'string',
        'confidence': 'float',
        'mission_match': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.detected = kwargs.get('detected', bool())
        self.detected_class = kwargs.get('detected_class', str())
        self.estimated_gap_id = kwargs.get('estimated_gap_id', str())
        self.estimated_line_id = kwargs.get('estimated_line_id', str())
        self.confidence = kwargs.get('confidence', float())
        self.mission_match = kwargs.get('mission_match', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.stamp != other.stamp:
            return False
        if self.detected != other.detected:
            return False
        if self.detected_class != other.detected_class:
            return False
        if self.estimated_gap_id != other.estimated_gap_id:
            return False
        if self.estimated_line_id != other.estimated_line_id:
            return False
        if self.confidence != other.confidence:
            return False
        if self.mission_match != other.mission_match:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def detected(self):
        """Message field 'detected'."""
        return self._detected

    @detected.setter
    def detected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'detected' field must be of type 'bool'"
        self._detected = value

    @builtins.property
    def detected_class(self):
        """Message field 'detected_class'."""
        return self._detected_class

    @detected_class.setter
    def detected_class(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'detected_class' field must be of type 'str'"
        self._detected_class = value

    @builtins.property
    def estimated_gap_id(self):
        """Message field 'estimated_gap_id'."""
        return self._estimated_gap_id

    @estimated_gap_id.setter
    def estimated_gap_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'estimated_gap_id' field must be of type 'str'"
        self._estimated_gap_id = value

    @builtins.property
    def estimated_line_id(self):
        """Message field 'estimated_line_id'."""
        return self._estimated_line_id

    @estimated_line_id.setter
    def estimated_line_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'estimated_line_id' field must be of type 'str'"
        self._estimated_line_id = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value

    @builtins.property
    def mission_match(self):
        """Message field 'mission_match'."""
        return self._mission_match

    @mission_match.setter
    def mission_match(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'mission_match' field must be of type 'bool'"
        self._mission_match = value
