/*
 * plant_private.h
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

#ifndef RTW_HEADER_plant_private_h_
#define RTW_HEADER_plant_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "plant.h"
#include "plant_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern void* slrtRegisterSignalToLoggingService(uintptr_t sigAddr);
extern "C" void sg_CANLIN_OfA2_setup_s(SimStruct *rts);
extern "C" void sg_CAN_OfA2_read_s(SimStruct *rts);
extern "C" void sg_CAN_OfA2_write_s(SimStruct *rts);
extern void plant_Chart_Init(B_Chart_plant_T *localB, DW_Chart_plant_T *localDW);
extern void plant_Chart(real_T rtu_aAMK_bInverterOn_, real_T rtu_aAMK_bDcOn_,
  real_T rtu_aAMK_bEnable_, real_T rtu_aAMK_TargetVelocity_, real_T
  rtu_aAMK_TorqueLimitPositiv_, real_T rtu_aAMK_TorqueLimitNegativ_, real_T
  rtu_inverter_en, real_T rtu_hvil_sts, B_Chart_plant_T *localB,
  DW_Chart_plant_T *localDW);
extern void plant_MovingAverage_Init(DW_MovingAverage_plant_T *localDW);
extern void plant_MovingAverage(real_T rtu_0, B_MovingAverage_plant_T *localB,
  DW_MovingAverage_plant_T *localDW);
extern void plant_MovingAverage1_Init(DW_MovingAverage1_plant_T *localDW);
extern void plant_MovingAverage1(real_T rtu_0, B_MovingAverage1_plant_T *localB,
  DW_MovingAverage1_plant_T *localDW);
extern void pla_FunctionCallSubsystem1_Init(void);
extern void plan_FunctionCallSubsystem_Init(void);
extern void plant_MovingAverage_Term(DW_MovingAverage_plant_T *localDW);
extern void plant_MovingAverage1_Term(DW_MovingAverage1_plant_T *localDW);

#endif                                 /* RTW_HEADER_plant_private_h_ */
