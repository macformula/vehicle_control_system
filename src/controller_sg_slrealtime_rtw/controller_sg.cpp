/*
 * controller_sg.cpp
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

#include "controller_sg.h"
#include "rtwtypes.h"
#include "controller_sg_types.h"
#include "controller_sg_private.h"
#include <cmath>

extern "C"
{

#include "rt_nonfinite.h"

}

#include <cstring>

/* Named constants for Chart: '<S8>/mi_left' */
const uint32_T contr_IN_enforceSetpointsZero_n = 1U;
const uint32_T contr_IN_motorOff_waitingForGov = 7U;
const uint32_T control_IN_enforceSetpointsZero = 2U;
const uint32_T controller_IN_AMK_errorDetected = 1U;
const uint32_T controller__IN_waiting_sysReady = 4U;
const uint8_T controller_s_IN_NO_ACTIVE_CHILD = 0U;
const int32_T controller_sg_CALL_EVENT = -1;
const uint32_T controller_sg_IN_AMK_errorReset = 2U;
const uint32_T controller_sg_IN_AMK_ready = 3U;
const uint32_T controller_sg_IN_AMK_running = 4U;
const uint32_T controller_sg_IN_AMK_shutdown = 5U;
const uint32_T controller_sg_IN_AMK_startup = 6U;
const uint32_T controller_sg_IN_commandOn = 1U;
const uint32_T controller_sg_IN_sendReset = 2U;
const uint32_T controller_sg_IN_toggleDCon = 3U;
const uint32_T controller_sg_IN_toggleEnable = 3U;
const uint32_T controller_sg_IN_toggleReset = 4U;

/* Named constants for Chart: '<S5>/battery_monitor' */
const uint32_T con_IN_InitializePrechargeState = 1U;
const uint8_T controller_IN_NO_ACTIVE_CHILD_i = 0U;
const uint32_T controller_IN_StartupSuperstate = 4U;
const int32_T controller_sg_CALL_EVENT_c = -1;
const uint32_T controller_sg_IN_InitialState = 1U;
const uint32_T controller_sg_IN_InterruptState = 2U;
const uint32_T controller_sg_IN_LowSoC = 3U;
const uint32_T controller_sg_IN_PrechargeState = 2U;
const uint32_T controller_sg_IN_RunningState = 3U;
const uint32_T controller_sg_IN_StartupState = 4U;
const uint32_T controller_sg_IN_StartupState1 = 5U;

/* Named constants for Chart: '<S5>/bm_control' */
const uint32_T controll_IN_StartupSuperstate_m = 2U;
const uint32_T controller_s_IN_Close_precharge = 3U;
const uint32_T controller_sg_IN_Close_HVneg1 = 1U;
const uint32_T controller_sg_IN_Close_HVpos = 2U;
const uint32_T controller_sg_IN_Open_precharge = 4U;
const uint32_T controller_sg_IN_StartupCMD = 1U;

/* Named constants for Chart: '<S6>/driver_interface' */
const uint32_T contr_IN_Driver_requested_start = 1U;
const uint32_T controll_IN_Motor_start_request = 2U;
const uint32_T controlle_IN_Waiting_for_driver = 4U;
const uint32_T controller__IN_Vehicle_coasting = 4U;
const uint32_T controller_sg_IN_DI_error = 1U;
const uint32_T controller_sg_IN_DI_running = 2U;
const uint32_T controller_sg_IN_INIT = 3U;
const uint32_T controller_sg_IN_Ready_to_drive = 3U;
const uint32_T controller_sg_IN_SpeakerOff = 1U;
const uint32_T controller_sg_IN_SpeakerOn_ = 2U;

/* Named constants for Chart: '<S7>/governer_stateflow' */
const uint32_T contro_IN_Command_motor_startup = 1U;
const uint32_T contro_IN_DriverInterface_Error = 1U;
const uint32_T controlle_IN_Initialize_outputs = 1U;
const uint32_T controller_IN_Send_ReadyToDrive = 4U;
const uint32_T controller__IN_HV_startup_error = 3U;
const uint32_T controller__IN_Vehicle_shutdown = 6U;
const uint32_T controller_s_IN_Motor_run_error = 2U;
const uint32_T controller_sg_IN_Err_reset = 2U;
const uint32_T controller_sg_IN_HV_run_error = 1U;
const uint32_T controller_sg_IN_HV_startup = 2U;
const uint32_T controller_sg_IN_Motor_faulted = 4U;
const uint32_T controller_sg_IN_RUNNING = 2U;
const uint32_T controller_sg_IN_RUNNING_ERROR = 3U;
const uint32_T controller_sg_IN_ReadyToDrive = 3U;
const uint32_T controller_sg_IN_STARTUP = 4U;
const uint32_T controller_sg_IN_STARTUP_ERROR = 5U;

/* Named constants for Chart: '<S9>/Chart' */
const uint32_T controller_sg_IN_Run = 1U;
const uint32_T controller_sg_IN_Stop = 2U;

/* Block signals (default storage) */
B_controller_sg_T controller_sg_B;

/* Block states (default storage) */
DW_controller_sg_T controller_sg_DW;

/* Real-time model */
RT_MODEL_controller_sg_T controller_sg_M_ = RT_MODEL_controller_sg_T();
RT_MODEL_controller_sg_T *const controller_sg_M = &controller_sg_M_;
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
 *    '<S6>/If Action Subsystem'
 *    '<S6>/If Action Subsystem1'
 */
void controller_sg_IfActionSubsystem(real_T rtu_In1, real_T *rty_Out1)
{
  /* SignalConversion generated from: '<S13>/In1' */
  *rty_Out1 = rtu_In1;
}

/*
 * System initialize for atomic system:
 *    '<S8>/mi_left'
 *    '<S8>/mi_right'
 */
void controller_sg_mi_left_Init(B_mi_left_controller_sg_T *localB,
  DW_mi_left_controller_sg_T *localDW)
{
  localDW->sfEvent = controller_sg_CALL_EVENT;
  localDW->is_AMK_errorReset = controller_s_IN_NO_ACTIVE_CHILD;
  localDW->is_AMK_startup = controller_s_IN_NO_ACTIVE_CHILD;
  localDW->temporalCounter_i1 = 0U;
  localDW->is_active_c9_motor_interface_li = 0U;
  localDW->is_c9_motor_interface_lib = controller_s_IN_NO_ACTIVE_CHILD;
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
 *    '<S8>/mi_left'
 *    '<S8>/mi_right'
 */
void controller_sg_mi_left(MI_CMD rtu_GOV_e_miCmd, real_T rtu_AMK_bDcOn_rx,
  real_T rtu_AMK_bError, real_T rtu_AMK_bInverterOn_rx, real_T rtu_AMK_bQuitDcOn,
  real_T rtu_AMK_bQuitInverterOn, real_T rtu_AMK_bSystemReady, real32_T
  rtu_VD_T_motorSpeedRequest, real32_T rtu_VD_T_motorTorqueLimitPositi, real32_T
  rtu_VD_T_motorTorqueLimitNegati, B_mi_left_controller_sg_T *localB,
  DW_mi_left_controller_sg_T *localDW)
{
  if (localDW->temporalCounter_i1 < 511U) {
    localDW->temporalCounter_i1 = static_cast<uint16_T>
      (localDW->temporalCounter_i1 + 1U);
  }

  localDW->sfEvent = controller_sg_CALL_EVENT;

  /* Chart: '<S8>/mi_left' */
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
     case controller_IN_AMK_errorDetected:
      if (rtu_GOV_e_miCmd == ERR_RESET) {
        localDW->is_c9_motor_interface_lib = controller_sg_IN_AMK_errorReset;
        localDW->is_AMK_errorReset = contr_IN_enforceSetpointsZero_n;
        localB->AMK_TargetVelocity = 0.0F;
        localB->AMK_TorqueLimitPositiv = 0.0F;
        localB->AMK_TorqueLimitNegativ = 0.0F;
        localB->AMK_bInverterOn_tx = 0U;
      }
      break;

     case controller_sg_IN_AMK_errorReset:
      switch (localDW->is_AMK_errorReset) {
       case contr_IN_enforceSetpointsZero_n:
        localB->AMK_bInverterOn_tx = 0U;
        if (rtu_AMK_bInverterOn_rx == 0.0) {
          localDW->is_AMK_errorReset = controller_sg_IN_toggleEnable;
          localDW->temporalCounter_i1 = 0U;
          localB->AMK_bEnable = 0U;
        }
        break;

       case controller_sg_IN_sendReset:
        localB->AMK_bErrorReset = 1U;
        if (localDW->temporalCounter_i1 >= 500U) {
          localDW->is_AMK_errorReset = controller_sg_IN_toggleReset;
          localB->AMK_bErrorReset = 0U;
        }
        break;

       case controller_sg_IN_toggleEnable:
        localB->AMK_bEnable = 0U;
        if (localDW->temporalCounter_i1 >= 500U) {
          localDW->is_AMK_errorReset = controller_sg_IN_sendReset;
          localDW->temporalCounter_i1 = 0U;
          localB->AMK_bErrorReset = 1U;
        }
        break;

       default:
        /* case IN_toggleReset: */
        localB->AMK_bErrorReset = 0U;
        if (rtu_AMK_bSystemReady == 1.0) {
          localDW->is_AMK_errorReset = controller_s_IN_NO_ACTIVE_CHILD;
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

     case controller_sg_IN_AMK_ready:
      {
        if (rtu_AMK_bError == 1.0) {
          localDW->is_c9_motor_interface_lib = controller_IN_AMK_errorDetected;
          localB->MI_motorStatus = MI_STS_ERROR;
        } else {
          boolean_T out;
          out = ((rtu_AMK_bQuitInverterOn == 1.0) && (rtu_AMK_bError == 0.0));
          if (out) {
            localDW->is_c9_motor_interface_lib = controller_sg_IN_AMK_running;
          } else {
            localB->MI_motorStatus = READY;
            localB->MI_InverterEn = 1.0;
          }
        }
      }
      break;

     case controller_sg_IN_AMK_running:
      if (rtu_AMK_bError == 1.0) {
        localDW->is_c9_motor_interface_lib = controller_IN_AMK_errorDetected;
        localB->MI_motorStatus = MI_STS_ERROR;
      } else if (rtu_GOV_e_miCmd == CMD_SHUTDOWN) {
        localDW->is_c9_motor_interface_lib = controller_sg_IN_AMK_shutdown;
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

     case controller_sg_IN_AMK_shutdown:
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

     case controller_sg_IN_AMK_startup:
      {
        switch (localDW->is_AMK_startup) {
         case controller_sg_IN_commandOn:
          localB->AMK_bEnable = 1U;
          localB->AMK_bInverterOn_tx = 1U;
          if (rtu_AMK_bInverterOn_rx == 1.0) {
            localDW->is_AMK_startup = controller_s_IN_NO_ACTIVE_CHILD;
            localDW->is_c9_motor_interface_lib = controller_sg_IN_AMK_ready;
            localB->MI_motorStatus = READY;
            localB->MI_InverterEn = 1.0;
          } else if (rtu_AMK_bError == 1.0) {
            localDW->is_AMK_startup = controller_s_IN_NO_ACTIVE_CHILD;
            localDW->is_c9_motor_interface_lib = controller_IN_AMK_errorDetected;
            localB->MI_motorStatus = MI_STS_ERROR;
          }
          break;

         case control_IN_enforceSetpointsZero:
          if (localDW->temporalCounter_i1 >= 100U) {
            localDW->is_AMK_startup = controller_sg_IN_commandOn;
            localB->AMK_bEnable = 1U;
            localB->AMK_bInverterOn_tx = 1U;
          } else if (rtu_AMK_bError == 1.0) {
            localDW->is_AMK_startup = controller_s_IN_NO_ACTIVE_CHILD;
            localDW->is_c9_motor_interface_lib = controller_IN_AMK_errorDetected;
            localB->MI_motorStatus = MI_STS_ERROR;
          }
          break;

         case controller_sg_IN_toggleDCon:
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
              localDW->is_AMK_startup = controller_s_IN_NO_ACTIVE_CHILD;
              localDW->is_c9_motor_interface_lib =
                controller_IN_AMK_errorDetected;
              localB->MI_motorStatus = MI_STS_ERROR;
            }
          }
          break;

         default:
          /* case IN_waiting_sysReady: */
          if (rtu_AMK_bSystemReady == 1.0) {
            localDW->is_AMK_startup = controller_sg_IN_toggleDCon;
            localB->AMK_bDcOn_tx = 1U;
          } else if (rtu_AMK_bError == 1.0) {
            localDW->is_AMK_startup = controller_s_IN_NO_ACTIVE_CHILD;
            localDW->is_c9_motor_interface_lib = controller_IN_AMK_errorDetected;
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
        localDW->is_c9_motor_interface_lib = controller_sg_IN_AMK_startup;
        localDW->is_AMK_startup = controller__IN_waiting_sysReady;
        localB->MI_motorStatus = STARTUP;
      }
      break;
    }
  }

  /* End of Chart: '<S8>/mi_left' */
}

/* Model step function */
void controller_sg_step(void)
{
  real_T tmp;
  real_T u0;
  boolean_T out;

  /* Reset subsysRan breadcrumbs */
  srClearBC(controller_sg_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC);

  /* S-Function (sg_CANLIN_OfA2_setup_s): '<Root>/CAN and LIN Setup ' */

  /* Level2 S-Function Block: '<Root>/CAN and LIN Setup ' (sg_CANLIN_OfA2_setup_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* Delay: '<S7>/Delay' */
  controller_sg_B.Delay_e = controller_sg_DW.Delay_DSTATE_f;

  /* Delay: '<S7>/Delay1' */
  controller_sg_B.Delay1 = controller_sg_DW.Delay1_DSTATE;

  /* Delay: '<S7>/Delay2' */
  controller_sg_B.Delay2 = controller_sg_DW.Delay2_DSTATE;

  /* Chart: '<S7>/governer_stateflow' */
  if (controller_sg_DW.temporalCounter_i1 < 2047U) {
    controller_sg_DW.temporalCounter_i1 = static_cast<uint16_T>
      (controller_sg_DW.temporalCounter_i1 + 1U);
  }

  controller_sg_DW.sfEvent_m = controller_sg_CALL_EVENT_c;
  if (controller_sg_DW.is_active_c8_governor_lib == 0U) {
    controller_sg_DW.is_active_c8_governor_lib = 1U;
    controller_sg_DW.is_c8_governor_lib = controlle_IN_Initialize_outputs;
    controller_sg_DW.temporalCounter_i1 = 0U;
    controller_sg_B.GOV_e_govSts = GOV_INIT;
    controller_sg_B.GOV_e_diCmd = DI_CMD_INIT;
    controller_sg_B.GOV_e_bmCmd = BM_CMD_INIT;
    controller_sg_DW.motorStartCount = 0U;
  } else {
    switch (controller_sg_DW.is_c8_governor_lib) {
     case controlle_IN_Initialize_outputs:
      controller_sg_B.GOV_e_govSts = GOV_INIT;
      controller_sg_B.GOV_e_diCmd = DI_CMD_INIT;
      controller_sg_B.GOV_e_bmCmd = BM_CMD_INIT;
      out = ((controller_sg_DW.temporalCounter_i1 >= 2000U) &&
             (controller_sg_B.Delay2 == HV_START_REQ));
      if (out) {
        controller_sg_DW.is_c8_governor_lib = controller_sg_IN_STARTUP;
        controller_sg_B.GOV_e_govSts = GOV_STARTUP;
        controller_sg_DW.is_STARTUP = controller_sg_IN_HV_startup;
        controller_sg_B.GOV_e_bmCmd = HV_STARTUP;
      }
      break;

     case controller_sg_IN_RUNNING:
      controller_sg_B.GOV_e_govSts = GOV_RUNNING;
      out = ((controller_sg_B.Delay_e == HVIL_INTERRUPT) ||
             (controller_sg_B.Delay_e == BM_LOW_SOC));
      if (out) {
        controller_sg_DW.is_c8_governor_lib = controller__IN_Vehicle_shutdown;
        controller_sg_B.GOV_e_govSts = GOV_SHUTDOWN;
        controller_sg_B.GOV_e_miCmd = CMD_SHUTDOWN;
        controller_sg_B.GOV_e_diCmd = DI_SHUTDOWN;
      } else if (controller_sg_B.Delay_e == ERR_RUNNING) {
        controller_sg_DW.is_c8_governor_lib = controller_sg_IN_RUNNING_ERROR;
        controller_sg_DW.is_RUNNING_ERROR = controller_sg_IN_HV_run_error;
        controller_sg_B.GOV_e_diCmd = RUN_ERROR;
        controller_sg_B.GOV_e_govSts = HV_RUN_ERROR;
      } else if (controller_sg_B.Delay1 == MI_STS_ERROR) {
        controller_sg_DW.is_c8_governor_lib = controller_sg_IN_RUNNING_ERROR;
        controller_sg_DW.is_RUNNING_ERROR = controller_s_IN_Motor_run_error;
        controller_sg_B.GOV_e_diCmd = RUN_ERROR;
        controller_sg_B.GOV_e_govSts = MOTOR_RUN_ERROR;
      }
      break;

     case controller_sg_IN_RUNNING_ERROR:
      if (controller_sg_DW.is_RUNNING_ERROR == controller_sg_IN_HV_run_error) {
        controller_sg_B.GOV_e_diCmd = RUN_ERROR;
        controller_sg_B.GOV_e_govSts = HV_RUN_ERROR;
      } else {
        /* case IN_Motor_run_error: */
        controller_sg_B.GOV_e_diCmd = RUN_ERROR;
        controller_sg_B.GOV_e_govSts = MOTOR_RUN_ERROR;
      }
      break;

     case controller_sg_IN_STARTUP:
      {
        controller_sg_B.GOV_e_govSts = GOV_STARTUP;
        if (controller_sg_B.Delay_e == HVIL_INTERRUPT) {
          controller_sg_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_i;
          controller_sg_DW.is_c8_governor_lib = controller_sg_IN_STARTUP_ERROR;
          controller_sg_DW.is_STARTUP_ERROR = controller__IN_HV_startup_error;
          controller_sg_B.GOV_e_govSts = HV_STARTUP_ERROR;
          controller_sg_B.GOV_e_diCmd = DI_SHUTDOWN;
        } else if (controller_sg_B.Delay2 == DI_ERROR) {
          controller_sg_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_i;
          controller_sg_DW.is_c8_governor_lib = controller_sg_IN_STARTUP_ERROR;
          controller_sg_DW.is_STARTUP_ERROR = contro_IN_DriverInterface_Error;
          controller_sg_B.GOV_e_govSts = GOV_DI_ERROR;
        } else if (controller_sg_B.Delay1 == MI_STS_ERROR) {
          if (controller_sg_DW.motorStartCount >= 5) {
            controller_sg_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_i;
            controller_sg_DW.is_c8_governor_lib = controller_sg_IN_STARTUP_ERROR;
            controller_sg_DW.is_STARTUP_ERROR = controller_sg_IN_Motor_faulted;
            controller_sg_B.GOV_e_miCmd = CMD_SHUTDOWN;
            controller_sg_B.GOV_e_govSts = MOTOR_STARTUP_ERROR;
          } else {
            controller_sg_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_i;
            controller_sg_DW.is_c8_governor_lib = controller_sg_IN_STARTUP_ERROR;
            controller_sg_DW.is_STARTUP_ERROR = controller_sg_IN_Err_reset;
          }
        } else {
          switch (controller_sg_DW.is_STARTUP) {
           case contro_IN_Command_motor_startup:
            if (controller_sg_B.Delay1 == RUNNING) {
              controller_sg_DW.is_STARTUP = controller_IN_Send_ReadyToDrive;
              controller_sg_B.GOV_e_diCmd = READY_TO_DRIVE;
            }
            break;

           case controller_sg_IN_HV_startup:
            controller_sg_B.GOV_e_bmCmd = HV_STARTUP;
            if (controller_sg_B.Delay_e == BM_RUNNING) {
              controller_sg_DW.is_STARTUP = controller_sg_IN_ReadyToDrive;
              controller_sg_B.GOV_e_diCmd = HV_ON;
            }
            break;

           case controller_sg_IN_ReadyToDrive:
            {
              controller_sg_B.GOV_e_diCmd = HV_ON;
              if (controller_sg_B.Delay2 == READY_TO_DRIVE_REQ) {
                uint32_T tmp_0;
                controller_sg_DW.is_STARTUP = contro_IN_Command_motor_startup;
                controller_sg_B.GOV_e_miCmd = CMD_STARTUP;
                tmp_0 = controller_sg_DW.motorStartCount + 1U;
                if (tmp_0 > 65535U) {
                  tmp_0 = 65535U;
                }

                controller_sg_DW.motorStartCount = static_cast<uint16_T>(tmp_0);
              }
            }
            break;

           default:
            /* case IN_Send_ReadyToDrive: */
            controller_sg_B.GOV_e_diCmd = READY_TO_DRIVE;
            if (controller_sg_B.Delay2 == DI_RUNNING) {
              controller_sg_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_i;
              controller_sg_DW.is_c8_governor_lib = controller_sg_IN_RUNNING;
              controller_sg_B.GOV_e_govSts = GOV_RUNNING;
            }
            break;
          }
        }
      }
      break;

     case controller_sg_IN_STARTUP_ERROR:
      switch (controller_sg_DW.is_STARTUP_ERROR) {
       case contro_IN_DriverInterface_Error:
        controller_sg_B.GOV_e_govSts = GOV_DI_ERROR;
        break;

       case controller_sg_IN_Err_reset:
        if (controller_sg_B.Delay1 == OFF) {
          controller_sg_DW.is_STARTUP_ERROR = controller_IN_NO_ACTIVE_CHILD_i;
          controller_sg_DW.is_c8_governor_lib = controller_sg_IN_STARTUP;
          controller_sg_B.GOV_e_govSts = GOV_STARTUP;
          controller_sg_DW.is_STARTUP = controller_sg_IN_HV_startup;
          controller_sg_B.GOV_e_bmCmd = HV_STARTUP;
        } else {
          controller_sg_B.GOV_e_miCmd = ERR_RESET;
        }
        break;

       case controller__IN_HV_startup_error:
        controller_sg_B.GOV_e_govSts = HV_STARTUP_ERROR;
        controller_sg_B.GOV_e_diCmd = DI_SHUTDOWN;
        if (controller_sg_B.Delay_e == BM_INIT) {
          controller_sg_DW.is_STARTUP_ERROR = controller_IN_NO_ACTIVE_CHILD_i;
          controller_sg_DW.is_c8_governor_lib = controlle_IN_Initialize_outputs;
          controller_sg_DW.temporalCounter_i1 = 0U;
          controller_sg_B.GOV_e_govSts = GOV_INIT;
          controller_sg_B.GOV_e_diCmd = DI_CMD_INIT;
          controller_sg_B.GOV_e_bmCmd = BM_CMD_INIT;
          controller_sg_DW.motorStartCount = 0U;
        }
        break;

       default:
        /* case IN_Motor_faulted: */
        controller_sg_B.GOV_e_govSts = MOTOR_STARTUP_ERROR;
        break;
      }
      break;

     default:
      /* case IN_Vehicle_shutdown: */
      controller_sg_B.GOV_e_govSts = GOV_SHUTDOWN;
      controller_sg_B.GOV_e_diCmd = DI_SHUTDOWN;
      if (controller_sg_B.Delay_e == BM_INIT) {
        controller_sg_DW.is_c8_governor_lib = controlle_IN_Initialize_outputs;
        controller_sg_DW.temporalCounter_i1 = 0U;
        controller_sg_B.GOV_e_govSts = GOV_INIT;
        controller_sg_B.GOV_e_diCmd = DI_CMD_INIT;
        controller_sg_B.GOV_e_bmCmd = BM_CMD_INIT;
        controller_sg_DW.motorStartCount = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S7>/governer_stateflow' */

  /* S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read ' */

  /* Level2 S-Function Block: '<Root>/CAN Read ' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* Outputs for Atomic SubSystem: '<Root>/Function-Call Subsystem1' */
  /* S-Function (scanunpack): '<S3>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S3>/CAN Unpack' */
    if ((8 == controller_sg_B.CANRead_o2.Length) &&
        (controller_sg_B.CANRead_o2.ID != INVALID_CAN_ID) ) {
      if ((645 == controller_sg_B.CANRead_o2.ID) && (0U ==
           controller_sg_B.CANRead_o2.Extended) ) {
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[3]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_ActualVelocity_R = result;
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[6]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[7]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_MagnetizingCurrent_R = result;
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[4]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[5]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_TorqueCurrent_R = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bDcOn_R = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x80U)) >>
                    7);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bDerating_R = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x2U)) >> 1);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bError_R = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x40U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bInverterOn_R = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x8U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bQuitDcOn_R = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bQuitInverterOn_R = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bSystemReady_R = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x4U)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bWarn_R = result;
            }
          }
        }
      }
    }
  }

  /* S-Function (scanunpack): '<S3>/CAN Unpack1' */
  {
    /* S-Function (scanunpack): '<S3>/CAN Unpack1' */
    if ((8 == controller_sg_B.CANRead_o2.Length) &&
        (controller_sg_B.CANRead_o2.ID != INVALID_CAN_ID) ) {
      if ((647 == controller_sg_B.CANRead_o2.ID) && (0U ==
           controller_sg_B.CANRead_o2.Extended) ) {
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[4]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[5]) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_ErrorInfo_R = result;
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[6]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[7]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.1;
              controller_sg_B.AMK_TempIGBT_R = result;
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[3]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.1;
              controller_sg_B.AMK_TempInverter_R = result;
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[0]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[1]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.1;
              controller_sg_B.AMK_TempMotor_R = result;
            }
          }
        }
      }
    }
  }

  /* S-Function (scanunpack): '<S3>/CAN Unpack2' */
  {
    /* S-Function (scanunpack): '<S3>/CAN Unpack2' */
    if ((8 == controller_sg_B.CANRead_o2.Length) &&
        (controller_sg_B.CANRead_o2.ID != INVALID_CAN_ID) ) {
      if ((644 == controller_sg_B.CANRead_o2.ID) && (0U ==
           controller_sg_B.CANRead_o2.Extended) ) {
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[3]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_ActualVelocity_L = result;
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[6]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[7]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_MagnetizingCurrent_L = result;
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[4]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[5]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_TorqueCurrent_L = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x10U)) >>
                    4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bDcOn_L = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x80U)) >>
                    7);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bDerating_L = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x2U)) >> 1);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bError_L = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x40U)) >>
                    6);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bInverterOn_L = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x8U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bQuitDcOn_L = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x20U)) >>
                    5);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bQuitInverterOn_L = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bSystemReady_L = result;
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
                    (controller_sg_B.CANRead_o2.Data[1]) & (uint8_T)(0x4U)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_bWarn_L = result;
            }
          }
        }
      }
    }
  }

  /* S-Function (scanunpack): '<S3>/CAN Unpack3' */
  {
    /* S-Function (scanunpack): '<S3>/CAN Unpack3' */
    if ((8 == controller_sg_B.CANRead_o2.Length) &&
        (controller_sg_B.CANRead_o2.ID != INVALID_CAN_ID) ) {
      if ((646 == controller_sg_B.CANRead_o2.ID) && (0U ==
           controller_sg_B.CANRead_o2.Extended) ) {
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[4]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[5]) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.AMK_ErrorInfo_L = result;
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[6]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[7]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.1;
              controller_sg_B.AMK_TempIGBT_L = result;
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[3]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.1;
              controller_sg_B.AMK_TempInverter_L = result;
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
                  tempValue = tempValue | (uint16_T)
                    (controller_sg_B.CANRead_o2.Data[0]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (controller_sg_B.CANRead_o2.Data[1]) << 8);
                }

                unpackedValue = *tempValuePtr;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.1;
              controller_sg_B.AMK_TempMotor_L = result;
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem1' */

  /* S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read 1' */

  /* Level2 S-Function Block: '<Root>/CAN Read 1' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* Outputs for Atomic SubSystem: '<Root>/Function-Call Subsystem2' */
  /* S-Function (scanunpack): '<S4>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S4>/CAN Unpack' */
    if ((8 == controller_sg_B.CANRead1_o2.Length) &&
        (controller_sg_B.CANRead1_o2.ID != INVALID_CAN_ID) ) {
      if ((256 == controller_sg_B.CANRead1_o2.ID) && (0U ==
           controller_sg_B.CANRead1_o2.Extended) ) {
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
                  tempValue = tempValue | (uint8_T)
                    (controller_sg_B.CANRead1_o2.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.005;
              controller_sg_B.CANUnpack_o1 = result;
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
                  tempValue = tempValue | (uint8_T)
                    (controller_sg_B.CANRead1_o2.Data[1]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.005;
              controller_sg_B.CANUnpack_o2 = result;
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
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (controller_sg_B.CANRead1_o2.Data[2]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.005;
              controller_sg_B.CANUnpack_o3 = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 24
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
                  tempValue = tempValue | (uint8_T)
                    (controller_sg_B.CANRead1_o2.Data[3]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              result = result * 0.005;
              controller_sg_B.CANUnpack_o4 = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 41
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
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (controller_sg_B.CANRead1_o2.Data[5]) & (uint8_T)(0x2U)) >>
                    1);
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
              controller_sg_B.CANUnpack_o5 = result;
            }
          }

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
                    (controller_sg_B.CANRead1_o2.Data[5]) & (uint8_T)(0x1U));
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
              controller_sg_B.CANUnpack_o6 = result;
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
          /*
           * Signal is not connected or connected to terminator.
           * No unpacking code generated.
           */

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

  /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem2' */

  /* Logic: '<S6>/NOT1' */
  controller_sg_B.NOT1 = !(controller_sg_B.CANUnpack_o6 != 0.0);

  /* RelationalOperator: '<S21>/Lower Test' incorporates:
   *  Constant: '<S16>/LowerPotentiometerLimit1'
   */
  controller_sg_B.LowerTest = (0.0 <= controller_sg_B.CANUnpack_o1);

  /* RelationalOperator: '<S21>/Upper Test' incorporates:
   *  Constant: '<S16>/UpperPotentiometerLimit1'
   */
  controller_sg_B.UpperTest = (controller_sg_B.CANUnpack_o1 <= 1.0);

  /* Logic: '<S21>/FixPt Logical Operator' */
  controller_sg_B.FixPtLogicalOperator = (controller_sg_B.LowerTest &&
    controller_sg_B.UpperTest);

  /* Logic: '<S16>/NOT' */
  controller_sg_B.NOT = !controller_sg_B.FixPtLogicalOperator;

  /* RelationalOperator: '<S22>/Lower Test' incorporates:
   *  Constant: '<S17>/LowerPotentiometerLimit1'
   */
  controller_sg_B.LowerTest_j = (0.0 <= controller_sg_B.CANUnpack_o2);

  /* RelationalOperator: '<S22>/Upper Test' incorporates:
   *  Constant: '<S17>/UpperPotentiometerLimit1'
   */
  controller_sg_B.UpperTest_a = (controller_sg_B.CANUnpack_o2 <= 1.0);

  /* Logic: '<S22>/FixPt Logical Operator' */
  controller_sg_B.FixPtLogicalOperator_c = (controller_sg_B.LowerTest_j &&
    controller_sg_B.UpperTest_a);

  /* Logic: '<S17>/NOT' */
  controller_sg_B.NOT_c = !controller_sg_B.FixPtLogicalOperator_c;

  /* RelationalOperator: '<S23>/Lower Test' incorporates:
   *  Constant: '<S18>/LowerPotentiometerLimit1'
   */
  controller_sg_B.LowerTest_k = (0.0 <= controller_sg_B.CANUnpack_o3);

  /* RelationalOperator: '<S23>/Upper Test' incorporates:
   *  Constant: '<S18>/UpperPotentiometerLimit1'
   */
  controller_sg_B.UpperTest_n = (controller_sg_B.CANUnpack_o3 <= 1.0);

  /* Logic: '<S23>/FixPt Logical Operator' */
  controller_sg_B.FixPtLogicalOperator_i = (controller_sg_B.LowerTest_k &&
    controller_sg_B.UpperTest_n);

  /* Logic: '<S18>/NOT' */
  controller_sg_B.NOT_n = !controller_sg_B.FixPtLogicalOperator_i;

  /* RelationalOperator: '<S24>/Lower Test' incorporates:
   *  Constant: '<S19>/LowerPotentiometerLimit1'
   */
  controller_sg_B.LowerTest_c = (0.0 <= controller_sg_B.CANUnpack_o4);

  /* RelationalOperator: '<S24>/Upper Test' incorporates:
   *  Constant: '<S19>/UpperPotentiometerLimit1'
   */
  controller_sg_B.UpperTest_k = (controller_sg_B.CANUnpack_o4 <= 1.0);

  /* Logic: '<S24>/FixPt Logical Operator' */
  controller_sg_B.FixPtLogicalOperator_a = (controller_sg_B.LowerTest_c &&
    controller_sg_B.UpperTest_k);

  /* Logic: '<S19>/NOT' */
  controller_sg_B.NOT_d = !controller_sg_B.FixPtLogicalOperator_a;

  /* Sum: '<S12>/Subtract' */
  controller_sg_B.Subtract = controller_sg_B.CANUnpack_o1 -
    controller_sg_B.CANUnpack_o2;

  /* Abs: '<S12>/Abs' */
  controller_sg_B.Abs = std::abs(controller_sg_B.Subtract);

  /* RelationalOperator: '<S12>/GreaterThan' incorporates:
   *  Constant: '<S12>/Constant'
   */
  controller_sg_B.GreaterThan = (controller_sg_B.Abs > 0.1);

  /* Switch: '<S12>/Switch' */
  if (controller_sg_B.GreaterThan) {
    /* Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S12>/Constant1'
     */
    controller_sg_B.Switch = 1.0;
  } else {
    /* Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S12>/Constant2'
     */
    controller_sg_B.Switch = 0.0;
  }

  /* End of Switch: '<S12>/Switch' */

  /* Logic: '<S6>/b_DriverInterfaceError' */
  controller_sg_B.b_DriverInterfaceError = (controller_sg_B.NOT ||
    controller_sg_B.NOT_c || controller_sg_B.NOT_n || controller_sg_B.NOT_d ||
    controller_sg_ConstB.NOT || (controller_sg_B.Switch != 0.0));

  /* MinMax: '<S6>/Max' */
  u0 = controller_sg_B.CANUnpack_o3;
  tmp = controller_sg_B.CANUnpack_o4;
  if ((u0 >= tmp) || rtIsNaN(tmp)) {
    tmp = u0;
  }

  /* MinMax: '<S6>/Max' */
  controller_sg_B.Max = tmp;

  /* Chart: '<S6>/driver_interface' */
  if (controller_sg_DW.temporalCounter_i1_c < 2047U) {
    controller_sg_DW.temporalCounter_i1_c = static_cast<uint16_T>
      (controller_sg_DW.temporalCounter_i1_c + 1U);
  }

  controller_sg_DW.sfEvent_c = controller_sg_CALL_EVENT_c;
  if (controller_sg_DW.is_active_c2_driver_interface_l == 0U) {
    controller_sg_DW.is_active_c2_driver_interface_l = 1U;
    controller_sg_DW.is_c2_driver_interface_lib = controller_sg_IN_INIT;
    controller_sg_B.GOV_e_diSts = DI_STS_INIT;
    controller_sg_B.b_ReadyToDrive = false;
    controller_sg_B.DI_b_driverSpeaker = false;
  } else {
    switch (controller_sg_DW.is_c2_driver_interface_lib) {
     case controller_sg_IN_DI_error:
      controller_sg_B.GOV_e_diSts = DI_ERROR;
      break;

     case controller_sg_IN_DI_running:
      if (controller_sg_B.b_DriverInterfaceError) {
        controller_sg_DW.is_Ready_to_drive = controller_IN_NO_ACTIVE_CHILD_i;
        controller_sg_DW.is_DI_running = controller_IN_NO_ACTIVE_CHILD_i;
        controller_sg_DW.is_c2_driver_interface_lib = controller_sg_IN_DI_error;
        controller_sg_B.GOV_e_diSts = DI_ERROR;
      } else if (controller_sg_B.GOV_e_diCmd == DI_SHUTDOWN) {
        controller_sg_DW.is_Ready_to_drive = controller_IN_NO_ACTIVE_CHILD_i;
        controller_sg_DW.is_DI_running = controller_IN_NO_ACTIVE_CHILD_i;
        controller_sg_DW.is_c2_driver_interface_lib = controller_sg_IN_INIT;
        controller_sg_B.GOV_e_diSts = DI_STS_INIT;
        controller_sg_B.b_ReadyToDrive = false;
        controller_sg_B.DI_b_driverSpeaker = false;
      } else {
        switch (controller_sg_DW.is_DI_running) {
         case contr_IN_Driver_requested_start:
          controller_sg_B.GOV_e_diSts = HV_START_REQ;
          out = ((controller_sg_B.GOV_e_diCmd == HV_ON) && controller_sg_B.NOT1);
          if (out) {
            controller_sg_DW.is_DI_running = controll_IN_Motor_start_request;
            controller_sg_B.GOV_e_diSts = READY_TO_DRIVE_REQ;
          }
          break;

         case controll_IN_Motor_start_request:
          controller_sg_B.GOV_e_diSts = READY_TO_DRIVE_REQ;
          out = ((controller_sg_B.GOV_e_diCmd == READY_TO_DRIVE) &&
                 (controller_sg_B.Max > 0.1));
          if (out) {
            controller_sg_DW.is_DI_running = controller_sg_IN_Ready_to_drive;
            controller_sg_B.b_ReadyToDrive = true;
            controller_sg_B.GOV_e_diSts = DI_RUNNING;
            controller_sg_DW.is_Ready_to_drive = controller_sg_IN_SpeakerOn_;
            controller_sg_DW.temporalCounter_i1_c = 0U;
            controller_sg_B.DI_b_driverSpeaker = true;
          }
          break;

         case controller_sg_IN_Ready_to_drive:
          controller_sg_B.b_ReadyToDrive = true;
          controller_sg_B.GOV_e_diSts = DI_RUNNING;
          if (controller_sg_B.GOV_e_diCmd == RUN_ERROR) {
            controller_sg_DW.is_Ready_to_drive = controller_IN_NO_ACTIVE_CHILD_i;
            controller_sg_DW.is_DI_running = controller_IN_NO_ACTIVE_CHILD_i;
            controller_sg_DW.is_c2_driver_interface_lib =
              controller__IN_Vehicle_coasting;
            controller_sg_B.b_ReadyToDrive = false;
            controller_sg_B.GOV_e_diSts = DI_IDLE;
          } else if (controller_sg_DW.is_Ready_to_drive ==
                     controller_sg_IN_SpeakerOff) {
            controller_sg_B.DI_b_driverSpeaker = false;
          } else {
            /* case IN_SpeakerOn_: */
            controller_sg_B.DI_b_driverSpeaker = true;
            if (controller_sg_DW.temporalCounter_i1_c >= 2000U) {
              controller_sg_DW.is_Ready_to_drive = controller_sg_IN_SpeakerOff;
              controller_sg_B.DI_b_driverSpeaker = false;
            }
          }
          break;

         default:
          /* case IN_Waiting_for_driver: */
          controller_sg_B.GOV_e_diSts = WAITING_FOR_DRVR;
          if (controller_sg_B.NOT1) {
            controller_sg_DW.is_DI_running = contr_IN_Driver_requested_start;
            controller_sg_B.GOV_e_diSts = HV_START_REQ;
          }
          break;
        }
      }
      break;

     case controller_sg_IN_INIT:
      controller_sg_B.GOV_e_diSts = DI_STS_INIT;
      controller_sg_B.b_ReadyToDrive = false;
      controller_sg_B.DI_b_driverSpeaker = false;
      if (controller_sg_B.GOV_e_diCmd == DI_CMD_INIT) {
        controller_sg_DW.is_c2_driver_interface_lib =
          controller_sg_IN_DI_running;
        controller_sg_DW.is_DI_running = controlle_IN_Waiting_for_driver;
        controller_sg_B.GOV_e_diSts = WAITING_FOR_DRVR;
      }
      break;

     default:
      /* case IN_Vehicle_coasting: */
      controller_sg_B.b_ReadyToDrive = false;
      controller_sg_B.GOV_e_diSts = DI_IDLE;
      break;
    }
  }

  /* End of Chart: '<S6>/driver_interface' */

  /* Logic: '<S6>/NOT' */
  controller_sg_B.NOT_g = !controller_sg_B.b_ReadyToDrive;

  /* Logic: '<S6>/OR1' */
  controller_sg_B.OR1 = (controller_sg_B.NOT_g ||
    controller_sg_B.b_DriverInterfaceError);

  /* Lookup_n-D: '<S6>/AccelPedalMap' incorporates:
   *  S-Function (scanunpack): '<S4>/CAN Unpack'
   */
  controller_sg_B.AccelPedalMap = look1_binlcpw(controller_sg_B.CANUnpack_o1,
    controller_sg_ConstP.pooled5, controller_sg_ConstP.pooled5, 1U);

  /* If: '<S6>/If' incorporates:
   *  Constant: '<S6>/Constant'
   */
  if (controller_sg_B.OR1) {
    /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    controller_sg_IfActionSubsystem(0.0, &controller_sg_B.Merge);

    /* End of Outputs for SubSystem: '<S6>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    controller_sg_IfActionSubsystem(controller_sg_B.AccelPedalMap,
      &controller_sg_B.Merge);

    /* End of Outputs for SubSystem: '<S6>/If Action Subsystem1' */
  }

  /* End of If: '<S6>/If' */

  /* Logic: '<S6>/OR' */
  controller_sg_B.OR = (controller_sg_B.NOT_d || controller_sg_B.NOT_n);

  /* Switch: '<S6>/Switch2' */
  if (controller_sg_B.OR) {
    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S6>/Constant1'
     */
    controller_sg_B.Switch2 = 0.0F;
  } else {
    /* Switch: '<S6>/Switch2' */
    controller_sg_B.Switch2 = controller_sg_B.Max;
  }

  /* End of Switch: '<S6>/Switch2' */

  /* Lookup_n-D: '<S6>/BrakePedalMap' incorporates:
   *  Switch: '<S6>/Switch2'
   */
  controller_sg_B.BrakePedalMap = look1_binlcpw(controller_sg_B.Switch2,
    controller_sg_ConstP.pooled6, controller_sg_ConstP.pooled6, 20U);

  /* Switch: '<S9>/Switch' */
  if (controller_sg_B.BrakePedalMap > 0.1) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant4'
     */
    controller_sg_B.Switch_c = 1.0;
  } else {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant5'
     */
    controller_sg_B.Switch_c = 0.0;
  }

  /* End of Switch: '<S9>/Switch' */

  /* Chart: '<S9>/Chart' */
  controller_sg_DW.sfEvent = controller_sg_CALL_EVENT_c;
  if (controller_sg_DW.is_active_c3_controller_sg == 0U) {
    controller_sg_DW.is_active_c3_controller_sg = 1U;
    controller_sg_DW.is_c3_controller_sg = controller_sg_IN_Run;
    controller_sg_B.DI_p_motorTorqueRequest = controller_sg_B.Merge;
  } else if (controller_sg_DW.is_c3_controller_sg == controller_sg_IN_Run) {
    out = ((controller_sg_B.Merge >= 0.25) && (controller_sg_B.Switch_c != 0.0));
    if (out) {
      controller_sg_DW.is_c3_controller_sg = controller_sg_IN_Stop;
      controller_sg_B.DI_p_motorTorqueRequest = 0.0;
    } else {
      controller_sg_B.DI_p_motorTorqueRequest = controller_sg_B.Merge;
    }
  } else {
    /* case IN_Stop: */
    out = ((controller_sg_B.Merge < 0.05) && (!(controller_sg_B.Switch_c != 0.0)));
    if (out) {
      controller_sg_DW.is_c3_controller_sg = controller_sg_IN_Run;
      controller_sg_B.DI_p_motorTorqueRequest = controller_sg_B.Merge;
    } else {
      controller_sg_B.DI_p_motorTorqueRequest = 0.0;
    }
  }

  /* End of Chart: '<S9>/Chart' */

  /* Product: '<S9>/Product' incorporates:
   *  Constant: '<S9>/Constant8'
   */
  controller_sg_B.Product = controller_sg_B.DI_p_motorTorqueRequest * 1.0;

  /* Lookup_n-D: '<S9>/%pedal to %torque' incorporates:
   *  Product: '<S9>/Product'
   */
  controller_sg_B.pedaltotorque = look1_binlxpw(controller_sg_B.Product,
    controller_sg_ConstP.pedaltotorque_bp01Data,
    controller_sg_ConstP.pedaltotorque_tableData, 100U);

  /* SignalConversion generated from: '<S30>/Vector Concatenate' incorporates:
   *  Concatenate: '<S30>/Vector Concatenate'
   */
  controller_sg_B.VectorConcatenate[0] = controller_sg_B.pedaltotorque;

  /* S-Function (sfix_udelay): '<S30>/Tapped Delay' incorporates:
   *  Concatenate: '<S30>/Vector Concatenate'
   */
  std::memcpy(&controller_sg_B.VectorConcatenate[1],
              &controller_sg_DW.TappedDelay_X[0], 10U * sizeof(real_T));

  /* Sum: '<S30>/Sum of Elements' */
  tmp = -0.0;
  for (int32_T i = 0; i < 11; i++) {
    tmp += controller_sg_B.VectorConcatenate[i];
  }

  /* Sum: '<S30>/Sum of Elements' */
  controller_sg_B.SumofElements = tmp;

  /* Product: '<S30>/Divide' */
  controller_sg_B.Divide = controller_sg_B.SumofElements /
    controller_sg_ConstB.Width;

  /* Product: '<S9>/Product2' incorporates:
   *  Constant: '<S9>/Constant8'
   */
  controller_sg_B.Product2 = 1.0 * controller_sg_B.Divide;

  /* DataTypeConversion: '<S8>/Cast To Single1' */
  controller_sg_B.CastToSingle1 = static_cast<real32_T>(controller_sg_B.Product2);

  /* Chart: '<S8>/mi_right' */
  controller_sg_mi_left(controller_sg_B.GOV_e_miCmd, controller_sg_B.AMK_bDcOn_R,
                        controller_sg_B.AMK_bError_R,
                        controller_sg_B.AMK_bInverterOn_R,
                        controller_sg_B.AMK_bQuitDcOn_R,
                        controller_sg_B.AMK_bQuitInverterOn_R,
                        controller_sg_B.AMK_bSystemReady_R,
                        controller_sg_B.CastToSingle_g,
                        controller_sg_B.CastToSingle1,
                        controller_sg_B.CastToSingle2_d,
                        &controller_sg_B.sf_mi_right,
                        &controller_sg_DW.sf_mi_right);

  /* S-Function (scanpack): '<S1>/CAN Pack' */
  /* S-Function (scanpack): '<S1>/CAN Pack' */
  controller_sg_B.AMK0_SetPoints1.ID = 390U;
  controller_sg_B.AMK0_SetPoints1.Length = 8U;
  controller_sg_B.AMK0_SetPoints1.Extended = 0U;
  controller_sg_B.AMK0_SetPoints1.Remote = 0;
  controller_sg_B.AMK0_SetPoints1.Data[0] = 0;
  controller_sg_B.AMK0_SetPoints1.Data[1] = 0;
  controller_sg_B.AMK0_SetPoints1.Data[2] = 0;
  controller_sg_B.AMK0_SetPoints1.Data[3] = 0;
  controller_sg_B.AMK0_SetPoints1.Data[4] = 0;
  controller_sg_B.AMK0_SetPoints1.Data[5] = 0;
  controller_sg_B.AMK0_SetPoints1.Data[6] = 0;
  controller_sg_B.AMK0_SetPoints1.Data[7] = 0;

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
        real32_T result = controller_sg_B.sf_mi_right.AMK_TargetVelocity;

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
            controller_sg_B.AMK0_SetPoints1.Data[2] =
              controller_sg_B.AMK0_SetPoints1.Data[2] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            controller_sg_B.AMK0_SetPoints1.Data[3] =
              controller_sg_B.AMK0_SetPoints1.Data[3] | (uint8_T)((uint16_T)
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
        real32_T result = controller_sg_B.sf_mi_right.AMK_TorqueLimitNegativ;

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
            controller_sg_B.AMK0_SetPoints1.Data[6] =
              controller_sg_B.AMK0_SetPoints1.Data[6] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            controller_sg_B.AMK0_SetPoints1.Data[7] =
              controller_sg_B.AMK0_SetPoints1.Data[7] | (uint8_T)((uint16_T)
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
        real32_T result = controller_sg_B.sf_mi_right.AMK_TorqueLimitPositiv;

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
            controller_sg_B.AMK0_SetPoints1.Data[4] =
              controller_sg_B.AMK0_SetPoints1.Data[4] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            controller_sg_B.AMK0_SetPoints1.Data[5] =
              controller_sg_B.AMK0_SetPoints1.Data[5] | (uint8_T)((uint16_T)
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
        uint32_T result = (uint32_T) (controller_sg_B.sf_mi_right.AMK_bDcOn_tx);

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
            controller_sg_B.AMK0_SetPoints1.Data[1] =
              controller_sg_B.AMK0_SetPoints1.Data[1] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
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
        uint32_T result = (uint32_T) (controller_sg_B.sf_mi_right.AMK_bEnable);

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
            controller_sg_B.AMK0_SetPoints1.Data[1] =
              controller_sg_B.AMK0_SetPoints1.Data[1] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 2));
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
        uint32_T result = (uint32_T)
          (controller_sg_B.sf_mi_right.AMK_bErrorReset);

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
            controller_sg_B.AMK0_SetPoints1.Data[1] =
              controller_sg_B.AMK0_SetPoints1.Data[1] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
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
        uint32_T result = (uint32_T)
          (controller_sg_B.sf_mi_right.AMK_bInverterOn_tx);

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
            controller_sg_B.AMK0_SetPoints1.Data[1] =
              controller_sg_B.AMK0_SetPoints1.Data[1] | (uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U));
          }
        }
      }
    }
  }

  /* S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write ' */

  /* Level2 S-Function Block: '<Root>/CAN Write ' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S6>/Switch' */
  if (controller_sg_B.BrakePedalMap > 0.1) {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant4'
     */
    controller_sg_B.Switch_o = true;
  } else {
    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S6>/Constant3'
     */
    controller_sg_B.Switch_o = false;
  }

  /* End of Switch: '<S6>/Switch' */

  /* S-Function (scanpack): '<Root>/CAN Pack' */
  /* S-Function (scanpack): '<Root>/CAN Pack' */
  controller_sg_B.CANPack.ID = 257U;
  controller_sg_B.CANPack.Length = 1U;
  controller_sg_B.CANPack.Extended = 0U;
  controller_sg_B.CANPack.Remote = 0;
  controller_sg_B.CANPack.Data[0] = 0;
  controller_sg_B.CANPack.Data[1] = 0;
  controller_sg_B.CANPack.Data[2] = 0;
  controller_sg_B.CANPack.Data[3] = 0;
  controller_sg_B.CANPack.Data[4] = 0;
  controller_sg_B.CANPack.Data[5] = 0;
  controller_sg_B.CANPack.Data[6] = 0;
  controller_sg_B.CANPack.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 0
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (controller_sg_B.Switch_o);

        /* no scaling required */
        packingValue = result;
      }

      {
        int8_T packedValue;
        int32_T scaledValue;
        scaledValue = (int32_T) packingValue;
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
            controller_sg_B.CANPack.Data[0] = controller_sg_B.CANPack.Data[0] |
              (uint8_T)((uint8_T)(tempValue & (uint8_T)0x1U));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 1
     *  length                  = 1
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = SIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (controller_sg_B.DI_b_driverSpeaker);

        /* no scaling required */
        packingValue = result;
      }

      {
        int8_T packedValue;
        int32_T scaledValue;
        scaledValue = (int32_T) packingValue;
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
            controller_sg_B.CANPack.Data[0] = controller_sg_B.CANPack.Data[0] |
              (uint8_T)((uint8_T)((uint8_T)(tempValue & (uint8_T)0x1U) << 1));
          }
        }
      }
    }
  }

  /* S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 1' */

  /* Level2 S-Function Block: '<Root>/CAN Write 1' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* Product: '<S9>/Product1' incorporates:
   *  Constant: '<S9>/Constant8'
   */
  controller_sg_B.Product1 = controller_sg_B.Divide * 1.0;

  /* DataTypeConversion: '<S8>/Cast To Single4' */
  controller_sg_B.CastToSingle4 = static_cast<real32_T>(controller_sg_B.Product1);

  /* Chart: '<S8>/mi_left' */
  controller_sg_mi_left(controller_sg_B.GOV_e_miCmd, controller_sg_B.AMK_bDcOn_L,
                        controller_sg_B.AMK_bError_L,
                        controller_sg_B.AMK_bInverterOn_L,
                        controller_sg_B.AMK_bQuitDcOn_L,
                        controller_sg_B.AMK_bQuitInverterOn_L,
                        controller_sg_B.AMK_bSystemReady_L,
                        controller_sg_B.CastToSingle3_j,
                        controller_sg_B.CastToSingle4,
                        controller_sg_B.CastToSingle5,
                        &controller_sg_B.sf_mi_left,
                        &controller_sg_DW.sf_mi_left);

  /* S-Function (scanpack): '<S1>/CAN Pack1' */
  /* S-Function (scanpack): '<S1>/CAN Pack1' */
  controller_sg_B.AMK1_SetPoints1.ID = 389U;
  controller_sg_B.AMK1_SetPoints1.Length = 8U;
  controller_sg_B.AMK1_SetPoints1.Extended = 0U;
  controller_sg_B.AMK1_SetPoints1.Remote = 0;
  controller_sg_B.AMK1_SetPoints1.Data[0] = 0;
  controller_sg_B.AMK1_SetPoints1.Data[1] = 0;
  controller_sg_B.AMK1_SetPoints1.Data[2] = 0;
  controller_sg_B.AMK1_SetPoints1.Data[3] = 0;
  controller_sg_B.AMK1_SetPoints1.Data[4] = 0;
  controller_sg_B.AMK1_SetPoints1.Data[5] = 0;
  controller_sg_B.AMK1_SetPoints1.Data[6] = 0;
  controller_sg_B.AMK1_SetPoints1.Data[7] = 0;

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
        real32_T result = controller_sg_B.sf_mi_left.AMK_TargetVelocity;

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
            controller_sg_B.AMK1_SetPoints1.Data[2] =
              controller_sg_B.AMK1_SetPoints1.Data[2] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            controller_sg_B.AMK1_SetPoints1.Data[3] =
              controller_sg_B.AMK1_SetPoints1.Data[3] | (uint8_T)((uint16_T)
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
        real32_T result = controller_sg_B.sf_mi_left.AMK_TorqueLimitNegativ;

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
            controller_sg_B.AMK1_SetPoints1.Data[6] =
              controller_sg_B.AMK1_SetPoints1.Data[6] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            controller_sg_B.AMK1_SetPoints1.Data[7] =
              controller_sg_B.AMK1_SetPoints1.Data[7] | (uint8_T)((uint16_T)
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
        real32_T result = controller_sg_B.sf_mi_left.AMK_TorqueLimitPositiv;

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
            controller_sg_B.AMK1_SetPoints1.Data[4] =
              controller_sg_B.AMK1_SetPoints1.Data[4] | (uint8_T)((uint16_T)
              (tempValue & (uint16_T)0xFFU));
            controller_sg_B.AMK1_SetPoints1.Data[5] =
              controller_sg_B.AMK1_SetPoints1.Data[5] | (uint8_T)((uint16_T)
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
        uint32_T result = (uint32_T) (controller_sg_B.sf_mi_left.AMK_bDcOn_tx);

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
            controller_sg_B.AMK1_SetPoints1.Data[1] =
              controller_sg_B.AMK1_SetPoints1.Data[1] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
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
        uint32_T result = (uint32_T) (controller_sg_B.sf_mi_left.AMK_bEnable);

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
            controller_sg_B.AMK1_SetPoints1.Data[1] =
              controller_sg_B.AMK1_SetPoints1.Data[1] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 2));
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
        uint32_T result = (uint32_T) (controller_sg_B.sf_mi_left.AMK_bErrorReset);

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
            controller_sg_B.AMK1_SetPoints1.Data[1] =
              controller_sg_B.AMK1_SetPoints1.Data[1] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
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
        uint32_T result = (uint32_T)
          (controller_sg_B.sf_mi_left.AMK_bInverterOn_tx);

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
            controller_sg_B.AMK1_SetPoints1.Data[1] =
              controller_sg_B.AMK1_SetPoints1.Data[1] | (uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U));
          }
        }
      }
    }
  }

  /* S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 2' */

  /* Level2 S-Function Block: '<Root>/CAN Write 2' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  /* Outputs for Atomic SubSystem: '<Root>/Function-Call Subsystem' */
  /* S-Function (scanunpack): '<S2>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S2>/CAN Unpack' */
    if ((3 == controller_sg_B.CANRead1_o2.Length) &&
        (controller_sg_B.CANRead1_o2.ID != INVALID_CAN_ID) ) {
      if ((1574 == controller_sg_B.CANRead1_o2.ID) && (0U ==
           controller_sg_B.CANRead1_o2.Extended) ) {
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
                    (controller_sg_B.CANRead1_o2.Data[1]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.CANUnpack_o1_a = result;
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
                    (controller_sg_B.CANRead1_o2.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.CANUnpack_o2_i = result;
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
                    (controller_sg_B.CANRead1_o2.Data[2]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              controller_sg_B.CANUnpack_o3_j = result;
            }
          }
        }
      }
    }
  }

  /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */

  /* Logic: '<S5>/NOT' */
  controller_sg_B.NOT_h = !(controller_sg_B.CANUnpack_o3_j != 0.0);

  /* Logic: '<S5>/NOT1' */
  controller_sg_B.NOT1_h = !(controller_sg_B.CANUnpack_o2_i != 0.0);

  /* Logic: '<S5>/NOT2' */
  controller_sg_B.NOT2 = !(controller_sg_B.CANUnpack_o1_a != 0.0);

  /* Chart: '<S5>/battery_monitor' */
  if (controller_sg_DW.temporalCounter_i1_m < 8191U) {
    controller_sg_DW.temporalCounter_i1_m = static_cast<uint16_T>
      (controller_sg_DW.temporalCounter_i1_m + 1U);
  }

  controller_sg_DW.sfEvent_c2 = controller_sg_CALL_EVENT_c;
  if (controller_sg_DW.is_active_c4_battery_monitor_li == 0U) {
    controller_sg_DW.is_active_c4_battery_monitor_li = 1U;
    controller_sg_DW.is_c4_battery_monitor_lib = controller_sg_IN_InitialState;
    controller_sg_B.GOV_e_bmSts = BM_INIT;
  } else {
    switch (controller_sg_DW.is_c4_battery_monitor_lib) {
     case controller_sg_IN_InitialState:
      controller_sg_B.GOV_e_bmSts = BM_INIT;
      out = ((!controller_sg_B.NOT_h) && (!controller_sg_B.NOT2) &&
             (!controller_sg_B.NOT1_h) && (controller_sg_B.GOV_e_bmCmd ==
              HV_STARTUP) && (controller_sg_B.CANUnpack_o5 == 1.0));
      if (out) {
        controller_sg_DW.is_c4_battery_monitor_lib =
          controller_IN_StartupSuperstate;
        controller_sg_DW.is_StartupSuperstate_a = controller_sg_IN_StartupState1;
        controller_sg_B.GOV_e_bmSts = BM_IDLE;
      }
      break;

     case controller_sg_IN_InterruptState:
      controller_sg_B.GOV_e_bmSts = HVIL_INTERRUPT;
      out = ((controller_sg_DW.temporalCounter_i1_m >= 5000U) &&
             (controller_sg_B.CANUnpack_o5 == 1.0));
      if (out) {
        controller_sg_DW.is_c4_battery_monitor_lib =
          controller_sg_IN_InitialState;
        controller_sg_B.GOV_e_bmSts = BM_INIT;
      }
      break;

     case controller_sg_IN_LowSoC:
      controller_sg_B.GOV_e_bmSts = BM_LOW_SOC;
      break;

     default:
      /* case IN_StartupSuperstate: */
      if (controller_sg_B.CANUnpack_o5 == 0.0) {
        controller_sg_DW.is_StartupSuperstate_a =
          controller_IN_NO_ACTIVE_CHILD_i;
        controller_sg_DW.is_c4_battery_monitor_lib =
          controller_sg_IN_InterruptState;
        controller_sg_DW.temporalCounter_i1_m = 0U;
        controller_sg_B.GOV_e_bmSts = HVIL_INTERRUPT;
      } else if (controller_sg_B.Constant < 30.0) {
        controller_sg_DW.is_StartupSuperstate_a =
          controller_IN_NO_ACTIVE_CHILD_i;
        controller_sg_DW.is_c4_battery_monitor_lib = controller_sg_IN_LowSoC;
        controller_sg_B.GOV_e_bmSts = BM_LOW_SOC;
      } else {
        switch (controller_sg_DW.is_StartupSuperstate_a) {
         case con_IN_InitializePrechargeState:
          controller_sg_B.GOV_e_bmSts = INIT_PRECHARGE;
          out = (controller_sg_B.NOT_h && controller_sg_B.NOT2 &&
                 controller_sg_B.NOT1_h);
          if (out) {
            controller_sg_DW.is_StartupSuperstate_a =
              controller_sg_IN_PrechargeState;
            controller_sg_B.GOV_e_bmSts = PRECHARGE;
          }
          break;

         case controller_sg_IN_PrechargeState:
          controller_sg_B.GOV_e_bmSts = PRECHARGE;
          out = ((!controller_sg_B.NOT_h) && controller_sg_B.NOT2 &&
                 controller_sg_B.NOT1_h);
          if (out) {
            controller_sg_DW.is_StartupSuperstate_a =
              controller_sg_IN_RunningState;
            controller_sg_B.GOV_e_bmSts = BM_RUNNING;
          }
          break;

         case controller_sg_IN_RunningState:
          controller_sg_B.GOV_e_bmSts = BM_RUNNING;
          out = ((!controller_sg_B.NOT_h) && controller_sg_B.NOT2 &&
                 controller_sg_B.NOT1_h);
          if (out) {
            controller_sg_DW.is_StartupSuperstate_a =
              controller_sg_IN_RunningState;
            controller_sg_B.GOV_e_bmSts = BM_RUNNING;
          }
          break;

         case controller_sg_IN_StartupState:
          controller_sg_B.GOV_e_bmSts = BM_STARTUP;
          out = (controller_sg_B.NOT_h && controller_sg_B.NOT2 &&
                 (!controller_sg_B.NOT1_h));
          if (out) {
            controller_sg_DW.is_StartupSuperstate_a =
              con_IN_InitializePrechargeState;
            controller_sg_B.GOV_e_bmSts = INIT_PRECHARGE;
          }
          break;

         default:
          /* case IN_StartupState1: */
          controller_sg_B.GOV_e_bmSts = BM_IDLE;
          out = ((!controller_sg_B.NOT_h) && controller_sg_B.NOT2 &&
                 (!controller_sg_B.NOT1_h));
          if (out) {
            controller_sg_DW.is_StartupSuperstate_a =
              controller_sg_IN_StartupState;
            controller_sg_B.GOV_e_bmSts = BM_STARTUP;
          }
          break;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S5>/battery_monitor' */

  /* Chart: '<S5>/bm_control' */
  if (controller_sg_DW.temporalCounter_i1_i < 8191U) {
    controller_sg_DW.temporalCounter_i1_i = static_cast<uint16_T>
      (controller_sg_DW.temporalCounter_i1_i + 1U);
  }

  controller_sg_DW.sfEvent_o = controller_sg_CALL_EVENT_c;
  if (controller_sg_DW.is_active_c5_battery_monitor_li == 0U) {
    controller_sg_DW.is_active_c5_battery_monitor_li = 1U;
    controller_sg_DW.is_c5_battery_monitor_lib = controller_sg_IN_StartupCMD;
    controller_sg_B.BM_b_prechargeContactorCMD = 0.0;
    controller_sg_B.BM_b_HVnegContactorCMD = 0.0;
    controller_sg_B.BM_b_HVposContactorCMD = 0.0;
  } else if (controller_sg_DW.is_c5_battery_monitor_lib ==
             controller_sg_IN_StartupCMD) {
    if (controller_sg_B.GOV_e_bmSts == BM_IDLE) {
      controller_sg_DW.is_c5_battery_monitor_lib =
        controll_IN_StartupSuperstate_m;
      controller_sg_DW.is_StartupSuperstate = controller_sg_IN_Close_HVneg1;
      controller_sg_DW.temporalCounter_i1_i = 0U;
      controller_sg_B.BM_b_prechargeContactorCMD = 0.0;
      controller_sg_B.BM_b_HVnegContactorCMD = 1.0;
      controller_sg_B.BM_b_HVposContactorCMD = 0.0;
    }
  } else {
    /* case IN_StartupSuperstate: */
    out = ((controller_sg_B.GOV_e_bmSts == HVIL_INTERRUPT) ||
           (controller_sg_B.GOV_e_bmSts == BM_LOW_SOC));
    if (out) {
      controller_sg_DW.is_StartupSuperstate = controller_IN_NO_ACTIVE_CHILD_i;
      controller_sg_DW.is_c5_battery_monitor_lib = controller_sg_IN_StartupCMD;
      controller_sg_B.BM_b_prechargeContactorCMD = 0.0;
      controller_sg_B.BM_b_HVnegContactorCMD = 0.0;
      controller_sg_B.BM_b_HVposContactorCMD = 0.0;
    } else {
      switch (controller_sg_DW.is_StartupSuperstate) {
       case controller_sg_IN_Close_HVneg1:
        out = ((controller_sg_DW.temporalCounter_i1_i >= 100U) &&
               (controller_sg_B.GOV_e_bmSts == BM_STARTUP));
        if (out) {
          controller_sg_DW.is_StartupSuperstate =
            controller_s_IN_Close_precharge;
          controller_sg_DW.temporalCounter_i1_i = 0U;
          controller_sg_B.BM_b_prechargeContactorCMD = 1.0;
          controller_sg_B.BM_b_HVnegContactorCMD = 1.0;
          controller_sg_B.BM_b_HVposContactorCMD = 0.0;
        }
        break;

       case controller_sg_IN_Close_HVpos:
        out = ((controller_sg_DW.temporalCounter_i1_i >= 100U) &&
               (controller_sg_B.GOV_e_bmSts == PRECHARGE));
        if (out) {
          controller_sg_DW.is_StartupSuperstate =
            controller_sg_IN_Open_precharge;
          controller_sg_B.BM_b_prechargeContactorCMD = 0.0;
          controller_sg_B.BM_b_HVnegContactorCMD = 1.0;
          controller_sg_B.BM_b_HVposContactorCMD = 1.0;
        }
        break;

       case controller_s_IN_Close_precharge:
        out = ((controller_sg_DW.temporalCounter_i1_i >= 6500U) &&
               (controller_sg_B.GOV_e_bmSts == INIT_PRECHARGE));
        if (out) {
          controller_sg_DW.is_StartupSuperstate = controller_sg_IN_Close_HVpos;
          controller_sg_DW.temporalCounter_i1_i = 0U;
          controller_sg_B.BM_b_prechargeContactorCMD = 1.0;
          controller_sg_B.BM_b_HVnegContactorCMD = 1.0;
          controller_sg_B.BM_b_HVposContactorCMD = 1.0;
        }
        break;

       default:
        /* case IN_Open_precharge: */
        if (controller_sg_B.GOV_e_bmSts == BM_RUNNING) {
          controller_sg_DW.is_StartupSuperstate =
            controller_sg_IN_Open_precharge;
          controller_sg_B.BM_b_prechargeContactorCMD = 0.0;
          controller_sg_B.BM_b_HVnegContactorCMD = 1.0;
          controller_sg_B.BM_b_HVposContactorCMD = 1.0;
        } else {
          controller_sg_B.BM_b_prechargeContactorCMD = 0.0;
          controller_sg_B.BM_b_HVnegContactorCMD = 1.0;
          controller_sg_B.BM_b_HVposContactorCMD = 1.0;
        }
        break;
      }
    }
  }

  /* End of Chart: '<S5>/bm_control' */

  /* S-Function (scanpack): '<Root>/CAN Pack1' */
  /* S-Function (scanpack): '<Root>/CAN Pack1' */
  controller_sg_B.CANPack1.ID = 1570U;
  controller_sg_B.CANPack1.Length = 3U;
  controller_sg_B.CANPack1.Extended = 0U;
  controller_sg_B.CANPack1.Remote = 0;
  controller_sg_B.CANPack1.Data[0] = 0;
  controller_sg_B.CANPack1.Data[1] = 0;
  controller_sg_B.CANPack1.Data[2] = 0;
  controller_sg_B.CANPack1.Data[3] = 0;
  controller_sg_B.CANPack1.Data[4] = 0;
  controller_sg_B.CANPack1.Data[5] = 0;
  controller_sg_B.CANPack1.Data[6] = 0;
  controller_sg_B.CANPack1.Data[7] = 0;

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
        real64_T result = controller_sg_B.BM_b_HVnegContactorCMD;

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
            controller_sg_B.CANPack1.Data[2] = controller_sg_B.CANPack1.Data[2] |
              (uint8_T)(packedValue);
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
        real64_T result = controller_sg_B.BM_b_HVposContactorCMD;

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
            controller_sg_B.CANPack1.Data[0] = controller_sg_B.CANPack1.Data[0] |
              (uint8_T)(packedValue);
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
        real64_T result = controller_sg_B.BM_b_prechargeContactorCMD;

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
            controller_sg_B.CANPack1.Data[1] = controller_sg_B.CANPack1.Data[1] |
              (uint8_T)(packedValue);
          }
        }
      }
    }
  }

  /* S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 3' */

  /* Level2 S-Function Block: '<Root>/CAN Write 3' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[6];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<Root>/Cast To Single3' */
  controller_sg_B.CastToSingle3 = static_cast<real32_T>
    (controller_sg_B.GOV_e_bmSts);

  /* DataTypeConversion: '<Root>/Cast To Single2' */
  controller_sg_B.CastToSingle2 = static_cast<real32_T>
    (controller_sg_B.GOV_e_diSts);

  /* DataTypeConversion: '<Root>/Cast To Single' */
  controller_sg_B.CastToSingle = static_cast<real32_T>
    (controller_sg_B.GOV_e_govSts);

  /* RelationalOperator: '<S8>/motorErrorActive' incorporates:
   *  Constant: '<S8>/Constant'
   */
  controller_sg_B.motorErrorActive = (controller_sg_B.sf_mi_right.MI_motorStatus
    == MI_STS_ERROR);

  /* RelationalOperator: '<S8>/motorErrorActive1' incorporates:
   *  Constant: '<S8>/Constant'
   */
  controller_sg_B.motorErrorActive1 = (MI_STS_ERROR ==
    controller_sg_B.sf_mi_left.MI_motorStatus);

  /* Logic: '<S8>/OR' */
  controller_sg_B.OR_f = (controller_sg_B.motorErrorActive ||
    controller_sg_B.motorErrorActive1);

  /* RelationalOperator: '<S8>/GreaterThan' */
  controller_sg_B.GreaterThan_j = (controller_sg_B.sf_mi_left.MI_motorStatus ==
    controller_sg_B.sf_mi_right.MI_motorStatus);

  /* Delay: '<S8>/Delay' */
  controller_sg_B.Delay = controller_sg_DW.Delay_DSTATE;

  /* Switch: '<S8>/overallMotorState' */
  if (controller_sg_B.GreaterThan_j) {
    /* Switch: '<S8>/overallMotorState' */
    controller_sg_B.overallMotorState =
      controller_sg_B.sf_mi_left.MI_motorStatus;
  } else {
    /* Switch: '<S8>/overallMotorState' */
    controller_sg_B.overallMotorState = controller_sg_B.Delay;
  }

  /* End of Switch: '<S8>/overallMotorState' */

  /* Switch: '<S8>/Switch' */
  if (controller_sg_B.OR_f) {
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S8>/Constant1'
     */
    controller_sg_B.Switch_e = MI_STS_ERROR;
  } else {
    /* Switch: '<S8>/Switch' */
    controller_sg_B.Switch_e = controller_sg_B.overallMotorState;
  }

  /* End of Switch: '<S8>/Switch' */

  /* DataTypeConversion: '<Root>/Cast To Single1' */
  controller_sg_B.CastToSingle1_m = static_cast<real32_T>
    (controller_sg_B.Switch_e);

  /* S-Function (scanpack): '<Root>/CAN Pack2' */
  /* S-Function (scanpack): '<Root>/CAN Pack2' */
  controller_sg_B.CANPack2.ID = 255U;
  controller_sg_B.CANPack2.Length = 4U;
  controller_sg_B.CANPack2.Extended = 0U;
  controller_sg_B.CANPack2.Remote = 0;
  controller_sg_B.CANPack2.Data[0] = 0;
  controller_sg_B.CANPack2.Data[1] = 0;
  controller_sg_B.CANPack2.Data[2] = 0;
  controller_sg_B.CANPack2.Data[3] = 0;
  controller_sg_B.CANPack2.Data[4] = 0;
  controller_sg_B.CANPack2.Data[5] = 0;
  controller_sg_B.CANPack2.Data[6] = 0;
  controller_sg_B.CANPack2.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 24
     *  length                  = 4
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = controller_sg_B.CastToSingle3;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real32_T)(15)) {
          packedValue = (uint8_T) 15;
        } else if (outValue < (real32_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            controller_sg_B.CANPack2.Data[3] = controller_sg_B.CANPack2.Data[3] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0xFU));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 8
     *  length                  = 4
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = controller_sg_B.CastToSingle2;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real32_T)(15)) {
          packedValue = (uint8_T) 15;
        } else if (outValue < (real32_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            controller_sg_B.CANPack2.Data[1] = controller_sg_B.CANPack2.Data[1] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0xFU));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 0
     *  length                  = 4
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = controller_sg_B.CastToSingle;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real32_T)(15)) {
          packedValue = (uint8_T) 15;
        } else if (outValue < (real32_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            controller_sg_B.CANPack2.Data[0] = controller_sg_B.CANPack2.Data[0] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0xFU));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 16
     *  length                  = 3
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = controller_sg_B.CastToSingle1_m;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real32_T)(7)) {
          packedValue = (uint8_T) 7;
        } else if (outValue < (real32_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            controller_sg_B.CANPack2.Data[2] = controller_sg_B.CANPack2.Data[2] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x7U));
          }
        }
      }
    }
  }

  /* S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 4' */

  /* Level2 S-Function Block: '<Root>/CAN Write 4' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[7];
    sfcnOutputs(rts,0);
  }

  /* Logic: '<S8>/AND' */
  controller_sg_B.AND = ((controller_sg_B.sf_mi_left.MI_InverterEn != 0.0) &&
    (controller_sg_B.sf_mi_right.MI_InverterEn != 0.0));

  /* S-Function (scanpack): '<Root>/CAN Pack3' */
  /* S-Function (scanpack): '<Root>/CAN Pack3' */
  controller_sg_B.CANPack3.ID = 1560U;
  controller_sg_B.CANPack3.Length = 1U;
  controller_sg_B.CANPack3.Extended = 0U;
  controller_sg_B.CANPack3.Remote = 0;
  controller_sg_B.CANPack3.Data[0] = 0;
  controller_sg_B.CANPack3.Data[1] = 0;
  controller_sg_B.CANPack3.Data[2] = 0;
  controller_sg_B.CANPack3.Data[3] = 0;
  controller_sg_B.CANPack3.Data[4] = 0;
  controller_sg_B.CANPack3.Data[5] = 0;
  controller_sg_B.CANPack3.Data[6] = 0;
  controller_sg_B.CANPack3.Data[7] = 0;

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
        uint32_T result = (uint32_T) (controller_sg_B.AND);

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
            controller_sg_B.CANPack3.Data[0] = controller_sg_B.CANPack3.Data[0] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U));
          }
        }
      }
    }
  }

  /* S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 5' */

  /* Level2 S-Function Block: '<Root>/CAN Write 5' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[8];
    sfcnOutputs(rts,0);
  }

  /* Update for Delay: '<S7>/Delay' */
  controller_sg_DW.Delay_DSTATE_f = controller_sg_B.GOV_e_bmSts;

  /* Update for Delay: '<S7>/Delay1' */
  controller_sg_DW.Delay1_DSTATE = controller_sg_B.Switch_e;

  /* Update for Delay: '<S7>/Delay2' */
  controller_sg_DW.Delay2_DSTATE = controller_sg_B.GOV_e_diSts;

  /* Update for S-Function (sfix_udelay): '<S30>/Tapped Delay' */
  for (int32_T i = 0; i < 9; i++) {
    controller_sg_DW.TappedDelay_X[i] = controller_sg_DW.TappedDelay_X[i + 1];
  }

  controller_sg_DW.TappedDelay_X[9] = controller_sg_B.pedaltotorque;

  /* End of Update for S-Function (sfix_udelay): '<S30>/Tapped Delay' */

  /* Update for Delay: '<S8>/Delay' */
  controller_sg_DW.Delay_DSTATE = controller_sg_B.overallMotorState;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++controller_sg_M->Timing.clockTick0)) {
    ++controller_sg_M->Timing.clockTickH0;
  }

  controller_sg_M->Timing.t[0] = controller_sg_M->Timing.clockTick0 *
    controller_sg_M->Timing.stepSize0 + controller_sg_M->Timing.clockTickH0 *
    controller_sg_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void controller_sg_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&controller_sg_M->solverInfo,"FixedStepDiscrete");
  controller_sg_M->solverInfoPtr = (&controller_sg_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = controller_sg_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;

    /* polyspace +2 MISRA2012:D4.1 [Justified:Low] "controller_sg_M points to
       static memory which is guaranteed to be non-NULL" */
    controller_sg_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    controller_sg_M->Timing.sampleTimes =
      (&controller_sg_M->Timing.sampleTimesArray[0]);
    controller_sg_M->Timing.offsetTimes =
      (&controller_sg_M->Timing.offsetTimesArray[0]);

    /* task periods */
    controller_sg_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    controller_sg_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(controller_sg_M, &controller_sg_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = controller_sg_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    controller_sg_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(controller_sg_M, -1);
  controller_sg_M->Timing.stepSize0 = 0.001;
  controller_sg_M->solverInfoPtr = (&controller_sg_M->solverInfo);
  controller_sg_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&controller_sg_M->solverInfo, 0.001);
  rtsiSetSolverMode(&controller_sg_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&controller_sg_B)), 0,
                     sizeof(B_controller_sg_T));

  {
    controller_sg_B.CANRead_o2 = CAN_DATATYPE_GROUND;
    controller_sg_B.CANRead1_o2 = CAN_DATATYPE_GROUND;
    controller_sg_B.AMK0_SetPoints1 = CAN_DATATYPE_GROUND;
    controller_sg_B.CANPack = CAN_DATATYPE_GROUND;
    controller_sg_B.AMK1_SetPoints1 = CAN_DATATYPE_GROUND;
    controller_sg_B.CANPack1 = CAN_DATATYPE_GROUND;
    controller_sg_B.CANPack2 = CAN_DATATYPE_GROUND;
    controller_sg_B.CANPack3 = CAN_DATATYPE_GROUND;
    controller_sg_B.Delay1 = UNKNOWN;
    controller_sg_B.Delay = UNKNOWN;
    controller_sg_B.overallMotorState = UNKNOWN;
    controller_sg_B.Switch_e = UNKNOWN;
    controller_sg_B.GOV_e_miCmd = CMD_INIT;
    controller_sg_B.GOV_e_govSts = GOV_INIT;
    controller_sg_B.Delay2 = DI_UNKNOWN;
    controller_sg_B.GOV_e_diSts = DI_UNKNOWN;
    controller_sg_B.GOV_e_diCmd = DI_CMD_INIT;
    controller_sg_B.Delay_e = BM_UNKNOWN;
    controller_sg_B.GOV_e_bmSts = BM_UNKNOWN;
    controller_sg_B.GOV_e_bmCmd = BM_CMD_INIT;
    controller_sg_B.sf_mi_right.MI_motorStatus = UNKNOWN;
    controller_sg_B.sf_mi_left.MI_motorStatus = UNKNOWN;
    controller_sg_B.AMK_bReserve_R = 0.0;
    controller_sg_B.AMK_bReserve_L = 0.0;
    controller_sg_B.Constant = 100.0;
    controller_sg_B.CastToSingle_g = 10000.0F;
    controller_sg_B.CastToSingle2_d = 0.0F;
    controller_sg_B.CastToSingle3_j = 10000.0F;
    controller_sg_B.CastToSingle5 = 0.0F;
    controller_sg_B.Constant_g = STS_INIT;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&controller_sg_DW), 0,
                     sizeof(DW_controller_sg_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &controller_sg_M->NonInlinedSFcns.sfcnInfo;
    controller_sg_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(controller_sg_M)));
    controller_sg_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo, &controller_sg_M->Sizes.numSampTimes);
    controller_sg_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (controller_sg_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,controller_sg_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(controller_sg_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(controller_sg_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(controller_sg_M));
    rtssSetStepSizePtr(sfcnInfo, &controller_sg_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(controller_sg_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &controller_sg_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &controller_sg_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &controller_sg_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &controller_sg_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &controller_sg_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &controller_sg_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &controller_sg_M->solverInfoPtr);
  }

  controller_sg_M->Sizes.numSFcns = (9);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&controller_sg_M->NonInlinedSFcns.childSFunctions[0]), 0,
                       9*sizeof(SimStruct));
    controller_sg_M->childSfunctions =
      (&controller_sg_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 9; i++) {
        controller_sg_M->childSfunctions[i] =
          (&controller_sg_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: controller_sg/<Root>/CAN and LIN Setup  (sg_CANLIN_OfA2_setup_s) */
    {
      SimStruct *rts = controller_sg_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = controller_sg_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = controller_sg_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = controller_sg_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controller_sg_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controller_sg_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controller_sg_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controller_sg_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controller_sg_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controller_sg_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controller_sg_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &controller_sg_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "CAN and LIN Setup ");
      ssSetPath(rts, "controller_sg/CAN and LIN Setup ");
      ssSetRTModel(rts,controller_sg_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controller_sg_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       controller_sg_ConstP.CANandLINSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       controller_sg_ConstP.CANandLINSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       controller_sg_ConstP.CANandLINSetup_P2_Size);
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

    /* Level2 S-Function Block: controller_sg/<Root>/CAN Read  (sg_CAN_OfA2_read_s) */
    {
      SimStruct *rts = controller_sg_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = controller_sg_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = controller_sg_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = controller_sg_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controller_sg_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controller_sg_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controller_sg_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controller_sg_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controller_sg_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controller_sg_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controller_sg_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &controller_sg_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &controller_sg_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidthAsInt(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &controller_sg_B.CANRead_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read ");
      ssSetPath(rts, "controller_sg/CAN Read ");
      ssSetRTModel(rts,controller_sg_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controller_sg_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)controller_sg_ConstP.CANRead_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &controller_sg_DW.CANRead_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &controller_sg_DW.CANRead_PWORK);
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

    /* Level2 S-Function Block: controller_sg/<Root>/CAN Read 1 (sg_CAN_OfA2_read_s) */
    {
      SimStruct *rts = controller_sg_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = controller_sg_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = controller_sg_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = controller_sg_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controller_sg_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controller_sg_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controller_sg_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controller_sg_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controller_sg_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controller_sg_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controller_sg_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &controller_sg_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &controller_sg_B.CANRead1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidthAsInt(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &controller_sg_B.CANRead1_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read 1");
      ssSetPath(rts, "controller_sg/CAN Read 1");
      ssSetRTModel(rts,controller_sg_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controller_sg_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)controller_sg_ConstP.CANRead1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &controller_sg_DW.CANRead1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &controller_sg_DW.CANRead1_PWORK);
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

    /* Level2 S-Function Block: controller_sg/<Root>/CAN Write  (sg_CAN_OfA2_write_s) */
    {
      SimStruct *rts = controller_sg_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = controller_sg_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = controller_sg_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = controller_sg_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controller_sg_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controller_sg_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controller_sg_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controller_sg_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controller_sg_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controller_sg_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controller_sg_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &controller_sg_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &controller_sg_B.AMK0_SetPoints1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write ");
      ssSetPath(rts, "controller_sg/CAN Write ");
      ssSetRTModel(rts,controller_sg_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controller_sg_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)controller_sg_ConstP.CANWrite_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &controller_sg_DW.CANWrite_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &controller_sg_DW.CANWrite_PWORK);
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

    /* Level2 S-Function Block: controller_sg/<Root>/CAN Write 1 (sg_CAN_OfA2_write_s) */
    {
      SimStruct *rts = controller_sg_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = controller_sg_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = controller_sg_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = controller_sg_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controller_sg_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controller_sg_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controller_sg_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controller_sg_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controller_sg_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controller_sg_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controller_sg_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &controller_sg_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &controller_sg_B.CANPack);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write 1");
      ssSetPath(rts, "controller_sg/CAN Write 1");
      ssSetRTModel(rts,controller_sg_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controller_sg_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)controller_sg_ConstP.CANWrite1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &controller_sg_DW.CANWrite1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &controller_sg_DW.CANWrite1_PWORK);
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

    /* Level2 S-Function Block: controller_sg/<Root>/CAN Write 2 (sg_CAN_OfA2_write_s) */
    {
      SimStruct *rts = controller_sg_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = controller_sg_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = controller_sg_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = controller_sg_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controller_sg_M->NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controller_sg_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controller_sg_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controller_sg_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controller_sg_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controller_sg_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controller_sg_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &controller_sg_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn5.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &controller_sg_B.AMK1_SetPoints1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write 2");
      ssSetPath(rts, "controller_sg/CAN Write 2");
      ssSetRTModel(rts,controller_sg_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controller_sg_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)controller_sg_ConstP.CANWrite_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &controller_sg_DW.CANWrite2_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &controller_sg_DW.CANWrite2_PWORK);
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

    /* Level2 S-Function Block: controller_sg/<Root>/CAN Write 3 (sg_CAN_OfA2_write_s) */
    {
      SimStruct *rts = controller_sg_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod = controller_sg_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset = controller_sg_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap = controller_sg_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controller_sg_M->NonInlinedSFcns.blkInfo2[6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controller_sg_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controller_sg_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controller_sg_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controller_sg_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controller_sg_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controller_sg_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &controller_sg_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn6.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &controller_sg_B.CANPack1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write 3");
      ssSetPath(rts, "controller_sg/CAN Write 3");
      ssSetRTModel(rts,controller_sg_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controller_sg_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)controller_sg_ConstP.CANWrite1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &controller_sg_DW.CANWrite3_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &controller_sg_DW.CANWrite3_PWORK);
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

    /* Level2 S-Function Block: controller_sg/<Root>/CAN Write 4 (sg_CAN_OfA2_write_s) */
    {
      SimStruct *rts = controller_sg_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod = controller_sg_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset = controller_sg_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap = controller_sg_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controller_sg_M->NonInlinedSFcns.blkInfo2[7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controller_sg_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controller_sg_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controller_sg_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controller_sg_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controller_sg_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controller_sg_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &controller_sg_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn7.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &controller_sg_B.CANPack2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write 4");
      ssSetPath(rts, "controller_sg/CAN Write 4");
      ssSetRTModel(rts,controller_sg_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controller_sg_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)controller_sg_ConstP.CANWrite1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &controller_sg_DW.CANWrite4_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &controller_sg_DW.CANWrite4_PWORK);
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

    /* Level2 S-Function Block: controller_sg/<Root>/CAN Write 5 (sg_CAN_OfA2_write_s) */
    {
      SimStruct *rts = controller_sg_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod = controller_sg_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset = controller_sg_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap = controller_sg_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &controller_sg_M->NonInlinedSFcns.blkInfo2[8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &controller_sg_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, controller_sg_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &controller_sg_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &controller_sg_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &controller_sg_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &controller_sg_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &controller_sg_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        ssSetPortInfoForInputs(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn8.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &controller_sg_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &controller_sg_B.CANPack3);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write 5");
      ssSetPath(rts, "controller_sg/CAN Write 5");
      ssSetRTModel(rts,controller_sg_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &controller_sg_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)controller_sg_ConstP.CANWrite1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &controller_sg_DW.CANWrite5_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &controller_sg_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &controller_sg_DW.CANWrite5_PWORK);
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

  /* Start for Constant: '<Root>/Constant' */
  controller_sg_B.Constant_g = STS_INIT;

  /* Start for S-Function (sg_CANLIN_OfA2_setup_s): '<Root>/CAN and LIN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN and LIN Setup ' (sg_CANLIN_OfA2_setup_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read ' */
  /* Level2 S-Function Block: '<Root>/CAN Read ' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read 1' */
  /* Level2 S-Function Block: '<Root>/CAN Read 1' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write ' */
  /* Level2 S-Function Block: '<Root>/CAN Write ' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 1' */
  /* Level2 S-Function Block: '<Root>/CAN Write 1' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 2' */
  /* Level2 S-Function Block: '<Root>/CAN Write 2' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 3' */
  /* Level2 S-Function Block: '<Root>/CAN Write 3' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 4' */
  /* Level2 S-Function Block: '<Root>/CAN Write 4' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 5' */
  /* Level2 S-Function Block: '<Root>/CAN Write 5' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for Delay: '<S7>/Delay' */
  controller_sg_DW.Delay_DSTATE_f = BM_UNKNOWN;

  /* InitializeConditions for Delay: '<S7>/Delay1' */
  controller_sg_DW.Delay1_DSTATE = UNKNOWN;

  /* InitializeConditions for Delay: '<S7>/Delay2' */
  controller_sg_DW.Delay2_DSTATE = DI_UNKNOWN;

  /* InitializeConditions for S-Function (sfix_udelay): '<S30>/Tapped Delay' */
  for (int32_T i = 0; i < 10; i++) {
    controller_sg_DW.TappedDelay_X[i] = 0.0;
  }

  /* End of InitializeConditions for S-Function (sfix_udelay): '<S30>/Tapped Delay' */

  /* InitializeConditions for Delay: '<S8>/Delay' */
  controller_sg_DW.Delay_DSTATE = OFF;

  /* SystemInitialize for Chart: '<S7>/governer_stateflow' */
  controller_sg_DW.sfEvent_m = controller_sg_CALL_EVENT_c;
  controller_sg_DW.temporalCounter_i1 = 0U;
  controller_sg_DW.is_RUNNING_ERROR = controller_IN_NO_ACTIVE_CHILD_i;
  controller_sg_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_i;
  controller_sg_DW.is_STARTUP_ERROR = controller_IN_NO_ACTIVE_CHILD_i;
  controller_sg_DW.is_active_c8_governor_lib = 0U;
  controller_sg_DW.is_c8_governor_lib = controller_IN_NO_ACTIVE_CHILD_i;
  controller_sg_DW.motorStartCount = 0U;
  controller_sg_B.GOV_e_bmCmd = BM_CMD_INIT;
  controller_sg_B.GOV_e_vdCmd = 0U;
  controller_sg_B.GOV_e_miCmd = CMD_INIT;
  controller_sg_B.GOV_e_diCmd = DI_CMD_INIT;
  controller_sg_B.GOV_e_govSts = GOV_INIT;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Function-Call Subsystem1' */
  /* Start for S-Function (scanunpack): '<S3>/CAN Unpack' */

  /*-----------S-Function Block: <S3>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S3>/CAN Unpack1' */

  /*-----------S-Function Block: <S3>/CAN Unpack1 -----------------*/

  /* Start for S-Function (scanunpack): '<S3>/CAN Unpack2' */

  /*-----------S-Function Block: <S3>/CAN Unpack2 -----------------*/

  /* Start for S-Function (scanunpack): '<S3>/CAN Unpack3' */

  /*-----------S-Function Block: <S3>/CAN Unpack3 -----------------*/

  /* End of SystemInitialize for SubSystem: '<Root>/Function-Call Subsystem1' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Function-Call Subsystem2' */
  /* Start for S-Function (scanunpack): '<S4>/CAN Unpack' */

  /*-----------S-Function Block: <S4>/CAN Unpack -----------------*/

  /* End of SystemInitialize for SubSystem: '<Root>/Function-Call Subsystem2' */

  /* SystemInitialize for Chart: '<S6>/driver_interface' */
  controller_sg_DW.sfEvent_c = controller_sg_CALL_EVENT_c;
  controller_sg_DW.is_DI_running = controller_IN_NO_ACTIVE_CHILD_i;
  controller_sg_DW.is_Ready_to_drive = controller_IN_NO_ACTIVE_CHILD_i;
  controller_sg_DW.temporalCounter_i1_c = 0U;
  controller_sg_DW.is_active_c2_driver_interface_l = 0U;
  controller_sg_DW.is_c2_driver_interface_lib = controller_IN_NO_ACTIVE_CHILD_i;
  controller_sg_B.GOV_e_diSts = DI_UNKNOWN;
  controller_sg_B.DI_b_driverSpeaker = false;
  controller_sg_B.b_ReadyToDrive = false;

  /* SystemInitialize for Chart: '<S9>/Chart' */
  controller_sg_DW.sfEvent = controller_sg_CALL_EVENT_c;
  controller_sg_DW.is_active_c3_controller_sg = 0U;
  controller_sg_DW.is_c3_controller_sg = controller_IN_NO_ACTIVE_CHILD_i;
  controller_sg_B.DI_p_motorTorqueRequest = 0.0;

  /* SystemInitialize for Chart: '<S8>/mi_right' */
  controller_sg_mi_left_Init(&controller_sg_B.sf_mi_right,
    &controller_sg_DW.sf_mi_right);

  /* SystemInitialize for Chart: '<S8>/mi_left' */
  controller_sg_mi_left_Init(&controller_sg_B.sf_mi_left,
    &controller_sg_DW.sf_mi_left);

  /* SystemInitialize for Atomic SubSystem: '<Root>/Function-Call Subsystem' */
  /* Start for S-Function (scanunpack): '<S2>/CAN Unpack' */

  /*-----------S-Function Block: <S2>/CAN Unpack -----------------*/

  /* End of SystemInitialize for SubSystem: '<Root>/Function-Call Subsystem' */

  /* SystemInitialize for Chart: '<S5>/battery_monitor' */
  controller_sg_DW.sfEvent_c2 = controller_sg_CALL_EVENT_c;
  controller_sg_DW.temporalCounter_i1_m = 0U;
  controller_sg_DW.is_StartupSuperstate_a = controller_IN_NO_ACTIVE_CHILD_i;
  controller_sg_DW.is_active_c4_battery_monitor_li = 0U;
  controller_sg_DW.is_c4_battery_monitor_lib = controller_IN_NO_ACTIVE_CHILD_i;
  controller_sg_B.GOV_e_bmSts = BM_UNKNOWN;

  /* SystemInitialize for Chart: '<S5>/bm_control' */
  controller_sg_DW.sfEvent_o = controller_sg_CALL_EVENT_c;
  controller_sg_DW.is_StartupSuperstate = controller_IN_NO_ACTIVE_CHILD_i;
  controller_sg_DW.temporalCounter_i1_i = 0U;
  controller_sg_DW.is_active_c5_battery_monitor_li = 0U;
  controller_sg_DW.is_c5_battery_monitor_lib = controller_IN_NO_ACTIVE_CHILD_i;
  controller_sg_B.BM_b_prechargeContactorCMD = 0.0;
  controller_sg_B.BM_b_HVposContactorCMD = 0.0;
  controller_sg_B.BM_b_HVnegContactorCMD = 0.0;

  /* ConstCode for Constant: '<Root>/Constant' */
  controller_sg_B.Constant_g = STS_INIT;

  /* ConstCode for Atomic SubSystem: '<Root>/Function-Call Subsystem' */
  /* ConstCode for Constant: '<S2>/Constant' */
  controller_sg_B.Constant = 100.0;

  /* End of ConstCode for SubSystem: '<Root>/Function-Call Subsystem' */

  /* ConstCode for Atomic SubSystem: '<Root>/Function-Call Subsystem1' */
  /* ConstCode for Constant: '<S3>/Constant' */
  controller_sg_B.AMK_bReserve_R = 0.0;

  /* ConstCode for Constant: '<S3>/Constant1' */
  controller_sg_B.AMK_bReserve_L = 0.0;

  /* End of ConstCode for SubSystem: '<Root>/Function-Call Subsystem1' */

  /* ConstCode for DataTypeConversion: '<S8>/Cast To Single' incorporates:
   *  Constant: '<S9>/Constant1'
   */
  controller_sg_B.CastToSingle_g = static_cast<real32_T>(10000.0);

  /* ConstCode for DataTypeConversion: '<S8>/Cast To Single2' incorporates:
   *  Constant: '<S9>/Constant2'
   */
  controller_sg_B.CastToSingle2_d = static_cast<real32_T>(0.0);

  /* ConstCode for DataTypeConversion: '<S8>/Cast To Single3' incorporates:
   *  Constant: '<S9>/Constant'
   */
  controller_sg_B.CastToSingle3_j = static_cast<real32_T>(10000.0);

  /* ConstCode for DataTypeConversion: '<S8>/Cast To Single5' incorporates:
   *  Constant: '<S9>/Constant3'
   */
  controller_sg_B.CastToSingle5 = static_cast<real32_T>(0.0);
}

/* Model terminate function */
void controller_sg_terminate(void)
{
  /* Terminate for S-Function (sg_CANLIN_OfA2_setup_s): '<Root>/CAN and LIN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN and LIN Setup ' (sg_CANLIN_OfA2_setup_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read ' */
  /* Level2 S-Function Block: '<Root>/CAN Read ' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_CAN_OfA2_read_s): '<Root>/CAN Read 1' */
  /* Level2 S-Function Block: '<Root>/CAN Read 1' (sg_CAN_OfA2_read_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write ' */
  /* Level2 S-Function Block: '<Root>/CAN Write ' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 1' */
  /* Level2 S-Function Block: '<Root>/CAN Write 1' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 2' */
  /* Level2 S-Function Block: '<Root>/CAN Write 2' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 3' */
  /* Level2 S-Function Block: '<Root>/CAN Write 3' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 4' */
  /* Level2 S-Function Block: '<Root>/CAN Write 4' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_CAN_OfA2_write_s): '<Root>/CAN Write 5' */
  /* Level2 S-Function Block: '<Root>/CAN Write 5' (sg_CAN_OfA2_write_s) */
  {
    SimStruct *rts = controller_sg_M->childSfunctions[8];
    sfcnTerminate(rts);
  }
}
