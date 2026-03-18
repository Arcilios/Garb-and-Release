# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sorting_interfaces:msg/SortTask.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SortTask(type):
    """Metaclass of message 'SortTask'."""

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
            module = import_type_support('sorting_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sorting_interfaces.msg.SortTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sort_task
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sort_task
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sort_task
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sort_task
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sort_task

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SortTask(metaclass=Metaclass_SortTask):
    """Message class 'SortTask'."""

    __slots__ = [
        '_object_id',
        '_class_name',
        '_target_bin',
        '_pick_pose',
        '_pregrasp_pose',
        '_lift_pose',
        '_place_pose',
        '_retreat_pose',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'object_id': 'string',
        'class_name': 'string',
        'target_bin': 'string',
        'pick_pose': 'geometry_msgs/PoseStamped',
        'pregrasp_pose': 'geometry_msgs/PoseStamped',
        'lift_pose': 'geometry_msgs/PoseStamped',
        'place_pose': 'geometry_msgs/PoseStamped',
        'retreat_pose': 'geometry_msgs/PoseStamped',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
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
        self.object_id = kwargs.get('object_id', str())
        self.class_name = kwargs.get('class_name', str())
        self.target_bin = kwargs.get('target_bin', str())
        from geometry_msgs.msg import PoseStamped
        self.pick_pose = kwargs.get('pick_pose', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.pregrasp_pose = kwargs.get('pregrasp_pose', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.lift_pose = kwargs.get('lift_pose', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.place_pose = kwargs.get('place_pose', PoseStamped())
        from geometry_msgs.msg import PoseStamped
        self.retreat_pose = kwargs.get('retreat_pose', PoseStamped())

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
        if self.object_id != other.object_id:
            return False
        if self.class_name != other.class_name:
            return False
        if self.target_bin != other.target_bin:
            return False
        if self.pick_pose != other.pick_pose:
            return False
        if self.pregrasp_pose != other.pregrasp_pose:
            return False
        if self.lift_pose != other.lift_pose:
            return False
        if self.place_pose != other.place_pose:
            return False
        if self.retreat_pose != other.retreat_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'object_id' field must be of type 'str'"
        self._object_id = value

    @builtins.property
    def class_name(self):
        """Message field 'class_name'."""
        return self._class_name

    @class_name.setter
    def class_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'class_name' field must be of type 'str'"
        self._class_name = value

    @builtins.property
    def target_bin(self):
        """Message field 'target_bin'."""
        return self._target_bin

    @target_bin.setter
    def target_bin(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'target_bin' field must be of type 'str'"
        self._target_bin = value

    @builtins.property
    def pick_pose(self):
        """Message field 'pick_pose'."""
        return self._pick_pose

    @pick_pose.setter
    def pick_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'pick_pose' field must be a sub message of type 'PoseStamped'"
        self._pick_pose = value

    @builtins.property
    def pregrasp_pose(self):
        """Message field 'pregrasp_pose'."""
        return self._pregrasp_pose

    @pregrasp_pose.setter
    def pregrasp_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'pregrasp_pose' field must be a sub message of type 'PoseStamped'"
        self._pregrasp_pose = value

    @builtins.property
    def lift_pose(self):
        """Message field 'lift_pose'."""
        return self._lift_pose

    @lift_pose.setter
    def lift_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'lift_pose' field must be a sub message of type 'PoseStamped'"
        self._lift_pose = value

    @builtins.property
    def place_pose(self):
        """Message field 'place_pose'."""
        return self._place_pose

    @place_pose.setter
    def place_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'place_pose' field must be a sub message of type 'PoseStamped'"
        self._place_pose = value

    @builtins.property
    def retreat_pose(self):
        """Message field 'retreat_pose'."""
        return self._retreat_pose

    @retreat_pose.setter
    def retreat_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'retreat_pose' field must be a sub message of type 'PoseStamped'"
        self._retreat_pose = value
