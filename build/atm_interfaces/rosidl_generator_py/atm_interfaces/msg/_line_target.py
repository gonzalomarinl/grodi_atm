# generated from rosidl_generator_py/resource/_idl.py.em
# with input from atm_interfaces:msg/LineTarget.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LineTarget(type):
    """Metaclass of message 'LineTarget'."""

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
                'atm_interfaces.msg.LineTarget')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__line_target
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__line_target
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__line_target
            cls._TYPE_SUPPORT = module.type_support_msg__msg__line_target
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__line_target

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LineTarget(metaclass=Metaclass_LineTarget):
    """Message class 'LineTarget'."""

    __slots__ = [
        '_mission_id',
        '_gap_id',
        '_line_id',
        '_stop_index',
        '_mode',
        '_selected_by_vega',
        '_notes',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'mission_id': 'string',
        'gap_id': 'string',
        'line_id': 'string',
        'stop_index': 'uint32',
        'mode': 'string',
        'selected_by_vega': 'boolean',
        'notes': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.mission_id = kwargs.get('mission_id', str())
        self.gap_id = kwargs.get('gap_id', str())
        self.line_id = kwargs.get('line_id', str())
        self.stop_index = kwargs.get('stop_index', int())
        self.mode = kwargs.get('mode', str())
        self.selected_by_vega = kwargs.get('selected_by_vega', bool())
        self.notes = kwargs.get('notes', str())

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
        if self.mission_id != other.mission_id:
            return False
        if self.gap_id != other.gap_id:
            return False
        if self.line_id != other.line_id:
            return False
        if self.stop_index != other.stop_index:
            return False
        if self.mode != other.mode:
            return False
        if self.selected_by_vega != other.selected_by_vega:
            return False
        if self.notes != other.notes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mission_id(self):
        """Message field 'mission_id'."""
        return self._mission_id

    @mission_id.setter
    def mission_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mission_id' field must be of type 'str'"
        self._mission_id = value

    @builtins.property
    def gap_id(self):
        """Message field 'gap_id'."""
        return self._gap_id

    @gap_id.setter
    def gap_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'gap_id' field must be of type 'str'"
        self._gap_id = value

    @builtins.property
    def line_id(self):
        """Message field 'line_id'."""
        return self._line_id

    @line_id.setter
    def line_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'line_id' field must be of type 'str'"
        self._line_id = value

    @builtins.property
    def stop_index(self):
        """Message field 'stop_index'."""
        return self._stop_index

    @stop_index.setter
    def stop_index(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'stop_index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'stop_index' field must be an unsigned integer in [0, 4294967295]"
        self._stop_index = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value

    @builtins.property
    def selected_by_vega(self):
        """Message field 'selected_by_vega'."""
        return self._selected_by_vega

    @selected_by_vega.setter
    def selected_by_vega(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'selected_by_vega' field must be of type 'bool'"
        self._selected_by_vega = value

    @builtins.property
    def notes(self):
        """Message field 'notes'."""
        return self._notes

    @notes.setter
    def notes(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'notes' field must be of type 'str'"
        self._notes = value
