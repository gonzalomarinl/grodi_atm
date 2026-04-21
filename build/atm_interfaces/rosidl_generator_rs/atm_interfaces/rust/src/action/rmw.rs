
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_Goal() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ExecuteMission_Goal__init(msg: *mut ExecuteMission_Goal) -> bool;
    fn atm_interfaces__action__ExecuteMission_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Goal>, size: usize) -> bool;
    fn atm_interfaces__action__ExecuteMission_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Goal>);
    fn atm_interfaces__action__ExecuteMission_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Goal>) -> bool;
}

// Corresponds to atm_interfaces__action__ExecuteMission_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_ids: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_line_ids: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stop_indices: rosidl_runtime_rs::Sequence<u32>,

}



impl Default for ExecuteMission_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ExecuteMission_Goal__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ExecuteMission_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ExecuteMission_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_Goal() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_Result() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ExecuteMission_Result__init(msg: *mut ExecuteMission_Result) -> bool;
    fn atm_interfaces__action__ExecuteMission_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Result>, size: usize) -> bool;
    fn atm_interfaces__action__ExecuteMission_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Result>);
    fn atm_interfaces__action__ExecuteMission_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Result>) -> bool;
}

// Corresponds to atm_interfaces__action__ExecuteMission_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub final_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ExecuteMission_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ExecuteMission_Result__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ExecuteMission_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_Result where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ExecuteMission_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_Result() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ExecuteMission_Feedback__init(msg: *mut ExecuteMission_Feedback) -> bool;
    fn atm_interfaces__action__ExecuteMission_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Feedback>, size: usize) -> bool;
    fn atm_interfaces__action__ExecuteMission_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Feedback>);
    fn atm_interfaces__action__ExecuteMission_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_Feedback>) -> bool;
}

// Corresponds to atm_interfaces__action__ExecuteMission_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_phase: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_stop_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_line_id: rosidl_runtime_rs::String,

}



impl Default for ExecuteMission_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ExecuteMission_Feedback__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ExecuteMission_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ExecuteMission_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_Feedback() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ExecuteMission_FeedbackMessage__init(msg: *mut ExecuteMission_FeedbackMessage) -> bool;
    fn atm_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_FeedbackMessage>, size: usize) -> bool;
    fn atm_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_FeedbackMessage>);
    fn atm_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_FeedbackMessage>) -> bool;
}

// Corresponds to atm_interfaces__action__ExecuteMission_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ExecuteMission_Feedback,

}



impl Default for ExecuteMission_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ExecuteMission_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ExecuteMission_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ExecuteMission_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_FeedbackMessage() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_Goal() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__NavigateToStop_Goal__init(msg: *mut NavigateToStop_Goal) -> bool;
    fn atm_interfaces__action__NavigateToStop_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_Goal>, size: usize) -> bool;
    fn atm_interfaces__action__NavigateToStop_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_Goal>);
    fn atm_interfaces__action__NavigateToStop_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToStop_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_Goal>) -> bool;
}

// Corresponds to atm_interfaces__action__NavigateToStop_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stop_index: u32,

}



impl Default for NavigateToStop_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__NavigateToStop_Goal__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__NavigateToStop_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToStop_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToStop_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/NavigateToStop_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_Goal() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_Result() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__NavigateToStop_Result__init(msg: *mut NavigateToStop_Result) -> bool;
    fn atm_interfaces__action__NavigateToStop_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_Result>, size: usize) -> bool;
    fn atm_interfaces__action__NavigateToStop_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_Result>);
    fn atm_interfaces__action__NavigateToStop_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToStop_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_Result>) -> bool;
}

// Corresponds to atm_interfaces__action__NavigateToStop_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stop_found: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for NavigateToStop_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__NavigateToStop_Result__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__NavigateToStop_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToStop_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToStop_Result where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/NavigateToStop_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_Result() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__NavigateToStop_Feedback__init(msg: *mut NavigateToStop_Feedback) -> bool;
    fn atm_interfaces__action__NavigateToStop_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_Feedback>, size: usize) -> bool;
    fn atm_interfaces__action__NavigateToStop_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_Feedback>);
    fn atm_interfaces__action__NavigateToStop_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToStop_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_Feedback>) -> bool;
}

// Corresponds to atm_interfaces__action__NavigateToStop_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub navigation_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_line_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vision_confidence: f32,

}



impl Default for NavigateToStop_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__NavigateToStop_Feedback__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__NavigateToStop_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToStop_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToStop_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/NavigateToStop_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_Feedback() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__NavigateToStop_FeedbackMessage__init(msg: *mut NavigateToStop_FeedbackMessage) -> bool;
    fn atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_FeedbackMessage>, size: usize) -> bool;
    fn atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_FeedbackMessage>);
    fn atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToStop_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_FeedbackMessage>) -> bool;
}

// Corresponds to atm_interfaces__action__NavigateToStop_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::NavigateToStop_Feedback,

}



impl Default for NavigateToStop_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__NavigateToStop_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__NavigateToStop_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToStop_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToStop_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/NavigateToStop_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_FeedbackMessage() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_Goal() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__SprayAtStop_Goal__init(msg: *mut SprayAtStop_Goal) -> bool;
    fn atm_interfaces__action__SprayAtStop_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_Goal>, size: usize) -> bool;
    fn atm_interfaces__action__SprayAtStop_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_Goal>);
    fn atm_interfaces__action__SprayAtStop_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SprayAtStop_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_Goal>) -> bool;
}

// Corresponds to atm_interfaces__action__SprayAtStop_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stop_index: u32,

}



impl Default for SprayAtStop_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__SprayAtStop_Goal__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__SprayAtStop_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SprayAtStop_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SprayAtStop_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/SprayAtStop_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_Goal() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_Result() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__SprayAtStop_Result__init(msg: *mut SprayAtStop_Result) -> bool;
    fn atm_interfaces__action__SprayAtStop_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_Result>, size: usize) -> bool;
    fn atm_interfaces__action__SprayAtStop_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_Result>);
    fn atm_interfaces__action__SprayAtStop_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SprayAtStop_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_Result>) -> bool;
}

// Corresponds to atm_interfaces__action__SprayAtStop_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SprayAtStop_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__SprayAtStop_Result__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__SprayAtStop_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SprayAtStop_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SprayAtStop_Result where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/SprayAtStop_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_Result() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__SprayAtStop_Feedback__init(msg: *mut SprayAtStop_Feedback) -> bool;
    fn atm_interfaces__action__SprayAtStop_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_Feedback>, size: usize) -> bool;
    fn atm_interfaces__action__SprayAtStop_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_Feedback>);
    fn atm_interfaces__action__SprayAtStop_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SprayAtStop_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_Feedback>) -> bool;
}

// Corresponds to atm_interfaces__action__SprayAtStop_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub phase: rosidl_runtime_rs::String,

}



impl Default for SprayAtStop_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__SprayAtStop_Feedback__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__SprayAtStop_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SprayAtStop_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SprayAtStop_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/SprayAtStop_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_Feedback() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__SprayAtStop_FeedbackMessage__init(msg: *mut SprayAtStop_FeedbackMessage) -> bool;
    fn atm_interfaces__action__SprayAtStop_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_FeedbackMessage>, size: usize) -> bool;
    fn atm_interfaces__action__SprayAtStop_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_FeedbackMessage>);
    fn atm_interfaces__action__SprayAtStop_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SprayAtStop_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_FeedbackMessage>) -> bool;
}

// Corresponds to atm_interfaces__action__SprayAtStop_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::SprayAtStop_Feedback,

}



impl Default for SprayAtStop_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__SprayAtStop_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__SprayAtStop_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SprayAtStop_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SprayAtStop_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/SprayAtStop_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_FeedbackMessage() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_Goal() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ReturnToBase_Goal__init(msg: *mut ReturnToBase_Goal) -> bool;
    fn atm_interfaces__action__ReturnToBase_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_Goal>, size: usize) -> bool;
    fn atm_interfaces__action__ReturnToBase_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_Goal>);
    fn atm_interfaces__action__ReturnToBase_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReturnToBase_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_Goal>) -> bool;
}

// Corresponds to atm_interfaces__action__ReturnToBase_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: rosidl_runtime_rs::String,

}



impl Default for ReturnToBase_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ReturnToBase_Goal__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ReturnToBase_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReturnToBase_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReturnToBase_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ReturnToBase_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_Goal() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_Result() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ReturnToBase_Result__init(msg: *mut ReturnToBase_Result) -> bool;
    fn atm_interfaces__action__ReturnToBase_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_Result>, size: usize) -> bool;
    fn atm_interfaces__action__ReturnToBase_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_Result>);
    fn atm_interfaces__action__ReturnToBase_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReturnToBase_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_Result>) -> bool;
}

// Corresponds to atm_interfaces__action__ReturnToBase_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ReturnToBase_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ReturnToBase_Result__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ReturnToBase_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReturnToBase_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReturnToBase_Result where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ReturnToBase_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_Result() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ReturnToBase_Feedback__init(msg: *mut ReturnToBase_Feedback) -> bool;
    fn atm_interfaces__action__ReturnToBase_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_Feedback>, size: usize) -> bool;
    fn atm_interfaces__action__ReturnToBase_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_Feedback>);
    fn atm_interfaces__action__ReturnToBase_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReturnToBase_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_Feedback>) -> bool;
}

// Corresponds to atm_interfaces__action__ReturnToBase_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub phase: rosidl_runtime_rs::String,

}



impl Default for ReturnToBase_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ReturnToBase_Feedback__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ReturnToBase_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReturnToBase_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReturnToBase_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ReturnToBase_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_Feedback() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ReturnToBase_FeedbackMessage__init(msg: *mut ReturnToBase_FeedbackMessage) -> bool;
    fn atm_interfaces__action__ReturnToBase_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_FeedbackMessage>, size: usize) -> bool;
    fn atm_interfaces__action__ReturnToBase_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_FeedbackMessage>);
    fn atm_interfaces__action__ReturnToBase_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReturnToBase_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_FeedbackMessage>) -> bool;
}

// Corresponds to atm_interfaces__action__ReturnToBase_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ReturnToBase_Feedback,

}



impl Default for ReturnToBase_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ReturnToBase_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ReturnToBase_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReturnToBase_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReturnToBase_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ReturnToBase_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_FeedbackMessage() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_Goal() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__RunPurge_Goal__init(msg: *mut RunPurge_Goal) -> bool;
    fn atm_interfaces__action__RunPurge_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_Goal>, size: usize) -> bool;
    fn atm_interfaces__action__RunPurge_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_Goal>);
    fn atm_interfaces__action__RunPurge_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunPurge_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<RunPurge_Goal>) -> bool;
}

// Corresponds to atm_interfaces__action__RunPurge_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration_sec: f32,

}



impl Default for RunPurge_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__RunPurge_Goal__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__RunPurge_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunPurge_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunPurge_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunPurge_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/RunPurge_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_Goal() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_Result() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__RunPurge_Result__init(msg: *mut RunPurge_Result) -> bool;
    fn atm_interfaces__action__RunPurge_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_Result>, size: usize) -> bool;
    fn atm_interfaces__action__RunPurge_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_Result>);
    fn atm_interfaces__action__RunPurge_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunPurge_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<RunPurge_Result>) -> bool;
}

// Corresponds to atm_interfaces__action__RunPurge_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for RunPurge_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__RunPurge_Result__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__RunPurge_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunPurge_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunPurge_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunPurge_Result where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/RunPurge_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_Result() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__RunPurge_Feedback__init(msg: *mut RunPurge_Feedback) -> bool;
    fn atm_interfaces__action__RunPurge_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_Feedback>, size: usize) -> bool;
    fn atm_interfaces__action__RunPurge_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_Feedback>);
    fn atm_interfaces__action__RunPurge_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunPurge_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<RunPurge_Feedback>) -> bool;
}

// Corresponds to atm_interfaces__action__RunPurge_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub elapsed_sec: f32,

}



impl Default for RunPurge_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__RunPurge_Feedback__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__RunPurge_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunPurge_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunPurge_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunPurge_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/RunPurge_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_Feedback() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__RunPurge_FeedbackMessage__init(msg: *mut RunPurge_FeedbackMessage) -> bool;
    fn atm_interfaces__action__RunPurge_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_FeedbackMessage>, size: usize) -> bool;
    fn atm_interfaces__action__RunPurge_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_FeedbackMessage>);
    fn atm_interfaces__action__RunPurge_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunPurge_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<RunPurge_FeedbackMessage>) -> bool;
}

// Corresponds to atm_interfaces__action__RunPurge_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::RunPurge_Feedback,

}



impl Default for RunPurge_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__RunPurge_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__RunPurge_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunPurge_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunPurge_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunPurge_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/RunPurge_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_FeedbackMessage() }
  }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ExecuteMission_SendGoal_Request__init(msg: *mut ExecuteMission_SendGoal_Request) -> bool;
    fn atm_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Request>, size: usize) -> bool;
    fn atm_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Request>);
    fn atm_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Request>) -> bool;
}

// Corresponds to atm_interfaces__action__ExecuteMission_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ExecuteMission_Goal,

}



impl Default for ExecuteMission_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ExecuteMission_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ExecuteMission_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ExecuteMission_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_SendGoal_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ExecuteMission_SendGoal_Response__init(msg: *mut ExecuteMission_SendGoal_Response) -> bool;
    fn atm_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Response>, size: usize) -> bool;
    fn atm_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Response>);
    fn atm_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_SendGoal_Response>) -> bool;
}

// Corresponds to atm_interfaces__action__ExecuteMission_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ExecuteMission_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ExecuteMission_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ExecuteMission_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ExecuteMission_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_SendGoal_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ExecuteMission_GetResult_Request__init(msg: *mut ExecuteMission_GetResult_Request) -> bool;
    fn atm_interfaces__action__ExecuteMission_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Request>, size: usize) -> bool;
    fn atm_interfaces__action__ExecuteMission_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Request>);
    fn atm_interfaces__action__ExecuteMission_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Request>) -> bool;
}

// Corresponds to atm_interfaces__action__ExecuteMission_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ExecuteMission_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ExecuteMission_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ExecuteMission_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ExecuteMission_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_GetResult_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ExecuteMission_GetResult_Response__init(msg: *mut ExecuteMission_GetResult_Response) -> bool;
    fn atm_interfaces__action__ExecuteMission_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Response>, size: usize) -> bool;
    fn atm_interfaces__action__ExecuteMission_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Response>);
    fn atm_interfaces__action__ExecuteMission_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ExecuteMission_GetResult_Response>) -> bool;
}

// Corresponds to atm_interfaces__action__ExecuteMission_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ExecuteMission_Result,

}



impl Default for ExecuteMission_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ExecuteMission_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ExecuteMission_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ExecuteMission_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ExecuteMission_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ExecuteMission_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ExecuteMission_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ExecuteMission_GetResult_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__NavigateToStop_SendGoal_Request__init(msg: *mut NavigateToStop_SendGoal_Request) -> bool;
    fn atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_SendGoal_Request>, size: usize) -> bool;
    fn atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_SendGoal_Request>);
    fn atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToStop_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_SendGoal_Request>) -> bool;
}

// Corresponds to atm_interfaces__action__NavigateToStop_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::NavigateToStop_Goal,

}



impl Default for NavigateToStop_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__NavigateToStop_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__NavigateToStop_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToStop_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToStop_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/NavigateToStop_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_SendGoal_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__NavigateToStop_SendGoal_Response__init(msg: *mut NavigateToStop_SendGoal_Response) -> bool;
    fn atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_SendGoal_Response>, size: usize) -> bool;
    fn atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_SendGoal_Response>);
    fn atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToStop_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_SendGoal_Response>) -> bool;
}

// Corresponds to atm_interfaces__action__NavigateToStop_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for NavigateToStop_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__NavigateToStop_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__NavigateToStop_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToStop_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToStop_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/NavigateToStop_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_SendGoal_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__NavigateToStop_GetResult_Request__init(msg: *mut NavigateToStop_GetResult_Request) -> bool;
    fn atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_GetResult_Request>, size: usize) -> bool;
    fn atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_GetResult_Request>);
    fn atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToStop_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_GetResult_Request>) -> bool;
}

// Corresponds to atm_interfaces__action__NavigateToStop_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for NavigateToStop_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__NavigateToStop_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__NavigateToStop_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToStop_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToStop_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/NavigateToStop_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_GetResult_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__NavigateToStop_GetResult_Response__init(msg: *mut NavigateToStop_GetResult_Response) -> bool;
    fn atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_GetResult_Response>, size: usize) -> bool;
    fn atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_GetResult_Response>);
    fn atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateToStop_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateToStop_GetResult_Response>) -> bool;
}

// Corresponds to atm_interfaces__action__NavigateToStop_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::NavigateToStop_Result,

}



impl Default for NavigateToStop_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__NavigateToStop_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__NavigateToStop_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateToStop_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__NavigateToStop_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateToStop_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/NavigateToStop_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__NavigateToStop_GetResult_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__SprayAtStop_SendGoal_Request__init(msg: *mut SprayAtStop_SendGoal_Request) -> bool;
    fn atm_interfaces__action__SprayAtStop_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_SendGoal_Request>, size: usize) -> bool;
    fn atm_interfaces__action__SprayAtStop_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_SendGoal_Request>);
    fn atm_interfaces__action__SprayAtStop_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SprayAtStop_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_SendGoal_Request>) -> bool;
}

// Corresponds to atm_interfaces__action__SprayAtStop_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::SprayAtStop_Goal,

}



impl Default for SprayAtStop_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__SprayAtStop_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__SprayAtStop_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SprayAtStop_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SprayAtStop_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/SprayAtStop_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_SendGoal_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__SprayAtStop_SendGoal_Response__init(msg: *mut SprayAtStop_SendGoal_Response) -> bool;
    fn atm_interfaces__action__SprayAtStop_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_SendGoal_Response>, size: usize) -> bool;
    fn atm_interfaces__action__SprayAtStop_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_SendGoal_Response>);
    fn atm_interfaces__action__SprayAtStop_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SprayAtStop_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_SendGoal_Response>) -> bool;
}

// Corresponds to atm_interfaces__action__SprayAtStop_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for SprayAtStop_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__SprayAtStop_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__SprayAtStop_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SprayAtStop_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SprayAtStop_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/SprayAtStop_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_SendGoal_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__SprayAtStop_GetResult_Request__init(msg: *mut SprayAtStop_GetResult_Request) -> bool;
    fn atm_interfaces__action__SprayAtStop_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_GetResult_Request>, size: usize) -> bool;
    fn atm_interfaces__action__SprayAtStop_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_GetResult_Request>);
    fn atm_interfaces__action__SprayAtStop_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SprayAtStop_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_GetResult_Request>) -> bool;
}

// Corresponds to atm_interfaces__action__SprayAtStop_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for SprayAtStop_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__SprayAtStop_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__SprayAtStop_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SprayAtStop_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SprayAtStop_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/SprayAtStop_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_GetResult_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__SprayAtStop_GetResult_Response__init(msg: *mut SprayAtStop_GetResult_Response) -> bool;
    fn atm_interfaces__action__SprayAtStop_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_GetResult_Response>, size: usize) -> bool;
    fn atm_interfaces__action__SprayAtStop_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_GetResult_Response>);
    fn atm_interfaces__action__SprayAtStop_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SprayAtStop_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SprayAtStop_GetResult_Response>) -> bool;
}

// Corresponds to atm_interfaces__action__SprayAtStop_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::SprayAtStop_Result,

}



impl Default for SprayAtStop_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__SprayAtStop_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__SprayAtStop_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SprayAtStop_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__SprayAtStop_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SprayAtStop_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/SprayAtStop_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__SprayAtStop_GetResult_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ReturnToBase_SendGoal_Request__init(msg: *mut ReturnToBase_SendGoal_Request) -> bool;
    fn atm_interfaces__action__ReturnToBase_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_SendGoal_Request>, size: usize) -> bool;
    fn atm_interfaces__action__ReturnToBase_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_SendGoal_Request>);
    fn atm_interfaces__action__ReturnToBase_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReturnToBase_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_SendGoal_Request>) -> bool;
}

// Corresponds to atm_interfaces__action__ReturnToBase_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ReturnToBase_Goal,

}



impl Default for ReturnToBase_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ReturnToBase_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ReturnToBase_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReturnToBase_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReturnToBase_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ReturnToBase_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_SendGoal_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ReturnToBase_SendGoal_Response__init(msg: *mut ReturnToBase_SendGoal_Response) -> bool;
    fn atm_interfaces__action__ReturnToBase_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_SendGoal_Response>, size: usize) -> bool;
    fn atm_interfaces__action__ReturnToBase_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_SendGoal_Response>);
    fn atm_interfaces__action__ReturnToBase_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReturnToBase_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_SendGoal_Response>) -> bool;
}

// Corresponds to atm_interfaces__action__ReturnToBase_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ReturnToBase_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ReturnToBase_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ReturnToBase_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReturnToBase_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReturnToBase_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ReturnToBase_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_SendGoal_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ReturnToBase_GetResult_Request__init(msg: *mut ReturnToBase_GetResult_Request) -> bool;
    fn atm_interfaces__action__ReturnToBase_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_GetResult_Request>, size: usize) -> bool;
    fn atm_interfaces__action__ReturnToBase_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_GetResult_Request>);
    fn atm_interfaces__action__ReturnToBase_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReturnToBase_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_GetResult_Request>) -> bool;
}

// Corresponds to atm_interfaces__action__ReturnToBase_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ReturnToBase_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ReturnToBase_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ReturnToBase_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReturnToBase_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReturnToBase_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ReturnToBase_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_GetResult_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__ReturnToBase_GetResult_Response__init(msg: *mut ReturnToBase_GetResult_Response) -> bool;
    fn atm_interfaces__action__ReturnToBase_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_GetResult_Response>, size: usize) -> bool;
    fn atm_interfaces__action__ReturnToBase_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_GetResult_Response>);
    fn atm_interfaces__action__ReturnToBase_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReturnToBase_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ReturnToBase_GetResult_Response>) -> bool;
}

// Corresponds to atm_interfaces__action__ReturnToBase_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ReturnToBase_Result,

}



impl Default for ReturnToBase_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__ReturnToBase_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__ReturnToBase_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReturnToBase_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__ReturnToBase_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReturnToBase_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/ReturnToBase_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__ReturnToBase_GetResult_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__RunPurge_SendGoal_Request__init(msg: *mut RunPurge_SendGoal_Request) -> bool;
    fn atm_interfaces__action__RunPurge_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_SendGoal_Request>, size: usize) -> bool;
    fn atm_interfaces__action__RunPurge_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_SendGoal_Request>);
    fn atm_interfaces__action__RunPurge_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunPurge_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RunPurge_SendGoal_Request>) -> bool;
}

// Corresponds to atm_interfaces__action__RunPurge_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::RunPurge_Goal,

}



impl Default for RunPurge_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__RunPurge_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__RunPurge_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunPurge_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunPurge_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunPurge_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/RunPurge_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_SendGoal_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__RunPurge_SendGoal_Response__init(msg: *mut RunPurge_SendGoal_Response) -> bool;
    fn atm_interfaces__action__RunPurge_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_SendGoal_Response>, size: usize) -> bool;
    fn atm_interfaces__action__RunPurge_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_SendGoal_Response>);
    fn atm_interfaces__action__RunPurge_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunPurge_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RunPurge_SendGoal_Response>) -> bool;
}

// Corresponds to atm_interfaces__action__RunPurge_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for RunPurge_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__RunPurge_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__RunPurge_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunPurge_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunPurge_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunPurge_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/RunPurge_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_SendGoal_Response() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__RunPurge_GetResult_Request__init(msg: *mut RunPurge_GetResult_Request) -> bool;
    fn atm_interfaces__action__RunPurge_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_GetResult_Request>, size: usize) -> bool;
    fn atm_interfaces__action__RunPurge_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_GetResult_Request>);
    fn atm_interfaces__action__RunPurge_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunPurge_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RunPurge_GetResult_Request>) -> bool;
}

// Corresponds to atm_interfaces__action__RunPurge_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for RunPurge_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__RunPurge_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__RunPurge_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunPurge_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunPurge_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunPurge_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/RunPurge_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_GetResult_Request() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__action__RunPurge_GetResult_Response__init(msg: *mut RunPurge_GetResult_Response) -> bool;
    fn atm_interfaces__action__RunPurge_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_GetResult_Response>, size: usize) -> bool;
    fn atm_interfaces__action__RunPurge_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunPurge_GetResult_Response>);
    fn atm_interfaces__action__RunPurge_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunPurge_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RunPurge_GetResult_Response>) -> bool;
}

// Corresponds to atm_interfaces__action__RunPurge_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::RunPurge_Result,

}



impl Default for RunPurge_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__action__RunPurge_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__action__RunPurge_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunPurge_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__action__RunPurge_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunPurge_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunPurge_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/action/RunPurge_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__action__RunPurge_GetResult_Response() }
  }
}






#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__ExecuteMission_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__ExecuteMission_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteMission_SendGoal;

impl rosidl_runtime_rs::Service for ExecuteMission_SendGoal {
    type Request = ExecuteMission_SendGoal_Request;
    type Response = ExecuteMission_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__ExecuteMission_SendGoal() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__ExecuteMission_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__ExecuteMission_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteMission_GetResult;

impl rosidl_runtime_rs::Service for ExecuteMission_GetResult {
    type Request = ExecuteMission_GetResult_Request;
    type Response = ExecuteMission_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__ExecuteMission_GetResult() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__NavigateToStop_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__NavigateToStop_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateToStop_SendGoal;

impl rosidl_runtime_rs::Service for NavigateToStop_SendGoal {
    type Request = NavigateToStop_SendGoal_Request;
    type Response = NavigateToStop_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__NavigateToStop_SendGoal() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__NavigateToStop_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__NavigateToStop_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateToStop_GetResult;

impl rosidl_runtime_rs::Service for NavigateToStop_GetResult {
    type Request = NavigateToStop_GetResult_Request;
    type Response = NavigateToStop_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__NavigateToStop_GetResult() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__SprayAtStop_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__SprayAtStop_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct SprayAtStop_SendGoal;

impl rosidl_runtime_rs::Service for SprayAtStop_SendGoal {
    type Request = SprayAtStop_SendGoal_Request;
    type Response = SprayAtStop_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__SprayAtStop_SendGoal() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__SprayAtStop_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__SprayAtStop_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct SprayAtStop_GetResult;

impl rosidl_runtime_rs::Service for SprayAtStop_GetResult {
    type Request = SprayAtStop_GetResult_Request;
    type Response = SprayAtStop_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__SprayAtStop_GetResult() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__ReturnToBase_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__ReturnToBase_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ReturnToBase_SendGoal;

impl rosidl_runtime_rs::Service for ReturnToBase_SendGoal {
    type Request = ReturnToBase_SendGoal_Request;
    type Response = ReturnToBase_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__ReturnToBase_SendGoal() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__ReturnToBase_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__ReturnToBase_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ReturnToBase_GetResult;

impl rosidl_runtime_rs::Service for ReturnToBase_GetResult {
    type Request = ReturnToBase_GetResult_Request;
    type Response = ReturnToBase_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__ReturnToBase_GetResult() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__RunPurge_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__RunPurge_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct RunPurge_SendGoal;

impl rosidl_runtime_rs::Service for RunPurge_SendGoal {
    type Request = RunPurge_SendGoal_Request;
    type Response = RunPurge_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__RunPurge_SendGoal() }
    }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__RunPurge_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__RunPurge_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct RunPurge_GetResult;

impl rosidl_runtime_rs::Service for RunPurge_GetResult {
    type Request = RunPurge_GetResult_Request;
    type Response = RunPurge_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__atm_interfaces__action__RunPurge_GetResult() }
    }
}


