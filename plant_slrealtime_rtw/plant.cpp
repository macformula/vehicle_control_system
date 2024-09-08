/*
 * plant.cpp
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

#include "plant.h"
#include "rtwtypes.h"
#include "plant_types.h"
#include "plant_private.h"
#include <cmath>
#include "plant_cal.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include <cstring>

/* Named constants for Chart: '<S1>/Chart' */
const int32_T plant_CALL_EVENT = -1;
const uint32_T plant_IN_AMK_idle = 1U;
const uint32_T plant_IN_Enable_Quit_Dc_On = 1U;
const uint32_T plant_IN_Enable_System_Ready = 2U;
const uint32_T plant_IN_Inventer_On = 3U;
const uint32_T plant_IN_Inverter = 4U;
const uint32_T plant_IN_Inverter_Stuff2 = 5U;
const uint32_T plant_IN_LV_ON = 2U;
const uint32_T plant_IN_Motor_running = 6U;
const uint8_T plant_IN_NO_ACTIVE_CHILD = 0U;
const uint32_T plant_IN_Quit_Inventer_On = 7U;
const uint32_T plant_IN_Shut_off_start = 8U;
const uint32_T plant_IN_bDcOff = 9U;
const uint32_T plant_IN_bEnable_off = 10U;
const uint32_T plant_IN_bInverter_off = 11U;
const uint32_T plant_IN_bQuitDcOff = 12U;

/* Block signals (default storage) */
B_plant_T plant_B;

/* Block states (default storage) */
DW_plant_T plant_DW;

/* Real-time model */
RT_MODEL_plant_T plant_M_ = RT_MODEL_plant_T();
RT_MODEL_plant_T *const plant_M = &plant_M_;

/* Forward declaration for local functions */
static void plant_SystemCore_setup(dsp_simulink_MovingAverage_pl_T *obj);

/* Forward declaration for local functions */
static void plant_SystemCore_setup_m(dsp_simulink_MovingAverage_n_T *obj);

/*
 * System initialize for atomic system:
 *    '<S1>/Chart'
 *    '<S1>/Chart1'
 */
void plant_Chart_Init(B_Chart_plant_T *localB, DW_Chart_plant_T *localDW)
{
  localDW->sfEvent = plant_CALL_EVENT;
  localDW->is_LV_ON = plant_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c3_AMK_comms_plant_li = 0U;
  localDW->is_c3_AMK_comms_plant_lib = plant_IN_NO_ACTIVE_CHILD;
  localB->AMK_bReserve = 0U;
  localB->AMK_bSystemReady = 0U;
  localB->AMK_bError = 0U;
  localB->AMK_bWarn = 0U;
  localB->AMK_bQuitDcOn = 0U;
  localB->AMK_bDcOn = 0U;
  localB->AMK_bQuitInverterOn = 0U;
  localB->AMK_bInverterOn = 0U;
  localB->AMK_bDerating = 0U;
  localB->AMK_ErrorInfo = 0;
  localB->Motor_running = false;
}

/*
 * Output and update for atomic system:
 *    '<S1>/Chart'
 *    '<S1>/Chart1'
 */
void plant_Chart(real_T rtu_aAMK_bInverterOn_, real_T rtu_aAMK_bDcOn_, real_T
                 rtu_aAMK_bEnable_, real_T rtu_aAMK_TargetVelocity_, real_T
                 rtu_aAMK_TorqueLimitPositiv_, real_T
                 rtu_aAMK_TorqueLimitNegativ_, real_T rtu_inverter_en, real_T
                 rtu_hvil_sts, B_Chart_plant_T *localB, DW_Chart_plant_T
                 *localDW)
{
  if (localDW->temporalCounter_i1 < 1023U) {
    localDW->temporalCounter_i1 = static_cast<uint16_T>
      (localDW->temporalCounter_i1 + 1U);
  }

  localDW->sfEvent = plant_CALL_EVENT;

  /* Chart: '<S1>/Chart' */
  if (localDW->is_active_c3_AMK_comms_plant_li == 0U) {
    localDW->is_active_c3_AMK_comms_plant_li = 1U;
    localDW->is_c3_AMK_comms_plant_lib = plant_IN_AMK_idle;
    localDW->temporalCounter_i1 = 0U;
    localB->AMK_bReserve = 0U;
    localB->AMK_bSystemReady = 0U;
    localB->AMK_bError = 0U;
    localB->AMK_bWarn = 0U;
    localB->AMK_bQuitDcOn = 0U;
    localB->AMK_bDcOn = 0U;
    localB->AMK_bQuitInverterOn = 0U;
    localB->AMK_bInverterOn = 0U;
    localB->AMK_ErrorInfo = 0;
    localB->AMK_bDerating = 0U;
    localB->Motor_running = false;
  } else if (localDW->is_c3_AMK_comms_plant_lib == plant_IN_AMK_idle) {
    localB->AMK_bReserve = 0U;
    localB->AMK_bSystemReady = 0U;
    localB->AMK_bError = 0U;
    localB->AMK_bWarn = 0U;
    localB->AMK_bQuitDcOn = 0U;
    localB->AMK_bDcOn = 0U;
    localB->AMK_bQuitInverterOn = 0U;
    localB->AMK_bInverterOn = 0U;
    localB->AMK_ErrorInfo = 0;
    localB->AMK_bDerating = 0U;
    if (localDW->temporalCounter_i1 >= 1000U) {
      localDW->is_c3_AMK_comms_plant_lib = plant_IN_LV_ON;
      localDW->is_LV_ON = plant_IN_Enable_System_Ready;
      localDW->temporalCounter_i1 = 0U;
      localB->AMK_bSystemReady = 1U;
    }
  } else {
    /* case IN_LV_ON: */
    switch (localDW->is_LV_ON) {
     case plant_IN_Enable_Quit_Dc_On:
      localB->AMK_bQuitDcOn = 1U;
      localB->AMK_bDcOn = 1U;
      if ((std::abs(rtu_aAMK_TargetVelocity_) == 0.0) && (std::abs
           (rtu_aAMK_TorqueLimitPositiv_) == 0.0) && (std::abs
           (rtu_aAMK_TorqueLimitNegativ_) == 0.0)) {
        localDW->is_LV_ON = plant_IN_Inverter;
        localDW->temporalCounter_i1 = 0U;
      }
      break;

     case plant_IN_Enable_System_Ready:
      localB->AMK_bSystemReady = 1U;
      if ((rtu_aAMK_bDcOn_ == 1.0) && (localDW->temporalCounter_i1 >= 250U)) {
        localDW->is_LV_ON = plant_IN_Enable_Quit_Dc_On;
        localB->AMK_bQuitDcOn = 1U;
        localB->AMK_bDcOn = 1U;
      }
      break;

     case plant_IN_Inventer_On:
      localB->AMK_bInverterOn = 1U;
      if (rtu_inverter_en == 1.0) {
        localDW->is_LV_ON = plant_IN_Quit_Inventer_On;
        localDW->temporalCounter_i1 = 0U;
        localB->AMK_bQuitInverterOn = 1U;
      }
      break;

     case plant_IN_Inverter:
      {
        boolean_T out;
        out = ((rtu_aAMK_bEnable_ == 1.0) && (rtu_aAMK_bInverterOn_ == 1.0));
        if (out && (localDW->temporalCounter_i1 >= 250U)) {
          localDW->is_LV_ON = plant_IN_Inventer_On;
          localB->AMK_bInverterOn = 1U;
        }
      }
      break;

     case plant_IN_Inverter_Stuff2:
      if (rtu_aAMK_bDcOn_ == 0.0) {
        localDW->is_LV_ON = plant_IN_bDcOff;
        localB->AMK_bDcOn = 0U;
      }
      break;

     case plant_IN_Motor_running:
      {
        boolean_T out;
        out = ((rtu_inverter_en == 0.0) || (rtu_aAMK_bInverterOn_ == 0.0) ||
               (rtu_aAMK_bDcOn_ == 0.0) || (rtu_aAMK_bEnable_ == 0.0));
        if (out) {
          localDW->is_LV_ON = plant_IN_Shut_off_start;
          localB->AMK_bQuitInverterOn = 0U;
        } else {
          localB->Motor_running = (rtu_hvil_sts == 1.0);
        }
      }
      break;

     case plant_IN_Quit_Inventer_On:
      localB->AMK_bQuitInverterOn = 1U;
      if (localDW->temporalCounter_i1 >= 250U) {
        localDW->is_LV_ON = plant_IN_Motor_running;
        localB->Motor_running = (rtu_hvil_sts == 1.0);
      }
      break;

     case plant_IN_Shut_off_start:
      localB->AMK_bQuitInverterOn = 0U;
      if (rtu_inverter_en == 1.0) {
        localDW->is_LV_ON = plant_IN_Quit_Inventer_On;
        localDW->temporalCounter_i1 = 0U;
        localB->AMK_bQuitInverterOn = 1U;
      } else if (rtu_aAMK_bInverterOn_ == 0.0) {
        localDW->is_LV_ON = plant_IN_bInverter_off;
        localB->AMK_bInverterOn = 0U;
      }
      break;

     case plant_IN_bDcOff:
      localB->AMK_bDcOn = 0U;
      localDW->is_LV_ON = plant_IN_bQuitDcOff;
      localB->AMK_bQuitDcOn = 0U;
      break;

     case plant_IN_bEnable_off:
      localB->AMK_bQuitDcOn = 0U;
      localDW->is_LV_ON = plant_IN_Inverter_Stuff2;
      break;

     case plant_IN_bInverter_off:
      localB->AMK_bInverterOn = 0U;
      if (rtu_aAMK_bEnable_ == 0.0) {
        localDW->is_LV_ON = plant_IN_bEnable_off;
        localB->AMK_bQuitDcOn = 0U;
      }
      break;

     default:
      /* case IN_bQuitDcOff: */
      localB->AMK_bQuitDcOn = 0U;
      localDW->is_LV_ON = plant_IN_Enable_System_Ready;
      localDW->temporalCounter_i1 = 0U;
      localB->AMK_bSystemReady = 1U;
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */
}

static void plant_SystemCore_setup(dsp_simulink_MovingAverage_pl_T *obj)
{
  dsp_simulink_MovingAverage_pl_T *obj_0;
  g_dsp_internal_SlidingWindowA_T *iobj_0;
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  obj_0 = obj;
  obj_0->NumChannels = 1;
  obj_0->FrameLength = 1;
  iobj_0 = &obj_0->_pobj0;
  iobj_0->isInitialized = 0;
  iobj_0->isInitialized = 0;
  obj_0->pStatistic = iobj_0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

/* System initialize for atomic system: */
void plant_MovingAverage_Init(DW_MovingAverage_plant_T *localDW)
{
  dsp_simulink_MovingAverage_pl_T *b_obj;
  g_dsp_internal_SlidingWindowA_T *obj;

  /* Start for MATLABSystem: '<S10>/Moving Average' */
  localDW->obj.matlabCodegenIsDeleted = true;
  b_obj = &localDW->obj;
  b_obj->isInitialized = 0;
  b_obj->NumChannels = -1;
  b_obj->FrameLength = -1;
  b_obj->matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  plant_SystemCore_setup(&localDW->obj);

  /* InitializeConditions for MATLABSystem: '<S10>/Moving Average' */
  b_obj = &localDW->obj;
  obj = b_obj->pStatistic;
  if (obj->isInitialized == 1) {
    obj->pCumSum = 0.0;
    for (int32_T i = 0; i < 9; i++) {
      obj->pCumSumRev[i] = 0.0;
    }

    obj->pCumRevIndex = 1.0;
    obj->pModValueRev = 0.0;
  }

  /* End of InitializeConditions for MATLABSystem: '<S10>/Moving Average' */
}

/* Output and update for atomic system: */
void plant_MovingAverage(real_T rtu_0, B_MovingAverage_plant_T *localB,
  DW_MovingAverage_plant_T *localDW)
{
  dsp_simulink_MovingAverage_pl_T *obj;
  dsp_simulink_MovingAverage_pl_T *obj_0;
  g_dsp_internal_SlidingWindowA_T *obj_1;
  g_dsp_internal_SlidingWindowA_T *obj_2;
  g_dsp_internal_SlidingWindowA_T *obj_3;
  g_dsp_internal_SlidingWindowA_T *obj_4;
  real_T csumrev[9];
  real_T csum;
  real_T cumRevIndex;
  real_T modValueRev;
  real_T tmp;
  real_T z;

  /* MATLABSystem: '<S10>/Moving Average' */
  obj = &localDW->obj;
  obj_0 = obj;
  if (obj_0->TunablePropsChanged) {
    obj_0->TunablePropsChanged = false;
  }

  obj_1 = obj->pStatistic;
  if (obj_1->isInitialized != 1) {
    obj_2 = obj_1;
    obj_3 = obj_2;
    obj_3->isSetupComplete = false;
    obj_3->isInitialized = 1;
    obj_4 = obj_3;
    obj_4->pCumSum = 0.0;
    for (int32_T i = 0; i < 9; i++) {
      obj_4->pCumSumRev[i] = 0.0;
    }

    obj_4->pCumRevIndex = 1.0;
    obj_4->pModValueRev = 0.0;
    obj_3->isSetupComplete = true;
    obj_2->pCumSum = 0.0;
    for (int32_T i = 0; i < 9; i++) {
      obj_2->pCumSumRev[i] = 0.0;
    }

    obj_2->pCumRevIndex = 1.0;
    obj_2->pModValueRev = 0.0;
  }

  cumRevIndex = obj_1->pCumRevIndex;
  csum = obj_1->pCumSum;
  for (int32_T i = 0; i < 9; i++) {
    csumrev[i] = obj_1->pCumSumRev[i];
  }

  modValueRev = obj_1->pModValueRev;
  z = 0.0;
  tmp = 0.0;
  csum += rtu_0;
  if (modValueRev == 0.0) {
    z = csumrev[static_cast<int32_T>(cumRevIndex) - 1] + csum;
  }

  csumrev[static_cast<int32_T>(cumRevIndex) - 1] = rtu_0;
  if (cumRevIndex != 9.0) {
    cumRevIndex++;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    for (int32_T i = 7; i >= 0; i--) {
      csumrev[i] += csumrev[i + 1];
    }
  }

  if (modValueRev == 0.0) {
    tmp = z / 10.0;
  }

  if (modValueRev > 0.0) {
    modValueRev--;
  } else {
    modValueRev = 0.0;
  }

  obj_1->pCumSum = csum;
  for (int32_T i = 0; i < 9; i++) {
    obj_1->pCumSumRev[i] = csumrev[i];
  }

  obj_1->pCumRevIndex = cumRevIndex;
  obj_1->pModValueRev = modValueRev;

  /* MATLABSystem: '<S10>/Moving Average' */
  localB->Mot_spd_actual = tmp;
}

/* Termination for atomic system: */
void plant_MovingAverage_Term(DW_MovingAverage_plant_T *localDW)
{
  dsp_simulink_MovingAverage_pl_T *obj;
  g_dsp_internal_SlidingWindowA_T *obj_0;

  /* Terminate for MATLABSystem: '<S10>/Moving Average' */
  obj = &localDW->obj;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    if ((obj->isInitialized == 1) && obj->isSetupComplete) {
      obj_0 = obj->pStatistic;
      if (obj_0->isInitialized == 1) {
        obj_0->isInitialized = 2;
      }

      obj->NumChannels = -1;
      obj->FrameLength = -1;
    }
  }

  /* End of Terminate for MATLABSystem: '<S10>/Moving Average' */
}

static void plant_SystemCore_setup_m(dsp_simulink_MovingAverage_n_T *obj)
{
  dsp_simulink_MovingAverage_n_T *obj_0;
  g_dsp_internal_SlidingWindo_j_T *iobj_0;
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  obj_0 = obj;
  obj_0->NumChannels = 1;
  obj_0->FrameLength = 1;
  iobj_0 = &obj_0->_pobj0;
  iobj_0->isInitialized = 0;
  iobj_0->isInitialized = 0;
  obj_0->pStatistic = iobj_0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

/* System initialize for atomic system: */
void plant_MovingAverage1_Init(DW_MovingAverage1_plant_T *localDW)
{
  dsp_simulink_MovingAverage_n_T *b_obj;
  g_dsp_internal_SlidingWindo_j_T *obj;

  /* Start for MATLABSystem: '<S10>/Moving Average1' */
  localDW->obj.matlabCodegenIsDeleted = true;
  b_obj = &localDW->obj;
  b_obj->isInitialized = 0;
  b_obj->NumChannels = -1;
  b_obj->FrameLength = -1;
  b_obj->matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  plant_SystemCore_setup_m(&localDW->obj);

  /* InitializeConditions for MATLABSystem: '<S10>/Moving Average1' */
  b_obj = &localDW->obj;
  obj = b_obj->pStatistic;
  if (obj->isInitialized == 1) {
    obj->pCumSum = 0.0;
    obj->pCumSumRev[0] = 0.0;
    obj->pCumSumRev[1] = 0.0;
    obj->pCumRevIndex = 1.0;
    obj->pModValueRev = 0.0;
  }

  /* End of InitializeConditions for MATLABSystem: '<S10>/Moving Average1' */
}

/* Output and update for atomic system: */
void plant_MovingAverage1(real_T rtu_0, B_MovingAverage1_plant_T *localB,
  DW_MovingAverage1_plant_T *localDW)
{
  dsp_simulink_MovingAverage_n_T *obj;
  dsp_simulink_MovingAverage_n_T *obj_0;
  g_dsp_internal_SlidingWindo_j_T *obj_1;
  g_dsp_internal_SlidingWindo_j_T *obj_2;
  g_dsp_internal_SlidingWindo_j_T *obj_3;
  g_dsp_internal_SlidingWindo_j_T *obj_4;
  real_T csumrev[2];
  real_T csum;
  real_T cumRevIndex;
  real_T modValueRev;
  real_T tmp;
  real_T z;

  /* MATLABSystem: '<S10>/Moving Average1' */
  obj = &localDW->obj;
  obj_0 = obj;
  if (obj_0->TunablePropsChanged) {
    obj_0->TunablePropsChanged = false;
  }

  obj_1 = obj->pStatistic;
  if (obj_1->isInitialized != 1) {
    obj_2 = obj_1;
    obj_3 = obj_2;
    obj_3->isSetupComplete = false;
    obj_3->isInitialized = 1;
    obj_4 = obj_3;
    obj_4->pCumSum = 0.0;
    obj_4->pCumSumRev[0] = 0.0;
    obj_4->pCumSumRev[1] = 0.0;
    obj_4->pCumRevIndex = 1.0;
    obj_4->pModValueRev = 0.0;
    obj_3->isSetupComplete = true;
    obj_2->pCumSum = 0.0;
    obj_2->pCumSumRev[0] = 0.0;
    obj_2->pCumSumRev[1] = 0.0;
    obj_2->pCumRevIndex = 1.0;
    obj_2->pModValueRev = 0.0;
  }

  cumRevIndex = obj_1->pCumRevIndex;
  csum = obj_1->pCumSum;
  csumrev[0] = obj_1->pCumSumRev[0];
  csumrev[1] = obj_1->pCumSumRev[1];
  modValueRev = obj_1->pModValueRev;
  z = 0.0;
  tmp = 0.0;
  csum += rtu_0;
  if (modValueRev == 0.0) {
    z = csumrev[static_cast<int32_T>(cumRevIndex) - 1] + csum;
  }

  csumrev[static_cast<int32_T>(cumRevIndex) - 1] = rtu_0;
  if (cumRevIndex != 2.0) {
    cumRevIndex = 2.0;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    csumrev[0] += csumrev[1];
  }

  if (modValueRev == 0.0) {
    tmp = z / 3.0;
  }

  if (modValueRev > 0.0) {
    modValueRev--;
  } else {
    modValueRev = 0.0;
  }

  obj_1->pCumSum = csum;
  obj_1->pCumSumRev[0] = csumrev[0];
  obj_1->pCumSumRev[1] = csumrev[1];
  obj_1->pCumRevIndex = cumRevIndex;
  obj_1->pModValueRev = modValueRev;

  /* MATLABSystem: '<S10>/Moving Average1' */
  localB->MovingAverage1 = tmp;
}

/* Termination for atomic system: */
void plant_MovingAverage1_Term(DW_MovingAverage1_plant_T *localDW)
{
  dsp_simulink_MovingAverage_n_T *obj;
  g_dsp_internal_SlidingWindo_j_T *obj_0;

  /* Terminate for MATLABSystem: '<S10>/Moving Average1' */
  obj = &localDW->obj;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    if ((obj->isInitialized == 1) && obj->isSetupComplete) {
      obj_0 = obj->pStatistic;
      if (obj_0->isInitialized == 1) {
        obj_0->isInitialized = 2;
      }

      obj->NumChannels = -1;
      obj->FrameLength = -1;
    }
  }

  /* End of Terminate for MATLABSystem: '<S10>/Moving Average1' */
}

/* System initialize for function-call system: '<Root>/Function-Call Subsystem1' */
void pla_FunctionCallSubsystem1_Init(void)
{
  /* Start for S-Function (scanunpack): '<S5>/CAN Unpack' */

  /*-----------S-Function Block: <S5>/CAN Unpack -----------------*/

  /* SystemInitialize for S-Function (scanunpack): '<S5>/CAN Unpack' incorporates:
   *  Outport: '<S5>/pt_CAN_IN'
   */
  plant_B.AIR_neg = plant_cal->pt_CAN_IN_Y0_h.AIR_neg;

  /* SystemInitialize for S-Function (scanunpack): '<S5>/CAN Unpack' incorporates:
   *  Outport: '<S5>/pt_CAN_IN'
   */
  plant_B.AIR_pos = plant_cal->pt_CAN_IN_Y0_h.AIR_pos;

  /* SystemInitialize for S-Function (scanunpack): '<S5>/CAN Unpack' incorporates:
   *  Outport: '<S5>/pt_CAN_IN'
   */
  plant_B.precharge = plant_cal->pt_CAN_IN_Y0_h.precharge;
}

/* System initialize for function-call system: '<Root>/Function-Call Subsystem' */
void plan_FunctionCallSubsystem_Init(void)
{
  /* Start for S-Function (scanunpack): '<S4>/CAN Unpack' */

  /*-----------S-Function Block: <S4>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S4>/CAN Unpack1' */

  /*-----------S-Function Block: <S4>/CAN Unpack1 -----------------*/

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK0_TargetVelocity =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK0_Setpoints1_Left.AMK0_TargetVelocity;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK0_TorqueLimitNegativ =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK0_Setpoints1_Left.AMK0_TorqueLimitNegativ;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK0_TorqueLimitPositiv =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK0_Setpoints1_Left.AMK0_TorqueLimitPositiv;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK0_bDcOn =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK0_Setpoints1_Left.AMK0_bDcOn;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK0_bEnable =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK0_Setpoints1_Left.AMK0_bEnable;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK0_bErrorReset =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK0_Setpoints1_Left.AMK0_bErrorReset;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK0_bInverterOn =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK0_Setpoints1_Left.AMK0_bInverterOn;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack1' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK1_TargetVelocity =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK1_Setpoints1_Right.AMK1_TargetVelocity;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack1' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK1_TorqueLimitNegativ =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK1_Setpoints1_Right.AMK1_TorqueLimitNegativ;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack1' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK1_TorqueLimitPositiv =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK1_Setpoints1_Right.AMK1_TorqueLimitPositiv;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack1' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK1_bDcOn =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK1_Setpoints1_Right.AMK1_bDcOn;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack1' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK1_bEnable =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK1_Setpoints1_Right.AMK1_bEnable;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack1' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK1_bErrorReset =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK1_Setpoints1_Right.AMK1_bErrorReset;

  /* SystemInitialize for S-Function (scanunpack): '<S4>/CAN Unpack1' incorporates:
   *  Outport: '<S4>/pt_CAN_IN'
   */
  plant_B.AMK1_bInverterOn =
    plant_cal->pt_CAN_IN_Y0.ptCAN_AMK1_Setpoints1_Right.AMK1_bInverterOn;
}

/* Model step function */
void plant_step(void)
{
  real_T u0;
  real_T u1;

  /* S-Function (sg_CANLIN_OfA2_setup_s): '<Root>/CAN and LIN Setup ' */

  /* Level2 S-Function Block: '<Root>/CAN and LIN Setup ' (sg_CANLIN_OfA2_setup_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  plant_MovingAverage(plant_B.AMK0_TargetVelocity, &plant_B.MovingAverage,
                      &plant_DW.MovingAverage);

  /* S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read 1' */

  /* Level2 S-Function Block: '<Root>/CAN Read 1' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (scanunpack): '<Root>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<Root>/CAN Unpack' */
    if ((1 == plant_B.CANRead1_o2.Length) && (plant_B.CANRead1_o2.ID !=
         INVALID_CAN_ID) ) {
      if ((0 == plant_B.CANRead1_o2.ID) && (0U == plant_B.CANRead1_o2.Extended) )
      {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (plant_B.CANRead1_o2.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              plant_B.CANUnpack = result;
            }
          }
        }
      }
    }
  }

  /* Constant: '<Root>/Constant' */
  plant_B.Constant = plant_cal->Constant_Value;

  /* Chart: '<S1>/Chart' */
  plant_Chart(plant_B.AMK0_bInverterOn, plant_B.AMK0_bDcOn, plant_B.AMK0_bEnable,
              plant_B.AMK0_TargetVelocity, plant_B.AMK0_TorqueLimitPositiv,
              plant_B.AMK0_TorqueLimitNegativ, plant_B.CANUnpack,
              plant_B.Constant, &plant_B.sf_Chart, &plant_DW.sf_Chart);

  /* Switch: '<S10>/Switch' */
  if (plant_B.sf_Chart.Motor_running) {
    /* Switch: '<S10>/Switch' */
    plant_B.mot_speed = static_cast<real32_T>
      (plant_B.MovingAverage.Mot_spd_actual);
  } else {
    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S10>/Constant1'
     */
    plant_B.mot_speed = static_cast<real32_T>(plant_cal->Constant1_Value);
  }

  /* End of Switch: '<S10>/Switch' */

  /* S-Function (scanpack): '<S6>/CAN Pack' incorporates:
   *  Constant: '<S10>/Constant3'
   *  Constant: '<S1>/Constant'
   */
  /* S-Function (scanpack): '<S6>/CAN Pack' */
  plant_B.AMK0_ActualValues1.ID = 644U;
  plant_B.AMK0_ActualValues1.Length = 8U;
  plant_B.AMK0_ActualValues1.Extended = 0U;
  plant_B.AMK0_ActualValues1.Remote = 0;
  plant_B.AMK0_ActualValues1.Data[0] = 0;
  plant_B.AMK0_ActualValues1.Data[1] = 0;
  plant_B.AMK0_ActualValues1.Data[2] = 0;
  plant_B.AMK0_ActualValues1.Data[3] = 0;
  plant_B.AMK0_ActualValues1.Data[4] = 0;
  plant_B.AMK0_ActualValues1.Data[5] = 0;
  plant_B.AMK0_ActualValues1.Data[6] = 0;
  plant_B.AMK0_ActualValues1.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = plant_B.mot_speed;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            plant_B.AMK0_ActualValues1.Data[2] =
              plant_B.AMK0_ActualValues1.Data[2] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            plant_B.AMK0_ActualValues1.Data[3] =
              plant_B.AMK0_ActualValues1.Data[3] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = plant_cal->Constant3_Value;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            plant_B.AMK0_ActualValues1.Data[6] =
              plant_B.AMK0_ActualValues1.Data[6] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            plant_B.AMK0_ActualValues1.Data[7] =
              plant_B.AMK0_ActualValues1.Data[7] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = plant_cal->Constant_Value_f;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            plant_B.AMK0_ActualValues1.Data[4] =
              plant_B.AMK0_ActualValues1.Data[4] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            plant_B.AMK0_ActualValues1.Data[5] =
              plant_B.AMK0_ActualValues1.Data[5] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 12
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart.AMK_bDcOn);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK0_ActualValues1.Data[1] =
              plant_B.AMK0_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 4));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 15
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart.AMK_bDerating);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK0_ActualValues1.Data[1] =
              plant_B.AMK0_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 7));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 9
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart.AMK_bError);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK0_ActualValues1.Data[1] =
              plant_B.AMK0_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 1));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 14
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart.AMK_bInverterOn);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK0_ActualValues1.Data[1] =
              plant_B.AMK0_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 6));
          }
        }
      }
    }

    /* --------------- START Packing signal 7 ------------------
     *  startBit                = 11
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart.AMK_bQuitDcOn);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK0_ActualValues1.Data[1] =
              plant_B.AMK0_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 3));
          }
        }
      }
    }

    /* --------------- START Packing signal 8 ------------------
     *  startBit                = 13
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart.AMK_bQuitInverterOn);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK0_ActualValues1.Data[1] =
              plant_B.AMK0_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 5));
          }
        }
      }
    }

    /* --------------- START Packing signal 9 ------------------
     *  startBit                = 8
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart.AMK_bSystemReady);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK0_ActualValues1.Data[1] =
              plant_B.AMK0_ActualValues1.Data[1] | (uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U));
          }
        }
      }
    }

    /* --------------- START Packing signal 10 ------------------
     *  startBit                = 10
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart.AMK_bWarn);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK0_ActualValues1.Data[1] =
              plant_B.AMK0_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 2));
          }
        }
      }
    }
  }

  /* S-Function (scanpack): '<S6>/CAN Pack1' incorporates:
   *  Constant: '<S10>/Constant4'
   *  Constant: '<S10>/Constant5'
   *  Constant: '<S10>/Constant6'
   */
  /* S-Function (scanpack): '<S6>/CAN Pack1' */
  plant_B.AMK0_ActualValues2.ID = 646U;
  plant_B.AMK0_ActualValues2.Length = 8U;
  plant_B.AMK0_ActualValues2.Extended = 0U;
  plant_B.AMK0_ActualValues2.Remote = 0;
  plant_B.AMK0_ActualValues2.Data[0] = 0;
  plant_B.AMK0_ActualValues2.Data[1] = 0;
  plant_B.AMK0_ActualValues2.Data[2] = 0;
  plant_B.AMK0_ActualValues2.Data[3] = 0;
  plant_B.AMK0_ActualValues2.Data[4] = 0;
  plant_B.AMK0_ActualValues2.Data[5] = 0;
  plant_B.AMK0_ActualValues2.Data[6] = 0;
  plant_B.AMK0_ActualValues2.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      int32_T packingValue = 0;

      {
        int32_T result = (int32_T) (plant_B.sf_Chart.AMK_ErrorInfo);

        /* no scaling required */
        packingValue = result;
      }

      if (packingValue < 0) {
        packingValue = 0;
      }

      {
        uint16_T packedValue;
        if (packingValue > (int32_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (packingValue < (int32_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (packingValue);
        }

        {
          {
            plant_B.AMK0_ActualValues2.Data[4] =
              plant_B.AMK0_ActualValues2.Data[4] | (uint8_T)((uint16_T)
              (packedValue & (uint16_T)0xFFU));
            plant_B.AMK0_ActualValues2.Data[5] =
              plant_B.AMK0_ActualValues2.Data[5] | (uint8_T)((uint16_T)
              ((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = plant_cal->Constant6_Value;

        /* no offset to apply */
        result = result * (1 / 0.1F);

        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            plant_B.AMK0_ActualValues2.Data[6] =
              plant_B.AMK0_ActualValues2.Data[6] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            plant_B.AMK0_ActualValues2.Data[7] =
              plant_B.AMK0_ActualValues2.Data[7] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = plant_cal->Constant5_Value;

        /* no offset to apply */
        result = result * (1 / 0.1F);

        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            plant_B.AMK0_ActualValues2.Data[2] =
              plant_B.AMK0_ActualValues2.Data[2] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            plant_B.AMK0_ActualValues2.Data[3] =
              plant_B.AMK0_ActualValues2.Data[3] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 0
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = plant_cal->Constant4_Value;

        /* no offset to apply */
        result = result * (1 / 0.1F);

        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            plant_B.AMK0_ActualValues2.Data[0] =
              plant_B.AMK0_ActualValues2.Data[0] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            plant_B.AMK0_ActualValues2.Data[1] =
              plant_B.AMK0_ActualValues2.Data[1] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }
  }

  plant_MovingAverage(plant_B.AMK1_TargetVelocity, &plant_B.MovingAverage_b,
                      &plant_DW.MovingAverage_b);

  /* Chart: '<S1>/Chart1' */
  plant_Chart(plant_B.AMK1_bInverterOn, plant_B.AMK1_bDcOn, plant_B.AMK1_bEnable,
              plant_B.AMK1_TargetVelocity, plant_B.AMK1_TorqueLimitPositiv,
              plant_B.AMK1_TorqueLimitNegativ, plant_B.CANUnpack,
              plant_B.Constant, &plant_B.sf_Chart1, &plant_DW.sf_Chart1);

  /* Switch: '<S11>/Switch' */
  if (plant_B.sf_Chart1.Motor_running) {
    /* Switch: '<S11>/Switch' */
    plant_B.mot_speed_o = static_cast<real32_T>
      (plant_B.MovingAverage_b.Mot_spd_actual);
  } else {
    /* Switch: '<S11>/Switch' incorporates:
     *  Constant: '<S11>/Constant1'
     */
    plant_B.mot_speed_o = static_cast<real32_T>(plant_cal->Constant1_Value_c);
  }

  /* End of Switch: '<S11>/Switch' */

  /* S-Function (scanpack): '<S6>/CAN Pack2' incorporates:
   *  Constant: '<S11>/Constant3'
   *  Constant: '<S1>/Constant1'
   */
  /* S-Function (scanpack): '<S6>/CAN Pack2' */
  plant_B.AMK1_ActualValues1.ID = 645U;
  plant_B.AMK1_ActualValues1.Length = 8U;
  plant_B.AMK1_ActualValues1.Extended = 0U;
  plant_B.AMK1_ActualValues1.Remote = 0;
  plant_B.AMK1_ActualValues1.Data[0] = 0;
  plant_B.AMK1_ActualValues1.Data[1] = 0;
  plant_B.AMK1_ActualValues1.Data[2] = 0;
  plant_B.AMK1_ActualValues1.Data[3] = 0;
  plant_B.AMK1_ActualValues1.Data[4] = 0;
  plant_B.AMK1_ActualValues1.Data[5] = 0;
  plant_B.AMK1_ActualValues1.Data[6] = 0;
  plant_B.AMK1_ActualValues1.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = plant_B.mot_speed_o;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            plant_B.AMK1_ActualValues1.Data[2] =
              plant_B.AMK1_ActualValues1.Data[2] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            plant_B.AMK1_ActualValues1.Data[3] =
              plant_B.AMK1_ActualValues1.Data[3] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = plant_cal->Constant3_Value_d;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            plant_B.AMK1_ActualValues1.Data[6] =
              plant_B.AMK1_ActualValues1.Data[6] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            plant_B.AMK1_ActualValues1.Data[7] =
              plant_B.AMK1_ActualValues1.Data[7] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = plant_cal->Constant1_Value_g;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            plant_B.AMK1_ActualValues1.Data[4] =
              plant_B.AMK1_ActualValues1.Data[4] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            plant_B.AMK1_ActualValues1.Data[5] =
              plant_B.AMK1_ActualValues1.Data[5] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 12
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart1.AMK_bDcOn);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK1_ActualValues1.Data[1] =
              plant_B.AMK1_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 4));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 15
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart1.AMK_bDerating);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK1_ActualValues1.Data[1] =
              plant_B.AMK1_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 7));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 9
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart1.AMK_bError);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK1_ActualValues1.Data[1] =
              plant_B.AMK1_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 1));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 14
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart1.AMK_bInverterOn);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK1_ActualValues1.Data[1] =
              plant_B.AMK1_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 6));
          }
        }
      }
    }

    /* --------------- START Packing signal 7 ------------------
     *  startBit                = 11
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart1.AMK_bQuitDcOn);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK1_ActualValues1.Data[1] =
              plant_B.AMK1_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 3));
          }
        }
      }
    }

    /* --------------- START Packing signal 8 ------------------
     *  startBit                = 13
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart1.AMK_bQuitInverterOn);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK1_ActualValues1.Data[1] =
              plant_B.AMK1_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 5));
          }
        }
      }
    }

    /* --------------- START Packing signal 9 ------------------
     *  startBit                = 8
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart1.AMK_bSystemReady);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK1_ActualValues1.Data[1] =
              plant_B.AMK1_ActualValues1.Data[1] | (uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U));
          }
        }
      }
    }

    /* --------------- START Packing signal 10 ------------------
     *  startBit                = 10
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.sf_Chart1.AMK_bWarn);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(1)) {
          packedValue = (uint8_T) 1;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.AMK1_ActualValues1.Data[1] =
              plant_B.AMK1_ActualValues1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 2));
          }
        }
      }
    }
  }

  /* S-Function (scanpack): '<S6>/CAN Pack3' incorporates:
   *  Constant: '<S11>/Constant4'
   *  Constant: '<S11>/Constant5'
   *  Constant: '<S11>/Constant6'
   */
  /* S-Function (scanpack): '<S6>/CAN Pack3' */
  plant_B.AMK1_ActualValues2.ID = 647U;
  plant_B.AMK1_ActualValues2.Length = 8U;
  plant_B.AMK1_ActualValues2.Extended = 0U;
  plant_B.AMK1_ActualValues2.Remote = 0;
  plant_B.AMK1_ActualValues2.Data[0] = 0;
  plant_B.AMK1_ActualValues2.Data[1] = 0;
  plant_B.AMK1_ActualValues2.Data[2] = 0;
  plant_B.AMK1_ActualValues2.Data[3] = 0;
  plant_B.AMK1_ActualValues2.Data[4] = 0;
  plant_B.AMK1_ActualValues2.Data[5] = 0;
  plant_B.AMK1_ActualValues2.Data[6] = 0;
  plant_B.AMK1_ActualValues2.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 32
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      int32_T packingValue = 0;

      {
        int32_T result = (int32_T) (plant_B.sf_Chart1.AMK_ErrorInfo);

        /* no scaling required */
        packingValue = result;
      }

      if (packingValue < 0) {
        packingValue = 0;
      }

      {
        uint16_T packedValue;
        if (packingValue > (int32_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (packingValue < (int32_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (packingValue);
        }

        {
          {
            plant_B.AMK1_ActualValues2.Data[4] =
              plant_B.AMK1_ActualValues2.Data[4] | (uint8_T)((uint16_T)
              (packedValue & (uint16_T)0xFFU));
            plant_B.AMK1_ActualValues2.Data[5] =
              plant_B.AMK1_ActualValues2.Data[5] | (uint8_T)((uint16_T)
              ((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 48
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = plant_cal->Constant6_Value_b;

        /* no offset to apply */
        result = result * (1 / 0.1F);

        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            plant_B.AMK1_ActualValues2.Data[6] =
              plant_B.AMK1_ActualValues2.Data[6] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            plant_B.AMK1_ActualValues2.Data[7] =
              plant_B.AMK1_ActualValues2.Data[7] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = plant_cal->Constant5_Value_o;

        /* no offset to apply */
        result = result * (1 / 0.1F);

        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            plant_B.AMK1_ActualValues2.Data[2] =
              plant_B.AMK1_ActualValues2.Data[2] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            plant_B.AMK1_ActualValues2.Data[3] =
              plant_B.AMK1_ActualValues2.Data[3] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 0
     *  length                  = 16
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 0.1
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = plant_cal->Constant4_Value_k;

        /* no offset to apply */
        result = result * (1 / 0.1F);

        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        int16_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (32767)) {
          packedValue = 32767;
        } else if (scaledValue < (int32_T)((-(32767)-1))) {
          packedValue = (-(32767)-1);
        } else {
          packedValue = (int16_T) (scaledValue);
        }

        {
          uint16_T* tempValuePtr = (uint16_T*)&packedValue;
          uint16_T tempValue = *tempValuePtr;

          {
            plant_B.AMK1_ActualValues2.Data[0] =
              plant_B.AMK1_ActualValues2.Data[0] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            plant_B.AMK1_ActualValues2.Data[1] =
              plant_B.AMK1_ActualValues2.Data[1] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }
  }

  /* SignalConversion generated from: '<Root>/CAN Write ' */
  plant_B.TmpSignalConversionAtCANWriteIn[0] = plant_B.AMK0_ActualValues1;
  plant_B.TmpSignalConversionAtCANWriteIn[1] = plant_B.AMK0_ActualValues2;
  plant_B.TmpSignalConversionAtCANWriteIn[2] = plant_B.AMK1_ActualValues1;
  plant_B.TmpSignalConversionAtCANWriteIn[3] = plant_B.AMK1_ActualValues2;

  /* S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write ' */

  /* Level2 S-Function Block: '<Root>/CAN Write ' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* Delay: '<S14>/Delay' */
  plant_B.Delay = plant_DW.Delay_DSTATE;

  /* Delay: '<S14>/Delay1' */
  plant_B.Delay1 = plant_DW.Delay1_DSTATE;

  /* Delay: '<S14>/Delay2' */
  plant_B.Delay2 = plant_DW.Delay2_DSTATE;

  /* Update for Delay: '<S14>/Delay' */
  plant_DW.Delay_DSTATE = plant_B.AIR_pos;

  /* Update for Delay: '<S14>/Delay1' */
  plant_DW.Delay1_DSTATE = plant_B.precharge;

  /* Update for Delay: '<S14>/Delay2' */
  plant_DW.Delay2_DSTATE = plant_B.AIR_neg;

  /* End of Outputs for SubSystem: '<S2>/Triggered Subsystem1' */

  /* Logic: '<S2>/NOT2' */
  plant_B.NOT2 = !(plant_B.Delay2 != 0.0);

  /* Logic: '<S2>/NOT' */
  plant_B.NOT = !(plant_B.Delay != 0.0);

  /* Logic: '<S2>/NOT1' */
  plant_B.NOT1 = !(plant_B.Delay1 != 0.0);

  /* S-Function (scanpack): '<S7>/CAN Pack' */
  /* S-Function (scanpack): '<S7>/CAN Pack' */
  plant_B.CANPack.ID = 1574U;
  plant_B.CANPack.Length = 3U;
  plant_B.CANPack.Extended = 0U;
  plant_B.CANPack.Remote = 0;
  plant_B.CANPack.Data[0] = 0;
  plant_B.CANPack.Data[1] = 0;
  plant_B.CANPack.Data[2] = 0;
  plant_B.CANPack.Data[3] = 0;
  plant_B.CANPack.Data[4] = 0;
  plant_B.CANPack.Data[5] = 0;
  plant_B.CANPack.Data[6] = 0;
  plant_B.CANPack.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 8
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.NOT2);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.CANPack.Data[1] = plant_B.CANPack.Data[1] | (uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 0
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.NOT);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.CANPack.Data[0] = plant_B.CANPack.Data[0] | (uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 16
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (plant_B.NOT1);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (boolean_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (packingValue < (boolean_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            plant_B.CANPack.Data[2] = plant_B.CANPack.Data[2] | (uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U));
          }
        }
      }
    }
  }

  /* S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 1' */

  /* Level2 S-Function Block: '<Root>/CAN Write 1' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* Sum: '<S10>/Subtract' */
  plant_B.spd_err = plant_B.AMK0_TargetVelocity -
    plant_B.MovingAverage.Mot_spd_actual;

  /* MinMax: '<S10>/Max' incorporates:
   *  Constant: '<S10>/Constant'
   */
  u0 = plant_B.AMK0_TargetVelocity;
  u1 = plant_cal->Constant_Value_c;
  if ((u0 >= u1) || rtIsNaN(u1)) {
    u1 = u0;
  }

  /* MinMax: '<S10>/Max' */
  plant_B.Max = u1;

  /* Product: '<S10>/Divide1' */
  plant_B.percent_err = plant_B.spd_err / plant_B.Max;

  /* Switch: '<S10>/Switch2' */
  if (plant_B.percent_err >= plant_cal->Switch2_Threshold) {
    /* Switch: '<S10>/Switch2' */
    plant_B.Switch2 = plant_B.AMK0_TorqueLimitPositiv;
  } else {
    /* Switch: '<S10>/Switch2' */
    plant_B.Switch2 = plant_B.AMK0_TorqueLimitNegativ;
  }

  /* End of Switch: '<S10>/Switch2' */

  /* Product: '<S10>/Divide3' */
  plant_B.percent_err_e = plant_B.percent_err * plant_B.Switch2;
  plant_MovingAverage1(plant_B.percent_err_e, &plant_B.MovingAverage1,
                       &plant_DW.MovingAverage1);

  /* RelationalOperator: '<S12>/LowerRelop1' */
  plant_B.LowerRelop1 = (plant_B.MovingAverage1.MovingAverage1 >
    plant_B.AMK0_TorqueLimitPositiv);

  /* RelationalOperator: '<S12>/UpperRelop' */
  plant_B.UpperRelop = (plant_B.MovingAverage1.MovingAverage1 <
                        plant_B.AMK0_TorqueLimitNegativ);

  /* Switch: '<S12>/Switch' */
  if (plant_B.UpperRelop) {
    /* Switch: '<S12>/Switch' */
    plant_B.Switch = plant_B.AMK0_TorqueLimitNegativ;
  } else {
    /* Switch: '<S12>/Switch' */
    plant_B.Switch = plant_B.MovingAverage1.MovingAverage1;
  }

  /* End of Switch: '<S12>/Switch' */

  /* Switch: '<S12>/Switch2' */
  if (plant_B.LowerRelop1) {
    /* Switch: '<S12>/Switch2' */
    plant_B.Switch2_m = plant_B.AMK0_TorqueLimitPositiv;
  } else {
    /* Switch: '<S12>/Switch2' */
    plant_B.Switch2_m = plant_B.Switch;
  }

  /* End of Switch: '<S12>/Switch2' */

  /* Switch: '<S10>/Switch1' */
  if (plant_B.sf_Chart.Motor_running) {
    /* Switch: '<S10>/Switch1' */
    plant_B.mot_torq = static_cast<real32_T>(plant_B.Switch2_m);
  } else {
    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/Constant2'
     */
    plant_B.mot_torq = static_cast<real32_T>(plant_cal->Constant2_Value);
  }

  /* End of Switch: '<S10>/Switch1' */

  /* Sum: '<S11>/Subtract' */
  plant_B.spd_err_l = plant_B.AMK1_TargetVelocity -
    plant_B.MovingAverage_b.Mot_spd_actual;

  /* MinMax: '<S11>/Max' incorporates:
   *  Constant: '<S11>/Constant'
   */
  u0 = plant_B.AMK1_TargetVelocity;
  u1 = plant_cal->Constant_Value_a;
  if ((u0 >= u1) || rtIsNaN(u1)) {
    u1 = u0;
  }

  /* MinMax: '<S11>/Max' */
  plant_B.Max_g = u1;

  /* Product: '<S11>/Divide1' */
  plant_B.percent_err_g = plant_B.spd_err_l / plant_B.Max_g;

  /* Switch: '<S11>/Switch2' */
  if (plant_B.percent_err_g >= plant_cal->Switch2_Threshold_k) {
    /* Switch: '<S11>/Switch2' */
    plant_B.Switch2_i = plant_B.AMK1_TorqueLimitPositiv;
  } else {
    /* Switch: '<S11>/Switch2' */
    plant_B.Switch2_i = plant_B.AMK1_TorqueLimitNegativ;
  }

  /* End of Switch: '<S11>/Switch2' */

  /* Product: '<S11>/Divide3' */
  plant_B.percent_err_m = plant_B.percent_err_g * plant_B.Switch2_i;
  plant_MovingAverage1(plant_B.percent_err_m, &plant_B.MovingAverage1_b,
                       &plant_DW.MovingAverage1_b);

  /* RelationalOperator: '<S13>/LowerRelop1' */
  plant_B.LowerRelop1_k = (plant_B.MovingAverage1_b.MovingAverage1 >
    plant_B.AMK1_TorqueLimitPositiv);

  /* RelationalOperator: '<S13>/UpperRelop' */
  plant_B.UpperRelop_b = (plant_B.MovingAverage1_b.MovingAverage1 <
    plant_B.AMK1_TorqueLimitNegativ);

  /* Switch: '<S13>/Switch' */
  if (plant_B.UpperRelop_b) {
    /* Switch: '<S13>/Switch' */
    plant_B.Switch_h = plant_B.AMK1_TorqueLimitNegativ;
  } else {
    /* Switch: '<S13>/Switch' */
    plant_B.Switch_h = plant_B.MovingAverage1_b.MovingAverage1;
  }

  /* End of Switch: '<S13>/Switch' */

  /* Switch: '<S13>/Switch2' */
  if (plant_B.LowerRelop1_k) {
    /* Switch: '<S13>/Switch2' */
    plant_B.Switch2_d = plant_B.AMK1_TorqueLimitPositiv;
  } else {
    /* Switch: '<S13>/Switch2' */
    plant_B.Switch2_d = plant_B.Switch_h;
  }

  /* End of Switch: '<S13>/Switch2' */

  /* Switch: '<S11>/Switch1' */
  if (plant_B.sf_Chart1.Motor_running) {
    /* Switch: '<S11>/Switch1' */
    plant_B.mot_torq_l = static_cast<real32_T>(plant_B.Switch2_d);
  } else {
    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S11>/Constant2'
     */
    plant_B.mot_torq_l = static_cast<real32_T>(plant_cal->Constant2_Value_k);
  }

  /* End of Switch: '<S11>/Switch1' */

  /* S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read ' */

  /* Level2 S-Function Block: '<Root>/CAN Read ' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* S-Function (scanunpack): '<Root>/CAN Unpack1' */
  {
    /* S-Function (scanunpack): '<Root>/CAN Unpack1' */
    if ((1 == plant_B.CANRead1_o2.Length) && (plant_B.CANRead1_o2.ID !=
         INVALID_CAN_ID) ) {
      if ((256 == plant_B.CANRead1_o2.ID) && (0U == plant_B.CANRead1_o2.Extended)
          ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 1
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */
        }
      }
    }
  }

  /* S-Function (scanpack): '<Root>/CAN Pack1' incorporates:
   *  Constant: '<Root>/APPS'
   *  Constant: '<Root>/BPPS'
   *  Constant: '<Root>/HVILStatus'
   *  Constant: '<Root>/StartButton'
   *  Constant: '<Root>/SteeringAngle'
   */
  /* S-Function (scanpack): '<Root>/CAN Pack1' */
  plant_B.AMK0_ActualValues2_c.ID = 256U;
  plant_B.AMK0_ActualValues2_c.Length = 8U;
  plant_B.AMK0_ActualValues2_c.Extended = 0U;
  plant_B.AMK0_ActualValues2_c.Remote = 0;
  plant_B.AMK0_ActualValues2_c.Data[0] = 0;
  plant_B.AMK0_ActualValues2_c.Data[1] = 0;
  plant_B.AMK0_ActualValues2_c.Data[2] = 0;
  plant_B.AMK0_ActualValues2_c.Data[3] = 0;
  plant_B.AMK0_ActualValues2_c.Data[4] = 0;
  plant_B.AMK0_ActualValues2_c.Data[5] = 0;
  plant_B.AMK0_ActualValues2_c.Data[6] = 0;
  plant_B.AMK0_ActualValues2_c.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.005
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = plant_cal->APPS_Value;

        /* no offset to apply */
        result = result * (1 / 0.005);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(255)) {
          packedValue = (uint8_T) 255;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            plant_B.AMK0_ActualValues2_c.Data[0] =
              plant_B.AMK0_ActualValues2_c.Data[0] | (uint8_T)(packedValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 8
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.005
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = plant_cal->APPS_Value;

        /* no offset to apply */
        result = result * (1 / 0.005);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(255)) {
          packedValue = (uint8_T) 255;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            plant_B.AMK0_ActualValues2_c.Data[1] =
              plant_B.AMK0_ActualValues2_c.Data[1] | (uint8_T)(packedValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 16
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.005
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = plant_cal->BPPS_Value;

        /* no offset to apply */
        result = result * (1 / 0.005);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(255)) {
          packedValue = (uint8_T) 255;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            plant_B.AMK0_ActualValues2_c.Data[2] =
              plant_B.AMK0_ActualValues2_c.Data[2] | (uint8_T)(packedValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 24
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.005
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = plant_cal->BPPS_Value;

        /* no offset to apply */
        result = result * (1 / 0.005);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(255)) {
          packedValue = (uint8_T) 255;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            plant_B.AMK0_ActualValues2_c.Data[3] =
              plant_B.AMK0_ActualValues2_c.Data[3] | (uint8_T)(packedValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 41
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = plant_cal->HVILStatus_Value;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int8_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (0)) {
          packedValue = 0;
        } else if (scaledValue < (int32_T)((-(0)-1))) {
          packedValue = (-(0)-1);
        } else {
          packedValue = (int8_T) (scaledValue);
        }

        {
          uint8_T* tempValuePtr = (uint8_T*)&packedValue;
          uint8_T tempValue = *tempValuePtr;

          {
            plant_B.AMK0_ActualValues2_c.Data[5] =
              plant_B.AMK0_ActualValues2_c.Data[5] | (uint8_T)((uint8_T)
              ((uint8_T)(tempValue & (uint8_T)0x1U) << 1));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 40
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = plant_cal->StartButton_Value;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        int8_T packedValue;
        int32_T scaledValue;
        if (outValue > 2147483647.0) {
          scaledValue = 2147483647;
        } else if (outValue < -2147483648.0) {
          scaledValue = -2147483647 - 1;
        } else {
          scaledValue = (int32_T) outValue;
        }

        if (scaledValue > (int32_T) (0)) {
          packedValue = 0;
        } else if (scaledValue < (int32_T)((-(0)-1))) {
          packedValue = (-(0)-1);
        } else {
          packedValue = (int8_T) (scaledValue);
        }

        {
          uint8_T* tempValuePtr = (uint8_T*)&packedValue;
          uint8_T tempValue = *tempValuePtr;

          {
            plant_B.AMK0_ActualValues2_c.Data[5] =
              plant_B.AMK0_ActualValues2_c.Data[5] | (uint8_T)((uint8_T)
              (tempValue & (uint8_T)0x1U));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 32
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.005
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = plant_cal->SteeringAngle_Value;

        /* no offset to apply */
        result = result * (1 / 0.005);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(255)) {
          packedValue = (uint8_T) 255;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            plant_B.AMK0_ActualValues2_c.Data[4] =
              plant_B.AMK0_ActualValues2_c.Data[4] | (uint8_T)(packedValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 7 ------------------
     *  startBit                = 48
     *  length                  = 12
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/

    /* --------------- START Packing signal 8 ------------------
     *  startBit                = 60
     *  length                  = 12
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++plant_M->Timing.clockTick0)) {
    ++plant_M->Timing.clockTickH0;
  }

  plant_M->Timing.t[0] = plant_M->Timing.clockTick0 * plant_M->Timing.stepSize0
    + plant_M->Timing.clockTickH0 * plant_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void plant_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&plant_M->solverInfo,"FixedStepDiscrete");
  plant_M->solverInfoPtr = (&plant_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = plant_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "plant_M points to
       static memory which is guaranteed to be non-NULL" */
    plant_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    plant_M->Timing.sampleTimes = (&plant_M->Timing.sampleTimesArray[0]);
    plant_M->Timing.offsetTimes = (&plant_M->Timing.offsetTimesArray[0]);

    /* task periods */
    plant_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    plant_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(plant_M, &plant_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = plant_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    plant_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(plant_M, -1);
  plant_M->Timing.stepSize0 = 0.001;
  plant_M->solverInfoPtr = (&plant_M->solverInfo);
  plant_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&plant_M->solverInfo, 0.001);
  rtsiSetSolverMode(&plant_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&plant_B)), 0,
                     sizeof(B_plant_T));

  {
    plant_B.CANRead1_o2 = CAN_DATATYPE_GROUND;
    plant_B.AMK0_ActualValues1 = CAN_DATATYPE_GROUND;
    plant_B.AMK0_ActualValues2 = CAN_DATATYPE_GROUND;
    plant_B.AMK1_ActualValues1 = CAN_DATATYPE_GROUND;
    plant_B.AMK1_ActualValues2 = CAN_DATATYPE_GROUND;
    plant_B.TmpSignalConversionAtCANWriteIn[0] = CAN_DATATYPE_GROUND;
    plant_B.TmpSignalConversionAtCANWriteIn[1] = CAN_DATATYPE_GROUND;
    plant_B.TmpSignalConversionAtCANWriteIn[2] = CAN_DATATYPE_GROUND;
    plant_B.TmpSignalConversionAtCANWriteIn[3] = CAN_DATATYPE_GROUND;
    plant_B.CANPack = CAN_DATATYPE_GROUND;
    plant_B.CANRead_o2 = CAN_DATATYPE_GROUND;
    plant_B.AMK0_ActualValues2_c = CAN_DATATYPE_GROUND;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&plant_DW), 0,
                     sizeof(DW_plant_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &plant_M->NonInlinedSFcns.sfcnInfo;
    plant_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(plant_M)));
    plant_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &plant_M->Sizes.numSampTimes);
    plant_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(plant_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,plant_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(plant_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(plant_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(plant_M));
    rtssSetStepSizePtr(sfcnInfo, &plant_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(plant_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &plant_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &plant_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &plant_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &plant_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &plant_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &plant_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &plant_M->solverInfoPtr);
  }

  plant_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&plant_M->NonInlinedSFcns.childSFunctions[0]), 0,
                       5*sizeof(SimStruct));
    plant_M->childSfunctions = (&plant_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        plant_M->childSfunctions[i] = (&plant_M->
          NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: plant/<Root>/CAN and LIN Setup  (sg_CANLIN_OfA2_setup_s) */
    {
      SimStruct *rts = plant_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = plant_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = plant_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = plant_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &plant_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &plant_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, plant_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &plant_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &plant_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &plant_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &plant_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &plant_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "CAN and LIN Setup ");
      ssSetPath(rts, "plant/CAN and LIN Setup ");
      ssSetRTModel(rts,plant_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &plant_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)plant_cal->CANandLINSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)plant_cal->CANandLINSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)plant_cal->CANandLINSetup_P3_Size);
      }

      /* registration */
      sg_CANLIN_OfA2_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: plant/<Root>/CAN Read 1 (sg_CAN_OfA2_read_s) */
    {
      SimStruct *rts = plant_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = plant_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = plant_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = plant_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &plant_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &plant_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, plant_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &plant_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &plant_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &plant_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &plant_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &plant_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &plant_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &plant_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &plant_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &plant_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &plant_B.CANRead1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidthAsInt(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *) &plant_B.CANRead1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read 1");
      ssSetPath(rts, "plant/CAN Read 1");
      ssSetRTModel(rts,plant_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &plant_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)plant_cal->CANRead1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &plant_DW.CANRead1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &plant_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &plant_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &plant_DW.CANRead1_PWORK);
      }

      /* registration */
      sg_CAN_OfA2_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: plant/<Root>/CAN Write  (sg_CAN_OfA2_write_s) */
    {
      SimStruct *rts = plant_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = plant_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = plant_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = plant_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &plant_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &plant_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, plant_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &plant_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &plant_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &plant_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &plant_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &plant_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &plant_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &plant_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &plant_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &plant_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, plant_B.TmpSignalConversionAtCANWriteIn);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 4);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write ");
      ssSetPath(rts, "plant/CAN Write ");
      ssSetRTModel(rts,plant_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &plant_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)plant_cal->CANWrite_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &plant_DW.CANWrite_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &plant_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &plant_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &plant_DW.CANWrite_PWORK[0]);
      }

      /* registration */
      sg_CAN_OfA2_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: plant/<Root>/CAN Write 1 (sg_CAN_OfA2_write_s) */
    {
      SimStruct *rts = plant_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = plant_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = plant_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = plant_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &plant_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &plant_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, plant_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &plant_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &plant_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &plant_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &plant_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &plant_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &plant_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &plant_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &plant_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &plant_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &plant_B.CANPack);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write 1");
      ssSetPath(rts, "plant/CAN Write 1");
      ssSetRTModel(rts,plant_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &plant_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)plant_cal->CANWrite1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &plant_DW.CANWrite1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &plant_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &plant_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &plant_DW.CANWrite1_PWORK);
      }

      /* registration */
      sg_CAN_OfA2_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: plant/<Root>/CAN Read  (sg_CAN_OfA2_read_s) */
    {
      SimStruct *rts = plant_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = plant_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = plant_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = plant_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &plant_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &plant_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, plant_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &plant_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &plant_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &plant_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &plant_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &plant_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &plant_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &plant_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &plant_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &plant_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &plant_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidthAsInt(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *) &plant_B.CANRead_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read ");
      ssSetPath(rts, "plant/CAN Read ");
      ssSetRTModel(rts,plant_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &plant_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)plant_cal->CANRead_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &plant_DW.CANRead_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &plant_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &plant_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &plant_DW.CANRead_PWORK);
      }

      /* registration */
      sg_CAN_OfA2_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Start for S-Function (sg_CANLIN_OfA2_setup_s): '<Root>/CAN and LIN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN and LIN Setup ' (sg_CANLIN_OfA2_setup_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read 1' */
  /* Level2 S-Function Block: '<Root>/CAN Read 1' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<Root>/CAN Unpack' */

  /*-----------S-Function Block: <Root>/CAN Unpack -----------------*/

  /* Start for Constant: '<Root>/Constant' */
  plant_B.Constant = plant_cal->Constant_Value;

  /* Start for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write ' */
  /* Level2 S-Function Block: '<Root>/CAN Write ' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 1' */
  /* Level2 S-Function Block: '<Root>/CAN Write 1' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read ' */
  /* Level2 S-Function Block: '<Root>/CAN Read ' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<Root>/CAN Unpack1' */

  /*-----------S-Function Block: <Root>/CAN Unpack1 -----------------*/

  /* SystemInitialize for Chart: '<S1>/Chart' */
  plant_Chart_Init(&plant_B.sf_Chart, &plant_DW.sf_Chart);

  /* SystemInitialize for Chart: '<S1>/Chart1' */
  plant_Chart_Init(&plant_B.sf_Chart1, &plant_DW.sf_Chart1);

  /* InitializeConditions for Delay: '<S14>/Delay' */
  plant_DW.Delay_DSTATE = plant_cal->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S14>/Delay1' */
  plant_DW.Delay1_DSTATE = plant_cal->Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<S14>/Delay2' */
  plant_DW.Delay2_DSTATE = plant_cal->Delay2_InitialCondition;

  /* End of SystemInitialize for SubSystem: '<S2>/Triggered Subsystem1' */
  pla_FunctionCallSubsystem1_Init();
  plan_FunctionCallSubsystem_Init();
  plant_MovingAverage_Init(&plant_DW.MovingAverage);
  plant_MovingAverage_Init(&plant_DW.MovingAverage_b);
  plant_MovingAverage1_Init(&plant_DW.MovingAverage1);
  plant_MovingAverage1_Init(&plant_DW.MovingAverage1_b);
  plan_FunctionCallSubsystem_Init();
  pla_FunctionCallSubsystem1_Init();
}

/* Model terminate function */
void plant_terminate(void)
{
  /* Terminate for S-Function (sg_CANLIN_OfA2_setup_s): '<Root>/CAN and LIN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN and LIN Setup ' (sg_CANLIN_OfA2_setup_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  plant_MovingAverage_Term(&plant_DW.MovingAverage);

  /* Terminate for S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read 1' */
  /* Level2 S-Function Block: '<Root>/CAN Read 1' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  plant_MovingAverage_Term(&plant_DW.MovingAverage_b);

  /* Terminate for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write ' */
  /* Level2 S-Function Block: '<Root>/CAN Write ' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 1' */
  /* Level2 S-Function Block: '<Root>/CAN Write 1' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  plant_MovingAverage1_Term(&plant_DW.MovingAverage1);
  plant_MovingAverage1_Term(&plant_DW.MovingAverage1_b);

  /* Terminate for S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read ' */
  /* Level2 S-Function Block: '<Root>/CAN Read ' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = plant_M->childSfunctions[4];
    sfcnTerminate(rts);
  }
}
