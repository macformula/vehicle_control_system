/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: controller_autogen.h
 *
 * Code generated for Simulink model 'controller_autogen'.
 *
 * Model version                  : 1.22
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun May 28 18:52:47 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_controller_autogen_h_
#define RTW_HEADER_controller_autogen_h_
#ifndef controller_autogen_COMMON_INCLUDES_
#define controller_autogen_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* controller_autogen_COMMON_INCLUDES_ */

#include "controller_autogen_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<S4>/LEFT_MOTOR' */
typedef struct {
  uint8_T is_c1_motor_interface_lib;   /* '<S4>/LEFT_MOTOR' */
  uint8_T is_AMK_startup;              /* '<S4>/LEFT_MOTOR' */
  uint8_T is_AMK_errorReset;           /* '<S4>/LEFT_MOTOR' */
  uint8_T is_AMK_shutdown;             /* '<S4>/LEFT_MOTOR' */
  uint8_T is_active_c1_motor_interface_li;/* '<S4>/LEFT_MOTOR' */
  uint8_T temporalCounter_i1;          /* '<S4>/LEFT_MOTOR' */
} DW_LEFT_MOTOR_controller_auto_T;

/* Block signals (default storage) */
typedef struct {
  MI_STATUSES MI_motorStatus;          /* '<S4>/RIGHT_MOTOR' */
  MI_STATUSES MI_motorStatus_h;        /* '<S4>/LEFT_MOTOR' */
  MI_CMD GOV_e_miCmd;                  /* '<S3>/Chart' */
  DI_CMD GOV_e_diCmd;                  /* '<S3>/Chart' */
  boolean_T b_ReadyToDrive;            /* '<S2>/Chart' */
} B_controller_autogen_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  MI_STATUSES Delay1_DSTATE;           /* '<S3>/Delay1' */
  MI_STATUSES Delay_DSTATE;            /* '<S4>/Delay' */
  BM_STATUSES Delay_DSTATE_f;          /* '<S3>/Delay' */
  DI_STATUSES Delay2_DSTATE;           /* '<S3>/Delay2' */
  uint16_T motorStartCount;            /* '<S3>/Chart' */
  uint8_T is_c3_governor_lib;          /* '<S3>/Chart' */
  uint8_T is_STARTUP;                  /* '<S3>/Chart' */
  uint8_T is_STARTUP_ERROR;            /* '<S3>/Chart' */
  uint8_T is_RUNNING_ERROR;            /* '<S3>/Chart' */
  uint8_T is_active_c3_governor_lib;   /* '<S3>/Chart' */
  uint8_T is_c3_driver_interface_lib;  /* '<S2>/Chart' */
  uint8_T is_DI_running;               /* '<S2>/Chart' */
  uint8_T is_Ready_to_drive;           /* '<S2>/Chart' */
  uint8_T is_active_c3_driver_interface_l;/* '<S2>/Chart' */
  uint8_T temporalCounter_i1;          /* '<S2>/Chart' */
  uint8_T is_c3_battery_monitor_lib;   /* '<S1>/Chart' */
  uint8_T is_active_c3_battery_monitor_li;/* '<S1>/Chart' */
  uint8_T temporalCounter_i1_p;        /* '<S1>/Chart' */
  DW_LEFT_MOTOR_controller_auto_T sf_RIGHT_MOTOR;/* '<S4>/RIGHT_MOTOR' */
  DW_LEFT_MOTOR_controller_auto_T sf_LEFT_MOTOR;/* '<S4>/LEFT_MOTOR' */
} DW_controller_autogen_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real32_T DataTypeConversion;   /* '<S11>/Data Type Conversion' */
  const real32_T DataTypeConversion2;  /* '<S11>/Data Type Conversion2' */
  const real32_T range;                /* '<S16>/Subtract' */
  const real32_T DataTypeConversion_i; /* '<S12>/Data Type Conversion' */
  const real32_T DataTypeConversion2_e;/* '<S12>/Data Type Conversion2' */
  const real32_T range_l;              /* '<S18>/Subtract' */
  const real32_T DataTypeConversion_d; /* '<S13>/Data Type Conversion' */
  const real32_T DataTypeConversion2_b;/* '<S13>/Data Type Conversion2' */
  const real32_T range_i;              /* '<S20>/Subtract' */
  const real32_T Gain1;                /* '<S5>/Gain1' */
  const real32_T Gain4;                /* '<S5>/Gain4' */
} ConstB_controller_autogen_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100])
   * Referenced by: '<S2>/AccelPedalPos1 LUT'
   */
  real32_T pooled2[21];
} ConstP_controller_autogen_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T AMK_bReserve_R;            /* '<Root>/AMK_bReserve_R' */
  int16_T DI_V_SteeringAngle;          /* '<Root>/DI_V_SteeringAngle' */
  int16_T DI_V_BrakePedalPos;          /* '<Root>/DI_V_BrakePedalPos' */
  real_T DI_b_DriverButton;            /* '<Root>/DI_b_DriverButton' */
  int16_T DI_V_AccelPedalPos1;         /* '<Root>/DI_V_AccelPedalPos1' */
  int16_T DI_V_AccelPedalPos2;         /* '<Root>/DI_V_AccelPedalPos2' */
  real_T BM_b_prechrgContactorSts;     /* '<Root>/BM_b_prechrgContactorSts' */
  real_T BM_b_HVposContactorSts;       /* '<Root>/BM_b_HVposContactorSts' */
  real_T BM_b_HVnegContactorSts;       /* '<Root>/BM_b_HVnegContactorSts' */
  boolean_T AMK_bSystemReady_R;        /* '<Root>/AMK_bSystemReady_R' */
  boolean_T AMK_bError_R;              /* '<Root>/AMK_bError_R' */
  boolean_T AMK_bWarn_R;               /* '<Root>/AMK_bWarn_R' */
  boolean_T AMK_bQuitDcOn_R;           /* '<Root>/AMK_bQuitDcOn_R' */
  boolean_T AMK_bDcOn_R;               /* '<Root>/AMK_bDcOn_R' */
  boolean_T AMK_bQuitInverterOn_R;     /* '<Root>/AMK_bQuitInverterOn_R' */
  boolean_T AMK_bInverterOn_R;         /* '<Root>/AMK_bInverterOn_R' */
  boolean_T AMK_bDerating_R;           /* '<Root>/AMK_bDerating_R' */
  int16_T AMK_TempMotor_R;             /* '<Root>/AMK_TempMotor_R' */
  int16_T AMK_TempInverter_R;          /* '<Root>/AMK_TempInverter_R' */
  uint16_T AMK_ErrorInfo_R;            /* '<Root>/AMK_ErrorInfo_R' */
  int16_T AMK_TempIGBT_R;              /* '<Root>/AMK_TempIGBT_R' */
  int16_T AMK_ActualVelocity_R;        /* '<Root>/AMK_ActualVelocity_R' */
  int16_T AMK_TorqueCurrent_R;         /* '<Root>/AMK_TorqueCurrent_R' */
  int16_T AMK_MagnetizingCurrent_R;    /* '<Root>/AMK_MagnetizingCurrent_R' */
  boolean_T AMK_bReserve_L;            /* '<Root>/AMK_bReserve_L' */
  boolean_T AMK_bSystemReady_L;        /* '<Root>/AMK_bSystemReady_L' */
  boolean_T AMK_bError_L;              /* '<Root>/AMK_bError_L' */
  boolean_T AMK_bWarn_L;               /* '<Root>/AMK_bWarn_L' */
  boolean_T AMK_bQuitDcOn_L;           /* '<Root>/AMK_bQuitDcOn_L' */
  boolean_T AMK_bDcOn_L;               /* '<Root>/AMK_bDcOn_L' */
  boolean_T AMK_bQuitInverterOn_L;     /* '<Root>/AMK_bQuitInverterOn_L' */
  boolean_T AMK_bInverterOn_L;         /* '<Root>/AMK_bInverterOn_L' */
  boolean_T AMK_bDerating_L;           /* '<Root>/AMK_bDerating_L' */
  int16_T AMK_TempMotor_L;             /* '<Root>/AMK_TempMotor_L' */
  int16_T AMK_TempInverter_L;          /* '<Root>/AMK_TempInverter_L' */
  uint16_T AMK_ErrorInfo_L;            /* '<Root>/AMK_ErrorInfo_L' */
  int16_T AMK_TempIGBT_L;              /* '<Root>/AMK_TempIGBT_L' */
  int16_T AMK_ActualVelocity_L;        /* '<Root>/AMK_ActualVelocity_L' */
  int16_T AMK_TorqueCurrent_L;         /* '<Root>/AMK_TorqueCurrent_L' */
  int16_T AMK_MagnetizingCurrent_L;    /* '<Root>/AMK_MagnetizingCurrent_L' */
} ExtU_controller_autogen_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T DI_b_driverSpeaker;        /* '<Root>/DI_b_driverSpeaker' */
  uint8_T AMK_bInverterOn_tx_R;        /* '<Root>/AMK_bInverterOn_tx_R' */
  uint8_T AMK_bDcOn_tx_R;              /* '<Root>/AMK_bDcOn_tx_R' */
  uint8_T AMK_bEnable_R;               /* '<Root>/AMK_bEnable_R' */
  uint8_T AMK_bErrorReset_R;           /* '<Root>/AMK_bErrorReset_R' */
  real32_T AMK_TargetVelocity_R;       /* '<Root>/AMK_TargetVelocity_R' */
  real32_T AMK_TorqueLimitPositiv_R;   /* '<Root>/AMK_TorqueLimitPositiv_R' */
  real32_T AMK_TorqueLimitNegativ_R;   /* '<Root>/AMK_TorqueLimitNegativ_R' */
  uint8_T AMK_bInverterOn_tx_L;        /* '<Root>/AMK_bInverterOn_tx_L' */
  uint8_T AMK_bDcOn_tx_L;              /* '<Root>/AMK_bDcOn_tx_L' */
  uint8_T AMK_bEnable_L;               /* '<Root>/AMK_bEnable_L' */
  uint8_T AMK_bErrorReset_L;           /* '<Root>/AMK_bErrorReset_L' */
  real32_T AMK_TargetVelocity_L;       /* '<Root>/AMK_TargetVelocity_L' */
  real32_T AMK_TorqueLimitPositiv_L;   /* '<Root>/AMK_TorqueLimitPositiv_L' */
  real32_T AMK_TorqueLimitNegativ_L;   /* '<Root>/AMK_TorqueLimitNegativ_L' */
} ExtY_controller_autogen_T;

/* Real-time Model Data Structure */
struct tag_RTM_controller_autogen_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_controller_autogen_T controller_autogen_B;

/* Block states (default storage) */
extern DW_controller_autogen_T controller_autogen_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_controller_autogen_T controller_autogen_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_controller_autogen_T controller_autogen_Y;
extern const ConstB_controller_autogen_T controller_autogen_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_controller_autogen_T controller_autogen_ConstP;

/* Model entry point functions */
extern void controller_autogen_initialize(void);
extern void controller_autogen_step(void);
extern void controller_autogen_terminate(void);

/* Real-time Model object */
extern RT_MODEL_controller_autogen_T *const controller_autogen_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Constant2' : Unused code path elimination
 * Block '<S2>/Switch1' : Unused code path elimination
 * Block '<S15>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S17>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S19>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S14>/Data Type Conversion' : Unused code path elimination
 * Block '<S14>/Data Type Conversion1' : Unused code path elimination
 * Block '<S14>/Data Type Conversion2' : Unused code path elimination
 * Block '<S21>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S22>/Divide' : Unused code path elimination
 * Block '<S22>/Gain' : Unused code path elimination
 * Block '<S22>/Subtract' : Unused code path elimination
 * Block '<S22>/Subtract1' : Unused code path elimination
 * Block '<S31>/Constant' : Unused code path elimination
 * Block '<S5>/latAccel' : Unused code path elimination
 * Block '<S5>/longAccel' : Unused code path elimination
 * Block '<S4>/Cast To Single' : Eliminate redundant data type conversion
 * Block '<S4>/Cast To Single1' : Eliminate redundant data type conversion
 * Block '<S4>/Cast To Single2' : Eliminate redundant data type conversion
 * Block '<S4>/Cast To Single3' : Eliminate redundant data type conversion
 * Block '<S4>/Cast To Single4' : Eliminate redundant data type conversion
 * Block '<S4>/Cast To Single5' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'controller_autogen'
 * '<S1>'   : 'controller_autogen/battery_monitor'
 * '<S2>'   : 'controller_autogen/driver_interface'
 * '<S3>'   : 'controller_autogen/governor'
 * '<S4>'   : 'controller_autogen/motor_interface'
 * '<S5>'   : 'controller_autogen/vehicle_dynamics'
 * '<S6>'   : 'controller_autogen/battery_monitor/Chart'
 * '<S7>'   : 'controller_autogen/driver_interface/Chart'
 * '<S8>'   : 'controller_autogen/driver_interface/If Action Subsystem'
 * '<S9>'   : 'controller_autogen/driver_interface/If Action Subsystem1'
 * '<S10>'  : 'controller_autogen/driver_interface/If Action Subsystem2'
 * '<S11>'  : 'controller_autogen/driver_interface/potentiometerProcessing'
 * '<S12>'  : 'controller_autogen/driver_interface/potentiometerProcessing1'
 * '<S13>'  : 'controller_autogen/driver_interface/potentiometerProcessing2'
 * '<S14>'  : 'controller_autogen/driver_interface/potentiometerProcessing3'
 * '<S15>'  : 'controller_autogen/driver_interface/potentiometerProcessing/Interval Test Dynamic'
 * '<S16>'  : 'controller_autogen/driver_interface/potentiometerProcessing/convertToPercent'
 * '<S17>'  : 'controller_autogen/driver_interface/potentiometerProcessing1/Interval Test Dynamic'
 * '<S18>'  : 'controller_autogen/driver_interface/potentiometerProcessing1/convertToPercent'
 * '<S19>'  : 'controller_autogen/driver_interface/potentiometerProcessing2/Interval Test Dynamic'
 * '<S20>'  : 'controller_autogen/driver_interface/potentiometerProcessing2/convertToPercent'
 * '<S21>'  : 'controller_autogen/driver_interface/potentiometerProcessing3/Interval Test Dynamic'
 * '<S22>'  : 'controller_autogen/driver_interface/potentiometerProcessing3/convertToPercent'
 * '<S23>'  : 'controller_autogen/governor/Chart'
 * '<S24>'  : 'controller_autogen/motor_interface/LEFT_MOTOR'
 * '<S25>'  : 'controller_autogen/motor_interface/RIGHT_MOTOR'
 * '<S26>'  : 'controller_autogen/vehicle_dynamics/LEFT_LIMIT'
 * '<S27>'  : 'controller_autogen/vehicle_dynamics/RIGHT_LIMIT'
 * '<S28>'  : 'controller_autogen/vehicle_dynamics/TorqueVectoring'
 * '<S29>'  : 'controller_autogen/vehicle_dynamics/TractionControlSystem_LEFT'
 * '<S30>'  : 'controller_autogen/vehicle_dynamics/TractionControlSystem_RIGHT'
 * '<S31>'  : 'controller_autogen/vehicle_dynamics/VelocityEstimation'
 */
#endif                                 /* RTW_HEADER_controller_autogen_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
