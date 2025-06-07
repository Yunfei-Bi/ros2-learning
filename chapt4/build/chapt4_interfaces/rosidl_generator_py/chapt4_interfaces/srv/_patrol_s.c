// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from chapt4_interfaces:srv/Patrol.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "chapt4_interfaces/srv/detail/patrol__struct.h"
#include "chapt4_interfaces/srv/detail/patrol__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool chapt4_interfaces__srv__patrol__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("chapt4_interfaces.srv._patrol.Patrol_Request", full_classname_dest, 44) == 0);
  }
  chapt4_interfaces__srv__Patrol_Request * ros_message = _ros_message;
  {  // target_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * chapt4_interfaces__srv__patrol__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Patrol_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("chapt4_interfaces.srv._patrol");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Patrol_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  chapt4_interfaces__srv__Patrol_Request * ros_message = (chapt4_interfaces__srv__Patrol_Request *)raw_ros_message;
  {  // target_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__struct.h"
// already included above
// #include "chapt4_interfaces/srv/detail/patrol__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool chapt4_interfaces__srv__patrol__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("chapt4_interfaces.srv._patrol.Patrol_Response", full_classname_dest, 45) == 0);
  }
  chapt4_interfaces__srv__Patrol_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->result = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * chapt4_interfaces__srv__patrol__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Patrol_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("chapt4_interfaces.srv._patrol");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Patrol_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  chapt4_interfaces__srv__Patrol_Response * ros_message = (chapt4_interfaces__srv__Patrol_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->result);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
