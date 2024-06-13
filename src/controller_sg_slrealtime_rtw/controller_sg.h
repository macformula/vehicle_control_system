/*
 * controller_sg.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "controller_sg".
 *
 * Model version              : 1.131
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Wed Jun 12 23:56:49 2024
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_controller_sg_h_
#define RTW_HEADER_controller_sg_h_
#include <math.h>
#include <logsrv.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "verify/verifyIntrf.h"
#include "controller_sg_types.h"
#include "can_message.h"
#include <stddef.h>
#include <cstring>

extern "C"
{

#include "rtGetInf.h"

}

extern "C"
{

#include "rt_nonfinite.h"

}

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block states (default storage) for system '<S6>/If Action Subsystem' */
struct DW_IfActionSubsystem_controll_T {
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S6>/If Action Subsystem' */
};

/* Block signals for system '<S8>/mi_left' */
struct B_mi_left_controller_sg_T {
  real_T MI_InverterEn;                /* '<S8>/mi_left' */
  real32_T AMK_TargetVelocity;         /* '<S8>/mi_left' */
  real32_T AMK_TorqueLimitPositiv;     /* '<S8>/mi_left' */
  real32_T AMK_TorqueLimitNegativ;     /* '<S8>/mi_left' */
  MI_STATUSES MI_motorStatus;          /* '<S8>/mi_left' */
  uint8_T AMK_bInverterOn_tx;          /* '<S8>/mi_left' */
  uint8_T AMK_bDcOn_tx;                /* '<S8>/mi_left' */
  uint8_T AMK_bEnable;                 /* '<S8>/mi_left' */
  uint8_T AMK_bErrorReset;             /* '<S8>/mi_left' */
};

/* Block states (default storage) for system '<S8>/mi_left' */
struct DW_mi_left_controller_sg_T {
  int32_T sfEvent;                     /* '<S8>/mi_left' */
  uint32_T is_c9_motor_interface_lib;  /* '<S8>/mi_left' */
  uint32_T is_AMK_startup;             /* '<S8>/mi_left' */
  uint32_T is_AMK_errorReset;          /* '<S8>/mi_left' */
  uint16_T temporalCounter_i1;         /* '<S8>/mi_left' */
  uint8_T is_active_c9_motor_interface_li;/* '<S8>/mi_left' */
};

/* Block signals (default storage) */
struct B_controller_sg_T {
  CAN_DATATYPE CANRead_o2;             /* '<Root>/CAN Read ' */
  CAN_DATATYPE CANRead1_o2;            /* '<Root>/CAN Read 1' */
  CAN_DATATYPE AMK0_SetPoints1;        /* '<S1>/CAN Pack' */
  CAN_DATATYPE CANPack;                /* '<Root>/CAN Pack' */
  CAN_DATATYPE AMK1_SetPoints1;        /* '<S1>/CAN Pack1' */
  CAN_DATATYPE CANPack1;               /* '<Root>/CAN Pack1' */
  CAN_DATATYPE CANPack2;               /* '<Root>/CAN Pack2' */
  CAN_DATATYPE CANPack3;               /* '<Root>/CAN Pack3' */
  real_T Subtract;                     /* '<S12>/Subtract' */
  real_T Abs;                          /* '<S12>/Abs' */
  real_T Switch;                       /* '<S12>/Switch' */
  real_T Max;                          /* '<S6>/Max' */
  real_T AccelPedalMap;                /* '<S6>/AccelPedalMap' */
  real_T Merge;                        /* '<S6>/Merge' */
  real_T Switch2;                      /* '<S6>/Switch2' */
  real_T BrakePedalMap;                /* '<S6>/BrakePedalMap' */
  real_T Switch_c;                     /* '<S9>/Switch' */
  real_T Product;                      /* '<S9>/Product' */
  real_T pedaltotorque;                /* '<S9>/%pedal to %torque' */
  real_T VectorConcatenate[11];        /* '<S30>/Vector Concatenate' */
  real_T SumofElements;                /* '<S30>/Sum of Elements' */
  real_T Divide;                       /* '<S30>/Divide' */
  real_T Product2;                     /* '<S9>/Product2' */
  real_T Product1;                     /* '<S9>/Product1' */
  real_T DI_p_motorTorqueRequest;      /* '<S9>/Chart' */
  real_T BM_b_prechargeContactorCMD;   /* '<S5>/bm_control' */
  real_T BM_b_HVposContactorCMD;       /* '<S5>/bm_control' */
  real_T BM_b_HVnegContactorCMD;       /* '<S5>/bm_control' */
  real_T CANUnpack_o1;                 /* '<S4>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S4>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S4>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<S4>/CAN Unpack' */
  real_T CANUnpack_o5;                 /* '<S4>/CAN Unpack' */
  real_T CANUnpack_o6;                 /* '<S4>/CAN Unpack' */
  real_T CANUnpack_o7;                 /* '<S4>/CAN Unpack' */
  real_T CANUnpack_o8;                 /* '<S4>/CAN Unpack' */
  real_T CANUnpack_o9;                 /* '<S4>/CAN Unpack' */
  real_T AMK_ActualVelocity_R;         /* '<S3>/CAN Unpack' */
  real_T AMK_MagnetizingCurrent_R;     /* '<S3>/CAN Unpack' */
  real_T AMK_TorqueCurrent_R;          /* '<S3>/CAN Unpack' */
  real_T AMK_bDcOn_R;                  /* '<S3>/CAN Unpack' */
  real_T AMK_bDerating_R;              /* '<S3>/CAN Unpack' */
  real_T AMK_bError_R;                 /* '<S3>/CAN Unpack' */
  real_T AMK_bInverterOn_R;            /* '<S3>/CAN Unpack' */
  real_T AMK_bQuitDcOn_R;              /* '<S3>/CAN Unpack' */
  real_T AMK_bQuitInverterOn_R;        /* '<S3>/CAN Unpack' */
  real_T AMK_bSystemReady_R;           /* '<S3>/CAN Unpack' */
  real_T AMK_bWarn_R;                  /* '<S3>/CAN Unpack' */
  real_T AMK_ErrorInfo_R;              /* '<S3>/CAN Unpack1' */
  real_T AMK_TempIGBT_R;               /* '<S3>/CAN Unpack1' */
  real_T AMK_TempInverter_R;           /* '<S3>/CAN Unpack1' */
  real_T AMK_TempMotor_R;              /* '<S3>/CAN Unpack1' */
  real_T AMK_ActualVelocity_L;         /* '<S3>/CAN Unpack2' */
  real_T AMK_MagnetizingCurrent_L;     /* '<S3>/CAN Unpack2' */
  real_T AMK_TorqueCurrent_L;          /* '<S3>/CAN Unpack2' */
  real_T AMK_bDcOn_L;                  /* '<S3>/CAN Unpack2' */
  real_T AMK_bDerating_L;              /* '<S3>/CAN Unpack2' */
  real_T AMK_bError_L;                 /* '<S3>/CAN Unpack2' */
  real_T AMK_bInverterOn_L;            /* '<S3>/CAN Unpack2' */
  real_T AMK_bQuitDcOn_L;              /* '<S3>/CAN Unpack2' */
  real_T AMK_bQuitInverterOn_L;        /* '<S3>/CAN Unpack2' */
  real_T AMK_bSystemReady_L;           /* '<S3>/CAN Unpack2' */
  real_T AMK_bWarn_L;                  /* '<S3>/CAN Unpack2' */
  real_T AMK_ErrorInfo_L;              /* '<S3>/CAN Unpack3' */
  real_T AMK_TempIGBT_L;               /* '<S3>/CAN Unpack3' */
  real_T AMK_TempInverter_L;           /* '<S3>/CAN Unpack3' */
  real_T AMK_TempMotor_L;              /* '<S3>/CAN Unpack3' */
  real_T AMK_bReserve_R;               /* '<S3>/Constant' */
  real_T AMK_bReserve_L;               /* '<S3>/Constant1' */
  real_T CANUnpack_o1_a;               /* '<S2>/CAN Unpack' */
  real_T CANUnpack_o2_i;               /* '<S2>/CAN Unpack' */
  real_T CANUnpack_o3_j;               /* '<S2>/CAN Unpack' */
  real_T Constant;                     /* '<S2>/Constant' */
  real32_T CastToSingle1;              /* '<S8>/Cast To Single1' */
  real32_T CastToSingle4;              /* '<S8>/Cast To Single4' */
  real32_T CastToSingle3;              /* '<Root>/Cast To Single3' */
  real32_T CastToSingle2;              /* '<Root>/Cast To Single2' */
  real32_T CastToSingle;               /* '<Root>/Cast To Single' */
  real32_T CastToSingle1_m;            /* '<Root>/Cast To Single1' */
  real32_T CastToSingle_g;             /* '<S8>/Cast To Single' */
  real32_T CastToSingle2_d;            /* '<S8>/Cast To Single2' */
  real32_T CastToSingle3_j;            /* '<S8>/Cast To Single3' */
  real32_T CastToSingle5;              /* '<S8>/Cast To Single5' */
  MI_STATUSES Delay1;                  /* '<S7>/Delay1' */
  MI_STATUSES Delay;                   /* '<S8>/Delay' */
  MI_STATUSES overallMotorState;       /* '<S8>/overallMotorState' */
  MI_STATUSES Switch_e;                /* '<S8>/Switch' */
  MI_STATUSES Constant_g;              /* '<Root>/Constant' */
  MI_CMD GOV_e_miCmd;                  /* '<S7>/governer_stateflow' */
  GOV_STATUSES GOV_e_govSts;           /* '<S7>/governer_stateflow' */
  DI_STATUSES Delay2;                  /* '<S7>/Delay2' */
  DI_STATUSES GOV_e_diSts;             /* '<S6>/driver_interface' */
  DI_CMD GOV_e_diCmd;                  /* '<S7>/governer_stateflow' */
  BM_STATUSES Delay_e;                 /* '<S7>/Delay' */
  BM_STATUSES GOV_e_bmSts;             /* '<S5>/battery_monitor' */
  BM_CMD GOV_e_bmCmd;                  /* '<S7>/governer_stateflow' */
  uint8_T GOV_e_vdCmd;                 /* '<S7>/governer_stateflow' */
  boolean_T CANRead_o1;                /* '<Root>/CAN Read ' */
  boolean_T CANRead1_o1;               /* '<Root>/CAN Read 1' */
  boolean_T NOT1;                      /* '<S6>/NOT1' */
  boolean_T LowerTest;                 /* '<S21>/Lower Test' */
  boolean_T UpperTest;                 /* '<S21>/Upper Test' */
  boolean_T FixPtLogicalOperator;      /* '<S21>/FixPt Logical Operator' */
  boolean_T NOT;                       /* '<S16>/NOT' */
  boolean_T LowerTest_j;               /* '<S22>/Lower Test' */
  boolean_T UpperTest_a;               /* '<S22>/Upper Test' */
  boolean_T FixPtLogicalOperator_c;    /* '<S22>/FixPt Logical Operator' */
  boolean_T NOT_c;                     /* '<S17>/NOT' */
  boolean_T LowerTest_k;               /* '<S23>/Lower Test' */
  boolean_T UpperTest_n;               /* '<S23>/Upper Test' */
  boolean_T FixPtLogicalOperator_i;    /* '<S23>/FixPt Logical Operator' */
  boolean_T NOT_n;                     /* '<S18>/NOT' */
  boolean_T LowerTest_c;               /* '<S24>/Lower Test' */
  boolean_T UpperTest_k;               /* '<S24>/Upper Test' */
  boolean_T FixPtLogicalOperator_a;    /* '<S24>/FixPt Logical Operator' */
  boolean_T NOT_d;                     /* '<S19>/NOT' */
  boolean_T GreaterThan;               /* '<S12>/GreaterThan' */
  boolean_T b_DriverInterfaceError;    /* '<S6>/b_DriverInterfaceError' */
  boolean_T NOT_g;                     /* '<S6>/NOT' */
  boolean_T OR1;                       /* '<S6>/OR1' */
  boolean_T OR;                        /* '<S6>/OR' */
  boolean_T Switch_o;                  /* '<S6>/Switch' */
  boolean_T NOT_h;                     /* '<S5>/NOT' */
  boolean_T NOT1_h;                    /* '<S5>/NOT1' */
  boolean_T NOT2;                      /* '<S5>/NOT2' */
  boolean_T motorErrorActive;          /* '<S8>/motorErrorActive' */
  boolean_T motorErrorActive1;         /* '<S8>/motorErrorActive1' */
  boolean_T OR_f;                      /* '<S8>/OR' */
  boolean_T GreaterThan_j;             /* '<S8>/GreaterThan' */
  boolean_T AND;                       /* '<S8>/AND' */
  boolean_T DI_b_driverSpeaker;        /* '<S6>/driver_interface' */
  boolean_T b_ReadyToDrive;            /* '<S6>/driver_interface' */
  B_mi_left_controller_sg_T sf_mi_right;/* '<S8>/mi_right' */
  B_mi_left_controller_sg_T sf_mi_left;/* '<S8>/mi_left' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_controller_sg_T {
  real_T TappedDelay_X[10];            /* '<S30>/Tapped Delay' */
  void *CANRead_PWORK;                 /* '<Root>/CAN Read ' */
  void *CANRead1_PWORK;                /* '<Root>/CAN Read 1' */
  void *CANWrite_PWORK;                /* '<Root>/CAN Write ' */
  void *CANWrite1_PWORK;               /* '<Root>/CAN Write 1' */
  void *CANWrite2_PWORK;               /* '<Root>/CAN Write 2' */
  void *CANWrite3_PWORK;               /* '<Root>/CAN Write 3' */
  void *CANWrite4_PWORK;               /* '<Root>/CAN Write 4' */
  void *CANWrite5_PWORK;               /* '<Root>/CAN Write 5' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Merge;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_OR1_a;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_poten;   /* synthesized block */

  MI_STATUSES Delay1_DSTATE;           /* '<S7>/Delay1' */
  MI_STATUSES Delay_DSTATE;            /* '<S8>/Delay' */
  BM_STATUSES Delay_DSTATE_f;          /* '<S7>/Delay' */
  DI_STATUSES Delay2_DSTATE;           /* '<S7>/Delay2' */
  int32_T sfEvent;                     /* '<S9>/Chart' */
  int32_T sfEvent_m;                   /* '<S7>/governer_stateflow' */
  int32_T sfEvent_c;                   /* '<S6>/driver_interface' */
  int32_T sfEvent_o;                   /* '<S5>/bm_control' */
  int32_T sfEvent_c2;                  /* '<S5>/battery_monitor' */
  uint32_T is_c3_controller_sg;        /* '<S9>/Chart' */
  uint32_T is_c8_governor_lib;         /* '<S7>/governer_stateflow' */
  uint32_T is_STARTUP;                 /* '<S7>/governer_stateflow' */
  uint32_T is_STARTUP_ERROR;           /* '<S7>/governer_stateflow' */
  uint32_T is_RUNNING_ERROR;           /* '<S7>/governer_stateflow' */
  uint32_T is_c2_driver_interface_lib; /* '<S6>/driver_interface' */
  uint32_T is_DI_running;              /* '<S6>/driver_interface' */
  uint32_T is_Ready_to_drive;          /* '<S6>/driver_interface' */
  uint32_T is_c5_battery_monitor_lib;  /* '<S5>/bm_control' */
  uint32_T is_StartupSuperstate;       /* '<S5>/bm_control' */
  uint32_T is_c4_battery_monitor_lib;  /* '<S5>/battery_monitor' */
  uint32_T is_StartupSuperstate_a;     /* '<S5>/battery_monitor' */
  int_T CANPack_ModeSignalID;          /* '<S1>/CAN Pack' */
  int_T CANPack_ModeSignalID_m;        /* '<Root>/CAN Pack' */
  int_T CANPack1_ModeSignalID;         /* '<S1>/CAN Pack1' */
  int_T CANPack1_ModeSignalID_o;       /* '<Root>/CAN Pack1' */
  int_T CANPack2_ModeSignalID;         /* '<Root>/CAN Pack2' */
  int_T CANPack3_ModeSignalID;         /* '<Root>/CAN Pack3' */
  int_T CANUnpack_ModeSignalID;        /* '<S4>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S4>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_h;      /* '<S3>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_n;      /* '<S3>/CAN Unpack' */
  int_T CANUnpack1_ModeSignalID;       /* '<S3>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID;       /* '<S3>/CAN Unpack1' */
  int_T CANUnpack2_ModeSignalID;       /* '<S3>/CAN Unpack2' */
  int_T CANUnpack2_StatusPortID;       /* '<S3>/CAN Unpack2' */
  int_T CANUnpack3_ModeSignalID;       /* '<S3>/CAN Unpack3' */
  int_T CANUnpack3_StatusPortID;       /* '<S3>/CAN Unpack3' */
  int_T CANUnpack_ModeSignalID_hl;     /* '<S2>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_g;      /* '<S2>/CAN Unpack' */
  uint16_T motorStartCount;            /* '<S7>/governer_stateflow' */
  uint16_T temporalCounter_i1;         /* '<S7>/governer_stateflow' */
  uint16_T temporalCounter_i1_c;       /* '<S6>/driver_interface' */
  uint16_T temporalCounter_i1_i;       /* '<S5>/bm_control' */
  uint16_T temporalCounter_i1_m;       /* '<S5>/battery_monitor' */
  uint8_T is_active_c3_controller_sg;  /* '<S9>/Chart' */
  uint8_T is_active_c8_governor_lib;   /* '<S7>/governer_stateflow' */
  uint8_T is_active_c2_driver_interface_l;/* '<S6>/driver_interface' */
  uint8_T is_active_c5_battery_monitor_li;/* '<S5>/bm_control' */
  uint8_T is_active_c4_battery_monitor_li;/* '<S5>/battery_monitor' */
  DW_mi_left_controller_sg_T sf_mi_right;/* '<S8>/mi_right' */
  DW_mi_left_controller_sg_T sf_mi_left;/* '<S8>/mi_left' */
  DW_IfActionSubsystem_controll_T IfActionSubsystem1;/* '<S6>/If Action Subsystem1' */
  DW_IfActionSubsystem_controll_T IfActionSubsystem;/* '<S6>/If Action Subsystem' */
};

/* Invariant block signals (default storage) */
struct ConstB_controller_sg_T {
  real_T Switch1;                      /* '<S6>/Switch1' */
  real_T Width;                        /* '<S30>/Width' */
  boolean_T LowerTest;                 /* '<S25>/Lower Test' */
  boolean_T UpperTest;                 /* '<S25>/Upper Test' */
  boolean_T FixPtLogicalOperator;      /* '<S25>/FixPt Logical Operator' */
  boolean_T NOT;                       /* '<S20>/NOT' */
};

/* Constant parameters (default storage) */
struct ConstP_controller_sg_T {
  /* Computed Parameter: CANandLINSetup_P1_Size
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  real_T CANandLINSetup_P1_Size[2];

  /* Expression: [moduleInitValues, canChn1InitValues, canChn2InitValues, canChn3InitValues, canChn4InitValues, linChn1InitValues, linChn2InitValues]
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  real_T CANandLINSetup_P1[45];

  /* Pooled Parameter (Expression: )
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  real_T CANandLINSetup_P2_Size[2];

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  real_T pooled4;

  /* Computed Parameter: CANRead_P1_Size
   * Referenced by: '<Root>/CAN Read '
   */
  real_T CANRead_P1_Size[2];

  /* Expression: initValues
   * Referenced by: '<Root>/CAN Read '
   */
  real_T CANRead_P1[13];

  /* Computed Parameter: CANRead1_P1_Size
   * Referenced by: '<Root>/CAN Read 1'
   */
  real_T CANRead1_P1_Size[2];

  /* Expression: initValues
   * Referenced by: '<Root>/CAN Read 1'
   */
  real_T CANRead1_P1[13];

  /* Pooled Parameter (Expression: [0 1])
   * Referenced by: '<S6>/AccelPedalMap'
   */
  real_T pooled5[2];

  /* Pooled Parameter (Expression: [0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100])
   * Referenced by: '<S6>/BrakePedalMap'
   */
  real_T pooled6[21];

  /* Expression: [linspace(0,600,101)]
   * Referenced by: '<S9>/%pedal to %torque'
   */
  real_T pedaltotorque_tableData[101];

  /* Expression: [linspace(0,1,101)]
   * Referenced by: '<S9>/%pedal to %torque'
   */
  real_T pedaltotorque_bp01Data[101];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<Root>/CAN Write '
   *   '<Root>/CAN Write 2'
   */
  real_T CANWrite_P1_Size[2];

  /* Pooled Parameter (Expression: initValues)
   * Referenced by:
   *   '<Root>/CAN Write '
   *   '<Root>/CAN Write 2'
   */
  real_T pooled8[10];

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<Root>/CAN Write 1'
   *   '<Root>/CAN Write 3'
   *   '<Root>/CAN Write 4'
   *   '<Root>/CAN Write 5'
   */
  real_T CANWrite1_P1_Size[2];

  /* Pooled Parameter (Expression: initValues)
   * Referenced by:
   *   '<Root>/CAN Write 1'
   *   '<Root>/CAN Write 3'
   *   '<Root>/CAN Write 4'
   *   '<Root>/CAN Write 5'
   */
  real_T pooled9[10];
};

/* Real-time Model Data Structure */
struct tag_RTM_controller_sg_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[1];
    SimStruct childSFunctions[9];
    SimStruct *childSFunctionPtrs[9];
    struct _ssBlkInfo2 blkInfo2[9];
    struct _ssSFcnModelMethods2 methods2[9];
    struct _ssSFcnModelMethods3 methods3[9];
    struct _ssSFcnModelMethods4 methods4[9];
    struct _ssStatesInfo2 statesInfo2[9];
    ssPeriodicStatesInfo periodicStatesInfo[9];
    struct _ssPortInfo2 inputOutputPortInfo2[9];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[3];
      mxArray *params[3];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

extern CAN_DATATYPE CAN_DATATYPE_GROUND;

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_controller_sg_T controller_sg_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_controller_sg_T controller_sg_DW;
extern const ConstB_controller_sg_T controller_sg_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_controller_sg_T controller_sg_ConstP;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void controller_sg_initialize(void);
  extern void controller_sg_step(void);
  extern void controller_sg_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_controller_sg_T *const controller_sg_M;

#ifdef __cplusplus

}

#endif

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
 * '<Root>' : 'controller_sg'
 * '<S1>'   : 'controller_sg/AMK_Output'
 * '<S2>'   : 'controller_sg/Function-Call Subsystem'
 * '<S3>'   : 'controller_sg/Function-Call Subsystem1'
 * '<S4>'   : 'controller_sg/Function-Call Subsystem2'
 * '<S5>'   : 'controller_sg/battery_monitor'
 * '<S6>'   : 'controller_sg/driver_interface'
 * '<S7>'   : 'controller_sg/governor'
 * '<S8>'   : 'controller_sg/motor_interface'
 * '<S9>'   : 'controller_sg/simp_vd_interface'
 * '<S10>'  : 'controller_sg/battery_monitor/battery_monitor'
 * '<S11>'  : 'controller_sg/battery_monitor/bm_control'
 * '<S12>'  : 'controller_sg/driver_interface/Accelerator plausibility check'
 * '<S13>'  : 'controller_sg/driver_interface/If Action Subsystem'
 * '<S14>'  : 'controller_sg/driver_interface/If Action Subsystem1'
 * '<S15>'  : 'controller_sg/driver_interface/driver_interface'
 * '<S16>'  : 'controller_sg/driver_interface/potentiometerProcessing'
 * '<S17>'  : 'controller_sg/driver_interface/potentiometerProcessing1'
 * '<S18>'  : 'controller_sg/driver_interface/potentiometerProcessing2'
 * '<S19>'  : 'controller_sg/driver_interface/potentiometerProcessing3'
 * '<S20>'  : 'controller_sg/driver_interface/potentiometerProcessing4'
 * '<S21>'  : 'controller_sg/driver_interface/potentiometerProcessing/Interval Test Dynamic'
 * '<S22>'  : 'controller_sg/driver_interface/potentiometerProcessing1/Interval Test Dynamic'
 * '<S23>'  : 'controller_sg/driver_interface/potentiometerProcessing2/Interval Test Dynamic'
 * '<S24>'  : 'controller_sg/driver_interface/potentiometerProcessing3/Interval Test Dynamic'
 * '<S25>'  : 'controller_sg/driver_interface/potentiometerProcessing4/Interval Test Dynamic'
 * '<S26>'  : 'controller_sg/governor/governer_stateflow'
 * '<S27>'  : 'controller_sg/motor_interface/mi_left'
 * '<S28>'  : 'controller_sg/motor_interface/mi_right'
 * '<S29>'  : 'controller_sg/simp_vd_interface/Chart'
 * '<S30>'  : 'controller_sg/simp_vd_interface/Running Avg'
 */
#endif                                 /* RTW_HEADER_controller_sg_h_ */
