#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to atm_interfaces__msg__Heartbeat

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Heartbeat {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub machine_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub seq: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,

}



impl Default for Heartbeat {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Heartbeat::default())
  }
}

impl rosidl_runtime_rs::Message for Heartbeat {
  type RmwMsg = super::msg::rmw::Heartbeat;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_name: msg.node_name.as_str().into(),
        machine_id: msg.machine_id.as_str().into(),
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        seq: msg.seq,
        ok: msg.ok,
        state: msg.state.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_name: msg.node_name.as_str().into(),
        machine_id: msg.machine_id.as_str().into(),
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      seq: msg.seq,
      ok: msg.ok,
        state: msg.state.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_name: msg.node_name.to_string(),
      machine_id: msg.machine_id.to_string(),
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      seq: msg.seq,
      ok: msg.ok,
      state: msg.state.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__msg__MissionState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_stop_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_line_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub comms_degraded: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for MissionState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MissionState::default())
  }
}

impl rosidl_runtime_rs::Message for MissionState {
  type RmwMsg = super::msg::rmw::MissionState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        mission_type: msg.mission_type.as_str().into(),
        state: msg.state.as_str().into(),
        current_stop_index: msg.current_stop_index,
        current_line_id: msg.current_line_id.as_str().into(),
        comms_degraded: msg.comms_degraded,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        mission_type: msg.mission_type.as_str().into(),
        state: msg.state.as_str().into(),
      current_stop_index: msg.current_stop_index,
        current_line_id: msg.current_line_id.as_str().into(),
      comms_degraded: msg.comms_degraded,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mission_id: msg.mission_id.to_string(),
      mission_type: msg.mission_type.to_string(),
      state: msg.state.to_string(),
      current_stop_index: msg.current_stop_index,
      current_line_id: msg.current_line_id.to_string(),
      comms_degraded: msg.comms_degraded,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to atm_interfaces__msg__MissionEvent

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub event_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detail: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for MissionEvent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MissionEvent::default())
  }
}

impl rosidl_runtime_rs::Message for MissionEvent {
  type RmwMsg = super::msg::rmw::MissionEvent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        event_type: msg.event_type.as_str().into(),
        source: msg.source.as_str().into(),
        detail: msg.detail.as_str().into(),
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        event_type: msg.event_type.as_str().into(),
        source: msg.source.as_str().into(),
        detail: msg.detail.as_str().into(),
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mission_id: msg.mission_id.to_string(),
      event_type: msg.event_type.to_string(),
      source: msg.source.to_string(),
      detail: msg.detail.to_string(),
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to atm_interfaces__msg__FaultReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FaultReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_code: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub severity: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub description: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requires_return_home: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for FaultReport {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FaultReport::default())
  }
}

impl rosidl_runtime_rs::Message for FaultReport {
  type RmwMsg = super::msg::rmw::FaultReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        source: msg.source.as_str().into(),
        fault_code: msg.fault_code.as_str().into(),
        severity: msg.severity.as_str().into(),
        description: msg.description.as_str().into(),
        requires_return_home: msg.requires_return_home,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        source: msg.source.as_str().into(),
        fault_code: msg.fault_code.as_str().into(),
        severity: msg.severity.as_str().into(),
        description: msg.description.as_str().into(),
      requires_return_home: msg.requires_return_home,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mission_id: msg.mission_id.to_string(),
      source: msg.source.to_string(),
      fault_code: msg.fault_code.to_string(),
      severity: msg.severity.to_string(),
      description: msg.description.to_string(),
      requires_return_home: msg.requires_return_home,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to atm_interfaces__msg__LineTarget

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LineTarget {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gap_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stop_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub selected_by_vega: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub notes: std::string::String,

}



impl Default for LineTarget {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LineTarget::default())
  }
}

impl rosidl_runtime_rs::Message for LineTarget {
  type RmwMsg = super::msg::rmw::LineTarget;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        gap_id: msg.gap_id.as_str().into(),
        line_id: msg.line_id.as_str().into(),
        stop_index: msg.stop_index,
        mode: msg.mode.as_str().into(),
        selected_by_vega: msg.selected_by_vega,
        notes: msg.notes.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        gap_id: msg.gap_id.as_str().into(),
        line_id: msg.line_id.as_str().into(),
      stop_index: msg.stop_index,
        mode: msg.mode.as_str().into(),
      selected_by_vega: msg.selected_by_vega,
        notes: msg.notes.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mission_id: msg.mission_id.to_string(),
      gap_id: msg.gap_id.to_string(),
      line_id: msg.line_id.to_string(),
      stop_index: msg.stop_index,
      mode: msg.mode.to_string(),
      selected_by_vega: msg.selected_by_vega,
      notes: msg.notes.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__msg__StopDetection

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopDetection {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detected_class: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_gap_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub estimated_line_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_match: bool,

}



impl Default for StopDetection {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StopDetection::default())
  }
}

impl rosidl_runtime_rs::Message for StopDetection {
  type RmwMsg = super::msg::rmw::StopDetection;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        detected: msg.detected,
        detected_class: msg.detected_class.as_str().into(),
        estimated_gap_id: msg.estimated_gap_id.as_str().into(),
        estimated_line_id: msg.estimated_line_id.as_str().into(),
        confidence: msg.confidence,
        mission_match: msg.mission_match,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      detected: msg.detected,
        detected_class: msg.detected_class.as_str().into(),
        estimated_gap_id: msg.estimated_gap_id.as_str().into(),
        estimated_line_id: msg.estimated_line_id.as_str().into(),
      confidence: msg.confidence,
      mission_match: msg.mission_match,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      detected: msg.detected,
      detected_class: msg.detected_class.to_string(),
      estimated_gap_id: msg.estimated_gap_id.to_string(),
      estimated_line_id: msg.estimated_line_id.to_string(),
      confidence: msg.confidence,
      mission_match: msg.mission_match,
    }
  }
}


// Corresponds to atm_interfaces__msg__MasterStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MasterStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pump_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reel_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_ok: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub system_armed: bool,

}



impl Default for MasterStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MasterStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MasterStatus {
  type RmwMsg = super::msg::rmw::MasterStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
        pump_enabled: msg.pump_enabled,
        reel_state: msg.reel_state.as_str().into(),
        link_ok: msg.link_ok,
        system_armed: msg.system_armed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
      pump_enabled: msg.pump_enabled,
        reel_state: msg.reel_state.as_str().into(),
      link_ok: msg.link_ok,
      system_armed: msg.system_armed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: msg.state.to_string(),
      pump_enabled: msg.pump_enabled,
      reel_state: msg.reel_state.to_string(),
      link_ok: msg.link_ok,
      system_armed: msg.system_armed,
    }
  }
}


// Corresponds to atm_interfaces__msg__SlaveStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SlaveStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,


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
    pub current_line_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_stop_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub link_ok: bool,

}



impl Default for SlaveStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SlaveStatus::default())
  }
}

impl rosidl_runtime_rs::Message for SlaveStatus {
  type RmwMsg = super::msg::rmw::SlaveStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
        at_base: msg.at_base,
        moving: msg.moving,
        atomizer_up: msg.atomizer_up,
        atomizer_down: msg.atomizer_down,
        current_line_id: msg.current_line_id.as_str().into(),
        current_stop_index: msg.current_stop_index,
        link_ok: msg.link_ok,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state.as_str().into(),
      at_base: msg.at_base,
      moving: msg.moving,
      atomizer_up: msg.atomizer_up,
      atomizer_down: msg.atomizer_down,
        current_line_id: msg.current_line_id.as_str().into(),
      current_stop_index: msg.current_stop_index,
      link_ok: msg.link_ok,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: msg.state.to_string(),
      at_base: msg.at_base,
      moving: msg.moving,
      atomizer_up: msg.atomizer_up,
      atomizer_down: msg.atomizer_down,
      current_line_id: msg.current_line_id.to_string(),
      current_stop_index: msg.current_stop_index,
      link_ok: msg.link_ok,
    }
  }
}


// Corresponds to atm_interfaces__msg__SprayReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_id: std::string::String,


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
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for SprayReport {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SprayReport::default())
  }
}

impl rosidl_runtime_rs::Message for SprayReport {
  type RmwMsg = super::msg::rmw::SprayReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        line_id: msg.line_id.as_str().into(),
        stop_index: msg.stop_index,
        success: msg.success,
        duration_sec: msg.duration_sec,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        line_id: msg.line_id.as_str().into(),
      stop_index: msg.stop_index,
      success: msg.success,
      duration_sec: msg.duration_sec,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mission_id: msg.mission_id.to_string(),
      line_id: msg.line_id.to_string(),
      stop_index: msg.stop_index,
      success: msg.success,
      duration_sec: msg.duration_sec,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


