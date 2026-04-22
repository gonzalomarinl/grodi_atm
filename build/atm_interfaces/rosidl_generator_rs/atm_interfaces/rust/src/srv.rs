#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to atm_interfaces__srv__ArmSystem_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmSystem_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub arm: bool,

}



impl Default for ArmSystem_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ArmSystem_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ArmSystem_Request {
  type RmwMsg = super::srv::rmw::ArmSystem_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        arm: msg.arm,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      arm: msg.arm,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      arm: msg.arm,
    }
  }
}


// Corresponds to atm_interfaces__srv__ArmSystem_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmSystem_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ArmSystem_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ArmSystem_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ArmSystem_Response {
  type RmwMsg = super::srv::rmw::ArmSystem_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__srv__EmergencyStop_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EmergencyStop_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub source: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: std::string::String,

}



impl Default for EmergencyStop_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::EmergencyStop_Request::default())
  }
}

impl rosidl_runtime_rs::Message for EmergencyStop_Request {
  type RmwMsg = super::srv::rmw::EmergencyStop_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        source: msg.source.as_str().into(),
        reason: msg.reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        source: msg.source.as_str().into(),
        reason: msg.reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      source: msg.source.to_string(),
      reason: msg.reason.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__srv__EmergencyStop_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EmergencyStop_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for EmergencyStop_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::EmergencyStop_Response::default())
  }
}

impl rosidl_runtime_rs::Message for EmergencyStop_Response {
  type RmwMsg = super::srv::rmw::EmergencyStop_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__srv__ResetFault_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetFault_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub source: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: std::string::String,

}



impl Default for ResetFault_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetFault_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ResetFault_Request {
  type RmwMsg = super::srv::rmw::ResetFault_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        source: msg.source.as_str().into(),
        reason: msg.reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        source: msg.source.as_str().into(),
        reason: msg.reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      source: msg.source.to_string(),
      reason: msg.reason.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__srv__ResetFault_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetFault_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ResetFault_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ResetFault_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ResetFault_Response {
  type RmwMsg = super::srv::rmw::ResetFault_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__srv__StartPump_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartPump_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub enable: bool,

}



impl Default for StartPump_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StartPump_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StartPump_Request {
  type RmwMsg = super::srv::rmw::StartPump_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        enable: msg.enable,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      enable: msg.enable,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      enable: msg.enable,
    }
  }
}


// Corresponds to atm_interfaces__srv__StartPump_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StartPump_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for StartPump_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StartPump_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StartPump_Response {
  type RmwMsg = super::srv::rmw::StartPump_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__srv__StopPump_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopPump_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stop: bool,

}



impl Default for StopPump_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StopPump_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StopPump_Request {
  type RmwMsg = super::srv::rmw::StopPump_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stop: msg.stop,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      stop: msg.stop,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stop: msg.stop,
    }
  }
}


// Corresponds to atm_interfaces__srv__StopPump_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopPump_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for StopPump_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StopPump_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StopPump_Response {
  type RmwMsg = super::srv::rmw::StopPump_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__srv__SetAdmissionReelMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetAdmissionReelMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed: f32,

}



impl Default for SetAdmissionReelMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetAdmissionReelMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetAdmissionReelMode_Request {
  type RmwMsg = super::srv::rmw::SetAdmissionReelMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode.as_str().into(),
        speed: msg.speed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode.as_str().into(),
      speed: msg.speed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode.to_string(),
      speed: msg.speed,
    }
  }
}


// Corresponds to atm_interfaces__srv__SetAdmissionReelMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetAdmissionReelMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetAdmissionReelMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetAdmissionReelMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetAdmissionReelMode_Response {
  type RmwMsg = super::srv::rmw::SetAdmissionReelMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__srv__SetZoneSelection_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetZoneSelection_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_id: std::string::String,

}



impl Default for SetZoneSelection_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetZoneSelection_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetZoneSelection_Request {
  type RmwMsg = super::srv::rmw::SetZoneSelection_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        line_id: msg.line_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        line_id: msg.line_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mission_id: msg.mission_id.to_string(),
      line_id: msg.line_id.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__srv__SetZoneSelection_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetZoneSelection_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SetZoneSelection_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetZoneSelection_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetZoneSelection_Response {
  type RmwMsg = super::srv::rmw::SetZoneSelection_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__srv__GetSystemState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSystemState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub verbose: bool,

}



impl Default for GetSystemState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSystemState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetSystemState_Request {
  type RmwMsg = super::srv::rmw::GetSystemState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        verbose: msg.verbose,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      verbose: msg.verbose,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      verbose: msg.verbose,
    }
  }
}


// Corresponds to atm_interfaces__srv__GetSystemState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetSystemState_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub master_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slave_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detail: std::string::String,

}



impl Default for GetSystemState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetSystemState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetSystemState_Response {
  type RmwMsg = super::srv::rmw::GetSystemState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        master_state: msg.master_state.as_str().into(),
        slave_state: msg.slave_state.as_str().into(),
        mission_id: msg.mission_id.as_str().into(),
        detail: msg.detail.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        master_state: msg.master_state.as_str().into(),
        slave_state: msg.slave_state.as_str().into(),
        mission_id: msg.mission_id.as_str().into(),
        detail: msg.detail.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      master_state: msg.master_state.to_string(),
      slave_state: msg.slave_state.to_string(),
      mission_id: msg.mission_id.to_string(),
      detail: msg.detail.to_string(),
    }
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


