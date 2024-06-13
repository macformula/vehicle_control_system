//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: controller_autogen.h
//
// Code generated for Simulink model 'controller_autogen'.
//
// Model version                  : 1.91
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Thu Jun 13 16:00:17 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-M
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_controller_autogen_h_
#define RTW_HEADER_controller_autogen_h_
#include "rtwtypes.h"
#include "controller_autogen_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Class declaration for model controller_autogen
class controller_autogen final
{
  // public data and function members
 public:
  // Block signals (default storage)
  struct B_controller_autogen_T {
    real_T pedaltotorque;              // '<S5>/%pedal to %torque'
    real_T MI_InverterEn;              // '<S4>/mi_right'
    real_T MI_InverterEn_p;            // '<S4>/mi_left'
    MI_STATUSES MI_motorStatus;        // '<S4>/mi_right'
    MI_STATUSES MI_motorStatus_o;      // '<S4>/mi_left'
    MI_CMD GOV_e_miCmd;                // '<S3>/governer_stateflow'
    GOV_STATUSES GOV_e_govSts;         // '<S3>/governer_stateflow'
    DI_CMD GOV_e_diCmd;                // '<S3>/governer_stateflow'
    BM_CMD GOV_e_bmCmd;                // '<S3>/governer_stateflow'
    boolean_T b_ReadyToDrive;          // '<S2>/driver_interface'
  };

  // Block states (default storage) for system '<Root>'
  struct DW_controller_autogen_T {
    real_T TappedDelay_X[10];          // '<S25>/Tapped Delay'
    BM_STATUSES Delay_DSTATE;          // '<S3>/Delay'
    DI_STATUSES Delay2_DSTATE;         // '<S3>/Delay2'
    MI_STATUSES Delay1_DSTATE;         // '<S3>/Delay1'
    MI_STATUSES Delay_DSTATE_k;        // '<S4>/Delay'
    uint16_T temporalCounter_i1;       // '<S4>/mi_right'
    uint16_T temporalCounter_i1_n;     // '<S4>/mi_left'
    uint16_T motorStartCount;          // '<S3>/governer_stateflow'
    uint16_T temporalCounter_i1_j;     // '<S3>/governer_stateflow'
    uint16_T temporalCounter_i1_h;     // '<S2>/driver_interface'
    uint16_T temporalCounter_i1_o;     // '<S1>/bm_control'
    uint16_T temporalCounter_i1_e;     // '<S1>/battery_monitor'
    uint8_T is_c3_controller_autogen;  // '<S5>/vd_screenshot_check'
    uint8_T is_active_c3_controller_autogen;// '<S5>/vd_screenshot_check'
    uint8_T is_c10_controller_autogen; // '<S4>/mi_right'
    uint8_T is_AMK_startup;            // '<S4>/mi_right'
    uint8_T is_AMK_errorReset;         // '<S4>/mi_right'
    uint8_T is_active_c10_controller_autoge;// '<S4>/mi_right'
    uint8_T is_c9_controller_autogen;  // '<S4>/mi_left'
    uint8_T is_AMK_startup_e;          // '<S4>/mi_left'
    uint8_T is_AMK_errorReset_d;       // '<S4>/mi_left'
    uint8_T is_active_c9_controller_autogen;// '<S4>/mi_left'
    uint8_T is_c8_governor_lib;        // '<S3>/governer_stateflow'
    uint8_T is_STARTUP;                // '<S3>/governer_stateflow'
    uint8_T is_STARTUP_ERROR;          // '<S3>/governer_stateflow'
    uint8_T is_RUNNING_ERROR;          // '<S3>/governer_stateflow'
    uint8_T is_active_c8_governor_lib; // '<S3>/governer_stateflow'
    uint8_T is_c2_driver_interface_lib;// '<S2>/driver_interface'
    uint8_T is_DI_running;             // '<S2>/driver_interface'
    uint8_T is_Ready_to_drive;         // '<S2>/driver_interface'
    uint8_T is_active_c2_driver_interface_l;// '<S2>/driver_interface'
    uint8_T is_c5_battery_monitor_lib; // '<S1>/bm_control'
    uint8_T is_StartupSuperstate;      // '<S1>/bm_control'
    uint8_T is_active_c5_battery_monitor_li;// '<S1>/bm_control'
    uint8_T is_c4_battery_monitor_lib; // '<S1>/battery_monitor'
    uint8_T is_active_c4_battery_monitor_li;// '<S1>/battery_monitor'
  };

  // Constant parameters (default storage)
  struct ConstP_controller_autogen_T {
    // Pooled Parameter (Expression: [0 1])
    //  Referenced by: '<S2>/AccelPedalMap'

    real_T pooled3[2];

    // Pooled Parameter (Expression: [0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100])
    //  Referenced by: '<S2>/BrakePedalMap'

    real_T pooled4[21];

    // Expression: [linspace(0,600,101)]
    //  Referenced by: '<S5>/%pedal to %torque'

    real_T pedaltotorque_tableData[101];

    // Expression: [linspace(0,1,101)]
    //  Referenced by: '<S5>/%pedal to %torque'

    real_T pedaltotorque_bp01Data[101];
  };

  // External inputs (root inport signals with default storage)
  struct ExtU_controller_autogen_T {
    boolean_T AMK1_bReserve;           // '<Root>/AMK1_bReserve'
    boolean_T AMK1_bSystemReady;       // '<Root>/AMK1_bSystemReady'
    boolean_T AMK1_bError;             // '<Root>/AMK1_bError'
    boolean_T AMK1_bWarn;              // '<Root>/AMK1_bWarn'
    boolean_T AMK1_bQuitDcOn;          // '<Root>/AMK1_bQuitDcOn'
    boolean_T AMK1_bDcOn;              // '<Root>/AMK1_bDcOn'
    boolean_T AMK1_bQuitInverterOn;    // '<Root>/AMK1_bQuitInverterOn'
    boolean_T AMK1_bInverterOn;        // '<Root>/AMK1_bInverterOn'
    boolean_T AMK1_bDerating;          // '<Root>/AMK1_bDerating'
    int16_T AMK1_ActualVelocity;       // '<Root>/AMK1_ActualVelocity'
    int16_T AMK1_TorqueCurrent;        // '<Root>/AMK1_TorqueCurrent'
    int16_T AMK1_MagnetizingCurrent;   // '<Root>/AMK1_MagnetizingCurrent'
    int16_T AMK1_TempMotor;            // '<Root>/AMK1_TempMotor'
    int16_T AMK1_TempInverter;         // '<Root>/AMK1_TempInverter'
    uint16_T AMK1_ErrorInfo;           // '<Root>/AMK1_ErrorInfo'
    int16_T AMK1_TempIGBT;             // '<Root>/AMK1_TempIGBT'
    boolean_T AMK0_bReserve;           // '<Root>/AMK0_bReserve'
    boolean_T AMK0_bSystemReady;       // '<Root>/AMK0_bSystemReady'
    boolean_T AMK0_bError;             // '<Root>/AMK0_bError'
    boolean_T AMK0_bWarn;              // '<Root>/AMK0_bWarn'
    boolean_T AMK0_bQuitDcOn;          // '<Root>/AMK0_bQuitDcOn'
    boolean_T AMK0_bDcOn;              // '<Root>/AMK0_bDcOn'
    boolean_T AMK0_bQuitInverterOn;    // '<Root>/AMK0_bQuitInverterOn'
    boolean_T AMK0_bInverterOn;        // '<Root>/AMK0_bInverterOn'
    boolean_T AMK0_bDerating;          // '<Root>/AMK0_bDerating'
    int16_T AMK0_ActualVelocity;       // '<Root>/AMK0_ActualVelocity'
    int16_T AMK0_TorqueCurrent;        // '<Root>/AMK0_TorqueCurrent'
    int16_T AMK0_MagnetizingCurrent;   // '<Root>/AMK0_MagnetizingCurrent'
    int16_T AMK0_TempMotor;            // '<Root>/AMK0_TempMotor'
    int16_T AMK0_TempInverter;         // '<Root>/AMK0_TempInverter'
    uint16_T AMK0_ErrorInfo;           // '<Root>/AMK0_ErrorInfo'
    int16_T AMK0_TempIGBT;             // '<Root>/AMK0_TempIGBT'
    real_T DI_FrontBrakePressure;      // '<Root>/DI_FrontBrakePressure'
    real_T DI_RearBrakePressure;       // '<Root>/DI_RearBrakePressure'
    boolean_T DI_StartButton;          // '<Root>/DI_StartButton'
    real_T DI_AccelPedalPosition1;     // '<Root>/DI_AccelPedalPosition1'
    real_T DI_AccelPedalPosition2;     // '<Root>/DI_AccelPedalPosition2'
    boolean_T BM_prechrgContactorSts;  // '<Root>/BM_prechrgContactorSts'
    boolean_T BM_HVposContactorSts;    // '<Root>/BM_HVposContactorSts'
    boolean_T BM_HVnegContactorSts;    // '<Root>/BM_HVnegContactorSts'
    boolean_T BM_HvilFeedback;         // '<Root>/BM_HvilFeedback'
  };

  // External outputs (root outports fed by signals with default storage)
  struct ExtY_controller_autogen_T {
    uint8_T AMK1_bInverterOn_tx;       // '<Root>/AMK1_bInverterOn_tx'
    uint8_T AMK1_bDcOn_tx;             // '<Root>/AMK1_bDcOn_tx'
    uint8_T AMK1_bEnable;              // '<Root>/AMK1_bEnable'
    uint8_T AMK1_bErrorReset;          // '<Root>/AMK1_bErrorReset'
    real32_T AMK1_TargetVelocity;      // '<Root>/AMK1_TargetVelocity'
    real32_T AMK1_TorqueLimitPositiv;  // '<Root>/AMK1_TorqueLimitPositiv'
    real32_T AMK1_TorqueLimitNegativ;  // '<Root>/AMK1_TorqueLimitNegativ'
    uint8_T AMK0_bInverterOn_tx;       // '<Root>/AMK0_bInverterOn_tx'
    uint8_T AMK0_bDcOn_tx;             // '<Root>/AMK0_bDcOn_tx'
    uint8_T AMK0_bEnable;              // '<Root>/AMK0_bEnable'
    uint8_T AMK0_bErrorReset;          // '<Root>/AMK0_bErrorReset'
    real32_T AMK0_TargetVelocity;      // '<Root>/AMK0_TargetVelocity'
    real32_T AMK0_TorqueLimitPositiv;  // '<Root>/AMK0_TorqueLimitPositiv'
    real32_T AMK0_TorqueLimitNegativ;  // '<Root>/AMK0_TorqueLimitNegativ'
    real_T BM_PrechargeContactorCmd;   // '<Root>/BM_PrechargeContactorCmd'
    real_T BM_HVposContactorCmd;       // '<Root>/BM_HVposContactorCmd'
    real_T BM_HVnegContactorCmd;       // '<Root>/BM_HVnegContactorCmd'
    boolean_T DI_DriverSpeaker;        // '<Root>/DI_DriverSpeaker'
    boolean_T DI_BrakeLightEn;         // '<Root>/DI_BrakeLightEn'
    uint8_T GOV_Status;                // '<Root>/GOV_Status'
    uint8_T MI_Status;                 // '<Root>/MI_Status'
    uint8_T Di_Status;                 // '<Root>/Di_Status'
    uint8_T BM_Status;                 // '<Root>/BM_Status'
    boolean_T MI_InverterEn;           // '<Root>/MI_InverterEn'
  };

  // Real-time Model Data Structure
  struct RT_MODEL_controller_autogen_T {
    const char_T * volatile errorStatus;
  };

  // Copy Constructor
  controller_autogen(controller_autogen const&) = delete;

  // Assignment Operator
  controller_autogen& operator= (controller_autogen const&) & = delete;

  // Move Constructor
  controller_autogen(controller_autogen &&) = delete;

  // Move Assignment Operator
  controller_autogen& operator= (controller_autogen &&) = delete;

  // Real-Time Model get method
  controller_autogen::RT_MODEL_controller_autogen_T * getRTM();

  // Root inports set method
  void setExternalInputs(const ExtU_controller_autogen_T
    *pExtU_controller_autogen_T)
  {
    controller_autogen_U = *pExtU_controller_autogen_T;
  }

  // Root outports get method
  const ExtY_controller_autogen_T &getExternalOutputs() const
  {
    return controller_autogen_Y;
  }

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  static void terminate();

  // Constructor
  controller_autogen();

  // Destructor
  ~controller_autogen();

  // private data and function members
 private:
  // External inputs
  ExtU_controller_autogen_T controller_autogen_U;

  // External outputs
  ExtY_controller_autogen_T controller_autogen_Y;

  // Block signals
  B_controller_autogen_T controller_autogen_B;

  // Block states
  DW_controller_autogen_T controller_autogen_DW;

  // Real-Time Model
  RT_MODEL_controller_autogen_T controller_autogen_M;
};

// Constant parameters (default storage)
extern const controller_autogen::ConstP_controller_autogen_T
  controller_autogen_ConstP;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S2>/Constant2' : Unused code path elimination
//  Block '<S2>/Switch1' : Unused code path elimination
//  Block '<S17>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S18>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S19>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S20>/FixPt Data Type Duplicate' : Unused code path elimination
//  Block '<S21>/FixPt Data Type Duplicate' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'controller_autogen'
//  '<S1>'   : 'controller_autogen/battery_monitor'
//  '<S2>'   : 'controller_autogen/driver_interface'
//  '<S3>'   : 'controller_autogen/governor'
//  '<S4>'   : 'controller_autogen/motor_interface'
//  '<S5>'   : 'controller_autogen/simp_vd_interface'
//  '<S6>'   : 'controller_autogen/battery_monitor/battery_monitor'
//  '<S7>'   : 'controller_autogen/battery_monitor/bm_control'
//  '<S8>'   : 'controller_autogen/driver_interface/Accelerator plausibility check'
//  '<S9>'   : 'controller_autogen/driver_interface/If Action Subsystem'
//  '<S10>'  : 'controller_autogen/driver_interface/If Action Subsystem1'
//  '<S11>'  : 'controller_autogen/driver_interface/driver_interface'
//  '<S12>'  : 'controller_autogen/driver_interface/potentiometerProcessing'
//  '<S13>'  : 'controller_autogen/driver_interface/potentiometerProcessing1'
//  '<S14>'  : 'controller_autogen/driver_interface/potentiometerProcessing2'
//  '<S15>'  : 'controller_autogen/driver_interface/potentiometerProcessing3'
//  '<S16>'  : 'controller_autogen/driver_interface/potentiometerProcessing4'
//  '<S17>'  : 'controller_autogen/driver_interface/potentiometerProcessing/Interval Test Dynamic'
//  '<S18>'  : 'controller_autogen/driver_interface/potentiometerProcessing1/Interval Test Dynamic'
//  '<S19>'  : 'controller_autogen/driver_interface/potentiometerProcessing2/Interval Test Dynamic'
//  '<S20>'  : 'controller_autogen/driver_interface/potentiometerProcessing3/Interval Test Dynamic'
//  '<S21>'  : 'controller_autogen/driver_interface/potentiometerProcessing4/Interval Test Dynamic'
//  '<S22>'  : 'controller_autogen/governor/governer_stateflow'
//  '<S23>'  : 'controller_autogen/motor_interface/mi_left'
//  '<S24>'  : 'controller_autogen/motor_interface/mi_right'
//  '<S25>'  : 'controller_autogen/simp_vd_interface/Running Avg'
//  '<S26>'  : 'controller_autogen/simp_vd_interface/vd_screenshot_check'

#endif                                 // RTW_HEADER_controller_autogen_h_

//
// File trailer for generated code.
//
// [EOF]
//
