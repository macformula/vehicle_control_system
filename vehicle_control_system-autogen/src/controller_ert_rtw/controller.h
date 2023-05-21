/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: controller.h
 *
 * Code generated for Simulink model 'controller'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun May 21 17:54:25 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_controller_h_
#define RTW_HEADER_controller_h_
#ifndef controller_COMMON_INCLUDES_
#define controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* controller_COMMON_INCLUDES_ */

#include "controller_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<S4>/LEFT_MOTOR' */
typedef struct {
  uint8_T is_c1_controller;            /* '<S4>/LEFT_MOTOR' */
  uint8_T is_AMK_startup;              /* '<S4>/LEFT_MOTOR' */
  uint8_T is_AMK_errorReset;           /* '<S4>/LEFT_MOTOR' */
  uint8_T is_AMK_shutdown;             /* '<S4>/LEFT_MOTOR' */
  uint8_T is_active_c1_controller;     /* '<S4>/LEFT_MOTOR' */
  uint8_T temporalCounter_i1;          /* '<S4>/LEFT_MOTOR' */
} DW_LEFT_MOTOR_controller_T;

/* Block signals (default storage) */
typedef struct {
  MI_STATUSES MI_motorStatus;          /* '<S4>/RIGHT_MOTOR' */
  MI_STATUSES MI_motorStatus_b;        /* '<S4>/LEFT_MOTOR' */
  MI_CMD GOV_e_miCmd;                  /* '<S3>/Chart' */
  DI_CMD GOV_e_diCmd;                  /* '<S3>/Chart' */
  boolean_T b_ReadyToDrive;            /* '<S2>/Chart' */
} B_controller_T;

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
  DW_LEFT_MOTOR_controller_T sf_RIGHT_MOTOR;/* '<S4>/RIGHT_MOTOR' */
  DW_LEFT_MOTOR_controller_T sf_LEFT_MOTOR;/* '<S4>/LEFT_MOTOR' */
} DW_controller_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real32_T Gain1;                /* '<S5>/Gain1' */
} ConstB_controller_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100])
   * Referenced by: '<S2>/AccelPedalPos1 LUT'
   */
  real32_T pooled3[21];
} ConstP_controller_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T AMK_bReserve_R;            /* '<Root>/AMK_bReserve_R' */
  real32_T DI_V_SteeringAngle;         /* '<Root>/DI_V_SteeringAngle' */
  real32_T DI_V_BrakePedalPos;         /* '<Root>/DI_V_BrakePedalPos' */
  real_T DI_b_DriverButton;            /* '<Root>/DI_b_DriverButton' */
  real32_T DI_V_AccelPedalPos1;        /* '<Root>/DI_V_AccelPedalPos1' */
  real32_T DI_V_AccelPedalPos2;        /* '<Root>/DI_V_AccelPedalPos2' */
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
} ExtU_controller_T;

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
} ExtY_controller_T;

/* Real-time Model Data Structure */
struct tag_RTM_controller_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_controller_T controller_B;

/* Block states (default storage) */
extern DW_controller_T controller_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_controller_T controller_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_controller_T controller_Y;
extern const ConstB_controller_T controller_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_controller_T controller_ConstP;

/* Model entry point functions */
extern void controller_initialize(void);
extern void controller_step(void);
extern void controller_terminate(void);

/* Real-time Model object */
extern RT_MODEL_controller_T *const controller_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/AND' : Unused code path elimination
 * Block '<S2>/Constant2' : Unused code path elimination
 * Block '<S2>/OR' : Unused code path elimination
 * Block '<S2>/Switch1' : Unused code path elimination
 * Block '<S15>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S15>/FixPt Logical Operator' : Unused code path elimination
 * Block '<S15>/Lower Test' : Unused code path elimination
 * Block '<S15>/Upper Test' : Unused code path elimination
 * Block '<S11>/LowerPotentiometerLimit1' : Unused code path elimination
 * Block '<S17>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S19>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S14>/Gain' : Unused code path elimination
 * Block '<S21>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S21>/FixPt Logical Operator' : Unused code path elimination
 * Block '<S21>/Lower Test' : Unused code path elimination
 * Block '<S21>/Upper Test' : Unused code path elimination
 * Block '<S14>/LowerPotentiometerLimit1' : Unused code path elimination
 * Block '<S14>/UpperPotentiometerLimit1' : Unused code path elimination
 * Block '<S22>/Divide' : Unused code path elimination
 * Block '<S22>/Subtract' : Unused code path elimination
 * Block '<S27>/Constant1' : Unused code path elimination
 * Block '<S28>/Constant' : Unused code path elimination
 * Block '<S30>/Constant' : Unused code path elimination
 * Block '<S5>/convertToAmps' : Unused code path elimination
 * Block '<S5>/convertToAmps1' : Unused code path elimination
 * Block '<S5>/convertToAmps2' : Unused code path elimination
 * Block '<S5>/latAccel' : Unused code path elimination
 * Block '<S5>/longAccel' : Unused code path elimination
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
 * '<Root>' : 'controller'
 * '<S1>'   : 'controller/battery_monitor'
 * '<S2>'   : 'controller/driver_interface'
 * '<S3>'   : 'controller/governor'
 * '<S4>'   : 'controller/motor_interface'
 * '<S5>'   : 'controller/vehicle_dynamics'
 * '<S6>'   : 'controller/battery_monitor/Chart'
 * '<S7>'   : 'controller/driver_interface/Chart'
 * '<S8>'   : 'controller/driver_interface/If Action Subsystem'
 * '<S9>'   : 'controller/driver_interface/If Action Subsystem1'
 * '<S10>'  : 'controller/driver_interface/If Action Subsystem2'
 * '<S11>'  : 'controller/driver_interface/potentiometerProcessing'
 * '<S12>'  : 'controller/driver_interface/potentiometerProcessing1'
 * '<S13>'  : 'controller/driver_interface/potentiometerProcessing2'
 * '<S14>'  : 'controller/driver_interface/potentiometerProcessing3'
 * '<S15>'  : 'controller/driver_interface/potentiometerProcessing/Interval Test Dynamic'
 * '<S16>'  : 'controller/driver_interface/potentiometerProcessing/convertToPercent'
 * '<S17>'  : 'controller/driver_interface/potentiometerProcessing1/Interval Test Dynamic'
 * '<S18>'  : 'controller/driver_interface/potentiometerProcessing1/convertToPercent'
 * '<S19>'  : 'controller/driver_interface/potentiometerProcessing2/Interval Test Dynamic'
 * '<S20>'  : 'controller/driver_interface/potentiometerProcessing2/convertToPercent'
 * '<S21>'  : 'controller/driver_interface/potentiometerProcessing3/Interval Test Dynamic'
 * '<S22>'  : 'controller/driver_interface/potentiometerProcessing3/convertToPercent'
 * '<S23>'  : 'controller/governor/Chart'
 * '<S24>'  : 'controller/motor_interface/LEFT_MOTOR'
 * '<S25>'  : 'controller/motor_interface/RIGHT_MOTOR'
 * '<S26>'  : 'controller/vehicle_dynamics/RIGHT_LIMIT'
 * '<S27>'  : 'controller/vehicle_dynamics/TorqueVectoring'
 * '<S28>'  : 'controller/vehicle_dynamics/TractionControlSystem_LEFT'
 * '<S29>'  : 'controller/vehicle_dynamics/TractionControlSystem_RIGHT'
 * '<S30>'  : 'controller/vehicle_dynamics/VelocityEstimation'
 */
#endif                                 /* RTW_HEADER_controller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
