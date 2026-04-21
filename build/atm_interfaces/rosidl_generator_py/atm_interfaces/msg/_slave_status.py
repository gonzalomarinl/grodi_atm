# generated from rosidl_generator_py/resource/_idl.py.em
# with input from atm_interfaces:msg/SlaveStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SlaveStatus(type):
    """Metaclass of message 'SlaveStatus'."""

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
                'atm_interfaces.msg.SlaveStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__slave_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__slave_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__slave_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__slave_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__slave_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SlaveStatus(metaclass=Metaclass_SlaveStatus):
    """Message class 'SlaveStatus'."""

    __slots__ = [
        '_state',
        '_at_base',
        '_moving',
        '_atomizer_up',
        '_atomizer_down',
        '_current_line_id',
        '_current_stop_index',
        '_link_ok',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'state': 'string',
        'at_base': 'boolean',
        'moving': 'boolean',
        'atomizer_up': 'boolean',
        'atomizer_down': 'boolean',
        'current_line_id': 'string',
        'current_stop_index': 'uint32',
        'link_ok': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.state = kwargs.get('state', str())
        self.at_base = kwargs.get('at_base', bool())
        self.moving = kwargs.get('moving', bool())
        self.atomizer_up = kwargs.get('atomizer_up', bool())
        self.atomizer_down = kwargs.get('atomizer_down', bool())
        self.current_line_id = kwargs.get('current_line_id', str())
        self.current_stop_index = kwargs.get('current_stop_index', int())
        self.link_ok = kwargs.get('link_ok', bool())

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
        if self.state != other.state:
            return False
        if self.at_base != other.at_base:
            return False
        if self.moving != other.moving:
            return False
        if self.atomizer_up != other.atomizer_up:
            return False
        if self.atomizer_down != other.atomizer_down:
            return False
        if self.current_line_id != other.current_line_id:
            return False
        if self.current_stop_index != other.current_stop_index:
            return False
        if self.link_ok != other.link_ok:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value

    @builtins.property
    def at_base(self):
        """Message field 'at_base'."""
        return self._at_base

    @at_base.setter
    def at_base(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'at_base' field must be of type 'bool'"
        self._at_base = value

    @builtins.property
    def moving(self):
        """Message field 'moving'."""
        return self._moving

    @moving.setter
    def moving(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'moving' field must be of type 'bool'"
        self._moving = value

    @builtins.property
    def atomizer_up(self):
        """Message field 'atomizer_up'."""
        return self._atomizer_up

    @atomizer_up.setter
    def atomizer_up(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'atomizer_up' field must be of type 'bool'"
        self._atomizer_up = value

    @builtins.property
    def atomizer_down(self):
        """Message field 'atomizer_down'."""
        return self._atomizer_down

    @atomizer_down.setter
    def atomizer_down(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'atomizer_down' field must be of type 'bool'"
        self._atomizer_down = value

    @builtins.property
    def current_line_id(self):
        """Message field 'current_line_id'."""
        return self._current_line_id

    @current_line_id.setter
    def current_line_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'current_line_id' field must be of type 'str'"
        self._current_line_id = value

    @builtins.property
    def current_stop_index(self):
        """Message field 'current_stop_index'."""
        return self._current_stop_index

    @current_stop_index.setter
    def current_stop_index(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_stop_index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'current_stop_index' field must be an unsigned integer in [0, 4294967295]"
        self._current_stop_index = value

    @builtins.property
    def link_ok(self):
        """Message field 'link_ok'."""
        return self._link_ok

    @link_ok.setter
    def link_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'link_ok' field must be of type 'bool'"
        self._link_ok = value
