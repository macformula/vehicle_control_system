/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: controller.c
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

#include "controller.h"
#include "controller_types.h"
#include "rtwtypes.h"
#include "controller_private.h"
#include <math.h>

/* Named constants for Chart: '<S4>/LEFT_MOTOR' */
#define contr_IN_enforceSetpointsZero_p ((uint8_T)1U)
#define contr_IN_motorOff_waitingForGov ((uint8_T)6U)
#define control_IN_enforceSetpointsZero ((uint8_T)2U)
#define controller_IN_AMK_errorDetected ((uint8_T)1U)
#define controller_IN_AMK_errorReset   ((uint8_T)2U)
#define controller_IN_AMK_running      ((uint8_T)3U)
#define controller_IN_AMK_shutdown     ((uint8_T)4U)
#define controller_IN_AMK_startup      ((uint8_T)5U)
#define controller_IN_NO_ACTIVE_CHILD  ((uint8_T)0U)
#define controller_IN_commandOff       ((uint8_T)1U)
#define controller_IN_commandOn        ((uint8_T)1U)
#define controller_IN_sendReset        ((uint8_T)2U)
#define controller_IN_toggleDCon       ((uint8_T)3U)
#define controller_IN_toggleEnable     ((uint8_T)3U)
#define controller_IN_toggleReset      ((uint8_T)4U)
#define controller_IN_waiting_sysReady ((uint8_T)4U)

/* Named constants for Chart: '<S1>/Chart' */
#define IN_ErrorInitializePrechargeStat ((uint8_T)3U)
#define co_IN_ErrorPrechargeClosedState ((uint8_T)4U)
#define con_IN_InitializePrechargeState ((uint8_T)9U)
#define controll_IN_ErrorAllClosedState ((uint8_T)1U)
#define controll_IN_ErrorPrechargeState ((uint8_T)5U)
#define controller_IN_ErrorHVPositive  ((uint8_T)2U)
#define controller_IN_ErrorRunningState ((uint8_T)6U)
#define controller_IN_ErrorStartupState ((uint8_T)7U)
#define controller_IN_InitialState     ((uint8_T)8U)
#define controller_IN_NO_ACTIVE_CHILD_c ((uint8_T)0U)
#define controller_IN_PrechargeState   ((uint8_T)10U)
#define controller_IN_RunningState     ((uint8_T)11U)
#define controller_IN_StartupState     ((uint8_T)12U)
#define controller_IN_StartupState1    ((uint8_T)13U)

/* Named constants for Chart: '<S2>/Chart' */
#define contr_IN_Driver_requested_start ((uint8_T)1U)
#define controlle_IN_Waiting_for_driver ((uint8_T)3U)
#define controller_IN_DI_error         ((uint8_T)1U)
#define controller_IN_DI_running       ((uint8_T)2U)
#define controller_IN_INIT             ((uint8_T)3U)
#define controller_IN_Ready_to_drive   ((uint8_T)2U)
#define controller_IN_SpeakerOff       ((uint8_T)1U)
#define controller_IN_SpeakerOn_       ((uint8_T)2U)
#define controller_IN_Vehicle_coasting ((uint8_T)4U)

/* Named constants for Chart: '<S3>/Chart' */
#define contro_IN_Command_motor_startup ((uint8_T)1U)
#define contro_IN_DriverInterface_Error ((uint8_T)1U)
#define controlle_IN_Initialize_outputs ((uint8_T)1U)
#define controller_IN_Err_reset        ((uint8_T)2U)
#define controller_IN_HV_run_error     ((uint8_T)1U)
#define controller_IN_HV_startup       ((uint8_T)2U)
#define controller_IN_HV_startup_error ((uint8_T)3U)
#define controller_IN_Motor_faulted    ((uint8_T)4U)
#define controller_IN_Motor_run_error  ((uint8_T)2U)
#define controller_IN_RUNNING          ((uint8_T)2U)
#define controller_IN_RUNNING_ERROR    ((uint8_T)3U)
#define controller_IN_STARTUP          ((uint8_T)4U)
#define controller_IN_STARTUP_ERROR    ((uint8_T)5U)
#define controller_IN_Send_ReadyToDrive ((uint8_T)3U)

/* Block signals (default storage) */
B_controller_T controller_B;

/* Block states (default storage) */
DW_controller_T controller_DW;

/* External inputs (root inport signals with default storage) */
ExtU_controller_T controller_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_controller_T controller_Y;

/* Real-time model */
static RT_MODEL_controller_T controller_M_;
RT_MODEL_controller_T *const controller_M = &controller_M_;
real32_T look1_iflf_binlxpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T yL_0d0;
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
 * System initialize for atomic system:
 *    '<S4>/LEFT_MOTOR'
 *    '<S4>/RIGHT_MOTOR'
 */
void controller_LEFT_MOTOR_Init(MI_STATUSES *rty_MI_motorStatus, uint8_T
  *rty_AMK_bInverterOn_tx, uint8_T *rty_AMK_bDcOn_tx, uint8_T *rty_AMK_bEnable,
  uint8_T *rty_AMK_bErrorReset, real32_T *rty_AMK_TargetVelocity, real32_T
  *rty_AMK_TorqueLimitPositiv, real32_T *rty_AMK_TorqueLimitNegativ)
{
  *rty_MI_motorStatus = UNKNOWN;
  *rty_AMK_bInverterOn_tx = 0U;
  *rty_AMK_bDcOn_tx = 0U;
  *rty_AMK_bEnable = 0U;
  *rty_AMK_bErrorReset = 0U;
  *rty_AMK_TargetVelocity = 0.0F;
  *rty_AMK_TorqueLimitPositiv = 0.0F;
  *rty_AMK_TorqueLimitNegativ = 0.0F;
}

/*
 * Output and update for atomic system:
 *    '<S4>/LEFT_MOTOR'
 *    '<S4>/RIGHT_MOTOR'
 */
void controller_LEFT_MOTOR(MI_CMD rtu_GOV_e_miCmd, boolean_T
  rtu_AMK_bSystemReady, boolean_T rtu_AMK_bError, boolean_T rtu_AMK_bQuitDcOn,
  boolean_T rtu_AMK_bDcOn_rx, boolean_T rtu_AMK_bQuitInverterOn, boolean_T
  rtu_AMK_bInverterOn_rx, real32_T rtu_VD_T_motorSpeedRequest, real32_T
  rtu_VD_T_motorTorqueLimitPositi, real32_T rtu_VD_T_motorTorqueLimitNegati,
  MI_STATUSES *rty_MI_motorStatus, uint8_T *rty_AMK_bInverterOn_tx, uint8_T
  *rty_AMK_bDcOn_tx, uint8_T *rty_AMK_bEnable, uint8_T *rty_AMK_bErrorReset,
  real32_T *rty_AMK_TargetVelocity, real32_T *rty_AMK_TorqueLimitPositiv,
  real32_T *rty_AMK_TorqueLimitNegativ, DW_LEFT_MOTOR_controller_T *localDW)
{
  if (localDW->temporalCounter_i1 < 3U) {
    localDW->temporalCounter_i1++;
  }

  /* Chart: '<S4>/LEFT_MOTOR' */
  if (localDW->is_active_c1_controller == 0U) {
    localDW->is_active_c1_controller = 1U;
    localDW->is_c1_controller = contr_IN_motorOff_waitingForGov;
    *rty_MI_motorStatus = OFF;
    *rty_AMK_bInverterOn_tx = 0U;
    *rty_AMK_bDcOn_tx = 0U;
    *rty_AMK_bEnable = 0U;
    *rty_AMK_bErrorReset = 0U;
    *rty_AMK_TargetVelocity = 0.0F;
    *rty_AMK_TorqueLimitPositiv = 0.0F;
    *rty_AMK_TorqueLimitNegativ = 0.0F;
  } else {
    switch (localDW->is_c1_controller) {
     case controller_IN_AMK_errorDetected:
      if (rtu_GOV_e_miCmd == ERR_RESET) {
        localDW->is_c1_controller = controller_IN_AMK_errorReset;
        localDW->is_AMK_errorReset = contr_IN_enforceSetpointsZero_p;
        *rty_AMK_TargetVelocity = 0.0F;
        *rty_AMK_TorqueLimitPositiv = 0.0F;
        *rty_AMK_TorqueLimitNegativ = 0.0F;
        *rty_AMK_bInverterOn_tx = 0U;
      }
      break;

     case controller_IN_AMK_errorReset:
      switch (localDW->is_AMK_errorReset) {
       case contr_IN_enforceSetpointsZero_p:
        *rty_AMK_bInverterOn_tx = 0U;
        if (!rtu_AMK_bInverterOn_rx) {
          localDW->is_AMK_errorReset = controller_IN_toggleEnable;
          localDW->temporalCounter_i1 = 0U;
          *rty_AMK_bEnable = 0U;
        }
        break;

       case controller_IN_sendReset:
        *rty_AMK_bErrorReset = 1U;
        if (localDW->temporalCounter_i1 >= 3U) {
          localDW->is_AMK_errorReset = controller_IN_toggleReset;
          *rty_AMK_bErrorReset = 0U;
        }
        break;

       case controller_IN_toggleEnable:
        *rty_AMK_bEnable = 0U;
        if (localDW->temporalCounter_i1 >= 3U) {
          localDW->is_AMK_errorReset = controller_IN_sendReset;
          localDW->temporalCounter_i1 = 0U;
          *rty_AMK_bErrorReset = 1U;
        }
        break;

       default:
        /* case IN_toggleReset: */
        *rty_AMK_bErrorReset = 0U;
        if (rtu_AMK_bSystemReady) {
          localDW->is_AMK_errorReset = controller_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_controller = contr_IN_motorOff_waitingForGov;
          *rty_MI_motorStatus = OFF;
          *rty_AMK_bInverterOn_tx = 0U;
          *rty_AMK_bDcOn_tx = 0U;
          *rty_AMK_bEnable = 0U;
          *rty_AMK_bErrorReset = 0U;
          *rty_AMK_TargetVelocity = 0.0F;
          *rty_AMK_TorqueLimitPositiv = 0.0F;
          *rty_AMK_TorqueLimitNegativ = 0.0F;
        }
        break;
      }
      break;

     case controller_IN_AMK_running:
      if (rtu_AMK_bError) {
        localDW->is_c1_controller = controller_IN_AMK_errorDetected;
        *rty_MI_motorStatus = MI_STS_ERROR;
      } else if (rtu_GOV_e_miCmd == CMD_SHUTDOWN) {
        localDW->is_c1_controller = controller_IN_AMK_shutdown;
        localDW->is_AMK_shutdown = control_IN_enforceSetpointsZero;
        *rty_MI_motorStatus = SHUTDOWN;
        *rty_AMK_TargetVelocity = 0.0F;
        *rty_AMK_TorqueLimitPositiv = 0.0F;
        *rty_AMK_TorqueLimitNegativ = 0.0F;
        *rty_AMK_bInverterOn_tx = 0U;
      } else {
        *rty_MI_motorStatus = RUNNING;
        *rty_AMK_TargetVelocity = rtu_VD_T_motorSpeedRequest;
        *rty_AMK_TorqueLimitPositiv = rtu_VD_T_motorTorqueLimitPositi;
        *rty_AMK_TorqueLimitNegativ = rtu_VD_T_motorTorqueLimitNegati;
      }
      break;

     case controller_IN_AMK_shutdown:
      switch (localDW->is_AMK_shutdown) {
       case controller_IN_commandOff:
        *rty_AMK_bEnable = 0U;
        if (!rtu_AMK_bQuitInverterOn) {
          localDW->is_AMK_shutdown = controller_IN_toggleDCon;
          *rty_AMK_bDcOn_tx = 0U;
        } else if (rtu_AMK_bError) {
          localDW->is_AMK_shutdown = controller_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_controller = controller_IN_AMK_errorDetected;
          *rty_MI_motorStatus = MI_STS_ERROR;
        }
        break;

       case control_IN_enforceSetpointsZero:
        *rty_AMK_bInverterOn_tx = 0U;
        if (!rtu_AMK_bInverterOn_rx) {
          localDW->is_AMK_shutdown = controller_IN_commandOff;
          *rty_AMK_bEnable = 0U;
        } else if (rtu_AMK_bError) {
          localDW->is_AMK_shutdown = controller_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_controller = controller_IN_AMK_errorDetected;
          *rty_MI_motorStatus = MI_STS_ERROR;
        }
        break;

       default:
        /* case IN_toggleDCon: */
        *rty_AMK_bDcOn_tx = 0U;
        if ((!rtu_AMK_bDcOn_rx) && (!rtu_AMK_bQuitDcOn)) {
          localDW->is_AMK_shutdown = controller_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_controller = contr_IN_motorOff_waitingForGov;
          *rty_MI_motorStatus = OFF;
          *rty_AMK_bInverterOn_tx = 0U;
          *rty_AMK_bDcOn_tx = 0U;
          *rty_AMK_bEnable = 0U;
          *rty_AMK_bErrorReset = 0U;
          *rty_AMK_TargetVelocity = 0.0F;
          *rty_AMK_TorqueLimitPositiv = 0.0F;
          *rty_AMK_TorqueLimitNegativ = 0.0F;
        } else if (rtu_AMK_bError) {
          localDW->is_AMK_shutdown = controller_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_controller = controller_IN_AMK_errorDetected;
          *rty_MI_motorStatus = MI_STS_ERROR;
        }
        break;
      }
      break;

     case controller_IN_AMK_startup:
      switch (localDW->is_AMK_startup) {
       case controller_IN_commandOn:
        *rty_AMK_bEnable = 1U;
        *rty_AMK_bInverterOn_tx = 1U;
        if (rtu_AMK_bInverterOn_rx && rtu_AMK_bQuitInverterOn) {
          localDW->is_AMK_startup = controller_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_controller = controller_IN_AMK_running;
        } else if (rtu_AMK_bError) {
          localDW->is_AMK_startup = controller_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_controller = controller_IN_AMK_errorDetected;
          *rty_MI_motorStatus = MI_STS_ERROR;
        }
        break;

       case control_IN_enforceSetpointsZero:
        localDW->is_AMK_startup = controller_IN_commandOn;
        *rty_AMK_bEnable = 1U;
        *rty_AMK_bInverterOn_tx = 1U;
        break;

       case controller_IN_toggleDCon:
        *rty_AMK_bDcOn_tx = 1U;
        if (rtu_AMK_bDcOn_rx && rtu_AMK_bQuitDcOn) {
          localDW->is_AMK_startup = control_IN_enforceSetpointsZero;
          localDW->temporalCounter_i1 = 0U;
          *rty_AMK_TargetVelocity = 0.0F;
          *rty_AMK_TorqueLimitPositiv = 0.0F;
          *rty_AMK_TorqueLimitNegativ = 0.0F;
        } else if (rtu_AMK_bError) {
          localDW->is_AMK_startup = controller_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_controller = controller_IN_AMK_errorDetected;
          *rty_MI_motorStatus = MI_STS_ERROR;
        }
        break;

       default:
        /* case IN_waiting_sysReady: */
        if (rtu_AMK_bSystemReady) {
          localDW->is_AMK_startup = controller_IN_toggleDCon;
          *rty_AMK_bDcOn_tx = 1U;
        } else if (rtu_AMK_bError) {
          localDW->is_AMK_startup = controller_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_controller = controller_IN_AMK_errorDetected;
          *rty_MI_motorStatus = MI_STS_ERROR;
        }
        break;
      }
      break;

     default:
      /* case IN_motorOff_waitingForGov: */
      *rty_AMK_bInverterOn_tx = 0U;
      *rty_AMK_bDcOn_tx = 0U;
      *rty_AMK_bEnable = 0U;
      *rty_AMK_bErrorReset = 0U;
      if (rtu_GOV_e_miCmd == CMD_STARTUP) {
        localDW->is_c1_controller = controller_IN_AMK_startup;
        localDW->is_AMK_startup = controller_IN_waiting_sysReady;
        *rty_MI_motorStatus = STARTUP;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/LEFT_MOTOR' */
}

/* Model step function */
void controller_step(void)
{
  real32_T a;
  real32_T rtb_Switch2;
  real32_T rtb_TorqueLimit;

  /* Chart: '<S3>/Chart' incorporates:
   *  Delay: '<S3>/Delay'
   *  Delay: '<S3>/Delay1'
   *  Delay: '<S3>/Delay2'
   */
  if (controller_DW.is_active_c3_governor_lib == 0U) {
    controller_DW.is_active_c3_governor_lib = 1U;
    controller_DW.is_c3_governor_lib = controlle_IN_Initialize_outputs;
    controller_B.GOV_e_miCmd = CMD_INIT;
    controller_B.GOV_e_diCmd = DI_CMD_INIT;
    controller_DW.motorStartCount = 0U;
  } else {
    switch (controller_DW.is_c3_governor_lib) {
     case controlle_IN_Initialize_outputs:
      controller_B.GOV_e_diCmd = DI_CMD_INIT;
      controller_DW.is_c3_governor_lib = controller_IN_STARTUP;
      controller_DW.is_STARTUP = controller_IN_HV_startup;
      break;

     case controller_IN_RUNNING:
      if (controller_DW.Delay_DSTATE_f == ERR_STARTUP) {
        controller_DW.is_c3_governor_lib = controller_IN_RUNNING_ERROR;
        controller_DW.is_RUNNING_ERROR = controller_IN_HV_run_error;
        controller_B.GOV_e_diCmd = SYSTEM_ERROR;
      } else if (controller_DW.Delay1_DSTATE == MI_STS_ERROR) {
        controller_DW.is_c3_governor_lib = controller_IN_RUNNING_ERROR;
        controller_DW.is_RUNNING_ERROR = controller_IN_Motor_run_error;
        controller_B.GOV_e_diCmd = SYSTEM_ERROR;
      }
      break;

     case controller_IN_RUNNING_ERROR:
      if (controller_DW.is_RUNNING_ERROR == controller_IN_HV_run_error) {
        controller_B.GOV_e_diCmd = SYSTEM_ERROR;
      } else {
        /* case IN_Motor_run_error: */
        controller_B.GOV_e_diCmd = SYSTEM_ERROR;
      }
      break;

     case controller_IN_STARTUP:
      {
        if (controller_DW.Delay_DSTATE_f == ERR_STARTUP) {
          controller_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_c;
          controller_DW.is_c3_governor_lib = controller_IN_STARTUP_ERROR;
          controller_DW.is_STARTUP_ERROR = controller_IN_HV_startup_error;
        } else if (controller_DW.Delay2_DSTATE == DI_ERROR) {
          controller_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_c;
          controller_DW.is_c3_governor_lib = controller_IN_STARTUP_ERROR;
          controller_DW.is_STARTUP_ERROR = contro_IN_DriverInterface_Error;
        } else if (controller_DW.Delay1_DSTATE == MI_STS_ERROR) {
          if (controller_DW.motorStartCount >= 5) {
            controller_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_c;
            controller_DW.is_c3_governor_lib = controller_IN_STARTUP_ERROR;
            controller_DW.is_STARTUP_ERROR = controller_IN_Motor_faulted;
            controller_B.GOV_e_miCmd = CMD_SHUTDOWN;
          } else {
            controller_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_c;
            controller_DW.is_c3_governor_lib = controller_IN_STARTUP_ERROR;
            controller_DW.is_STARTUP_ERROR = controller_IN_Err_reset;
          }
        } else {
          switch (controller_DW.is_STARTUP) {
           case contro_IN_Command_motor_startup:
            if ((controller_DW.Delay1_DSTATE == RUNNING) &&
                (controller_DW.Delay2_DSTATE == DRV_START_REQ)) {
              controller_DW.is_STARTUP = controller_IN_Send_ReadyToDrive;
              controller_B.GOV_e_diCmd = READY_TO_DRIVE;
            }
            break;

           case controller_IN_HV_startup:
            {
              if (controller_DW.Delay_DSTATE_f == BM_RUNNING) {
                uint32_T tmp;
                controller_DW.is_STARTUP = contro_IN_Command_motor_startup;
                controller_B.GOV_e_miCmd = CMD_STARTUP;
                tmp = controller_DW.motorStartCount + 1U;
                if (controller_DW.motorStartCount + 1U > 65535U) {
                  tmp = 65535U;
                }

                controller_DW.motorStartCount = (uint16_T)tmp;
              }
            }
            break;

           default:
            /* case IN_Send_ReadyToDrive: */
            controller_B.GOV_e_diCmd = READY_TO_DRIVE;
            if (controller_DW.Delay2_DSTATE == DI_RUNNING) {
              controller_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_c;
              controller_DW.is_c3_governor_lib = controller_IN_RUNNING;
            }
            break;
          }
        }
      }
      break;

     default:
      /* case IN_STARTUP_ERROR: */
      switch (controller_DW.is_STARTUP_ERROR) {
       case contro_IN_DriverInterface_Error:
       case controller_IN_HV_startup_error:
        break;

       case controller_IN_Err_reset:
        if (controller_DW.Delay1_DSTATE == OFF) {
          controller_DW.is_STARTUP_ERROR = controller_IN_NO_ACTIVE_CHILD_c;
          controller_DW.is_c3_governor_lib = controller_IN_STARTUP;
          controller_DW.is_STARTUP = controller_IN_HV_startup;
        } else {
          controller_B.GOV_e_miCmd = ERR_RESET;
        }
        break;

       default:
        /* case IN_Motor_faulted: */
        break;
      }
      break;
    }
  }

  /* End of Chart: '<S3>/Chart' */

  /* Chart: '<S2>/Chart' incorporates:
   *  Delay: '<S3>/Delay2'
   *  Inport: '<Root>/DI_b_DriverButton'
   */
  if (controller_DW.temporalCounter_i1 < 15U) {
    controller_DW.temporalCounter_i1++;
  }

  if (controller_DW.is_active_c3_driver_interface_l == 0U) {
    controller_DW.is_active_c3_driver_interface_l = 1U;
    controller_DW.is_c3_driver_interface_lib = controller_IN_INIT;
    controller_DW.Delay2_DSTATE = DI_STS_INIT;
    controller_B.b_ReadyToDrive = false;

    /* Outport: '<Root>/DI_b_driverSpeaker' incorporates:
     *  Delay: '<S3>/Delay2'
     */
    controller_Y.DI_b_driverSpeaker = false;
  } else {
    switch (controller_DW.is_c3_driver_interface_lib) {
     case controller_IN_DI_error:
      controller_DW.Delay2_DSTATE = DI_ERROR;
      break;

     case controller_IN_DI_running:
      switch (controller_DW.is_DI_running) {
       case contr_IN_Driver_requested_start:
        controller_DW.Delay2_DSTATE = DRV_START_REQ;
        if (controller_B.GOV_e_diCmd == READY_TO_DRIVE) {
          controller_DW.is_DI_running = controller_IN_Ready_to_drive;
          controller_B.b_ReadyToDrive = true;
          controller_DW.Delay2_DSTATE = DI_RUNNING;
          controller_DW.is_Ready_to_drive = controller_IN_SpeakerOn_;
          controller_DW.temporalCounter_i1 = 0U;

          /* Outport: '<Root>/DI_b_driverSpeaker' */
          controller_Y.DI_b_driverSpeaker = true;
        }
        break;

       case controller_IN_Ready_to_drive:
        controller_B.b_ReadyToDrive = true;
        controller_DW.Delay2_DSTATE = DI_RUNNING;
        if (controller_B.GOV_e_diCmd == SYSTEM_ERROR) {
          controller_DW.is_Ready_to_drive = controller_IN_NO_ACTIVE_CHILD_c;
          controller_DW.is_DI_running = controller_IN_NO_ACTIVE_CHILD_c;
          controller_DW.is_c3_driver_interface_lib =
            controller_IN_Vehicle_coasting;
          controller_B.b_ReadyToDrive = false;
          controller_DW.Delay2_DSTATE = DI_IDLE;
        } else if (controller_DW.is_Ready_to_drive == controller_IN_SpeakerOff)
        {
          /* Outport: '<Root>/DI_b_driverSpeaker' */
          controller_Y.DI_b_driverSpeaker = false;
        } else {
          /* Outport: '<Root>/DI_b_driverSpeaker' */
          /* case IN_SpeakerOn_: */
          controller_Y.DI_b_driverSpeaker = true;
          if (controller_DW.temporalCounter_i1 >= 10U) {
            controller_DW.is_Ready_to_drive = controller_IN_SpeakerOff;

            /* Outport: '<Root>/DI_b_driverSpeaker' */
            controller_Y.DI_b_driverSpeaker = false;
          }
        }
        break;

       default:
        /* case IN_Waiting_for_driver: */
        controller_DW.Delay2_DSTATE = WAITING_FOR_DRVR;
        if (controller_U.DI_b_DriverButton == 1.0) {
          controller_DW.is_DI_running = contr_IN_Driver_requested_start;
          controller_DW.Delay2_DSTATE = DRV_START_REQ;
        }
        break;
      }
      break;

     case controller_IN_INIT:
      controller_B.b_ReadyToDrive = false;

      /* Outport: '<Root>/DI_b_driverSpeaker' */
      controller_Y.DI_b_driverSpeaker = false;
      controller_DW.is_c3_driver_interface_lib = controller_IN_DI_running;
      controller_DW.is_DI_running = controlle_IN_Waiting_for_driver;
      controller_DW.Delay2_DSTATE = WAITING_FOR_DRVR;
      break;

     default:
      /* case IN_Vehicle_coasting: */
      controller_B.b_ReadyToDrive = false;
      controller_DW.Delay2_DSTATE = DI_IDLE;
      break;
    }
  }

  /* End of Chart: '<S2>/Chart' */

  /* Switch: '<S2>/Switch2' incorporates:
   *  Constant: '<S13>/LowerPotentiometerLimit1'
   *  Constant: '<S13>/UpperPotentiometerLimit1'
   *  Constant: '<S2>/Constant1'
   *  Gain: '<S13>/Gain'
   *  Inport: '<Root>/DI_V_BrakePedalPos'
   *  Logic: '<S19>/FixPt Logical Operator'
   *  Product: '<S20>/Divide'
   *  RelationalOperator: '<S19>/Lower Test'
   *  RelationalOperator: '<S19>/Upper Test'
   *  Sum: '<S20>/Subtract'
   */
  if ((controller_U.DI_V_BrakePedalPos >= 0.0F) &&
      (controller_U.DI_V_BrakePedalPos <= 1024.0F)) {
    rtb_Switch2 = 0.0F;
  } else {
    rtb_Switch2 = (controller_U.DI_V_BrakePedalPos - 1024.0F) / 1024.0F * 100.0F;
  }

  /* End of Switch: '<S2>/Switch2' */

  /* MATLAB Function: '<S5>/RIGHT_LIMIT' incorporates:
   *  Constant: '<S5>/MaxMotorCurrent'
   *  Constant: '<S5>/MaxMotorTorque'
   *  Constant: '<S5>/Vbat'
   *  Gain: '<S5>/Gain'
   *  Gain: '<S5>/convertToAmps3'
   *  Inport: '<Root>/AMK_ActualVelocity_R'
   *  Inport: '<Root>/AMK_MagnetizingCurrent_R'
   */
  rtb_TorqueLimit = fmaxf(0.0999984741F * (real32_T)
    controller_U.AMK_MagnetizingCurrent_R, 0.0F);
  a = fminf(controller_ConstB.Gain1, 52.0F);
  rtb_TorqueLimit = fminf(fmaxf(fmaxf(sqrtf(a * a - rtb_TorqueLimit *
    rtb_TorqueLimit), 0.0F) * 600.0F / ((real32_T)
    controller_U.AMK_ActualVelocity_R * 3.14159274F / 30.0F), 0.0F), 27.0F);

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S12>/LowerPotentiometerLimit1'
   *  Constant: '<S12>/UpperPotentiometerLimit1'
   *  Constant: '<S5>/Constant6'
   *  If: '<S2>/If'
   *  Inport: '<Root>/DI_V_AccelPedalPos2'
   *  Logic: '<S17>/FixPt Logical Operator'
   *  Logic: '<S2>/NOT'
   *  Lookup_n-D: '<S2>/AccelPedalPos1 LUT'
   *  MinMax: '<S5>/Min'
   *  Product: '<S5>/Divide'
   *  RelationalOperator: '<S17>/Lower Test'
   *  RelationalOperator: '<S17>/Upper Test'
   */
  if (rtb_Switch2 > 0.0F) {
    rtb_Switch2 = 0.0F;
  } else {
    if (!controller_B.b_ReadyToDrive) {
      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      /* If: '<S2>/If' incorporates:
       *  Constant: '<S2>/Constant'
       *  SignalConversion generated from: '<S8>/In1'
       */
      rtb_Switch2 = 0.0F;

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
    } else if ((controller_U.DI_V_AccelPedalPos2 >= 0.0F) &&
               (controller_U.DI_V_AccelPedalPos2 <= 1024.0F)) {
      /* If: '<S2>/If' incorporates:
       *  Constant: '<S12>/UpperPotentiometerLimit1'
       *  Gain: '<S12>/Gain'
       *  Inport: '<Root>/DI_V_AccelPedalPos2'
       *  Product: '<S18>/Divide'
       *  Sum: '<S18>/Subtract'
       */
      rtb_Switch2 = (controller_U.DI_V_AccelPedalPos2 - 1024.0F) / 1024.0F *
        100.0F;
    } else {
      /* If: '<S2>/If' incorporates:
       *  Constant: '<S11>/UpperPotentiometerLimit1'
       *  Gain: '<S11>/Gain'
       *  Inport: '<Root>/DI_V_AccelPedalPos1'
       *  Product: '<S16>/Divide'
       *  Sum: '<S16>/Subtract'
       */
      rtb_Switch2 = (controller_U.DI_V_AccelPedalPos1 - 1024.0F) / 1024.0F *
        100.0F;
    }

    rtb_Switch2 = look1_iflf_binlxpw(rtb_Switch2, controller_ConstP.pooled3,
      controller_ConstP.pooled3, 20U) * fminf(rtb_TorqueLimit, rtb_TorqueLimit);
  }

  /* End of Switch: '<S5>/Switch' */

  /* Chart: '<S4>/RIGHT_MOTOR' incorporates:
   *  Constant: '<S5>/MaxAMKspeed'
   *  Constant: '<S5>/NegTorqueLimit'
   *  Inport: '<Root>/AMK_bDcOn_R'
   *  Inport: '<Root>/AMK_bError_R'
   *  Inport: '<Root>/AMK_bInverterOn_R'
   *  Inport: '<Root>/AMK_bQuitDcOn_R'
   *  Inport: '<Root>/AMK_bQuitInverterOn_R'
   *  Inport: '<Root>/AMK_bSystemReady_R'
   *  Outport: '<Root>/AMK_TargetVelocity_R'
   *  Outport: '<Root>/AMK_TorqueLimitNegativ_R'
   *  Outport: '<Root>/AMK_TorqueLimitPositiv_R'
   *  Outport: '<Root>/AMK_bDcOn_tx_R'
   *  Outport: '<Root>/AMK_bEnable_R'
   *  Outport: '<Root>/AMK_bErrorReset_R'
   *  Outport: '<Root>/AMK_bInverterOn_tx_R'
   */
  controller_LEFT_MOTOR(controller_B.GOV_e_miCmd,
                        controller_U.AMK_bSystemReady_R,
                        controller_U.AMK_bError_R, controller_U.AMK_bQuitDcOn_R,
                        controller_U.AMK_bDcOn_R,
                        controller_U.AMK_bQuitInverterOn_R,
                        controller_U.AMK_bInverterOn_R, 20000.0F, rtb_Switch2,
                        0.0F, &controller_B.MI_motorStatus,
                        &controller_Y.AMK_bInverterOn_tx_R,
                        &controller_Y.AMK_bDcOn_tx_R,
                        &controller_Y.AMK_bEnable_R,
                        &controller_Y.AMK_bErrorReset_R,
                        &controller_Y.AMK_TargetVelocity_R,
                        &controller_Y.AMK_TorqueLimitPositiv_R,
                        &controller_Y.AMK_TorqueLimitNegativ_R,
                        &controller_DW.sf_RIGHT_MOTOR);

  /* Chart: '<S4>/LEFT_MOTOR' incorporates:
   *  Constant: '<S5>/MaxAMKspeed1'
   *  Constant: '<S5>/NegTorqueLimit1'
   *  Inport: '<Root>/AMK_bDcOn_L'
   *  Inport: '<Root>/AMK_bError_L'
   *  Inport: '<Root>/AMK_bInverterOn_L'
   *  Inport: '<Root>/AMK_bQuitDcOn_L'
   *  Inport: '<Root>/AMK_bQuitInverterOn_L'
   *  Inport: '<Root>/AMK_bSystemReady_L'
   *  Outport: '<Root>/AMK_TargetVelocity_L'
   *  Outport: '<Root>/AMK_TorqueLimitNegativ_L'
   *  Outport: '<Root>/AMK_TorqueLimitPositiv_L'
   *  Outport: '<Root>/AMK_bDcOn_tx_L'
   *  Outport: '<Root>/AMK_bEnable_L'
   *  Outport: '<Root>/AMK_bErrorReset_L'
   *  Outport: '<Root>/AMK_bInverterOn_tx_L'
   */
  controller_LEFT_MOTOR(controller_B.GOV_e_miCmd,
                        controller_U.AMK_bSystemReady_L,
                        controller_U.AMK_bError_L, controller_U.AMK_bQuitDcOn_L,
                        controller_U.AMK_bDcOn_L,
                        controller_U.AMK_bQuitInverterOn_L,
                        controller_U.AMK_bInverterOn_L, 20000.0F, rtb_Switch2,
                        0.0F, &controller_B.MI_motorStatus_b,
                        &controller_Y.AMK_bInverterOn_tx_L,
                        &controller_Y.AMK_bDcOn_tx_L,
                        &controller_Y.AMK_bEnable_L,
                        &controller_Y.AMK_bErrorReset_L,
                        &controller_Y.AMK_TargetVelocity_L,
                        &controller_Y.AMK_TorqueLimitPositiv_L,
                        &controller_Y.AMK_TorqueLimitNegativ_L,
                        &controller_DW.sf_LEFT_MOTOR);

  /* Chart: '<S1>/Chart' incorporates:
   *  Delay: '<S3>/Delay'
   *  Inport: '<Root>/BM_b_HVnegContactorSts'
   *  Inport: '<Root>/BM_b_HVposContactorSts'
   *  Inport: '<Root>/BM_b_prechrgContactorSts'
   */
  if (controller_DW.temporalCounter_i1_p < 7U) {
    controller_DW.temporalCounter_i1_p++;
  }

  if (controller_DW.is_active_c3_battery_monitor_li == 0U) {
    controller_DW.is_active_c3_battery_monitor_li = 1U;
    controller_DW.is_c3_battery_monitor_lib = controller_IN_InitialState;
    controller_DW.Delay_DSTATE_f = BM_INIT;
  } else {
    switch (controller_DW.is_c3_battery_monitor_lib) {
     case controll_IN_ErrorAllClosedState:
      controller_DW.Delay_DSTATE_f = ERR_ALL_CLOSED;
      break;

     case controller_IN_ErrorHVPositive:
      controller_DW.Delay_DSTATE_f = ERR_HV_POSITIVE;
      break;

     case IN_ErrorInitializePrechargeStat:
      controller_DW.Delay_DSTATE_f = ERR_INIT_PRECHARGE;
      break;

     case co_IN_ErrorPrechargeClosedState:
      controller_DW.Delay_DSTATE_f = ERR_PRECHARGE_CLOSED;
      break;

     case controll_IN_ErrorPrechargeState:
      controller_DW.Delay_DSTATE_f = ERR_PRECHARGE;
      break;

     case controller_IN_ErrorRunningState:
      controller_DW.Delay_DSTATE_f = ERR_RUNNING;
      break;

     case controller_IN_ErrorStartupState:
      controller_DW.Delay_DSTATE_f = ERR_STARTUP;
      break;

     case controller_IN_InitialState:
      controller_DW.Delay_DSTATE_f = BM_INIT;
      if ((controller_U.BM_b_prechrgContactorSts == 0.0) &&
          (controller_U.BM_b_HVnegContactorSts == 0.0) &&
          (controller_U.BM_b_HVposContactorSts == 0.0)) {
        controller_DW.is_c3_battery_monitor_lib = controller_IN_StartupState1;
        controller_DW.Delay_DSTATE_f = BM_IDLE;
      } else if ((controller_U.BM_b_prechrgContactorSts == 1.0) &&
                 (controller_U.BM_b_HVnegContactorSts == 0.0) &&
                 (controller_U.BM_b_HVposContactorSts == 0.0)) {
        controller_DW.is_c3_battery_monitor_lib =
          co_IN_ErrorPrechargeClosedState;
        controller_DW.Delay_DSTATE_f = ERR_PRECHARGE_CLOSED;
      } else if ((controller_U.BM_b_prechrgContactorSts == 1.0) &&
                 (controller_U.BM_b_HVnegContactorSts == 1.0) &&
                 (controller_U.BM_b_HVposContactorSts == 1.0)) {
        controller_DW.is_c3_battery_monitor_lib =
          controll_IN_ErrorAllClosedState;
        controller_DW.Delay_DSTATE_f = ERR_ALL_CLOSED;
      } else if ((controller_U.BM_b_prechrgContactorSts == 0.0) &&
                 (controller_U.BM_b_HVnegContactorSts == 0.0) &&
                 (controller_U.BM_b_HVposContactorSts == 1.0)) {
        controller_DW.is_c3_battery_monitor_lib = controller_IN_ErrorHVPositive;
        controller_DW.Delay_DSTATE_f = ERR_HV_POSITIVE;
      } else if ((controller_U.BM_b_prechrgContactorSts == 1.0) &&
                 (controller_U.BM_b_HVnegContactorSts == 1.0) &&
                 (controller_U.BM_b_HVposContactorSts == 0.0)) {
        controller_DW.is_c3_battery_monitor_lib = controller_IN_PrechargeState;
        controller_DW.temporalCounter_i1_p = 0U;
        controller_DW.Delay_DSTATE_f = PRECHARGE;
      } else if ((controller_U.BM_b_prechrgContactorSts == 0.0) &&
                 (controller_U.BM_b_HVnegContactorSts == 1.0) &&
                 (controller_U.BM_b_HVposContactorSts == 1.0)) {
        controller_DW.is_c3_battery_monitor_lib = controller_IN_RunningState;
        controller_DW.temporalCounter_i1_p = 0U;
        controller_DW.Delay_DSTATE_f = BM_RUNNING;
      }
      break;

     case con_IN_InitializePrechargeState:
      controller_DW.Delay_DSTATE_f = INIT_PRECHARGE;
      if ((controller_U.BM_b_prechrgContactorSts == 1.0) &&
          (controller_U.BM_b_HVnegContactorSts == 1.0) &&
          (controller_U.BM_b_HVposContactorSts == 1.0)) {
        controller_DW.is_c3_battery_monitor_lib = controller_IN_PrechargeState;
        controller_DW.temporalCounter_i1_p = 0U;
        controller_DW.Delay_DSTATE_f = PRECHARGE;
      } else if (controller_DW.temporalCounter_i1_p >= 5U) {
        controller_DW.is_c3_battery_monitor_lib =
          IN_ErrorInitializePrechargeStat;
        controller_DW.Delay_DSTATE_f = ERR_INIT_PRECHARGE;
      }
      break;

     case controller_IN_PrechargeState:
      controller_DW.Delay_DSTATE_f = PRECHARGE;
      if ((controller_U.BM_b_prechrgContactorSts == 0.0) &&
          (controller_U.BM_b_HVnegContactorSts == 1.0) &&
          (controller_U.BM_b_HVposContactorSts == 1.0)) {
        controller_DW.is_c3_battery_monitor_lib = controller_IN_RunningState;
        controller_DW.temporalCounter_i1_p = 0U;
        controller_DW.Delay_DSTATE_f = BM_RUNNING;
      } else if (controller_DW.temporalCounter_i1_p >= 5U) {
        controller_DW.is_c3_battery_monitor_lib =
          controll_IN_ErrorPrechargeState;
        controller_DW.Delay_DSTATE_f = ERR_PRECHARGE;
      }
      break;

     case controller_IN_RunningState:
      controller_DW.Delay_DSTATE_f = BM_RUNNING;
      if ((controller_U.BM_b_prechrgContactorSts == 0.0) &&
          (controller_U.BM_b_HVnegContactorSts == 1.0) &&
          (controller_U.BM_b_HVposContactorSts == 1.0)) {
        controller_DW.is_c3_battery_monitor_lib = controller_IN_RunningState;
        controller_DW.temporalCounter_i1_p = 0U;
        controller_DW.Delay_DSTATE_f = BM_RUNNING;
      } else if (controller_DW.temporalCounter_i1_p >= 5U) {
        controller_DW.is_c3_battery_monitor_lib =
          controller_IN_ErrorRunningState;
        controller_DW.Delay_DSTATE_f = ERR_RUNNING;
      }
      break;

     case controller_IN_StartupState:
      controller_DW.Delay_DSTATE_f = BM_STARTUP;
      if ((controller_U.BM_b_prechrgContactorSts == 1.0) &&
          (controller_U.BM_b_HVnegContactorSts == 1.0) &&
          (controller_U.BM_b_HVposContactorSts == 0.0)) {
        controller_DW.is_c3_battery_monitor_lib =
          con_IN_InitializePrechargeState;
        controller_DW.temporalCounter_i1_p = 0U;
        controller_DW.Delay_DSTATE_f = INIT_PRECHARGE;
      } else if (controller_DW.temporalCounter_i1_p >= 5U) {
        controller_DW.is_c3_battery_monitor_lib =
          controller_IN_ErrorStartupState;
        controller_DW.Delay_DSTATE_f = ERR_STARTUP;
      }
      break;

     default:
      /* case IN_StartupState1: */
      controller_DW.Delay_DSTATE_f = BM_IDLE;
      if ((controller_U.BM_b_prechrgContactorSts == 0.0) &&
          (controller_U.BM_b_HVnegContactorSts == 1.0) &&
          (controller_U.BM_b_HVposContactorSts == 0.0)) {
        controller_DW.is_c3_battery_monitor_lib = controller_IN_StartupState;
        controller_DW.temporalCounter_i1_p = 0U;
        controller_DW.Delay_DSTATE_f = BM_STARTUP;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* Switch: '<S4>/overallMotorState' incorporates:
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S4>/GreaterThan'
   */
  if (controller_B.MI_motorStatus_b == controller_B.MI_motorStatus) {
    controller_DW.Delay_DSTATE = controller_B.MI_motorStatus_b;
  }

  /* End of Switch: '<S4>/overallMotorState' */

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S4>/Constant1'
   *  Delay: '<S3>/Delay1'
   *  Delay: '<S4>/Delay'
   *  Logic: '<S4>/OR'
   *  RelationalOperator: '<S4>/motorErrorActive'
   *  RelationalOperator: '<S4>/motorErrorActive1'
   */
  if ((controller_B.MI_motorStatus == MI_STS_ERROR) ||
      (controller_B.MI_motorStatus_b == MI_STS_ERROR)) {
    controller_DW.Delay1_DSTATE = MI_STS_ERROR;
  } else {
    controller_DW.Delay1_DSTATE = controller_DW.Delay_DSTATE;
  }

  /* End of Switch: '<S4>/Switch' */
}

/* Model initialize function */
void controller_initialize(void)
{
  /* InitializeConditions for Delay: '<S4>/Delay' */
  controller_DW.Delay_DSTATE = OFF;

  /* SystemInitialize for Chart: '<S4>/RIGHT_MOTOR' incorporates:
   *  Outport: '<Root>/AMK_TargetVelocity_R'
   *  Outport: '<Root>/AMK_TorqueLimitNegativ_R'
   *  Outport: '<Root>/AMK_TorqueLimitPositiv_R'
   *  Outport: '<Root>/AMK_bDcOn_tx_R'
   *  Outport: '<Root>/AMK_bEnable_R'
   *  Outport: '<Root>/AMK_bErrorReset_R'
   *  Outport: '<Root>/AMK_bInverterOn_tx_R'
   */
  controller_LEFT_MOTOR_Init(&controller_B.MI_motorStatus,
    &controller_Y.AMK_bInverterOn_tx_R, &controller_Y.AMK_bDcOn_tx_R,
    &controller_Y.AMK_bEnable_R, &controller_Y.AMK_bErrorReset_R,
    &controller_Y.AMK_TargetVelocity_R, &controller_Y.AMK_TorqueLimitPositiv_R,
    &controller_Y.AMK_TorqueLimitNegativ_R);

  /* SystemInitialize for Chart: '<S4>/LEFT_MOTOR' incorporates:
   *  Outport: '<Root>/AMK_TargetVelocity_L'
   *  Outport: '<Root>/AMK_TorqueLimitNegativ_L'
   *  Outport: '<Root>/AMK_TorqueLimitPositiv_L'
   *  Outport: '<Root>/AMK_bDcOn_tx_L'
   *  Outport: '<Root>/AMK_bEnable_L'
   *  Outport: '<Root>/AMK_bErrorReset_L'
   *  Outport: '<Root>/AMK_bInverterOn_tx_L'
   */
  controller_LEFT_MOTOR_Init(&controller_B.MI_motorStatus_b,
    &controller_Y.AMK_bInverterOn_tx_L, &controller_Y.AMK_bDcOn_tx_L,
    &controller_Y.AMK_bEnable_L, &controller_Y.AMK_bErrorReset_L,
    &controller_Y.AMK_TargetVelocity_L, &controller_Y.AMK_TorqueLimitPositiv_L,
    &controller_Y.AMK_TorqueLimitNegativ_L);
}

/* Model terminate function */
void controller_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
