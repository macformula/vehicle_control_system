/*
 * controls_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "controls".
 *
 * Model version              : 1.14
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Sun Sep  8 14:34:19 2024
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_controls_private_h_
#define RTW_HEADER_controls_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "controls.h"
#include "controls_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern real_T rt_roundd_snf(real_T u);
extern void* slrtRegisterSignalToLoggingService(uintptr_t sigAddr);
extern real_T look1_binlcpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern "C" void sg_CANLIN_OfA2_setup_s(SimStruct *rts);
extern "C" void sg_CAN_OfA2_read_s(SimStruct *rts);
extern "C" void sg_CAN_OfA2_write_s(SimStruct *rts);
extern void controls_IfActionSubsystem(real_T rtu_In1, real_T *rty_Out1);
extern void controls_mi_left_Init(B_mi_left_controls_T *localB,
  DW_mi_left_controls_T *localDW);
extern void controls_mi_left(MI_CMD rtu_GOV_e_miCmd, real_T rtu_AMK_bDcOn_rx,
  real_T rtu_AMK_bError, real_T rtu_AMK_bInverterOn_rx, real_T rtu_AMK_bQuitDcOn,
  real_T rtu_AMK_bQuitInverterOn, real_T rtu_AMK_bSystemReady, real32_T
  rtu_VD_T_motorSpeedRequest, real32_T rtu_VD_T_motorTorqueLimitPositi, real32_T
  rtu_VD_T_motorTorqueLimitNegati, B_mi_left_controls_T *localB,
  DW_mi_left_controls_T *localDW);

#endif                                 /* RTW_HEADER_controls_private_h_ */
