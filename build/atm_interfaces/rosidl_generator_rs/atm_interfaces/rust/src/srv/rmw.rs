#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__ArmSystem_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__ArmSystem_Request__init(msg: *mut ArmSystem_Request) -> bool;
    fn atm_interfaces__srv__ArmSystem_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArmSystem_Request>, size: usize) -> bool;
    fn atm_interfaces__srv__ArmSystem_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArmSystem_Request>);
    fn atm_interfaces__srv__ArmSystem_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArmSystem_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ArmSystem_Request>) -> bool;
}

// Corresponds to atm_interfaces__srv__ArmSystem_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmSystem_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub arm: bool,

}



impl Default for ArmSystem_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__ArmSystem_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__ArmSystem_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArmSystem_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__ArmSystem_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__ArmSystem_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__ArmSystem_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArmSystem_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArmSystem_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/ArmSystem_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__ArmSystem_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__ArmSystem_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__ArmSystem_Response__init(msg: *mut ArmSystem_Response) -> bool;
    fn atm_interfaces__srv__ArmSystem_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArmSystem_Response>, size: usize) -> bool;
    fn atm_interfaces__srv__ArmSystem_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArmSystem_Response>);
    fn atm_interfaces__srv__ArmSystem_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArmSystem_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ArmSystem_Response>) -> bool;
}

// Corresponds to atm_interfaces__srv__ArmSystem_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmSystem_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ArmSystem_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__ArmSystem_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__ArmSystem_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArmSystem_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__ArmSystem_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__ArmSystem_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__ArmSystem_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArmSystem_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArmSystem_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/ArmSystem_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__ArmSystem_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__EmergencyStop_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__EmergencyStop_Request__init(msg: *mut EmergencyStop_Request) -> bool;
    fn atm_interfaces__srv__EmergencyStop_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EmergencyStop_Request>, size: usize) -> bool;
    fn atm_interfaces__srv__EmergencyStop_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EmergencyStop_Request>);
    fn atm_interfaces__srv__EmergencyStop_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EmergencyStop_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<EmergencyStop_Request>) -> bool;
}

// Corresponds to atm_interfaces__srv__EmergencyStop_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EmergencyStop_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub source: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: rosidl_runtime_rs::String,

}



impl Default for EmergencyStop_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__EmergencyStop_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__EmergencyStop_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EmergencyStop_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__EmergencyStop_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__EmergencyStop_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__EmergencyStop_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EmergencyStop_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EmergencyStop_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/EmergencyStop_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__EmergencyStop_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__EmergencyStop_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__EmergencyStop_Response__init(msg: *mut EmergencyStop_Response) -> bool;
    fn atm_interfaces__srv__EmergencyStop_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EmergencyStop_Response>, size: usize) -> bool;
    fn atm_interfaces__srv__EmergencyStop_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EmergencyStop_Response>);
    fn atm_interfaces__srv__EmergencyStop_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EmergencyStop_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<EmergencyStop_Response>) -> bool;
}

// Corresponds to atm_interfaces__srv__EmergencyStop_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EmergencyStop_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for EmergencyStop_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__EmergencyStop_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__EmergencyStop_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EmergencyStop_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__EmergencyStop_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__EmergencyStop_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__EmergencyStop_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EmergencyStop_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EmergencyStop_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/EmergencyStop_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__EmergencyStop_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__ResetFault_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__ResetFault_Request__init(msg: *mut ResetFault_Request) -> bool;
    fn atm_interfaces__srv__ResetFault_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetFault_Request>, size: usize) -> bool;
    fn atm_interfaces__srv__ResetFault_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetFault_Request>);
    fn atm_interfaces__srv__ResetFault_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetFault_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetFault_Request>) -> bool;
}

// Corresponds to atm_interfaces__srv__ResetFault_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetFault_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub source: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: rosidl_runtime_rs::String,

}



impl Default for ResetFault_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__ResetFault_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__ResetFault_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetFault_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__ResetFault_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__ResetFault_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__ResetFault_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetFault_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetFault_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/ResetFault_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__ResetFault_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__ResetFault_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__ResetFault_Response__init(msg: *mut ResetFault_Response) -> bool;
    fn atm_interfaces__srv__ResetFault_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetFault_Response>, size: usize) -> bool;
    fn atm_interfaces__srv__ResetFault_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetFault_Response>);
    fn atm_interfaces__srv__ResetFault_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetFault_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetFault_Response>) -> bool;
}

// Corresponds to atm_interfaces__srv__ResetFault_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetFault_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ResetFault_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__ResetFault_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__ResetFault_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetFault_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__ResetFault_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__ResetFault_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__ResetFault_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetFault_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetFault_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/ResetFault_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__ResetFault_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__StartPump_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__StartPump_Request__init(msg: *mut StartPump_Request) -> bool;
    fn atm_interfaces__srv__StartPump_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartPump_Request>, size: usize) -> bool;
    fn atm_interfaces__srv__StartPump_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartPump_Request>);
    fn atm_interfaces__srv__StartPump_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartPump_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StartPump_Request>) -> bool;
}

// Corresponds to atm_interfaces__srv__StartPump_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartPump_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub enable: bool,

}



impl Default for StartPump_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__StartPump_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__StartPump_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartPump_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__StartPump_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__StartPump_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__StartPump_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartPump_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartPump_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/StartPump_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__StartPump_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__StartPump_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__StartPump_Response__init(msg: *mut StartPump_Response) -> bool;
    fn atm_interfaces__srv__StartPump_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StartPump_Response>, size: usize) -> bool;
    fn atm_interfaces__srv__StartPump_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StartPump_Response>);
    fn atm_interfaces__srv__StartPump_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StartPump_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StartPump_Response>) -> bool;
}

// Corresponds to atm_interfaces__srv__StartPump_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartPump_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for StartPump_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__StartPump_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__StartPump_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StartPump_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__StartPump_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__StartPump_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__StartPump_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StartPump_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StartPump_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/StartPump_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__StartPump_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__StopPump_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__StopPump_Request__init(msg: *mut StopPump_Request) -> bool;
    fn atm_interfaces__srv__StopPump_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StopPump_Request>, size: usize) -> bool;
    fn atm_interfaces__srv__StopPump_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StopPump_Request>);
    fn atm_interfaces__srv__StopPump_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StopPump_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StopPump_Request>) -> bool;
}

// Corresponds to atm_interfaces__srv__StopPump_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopPump_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stop: bool,

}



impl Default for StopPump_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__StopPump_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__StopPump_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StopPump_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__StopPump_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__StopPump_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__StopPump_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StopPump_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StopPump_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/StopPump_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__StopPump_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__StopPump_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__StopPump_Response__init(msg: *mut StopPump_Response) -> bool;
    fn atm_interfaces__srv__StopPump_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StopPump_Response>, size: usize) -> bool;
    fn atm_interfaces__srv__StopPump_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StopPump_Response>);
    fn atm_interfaces__srv__StopPump_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StopPump_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StopPump_Response>) -> bool;
}

// Corresponds to atm_interfaces__srv__StopPump_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopPump_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for StopPump_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__StopPump_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__StopPump_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StopPump_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__StopPump_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__StopPump_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__StopPump_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StopPump_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StopPump_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/StopPump_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__StopPump_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__SetAdmissionReelMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__SetAdmissionReelMode_Request__init(msg: *mut SetAdmissionReelMode_Request) -> bool;
    fn atm_interfaces__srv__SetAdmissionReelMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetAdmissionReelMode_Request>, size: usize) -> bool;
    fn atm_interfaces__srv__SetAdmissionReelMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetAdmissionReelMode_Request>);
    fn atm_interfaces__srv__SetAdmissionReelMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetAdmissionReelMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetAdmissionReelMode_Request>) -> bool;
}

// Corresponds to atm_interfaces__srv__SetAdmissionReelMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetAdmissionReelMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed: f32,

}



impl Default for SetAdmissionReelMode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__SetAdmissionReelMode_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__SetAdmissionReelMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetAdmissionReelMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__SetAdmissionReelMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__SetAdmissionReelMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__SetAdmissionReelMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetAdmissionReelMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetAdmissionReelMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/SetAdmissionReelMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__SetAdmissionReelMode_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__SetAdmissionReelMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__SetAdmissionReelMode_Response__init(msg: *mut SetAdmissionReelMode_Response) -> bool;
    fn atm_interfaces__srv__SetAdmissionReelMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetAdmissionReelMode_Response>, size: usize) -> bool;
    fn atm_interfaces__srv__SetAdmissionReelMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetAdmissionReelMode_Response>);
    fn atm_interfaces__srv__SetAdmissionReelMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetAdmissionReelMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetAdmissionReelMode_Response>) -> bool;
}

// Corresponds to atm_interfaces__srv__SetAdmissionReelMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetAdmissionReelMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetAdmissionReelMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__SetAdmissionReelMode_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__SetAdmissionReelMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetAdmissionReelMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__SetAdmissionReelMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__SetAdmissionReelMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__SetAdmissionReelMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetAdmissionReelMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetAdmissionReelMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/SetAdmissionReelMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__SetAdmissionReelMode_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__SetZoneSelection_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__SetZoneSelection_Request__init(msg: *mut SetZoneSelection_Request) -> bool;
    fn atm_interfaces__srv__SetZoneSelection_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetZoneSelection_Request>, size: usize) -> bool;
    fn atm_interfaces__srv__SetZoneSelection_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetZoneSelection_Request>);
    fn atm_interfaces__srv__SetZoneSelection_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetZoneSelection_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetZoneSelection_Request>) -> bool;
}

// Corresponds to atm_interfaces__srv__SetZoneSelection_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetZoneSelection_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_id: rosidl_runtime_rs::String,

}



impl Default for SetZoneSelection_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__SetZoneSelection_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__SetZoneSelection_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetZoneSelection_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__SetZoneSelection_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__SetZoneSelection_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__SetZoneSelection_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetZoneSelection_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetZoneSelection_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/SetZoneSelection_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__SetZoneSelection_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__SetZoneSelection_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__SetZoneSelection_Response__init(msg: *mut SetZoneSelection_Response) -> bool;
    fn atm_interfaces__srv__SetZoneSelection_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetZoneSelection_Response>, size: usize) -> bool;
    fn atm_interfaces__srv__SetZoneSelection_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetZoneSelection_Response>);
    fn atm_interfaces__srv__SetZoneSelection_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetZoneSelection_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetZoneSelection_Response>) -> bool;
}

// Corresponds to atm_interfaces__srv__SetZoneSelection_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetZoneSelection_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetZoneSelection_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__SetZoneSelection_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__SetZoneSelection_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetZoneSelection_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__SetZoneSelection_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__SetZoneSelection_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__SetZoneSelection_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetZoneSelection_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetZoneSelection_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/SetZoneSelection_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__SetZoneSelection_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__GetSystemState_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__GetSystemState_Request__init(msg: *mut GetSystemState_Request) -> bool;
    fn atm_interfaces__srv__GetSystemState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSystemState_Request>, size: usize) -> bool;
    fn atm_interfaces__srv__GetSystemState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSystemState_Request>);
    fn atm_interfaces__srv__GetSystemState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSystemState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSystemState_Request>) -> bool;
}

// Corresponds to atm_interfaces__srv__GetSystemState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSystemState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub verbose: bool,

}



impl Default for GetSystemState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__GetSystemState_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__GetSystemState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSystemState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__GetSystemState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__GetSystemState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__GetSystemState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSystemState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSystemState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/GetSystemState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__GetSystemState_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__GetSystemState_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__srv__GetSystemState_Response__init(msg: *mut GetSystemState_Response) -> bool;
    fn atm_interfaces__srv__GetSystemState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetSystemState_Response>, size: usize) -> bool;
    fn atm_interfaces__srv__GetSystemState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetSystemState_Response>);
    fn atm_interfaces__srv__GetSystemState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetSystemState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetSystemState_Response>) -> bool;
}

// Corresponds to atm_interfaces__srv__GetSystemState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSystemState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub master_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slave_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detail: rosidl_runtime_rs::String,

}



impl Default for GetSystemState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__srv__GetSystemState_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__srv__GetSystemState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetSystemState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__GetSystemState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__GetSystemState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__srv__GetSystemState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetSystemState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetSystemState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/srv/GetSystemState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__srv__GetSystemState_Response() }
  }
}






#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__ArmSystem() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__srv__ArmSystem
#[allow(missing_docs, non_camel_case_types)]
pub struct ArmSystem;

impl rosidl_runtime_rs::Service for ArmSystem {
    type Request = ArmSystem_Request;
    type Response = ArmSystem_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__ArmSystem() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__EmergencyStop() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__srv__EmergencyStop
#[allow(missing_docs, non_camel_case_types)]
pub struct EmergencyStop;

impl rosidl_runtime_rs::Service for EmergencyStop {
    type Request = EmergencyStop_Request;
    type Response = EmergencyStop_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__EmergencyStop() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__ResetFault() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__srv__ResetFault
#[allow(missing_docs, non_camel_case_types)]
pub struct ResetFault;

impl rosidl_runtime_rs::Service for ResetFault {
    type Request = ResetFault_Request;
    type Response = ResetFault_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__ResetFault() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__StartPump() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__srv__StartPump
#[allow(missing_docs, non_camel_case_types)]
pub struct StartPump;

impl rosidl_runtime_rs::Service for StartPump {
    type Request = StartPump_Request;
    type Response = StartPump_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__StartPump() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__StopPump() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__srv__StopPump
#[allow(missing_docs, non_camel_case_types)]
pub struct StopPump;

impl rosidl_runtime_rs::Service for StopPump {
    type Request = StopPump_Request;
    type Response = StopPump_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__StopPump() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__SetAdmissionReelMode() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__srv__SetAdmissionReelMode
#[allow(missing_docs, non_camel_case_types)]
pub struct SetAdmissionReelMode;

impl rosidl_runtime_rs::Service for SetAdmissionReelMode {
    type Request = SetAdmissionReelMode_Request;
    type Response = SetAdmissionReelMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__SetAdmissionReelMode() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__SetZoneSelection() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__srv__SetZoneSelection
#[allow(missing_docs, non_camel_case_types)]
pub struct SetZoneSelection;

impl rosidl_runtime_rs::Service for SetZoneSelection {
    type Request = SetZoneSelection_Request;
    type Response = SetZoneSelection_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__SetZoneSelection() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__GetSystemState() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__srv__GetSystemState
#[allow(missing_docs, non_camel_case_types)]
pub struct GetSystemState;

impl rosidl_runtime_rs::Service for GetSystemState {
    type Request = GetSystemState_Request;
    type Response = GetSystemState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__srv__GetSystemState() }
    }
}


