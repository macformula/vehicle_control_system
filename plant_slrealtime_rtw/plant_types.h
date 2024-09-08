/*
 * plant_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "plant".
 *
 * Model version              : 1.8
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Sun Sep  8 14:35:09 2024
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_plant_types_h_
#define RTW_HEADER_plant_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_KvYc8tvnxqOYogVP1wKuRB_
#define DEFINED_TYPEDEF_FOR_struct_KvYc8tvnxqOYogVP1wKuRB_

struct struct_KvYc8tvnxqOYogVP1wKuRB
{
  real_T AMK0_TargetVelocity;
  real_T AMK0_TorqueLimitNegativ;
  real_T AMK0_TorqueLimitPositiv;
  real_T AMK0_bDcOn;
  real_T AMK0_bEnable;
  real_T AMK0_bErrorReset;
  real_T AMK0_bInverterOn;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_z5LcTUXLvdvB5xWr7ze9lF_
#define DEFINED_TYPEDEF_FOR_struct_z5LcTUXLvdvB5xWr7ze9lF_

struct struct_z5LcTUXLvdvB5xWr7ze9lF
{
  real_T AMK1_TargetVelocity;
  real_T AMK1_TorqueLimitNegativ;
  real_T AMK1_TorqueLimitPositiv;
  real_T AMK1_bDcOn;
  real_T AMK1_bEnable;
  real_T AMK1_bErrorReset;
  real_T AMK1_bInverterOn;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_oLkX0Cc3azHvV4SXLEJRKF_
#define DEFINED_TYPEDEF_FOR_struct_oLkX0Cc3azHvV4SXLEJRKF_

struct struct_oLkX0Cc3azHvV4SXLEJRKF
{
  struct_KvYc8tvnxqOYogVP1wKuRB ptCAN_AMK0_Setpoints1_Left;
  struct_z5LcTUXLvdvB5xWr7ze9lF ptCAN_AMK1_Setpoints1_Right;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_nmdL1dQhphtiVwXIQLow6B_
#define DEFINED_TYPEDEF_FOR_struct_nmdL1dQhphtiVwXIQLow6B_

struct struct_nmdL1dQhphtiVwXIQLow6B
{
  real_T AIR_neg;
  real_T AIR_pos;
  real_T precharge;
};

#endif

#ifndef struct_g_dsp_internal_SlidingWindowA_T
#define struct_g_dsp_internal_SlidingWindowA_T

struct g_dsp_internal_SlidingWindowA_T
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pCumSum;
  real_T pCumSumRev[9];
  real_T pCumRevIndex;
  real_T pModValueRev;
};

#endif                              /* struct_g_dsp_internal_SlidingWindowA_T */

#ifndef struct_cell_wrap_plant_T
#define struct_cell_wrap_plant_T

struct cell_wrap_plant_T
{
  uint32_T f1[8];
};

#endif                                 /* struct_cell_wrap_plant_T */

#ifndef struct_dsp_simulink_MovingAverage_pl_T
#define struct_dsp_simulink_MovingAverage_pl_T

struct dsp_simulink_MovingAverage_pl_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_plant_T inputVarSize;
  g_dsp_internal_SlidingWindowA_T *pStatistic;
  int32_T NumChannels;
  int32_T FrameLength;
  g_dsp_internal_SlidingWindowA_T _pobj0;
};

#endif                              /* struct_dsp_simulink_MovingAverage_pl_T */

#ifndef struct_g_dsp_internal_SlidingWindo_j_T
#define struct_g_dsp_internal_SlidingWindo_j_T

struct g_dsp_internal_SlidingWindo_j_T
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pCumSum;
  real_T pCumSumRev[2];
  real_T pCumRevIndex;
  real_T pModValueRev;
};

#endif                              /* struct_g_dsp_internal_SlidingWindo_j_T */

#ifndef struct_dsp_simulink_MovingAverage_n_T
#define struct_dsp_simulink_MovingAverage_n_T

struct dsp_simulink_MovingAverage_n_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_plant_T inputVarSize;
  g_dsp_internal_SlidingWindo_j_T *pStatistic;
  int32_T NumChannels;
  int32_T FrameLength;
  g_dsp_internal_SlidingWindo_j_T _pobj0;
};

#endif                               /* struct_dsp_simulink_MovingAverage_n_T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_plant_T RT_MODEL_plant_T;

#endif                                 /* RTW_HEADER_plant_types_h_ */
