/*
 * controls.cpp
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

#include "controls.h"
#include "rtwtypes.h"
#include "controls_types.h"
#include "controls_private.h"
#include "controls_cal.h"
#include <cmath>
#include <cstring>

extern "C"
{

#include "rt_nonfinite.h"

}

/* Named constants for Chart: '<S7>/mi_left' */
const uint32_T contr_IN_enforceSetpointsZero_j = 1U;
const uint32_T contr_IN_motorOff_waitingForGov = 7U;
const uint32_T control_IN_enforceSetpointsZero = 2U;
const int32_T controls_CALL_EVENT = -1;
const uint32_T controls_IN_AMK_errorDetected = 1U;
const uint32_T controls_IN_AMK_errorReset = 2U;
const uint32_T controls_IN_AMK_ready = 3U;
const uint32_T controls_IN_AMK_running = 4U;
const uint32_T controls_IN_AMK_shutdown = 5U;
const uint32_T controls_IN_AMK_startup = 6U;
const uint8_T controls_IN_NO_ACTIVE_CHILD = 0U;
const uint32_T controls_IN_commandOn = 1U;
const uint32_T controls_IN_sendReset = 2U;
const uint32_T controls_IN_toggleDCon = 3U;
const uint32_T controls_IN_toggleEnable = 3U;
const uint32_T controls_IN_toggleReset = 4U;
const uint32_T controls_IN_waiting_sysReady = 4U;

/* Named constants for Chart: '<S4>/battery_monitor' */
const uint32_T con_IN_InitializePrechargeState = 1U;
const int32_T controls_CALL_EVENT_i = -1;
const uint32_T controls_IN_InitialState = 1U;
const uint32_T controls_IN_InterruptState = 2U;
const uint32_T controls_IN_LowSoC = 3U;
const uint8_T controls_IN_NO_ACTIVE_CHILD_o = 0U;
const uint32_T controls_IN_PrechargeState = 2U;
const uint32_T controls_IN_RunningState = 3U;
const uint32_T controls_IN_StartupState = 4U;
const uint32_T controls_IN_StartupState1 = 5U;
const uint32_T controls_IN_StartupSuperstate = 4U;

/* Named constants for Chart: '<S4>/bm_control' */
const uint32_T controls_IN_Close_HVneg1 = 1U;
const uint32_T controls_IN_Close_HVpos = 2U;
const uint32_T controls_IN_Close_precharge = 3U;
const uint32_T controls_IN_Open_precharge = 4U;
const uint32_T controls_IN_StartupCMD = 1U;
const uint32_T controls_IN_StartupSuperstate_g = 2U;

/* Named constants for Chart: '<S5>/driver_interface' */
const uint32_T contr_IN_Driver_requested_start = 1U;
const uint32_T controls_IN_DI_error = 1U;
const uint32_T controls_IN_DI_running = 2U;
const uint32_T controls_IN_INIT = 3U;
const uint32_T controls_IN_Motor_start_request = 2U;
const uint32_T controls_IN_Ready_to_drive = 3U;
const uint32_T controls_IN_SpeakerOff = 1U;
const uint32_T controls_IN_Vehicle_coasting = 4U;
const uint32_T controls_IN_Waiting_for_driver = 4U;

/* Named constants for Chart: '<S6>/governer_stateflow' */
const uint32_T contro_IN_Command_motor_startup = 1U;
const uint32_T contro_IN_DriverInterface_Error = 1U;
const uint32_T controls_IN_Err_reset = 2U;
const uint32_T controls_IN_HV_run_error = 1U;
const uint32_T controls_IN_HV_startup = 2U;
const uint32_T controls_IN_HV_startup_error = 3U;
const uint32_T controls_IN_Initialize_outputs = 1U;
const uint32_T controls_IN_Motor_faulted = 4U;
const uint32_T controls_IN_Motor_run_error = 2U;
const uint32_T controls_IN_RUNNING = 2U;
const uint32_T controls_IN_RUNNING_ERROR = 3U;
const uint32_T controls_IN_ReadyToDrive = 3U;
const uint32_T controls_IN_STARTUP = 4U;
const uint32_T controls_IN_STARTUP_ERROR = 5U;
const uint32_T controls_IN_Send_ReadyToDrive = 4U;
const uint32_T controls_IN_Vehicle_shutdown = 6U;

/* Named constants for Chart: '<S29>/vd_tc' */
const uint32_T controls_IN_TC_off = 1U;
const uint32_T controls_IN_TC_on = 2U;
const uint32_T controls_IN_TC_on1 = 3U;
const uint32_T controls_IN_TC_on2 = 4U;

/* Named constants for Chart: '<S8>/vd_screenshot_check' */
const uint32_T controls_IN_Run = 1U;
const uint32_T controls_IN_Stop = 2U;

/* Block signals (default storage) */
B_controls_T controls_B;

/* Block states (default storage) */
DW_controls_T controls_DW;

/* External inputs (root inport signals with default storage) */
ExtU_controls_T controls_U;

/* Real-time model */
RT_MODEL_controls_T controls_M_ = RT_MODEL_controls_T();
RT_MODEL_controls_T *const controls_M = &controls_M_;
real_T look1_binlcpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

/*
 * Output and update for action system:
 *    '<S5>/If Action Subsystem'
 *    '<S5>/If Action Subsystem1'
 */
void controls_IfActionSubsystem(real_T rtu_In1, real_T *rty_Out1)
{
  /* SignalConversion generated from: '<S12>/In1' */
  *rty_Out1 = rtu_In1;
}

/*
 * System initialize for atomic system:
 *    '<S7>/mi_left'
 *    '<S7>/mi_right'
 */
void controls_mi_left_Init(B_mi_left_controls_T *localB, DW_mi_left_controls_T
  *localDW)
{
  localDW->sfEvent = controls_CALL_EVENT;
  localDW->is_AMK_errorReset = controls_IN_NO_ACTIVE_CHILD;
  localDW->is_AMK_startup = controls_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c9_motor_interface_li = 0U;
  localDW->is_c9_motor_interface_lib = controls_IN_NO_ACTIVE_CHILD;
  localB->MI_motorStatus = UNKNOWN;
  localB->AMK_bInverterOn_tx = 0U;
  localB->AMK_bDcOn_tx = 0U;
  localB->AMK_bEnable = 0U;
  localB->AMK_bErrorReset = 0U;
  localB->AMK_TargetVelocity = 0.0F;
  localB->AMK_TorqueLimitPositiv = 0.0F;
  localB->AMK_TorqueLimitNegativ = 0.0F;
  localB->MI_InverterEn = 0.0;
}

/*
 * Output and update for atomic system:
 *    '<S7>/mi_left'
 *    '<S7>/mi_right'
 */
void controls_mi_left(MI_CMD rtu_GOV_e_miCmd, real_T rtu_AMK_bDcOn_rx, real_T
                      rtu_AMK_bError, real_T rtu_AMK_bInverterOn_rx, real_T
                      rtu_AMK_bQuitDcOn, real_T rtu_AMK_bQuitInverterOn, real_T
                      rtu_AMK_bSystemReady, real32_T rtu_VD_T_motorSpeedRequest,
                      real32_T rtu_VD_T_motorTorqueLimitPositi, real32_T
                      rtu_VD_T_motorTorqueLimitNegati, B_mi_left_controls_T
                      *localB, DW_mi_left_controls_T *localDW)
{
  if (localDW->temporalCounter_i1 < 511U) {
    localDW->temporalCounter_i1 = static_cast<uint16_T>
      (localDW->temporalCounter_i1 + 1U);
  }

  localDW->sfEvent = controls_CALL_EVENT;

  /* Chart: '<S7>/mi_left' */
  if (localDW->is_active_c9_motor_interface_li == 0U) {
    localDW->is_active_c9_motor_interface_li = 1U;
    localDW->is_c9_motor_interface_lib = contr_IN_motorOff_waitingForGov;
    localB->MI_motorStatus = OFF;
    localB->AMK_bInverterOn_tx = 0U;
    localB->AMK_bDcOn_tx = 0U;
    localB->AMK_bEnable = 0U;
    localB->AMK_bErrorReset = 0U;
    localB->AMK_TargetVelocity = 0.0F;
    localB->AMK_TorqueLimitPositiv = 0.0F;
    localB->AMK_TorqueLimitNegativ = 0.0F;
    localB->MI_InverterEn = 0.0;
  } else {
    switch (localDW->is_c9_motor_interface_lib) {
     case controls_IN_AMK_errorDetected:
      if (rtu_GOV_e_miCmd == ERR_RESET) {
        localDW->is_c9_motor_interface_lib = controls_IN_AMK_errorReset;
        localDW->is_AMK_errorReset = contr_IN_enforceSetpointsZero_j;
        localB->AMK_TargetVelocity = 0.0F;
        localB->AMK_TorqueLimitPositiv = 0.0F;
        localB->AMK_TorqueLimitNegativ = 0.0F;
        localB->AMK_bInverterOn_tx = 0U;
      }
      break;

     case controls_IN_AMK_errorReset:
      switch (localDW->is_AMK_errorReset) {
       case contr_IN_enforceSetpointsZero_j:
        localB->AMK_bInverterOn_tx = 0U;
        if (rtu_AMK_bInverterOn_rx == 0.0) {
          localDW->is_AMK_errorReset = controls_IN_toggleEnable;
          localDW->temporalCounter_i1 = 0U;
          localB->AMK_bEnable = 0U;
        }
        break;

       case controls_IN_sendReset:
        localB->AMK_bErrorReset = 1U;
        if (localDW->temporalCounter_i1 >= 500U) {
          localDW->is_AMK_errorReset = controls_IN_toggleReset;
          localB->AMK_bErrorReset = 0U;
        }
        break;

       case controls_IN_toggleEnable:
        localB->AMK_bEnable = 0U;
        if (localDW->temporalCounter_i1 >= 500U) {
          localDW->is_AMK_errorReset = controls_IN_sendReset;
          localDW->temporalCounter_i1 = 0U;
          localB->AMK_bErrorReset = 1U;
        }
        break;

       default:
        /* case IN_toggleReset: */
        localB->AMK_bErrorReset = 0U;
        if (rtu_AMK_bSystemReady == 1.0) {
          localDW->is_AMK_errorReset = controls_IN_NO_ACTIVE_CHILD;
          localDW->is_c9_motor_interface_lib = contr_IN_motorOff_waitingForGov;
          localB->MI_motorStatus = OFF;
          localB->AMK_bInverterOn_tx = 0U;
          localB->AMK_bDcOn_tx = 0U;
          localB->AMK_bEnable = 0U;
          localB->AMK_bErrorReset = 0U;
          localB->AMK_TargetVelocity = 0.0F;
          localB->AMK_TorqueLimitPositiv = 0.0F;
          localB->AMK_TorqueLimitNegativ = 0.0F;
          localB->MI_InverterEn = 0.0;
        }
        break;
      }
      break;

     case controls_IN_AMK_ready:
      {
        if (rtu_AMK_bError == 1.0) {
          localDW->is_c9_motor_interface_lib = controls_IN_AMK_errorDetected;
          localB->MI_motorStatus = MI_STS_ERROR;
        } else {
          boolean_T out;
          out = ((rtu_AMK_bQuitInverterOn == 1.0) && (rtu_AMK_bError == 0.0));
          if (out) {
            localDW->is_c9_motor_interface_lib = controls_IN_AMK_running;
          } else {
            localB->MI_motorStatus = READY;
            localB->MI_InverterEn = 1.0;
          }
        }
      }
      break;

     case controls_IN_AMK_running:
      if (rtu_AMK_bError == 1.0) {
        localDW->is_c9_motor_interface_lib = controls_IN_AMK_errorDetected;
        localB->MI_motorStatus = MI_STS_ERROR;
      } else if (rtu_GOV_e_miCmd == CMD_SHUTDOWN) {
        localDW->is_c9_motor_interface_lib = controls_IN_AMK_shutdown;
        localDW->temporalCounter_i1 = 0U;
        localB->AMK_TargetVelocity = 0.0F;
        localB->AMK_TorqueLimitPositiv = 0.0F;
        localB->AMK_TorqueLimitNegativ = 0.0F;
        localB->MI_InverterEn = 0.0;
      } else {
        localB->MI_motorStatus = RUNNING;
        localB->AMK_TargetVelocity = rtu_VD_T_motorSpeedRequest;
        localB->AMK_TorqueLimitPositiv = rtu_VD_T_motorTorqueLimitPositi;
        localB->AMK_TorqueLimitNegativ = rtu_VD_T_motorTorqueLimitNegati;
      }
      break;

     case controls_IN_AMK_shutdown:
      if (localDW->temporalCounter_i1 >= 500U) {
        localDW->is_c9_motor_interface_lib = contr_IN_motorOff_waitingForGov;
        localB->MI_motorStatus = OFF;
        localB->AMK_bInverterOn_tx = 0U;
        localB->AMK_bDcOn_tx = 0U;
        localB->AMK_bEnable = 0U;
        localB->AMK_bErrorReset = 0U;
        localB->AMK_TargetVelocity = 0.0F;
        localB->AMK_TorqueLimitPositiv = 0.0F;
        localB->AMK_TorqueLimitNegativ = 0.0F;
        localB->MI_InverterEn = 0.0;
      }
      break;

     case controls_IN_AMK_startup:
      {
        switch (localDW->is_AMK_startup) {
         case controls_IN_commandOn:
          localB->AMK_bEnable = 1U;
          localB->AMK_bInverterOn_tx = 1U;
          if (rtu_AMK_bInverterOn_rx == 1.0) {
            localDW->is_AMK_startup = controls_IN_NO_ACTIVE_CHILD;
            localDW->is_c9_motor_interface_lib = controls_IN_AMK_ready;
            localB->MI_motorStatus = READY;
            localB->MI_InverterEn = 1.0;
          } else if (rtu_AMK_bError == 1.0) {
            localDW->is_AMK_startup = controls_IN_NO_ACTIVE_CHILD;
            localDW->is_c9_motor_interface_lib = controls_IN_AMK_errorDetected;
            localB->MI_motorStatus = MI_STS_ERROR;
          }
          break;

         case control_IN_enforceSetpointsZero:
          if (localDW->temporalCounter_i1 >= 100U) {
            localDW->is_AMK_startup = controls_IN_commandOn;
            localB->AMK_bEnable = 1U;
            localB->AMK_bInverterOn_tx = 1U;
          } else if (rtu_AMK_bError == 1.0) {
            localDW->is_AMK_startup = controls_IN_NO_ACTIVE_CHILD;
            localDW->is_c9_motor_interface_lib = controls_IN_AMK_errorDetected;
            localB->MI_motorStatus = MI_STS_ERROR;
          }
          break;

         case controls_IN_toggleDCon:
          {
            boolean_T out;
            localB->AMK_bDcOn_tx = 1U;
            out = ((rtu_AMK_bDcOn_rx == 1.0) && (rtu_AMK_bQuitDcOn == 1.0));
            if (out) {
              localDW->is_AMK_startup = control_IN_enforceSetpointsZero;
              localDW->temporalCounter_i1 = 0U;
              localB->AMK_TargetVelocity = 0.0F;
              localB->AMK_TorqueLimitPositiv = 0.0F;
              localB->AMK_TorqueLimitNegativ = 0.0F;
            } else if (rtu_AMK_bError == 1.0) {
              localDW->is_AMK_startup = controls_IN_NO_ACTIVE_CHILD;
              localDW->is_c9_motor_interface_lib = controls_IN_AMK_errorDetected;
              localB->MI_motorStatus = MI_STS_ERROR;
            }
          }
          break;

         default:
          /* case IN_waiting_sysReady: */
          if (rtu_AMK_bSystemReady == 1.0) {
            localDW->is_AMK_startup = controls_IN_toggleDCon;
            localB->AMK_bDcOn_tx = 1U;
          } else if (rtu_AMK_bError == 1.0) {
            localDW->is_AMK_startup = controls_IN_NO_ACTIVE_CHILD;
            localDW->is_c9_motor_interface_lib = controls_IN_AMK_errorDetected;
            localB->MI_motorStatus = MI_STS_ERROR;
          }
          break;
        }
      }
      break;

     default:
      /* case IN_motorOff_waitingForGov: */
      localB->AMK_bInverterOn_tx = 0U;
      localB->AMK_bDcOn_tx = 0U;
      localB->AMK_bEnable = 0U;
      localB->AMK_bErrorReset = 0U;
      if (rtu_GOV_e_miCmd == CMD_STARTUP) {
        localDW->is_c9_motor_interface_lib = controls_IN_AMK_startup;
        localDW->is_AMK_startup = controls_IN_waiting_sysReady;
        localB->MI_motorStatus = STARTUP;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/mi_left' */
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (std::abs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = std::floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = std::ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void controls_step(void)
{
  real_T u0;
  real_T u1;
  real_T u2;
  int32_T i;
  boolean_T out;

  /* Reset subsysRan breadcrumbs */
  srClearBC(controls_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC);

  /* S-Function (sg_CANLIN_OfA2_setup_s): '<Root>/CAN and LIN Setup ' */

  /* Level2 S-Function Block: '<Root>/CAN and LIN Setup ' (sg_CANLIN_OfA2_setup_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* Delay: '<S6>/Delay' */
  controls_B.Delay_b = controls_DW.Delay_DSTATE;

  /* Constant: '<Root>/Constant1' */
  controls_B.Constant1 = controls_cal->Constant1_Value_o;

  /* Delay: '<S6>/Delay1' */
  controls_B.Delay1 = controls_DW.Delay1_DSTATE;

  /* Delay: '<S6>/Delay2' */
  controls_B.Delay2 = controls_DW.Delay2_DSTATE;

  /* Chart: '<S6>/governer_stateflow' */
  if (controls_DW.temporalCounter_i1 < 2047U) {
    controls_DW.temporalCounter_i1 = static_cast<uint16_T>
      (controls_DW.temporalCounter_i1 + 1U);
  }

  controls_DW.sfEvent_n = controls_CALL_EVENT_i;
  if (controls_DW.is_active_c8_governor_lib == 0U) {
    controls_DW.is_active_c8_governor_lib = 1U;
    controls_DW.is_c8_governor_lib = controls_IN_Initialize_outputs;
    controls_DW.temporalCounter_i1 = 0U;
    controls_B.GOV_e_govSts = GOV_INIT;
    controls_B.GOV_e_diCmd = DI_CMD_INIT;
    controls_B.GOV_e_bmCmd = BM_CMD_INIT;
    controls_DW.motorStartCount = 0U;
  } else {
    switch (controls_DW.is_c8_governor_lib) {
     case controls_IN_Initialize_outputs:
      controls_B.GOV_e_govSts = GOV_INIT;
      controls_B.GOV_e_diCmd = DI_CMD_INIT;
      controls_B.GOV_e_bmCmd = BM_CMD_INIT;
      out = ((controls_DW.temporalCounter_i1 >= 2000U) && (controls_B.Delay2 ==
              HV_START_REQ));
      if (out) {
        controls_DW.is_c8_governor_lib = controls_IN_STARTUP;
        controls_B.GOV_e_govSts = GOV_STARTUP;
        controls_DW.is_STARTUP = controls_IN_HV_startup;
        controls_B.GOV_e_bmCmd = HV_STARTUP;
      }
      break;

     case controls_IN_RUNNING:
      controls_B.GOV_e_govSts = GOV_RUNNING;
      out = ((controls_B.Delay_b == HVIL_INTERRUPT) || (controls_B.Delay_b ==
              BM_LOW_SOC));
      if (out) {
        controls_DW.is_c8_governor_lib = controls_IN_Vehicle_shutdown;
        controls_B.GOV_e_govSts = GOV_SHUTDOWN;
        controls_B.GOV_e_miCmd = CMD_SHUTDOWN;
        controls_B.GOV_e_diCmd = DI_SHUTDOWN;
      } else if (controls_B.Delay_b == ERR_RUNNING) {
        controls_DW.is_c8_governor_lib = controls_IN_RUNNING_ERROR;
        controls_DW.is_RUNNING_ERROR = controls_IN_HV_run_error;
        controls_B.GOV_e_diCmd = RUN_ERROR;
        controls_B.GOV_e_govSts = HV_RUN_ERROR;
      } else if (controls_B.Delay1 == MI_STS_ERROR) {
        controls_DW.is_c8_governor_lib = controls_IN_RUNNING_ERROR;
        controls_DW.is_RUNNING_ERROR = controls_IN_Motor_run_error;
        controls_B.GOV_e_diCmd = RUN_ERROR;
        controls_B.GOV_e_govSts = MOTOR_RUN_ERROR;
      }
      break;

     case controls_IN_RUNNING_ERROR:
      if (controls_DW.is_RUNNING_ERROR == controls_IN_HV_run_error) {
        controls_B.GOV_e_diCmd = RUN_ERROR;
        controls_B.GOV_e_govSts = HV_RUN_ERROR;
      } else {
        /* case IN_Motor_run_error: */
        controls_B.GOV_e_diCmd = RUN_ERROR;
        controls_B.GOV_e_govSts = MOTOR_RUN_ERROR;
      }
      break;

     case controls_IN_STARTUP:
      {
        controls_B.GOV_e_govSts = GOV_STARTUP;
        if (controls_B.Delay_b == HVIL_INTERRUPT) {
          controls_DW.is_STARTUP = controls_IN_NO_ACTIVE_CHILD_o;
          controls_DW.is_c8_governor_lib = controls_IN_STARTUP_ERROR;
          controls_DW.is_STARTUP_ERROR = controls_IN_HV_startup_error;
          controls_B.GOV_e_govSts = HV_STARTUP_ERROR;
          controls_B.GOV_e_diCmd = DI_SHUTDOWN;
        } else if (controls_B.Delay2 == DI_ERROR) {
          controls_DW.is_STARTUP = controls_IN_NO_ACTIVE_CHILD_o;
          controls_DW.is_c8_governor_lib = controls_IN_STARTUP_ERROR;
          controls_DW.is_STARTUP_ERROR = contro_IN_DriverInterface_Error;
          controls_B.GOV_e_govSts = GOV_DI_ERROR;
        } else if (controls_B.Delay1 == MI_STS_ERROR) {
          if (controls_DW.motorStartCount >= 5) {
            controls_DW.is_STARTUP = controls_IN_NO_ACTIVE_CHILD_o;
            controls_DW.is_c8_governor_lib = controls_IN_STARTUP_ERROR;
            controls_DW.is_STARTUP_ERROR = controls_IN_Motor_faulted;
            controls_B.GOV_e_miCmd = CMD_SHUTDOWN;
            controls_B.GOV_e_govSts = MOTOR_STARTUP_ERROR;
          } else {
            controls_DW.is_STARTUP = controls_IN_NO_ACTIVE_CHILD_o;
            controls_DW.is_c8_governor_lib = controls_IN_STARTUP_ERROR;
            controls_DW.is_STARTUP_ERROR = controls_IN_Err_reset;
          }
        } else {
          switch (controls_DW.is_STARTUP) {
           case contro_IN_Command_motor_startup:
            if (controls_B.Delay1 == RUNNING) {
              controls_DW.is_STARTUP = controls_IN_Send_ReadyToDrive;
              controls_B.GOV_e_diCmd = READY_TO_DRIVE;
            }
            break;

           case controls_IN_HV_startup:
            controls_B.GOV_e_bmCmd = HV_STARTUP;
            if (controls_B.Delay_b == BM_RUNNING) {
              controls_DW.is_STARTUP = controls_IN_ReadyToDrive;
              controls_B.GOV_e_diCmd = HV_ON;
            }
            break;

           case controls_IN_ReadyToDrive:
            {
              controls_B.GOV_e_diCmd = HV_ON;
              if (controls_B.Delay2 == READY_TO_DRIVE_REQ) {
                uint32_T tmp;
                controls_DW.is_STARTUP = contro_IN_Command_motor_startup;
                controls_B.GOV_e_miCmd = CMD_STARTUP;
                tmp = controls_DW.motorStartCount + 1U;
                if (tmp > 65535U) {
                  tmp = 65535U;
                }

                controls_DW.motorStartCount = static_cast<uint16_T>(tmp);
              }
            }
            break;

           default:
            /* case IN_Send_ReadyToDrive: */
            controls_B.GOV_e_diCmd = READY_TO_DRIVE;
            if (controls_B.Delay2 == DI_RUNNING) {
              controls_DW.is_STARTUP = controls_IN_NO_ACTIVE_CHILD_o;
              controls_DW.is_c8_governor_lib = controls_IN_RUNNING;
              controls_B.GOV_e_govSts = GOV_RUNNING;
            }
            break;
          }
        }
      }
      break;

     case controls_IN_STARTUP_ERROR:
      switch (controls_DW.is_STARTUP_ERROR) {
       case contro_IN_DriverInterface_Error:
        controls_B.GOV_e_govSts = GOV_DI_ERROR;
        break;

       case controls_IN_Err_reset:
        if (controls_B.Delay1 == OFF) {
          controls_DW.is_STARTUP_ERROR = controls_IN_NO_ACTIVE_CHILD_o;
          controls_DW.is_c8_governor_lib = controls_IN_STARTUP;
          controls_B.GOV_e_govSts = GOV_STARTUP;
          controls_DW.is_STARTUP = controls_IN_HV_startup;
          controls_B.GOV_e_bmCmd = HV_STARTUP;
        } else {
          controls_B.GOV_e_miCmd = ERR_RESET;
        }
        break;

       case controls_IN_HV_startup_error:
        controls_B.GOV_e_govSts = HV_STARTUP_ERROR;
        controls_B.GOV_e_diCmd = DI_SHUTDOWN;
        if (controls_B.Delay_b == BM_INIT) {
          controls_DW.is_STARTUP_ERROR = controls_IN_NO_ACTIVE_CHILD_o;
          controls_DW.is_c8_governor_lib = controls_IN_Initialize_outputs;
          controls_DW.temporalCounter_i1 = 0U;
          controls_B.GOV_e_govSts = GOV_INIT;
          controls_B.GOV_e_diCmd = DI_CMD_INIT;
          controls_B.GOV_e_bmCmd = BM_CMD_INIT;
          controls_DW.motorStartCount = 0U;
        }
        break;

       default:
        /* case IN_Motor_faulted: */
        controls_B.GOV_e_govSts = MOTOR_STARTUP_ERROR;
        break;
      }
      break;

     default:
      /* case IN_Vehicle_shutdown: */
      controls_B.GOV_e_govSts = GOV_SHUTDOWN;
      controls_B.GOV_e_diCmd = DI_SHUTDOWN;
      if (controls_B.Delay_b == BM_INIT) {
        controls_DW.is_c8_governor_lib = controls_IN_Initialize_outputs;
        controls_DW.temporalCounter_i1 = 0U;
        controls_B.GOV_e_govSts = GOV_INIT;
        controls_B.GOV_e_diCmd = DI_CMD_INIT;
        controls_B.GOV_e_bmCmd = BM_CMD_INIT;
        controls_DW.motorStartCount = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S6>/governer_stateflow' */

  /* S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read 1' */

  /* Level2 S-Function Block: '<Root>/CAN Read 1' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* Outputs for Atomic SubSystem: '<Root>/Function-Call Subsystem2' */
  /* S-Function (scanunpack): '<S3>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S3>/CAN Unpack' */
    if ((3 == controls_B.CANRead1_o2.Length) && (controls_B.CANRead1_o2.ID !=
         INVALID_CAN_ID) ) {
      if ((1574 == controls_B.CANRead1_o2.ID) && (0U ==
           controls_B.CANRead1_o2.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 8
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
                    (controls_B.CANRead1_o2.Data[1]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.CANUnpack_o1 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
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
                    (controls_B.CANRead1_o2.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.CANUnpack_o2 = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 16
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
                    (controls_B.CANRead1_o2.Data[2]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.CANUnpack_o3 = result;
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem2' */

  /* Logic: '<S4>/NOT' */
  controls_B.NOT = !(controls_B.CANUnpack_o3 != 0.0);

  /* Logic: '<S4>/NOT1' */
  controls_B.NOT1 = !(controls_B.CANUnpack_o2 != 0.0);

  /* Logic: '<S4>/NOT2' */
  controls_B.NOT2 = !(controls_B.CANUnpack_o1 != 0.0);

  /* Constant: '<Root>/Constant13' */
  controls_B.Constant13 = controls_cal->Constant13_Value;

  /* Constant: '<Root>/Constant14' */
  controls_B.Constant14 = controls_cal->Constant14_Value;

  /* Chart: '<S4>/battery_monitor' */
  if (controls_DW.temporalCounter_i1_l < 8191U) {
    controls_DW.temporalCounter_i1_l = static_cast<uint16_T>
      (controls_DW.temporalCounter_i1_l + 1U);
  }

  controls_DW.sfEvent_i = controls_CALL_EVENT_i;
  if (controls_DW.is_active_c4_battery_monitor_li == 0U) {
    controls_DW.is_active_c4_battery_monitor_li = 1U;
    controls_DW.is_c4_battery_monitor_lib = controls_IN_InitialState;
    controls_B.GOV_e_bmSts = BM_INIT;
  } else {
    switch (controls_DW.is_c4_battery_monitor_lib) {
     case controls_IN_InitialState:
      controls_B.GOV_e_bmSts = BM_INIT;
      out = ((!controls_B.NOT) && (!controls_B.NOT2) && (!controls_B.NOT1) &&
             (controls_B.GOV_e_bmCmd == HV_STARTUP) && (controls_B.Constant13 ==
              1.0));
      if (out) {
        controls_DW.is_c4_battery_monitor_lib = controls_IN_StartupSuperstate;
        controls_DW.is_StartupSuperstate_p = controls_IN_StartupState1;
        controls_B.GOV_e_bmSts = BM_IDLE;
      }
      break;

     case controls_IN_InterruptState:
      controls_B.GOV_e_bmSts = HVIL_INTERRUPT;
      out = ((controls_DW.temporalCounter_i1_l >= 5000U) &&
             (controls_B.Constant13 == 1.0));
      if (out) {
        controls_DW.is_c4_battery_monitor_lib = controls_IN_InitialState;
        controls_B.GOV_e_bmSts = BM_INIT;
      }
      break;

     case controls_IN_LowSoC:
      controls_B.GOV_e_bmSts = BM_LOW_SOC;
      break;

     default:
      /* case IN_StartupSuperstate: */
      if (controls_B.Constant13 == 0.0) {
        controls_DW.is_StartupSuperstate_p = controls_IN_NO_ACTIVE_CHILD_o;
        controls_DW.is_c4_battery_monitor_lib = controls_IN_InterruptState;
        controls_DW.temporalCounter_i1_l = 0U;
        controls_B.GOV_e_bmSts = HVIL_INTERRUPT;
      } else if (controls_B.Constant14 < 30.0) {
        controls_DW.is_StartupSuperstate_p = controls_IN_NO_ACTIVE_CHILD_o;
        controls_DW.is_c4_battery_monitor_lib = controls_IN_LowSoC;
        controls_B.GOV_e_bmSts = BM_LOW_SOC;
      } else {
        switch (controls_DW.is_StartupSuperstate_p) {
         case con_IN_InitializePrechargeState:
          controls_B.GOV_e_bmSts = INIT_PRECHARGE;
          out = (controls_B.NOT && controls_B.NOT2 && controls_B.NOT1);
          if (out) {
            controls_DW.is_StartupSuperstate_p = controls_IN_PrechargeState;
            controls_B.GOV_e_bmSts = PRECHARGE;
          }
          break;

         case controls_IN_PrechargeState:
          controls_B.GOV_e_bmSts = PRECHARGE;
          out = ((!controls_B.NOT) && controls_B.NOT2 && controls_B.NOT1);
          if (out) {
            controls_DW.is_StartupSuperstate_p = controls_IN_RunningState;
            controls_B.GOV_e_bmSts = BM_RUNNING;
          }
          break;

         case controls_IN_RunningState:
          controls_B.GOV_e_bmSts = BM_RUNNING;
          out = ((!controls_B.NOT) && controls_B.NOT2 && controls_B.NOT1);
          if (out) {
            controls_DW.is_StartupSuperstate_p = controls_IN_RunningState;
            controls_B.GOV_e_bmSts = BM_RUNNING;
          }
          break;

         case controls_IN_StartupState:
          controls_B.GOV_e_bmSts = BM_STARTUP;
          out = (controls_B.NOT && controls_B.NOT2 && (!controls_B.NOT1));
          if (out) {
            controls_DW.is_StartupSuperstate_p = con_IN_InitializePrechargeState;
            controls_B.GOV_e_bmSts = INIT_PRECHARGE;
          }
          break;

         default:
          /* case IN_StartupState1: */
          controls_B.GOV_e_bmSts = BM_IDLE;
          out = ((!controls_B.NOT) && controls_B.NOT2 && (!controls_B.NOT1));
          if (out) {
            controls_DW.is_StartupSuperstate_p = controls_IN_StartupState;
            controls_B.GOV_e_bmSts = BM_STARTUP;
          }
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S4>/battery_monitor' */

  /* Chart: '<S4>/bm_control' */
  if (controls_DW.temporalCounter_i1_k < 8191U) {
    controls_DW.temporalCounter_i1_k = static_cast<uint16_T>
      (controls_DW.temporalCounter_i1_k + 1U);
  }

  controls_DW.sfEvent_j = controls_CALL_EVENT_i;
  if (controls_DW.is_active_c5_battery_monitor_li == 0U) {
    controls_DW.is_active_c5_battery_monitor_li = 1U;
    controls_DW.is_c5_battery_monitor_lib = controls_IN_StartupCMD;
    controls_B.BM_b_prechargeContactorCMD = 0.0;
    controls_B.BM_b_HVnegContactorCMD = 0.0;
    controls_B.BM_b_HVposContactorCMD = 0.0;
  } else if (controls_DW.is_c5_battery_monitor_lib == controls_IN_StartupCMD) {
    if (controls_B.GOV_e_bmSts == BM_IDLE) {
      controls_DW.is_c5_battery_monitor_lib = controls_IN_StartupSuperstate_g;
      controls_DW.is_StartupSuperstate = controls_IN_Close_HVneg1;
      controls_DW.temporalCounter_i1_k = 0U;
      controls_B.BM_b_prechargeContactorCMD = 0.0;
      controls_B.BM_b_HVnegContactorCMD = 1.0;
      controls_B.BM_b_HVposContactorCMD = 0.0;
    }
  } else {
    /* case IN_StartupSuperstate: */
    out = ((controls_B.GOV_e_bmSts == HVIL_INTERRUPT) || (controls_B.GOV_e_bmSts
            == BM_LOW_SOC));
    if (out) {
      controls_DW.is_StartupSuperstate = controls_IN_NO_ACTIVE_CHILD_o;
      controls_DW.is_c5_battery_monitor_lib = controls_IN_StartupCMD;
      controls_B.BM_b_prechargeContactorCMD = 0.0;
      controls_B.BM_b_HVnegContactorCMD = 0.0;
      controls_B.BM_b_HVposContactorCMD = 0.0;
    } else {
      switch (controls_DW.is_StartupSuperstate) {
       case controls_IN_Close_HVneg1:
        out = ((controls_DW.temporalCounter_i1_k >= 100U) &&
               (controls_B.GOV_e_bmSts == BM_STARTUP));
        if (out) {
          controls_DW.is_StartupSuperstate = controls_IN_Close_precharge;
          controls_DW.temporalCounter_i1_k = 0U;
          controls_B.BM_b_prechargeContactorCMD = 1.0;
          controls_B.BM_b_HVnegContactorCMD = 1.0;
          controls_B.BM_b_HVposContactorCMD = 0.0;
        }
        break;

       case controls_IN_Close_HVpos:
        out = ((controls_DW.temporalCounter_i1_k >= 100U) &&
               (controls_B.GOV_e_bmSts == PRECHARGE));
        if (out) {
          controls_DW.is_StartupSuperstate = controls_IN_Open_precharge;
          controls_B.BM_b_prechargeContactorCMD = 0.0;
          controls_B.BM_b_HVnegContactorCMD = 1.0;
          controls_B.BM_b_HVposContactorCMD = 1.0;
        }
        break;

       case controls_IN_Close_precharge:
        out = ((controls_DW.temporalCounter_i1_k >= 6500U) &&
               (controls_B.GOV_e_bmSts == INIT_PRECHARGE));
        if (out) {
          controls_DW.is_StartupSuperstate = controls_IN_Close_HVpos;
          controls_DW.temporalCounter_i1_k = 0U;
          controls_B.BM_b_prechargeContactorCMD = 1.0;
          controls_B.BM_b_HVnegContactorCMD = 1.0;
          controls_B.BM_b_HVposContactorCMD = 1.0;
        }
        break;

       default:
        /* case IN_Open_precharge: */
        if (controls_B.GOV_e_bmSts == BM_RUNNING) {
          controls_DW.is_StartupSuperstate = controls_IN_Open_precharge;
          controls_B.BM_b_prechargeContactorCMD = 0.0;
          controls_B.BM_b_HVnegContactorCMD = 1.0;
          controls_B.BM_b_HVposContactorCMD = 1.0;
        } else {
          controls_B.BM_b_prechargeContactorCMD = 0.0;
          controls_B.BM_b_HVnegContactorCMD = 1.0;
          controls_B.BM_b_HVposContactorCMD = 1.0;
        }
        break;
      }
    }
  }

  /* End of Chart: '<S4>/bm_control' */

  /* S-Function (scanpack): '<Root>/CAN Pack' */
  /* S-Function (scanpack): '<Root>/CAN Pack' */
  controls_B.CANPack.ID = 1570U;
  controls_B.CANPack.Length = 3U;
  controls_B.CANPack.Extended = 0U;
  controls_B.CANPack.Remote = 0;
  controls_B.CANPack.Data[0] = 0;
  controls_B.CANPack.Data[1] = 0;
  controls_B.CANPack.Data[2] = 0;
  controls_B.CANPack.Data[3] = 0;
  controls_B.CANPack.Data[4] = 0;
  controls_B.CANPack.Data[5] = 0;
  controls_B.CANPack.Data[6] = 0;
  controls_B.CANPack.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 16
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = controls_B.BM_b_HVnegContactorCMD;

        /* no scaling required */
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
            controls_B.CANPack.Data[2] = controls_B.CANPack.Data[2] | (uint8_T)
              (packedValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 0
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = controls_B.BM_b_HVposContactorCMD;

        /* no scaling required */
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
            controls_B.CANPack.Data[0] = controls_B.CANPack.Data[0] | (uint8_T)
              (packedValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 8
     *  length                  = 8
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = controls_B.BM_b_prechargeContactorCMD;

        /* no scaling required */
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
            controls_B.CANPack.Data[1] = controls_B.CANPack.Data[1] | (uint8_T)
              (packedValue);
          }
        }
      }
    }
  }

  /* S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read ' */

  /* Level2 S-Function Block: '<Root>/CAN Read ' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* Outputs for Atomic SubSystem: '<Root>/AMK_Input' */
  /* S-Function (scanunpack): '<S1>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S1>/CAN Unpack' */
    if ((8 == controls_B.CANRead_o2.Length) && (controls_B.CANRead_o2.ID !=
         INVALID_CAN_ID) ) {
      if ((645 == controls_B.CANRead_o2.ID) && (0U ==
           controls_B.CANRead_o2.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 16
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[3]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_ActualVelocity_R = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 48
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [6]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[7]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_MagnetizingCurrent_R = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 32
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [4]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[5]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_TorqueCurrent_R = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 12
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x10U)) >> 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bDcOn_R = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 15
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x80U)) >> 7);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bDerating_R = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 9
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x2U)) >> 1);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bError_R = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 14
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x40U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bInverterOn_R = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 11
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x8U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bQuitDcOn_R = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 13
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x20U)) >> 5);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bQuitInverterOn_R = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 8
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
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bSystemReady_R = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 10
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x4U)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bWarn_R = result;
            }
          }
        }
      }
    }
  }

  /* S-Function (scanunpack): '<S1>/CAN Unpack1' */
  {
    /* S-Function (scanunpack): '<S1>/CAN Unpack1' */
    if ((8 == controls_B.CANRead_o2.Length) && (controls_B.CANRead_o2.ID !=
         INVALID_CAN_ID) ) {
      if ((647 == controls_B.CANRead_o2.ID) && (0U ==
           controls_B.CANRead_o2.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 32
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [4]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[5]) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_ErrorInfo_R = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 48
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 0.1
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [6]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[7]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.1;
              controls_B.AMK_TempIGBT_R = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 16
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 0.1
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[3]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.1;
              controls_B.AMK_TempInverter_R = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 0
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 0.1
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [0]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[1]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.1;
              controls_B.AMK_TempMotor_R = result;
            }
          }
        }
      }
    }
  }

  /* S-Function (scanunpack): '<S1>/CAN Unpack2' */
  {
    /* S-Function (scanunpack): '<S1>/CAN Unpack2' */
    if ((8 == controls_B.CANRead_o2.Length) && (controls_B.CANRead_o2.ID !=
         INVALID_CAN_ID) ) {
      if ((644 == controls_B.CANRead_o2.ID) && (0U ==
           controls_B.CANRead_o2.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 16
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[3]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_ActualVelocity_L = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 48
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [6]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[7]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_MagnetizingCurrent_L = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 32
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [4]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[5]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_TorqueCurrent_L_k = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 12
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x10U)) >> 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bDcOn_L_p = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 15
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x80U)) >> 7);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bDerating_L_i = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 9
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x2U)) >> 1);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bError_L = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 14
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x40U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bInverterOn_L = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 11
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x8U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bQuitDcOn_L_k = result;
            }
          }

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 13
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x20U)) >> 5);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bQuitInverterOn_L_p = result;
            }
          }

          /* --------------- START Unpacking signal 9 ------------------
           *  startBit                = 8
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
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bSystemReady_L = result;
            }
          }

          /* --------------- START Unpacking signal 10 ------------------
           *  startBit                = 10
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controls_B.CANRead_o2.Data[1]) & (uint8_T)(0x4U)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_bWarn_L = result;
            }
          }
        }
      }
    }
  }

  /* S-Function (scanunpack): '<S1>/CAN Unpack3' */
  {
    /* S-Function (scanunpack): '<S1>/CAN Unpack3' */
    if ((8 == controls_B.CANRead_o2.Length) && (controls_B.CANRead_o2.ID !=
         INVALID_CAN_ID) ) {
      if ((646 == controls_B.CANRead_o2.ID) && (0U ==
           controls_B.CANRead_o2.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 32
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [4]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[5]) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.AMK_ErrorInfo_L = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 48
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 0.1
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [6]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[7]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.1;
              controls_B.AMK_TempIGBT_L = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 16
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 0.1
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[3]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.1;
              controls_B.AMK_TempInverter_L = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 0
           *  length                  = 16
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 0.1
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);
                int16_T* tempValuePtr = (int16_T*)&tempValue;

                {
                  tempValue = tempValue | (uint16_T)(controls_B.CANRead_o2.Data
                    [0]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controls_B.CANRead_o2.Data[1]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.1;
              controls_B.AMK_TempMotor_L = result;
            }
          }
        }
      }
    }
  }

  /* Constant: '<S1>/Constant' */
  controls_B.AMK_bReserve_R = controls_cal->Constant_Value;

  /* Constant: '<S1>/Constant1' */
  controls_B.AMK_bReserve_L = controls_cal->Constant1_Value;

  /* End of Outputs for SubSystem: '<Root>/AMK_Input' */

  /* DataTypeConversion: '<S7>/Cast To Single3' incorporates:
   *  Constant: '<S8>/Constant'
   */
  controls_B.CastToSingle3 = static_cast<real32_T>
    (controls_cal->Constant_Value_f);

  /* S-Function (scanunpack): '<Root>/CAN Unpack2' */
  {
    /* S-Function (scanunpack): '<Root>/CAN Unpack2' */
    if ((8 == controls_B.CANRead1_o2.Length) && (controls_B.CANRead1_o2.ID !=
         INVALID_CAN_ID) ) {
      if ((256 == controls_B.CANRead1_o2.ID) && (0U ==
           controls_B.CANRead1_o2.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 8
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.005
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)(controls_B.CANRead1_o2.Data
                    [0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.005;
              controls_B.CANUnpack2_o1 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 8
           *  length                  = 8
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.005
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)(controls_B.CANRead1_o2.Data
                    [1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.005;
              controls_B.CANUnpack2_o2 = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 16
           *  length                  = 8
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.005
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 24
           *  length                  = 8
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.005
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 41
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 40
           *  length                  = 1
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              int8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);
                int8_T* tempValuePtr = (int8_T*)&tempValue;

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (controls_B.CANRead1_o2.Data[5]) & (uint8_T)(0x1U));
                }

                unpackedValue = *tempValuePtr;
              }

              {
                uint8_T* tempRawValuePtr = (uint8_T*)&unpackedValue;
                uint8_T tempValue = *tempRawValuePtr;
                int8_T* tempValuePtr = (int8_T*)&tempValue;
                uint8_T bitValue = tempValue & (uint8_T)0x1U;
                if (bitValue != 0U) {
                  /* Extend sign bits */
                  tempValue = tempValue | (uint8_T)0xFEU;
                  unpackedValue = *tempValuePtr;
                }
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controls_B.CANUnpack2_o6 = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 32
           *  length                  = 8
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 0.005
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)(controls_B.CANRead1_o2.Data
                    [4]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.005;
              controls_B.CANUnpack2_o7 = result;
            }
          }

          /* --------------- START Unpacking signal 7 ------------------
           *  startBit                = 48
           *  length                  = 12
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

          /* --------------- START Unpacking signal 8 ------------------
           *  startBit                = 60
           *  length                  = 12
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = SIGNED
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

  /* Logic: '<Root>/NOT' */
  controls_B.NOT_h = !(controls_B.CANUnpack2_o6 != 0.0);

  /* Logic: '<S5>/NOT1' */
  controls_B.NOT1_e = !controls_B.NOT_h;

  /* RelationalOperator: '<S20>/Lower Test' incorporates:
   *  Constant: '<S15>/LowerPotentiometerLimit1'
   */
  controls_B.LowerTest = (controls_cal->LowerPotentiometerLimit1_Value <=
    controls_B.CANUnpack2_o1);

  /* RelationalOperator: '<S20>/Upper Test' incorporates:
   *  Constant: '<S15>/UpperPotentiometerLimit1'
   */
  controls_B.UpperTest = (controls_B.CANUnpack2_o1 <=
    controls_cal->UpperPotentiometerLimit1_Value);

  /* Logic: '<S20>/FixPt Logical Operator' */
  controls_B.FixPtLogicalOperator = (controls_B.LowerTest &&
    controls_B.UpperTest);

  /* Logic: '<S15>/NOT' */
  controls_B.NOT_d = !controls_B.FixPtLogicalOperator;

  /* RelationalOperator: '<S21>/Lower Test' incorporates:
   *  Constant: '<S16>/LowerPotentiometerLimit1'
   */
  controls_B.LowerTest_a = (controls_cal->LowerPotentiometerLimit1_Valu_p <=
    controls_B.CANUnpack2_o2);

  /* RelationalOperator: '<S21>/Upper Test' incorporates:
   *  Constant: '<S16>/UpperPotentiometerLimit1'
   */
  controls_B.UpperTest_l = (controls_B.CANUnpack2_o2 <=
    controls_cal->UpperPotentiometerLimit1_Valu_j);

  /* Logic: '<S21>/FixPt Logical Operator' */
  controls_B.FixPtLogicalOperator_e = (controls_B.LowerTest_a &&
    controls_B.UpperTest_l);

  /* Logic: '<S16>/NOT' */
  controls_B.NOT_g = !controls_B.FixPtLogicalOperator_e;

  /* RelationalOperator: '<S22>/Lower Test' incorporates:
   *  Constant: '<S17>/LowerPotentiometerLimit1'
   */
  controls_B.LowerTest_g = (controls_cal->LowerPotentiometerLimit1_Valu_f <= 0.0);

  /* RelationalOperator: '<S22>/Upper Test' incorporates:
   *  Constant: '<S17>/UpperPotentiometerLimit1'
   */
  controls_B.UpperTest_i = (controls_cal->UpperPotentiometerLimit1_Valu_a >= 0.0);

  /* Logic: '<S22>/FixPt Logical Operator' */
  controls_B.FixPtLogicalOperator_l = (controls_B.LowerTest_g &&
    controls_B.UpperTest_i);

  /* Logic: '<S17>/NOT' */
  controls_B.NOT_i = !controls_B.FixPtLogicalOperator_l;

  /* RelationalOperator: '<S23>/Lower Test' incorporates:
   *  Constant: '<S18>/LowerPotentiometerLimit1'
   */
  controls_B.LowerTest_m = (controls_cal->LowerPotentiometerLimit1_Valu_i <= 0.0);

  /* RelationalOperator: '<S23>/Upper Test' incorporates:
   *  Constant: '<S18>/UpperPotentiometerLimit1'
   */
  controls_B.UpperTest_e = (controls_cal->UpperPotentiometerLimit1_Valu_g >= 0.0);

  /* Logic: '<S23>/FixPt Logical Operator' */
  controls_B.FixPtLogicalOperator_k = (controls_B.LowerTest_m &&
    controls_B.UpperTest_e);

  /* Logic: '<S18>/NOT' */
  controls_B.NOT_f = !controls_B.FixPtLogicalOperator_k;

  /* RelationalOperator: '<S24>/Lower Test' incorporates:
   *  Constant: '<S19>/LowerPotentiometerLimit1'
   */
  controls_B.LowerTest_k = (controls_cal->LowerPotentiometerLimit1_Val_fz <=
    controls_B.CANUnpack2_o7);

  /* RelationalOperator: '<S24>/Upper Test' incorporates:
   *  Constant: '<S19>/UpperPotentiometerLimit1'
   */
  controls_B.UpperTest_g = (controls_B.CANUnpack2_o7 <=
    controls_cal->UpperPotentiometerLimit1_Valu_k);

  /* Logic: '<S24>/FixPt Logical Operator' */
  controls_B.FixPtLogicalOperator_i = (controls_B.LowerTest_k &&
    controls_B.UpperTest_g);

  /* Logic: '<S19>/NOT' */
  controls_B.NOT_p = !controls_B.FixPtLogicalOperator_i;

  /* Sum: '<S11>/Subtract' */
  controls_B.Subtract = controls_B.CANUnpack2_o1 - controls_B.CANUnpack2_o2;

  /* Abs: '<S11>/Abs' */
  controls_B.Abs = std::abs(controls_B.Subtract);

  /* RelationalOperator: '<S11>/GreaterThan' incorporates:
   *  Constant: '<S11>/Constant'
   */
  controls_B.GreaterThan = (controls_B.Abs > controls_cal->Constant_Value_i);

  /* Switch: '<S11>/Switch' */
  if (controls_B.GreaterThan) {
    /* Switch: '<S11>/Switch' incorporates:
     *  Constant: '<S11>/Constant1'
     */
    controls_B.Switch = controls_cal->Constant1_Value_j;
  } else {
    /* Switch: '<S11>/Switch' incorporates:
     *  Constant: '<S11>/Constant2'
     */
    controls_B.Switch = controls_cal->Constant2_Value;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Logic: '<S5>/b_DriverInterfaceError' */
  controls_B.b_DriverInterfaceError = (controls_B.NOT_d || controls_B.NOT_g ||
    controls_B.NOT_i || controls_B.NOT_f || controls_B.NOT_p ||
    (controls_B.Switch != 0.0));

  /* MinMax: '<S5>/Max' */
  controls_B.Max = 0.0;

  /* Chart: '<S5>/driver_interface' */
  if (controls_DW.temporalCounter_i1_m < 2047U) {
    controls_DW.temporalCounter_i1_m = static_cast<uint16_T>
      (controls_DW.temporalCounter_i1_m + 1U);
  }

  controls_DW.sfEvent_dr = controls_CALL_EVENT_i;
  if (controls_DW.is_active_c2_driver_interface_l == 0U) {
    controls_DW.is_active_c2_driver_interface_l = 1U;
    controls_DW.is_c2_driver_interface_lib = controls_IN_INIT;
    controls_B.GOV_e_diSts = DI_STS_INIT;
    controls_B.b_ReadyToDrive = false;
    controls_B.DI_b_driverSpeaker = false;
  } else {
    switch (controls_DW.is_c2_driver_interface_lib) {
     case controls_IN_DI_error:
      controls_B.GOV_e_diSts = DI_ERROR;
      break;

     case controls_IN_DI_running:
      if (controls_B.b_DriverInterfaceError) {
        controls_DW.is_Ready_to_drive = controls_IN_NO_ACTIVE_CHILD_o;
        controls_DW.is_DI_running = controls_IN_NO_ACTIVE_CHILD_o;
        controls_DW.is_c2_driver_interface_lib = controls_IN_DI_error;
        controls_B.GOV_e_diSts = DI_ERROR;
      } else if (controls_B.GOV_e_diCmd == DI_SHUTDOWN) {
        controls_DW.is_Ready_to_drive = controls_IN_NO_ACTIVE_CHILD_o;
        controls_DW.is_DI_running = controls_IN_NO_ACTIVE_CHILD_o;
        controls_DW.is_c2_driver_interface_lib = controls_IN_INIT;
        controls_B.GOV_e_diSts = DI_STS_INIT;
        controls_B.b_ReadyToDrive = false;
        controls_B.DI_b_driverSpeaker = false;
      } else {
        switch (controls_DW.is_DI_running) {
         case contr_IN_Driver_requested_start:
          controls_B.GOV_e_diSts = HV_START_REQ;
          out = ((controls_B.GOV_e_diCmd == HV_ON) && controls_B.NOT1_e);
          if (out) {
            controls_DW.is_DI_running = controls_IN_Motor_start_request;
            controls_B.GOV_e_diSts = READY_TO_DRIVE_REQ;
          }
          break;

         case controls_IN_Motor_start_request:
          controls_B.GOV_e_diSts = READY_TO_DRIVE_REQ;
          break;

         case controls_IN_Ready_to_drive:
          controls_B.b_ReadyToDrive = true;
          controls_B.GOV_e_diSts = DI_RUNNING;
          if (controls_B.GOV_e_diCmd == RUN_ERROR) {
            controls_DW.is_Ready_to_drive = controls_IN_NO_ACTIVE_CHILD_o;
            controls_DW.is_DI_running = controls_IN_NO_ACTIVE_CHILD_o;
            controls_DW.is_c2_driver_interface_lib =
              controls_IN_Vehicle_coasting;
            controls_B.b_ReadyToDrive = false;
            controls_B.GOV_e_diSts = DI_IDLE;
          } else if (controls_DW.is_Ready_to_drive == controls_IN_SpeakerOff) {
            controls_B.DI_b_driverSpeaker = false;
          } else {
            /* case IN_SpeakerOn_: */
            controls_B.DI_b_driverSpeaker = true;
            if (controls_DW.temporalCounter_i1_m >= 2000U) {
              controls_DW.is_Ready_to_drive = controls_IN_SpeakerOff;
              controls_B.DI_b_driverSpeaker = false;
            }
          }
          break;

         default:
          /* case IN_Waiting_for_driver: */
          controls_B.GOV_e_diSts = WAITING_FOR_DRVR;
          if (controls_B.NOT1_e) {
            controls_DW.is_DI_running = contr_IN_Driver_requested_start;
            controls_B.GOV_e_diSts = HV_START_REQ;
          }
          break;
        }
      }
      break;

     case controls_IN_INIT:
      controls_B.GOV_e_diSts = DI_STS_INIT;
      controls_B.b_ReadyToDrive = false;
      controls_B.DI_b_driverSpeaker = false;
      if (controls_B.GOV_e_diCmd == DI_CMD_INIT) {
        controls_DW.is_c2_driver_interface_lib = controls_IN_DI_running;
        controls_DW.is_DI_running = controls_IN_Waiting_for_driver;
        controls_B.GOV_e_diSts = WAITING_FOR_DRVR;
      }
      break;

     default:
      /* case IN_Vehicle_coasting: */
      controls_B.b_ReadyToDrive = false;
      controls_B.GOV_e_diSts = DI_IDLE;
      break;
    }
  }

  /* End of Chart: '<S5>/driver_interface' */

  /* Logic: '<S5>/NOT' */
  controls_B.NOT_fr = !controls_B.b_ReadyToDrive;

  /* Logic: '<S5>/OR1' */
  controls_B.OR1 = (controls_B.NOT_fr || controls_B.b_DriverInterfaceError);

  /* Lookup_n-D: '<S5>/AccelPedalMap' incorporates:
   *  S-Function (scanunpack): '<Root>/CAN Unpack2'
   */
  controls_B.AccelPedalMap = look1_binlcpw(controls_B.CANUnpack2_o1,
    controls_cal->AccelPedalMap_bp01Data, controls_cal->AccelPedalMap_tableData,
    1U);

  /* If: '<S5>/If' incorporates:
   *  Constant: '<S5>/Constant'
   */
  if (controls_B.OR1) {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    controls_IfActionSubsystem(controls_cal->Constant_Value_g, &controls_B.Merge);

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    controls_IfActionSubsystem(controls_B.AccelPedalMap, &controls_B.Merge);

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem1' */
  }

  /* End of If: '<S5>/If' */

  /* Logic: '<S5>/OR' */
  controls_B.OR = (controls_B.NOT_f || controls_B.NOT_i);

  /* Switch: '<S5>/Switch2' */
  if (controls_B.OR) {
    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S5>/Constant1'
     */
    controls_B.Switch2 = controls_cal->Constant1_Value_k;
  } else {
    /* Switch: '<S5>/Switch2' */
    controls_B.Switch2 = 0.0;
  }

  /* End of Switch: '<S5>/Switch2' */

  /* Lookup_n-D: '<S5>/BrakePedalMap' incorporates:
   *  Switch: '<S5>/Switch2'
   */
  controls_B.BrakePedalMap = look1_binlcpw(controls_B.Switch2,
    controls_cal->BrakePedalMap_bp01Data, controls_cal->BrakePedalMap_tableData,
    20U);

  /* Switch: '<S8>/Switch' */
  if (controls_B.BrakePedalMap > controls_cal->Switch_Threshold) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    controls_B.Switch_n = controls_cal->Constant5_Value;
  } else {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/Constant4'
     */
    controls_B.Switch_n = controls_cal->Constant4_Value;
  }

  /* End of Switch: '<S8>/Switch' */

  /* Chart: '<S8>/vd_screenshot_check' */
  controls_DW.sfEvent = controls_CALL_EVENT_i;
  if (controls_DW.is_active_c3_simp_vd_lib == 0U) {
    controls_DW.is_active_c3_simp_vd_lib = 1U;
    controls_DW.is_c3_simp_vd_lib = controls_IN_Run;
    controls_B.DI_p_motorTorqueRequest = controls_B.Merge;
  } else if (controls_DW.is_c3_simp_vd_lib == controls_IN_Run) {
    out = ((controls_B.Merge >= 0.25) && (controls_B.Switch_n != 0.0));
    if (out) {
      controls_DW.is_c3_simp_vd_lib = controls_IN_Stop;
      controls_B.DI_p_motorTorqueRequest = 0.0;
    } else {
      controls_B.DI_p_motorTorqueRequest = controls_B.Merge;
    }
  } else {
    /* case IN_Stop: */
    out = ((controls_B.Merge < 0.05) && (!(controls_B.Switch_n != 0.0)));
    if (out) {
      controls_DW.is_c3_simp_vd_lib = controls_IN_Run;
      controls_B.DI_p_motorTorqueRequest = controls_B.Merge;
    } else {
      controls_B.DI_p_motorTorqueRequest = 0.0;
    }
  }

  /* End of Chart: '<S8>/vd_screenshot_check' */

  /* Product: '<S8>/Product' incorporates:
   *  Constant: '<S8>/Constant7'
   */
  controls_B.Product = controls_B.DI_p_motorTorqueRequest *
    controls_cal->Constant7_Value;

  /* Lookup_n-D: '<S8>/%pedal to %torque' incorporates:
   *  Product: '<S8>/Product'
   */
  controls_B.pedaltotorque = look1_binlxpw(controls_B.Product,
    controls_cal->pedaltotorque_bp01Data, controls_cal->pedaltotorque_tableData,
    100U);

  /* SignalConversion generated from: '<S28>/Vector Concatenate' incorporates:
   *  Concatenate: '<S28>/Vector Concatenate'
   */
  controls_B.VectorConcatenate[0] = controls_B.pedaltotorque;

  /* S-Function (sfix_udelay): '<S28>/Tapped Delay' incorporates:
   *  Concatenate: '<S28>/Vector Concatenate'
   */
  std::memcpy(&controls_B.VectorConcatenate[1], &controls_DW.TappedDelay_X[0],
              10U * sizeof(real_T));

  /* Sum: '<S28>/Sum of Elements' */
  u0 = -0.0;
  for (i = 0; i < 11; i++) {
    u0 += controls_B.VectorConcatenate[i];
  }

  /* Sum: '<S28>/Sum of Elements' */
  controls_B.SumofElements = u0;

  /* Product: '<S28>/Divide' */
  controls_B.Divide = controls_B.SumofElements / controls_ConstB.Width;

  /* DataTypeConversion: '<S7>/Cast To Single4' */
  controls_B.CastToSingle4 = static_cast<real32_T>(controls_B.Divide);

  /* DataTypeConversion: '<S7>/Cast To Single5' incorporates:
   *  Constant: '<S8>/Constant3'
   */
  controls_B.CastToSingle5 = static_cast<real32_T>(controls_cal->Constant3_Value);

  /* Chart: '<S7>/mi_left' */
  controls_mi_left(controls_B.GOV_e_miCmd, controls_B.AMK_bDcOn_L_p,
                   controls_B.AMK_bError_L, controls_B.AMK_bInverterOn_L,
                   controls_B.AMK_bQuitDcOn_L_k,
                   controls_B.AMK_bQuitInverterOn_L_p,
                   controls_B.AMK_bSystemReady_L, controls_B.CastToSingle3,
                   controls_B.CastToSingle4, controls_B.CastToSingle5,
                   &controls_B.sf_mi_left, &controls_DW.sf_mi_left);

  /* DataTypeConversion: '<S7>/Cast To Single' incorporates:
   *  Constant: '<S8>/Constant1'
   */
  controls_B.CastToSingle = static_cast<real32_T>
    (controls_cal->Constant1_Value_f);

  /* DataTypeConversion: '<S7>/Cast To Single1' */
  controls_B.CastToSingle1 = static_cast<real32_T>(controls_B.Divide);

  /* DataTypeConversion: '<S7>/Cast To Single2' incorporates:
   *  Constant: '<S8>/Constant2'
   */
  controls_B.CastToSingle2 = static_cast<real32_T>
    (controls_cal->Constant2_Value_g);

  /* Chart: '<S7>/mi_right' */
  controls_mi_left(controls_B.GOV_e_miCmd, controls_B.AMK_bDcOn_R,
                   controls_B.AMK_bError_R, controls_B.AMK_bInverterOn_R,
                   controls_B.AMK_bQuitDcOn_R, controls_B.AMK_bQuitInverterOn_R,
                   controls_B.AMK_bSystemReady_R, controls_B.CastToSingle,
                   controls_B.CastToSingle1, controls_B.CastToSingle2,
                   &controls_B.sf_mi_right, &controls_DW.sf_mi_right);

  /* Logic: '<S7>/AND' */
  controls_B.AND = ((controls_B.sf_mi_left.MI_InverterEn != 0.0) &&
                    (controls_B.sf_mi_right.MI_InverterEn != 0.0));

  /* S-Function (scanpack): '<Root>/CAN Pack1' */
  /* S-Function (scanpack): '<Root>/CAN Pack1' */
  controls_B.CANPack1.ID = 0U;
  controls_B.CANPack1.Length = 1U;
  controls_B.CANPack1.Extended = 0U;
  controls_B.CANPack1.Remote = 0;
  controls_B.CANPack1.Data[0] = 0;
  controls_B.CANPack1.Data[1] = 0;
  controls_B.CANPack1.Data[2] = 0;
  controls_B.CANPack1.Data[3] = 0;
  controls_B.CANPack1.Data[4] = 0;
  controls_B.CANPack1.Data[5] = 0;
  controls_B.CANPack1.Data[6] = 0;
  controls_B.CANPack1.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
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
        uint32_T result = (uint32_T) (controls_B.AND);

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
            controls_B.CANPack1.Data[0] = controls_B.CANPack1.Data[0] | (uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U));
          }
        }
      }
    }
  }

  /* SignalConversion generated from: '<Root>/CAN Write ' */
  controls_B.TmpSignalConversionAtCANWriteIn[0] = controls_B.CANPack;
  controls_B.TmpSignalConversionAtCANWriteIn[1] = controls_B.CANPack1;

  /* S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write ' */

  /* Level2 S-Function Block: '<Root>/CAN Write ' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* S-Function (scanpack): '<S2>/CAN Pack' */
  /* S-Function (scanpack): '<S2>/CAN Pack' */
  controls_B.AMK0_SetPoints1.ID = 390U;
  controls_B.AMK0_SetPoints1.Length = 8U;
  controls_B.AMK0_SetPoints1.Extended = 0U;
  controls_B.AMK0_SetPoints1.Remote = 0;
  controls_B.AMK0_SetPoints1.Data[0] = 0;
  controls_B.AMK0_SetPoints1.Data[1] = 0;
  controls_B.AMK0_SetPoints1.Data[2] = 0;
  controls_B.AMK0_SetPoints1.Data[3] = 0;
  controls_B.AMK0_SetPoints1.Data[4] = 0;
  controls_B.AMK0_SetPoints1.Data[5] = 0;
  controls_B.AMK0_SetPoints1.Data[6] = 0;
  controls_B.AMK0_SetPoints1.Data[7] = 0;

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
        real32_T result = controls_B.sf_mi_right.AMK_TargetVelocity;

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
            controls_B.AMK0_SetPoints1.Data[2] =
              controls_B.AMK0_SetPoints1.Data[2] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            controls_B.AMK0_SetPoints1.Data[3] =
              controls_B.AMK0_SetPoints1.Data[3] | (uint8_T)((uint16_T)
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
        real32_T result = controls_B.sf_mi_right.AMK_TorqueLimitNegativ;

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
            controls_B.AMK0_SetPoints1.Data[6] =
              controls_B.AMK0_SetPoints1.Data[6] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            controls_B.AMK0_SetPoints1.Data[7] =
              controls_B.AMK0_SetPoints1.Data[7] | (uint8_T)((uint16_T)
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
      real32_T outValue = 0;

      {
        real32_T result = controls_B.sf_mi_right.AMK_TorqueLimitPositiv;

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
            controls_B.AMK0_SetPoints1.Data[4] =
              controls_B.AMK0_SetPoints1.Data[4] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            controls_B.AMK0_SetPoints1.Data[5] =
              controls_B.AMK0_SetPoints1.Data[5] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
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
        uint32_T result = (uint32_T) (controls_B.sf_mi_right.AMK_bDcOn_tx);

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
            controls_B.AMK0_SetPoints1.Data[1] =
              controls_B.AMK0_SetPoints1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 1));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
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
        uint32_T result = (uint32_T) (controls_B.sf_mi_right.AMK_bEnable);

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
            controls_B.AMK0_SetPoints1.Data[1] =
              controls_B.AMK0_SetPoints1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 2));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
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
        uint32_T result = (uint32_T) (controls_B.sf_mi_right.AMK_bErrorReset);

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
            controls_B.AMK0_SetPoints1.Data[1] =
              controls_B.AMK0_SetPoints1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 3));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
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
        uint32_T result = (uint32_T) (controls_B.sf_mi_right.AMK_bInverterOn_tx);

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
            controls_B.AMK0_SetPoints1.Data[1] =
              controls_B.AMK0_SetPoints1.Data[1] | (uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U));
          }
        }
      }
    }
  }

  /* S-Function (scanpack): '<S2>/CAN Pack1' */
  /* S-Function (scanpack): '<S2>/CAN Pack1' */
  controls_B.AMK1_SetPoints1.ID = 389U;
  controls_B.AMK1_SetPoints1.Length = 8U;
  controls_B.AMK1_SetPoints1.Extended = 0U;
  controls_B.AMK1_SetPoints1.Remote = 0;
  controls_B.AMK1_SetPoints1.Data[0] = 0;
  controls_B.AMK1_SetPoints1.Data[1] = 0;
  controls_B.AMK1_SetPoints1.Data[2] = 0;
  controls_B.AMK1_SetPoints1.Data[3] = 0;
  controls_B.AMK1_SetPoints1.Data[4] = 0;
  controls_B.AMK1_SetPoints1.Data[5] = 0;
  controls_B.AMK1_SetPoints1.Data[6] = 0;
  controls_B.AMK1_SetPoints1.Data[7] = 0;

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
        real32_T result = controls_B.sf_mi_left.AMK_TargetVelocity;

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
            controls_B.AMK1_SetPoints1.Data[2] =
              controls_B.AMK1_SetPoints1.Data[2] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            controls_B.AMK1_SetPoints1.Data[3] =
              controls_B.AMK1_SetPoints1.Data[3] | (uint8_T)((uint16_T)
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
        real32_T result = controls_B.sf_mi_left.AMK_TorqueLimitNegativ;

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
            controls_B.AMK1_SetPoints1.Data[6] =
              controls_B.AMK1_SetPoints1.Data[6] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            controls_B.AMK1_SetPoints1.Data[7] =
              controls_B.AMK1_SetPoints1.Data[7] | (uint8_T)((uint16_T)
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
      real32_T outValue = 0;

      {
        real32_T result = controls_B.sf_mi_left.AMK_TorqueLimitPositiv;

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
            controls_B.AMK1_SetPoints1.Data[4] =
              controls_B.AMK1_SetPoints1.Data[4] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            controls_B.AMK1_SetPoints1.Data[5] =
              controls_B.AMK1_SetPoints1.Data[5] | (uint8_T)((uint16_T)
              ((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
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
        uint32_T result = (uint32_T) (controls_B.sf_mi_left.AMK_bDcOn_tx);

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
            controls_B.AMK1_SetPoints1.Data[1] =
              controls_B.AMK1_SetPoints1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 1));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
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
        uint32_T result = (uint32_T) (controls_B.sf_mi_left.AMK_bEnable);

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
            controls_B.AMK1_SetPoints1.Data[1] =
              controls_B.AMK1_SetPoints1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 2));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
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
        uint32_T result = (uint32_T) (controls_B.sf_mi_left.AMK_bErrorReset);

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
            controls_B.AMK1_SetPoints1.Data[1] =
              controls_B.AMK1_SetPoints1.Data[1] | (uint8_T)((uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U) << 3));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
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
        uint32_T result = (uint32_T) (controls_B.sf_mi_left.AMK_bInverterOn_tx);

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
            controls_B.AMK1_SetPoints1.Data[1] =
              controls_B.AMK1_SetPoints1.Data[1] | (uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U));
          }
        }
      }
    }
  }

  /* SignalConversion generated from: '<Root>/CAN Write 1' */
  controls_B.TmpSignalConversionAtCANWrite1I[0] = controls_B.AMK0_SetPoints1;
  controls_B.TmpSignalConversionAtCANWrite1I[1] = controls_B.AMK1_SetPoints1;

  /* S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 1' */

  /* Level2 S-Function Block: '<Root>/CAN Write 1' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S5>/Switch' */
  if (controls_B.BrakePedalMap > controls_cal->Switch_Threshold_f) {
    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S5>/Constant4'
     */
    controls_B.Switch_m = controls_cal->Constant4_Value_i;
  } else {
    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S5>/Constant3'
     */
    controls_B.Switch_m = controls_cal->Constant3_Value_m;
  }

  /* End of Switch: '<S5>/Switch' */

  /* DataTypeConversion: '<Root>/Cast To Single' */
  controls_B.CastToSingle_g = static_cast<uint8_T>(controls_B.GOV_e_govSts);

  /* Switch: '<S5>/Switch1' */
  if (controls_B.NOT_p) {
    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S5>/Constant2'
     */
    controls_B.Switch1 = controls_cal->Constant2_Value_e;
  } else {
    /* Switch: '<S5>/Switch1' */
    controls_B.Switch1 = controls_B.CANUnpack2_o7;
  }

  /* End of Switch: '<S5>/Switch1' */

  /* Delay: '<S7>/Delay' */
  controls_B.Delay = controls_DW.Delay_DSTATE_k;

  /* RelationalOperator: '<S7>/GreaterThan' */
  controls_B.GreaterThan_j = (controls_B.sf_mi_left.MI_motorStatus ==
    controls_B.sf_mi_right.MI_motorStatus);

  /* RelationalOperator: '<S7>/motorErrorActive' incorporates:
   *  Constant: '<S7>/Constant'
   */
  controls_B.motorErrorActive = (controls_B.sf_mi_right.MI_motorStatus ==
    controls_cal->Constant_Value_m);

  /* RelationalOperator: '<S7>/motorErrorActive1' incorporates:
   *  Constant: '<S7>/Constant'
   */
  controls_B.motorErrorActive1 = (controls_cal->Constant_Value_m ==
    controls_B.sf_mi_left.MI_motorStatus);

  /* Logic: '<S7>/OR' */
  controls_B.OR_j = (controls_B.motorErrorActive || controls_B.motorErrorActive1);

  /* Switch: '<S7>/overallMotorState' */
  if (controls_B.GreaterThan_j) {
    /* Switch: '<S7>/overallMotorState' */
    controls_B.overallMotorState = controls_B.sf_mi_left.MI_motorStatus;
  } else {
    /* Switch: '<S7>/overallMotorState' */
    controls_B.overallMotorState = controls_B.Delay;
  }

  /* End of Switch: '<S7>/overallMotorState' */

  /* Switch: '<S7>/Switch' */
  if (controls_B.OR_j) {
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/Constant1'
     */
    controls_B.Switch_b = controls_cal->Constant1_Value_l;
  } else {
    /* Switch: '<S7>/Switch' */
    controls_B.Switch_b = controls_B.overallMotorState;
  }

  /* End of Switch: '<S7>/Switch' */

  /* Constant: '<S8>/Constant6' */
  controls_B.Constant6 = controls_cal->Constant6_Value;

  /* MATLAB Function: '<S8>/return greater' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  controls_B.Driven_wheel_spd = controls_cal->Constant2_Value_m;

  /* MATLAB Function: '<S8>/avg' incorporates:
   *  Inport: '<Root>/VD_LFWheelSpeed'
   *  Inport: '<Root>/VD_RFWheelSpeed'
   */
  i = controls_U.VD_LFWheelSpeed + controls_U.VD_RFWheelSpeed;
  if (i > 32767) {
    i = 32767;
  } else if (i < -32768) {
    i = -32768;
  }

  controls_B.Idle_wheel_spd = static_cast<int16_T>(rt_roundd_snf
    (static_cast<real_T>(i) / 2.0));

  /* End of MATLAB Function: '<S8>/avg' */

  /* Product: '<S29>/Divide' */
  controls_B.Divide_d = controls_B.Driven_wheel_spd / static_cast<real_T>
    (controls_B.Idle_wheel_spd);

  /* Sum: '<S29>/Subtract' incorporates:
   *  Constant: '<S29>/Constant'
   */
  controls_B.Actual_slip = controls_B.Divide_d - controls_cal->Constant_Value_gj;

  /* Saturate: '<S29>/Set lower bound to 0' */
  u0 = controls_B.Actual_slip;
  u1 = controls_cal->Setlowerboundto0_LowerSat;
  u2 = controls_P.Setlowerboundto0_UpperSat;
  if (u0 > u2) {
    /* Saturate: '<S29>/Set lower bound to 0' */
    controls_B.Setlowerboundto0 = u2;
  } else if (u0 < u1) {
    /* Saturate: '<S29>/Set lower bound to 0' */
    controls_B.Setlowerboundto0 = u1;
  } else {
    /* Saturate: '<S29>/Set lower bound to 0' */
    controls_B.Setlowerboundto0 = u0;
  }

  /* End of Saturate: '<S29>/Set lower bound to 0' */

  /* Chart: '<S29>/vd_tc' */
  if (controls_DW.temporalCounter_i1_p < 63U) {
    controls_DW.temporalCounter_i1_p = static_cast<uint8_T>
      (controls_DW.temporalCounter_i1_p + 1U);
  }

  controls_DW.sfEvent_d = controls_CALL_EVENT_i;
  if (controls_DW.is_active_c1_simp_vd_lib == 0U) {
    controls_DW.is_active_c1_simp_vd_lib = 1U;
    controls_DW.is_c1_simp_vd_lib = controls_IN_TC_off;
    controls_DW.temporalCounter_i1_p = 0U;
    controls_B.TC_scale_factor = 1.0;
  } else {
    switch (controls_DW.is_c1_simp_vd_lib) {
     case controls_IN_TC_off:
      out = ((controls_DW.temporalCounter_i1_p >= 50U) &&
             (controls_B.Setlowerboundto0 > controls_B.Constant6));
      if (out) {
        controls_DW.is_c1_simp_vd_lib = controls_IN_TC_on2;
        controls_DW.temporalCounter_i1_p = 0U;
        controls_B.TC_scale_factor = 0.0;
      } else {
        controls_B.TC_scale_factor = 1.0;
      }
      break;

     case controls_IN_TC_on:
      if (controls_DW.temporalCounter_i1_p >= 33U) {
        controls_DW.is_c1_simp_vd_lib = controls_IN_TC_off;
        controls_DW.temporalCounter_i1_p = 0U;
        controls_B.TC_scale_factor = 1.0;
      } else {
        controls_B.TC_scale_factor = 0.5;
      }
      break;

     case controls_IN_TC_on1:
      if (controls_DW.temporalCounter_i1_p >= 33U) {
        controls_DW.is_c1_simp_vd_lib = controls_IN_TC_on;
        controls_DW.temporalCounter_i1_p = 0U;
        controls_B.TC_scale_factor = 0.5;
      } else {
        controls_B.TC_scale_factor = 0.25;
      }
      break;

     default:
      /* case IN_TC_on2: */
      out = ((controls_DW.temporalCounter_i1_p >= 33U) &&
             (controls_B.Setlowerboundto0 <= controls_B.Constant6));
      if (out) {
        controls_DW.is_c1_simp_vd_lib = controls_IN_TC_on1;
        controls_DW.temporalCounter_i1_p = 0U;
        controls_B.TC_scale_factor = 0.25;
      } else {
        controls_B.TC_scale_factor = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S29>/vd_tc' */

  /* Update for Delay: '<S6>/Delay' */
  controls_DW.Delay_DSTATE = controls_B.GOV_e_bmSts;

  /* Update for Delay: '<S6>/Delay1' */
  controls_DW.Delay1_DSTATE = controls_B.Switch_b;

  /* Update for Delay: '<S6>/Delay2' */
  controls_DW.Delay2_DSTATE = controls_B.GOV_e_diSts;

  /* Update for S-Function (sfix_udelay): '<S28>/Tapped Delay' */
  for (i = 0; i < 9; i++) {
    controls_DW.TappedDelay_X[i] = controls_DW.TappedDelay_X[i + 1];
  }

  controls_DW.TappedDelay_X[9] = controls_B.pedaltotorque;

  /* End of Update for S-Function (sfix_udelay): '<S28>/Tapped Delay' */

  /* Update for Delay: '<S7>/Delay' */
  controls_DW.Delay_DSTATE_k = controls_B.overallMotorState;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++controls_M->Timing.clockTick0)) {
    ++controls_M->Timing.clockTickH0;
  }

  controls_M->Timing.t[0] = controls_M->Timing.clockTick0 *
    controls_M->Timing.stepSize0 + controls_M->Timing.clockTickH0 *
    controls_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void controls_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  controls_P.Setlowerboundto0_UpperSat = rtInf;
  rtsiSetSolverName(&controls_M->solverInfo,"FixedStepDiscrete");
  controls_M->solverInfoPtr = (&controls_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = controls_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "controls_M points to
       static memory which is guaranteed to be non-NULL" */
    controls_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    controls_M->Timing.sampleTimes = (&controls_M->Timing.sampleTimesArray[0]);
    controls_M->Timing.offsetTimes = (&controls_M->Timing.offsetTimesArray[0]);

    /* task periods */
    controls_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    controls_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(controls_M, &controls_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = controls_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    controls_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(controls_M, -1);
  controls_M->Timing.stepSize0 = 0.001;
  controls_M->solverInfoPtr = (&controls_M->solverInfo);
  controls_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&controls_M->solverInfo, 0.001);
  rtsiSetSolverMode(&controls_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&controls_B)), 0,
                     sizeof(B_controls_T));

  {
    controls_B.CANRead1_o2 = CAN_DATATYPE_GROUND;
    controls_B.CANPack = CAN_DATATYPE_GROUND;
    controls_B.CANRead_o2 = CAN_DATATYPE_GROUND;
    controls_B.CANPack1 = CAN_DATATYPE_GROUND;
    controls_B.TmpSignalConversionAtCANWriteIn[0] = CAN_DATATYPE_GROUND;
    controls_B.TmpSignalConversionAtCANWriteIn[1] = CAN_DATATYPE_GROUND;
    controls_B.AMK0_SetPoints1 = CAN_DATATYPE_GROUND;
    controls_B.AMK1_SetPoints1 = CAN_DATATYPE_GROUND;
    controls_B.TmpSignalConversionAtCANWrite1I[0] = CAN_DATATYPE_GROUND;
    controls_B.TmpSignalConversionAtCANWrite1I[1] = CAN_DATATYPE_GROUND;
    controls_B.Delay1 = UNKNOWN;
    controls_B.Delay = UNKNOWN;
    controls_B.overallMotorState = UNKNOWN;
    controls_B.Switch_b = UNKNOWN;
    controls_B.GOV_e_miCmd = CMD_INIT;
    controls_B.GOV_e_govSts = GOV_INIT;
    controls_B.Delay2 = DI_UNKNOWN;
    controls_B.GOV_e_diSts = DI_UNKNOWN;
    controls_B.GOV_e_diCmd = DI_CMD_INIT;
    controls_B.Delay_b = BM_UNKNOWN;
    controls_B.GOV_e_bmSts = BM_UNKNOWN;
    controls_B.GOV_e_bmCmd = BM_CMD_INIT;
    controls_B.sf_mi_right.MI_motorStatus = UNKNOWN;
    controls_B.sf_mi_left.MI_motorStatus = UNKNOWN;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&controls_DW), 0,
                     sizeof(DW_controls_T));

  /* external inputs */
  (void)std::memset(&controls_U, 0, sizeof(ExtU_controls_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &controls_M->NonInlinedSFcns.sfcnInfo;
    controls_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(controls_M)));
    controls_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &controls_M->Sizes.numSampTimes);
    controls_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(controls_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,controls_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(controls_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(controls_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(controls_M));
    rtssSetStepSizePtr(sfcnInfo, &controls_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(controls_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &controls_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &controls_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &controls_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &controls_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &controls_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &controls_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &controls_M->solverInfoPtr);
  }

  controls_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&controls_M->NonInlinedSFcns.childSFunctions[0]), 0,
                       5*sizeof(SimStruct));
    controls_M->childSfunctions =
      (&controls_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        controls_M->childSfunctions[i] =
          (&controls_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: controls/<Root>/CAN and LIN Setup  (sg_CANLIN_OfA2_setup_s) */
    {
      SimStruct *rts = controls_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = controls_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = controls_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = controls_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controls_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controls_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controls_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controls_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controls_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controls_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controls_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &controls_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "CAN and LIN Setup ");
      ssSetPath(rts, "controls/CAN and LIN Setup ");
      ssSetRTModel(rts,controls_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controls_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)controls_cal->CANandLINSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)controls_cal->CANandLINSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)controls_cal->CANandLINSetup_P3_Size);
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

    /* Level2 S-Function Block: controls/<Root>/CAN Read 1 (sg_CAN_OfA2_read_s) */
    {
      SimStruct *rts = controls_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = controls_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = controls_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = controls_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controls_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controls_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controls_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controls_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controls_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controls_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controls_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &controls_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &controls_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &controls_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &controls_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &controls_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &controls_B.CANRead1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidthAsInt(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &controls_B.CANRead1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read 1");
      ssSetPath(rts, "controls/CAN Read 1");
      ssSetRTModel(rts,controls_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controls_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)controls_cal->CANRead1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &controls_DW.CANRead1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &controls_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &controls_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &controls_DW.CANRead1_PWORK);
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

    /* Level2 S-Function Block: controls/<Root>/CAN Read  (sg_CAN_OfA2_read_s) */
    {
      SimStruct *rts = controls_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = controls_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = controls_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = controls_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controls_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controls_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controls_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controls_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controls_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controls_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controls_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &controls_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &controls_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &controls_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &controls_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &controls_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &controls_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidthAsInt(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *) &controls_B.CANRead_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read ");
      ssSetPath(rts, "controls/CAN Read ");
      ssSetRTModel(rts,controls_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controls_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)controls_cal->CANRead_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &controls_DW.CANRead_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &controls_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &controls_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &controls_DW.CANRead_PWORK);
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

    /* Level2 S-Function Block: controls/<Root>/CAN Write  (sg_CAN_OfA2_write_s) */
    {
      SimStruct *rts = controls_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = controls_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = controls_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = controls_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controls_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controls_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controls_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controls_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controls_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controls_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controls_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &controls_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &controls_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &controls_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &controls_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &controls_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               controls_B.TmpSignalConversionAtCANWriteIn);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 2);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write ");
      ssSetPath(rts, "controls/CAN Write ");
      ssSetRTModel(rts,controls_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controls_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)controls_cal->CANWrite_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &controls_DW.CANWrite_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &controls_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &controls_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &controls_DW.CANWrite_PWORK[0]);
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

    /* Level2 S-Function Block: controls/<Root>/CAN Write 1 (sg_CAN_OfA2_write_s) */
    {
      SimStruct *rts = controls_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = controls_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = controls_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = controls_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controls_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controls_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controls_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controls_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controls_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controls_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controls_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &controls_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &controls_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &controls_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &controls_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &controls_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               controls_B.TmpSignalConversionAtCANWrite1I);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 2);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write 1");
      ssSetPath(rts, "controls/CAN Write 1");
      ssSetRTModel(rts,controls_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controls_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)controls_cal->CANWrite1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &controls_DW.CANWrite1_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &controls_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &controls_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &controls_DW.CANWrite1_PWORK[0]);
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
  }

  /* Start for S-Function (sg_CANLIN_OfA2_setup_s): '<Root>/CAN and LIN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN and LIN Setup ' (sg_CANLIN_OfA2_setup_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/Constant1' */
  controls_B.Constant1 = controls_cal->Constant1_Value_o;

  /* Start for S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read 1' */
  /* Level2 S-Function Block: '<Root>/CAN Read 1' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/Constant13' */
  controls_B.Constant13 = controls_cal->Constant13_Value;

  /* Start for Constant: '<Root>/Constant14' */
  controls_B.Constant14 = controls_cal->Constant14_Value;

  /* Start for S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read ' */
  /* Level2 S-Function Block: '<Root>/CAN Read ' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<Root>/CAN Unpack2' */

  /*-----------S-Function Block: <Root>/CAN Unpack2 -----------------*/

  /* Start for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write ' */
  /* Level2 S-Function Block: '<Root>/CAN Write ' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 1' */
  /* Level2 S-Function Block: '<Root>/CAN Write 1' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S8>/Constant6' */
  controls_B.Constant6 = controls_cal->Constant6_Value;

  /* InitializeConditions for Delay: '<S6>/Delay' */
  controls_DW.Delay_DSTATE = controls_cal->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S6>/Delay1' */
  controls_DW.Delay1_DSTATE = controls_cal->Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<S6>/Delay2' */
  controls_DW.Delay2_DSTATE = controls_cal->Delay2_InitialCondition;

  /* InitializeConditions for S-Function (sfix_udelay): '<S28>/Tapped Delay' */
  for (int32_T i = 0; i < 10; i++) {
    controls_DW.TappedDelay_X[i] = controls_cal->TappedDelay_vinit;
  }

  /* End of InitializeConditions for S-Function (sfix_udelay): '<S28>/Tapped Delay' */

  /* InitializeConditions for Delay: '<S7>/Delay' */
  controls_DW.Delay_DSTATE_k = controls_cal->Delay_InitialCondition_o;

  /* SystemInitialize for Chart: '<S6>/governer_stateflow' */
  controls_DW.sfEvent_n = controls_CALL_EVENT_i;
  controls_DW.temporalCounter_i1 = 0U;
  controls_DW.is_RUNNING_ERROR = controls_IN_NO_ACTIVE_CHILD_o;
  controls_DW.is_STARTUP = controls_IN_NO_ACTIVE_CHILD_o;
  controls_DW.is_STARTUP_ERROR = controls_IN_NO_ACTIVE_CHILD_o;
  controls_DW.is_active_c8_governor_lib = 0U;
  controls_DW.is_c8_governor_lib = controls_IN_NO_ACTIVE_CHILD_o;
  controls_DW.motorStartCount = 0U;
  controls_B.GOV_e_bmCmd = BM_CMD_INIT;
  controls_B.GOV_e_vdCmd = 0U;
  controls_B.GOV_e_miCmd = CMD_INIT;
  controls_B.GOV_e_diCmd = DI_CMD_INIT;
  controls_B.GOV_e_govSts = GOV_INIT;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Function-Call Subsystem2' */
  /* Start for S-Function (scanunpack): '<S3>/CAN Unpack' */

  /*-----------S-Function Block: <S3>/CAN Unpack -----------------*/

  /* End of SystemInitialize for SubSystem: '<Root>/Function-Call Subsystem2' */

  /* SystemInitialize for Chart: '<S4>/battery_monitor' */
  controls_DW.sfEvent_i = controls_CALL_EVENT_i;
  controls_DW.temporalCounter_i1_l = 0U;
  controls_DW.is_StartupSuperstate_p = controls_IN_NO_ACTIVE_CHILD_o;
  controls_DW.is_active_c4_battery_monitor_li = 0U;
  controls_DW.is_c4_battery_monitor_lib = controls_IN_NO_ACTIVE_CHILD_o;
  controls_B.GOV_e_bmSts = BM_UNKNOWN;

  /* SystemInitialize for Chart: '<S4>/bm_control' */
  controls_DW.sfEvent_j = controls_CALL_EVENT_i;
  controls_DW.is_StartupSuperstate = controls_IN_NO_ACTIVE_CHILD_o;
  controls_DW.temporalCounter_i1_k = 0U;
  controls_DW.is_active_c5_battery_monitor_li = 0U;
  controls_DW.is_c5_battery_monitor_lib = controls_IN_NO_ACTIVE_CHILD_o;
  controls_B.BM_b_prechargeContactorCMD = 0.0;
  controls_B.BM_b_HVposContactorCMD = 0.0;
  controls_B.BM_b_HVnegContactorCMD = 0.0;

  /* SystemInitialize for Atomic SubSystem: '<Root>/AMK_Input' */
  /* Start for S-Function (scanunpack): '<S1>/CAN Unpack' */

  /*-----------S-Function Block: <S1>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S1>/CAN Unpack1' */

  /*-----------S-Function Block: <S1>/CAN Unpack1 -----------------*/

  /* Start for S-Function (scanunpack): '<S1>/CAN Unpack2' */

  /*-----------S-Function Block: <S1>/CAN Unpack2 -----------------*/

  /* Start for S-Function (scanunpack): '<S1>/CAN Unpack3' */

  /*-----------S-Function Block: <S1>/CAN Unpack3 -----------------*/

  /* End of SystemInitialize for SubSystem: '<Root>/AMK_Input' */

  /* SystemInitialize for Chart: '<S5>/driver_interface' */
  controls_DW.sfEvent_dr = controls_CALL_EVENT_i;
  controls_DW.is_DI_running = controls_IN_NO_ACTIVE_CHILD_o;
  controls_DW.is_Ready_to_drive = controls_IN_NO_ACTIVE_CHILD_o;
  controls_DW.temporalCounter_i1_m = 0U;
  controls_DW.is_active_c2_driver_interface_l = 0U;
  controls_DW.is_c2_driver_interface_lib = controls_IN_NO_ACTIVE_CHILD_o;
  controls_B.GOV_e_diSts = DI_UNKNOWN;
  controls_B.DI_b_driverSpeaker = false;
  controls_B.b_ReadyToDrive = false;

  /* SystemInitialize for Chart: '<S8>/vd_screenshot_check' */
  controls_DW.sfEvent = controls_CALL_EVENT_i;
  controls_DW.is_active_c3_simp_vd_lib = 0U;
  controls_DW.is_c3_simp_vd_lib = controls_IN_NO_ACTIVE_CHILD_o;
  controls_B.DI_p_motorTorqueRequest = 0.0;

  /* SystemInitialize for Chart: '<S7>/mi_left' */
  controls_mi_left_Init(&controls_B.sf_mi_left, &controls_DW.sf_mi_left);

  /* SystemInitialize for Chart: '<S7>/mi_right' */
  controls_mi_left_Init(&controls_B.sf_mi_right, &controls_DW.sf_mi_right);

  /* SystemInitialize for Chart: '<S29>/vd_tc' */
  controls_DW.sfEvent_d = controls_CALL_EVENT_i;
  controls_DW.temporalCounter_i1_p = 0U;
  controls_DW.is_active_c1_simp_vd_lib = 0U;
  controls_DW.is_c1_simp_vd_lib = controls_IN_NO_ACTIVE_CHILD_o;
  controls_B.TC_scale_factor = 0.0;
}

/* Model terminate function */
void controls_terminate(void)
{
  /* Terminate for S-Function (sg_CANLIN_OfA2_setup_s): '<Root>/CAN and LIN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN and LIN Setup ' (sg_CANLIN_OfA2_setup_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read 1' */
  /* Level2 S-Function Block: '<Root>/CAN Read 1' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read ' */
  /* Level2 S-Function Block: '<Root>/CAN Read ' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write ' */
  /* Level2 S-Function Block: '<Root>/CAN Write ' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 1' */
  /* Level2 S-Function Block: '<Root>/CAN Write 1' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controls_M->childSfunctions[4];
    sfcnTerminate(rts);
  }
}
