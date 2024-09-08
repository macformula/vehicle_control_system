/*
 * controls.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "controls".
 *
 * Model version              : 1.9
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Sun Sep  8 14:00:18 2024
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_controls_h_
#define RTW_HEADER_controls_h_
#include <math.h>
#include <logsrv.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "verify/verifyIntrf.h"
#include "controls_types.h"
#include "can_message.h"
#include <stddef.h>
#include <cstring>
#include "controls_cal.h"

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

/* Block states (default storage) for system '<S5>/If Action Subsystem' */
struct DW_IfActionSubsystem_controls_T {
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S5>/If Action Subsystem' */
};

/* Block signals for system '<S7>/mi_left' */
struct B_mi_left_controls_T {
  real_T MI_InverterEn;                /* '<S7>/mi_left' */
  real32_T AMK_TargetVelocity;         /* '<S7>/mi_left' */
  real32_T AMK_TorqueLimitPositiv;     /* '<S7>/mi_left' */
  real32_T AMK_TorqueLimitNegativ;     /* '<S7>/mi_left' */
  MI_STATUSES MI_motorStatus;          /* '<S7>/mi_left' */
  uint8_T AMK_bInverterOn_tx;          /* '<S7>/mi_left' */
  uint8_T AMK_bDcOn_tx;                /* '<S7>/mi_left' */
  uint8_T AMK_bEnable;                 /* '<S7>/mi_left' */
  uint8_T AMK_bErrorReset;             /* '<S7>/mi_left' */
};

/* Block states (default storage) for system '<S7>/mi_left' */
struct DW_mi_left_controls_T {
  int32_T sfEvent;                     /* '<S7>/mi_left' */
  uint32_T is_c9_motor_interface_lib;  /* '<S7>/mi_left' */
  uint32_T is_AMK_startup;             /* '<S7>/mi_left' */
  uint32_T is_AMK_errorReset;          /* '<S7>/mi_left' */
  uint16_T temporalCounter_i1;         /* '<S7>/mi_left' */
  uint8_T is_active_c9_motor_interface_li;/* '<S7>/mi_left' */
};

/* Block signals (default storage) */
struct B_controls_T {
  CAN_DATATYPE CANRead1_o2;            /* '<Root>/CAN Read 1' */
  CAN_DATATYPE CANPack;                /* '<Root>/CAN Pack' */
  CAN_DATATYPE CANRead_o2;             /* '<Root>/CAN Read ' */
  CAN_DATATYPE CANPack1;               /* '<Root>/CAN Pack1' */
  CAN_DATATYPE TmpSignalConversionAtCANWriteIn[2];
  CAN_DATATYPE AMK0_SetPoints1;        /* '<S2>/CAN Pack' */
  CAN_DATATYPE AMK1_SetPoints1;        /* '<S2>/CAN Pack1' */
  CAN_DATATYPE TmpSignalConversionAtCANWrite1I[2];/* '<Root>/AMK_Output' */
  real_T Constant1;                    /* '<Root>/Constant1' */
  real_T Constant13;                   /* '<Root>/Constant13' */
  real_T Constant14;                   /* '<Root>/Constant14' */
  real_T CANUnpack2_o1;                /* '<Root>/CAN Unpack2' */
  real_T CANUnpack2_o2;                /* '<Root>/CAN Unpack2' */
  real_T AMK_TorqueCurrent_L;          /* '<Root>/CAN Unpack2' */
  real_T AMK_bDcOn_L;                  /* '<Root>/CAN Unpack2' */
  real_T AMK_bDerating_L;              /* '<Root>/CAN Unpack2' */
  real_T CANUnpack2_o6;                /* '<Root>/CAN Unpack2' */
  real_T CANUnpack2_o7;                /* '<Root>/CAN Unpack2' */
  real_T AMK_bQuitDcOn_L;              /* '<Root>/CAN Unpack2' */
  real_T AMK_bQuitInverterOn_L;        /* '<Root>/CAN Unpack2' */
  real_T Subtract;                     /* '<S11>/Subtract' */
  real_T Abs;                          /* '<S11>/Abs' */
  real_T Switch;                       /* '<S11>/Switch' */
  real_T Max;                          /* '<S5>/Max' */
  real_T AccelPedalMap;                /* '<S5>/AccelPedalMap' */
  real_T Merge;                        /* '<S5>/Merge' */
  real_T Switch2;                      /* '<S5>/Switch2' */
  real_T BrakePedalMap;                /* '<S5>/BrakePedalMap' */
  real_T Switch_n;                     /* '<S8>/Switch' */
  real_T Product;                      /* '<S8>/Product' */
  real_T pedaltotorque;                /* '<S8>/%pedal to %torque' */
  real_T VectorConcatenate[11];        /* '<S28>/Vector Concatenate' */
  real_T SumofElements;                /* '<S28>/Sum of Elements' */
  real_T Divide;                       /* '<S28>/Divide' */
  real_T Switch1;                      /* '<S5>/Switch1' */
  real_T Constant6;                    /* '<S8>/Constant6' */
  real_T Divide_d;                     /* '<S29>/Divide' */
  real_T Actual_slip;                  /* '<S29>/Subtract' */
  real_T Setlowerboundto0;             /* '<S29>/Set lower bound to 0' */
  real_T DI_p_motorTorqueRequest;      /* '<S8>/vd_screenshot_check' */
  real_T Driven_wheel_spd;             /* '<S8>/return greater' */
  real_T TC_scale_factor;              /* '<S29>/vd_tc' */
  real_T BM_b_prechargeContactorCMD;   /* '<S4>/bm_control' */
  real_T BM_b_HVposContactorCMD;       /* '<S4>/bm_control' */
  real_T BM_b_HVnegContactorCMD;       /* '<S4>/bm_control' */
  real_T CANUnpack_o1;                 /* '<S3>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S3>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S3>/CAN Unpack' */
  real_T AMK_ActualVelocity_R;         /* '<S1>/CAN Unpack' */
  real_T AMK_MagnetizingCurrent_R;     /* '<S1>/CAN Unpack' */
  real_T AMK_TorqueCurrent_R;          /* '<S1>/CAN Unpack' */
  real_T AMK_bDcOn_R;                  /* '<S1>/CAN Unpack' */
  real_T AMK_bDerating_R;              /* '<S1>/CAN Unpack' */
  real_T AMK_bError_R;                 /* '<S1>/CAN Unpack' */
  real_T AMK_bInverterOn_R;            /* '<S1>/CAN Unpack' */
  real_T AMK_bQuitDcOn_R;              /* '<S1>/CAN Unpack' */
  real_T AMK_bQuitInverterOn_R;        /* '<S1>/CAN Unpack' */
  real_T AMK_bSystemReady_R;           /* '<S1>/CAN Unpack' */
  real_T AMK_bWarn_R;                  /* '<S1>/CAN Unpack' */
  real_T AMK_ErrorInfo_R;              /* '<S1>/CAN Unpack1' */
  real_T AMK_TempIGBT_R;               /* '<S1>/CAN Unpack1' */
  real_T AMK_TempInverter_R;           /* '<S1>/CAN Unpack1' */
  real_T AMK_TempMotor_R;              /* '<S1>/CAN Unpack1' */
  real_T AMK_ActualVelocity_L;         /* '<S1>/CAN Unpack2' */
  real_T AMK_MagnetizingCurrent_L;     /* '<S1>/CAN Unpack2' */
  real_T AMK_TorqueCurrent_L_k;        /* '<S1>/CAN Unpack2' */
  real_T AMK_bDcOn_L_p;                /* '<S1>/CAN Unpack2' */
  real_T AMK_bDerating_L_i;            /* '<S1>/CAN Unpack2' */
  real_T AMK_bError_L;                 /* '<S1>/CAN Unpack2' */
  real_T AMK_bInverterOn_L;            /* '<S1>/CAN Unpack2' */
  real_T AMK_bQuitDcOn_L_k;            /* '<S1>/CAN Unpack2' */
  real_T AMK_bQuitInverterOn_L_p;      /* '<S1>/CAN Unpack2' */
  real_T AMK_bSystemReady_L;           /* '<S1>/CAN Unpack2' */
  real_T AMK_bWarn_L;                  /* '<S1>/CAN Unpack2' */
  real_T AMK_ErrorInfo_L;              /* '<S1>/CAN Unpack3' */
  real_T AMK_TempIGBT_L;               /* '<S1>/CAN Unpack3' */
  real_T AMK_TempInverter_L;           /* '<S1>/CAN Unpack3' */
  real_T AMK_TempMotor_L;              /* '<S1>/CAN Unpack3' */
  real_T AMK_bReserve_R;               /* '<S1>/Constant' */
  real_T AMK_bReserve_L;               /* '<S1>/Constant1' */
  real32_T CastToSingle3;              /* '<S7>/Cast To Single3' */
  real32_T CastToSingle4;              /* '<S7>/Cast To Single4' */
  real32_T CastToSingle5;              /* '<S7>/Cast To Single5' */
  real32_T CastToSingle;               /* '<S7>/Cast To Single' */
  real32_T CastToSingle1;              /* '<S7>/Cast To Single1' */
  real32_T CastToSingle2;              /* '<S7>/Cast To Single2' */
  MI_STATUSES Delay1;                  /* '<S6>/Delay1' */
  MI_STATUSES Delay;                   /* '<S7>/Delay' */
  MI_STATUSES overallMotorState;       /* '<S7>/overallMotorState' */
  MI_STATUSES Switch_b;                /* '<S7>/Switch' */
  MI_CMD GOV_e_miCmd;                  /* '<S6>/governer_stateflow' */
  GOV_STATUSES GOV_e_govSts;           /* '<S6>/governer_stateflow' */
  DI_STATUSES Delay2;                  /* '<S6>/Delay2' */
  DI_STATUSES GOV_e_diSts;             /* '<S5>/driver_interface' */
  DI_CMD GOV_e_diCmd;                  /* '<S6>/governer_stateflow' */
  BM_STATUSES Delay_b;                 /* '<S6>/Delay' */
  BM_STATUSES GOV_e_bmSts;             /* '<S4>/battery_monitor' */
  BM_CMD GOV_e_bmCmd;                  /* '<S6>/governer_stateflow' */
  int16_T Idle_wheel_spd;              /* '<S8>/avg' */
  uint8_T CastToSingle_g;              /* '<Root>/Cast To Single' */
  uint8_T GOV_e_vdCmd;                 /* '<S6>/governer_stateflow' */
  boolean_T CANRead1_o1;               /* '<Root>/CAN Read 1' */
  boolean_T NOT;                       /* '<S4>/NOT' */
  boolean_T NOT1;                      /* '<S4>/NOT1' */
  boolean_T NOT2;                      /* '<S4>/NOT2' */
  boolean_T CANRead_o1;                /* '<Root>/CAN Read ' */
  boolean_T NOT_h;                     /* '<Root>/NOT' */
  boolean_T NOT1_e;                    /* '<S5>/NOT1' */
  boolean_T LowerTest;                 /* '<S20>/Lower Test' */
  boolean_T UpperTest;                 /* '<S20>/Upper Test' */
  boolean_T FixPtLogicalOperator;      /* '<S20>/FixPt Logical Operator' */
  boolean_T NOT_d;                     /* '<S15>/NOT' */
  boolean_T LowerTest_a;               /* '<S21>/Lower Test' */
  boolean_T UpperTest_l;               /* '<S21>/Upper Test' */
  boolean_T FixPtLogicalOperator_e;    /* '<S21>/FixPt Logical Operator' */
  boolean_T NOT_g;                     /* '<S16>/NOT' */
  boolean_T LowerTest_g;               /* '<S22>/Lower Test' */
  boolean_T UpperTest_i;               /* '<S22>/Upper Test' */
  boolean_T FixPtLogicalOperator_l;    /* '<S22>/FixPt Logical Operator' */
  boolean_T NOT_i;                     /* '<S17>/NOT' */
  boolean_T LowerTest_m;               /* '<S23>/Lower Test' */
  boolean_T UpperTest_e;               /* '<S23>/Upper Test' */
  boolean_T FixPtLogicalOperator_k;    /* '<S23>/FixPt Logical Operator' */
  boolean_T NOT_f;                     /* '<S18>/NOT' */
  boolean_T LowerTest_k;               /* '<S24>/Lower Test' */
  boolean_T UpperTest_g;               /* '<S24>/Upper Test' */
  boolean_T FixPtLogicalOperator_i;    /* '<S24>/FixPt Logical Operator' */
  boolean_T NOT_p;                     /* '<S19>/NOT' */
  boolean_T GreaterThan;               /* '<S11>/GreaterThan' */
  boolean_T b_DriverInterfaceError;    /* '<S5>/b_DriverInterfaceError' */
  boolean_T NOT_fr;                    /* '<S5>/NOT' */
  boolean_T OR1;                       /* '<S5>/OR1' */
  boolean_T OR;                        /* '<S5>/OR' */
  boolean_T AND;                       /* '<S7>/AND' */
  boolean_T Switch_m;                  /* '<S5>/Switch' */
  boolean_T GreaterThan_j;             /* '<S7>/GreaterThan' */
  boolean_T motorErrorActive;          /* '<S7>/motorErrorActive' */
  boolean_T motorErrorActive1;         /* '<S7>/motorErrorActive1' */
  boolean_T OR_j;                      /* '<S7>/OR' */
  boolean_T DI_b_driverSpeaker;        /* '<S5>/driver_interface' */
  boolean_T b_ReadyToDrive;            /* '<S5>/driver_interface' */
  B_mi_left_controls_T sf_mi_right;    /* '<S7>/mi_right' */
  B_mi_left_controls_T sf_mi_left;     /* '<S7>/mi_left' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_controls_T {
  real_T TappedDelay_X[10];            /* '<S28>/Tapped Delay' */
  void *CANRead1_PWORK;                /* '<Root>/CAN Read 1' */
  void *CANRead_PWORK;                 /* '<Root>/CAN Read ' */
  void *CANWrite_PWORK[2];             /* '<Root>/CAN Write ' */
  void *CANWrite1_PWORK[2];            /* '<Root>/CAN Write 1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_OR1_a;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_poten;   /* synthesized block */

  BM_STATUSES Delay_DSTATE;            /* '<S6>/Delay' */
  DI_STATUSES Delay2_DSTATE;           /* '<S6>/Delay2' */
  MI_STATUSES Delay1_DSTATE;           /* '<S6>/Delay1' */
  MI_STATUSES Delay_DSTATE_k;          /* '<S7>/Delay' */
  int32_T sfEvent;                     /* '<S8>/vd_screenshot_check' */
  int32_T sfEvent_d;                   /* '<S29>/vd_tc' */
  int32_T sfEvent_n;                   /* '<S6>/governer_stateflow' */
  int32_T sfEvent_dr;                  /* '<S5>/driver_interface' */
  int32_T sfEvent_j;                   /* '<S4>/bm_control' */
  int32_T sfEvent_i;                   /* '<S4>/battery_monitor' */
  uint32_T is_c3_simp_vd_lib;          /* '<S8>/vd_screenshot_check' */
  uint32_T is_c1_simp_vd_lib;          /* '<S29>/vd_tc' */
  uint32_T is_c8_governor_lib;         /* '<S6>/governer_stateflow' */
  uint32_T is_STARTUP;                 /* '<S6>/governer_stateflow' */
  uint32_T is_STARTUP_ERROR;           /* '<S6>/governer_stateflow' */
  uint32_T is_RUNNING_ERROR;           /* '<S6>/governer_stateflow' */
  uint32_T is_c2_driver_interface_lib; /* '<S5>/driver_interface' */
  uint32_T is_DI_running;              /* '<S5>/driver_interface' */
  uint32_T is_Ready_to_drive;          /* '<S5>/driver_interface' */
  uint32_T is_c5_battery_monitor_lib;  /* '<S4>/bm_control' */
  uint32_T is_StartupSuperstate;       /* '<S4>/bm_control' */
  uint32_T is_c4_battery_monitor_lib;  /* '<S4>/battery_monitor' */
  uint32_T is_StartupSuperstate_p;     /* '<S4>/battery_monitor' */
  int_T CANPack_ModeSignalID;          /* '<Root>/CAN Pack' */
  int_T CANUnpack2_ModeSignalID;       /* '<Root>/CAN Unpack2' */
  int_T CANUnpack2_StatusPortID;       /* '<Root>/CAN Unpack2' */
  int_T CANPack1_ModeSignalID;         /* '<Root>/CAN Pack1' */
  int_T CANPack_ModeSignalID_n;        /* '<S2>/CAN Pack' */
  int_T CANPack1_ModeSignalID_d;       /* '<S2>/CAN Pack1' */
  int_T CANUnpack_ModeSignalID;        /* '<S3>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S3>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_p;      /* '<S1>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_j;      /* '<S1>/CAN Unpack' */
  int_T CANUnpack1_ModeSignalID;       /* '<S1>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID;       /* '<S1>/CAN Unpack1' */
  int_T CANUnpack2_ModeSignalID_m;     /* '<S1>/CAN Unpack2' */
  int_T CANUnpack2_StatusPortID_i;     /* '<S1>/CAN Unpack2' */
  int_T CANUnpack3_ModeSignalID;       /* '<S1>/CAN Unpack3' */
  int_T CANUnpack3_StatusPortID;       /* '<S1>/CAN Unpack3' */
  uint16_T motorStartCount;            /* '<S6>/governer_stateflow' */
  uint16_T temporalCounter_i1;         /* '<S6>/governer_stateflow' */
  uint16_T temporalCounter_i1_m;       /* '<S5>/driver_interface' */
  uint16_T temporalCounter_i1_k;       /* '<S4>/bm_control' */
  uint16_T temporalCounter_i1_l;       /* '<S4>/battery_monitor' */
  uint8_T is_active_c3_simp_vd_lib;    /* '<S8>/vd_screenshot_check' */
  uint8_T is_active_c1_simp_vd_lib;    /* '<S29>/vd_tc' */
  uint8_T temporalCounter_i1_p;        /* '<S29>/vd_tc' */
  uint8_T is_active_c8_governor_lib;   /* '<S6>/governer_stateflow' */
  uint8_T is_active_c2_driver_interface_l;/* '<S5>/driver_interface' */
  uint8_T is_active_c5_battery_monitor_li;/* '<S4>/bm_control' */
  uint8_T is_active_c4_battery_monitor_li;/* '<S4>/battery_monitor' */
  DW_mi_left_controls_T sf_mi_right;   /* '<S7>/mi_right' */
  DW_mi_left_controls_T sf_mi_left;    /* '<S7>/mi_left' */
  DW_IfActionSubsystem_controls_T IfActionSubsystem1;/* '<S5>/If Action Subsystem1' */
  DW_IfActionSubsystem_controls_T IfActionSubsystem;/* '<S5>/If Action Subsystem' */
};

/* Invariant block signals (default storage) */
struct ConstB_controls_T {
  real_T Width;                        /* '<S28>/Width' */
};

/* External inputs (root inport signals with default storage) */
struct ExtU_controls_T {
  int8_T BM_LowThermValue;             /* '<Root>/BM_LowThermValue' */
  int8_T BM_HighThermValue;            /* '<Root>/BM_HighThermValue' */
  int8_T BM_AvgThermValue;             /* '<Root>/BM_AvgThermValue' */
  int16_T VD_LFWheelSpeed;             /* '<Root>/VD_LFWheelSpeed' */
  int16_T VD_RFWheelSpeed;             /* '<Root>/VD_RFWheelSpeed' */
};

/* Parameters (default storage) */
struct P_controls_T_ {
  real_T Setlowerboundto0_UpperSat;    /* Expression: inf
                                        * Referenced by: '<S29>/Set lower bound to 0'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_controls_T {
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
    SimStruct childSFunctions[5];
    SimStruct *childSFunctionPtrs[5];
    struct _ssBlkInfo2 blkInfo2[5];
    struct _ssSFcnModelMethods2 methods2[5];
    struct _ssSFcnModelMethods3 methods3[5];
    struct _ssSFcnModelMethods4 methods4[5];
    struct _ssStatesInfo2 statesInfo2[5];
    ssPeriodicStatesInfo periodicStatesInfo[5];
    struct _ssPortInfo2 inputOutputPortInfo2[5];
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

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_controls_T controls_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_controls_T controls_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_controls_T controls_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* External inputs (root inport signals with default storage) */
  extern struct ExtU_controls_T controls_U;

#ifdef __cplusplus

}

#endif

extern const ConstB_controls_T controls_ConstB;/* constant block i/o */

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void controls_initialize(void);
  extern void controls_step(void);
  extern void controls_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_controls_T *const controls_M;

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
 * '<Root>' : 'controls'
 * '<S1>'   : 'controls/AMK_Input'
 * '<S2>'   : 'controls/AMK_Output'
 * '<S3>'   : 'controls/Function-Call Subsystem2'
 * '<S4>'   : 'controls/battery_monitor'
 * '<S5>'   : 'controls/driver_interface'
 * '<S6>'   : 'controls/governor'
 * '<S7>'   : 'controls/motor_interface'
 * '<S8>'   : 'controls/simp_vd_interface'
 * '<S9>'   : 'controls/battery_monitor/battery_monitor'
 * '<S10>'  : 'controls/battery_monitor/bm_control'
 * '<S11>'  : 'controls/driver_interface/Accelerator plausibility check'
 * '<S12>'  : 'controls/driver_interface/If Action Subsystem'
 * '<S13>'  : 'controls/driver_interface/If Action Subsystem1'
 * '<S14>'  : 'controls/driver_interface/driver_interface'
 * '<S15>'  : 'controls/driver_interface/potentiometerProcessing'
 * '<S16>'  : 'controls/driver_interface/potentiometerProcessing1'
 * '<S17>'  : 'controls/driver_interface/potentiometerProcessing2'
 * '<S18>'  : 'controls/driver_interface/potentiometerProcessing3'
 * '<S19>'  : 'controls/driver_interface/potentiometerProcessing4'
 * '<S20>'  : 'controls/driver_interface/potentiometerProcessing/Interval Test Dynamic'
 * '<S21>'  : 'controls/driver_interface/potentiometerProcessing1/Interval Test Dynamic'
 * '<S22>'  : 'controls/driver_interface/potentiometerProcessing2/Interval Test Dynamic'
 * '<S23>'  : 'controls/driver_interface/potentiometerProcessing3/Interval Test Dynamic'
 * '<S24>'  : 'controls/driver_interface/potentiometerProcessing4/Interval Test Dynamic'
 * '<S25>'  : 'controls/governor/governer_stateflow'
 * '<S26>'  : 'controls/motor_interface/mi_left'
 * '<S27>'  : 'controls/motor_interface/mi_right'
 * '<S28>'  : 'controls/simp_vd_interface/Running Avg'
 * '<S29>'  : 'controls/simp_vd_interface/TC'
 * '<S30>'  : 'controls/simp_vd_interface/avg'
 * '<S31>'  : 'controls/simp_vd_interface/return greater'
 * '<S32>'  : 'controls/simp_vd_interface/vd_screenshot_check'
 * '<S33>'  : 'controls/simp_vd_interface/TC/vd_tc'
 */
#endif                                 /* RTW_HEADER_controls_h_ */
