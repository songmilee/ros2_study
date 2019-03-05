# generated from rosidl_generator_py/resource/_msg.py.em
# generated code does not contain a copyright notice

from copy import copy
import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'AddTwoFloats_Request'."""

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
            module = import_type_support('contact')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.AddTwoFloats_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv_add_two_floats__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv_add_two_floats__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv_add_two_floats__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv_add_two_floats__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv_add_two_floats__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AddTwoFloats_Request(metaclass=Metaclass):
    """Message class 'AddTwoFloats_Request'."""

    __slots__ = [
        '_a',
        '_b',
    ]

    _fields_and_field_types = {
        'a': 'float64',
        'b': 'float64',
    }

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.a = kwargs.get('a', float())
        self.b = kwargs.get('b', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = [s[1:] + '=' + repr(getattr(self, s, None)) for s in self.__slots__]
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.a != other.a:
            return False
        if self.b != other.b:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        return copy(cls._fields_and_field_types)

    @property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a' field must of type 'float'"
        self._a = value

    @property
    def b(self):
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b' field must of type 'float'"
        self._b = value
