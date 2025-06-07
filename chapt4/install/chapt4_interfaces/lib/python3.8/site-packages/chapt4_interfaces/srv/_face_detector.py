# generated from rosidl_generator_py/resource/_idl.py.em
# with input from chapt4_interfaces:srv/FaceDetector.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FaceDetector_Request(type):
    """Metaclass of message 'FaceDetector_Request'."""

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
            module = import_type_support('chapt4_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'chapt4_interfaces.srv.FaceDetector_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__face_detector__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__face_detector__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__face_detector__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__face_detector__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__face_detector__request

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FaceDetector_Request(metaclass=Metaclass_FaceDetector_Request):
    """Message class 'FaceDetector_Request'."""

    __slots__ = [
        '_image',
    ]

    _fields_and_field_types = {
        'image': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.image != other.image:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image' field must be a sub message of type 'Image'"
        self._image = value


# Import statements for member types

# Member 'top'
# Member 'right'
# Member 'bottom'
# Member 'left'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_FaceDetector_Response(type):
    """Metaclass of message 'FaceDetector_Response'."""

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
            module = import_type_support('chapt4_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'chapt4_interfaces.srv.FaceDetector_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__face_detector__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__face_detector__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__face_detector__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__face_detector__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__face_detector__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FaceDetector_Response(metaclass=Metaclass_FaceDetector_Response):
    """Message class 'FaceDetector_Response'."""

    __slots__ = [
        '_number',
        '_use_time',
        '_top',
        '_right',
        '_bottom',
        '_left',
    ]

    _fields_and_field_types = {
        'number': 'int16',
        'use_time': 'float',
        'top': 'sequence<int32>',
        'right': 'sequence<int32>',
        'bottom': 'sequence<int32>',
        'left': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.number = kwargs.get('number', int())
        self.use_time = kwargs.get('use_time', float())
        self.top = array.array('i', kwargs.get('top', []))
        self.right = array.array('i', kwargs.get('right', []))
        self.bottom = array.array('i', kwargs.get('bottom', []))
        self.left = array.array('i', kwargs.get('left', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.number != other.number:
            return False
        if self.use_time != other.use_time:
            return False
        if self.top != other.top:
            return False
        if self.right != other.right:
            return False
        if self.bottom != other.bottom:
            return False
        if self.left != other.left:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def number(self):
        """Message field 'number'."""
        return self._number

    @number.setter
    def number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'number' field must be an integer in [-32768, 32767]"
        self._number = value

    @property
    def use_time(self):
        """Message field 'use_time'."""
        return self._use_time

    @use_time.setter
    def use_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'use_time' field must be of type 'float'"
        self._use_time = value

    @property
    def top(self):
        """Message field 'top'."""
        return self._top

    @top.setter
    def top(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'top' array.array() must have the type code of 'i'"
            self._top = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'top' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._top = array.array('i', value)

    @property
    def right(self):
        """Message field 'right'."""
        return self._right

    @right.setter
    def right(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'right' array.array() must have the type code of 'i'"
            self._right = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'right' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._right = array.array('i', value)

    @property
    def bottom(self):
        """Message field 'bottom'."""
        return self._bottom

    @bottom.setter
    def bottom(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'bottom' array.array() must have the type code of 'i'"
            self._bottom = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'bottom' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._bottom = array.array('i', value)

    @property
    def left(self):
        """Message field 'left'."""
        return self._left

    @left.setter
    def left(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'left' array.array() must have the type code of 'i'"
            self._left = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'left' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._left = array.array('i', value)


class Metaclass_FaceDetector(type):
    """Metaclass of service 'FaceDetector'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('chapt4_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'chapt4_interfaces.srv.FaceDetector')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__face_detector

            from chapt4_interfaces.srv import _face_detector
            if _face_detector.Metaclass_FaceDetector_Request._TYPE_SUPPORT is None:
                _face_detector.Metaclass_FaceDetector_Request.__import_type_support__()
            if _face_detector.Metaclass_FaceDetector_Response._TYPE_SUPPORT is None:
                _face_detector.Metaclass_FaceDetector_Response.__import_type_support__()


class FaceDetector(metaclass=Metaclass_FaceDetector):
    from chapt4_interfaces.srv._face_detector import FaceDetector_Request as Request
    from chapt4_interfaces.srv._face_detector import FaceDetector_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
