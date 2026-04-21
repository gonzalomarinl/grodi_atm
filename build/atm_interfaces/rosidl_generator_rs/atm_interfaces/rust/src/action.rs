
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to atm_interfaces__action__ExecuteMission_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_ids: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_line_ids: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stop_indices: Vec<u32>,

}



impl Default for ExecuteMission_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteMission_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_Goal {
  type RmwMsg = super::action::rmw::ExecuteMission_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        mission_type: msg.mission_type.as_str().into(),
        line_ids: msg.line_ids
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        target_line_ids: msg.target_line_ids
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        stop_indices: msg.stop_indices.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        mission_type: msg.mission_type.as_str().into(),
        line_ids: msg.line_ids
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        target_line_ids: msg.target_line_ids
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        stop_indices: msg.stop_indices.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mission_id: msg.mission_id.to_string(),
      mission_type: msg.mission_type.to_string(),
      line_ids: msg.line_ids
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      target_line_ids: msg.target_line_ids
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      stop_indices: msg.stop_indices
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to atm_interfaces__action__ExecuteMission_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub final_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ExecuteMission_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteMission_Result::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_Result {
  type RmwMsg = super::action::rmw::ExecuteMission_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        final_state: msg.final_state.as_str().into(),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        final_state: msg.final_state.as_str().into(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      final_state: msg.final_state.to_string(),
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__action__ExecuteMission_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_phase: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_stop_index: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_line_id: std::string::String,

}



impl Default for ExecuteMission_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteMission_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_Feedback {
  type RmwMsg = super::action::rmw::ExecuteMission_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_phase: msg.current_phase.as_str().into(),
        current_stop_index: msg.current_stop_index,
        current_line_id: msg.current_line_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_phase: msg.current_phase.as_str().into(),
      current_stop_index: msg.current_stop_index,
        current_line_id: msg.current_line_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_phase: msg.current_phase.to_string(),
      current_stop_index: msg.current_stop_index,
      current_line_id: msg.current_line_id.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__action__ExecuteMission_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::ExecuteMission_Feedback,

}



impl Default for ExecuteMission_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteMission_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_FeedbackMessage {
  type RmwMsg = super::action::rmw::ExecuteMission_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::ExecuteMission_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::ExecuteMission_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::ExecuteMission_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to atm_interfaces__action__NavigateToStop_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stop_index: u32,

}



impl Default for NavigateToStop_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToStop_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_Goal {
  type RmwMsg = super::action::rmw::NavigateToStop_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        line_id: msg.line_id.as_str().into(),
        stop_index: msg.stop_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        line_id: msg.line_id.as_str().into(),
      stop_index: msg.stop_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mission_id: msg.mission_id.to_string(),
      line_id: msg.line_id.to_string(),
      stop_index: msg.stop_index,
    }
  }
}


// Corresponds to atm_interfaces__action__NavigateToStop_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub message: std::string::String,

}



impl Default for NavigateToStop_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToStop_Result::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_Result {
  type RmwMsg = super::action::rmw::NavigateToStop_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        stop_found: msg.stop_found,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      stop_found: msg.stop_found,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      stop_found: msg.stop_found,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__action__NavigateToStop_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub navigation_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_line_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vision_confidence: f32,

}



impl Default for NavigateToStop_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToStop_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_Feedback {
  type RmwMsg = super::action::rmw::NavigateToStop_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        navigation_state: msg.navigation_state.as_str().into(),
        current_line_id: msg.current_line_id.as_str().into(),
        vision_confidence: msg.vision_confidence,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        navigation_state: msg.navigation_state.as_str().into(),
        current_line_id: msg.current_line_id.as_str().into(),
      vision_confidence: msg.vision_confidence,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      navigation_state: msg.navigation_state.to_string(),
      current_line_id: msg.current_line_id.to_string(),
      vision_confidence: msg.vision_confidence,
    }
  }
}


// Corresponds to atm_interfaces__action__NavigateToStop_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::NavigateToStop_Feedback,

}



impl Default for NavigateToStop_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToStop_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_FeedbackMessage {
  type RmwMsg = super::action::rmw::NavigateToStop_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::NavigateToStop_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::NavigateToStop_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::NavigateToStop_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to atm_interfaces__action__SprayAtStop_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stop_index: u32,

}



impl Default for SprayAtStop_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SprayAtStop_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_Goal {
  type RmwMsg = super::action::rmw::SprayAtStop_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        line_id: msg.line_id.as_str().into(),
        stop_index: msg.stop_index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        line_id: msg.line_id.as_str().into(),
      stop_index: msg.stop_index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mission_id: msg.mission_id.to_string(),
      line_id: msg.line_id.to_string(),
      stop_index: msg.stop_index,
    }
  }
}


// Corresponds to atm_interfaces__action__SprayAtStop_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SprayAtStop_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SprayAtStop_Result::default())
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_Result {
  type RmwMsg = super::action::rmw::SprayAtStop_Result;

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


// Corresponds to atm_interfaces__action__SprayAtStop_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub phase: std::string::String,

}



impl Default for SprayAtStop_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SprayAtStop_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_Feedback {
  type RmwMsg = super::action::rmw::SprayAtStop_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        phase: msg.phase.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        phase: msg.phase.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      phase: msg.phase.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__action__SprayAtStop_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::SprayAtStop_Feedback,

}



impl Default for SprayAtStop_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SprayAtStop_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_FeedbackMessage {
  type RmwMsg = super::action::rmw::SprayAtStop_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::SprayAtStop_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::SprayAtStop_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::SprayAtStop_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to atm_interfaces__action__ReturnToBase_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: std::string::String,

}



impl Default for ReturnToBase_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ReturnToBase_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_Goal {
  type RmwMsg = super::action::rmw::ReturnToBase_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        reason: msg.reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        reason: msg.reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mission_id: msg.mission_id.to_string(),
      reason: msg.reason.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__action__ReturnToBase_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ReturnToBase_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ReturnToBase_Result::default())
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_Result {
  type RmwMsg = super::action::rmw::ReturnToBase_Result;

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


// Corresponds to atm_interfaces__action__ReturnToBase_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub phase: std::string::String,

}



impl Default for ReturnToBase_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ReturnToBase_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_Feedback {
  type RmwMsg = super::action::rmw::ReturnToBase_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        phase: msg.phase.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        phase: msg.phase.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      phase: msg.phase.to_string(),
    }
  }
}


// Corresponds to atm_interfaces__action__ReturnToBase_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::ReturnToBase_Feedback,

}



impl Default for ReturnToBase_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ReturnToBase_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_FeedbackMessage {
  type RmwMsg = super::action::rmw::ReturnToBase_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::ReturnToBase_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::ReturnToBase_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::ReturnToBase_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to atm_interfaces__action__RunPurge_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration_sec: f32,

}



impl Default for RunPurge_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RunPurge_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for RunPurge_Goal {
  type RmwMsg = super::action::rmw::RunPurge_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
        duration_sec: msg.duration_sec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mission_id: msg.mission_id.as_str().into(),
      duration_sec: msg.duration_sec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mission_id: msg.mission_id.to_string(),
      duration_sec: msg.duration_sec,
    }
  }
}


// Corresponds to atm_interfaces__action__RunPurge_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for RunPurge_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RunPurge_Result::default())
  }
}

impl rosidl_runtime_rs::Message for RunPurge_Result {
  type RmwMsg = super::action::rmw::RunPurge_Result;

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


// Corresponds to atm_interfaces__action__RunPurge_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub elapsed_sec: f32,

}



impl Default for RunPurge_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RunPurge_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for RunPurge_Feedback {
  type RmwMsg = super::action::rmw::RunPurge_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        elapsed_sec: msg.elapsed_sec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      elapsed_sec: msg.elapsed_sec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      elapsed_sec: msg.elapsed_sec,
    }
  }
}


// Corresponds to atm_interfaces__action__RunPurge_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::RunPurge_Feedback,

}



impl Default for RunPurge_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RunPurge_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for RunPurge_FeedbackMessage {
  type RmwMsg = super::action::rmw::RunPurge_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::RunPurge_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::RunPurge_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::RunPurge_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to atm_interfaces__action__ExecuteMission_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::ExecuteMission_Goal,

}



impl Default for ExecuteMission_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteMission_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_SendGoal_Request {
  type RmwMsg = super::action::rmw::ExecuteMission_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::ExecuteMission_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::ExecuteMission_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::ExecuteMission_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to atm_interfaces__action__ExecuteMission_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for ExecuteMission_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteMission_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_SendGoal_Response {
  type RmwMsg = super::action::rmw::ExecuteMission_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to atm_interfaces__action__ExecuteMission_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for ExecuteMission_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteMission_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_GetResult_Request {
  type RmwMsg = super::action::rmw::ExecuteMission_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to atm_interfaces__action__ExecuteMission_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ExecuteMission_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::ExecuteMission_Result,

}



impl Default for ExecuteMission_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ExecuteMission_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ExecuteMission_GetResult_Response {
  type RmwMsg = super::action::rmw::ExecuteMission_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::ExecuteMission_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::ExecuteMission_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::ExecuteMission_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to atm_interfaces__action__NavigateToStop_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::NavigateToStop_Goal,

}



impl Default for NavigateToStop_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToStop_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_SendGoal_Request {
  type RmwMsg = super::action::rmw::NavigateToStop_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::NavigateToStop_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::NavigateToStop_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::NavigateToStop_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to atm_interfaces__action__NavigateToStop_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for NavigateToStop_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToStop_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_SendGoal_Response {
  type RmwMsg = super::action::rmw::NavigateToStop_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to atm_interfaces__action__NavigateToStop_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for NavigateToStop_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToStop_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_GetResult_Request {
  type RmwMsg = super::action::rmw::NavigateToStop_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to atm_interfaces__action__NavigateToStop_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateToStop_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::NavigateToStop_Result,

}



impl Default for NavigateToStop_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::NavigateToStop_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for NavigateToStop_GetResult_Response {
  type RmwMsg = super::action::rmw::NavigateToStop_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::NavigateToStop_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::NavigateToStop_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::NavigateToStop_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to atm_interfaces__action__SprayAtStop_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::SprayAtStop_Goal,

}



impl Default for SprayAtStop_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SprayAtStop_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_SendGoal_Request {
  type RmwMsg = super::action::rmw::SprayAtStop_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::SprayAtStop_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::SprayAtStop_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::SprayAtStop_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to atm_interfaces__action__SprayAtStop_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for SprayAtStop_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SprayAtStop_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_SendGoal_Response {
  type RmwMsg = super::action::rmw::SprayAtStop_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to atm_interfaces__action__SprayAtStop_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for SprayAtStop_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SprayAtStop_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_GetResult_Request {
  type RmwMsg = super::action::rmw::SprayAtStop_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to atm_interfaces__action__SprayAtStop_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SprayAtStop_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::SprayAtStop_Result,

}



impl Default for SprayAtStop_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::SprayAtStop_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SprayAtStop_GetResult_Response {
  type RmwMsg = super::action::rmw::SprayAtStop_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::SprayAtStop_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::SprayAtStop_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::SprayAtStop_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to atm_interfaces__action__ReturnToBase_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::ReturnToBase_Goal,

}



impl Default for ReturnToBase_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ReturnToBase_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_SendGoal_Request {
  type RmwMsg = super::action::rmw::ReturnToBase_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::ReturnToBase_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::ReturnToBase_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::ReturnToBase_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to atm_interfaces__action__ReturnToBase_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for ReturnToBase_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ReturnToBase_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_SendGoal_Response {
  type RmwMsg = super::action::rmw::ReturnToBase_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to atm_interfaces__action__ReturnToBase_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for ReturnToBase_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ReturnToBase_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_GetResult_Request {
  type RmwMsg = super::action::rmw::ReturnToBase_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to atm_interfaces__action__ReturnToBase_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnToBase_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::ReturnToBase_Result,

}



impl Default for ReturnToBase_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ReturnToBase_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ReturnToBase_GetResult_Response {
  type RmwMsg = super::action::rmw::ReturnToBase_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::ReturnToBase_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::ReturnToBase_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::ReturnToBase_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to atm_interfaces__action__RunPurge_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::RunPurge_Goal,

}



impl Default for RunPurge_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RunPurge_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RunPurge_SendGoal_Request {
  type RmwMsg = super::action::rmw::RunPurge_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::RunPurge_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::RunPurge_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::RunPurge_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to atm_interfaces__action__RunPurge_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for RunPurge_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RunPurge_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RunPurge_SendGoal_Response {
  type RmwMsg = super::action::rmw::RunPurge_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to atm_interfaces__action__RunPurge_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for RunPurge_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RunPurge_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for RunPurge_GetResult_Request {
  type RmwMsg = super::action::rmw::RunPurge_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to atm_interfaces__action__RunPurge_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunPurge_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::RunPurge_Result,

}



impl Default for RunPurge_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::RunPurge_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for RunPurge_GetResult_Response {
  type RmwMsg = super::action::rmw::RunPurge_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::RunPurge_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::RunPurge_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::RunPurge_Result::from_rmw_message(msg.result),
    }
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






#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__atm_interfaces__action__ExecuteMission() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__ExecuteMission
#[allow(missing_docs, non_camel_case_types)]
pub struct ExecuteMission;

impl rosidl_runtime_rs::Action for ExecuteMission {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = ExecuteMission_Goal;

  /// The result message defined in the action definition.
  type Result = ExecuteMission_Result;

  /// The feedback message defined in the action definition.
  type Feedback = ExecuteMission_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::ExecuteMission_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::ExecuteMission_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::ExecuteMission_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__atm_interfaces__action__ExecuteMission() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::ExecuteMission_Goal,
  ) -> super::action::rmw::ExecuteMission_SendGoal_Request {
   super::action::rmw::ExecuteMission_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::ExecuteMission_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::ExecuteMission_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::ExecuteMission_SendGoal_Response {
   super::action::rmw::ExecuteMission_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::ExecuteMission_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::ExecuteMission_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::ExecuteMission_Feedback,
  ) -> super::action::rmw::ExecuteMission_FeedbackMessage {
    let mut message = super::action::rmw::ExecuteMission_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::ExecuteMission_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::ExecuteMission_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::ExecuteMission_GetResult_Request {
   super::action::rmw::ExecuteMission_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::ExecuteMission_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::ExecuteMission_Result,
  ) -> super::action::rmw::ExecuteMission_GetResult_Response {
   super::action::rmw::ExecuteMission_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::ExecuteMission_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::ExecuteMission_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__atm_interfaces__action__NavigateToStop() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__NavigateToStop
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateToStop;

impl rosidl_runtime_rs::Action for NavigateToStop {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = NavigateToStop_Goal;

  /// The result message defined in the action definition.
  type Result = NavigateToStop_Result;

  /// The feedback message defined in the action definition.
  type Feedback = NavigateToStop_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::NavigateToStop_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::NavigateToStop_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::NavigateToStop_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__atm_interfaces__action__NavigateToStop() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::NavigateToStop_Goal,
  ) -> super::action::rmw::NavigateToStop_SendGoal_Request {
   super::action::rmw::NavigateToStop_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::NavigateToStop_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::NavigateToStop_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::NavigateToStop_SendGoal_Response {
   super::action::rmw::NavigateToStop_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::NavigateToStop_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::NavigateToStop_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::NavigateToStop_Feedback,
  ) -> super::action::rmw::NavigateToStop_FeedbackMessage {
    let mut message = super::action::rmw::NavigateToStop_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::NavigateToStop_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::NavigateToStop_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::NavigateToStop_GetResult_Request {
   super::action::rmw::NavigateToStop_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::NavigateToStop_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::NavigateToStop_Result,
  ) -> super::action::rmw::NavigateToStop_GetResult_Response {
   super::action::rmw::NavigateToStop_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::NavigateToStop_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::NavigateToStop_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__atm_interfaces__action__SprayAtStop() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__SprayAtStop
#[allow(missing_docs, non_camel_case_types)]
pub struct SprayAtStop;

impl rosidl_runtime_rs::Action for SprayAtStop {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = SprayAtStop_Goal;

  /// The result message defined in the action definition.
  type Result = SprayAtStop_Result;

  /// The feedback message defined in the action definition.
  type Feedback = SprayAtStop_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::SprayAtStop_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::SprayAtStop_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::SprayAtStop_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__atm_interfaces__action__SprayAtStop() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::SprayAtStop_Goal,
  ) -> super::action::rmw::SprayAtStop_SendGoal_Request {
   super::action::rmw::SprayAtStop_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::SprayAtStop_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::SprayAtStop_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::SprayAtStop_SendGoal_Response {
   super::action::rmw::SprayAtStop_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::SprayAtStop_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::SprayAtStop_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::SprayAtStop_Feedback,
  ) -> super::action::rmw::SprayAtStop_FeedbackMessage {
    let mut message = super::action::rmw::SprayAtStop_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::SprayAtStop_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::SprayAtStop_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::SprayAtStop_GetResult_Request {
   super::action::rmw::SprayAtStop_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::SprayAtStop_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::SprayAtStop_Result,
  ) -> super::action::rmw::SprayAtStop_GetResult_Response {
   super::action::rmw::SprayAtStop_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::SprayAtStop_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::SprayAtStop_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__atm_interfaces__action__ReturnToBase() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__ReturnToBase
#[allow(missing_docs, non_camel_case_types)]
pub struct ReturnToBase;

impl rosidl_runtime_rs::Action for ReturnToBase {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = ReturnToBase_Goal;

  /// The result message defined in the action definition.
  type Result = ReturnToBase_Result;

  /// The feedback message defined in the action definition.
  type Feedback = ReturnToBase_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::ReturnToBase_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::ReturnToBase_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::ReturnToBase_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__atm_interfaces__action__ReturnToBase() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::ReturnToBase_Goal,
  ) -> super::action::rmw::ReturnToBase_SendGoal_Request {
   super::action::rmw::ReturnToBase_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::ReturnToBase_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::ReturnToBase_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::ReturnToBase_SendGoal_Response {
   super::action::rmw::ReturnToBase_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::ReturnToBase_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::ReturnToBase_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::ReturnToBase_Feedback,
  ) -> super::action::rmw::ReturnToBase_FeedbackMessage {
    let mut message = super::action::rmw::ReturnToBase_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::ReturnToBase_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::ReturnToBase_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::ReturnToBase_GetResult_Request {
   super::action::rmw::ReturnToBase_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::ReturnToBase_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::ReturnToBase_Result,
  ) -> super::action::rmw::ReturnToBase_GetResult_Response {
   super::action::rmw::ReturnToBase_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::ReturnToBase_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::ReturnToBase_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "atm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__atm_interfaces__action__RunPurge() -> *const std::ffi::c_void;
}

// Corresponds to atm_interfaces__action__RunPurge
#[allow(missing_docs, non_camel_case_types)]
pub struct RunPurge;

impl rosidl_runtime_rs::Action for RunPurge {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = RunPurge_Goal;

  /// The result message defined in the action definition.
  type Result = RunPurge_Result;

  /// The feedback message defined in the action definition.
  type Feedback = RunPurge_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::RunPurge_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::RunPurge_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::RunPurge_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__atm_interfaces__action__RunPurge() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::RunPurge_Goal,
  ) -> super::action::rmw::RunPurge_SendGoal_Request {
   super::action::rmw::RunPurge_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::RunPurge_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::RunPurge_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::RunPurge_SendGoal_Response {
   super::action::rmw::RunPurge_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::RunPurge_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::RunPurge_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::RunPurge_Feedback,
  ) -> super::action::rmw::RunPurge_FeedbackMessage {
    let mut message = super::action::rmw::RunPurge_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::RunPurge_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::RunPurge_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::RunPurge_GetResult_Request {
   super::action::rmw::RunPurge_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::RunPurge_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::RunPurge_Result,
  ) -> super::action::rmw::RunPurge_GetResult_Response {
   super::action::rmw::RunPurge_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::RunPurge_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::RunPurge_Result,
  ) {
    (response.status, response.result)
  }
}


