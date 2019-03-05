# generated from rosidl_generator_py/resource/_srv.py.em
# generated code does not contain a copyright notice

import logging
import traceback


class Metaclass(type):
    """Metaclass of message 'AddTwoFloats'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('contact')
        except ImportError:
            logger = logging.getLogger('rosidl_generator_py.AddTwoFloats')
            logger.debug(
                'Failed to import needed modules for type support:\n' + traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv_add_two_floats
            from contact.srv import _add_two_floats__request
            if _add_two_floats__request.Metaclass._TYPE_SUPPORT is None:
                _add_two_floats__request.Metaclass.__import_type_support__()
            from contact.srv import _add_two_floats__response
            if _add_two_floats__response.Metaclass._TYPE_SUPPORT is None:
                _add_two_floats__response.Metaclass.__import_type_support__()


class AddTwoFloats(metaclass=Metaclass):
    from contact.srv._add_two_floats__request import AddTwoFloats_Request as Request
    from contact.srv._add_two_floats__response import AddTwoFloats_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instanciated')
