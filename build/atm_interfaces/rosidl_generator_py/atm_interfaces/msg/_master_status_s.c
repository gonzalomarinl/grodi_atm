// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from atm_interfaces:msg/MasterStatus.idl
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
#include "atm_interfaces/msg/detail/master_status__struct.h"
#include "atm_interfaces/msg/detail/master_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool atm_interfaces__msg__master_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("atm_interfaces.msg._master_status.MasterStatus", full_classname_dest, 46) == 0);
  }
  atm_interfaces__msg__MasterStatus * ros_message = _ros_message;
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // pump_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "pump_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pump_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reel_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "reel_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->reel_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // link_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->link_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // system_armed
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_armed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->system_armed = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * atm_interfaces__msg__master_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MasterStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("atm_interfaces.msg._master_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MasterStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  atm_interfaces__msg__MasterStatus * ros_message = (atm_interfaces__msg__MasterStatus *)raw_ros_message;
  {  // state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->state.data,
      strlen(ros_message->state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pump_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pump_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pump_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reel_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->reel_state.data,
      strlen(ros_message->reel_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reel_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->link_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_armed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->system_armed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_armed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
