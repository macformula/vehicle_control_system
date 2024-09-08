/*
 * plant.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "plant".
 *
 * Model version              : 1.5
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Sun Sep  8 14:07:18 2024
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_plant_h_
#define RTW_HEADER_plant_h_
#include <logsrv.h>
#include <math.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "verify/verifyIntrf.h"
#include "plant_types.h"
#include "can_message.h"
#include <stddef.h>
#include <cstring>
#include "plant_cal.h"

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

/* Block signals for system '<S1>/Chart' */
struct B_Chart_plant_T {
  int32_T AMK_ErrorInfo;               /* '<S1>/Chart' */
  uint8_T AMK_bReserve;                /* '<S1>/Chart' */
  uint8_T AMK_bSystemReady;            /* '<S1>/Chart' */
  uint8_T AMK_bError;                  /* '<S1>/Chart' */
  uint8_T AMK_bWarn;                   /* '<S1>/Chart' */
  uint8_T AMK_bQuitDcOn;               /* '<S1>/Chart' */
  uint8_T AMK_bDcOn;                   /* '<S1>/Chart' */
  uint8_T AMK_bQuitInverterOn;         /* '<S1>/Chart' */
  uint8_T AMK_bInverterOn;             /* '<S1>/Chart' */
  uint8_T AMK_bDerating;               /* '<S1>/Chart' */
  boolean_T Motor_running;             /* '<S1>/Chart' */
};

/* Block states (default storage) for system '<S1>/Chart' */
struct DW_Chart_plant_T {
  int32_T sfEvent;                     /* '<S1>/Chart' */
  uint32_T is_c3_AMK_comms_plant_lib;  /* '<S1>/Chart' */
  uint32_T is_LV_ON;                   /* '<S1>/Chart' */
  uint16_T temporalCounter_i1;         /* '<S1>/Chart' */
  uint8_T is_active_c3_AMK_comms_plant_li;/* '<S1>/Chart' */
};

/* Block signals for system '<S10>/Moving Average' */
struct B_MovingAverage_plant_T {
  real_T Mot_spd_actual;               /* '<S10>/Moving Average' */
};

/* Block states (default storage) for system '<S10>/Moving Average' */
struct DW_MovingAverage_plant_T {
  dsp_simulink_MovingAverage_pl_T obj; /* '<S10>/Moving Average' */
  boolean_T objisempty;                /* '<S10>/Moving Average' */
};

/* Block signals for system '<S10>/Moving Average1' */
struct B_MovingAverage1_plant_T {
  real_T MovingAverage1;               /* '<S10>/Moving Average1' */
};

/* Block states (default storage) for system '<S10>/Moving Average1' */
struct DW_MovingAverage1_plant_T {
  dsp_simulink_MovingAverage_n_T obj;  /* '<S10>/Moving Average1' */
  boolean_T objisempty;                /* '<S10>/Moving Average1' */
};

/* Block signals (default storage) */
struct B_plant_T {
  CAN_DATATYPE CANRead1_o2;            /* '<Root>/CAN Read 1' */
  CAN_DATATYPE AMK0_ActualValues1;     /* '<S6>/CAN Pack' */
  CAN_DATATYPE AMK0_ActualValues2;     /* '<S6>/CAN Pack1' */
  CAN_DATATYPE AMK1_ActualValues1;     /* '<S6>/CAN Pack2' */
  CAN_DATATYPE AMK1_ActualValues2;     /* '<S6>/CAN Pack3' */
  CAN_DATATYPE TmpSignalConversionAtCANWriteIn[4];/* '<Root>/Subsystem' */
  CAN_DATATYPE CANPack;                /* '<S7>/CAN Pack' */
  CAN_DATATYPE CANRead_o2;             /* '<Root>/CAN Read ' */
  real_T CANUnpack;                    /* '<Root>/CAN Unpack' */
  real_T Constant;                     /* '<Root>/Constant' */
  real_T spd_err;                      /* '<S10>/Subtract' */
  real_T Max;                          /* '<S10>/Max' */
  real_T percent_err;                  /* '<S10>/Divide1' */
  real_T Switch2;                      /* '<S10>/Switch2' */
  real_T percent_err_e;                /* '<S10>/Divide3' */
  real_T Switch;                       /* '<S12>/Switch' */
  real_T Switch2_m;                    /* '<S12>/Switch2' */
  real_T spd_err_l;                    /* '<S11>/Subtract' */
  real_T Max_g;                        /* '<S11>/Max' */
  real_T percent_err_g;                /* '<S11>/Divide1' */
  real_T Switch2_i;                    /* '<S11>/Switch2' */
  real_T percent_err_m;                /* '<S11>/Divide3' */
  real_T Switch_h;                     /* '<S13>/Switch' */
  real_T Switch2_d;                    /* '<S13>/Switch2' */
  real_T AMK0_TargetVelocity;          /* '<S4>/CAN Unpack' */
  real_T AMK0_TorqueLimitNegativ;      /* '<S4>/CAN Unpack' */
  real_T AMK0_TorqueLimitPositiv;      /* '<S4>/CAN Unpack' */
  real_T AMK0_bDcOn;                   /* '<S4>/CAN Unpack' */
  real_T AMK0_bEnable;                 /* '<S4>/CAN Unpack' */
  real_T AMK0_bErrorReset;             /* '<S4>/CAN Unpack' */
  real_T AMK0_bInverterOn;             /* '<S4>/CAN Unpack' */
  real_T AMK1_TargetVelocity;          /* '<S4>/CAN Unpack1' */
  real_T AMK1_TorqueLimitNegativ;      /* '<S4>/CAN Unpack1' */
  real_T AMK1_TorqueLimitPositiv;      /* '<S4>/CAN Unpack1' */
  real_T AMK1_bDcOn;                   /* '<S4>/CAN Unpack1' */
  real_T AMK1_bEnable;                 /* '<S4>/CAN Unpack1' */
  real_T AMK1_bErrorReset;             /* '<S4>/CAN Unpack1' */
  real_T AMK1_bInverterOn;             /* '<S4>/CAN Unpack1' */
  real_T AIR_neg;                      /* '<S5>/CAN Unpack' */
  real_T AIR_pos;                      /* '<S5>/CAN Unpack' */
  real_T precharge;                    /* '<S5>/CAN Unpack' */
  real_T Delay;                        /* '<S14>/Delay' */
  real_T Delay1;                       /* '<S14>/Delay1' */
  real_T Delay2;                       /* '<S14>/Delay2' */
  real32_T mot_speed;                  /* '<S10>/Switch' */
  real32_T mot_speed_o;                /* '<S11>/Switch' */
  real32_T mot_torq;                   /* '<S10>/Switch1' */
  real32_T mot_torq_l;                 /* '<S11>/Switch1' */
  boolean_T CANRead1_o1;               /* '<Root>/CAN Read 1' */
  boolean_T NOT2;                      /* '<S2>/NOT2' */
  boolean_T NOT;                       /* '<S2>/NOT' */
  boolean_T NOT1;                      /* '<S2>/NOT1' */
  boolean_T LowerRelop1;               /* '<S12>/LowerRelop1' */
  boolean_T UpperRelop;                /* '<S12>/UpperRelop' */
  boolean_T LowerRelop1_k;             /* '<S13>/LowerRelop1' */
  boolean_T UpperRelop_b;              /* '<S13>/UpperRelop' */
  boolean_T CANRead_o1;                /* '<Root>/CAN Read ' */
  B_MovingAverage1_plant_T MovingAverage1_b;/* '<S10>/Moving Average1' */
  B_MovingAverage_plant_T MovingAverage_b;/* '<S10>/Moving Average' */
  B_MovingAverage1_plant_T MovingAverage1;/* '<S10>/Moving Average1' */
  B_MovingAverage_plant_T MovingAverage;/* '<S10>/Moving Average' */
  B_Chart_plant_T sf_Chart1;           /* '<S1>/Chart1' */
  B_Chart_plant_T sf_Chart;            /* '<S1>/Chart' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_plant_T {
  real_T Delay_DSTATE;                 /* '<S14>/Delay' */
  real_T Delay1_DSTATE;                /* '<S14>/Delay1' */
  real_T Delay2_DSTATE;                /* '<S14>/Delay2' */
  void *CANRead1_PWORK;                /* '<Root>/CAN Read 1' */
  void *CANWrite_PWORK[4];             /* '<Root>/CAN Write ' */
  void *CANWrite1_PWORK;               /* '<Root>/CAN Write 1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsy;   /* synthesized block */

  void *CANRead_PWORK;                 /* '<Root>/CAN Read ' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_AIR_H;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_prech;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_AIR_a;   /* synthesized block */

  int_T CANUnpack_ModeSignalID;        /* '<Root>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<Root>/CAN Unpack' */
  int_T CANPack_ModeSignalID;          /* '<S6>/CAN Pack' */
  int_T CANPack1_ModeSignalID;         /* '<S6>/CAN Pack1' */
  int_T CANPack2_ModeSignalID;         /* '<S6>/CAN Pack2' */
  int_T CANPack3_ModeSignalID;         /* '<S6>/CAN Pack3' */
  int_T CANPack_ModeSignalID_d;        /* '<S7>/CAN Pack' */
  int_T CANUnpack_ModeSignalID_j;      /* '<S4>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_o;      /* '<S4>/CAN Unpack' */
  int_T CANUnpack1_ModeSignalID;       /* '<S4>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID;       /* '<S4>/CAN Unpack1' */
  int_T CANUnpack_ModeSignalID_b;      /* '<S5>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_i;      /* '<S5>/CAN Unpack' */
  int8_T FunctionCallSubsystem_SubsysRan;/* '<Root>/Function-Call Subsystem' */
  int8_T FunctionCallSubsystem1_SubsysRa;/* '<Root>/Function-Call Subsystem1' */
  DW_MovingAverage1_plant_T MovingAverage1_b;/* '<S10>/Moving Average1' */
  DW_MovingAverage_plant_T MovingAverage_b;/* '<S10>/Moving Average' */
  DW_MovingAverage1_plant_T MovingAverage1;/* '<S10>/Moving Average1' */
  DW_MovingAverage_plant_T MovingAverage;/* '<S10>/Moving Average' */
  DW_Chart_plant_T sf_Chart1;          /* '<S1>/Chart1' */
  DW_Chart_plant_T sf_Chart;           /* '<S1>/Chart' */
};

/* Real-time Model Data Structure */
struct tag_RTM_plant_T {
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
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
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
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
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

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_plant_T plant_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_plant_T plant_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void plant_initialize(void);
  extern void plant_step(void);
  extern void plant_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_plant_T *const plant_M;

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
 * '<Root>' : 'plant'
 * '<S1>'   : 'plant/AMK_COMMS_PLANT'
 * '<S2>'   : 'plant/BMS_PLANT'
 * '<S3>'   : 'plant/Dashboard'
 * '<S4>'   : 'plant/Function-Call Subsystem'
 * '<S5>'   : 'plant/Function-Call Subsystem1'
 * '<S6>'   : 'plant/Subsystem'
 * '<S7>'   : 'plant/Subsystem1'
 * '<S8>'   : 'plant/AMK_COMMS_PLANT/Chart'
 * '<S9>'   : 'plant/AMK_COMMS_PLANT/Chart1'
 * '<S10>'  : 'plant/AMK_COMMS_PLANT/Subsystem'
 * '<S11>'  : 'plant/AMK_COMMS_PLANT/Subsystem1'
 * '<S12>'  : 'plant/AMK_COMMS_PLANT/Subsystem/Saturation Dynamic'
 * '<S13>'  : 'plant/AMK_COMMS_PLANT/Subsystem1/Saturation Dynamic'
 * '<S14>'  : 'plant/BMS_PLANT/Triggered Subsystem1'
 */
#endif                                 /* RTW_HEADER_plant_h_ */
