#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__Heartbeat() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__msg__Heartbeat__init(msg: *mut Heartbeat) -> bool;
    fn atm_interfaces__msg__Heartbeat__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Heartbeat>, size: usize) -> bool;
    fn atm_interfaces__msg__Heartbeat__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Heartbeat>);
    fn atm_interfaces__msg__Heartbeat__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Heartbeat>, out_seq: *mut rosidl_runtime_rs::Sequence<Heartbeat>) -> bool;
}

// Corresponds to atm_interfaces__msg__Heartbeat
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Heartbeat {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub machine_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub seq: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,

}



impl Default for Heartbeat {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__msg__Heartbeat__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__msg__Heartbeat__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Heartbeat {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__Heartbeat__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__Heartbeat__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__Heartbeat__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Heartbeat {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Heartbeat where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/msg/Heartbeat";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__Heartbeat() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__MissionState() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__msg__MissionState__init(msg: *mut MissionState) -> bool;
    fn atm_interfaces__msg__MissionState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MissionState>, size: usize) -> bool;
    fn atm_interfaces__msg__MissionState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MissionState>);
    fn atm_interfaces__msg__MissionState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MissionState>, out_seq: *mut rosidl_runtime_rs::Sequence<MissionState>) -> bool;
}

// Corresponds to atm_interfaces__msg__MissionState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_stop_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_line_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub comms_degraded: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MissionState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__msg__MissionState__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__msg__MissionState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MissionState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__MissionState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__MissionState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__MissionState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MissionState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MissionState where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/msg/MissionState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__MissionState() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__MissionEvent() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__msg__MissionEvent__init(msg: *mut MissionEvent) -> bool;
    fn atm_interfaces__msg__MissionEvent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MissionEvent>, size: usize) -> bool;
    fn atm_interfaces__msg__MissionEvent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MissionEvent>);
    fn atm_interfaces__msg__MissionEvent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MissionEvent>, out_seq: *mut rosidl_runtime_rs::Sequence<MissionEvent>) -> bool;
}

// Corresponds to atm_interfaces__msg__MissionEvent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub event_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detail: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MissionEvent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__msg__MissionEvent__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__msg__MissionEvent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MissionEvent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__MissionEvent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__MissionEvent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__MissionEvent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MissionEvent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MissionEvent where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/msg/MissionEvent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__MissionEvent() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__FaultReport() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__msg__FaultReport__init(msg: *mut FaultReport) -> bool;
    fn atm_interfaces__msg__FaultReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FaultReport>, size: usize) -> bool;
    fn atm_interfaces__msg__FaultReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FaultReport>);
    fn atm_interfaces__msg__FaultReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FaultReport>, out_seq: *mut rosidl_runtime_rs::Sequence<FaultReport>) -> bool;
}

// Corresponds to atm_interfaces__msg__FaultReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FaultReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_code: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub severity: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub description: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requires_return_home: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for FaultReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__msg__FaultReport__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__msg__FaultReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FaultReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__FaultReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__FaultReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__FaultReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FaultReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FaultReport where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/msg/FaultReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__FaultReport() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__LineTarget() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__msg__LineTarget__init(msg: *mut LineTarget) -> bool;
    fn atm_interfaces__msg__LineTarget__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LineTarget>, size: usize) -> bool;
    fn atm_interfaces__msg__LineTarget__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LineTarget>);
    fn atm_interfaces__msg__LineTarget__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LineTarget>, out_seq: *mut rosidl_runtime_rs::Sequence<LineTarget>) -> bool;
}

// Corresponds to atm_interfaces__msg__LineTarget
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LineTarget {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gap_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stop_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub selected_by_vega: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub notes: rosidl_runtime_rs::String,

}



impl Default for LineTarget {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__msg__LineTarget__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__msg__LineTarget__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LineTarget {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__LineTarget__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__LineTarget__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__LineTarget__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LineTarget {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LineTarget where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/msg/LineTarget";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__LineTarget() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__StopDetection() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__msg__StopDetection__init(msg: *mut StopDetection) -> bool;
    fn atm_interfaces__msg__StopDetection__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StopDetection>, size: usize) -> bool;
    fn atm_interfaces__msg__StopDetection__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StopDetection>);
    fn atm_interfaces__msg__StopDetection__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StopDetection>, out_seq: *mut rosidl_runtime_rs::Sequence<StopDetection>) -> bool;
}

// Corresponds to atm_interfaces__msg__StopDetection
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopDetection {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detected_class: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_gap_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_line_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_match: bool,

}



impl Default for StopDetection {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__msg__StopDetection__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__msg__StopDetection__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StopDetection {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__StopDetection__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__StopDetection__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__StopDetection__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StopDetection {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StopDetection where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/msg/StopDetection";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__StopDetection() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__MasterStatus() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__msg__MasterStatus__init(msg: *mut MasterStatus) -> bool;
    fn atm_interfaces__msg__MasterStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MasterStatus>, size: usize) -> bool;
    fn atm_interfaces__msg__MasterStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MasterStatus>);
    fn atm_interfaces__msg__MasterStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MasterStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MasterStatus>) -> bool;
}

// Corresponds to atm_interfaces__msg__MasterStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MasterStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pump_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reel_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub system_armed: bool,

}



impl Default for MasterStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__msg__MasterStatus__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__msg__MasterStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MasterStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__MasterStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__MasterStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__MasterStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MasterStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MasterStatus where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/msg/MasterStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__MasterStatus() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__SlaveStatus() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__msg__SlaveStatus__init(msg: *mut SlaveStatus) -> bool;
    fn atm_interfaces__msg__SlaveStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SlaveStatus>, size: usize) -> bool;
    fn atm_interfaces__msg__SlaveStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SlaveStatus>);
    fn atm_interfaces__msg__SlaveStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SlaveStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<SlaveStatus>) -> bool;
}

// Corresponds to atm_interfaces__msg__SlaveStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SlaveStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub at_base: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub moving: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub atomizer_up: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub atomizer_down: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_line_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_stop_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_ok: bool,

}



impl Default for SlaveStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__msg__SlaveStatus__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__msg__SlaveStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SlaveStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__SlaveStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__SlaveStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__SlaveStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SlaveStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SlaveStatus where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/msg/SlaveStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__SlaveStatus() }
  }
}


#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__SprayReport() -> *const std::ffi::c_void;
}

#[link(name = "atm_interfaces__rosidl_generator_c")]
extern "C" {
    fn atm_interfaces__msg__SprayReport__init(msg: *mut SprayReport) -> bool;
    fn atm_interfaces__msg__SprayReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SprayReport>, size: usize) -> bool;
    fn atm_interfaces__msg__SprayReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SprayReport>);
    fn atm_interfaces__msg__SprayReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SprayReport>, out_seq: *mut rosidl_runtime_rs::Sequence<SprayReport>) -> bool;
}

// Corresponds to atm_interfaces__msg__SprayReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stop_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration_sec: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for SprayReport {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !atm_interfaces__msg__SprayReport__init(&mut msg as *mut _) {
        panic!("Call to atm_interfaces__msg__SprayReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SprayReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__SprayReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__SprayReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { atm_interfaces__msg__SprayReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SprayReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SprayReport where Self: Sized {
  const TYPE_NAME: &'static str = "atm_interfaces/msg/SprayReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__atm_interfaces__msg__SprayReport() }
  }
}


