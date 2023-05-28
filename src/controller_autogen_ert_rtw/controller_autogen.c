/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: controller_autogen.c
 *
 * Code generated for Simulink model 'controller_autogen'.
 *
 * Model version                  : 1.22
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun May 28 18:52:47 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "controller_autogen.h"
#include "controller_autogen_types.h"
#include "rtwtypes.h"
#include "controller_autogen_private.h"
#include <math.h>

/* Named constants for Chart: '<S4>/LEFT_MOTOR' */
#define contr_IN_enforceSetpointsZero_p ((uint8_T)1U)
#define contr_IN_motorOff_waitingForGov ((uint8_T)6U)
#define control_IN_enforceSetpointsZero ((uint8_T)2U)
#define controller_IN_AMK_errorDetected ((uint8_T)1U)
#define controller__IN_waiting_sysReady ((uint8_T)4U)
#define controller_a_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define controller_au_IN_AMK_errorReset ((uint8_T)2U)
#define controller_auto_IN_AMK_shutdown ((uint8_T)4U)
#define controller_auto_IN_toggleEnable ((uint8_T)3U)
#define controller_autog_IN_AMK_running ((uint8_T)3U)
#define controller_autog_IN_AMK_startup ((uint8_T)5U)
#define controller_autog_IN_toggleReset ((uint8_T)4U)
#define controller_autoge_IN_commandOff ((uint8_T)1U)
#define controller_autoge_IN_toggleDCon ((uint8_T)3U)
#define controller_autogen_IN_commandOn ((uint8_T)1U)
#define controller_autogen_IN_sendReset ((uint8_T)2U)

/* Named constants for Chart: '<S1>/Chart' */
#define IN_ErrorInitializePrechargeStat ((uint8_T)3U)
#define co_IN_ErrorPrechargeClosedState ((uint8_T)4U)
#define con_IN_InitializePrechargeState ((uint8_T)9U)
#define controll_IN_ErrorAllClosedState ((uint8_T)1U)
#define controll_IN_ErrorPrechargeState ((uint8_T)5U)
#define controller_IN_ErrorRunningState ((uint8_T)6U)
#define controller_IN_ErrorStartupState ((uint8_T)7U)
#define controller_IN_NO_ACTIVE_CHILD_c ((uint8_T)0U)
#define controller_a_IN_ErrorHVPositive ((uint8_T)2U)
#define controller_au_IN_PrechargeState ((uint8_T)10U)
#define controller_aut_IN_StartupState1 ((uint8_T)13U)
#define controller_auto_IN_InitialState ((uint8_T)8U)
#define controller_auto_IN_RunningState ((uint8_T)11U)
#define controller_auto_IN_StartupState ((uint8_T)12U)

/* Named constants for Chart: '<S2>/Chart' */
#define contr_IN_Driver_requested_start ((uint8_T)1U)
#define controlle_IN_Waiting_for_driver ((uint8_T)3U)
#define controller__IN_Vehicle_coasting ((uint8_T)4U)
#define controller_au_IN_Ready_to_drive ((uint8_T)2U)
#define controller_autoge_IN_DI_running ((uint8_T)2U)
#define controller_autoge_IN_SpeakerOff ((uint8_T)1U)
#define controller_autoge_IN_SpeakerOn_ ((uint8_T)2U)
#define controller_autogen_IN_DI_error ((uint8_T)1U)
#define controller_autogen_IN_INIT     ((uint8_T)3U)

/* Named constants for Chart: '<S3>/Chart' */
#define contro_IN_Command_motor_startup ((uint8_T)1U)
#define contro_IN_DriverInterface_Error ((uint8_T)1U)
#define controlle_IN_Initialize_outputs ((uint8_T)1U)
#define controller_IN_Send_ReadyToDrive ((uint8_T)3U)
#define controller__IN_HV_startup_error ((uint8_T)3U)
#define controller_a_IN_Motor_run_error ((uint8_T)2U)
#define controller_aut_IN_Motor_faulted ((uint8_T)4U)
#define controller_aut_IN_RUNNING_ERROR ((uint8_T)3U)
#define controller_aut_IN_STARTUP_ERROR ((uint8_T)5U)
#define controller_auto_IN_HV_run_error ((uint8_T)1U)
#define controller_autoge_IN_HV_startup ((uint8_T)2U)
#define controller_autogen_IN_Err_reset ((uint8_T)2U)
#define controller_autogen_IN_RUNNING  ((uint8_T)2U)
#define controller_autogen_IN_STARTUP  ((uint8_T)4U)

/* Block signals (default storage) */
B_controller_autogen_T controller_autogen_B;

/* Block states (default storage) */
DW_controller_autogen_T controller_autogen_DW;

/* External inputs (root inport signals with default storage) */
ExtU_controller_autogen_T controller_autogen_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_controller_autogen_T controller_autogen_Y;

/* Real-time model */
static RT_MODEL_controller_autogen_T controller_autogen_M_;
RT_MODEL_controller_autogen_T *const controller_autogen_M =
  &controller_autogen_M_;
real32_T look1_iflf_binlcpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T yL_0d0;
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
    frac = 0.0F;
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
    frac = 1.0F;
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
void controller_auto_LEFT_MOTOR_Init(MI_STATUSES *rty_MI_motorStatus, uint8_T
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
void controller_autogen_LEFT_MOTOR(MI_CMD rtu_GOV_e_miCmd, boolean_T
  rtu_AMK_bSystemReady, boolean_T rtu_AMK_bError, boolean_T rtu_AMK_bQuitDcOn,
  boolean_T rtu_AMK_bDcOn_rx, boolean_T rtu_AMK_bQuitInverterOn, boolean_T
  rtu_AMK_bInverterOn_rx, real32_T rtu_VD_T_motorSpeedRequest, real32_T
  rtu_VD_T_motorTorqueLimitPositi, real32_T rtu_VD_T_motorTorqueLimitNegati,
  MI_STATUSES *rty_MI_motorStatus, uint8_T *rty_AMK_bInverterOn_tx, uint8_T
  *rty_AMK_bDcOn_tx, uint8_T *rty_AMK_bEnable, uint8_T *rty_AMK_bErrorReset,
  real32_T *rty_AMK_TargetVelocity, real32_T *rty_AMK_TorqueLimitPositiv,
  real32_T *rty_AMK_TorqueLimitNegativ, DW_LEFT_MOTOR_controller_auto_T *localDW)
{
  if (localDW->temporalCounter_i1 < 3U) {
    localDW->temporalCounter_i1++;
  }

  /* Chart: '<S4>/LEFT_MOTOR' */
  if (localDW->is_active_c1_motor_interface_li == 0U) {
    localDW->is_active_c1_motor_interface_li = 1U;
    localDW->is_c1_motor_interface_lib = contr_IN_motorOff_waitingForGov;
    *rty_MI_motorStatus = OFF;
    *rty_AMK_bInverterOn_tx = 0U;
    *rty_AMK_bDcOn_tx = 0U;
    *rty_AMK_bEnable = 0U;
    *rty_AMK_bErrorReset = 0U;
    *rty_AMK_TargetVelocity = 0.0F;
    *rty_AMK_TorqueLimitPositiv = 0.0F;
    *rty_AMK_TorqueLimitNegativ = 0.0F;
  } else {
    switch (localDW->is_c1_motor_interface_lib) {
     case controller_IN_AMK_errorDetected:
      if (rtu_GOV_e_miCmd == ERR_RESET) {
        localDW->is_c1_motor_interface_lib = controller_au_IN_AMK_errorReset;
        localDW->is_AMK_errorReset = contr_IN_enforceSetpointsZero_p;
        *rty_AMK_TargetVelocity = 0.0F;
        *rty_AMK_TorqueLimitPositiv = 0.0F;
        *rty_AMK_TorqueLimitNegativ = 0.0F;
        *rty_AMK_bInverterOn_tx = 0U;
      }
      break;

     case controller_au_IN_AMK_errorReset:
      switch (localDW->is_AMK_errorReset) {
       case contr_IN_enforceSetpointsZero_p:
        *rty_AMK_bInverterOn_tx = 0U;
        if (!rtu_AMK_bInverterOn_rx) {
          localDW->is_AMK_errorReset = controller_auto_IN_toggleEnable;
          localDW->temporalCounter_i1 = 0U;
          *rty_AMK_bEnable = 0U;
        }
        break;

       case controller_autogen_IN_sendReset:
        *rty_AMK_bErrorReset = 1U;
        if (localDW->temporalCounter_i1 >= 3U) {
          localDW->is_AMK_errorReset = controller_autog_IN_toggleReset;
          *rty_AMK_bErrorReset = 0U;
        }
        break;

       case controller_auto_IN_toggleEnable:
        *rty_AMK_bEnable = 0U;
        if (localDW->temporalCounter_i1 >= 3U) {
          localDW->is_AMK_errorReset = controller_autogen_IN_sendReset;
          localDW->temporalCounter_i1 = 0U;
          *rty_AMK_bErrorReset = 1U;
        }
        break;

       default:
        /* case IN_toggleReset: */
        *rty_AMK_bErrorReset = 0U;
        if (rtu_AMK_bSystemReady) {
          localDW->is_AMK_errorReset = controller_a_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_motor_interface_lib = contr_IN_motorOff_waitingForGov;
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

     case controller_autog_IN_AMK_running:
      if (rtu_AMK_bError) {
        localDW->is_c1_motor_interface_lib = controller_IN_AMK_errorDetected;
        *rty_MI_motorStatus = MI_STS_ERROR;
      } else if (rtu_GOV_e_miCmd == CMD_SHUTDOWN) {
        localDW->is_c1_motor_interface_lib = controller_auto_IN_AMK_shutdown;
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

     case controller_auto_IN_AMK_shutdown:
      switch (localDW->is_AMK_shutdown) {
       case controller_autoge_IN_commandOff:
        *rty_AMK_bEnable = 0U;
        if (!rtu_AMK_bQuitInverterOn) {
          localDW->is_AMK_shutdown = controller_autoge_IN_toggleDCon;
          *rty_AMK_bDcOn_tx = 0U;
        } else if (rtu_AMK_bError) {
          localDW->is_AMK_shutdown = controller_a_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_motor_interface_lib = controller_IN_AMK_errorDetected;
          *rty_MI_motorStatus = MI_STS_ERROR;
        }
        break;

       case control_IN_enforceSetpointsZero:
        *rty_AMK_bInverterOn_tx = 0U;
        if (!rtu_AMK_bInverterOn_rx) {
          localDW->is_AMK_shutdown = controller_autoge_IN_commandOff;
          *rty_AMK_bEnable = 0U;
        } else if (rtu_AMK_bError) {
          localDW->is_AMK_shutdown = controller_a_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_motor_interface_lib = controller_IN_AMK_errorDetected;
          *rty_MI_motorStatus = MI_STS_ERROR;
        }
        break;

       default:
        /* case IN_toggleDCon: */
        *rty_AMK_bDcOn_tx = 0U;
        if ((!rtu_AMK_bDcOn_rx) && (!rtu_AMK_bQuitDcOn)) {
          localDW->is_AMK_shutdown = controller_a_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_motor_interface_lib = contr_IN_motorOff_waitingForGov;
          *rty_MI_motorStatus = OFF;
          *rty_AMK_bInverterOn_tx = 0U;
          *rty_AMK_bDcOn_tx = 0U;
          *rty_AMK_bEnable = 0U;
          *rty_AMK_bErrorReset = 0U;
          *rty_AMK_TargetVelocity = 0.0F;
          *rty_AMK_TorqueLimitPositiv = 0.0F;
          *rty_AMK_TorqueLimitNegativ = 0.0F;
        } else if (rtu_AMK_bError) {
          localDW->is_AMK_shutdown = controller_a_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_motor_interface_lib = controller_IN_AMK_errorDetected;
          *rty_MI_motorStatus = MI_STS_ERROR;
        }
        break;
      }
      break;

     case controller_autog_IN_AMK_startup:
      switch (localDW->is_AMK_startup) {
       case controller_autogen_IN_commandOn:
        *rty_AMK_bEnable = 1U;
        *rty_AMK_bInverterOn_tx = 1U;
        if (rtu_AMK_bInverterOn_rx && rtu_AMK_bQuitInverterOn) {
          localDW->is_AMK_startup = controller_a_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_motor_interface_lib = controller_autog_IN_AMK_running;
        } else if (rtu_AMK_bError) {
          localDW->is_AMK_startup = controller_a_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_motor_interface_lib = controller_IN_AMK_errorDetected;
          *rty_MI_motorStatus = MI_STS_ERROR;
        }
        break;

       case control_IN_enforceSetpointsZero:
        localDW->is_AMK_startup = controller_autogen_IN_commandOn;
        *rty_AMK_bEnable = 1U;
        *rty_AMK_bInverterOn_tx = 1U;
        break;

       case controller_autoge_IN_toggleDCon:
        *rty_AMK_bDcOn_tx = 1U;
        if (rtu_AMK_bDcOn_rx && rtu_AMK_bQuitDcOn) {
          localDW->is_AMK_startup = control_IN_enforceSetpointsZero;
          localDW->temporalCounter_i1 = 0U;
          *rty_AMK_TargetVelocity = 0.0F;
          *rty_AMK_TorqueLimitPositiv = 0.0F;
          *rty_AMK_TorqueLimitNegativ = 0.0F;
        } else if (rtu_AMK_bError) {
          localDW->is_AMK_startup = controller_a_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_motor_interface_lib = controller_IN_AMK_errorDetected;
          *rty_MI_motorStatus = MI_STS_ERROR;
        }
        break;

       default:
        /* case IN_waiting_sysReady: */
        if (rtu_AMK_bSystemReady) {
          localDW->is_AMK_startup = controller_autoge_IN_toggleDCon;
          *rty_AMK_bDcOn_tx = 1U;
        } else if (rtu_AMK_bError) {
          localDW->is_AMK_startup = controller_a_IN_NO_ACTIVE_CHILD;
          localDW->is_c1_motor_interface_lib = controller_IN_AMK_errorDetected;
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
        localDW->is_c1_motor_interface_lib = controller_autog_IN_AMK_startup;
        localDW->is_AMK_startup = controller__IN_waiting_sysReady;
        *rty_MI_motorStatus = STARTUP;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/LEFT_MOTOR' */
}

/*
 * Output and update for atomic system:
 *    '<S5>/LEFT_LIMIT'
 *    '<S5>/RIGHT_LIMIT'
 */
void controller_autogen_LEFT_LIMIT(real32_T rtu_motSpeed, real32_T
  rtu_magCurrent, real32_T rtu_DCbusVoltage, real32_T rtu_maxBatCurrent,
  real32_T rtu_maxMotCurrent, real_T rtu_maxMotTorque, real32_T *rty_TorqueLimit)
{
  real32_T a;
  real32_T b_a;
  b_a = fmaxf(rtu_magCurrent, 0.0F);
  a = fminf(rtu_maxBatCurrent, rtu_maxMotCurrent);
  *rty_TorqueLimit = fmaxf(sqrtf(a * a - b_a * b_a), 0.0F) * rtu_DCbusVoltage /
    (fmaxf(rtu_motSpeed, 1.0F) * 3.14159274F / 30.0F);
  *rty_TorqueLimit = fminf(fmaxf(*rty_TorqueLimit, 0.0F), (real32_T)
    rtu_maxMotTorque);
}

/* Model step function */
void controller_autogen_step(void)
{
  real32_T rtb_Gain;
  real32_T rtb_TorqueLimit;
  real32_T rtb_TorqueLimit_j;
  boolean_T rtb_NOT_g;
  boolean_T rtb_NOT_j;
  boolean_T rtb_b_DriverInterfaceError;

  /* Chart: '<S3>/Chart' incorporates:
   *  Delay: '<S3>/Delay'
   *  Delay: '<S3>/Delay1'
   *  Delay: '<S3>/Delay2'
   */
  if (controller_autogen_DW.is_active_c3_governor_lib == 0U) {
    controller_autogen_DW.is_active_c3_governor_lib = 1U;
    controller_autogen_DW.is_c3_governor_lib = controlle_IN_Initialize_outputs;
    controller_autogen_B.GOV_e_miCmd = CMD_INIT;
    controller_autogen_B.GOV_e_diCmd = DI_CMD_INIT;
    controller_autogen_DW.motorStartCount = 0U;
  } else {
    switch (controller_autogen_DW.is_c3_governor_lib) {
     case controlle_IN_Initialize_outputs:
      controller_autogen_B.GOV_e_diCmd = DI_CMD_INIT;
      controller_autogen_DW.is_c3_governor_lib = controller_autogen_IN_STARTUP;
      controller_autogen_DW.is_STARTUP = controller_autoge_IN_HV_startup;
      break;

     case controller_autogen_IN_RUNNING:
      if (controller_autogen_DW.Delay_DSTATE_f == ERR_STARTUP) {
        controller_autogen_DW.is_c3_governor_lib =
          controller_aut_IN_RUNNING_ERROR;
        controller_autogen_DW.is_RUNNING_ERROR = controller_auto_IN_HV_run_error;
        controller_autogen_B.GOV_e_diCmd = SYSTEM_ERROR;
      } else if (controller_autogen_DW.Delay1_DSTATE == MI_STS_ERROR) {
        controller_autogen_DW.is_c3_governor_lib =
          controller_aut_IN_RUNNING_ERROR;
        controller_autogen_DW.is_RUNNING_ERROR = controller_a_IN_Motor_run_error;
        controller_autogen_B.GOV_e_diCmd = SYSTEM_ERROR;
      }
      break;

     case controller_aut_IN_RUNNING_ERROR:
      if (controller_autogen_DW.is_RUNNING_ERROR ==
          controller_auto_IN_HV_run_error) {
        controller_autogen_B.GOV_e_diCmd = SYSTEM_ERROR;
      } else {
        /* case IN_Motor_run_error: */
        controller_autogen_B.GOV_e_diCmd = SYSTEM_ERROR;
      }
      break;

     case controller_autogen_IN_STARTUP:
      {
        if (controller_autogen_DW.Delay_DSTATE_f == ERR_STARTUP) {
          controller_autogen_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_c;
          controller_autogen_DW.is_c3_governor_lib =
            controller_aut_IN_STARTUP_ERROR;
          controller_autogen_DW.is_STARTUP_ERROR =
            controller__IN_HV_startup_error;
        } else if (controller_autogen_DW.Delay2_DSTATE == DI_ERROR) {
          controller_autogen_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_c;
          controller_autogen_DW.is_c3_governor_lib =
            controller_aut_IN_STARTUP_ERROR;
          controller_autogen_DW.is_STARTUP_ERROR =
            contro_IN_DriverInterface_Error;
        } else if (controller_autogen_DW.Delay1_DSTATE == MI_STS_ERROR) {
          if (controller_autogen_DW.motorStartCount >= 5) {
            controller_autogen_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_c;
            controller_autogen_DW.is_c3_governor_lib =
              controller_aut_IN_STARTUP_ERROR;
            controller_autogen_DW.is_STARTUP_ERROR =
              controller_aut_IN_Motor_faulted;
            controller_autogen_B.GOV_e_miCmd = CMD_SHUTDOWN;
          } else {
            controller_autogen_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_c;
            controller_autogen_DW.is_c3_governor_lib =
              controller_aut_IN_STARTUP_ERROR;
            controller_autogen_DW.is_STARTUP_ERROR =
              controller_autogen_IN_Err_reset;
          }
        } else {
          switch (controller_autogen_DW.is_STARTUP) {
           case contro_IN_Command_motor_startup:
            if ((controller_autogen_DW.Delay1_DSTATE == RUNNING) &&
                (controller_autogen_DW.Delay2_DSTATE == DRV_START_REQ)) {
              controller_autogen_DW.is_STARTUP = controller_IN_Send_ReadyToDrive;
              controller_autogen_B.GOV_e_diCmd = READY_TO_DRIVE;
            }
            break;

           case controller_autoge_IN_HV_startup:
            {
              if (controller_autogen_DW.Delay_DSTATE_f == BM_RUNNING) {
                uint32_T tmp;
                controller_autogen_DW.is_STARTUP =
                  contro_IN_Command_motor_startup;
                controller_autogen_B.GOV_e_miCmd = CMD_STARTUP;
                tmp = controller_autogen_DW.motorStartCount + 1U;
                if (controller_autogen_DW.motorStartCount + 1U > 65535U) {
                  tmp = 65535U;
                }

                controller_autogen_DW.motorStartCount = (uint16_T)tmp;
              }
            }
            break;

           default:
            /* case IN_Send_ReadyToDrive: */
            controller_autogen_B.GOV_e_diCmd = READY_TO_DRIVE;
            if (controller_autogen_DW.Delay2_DSTATE == DI_RUNNING) {
              controller_autogen_DW.is_STARTUP = controller_IN_NO_ACTIVE_CHILD_c;
              controller_autogen_DW.is_c3_governor_lib =
                controller_autogen_IN_RUNNING;
            }
            break;
          }
        }
      }
      break;

     default:
      /* case IN_STARTUP_ERROR: */
      switch (controller_autogen_DW.is_STARTUP_ERROR) {
       case contro_IN_DriverInterface_Error:
       case controller__IN_HV_startup_error:
        break;

       case controller_autogen_IN_Err_reset:
        if (controller_autogen_DW.Delay1_DSTATE == OFF) {
          controller_autogen_DW.is_STARTUP_ERROR =
            controller_IN_NO_ACTIVE_CHILD_c;
          controller_autogen_DW.is_c3_governor_lib =
            controller_autogen_IN_STARTUP;
          controller_autogen_DW.is_STARTUP = controller_autoge_IN_HV_startup;
        } else {
          controller_autogen_B.GOV_e_miCmd = ERR_RESET;
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

  /* Logic: '<S11>/NOT' incorporates:
   *  Constant: '<S11>/LowerPotentiometerLimit1'
   *  Constant: '<S11>/UpperPotentiometerLimit1'
   *  Inport: '<Root>/DI_V_AccelPedalPos1'
   *  Logic: '<S15>/FixPt Logical Operator'
   *  RelationalOperator: '<S15>/Lower Test'
   *  RelationalOperator: '<S15>/Upper Test'
   */
  rtb_NOT_g = ((controller_autogen_U.DI_V_AccelPedalPos1 < 0) ||
               (controller_autogen_U.DI_V_AccelPedalPos1 > 4095));

  /* Logic: '<S13>/NOT' incorporates:
   *  Constant: '<S13>/LowerPotentiometerLimit1'
   *  Constant: '<S13>/UpperPotentiometerLimit1'
   *  Inport: '<Root>/DI_V_BrakePedalPos'
   *  Logic: '<S19>/FixPt Logical Operator'
   *  RelationalOperator: '<S19>/Lower Test'
   *  RelationalOperator: '<S19>/Upper Test'
   */
  rtb_NOT_j = ((controller_autogen_U.DI_V_BrakePedalPos < 0) ||
               (controller_autogen_U.DI_V_BrakePedalPos > 4095));

  /* Logic: '<S2>/b_DriverInterfaceError' incorporates:
   *  Constant: '<S12>/LowerPotentiometerLimit1'
   *  Constant: '<S12>/UpperPotentiometerLimit1'
   *  Constant: '<S14>/LowerPotentiometerLimit1'
   *  Constant: '<S14>/UpperPotentiometerLimit1'
   *  Inport: '<Root>/DI_V_AccelPedalPos2'
   *  Inport: '<Root>/DI_V_SteeringAngle'
   *  Logic: '<S12>/NOT'
   *  Logic: '<S14>/NOT'
   *  Logic: '<S17>/FixPt Logical Operator'
   *  Logic: '<S21>/FixPt Logical Operator'
   *  Logic: '<S2>/AND'
   *  RelationalOperator: '<S17>/Lower Test'
   *  RelationalOperator: '<S17>/Upper Test'
   *  RelationalOperator: '<S21>/Lower Test'
   *  RelationalOperator: '<S21>/Upper Test'
   */
  rtb_b_DriverInterfaceError = ((rtb_NOT_g &&
    ((controller_autogen_U.DI_V_AccelPedalPos2 < 0) ||
     (controller_autogen_U.DI_V_AccelPedalPos2 > 4095))) || rtb_NOT_j ||
    ((controller_autogen_U.DI_V_SteeringAngle < 0) ||
     (controller_autogen_U.DI_V_SteeringAngle > 4095)));

  /* Gain: '<S20>/Gain' incorporates:
   *  DataTypeConversion: '<S13>/Data Type Conversion1'
   *  Inport: '<Root>/DI_V_BrakePedalPos'
   *  Product: '<S20>/Divide'
   *  Sum: '<S20>/Subtract1'
   */
  rtb_Gain = ((real32_T)controller_autogen_U.DI_V_BrakePedalPos -
              controller_autogen_ConstB.DataTypeConversion2_b) /
    controller_autogen_ConstB.range_i * 100.0F;

  /* Chart: '<S2>/Chart' incorporates:
   *  Delay: '<S3>/Delay2'
   *  Inport: '<Root>/DI_b_DriverButton'
   */
  if (controller_autogen_DW.temporalCounter_i1 < 15U) {
    controller_autogen_DW.temporalCounter_i1++;
  }

  if (controller_autogen_DW.is_active_c3_driver_interface_l == 0U) {
    controller_autogen_DW.is_active_c3_driver_interface_l = 1U;
    controller_autogen_DW.is_c3_driver_interface_lib =
      controller_autogen_IN_INIT;
    controller_autogen_DW.Delay2_DSTATE = DI_STS_INIT;
    controller_autogen_B.b_ReadyToDrive = false;

    /* Outport: '<Root>/DI_b_driverSpeaker' incorporates:
     *  Delay: '<S3>/Delay2'
     */
    controller_autogen_Y.DI_b_driverSpeaker = false;
  } else {
    switch (controller_autogen_DW.is_c3_driver_interface_lib) {
     case controller_autogen_IN_DI_error:
      controller_autogen_DW.Delay2_DSTATE = DI_ERROR;
      break;

     case controller_autoge_IN_DI_running:
      if (rtb_b_DriverInterfaceError) {
        controller_autogen_DW.is_Ready_to_drive =
          controller_IN_NO_ACTIVE_CHILD_c;
        controller_autogen_DW.is_DI_running = controller_IN_NO_ACTIVE_CHILD_c;
        controller_autogen_DW.is_c3_driver_interface_lib =
          controller_autogen_IN_DI_error;
        controller_autogen_DW.Delay2_DSTATE = DI_ERROR;
      } else {
        switch (controller_autogen_DW.is_DI_running) {
         case contr_IN_Driver_requested_start:
          controller_autogen_DW.Delay2_DSTATE = DRV_START_REQ;
          if (controller_autogen_B.GOV_e_diCmd == READY_TO_DRIVE) {
            controller_autogen_DW.is_DI_running =
              controller_au_IN_Ready_to_drive;
            controller_autogen_B.b_ReadyToDrive = true;
            controller_autogen_DW.Delay2_DSTATE = DI_RUNNING;
            controller_autogen_DW.is_Ready_to_drive =
              controller_autoge_IN_SpeakerOn_;
            controller_autogen_DW.temporalCounter_i1 = 0U;

            /* Outport: '<Root>/DI_b_driverSpeaker' */
            controller_autogen_Y.DI_b_driverSpeaker = true;
          }
          break;

         case controller_au_IN_Ready_to_drive:
          controller_autogen_B.b_ReadyToDrive = true;
          controller_autogen_DW.Delay2_DSTATE = DI_RUNNING;
          if (controller_autogen_B.GOV_e_diCmd == SYSTEM_ERROR) {
            controller_autogen_DW.is_Ready_to_drive =
              controller_IN_NO_ACTIVE_CHILD_c;
            controller_autogen_DW.is_DI_running =
              controller_IN_NO_ACTIVE_CHILD_c;
            controller_autogen_DW.is_c3_driver_interface_lib =
              controller__IN_Vehicle_coasting;
            controller_autogen_B.b_ReadyToDrive = false;
            controller_autogen_DW.Delay2_DSTATE = DI_IDLE;
          } else if (controller_autogen_DW.is_Ready_to_drive ==
                     controller_autoge_IN_SpeakerOff) {
            /* Outport: '<Root>/DI_b_driverSpeaker' */
            controller_autogen_Y.DI_b_driverSpeaker = false;
          } else {
            /* Outport: '<Root>/DI_b_driverSpeaker' */
            /* case IN_SpeakerOn_: */
            controller_autogen_Y.DI_b_driverSpeaker = true;
            if (controller_autogen_DW.temporalCounter_i1 >= 10U) {
              controller_autogen_DW.is_Ready_to_drive =
                controller_autoge_IN_SpeakerOff;

              /* Outport: '<Root>/DI_b_driverSpeaker' */
              controller_autogen_Y.DI_b_driverSpeaker = false;
            }
          }
          break;

         default:
          /* case IN_Waiting_for_driver: */
          controller_autogen_DW.Delay2_DSTATE = WAITING_FOR_DRVR;
          if ((controller_autogen_U.DI_b_DriverButton == 1.0) && (rtb_Gain >
               50.0F)) {
            controller_autogen_DW.is_DI_running =
              contr_IN_Driver_requested_start;
            controller_autogen_DW.Delay2_DSTATE = DRV_START_REQ;
          }
          break;
        }
      }
      break;

     case controller_autogen_IN_INIT:
      controller_autogen_B.b_ReadyToDrive = false;

      /* Outport: '<Root>/DI_b_driverSpeaker' */
      controller_autogen_Y.DI_b_driverSpeaker = false;
      controller_autogen_DW.is_c3_driver_interface_lib =
        controller_autoge_IN_DI_running;
      controller_autogen_DW.is_DI_running = controlle_IN_Waiting_for_driver;
      controller_autogen_DW.Delay2_DSTATE = WAITING_FOR_DRVR;
      break;

     default:
      /* case IN_Vehicle_coasting: */
      controller_autogen_B.b_ReadyToDrive = false;
      controller_autogen_DW.Delay2_DSTATE = DI_IDLE;
      break;
    }
  }

  /* End of Chart: '<S2>/Chart' */

  /* MATLAB Function: '<S5>/LEFT_LIMIT' incorporates:
   *  Constant: '<S5>/Vbat'
   *  DataTypeConversion: '<S5>/Cast To Single2'
   *  DataTypeConversion: '<S5>/Cast To Single3'
   *  Inport: '<Root>/AMK_ActualVelocity_L'
   *  Inport: '<Root>/AMK_MagnetizingCurrent_L'
   */
  controller_autogen_LEFT_LIMIT((real32_T)
    controller_autogen_U.AMK_ActualVelocity_L, (real32_T)
    controller_autogen_U.AMK_MagnetizingCurrent_L, 600.0F,
    controller_autogen_ConstB.Gain4, 0.0F, 0.0, &rtb_TorqueLimit_j);

  /* MATLAB Function: '<S5>/RIGHT_LIMIT' incorporates:
   *  Constant: '<S5>/Vbat'
   *  DataTypeConversion: '<S5>/Cast To Single'
   *  DataTypeConversion: '<S5>/Cast To Single1'
   *  Inport: '<Root>/AMK_ActualVelocity_R'
   *  Inport: '<Root>/AMK_MagnetizingCurrent_R'
   */
  controller_autogen_LEFT_LIMIT((real32_T)
    controller_autogen_U.AMK_ActualVelocity_R, (real32_T)
    controller_autogen_U.AMK_MagnetizingCurrent_R, 600.0F,
    controller_autogen_ConstB.Gain1, 0.0F, 0.0, &rtb_TorqueLimit);

  /* Switch: '<S2>/Switch2' incorporates:
   *  Constant: '<S2>/Constant1'
   */
  if (rtb_NOT_j) {
    rtb_Gain = 0.0F;
  }

  /* Switch: '<S5>/Switch2' incorporates:
   *  Constant: '<S5>/Constant2'
   *  Gain: '<S5>/Gain2'
   *  If: '<S2>/If'
   *  Logic: '<S2>/NOT'
   *  Logic: '<S2>/OR1'
   *  Lookup_n-D: '<S2>/AccelPedalPos1 LUT'
   *  Switch: '<S2>/Switch2'
   */
  if (rtb_Gain > 0.0F) {
    rtb_Gain = 0.0F;
  } else {
    if ((!controller_autogen_B.b_ReadyToDrive) || rtb_b_DriverInterfaceError) {
      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      /* If: '<S2>/If' incorporates:
       *  Constant: '<S2>/Constant'
       *  SignalConversion generated from: '<S8>/In1'
       */
      rtb_Gain = 0.0F;

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
    } else if (rtb_NOT_g) {
      /* If: '<S2>/If' incorporates:
       *  DataTypeConversion: '<S12>/Data Type Conversion1'
       *  Gain: '<S18>/Gain'
       *  Inport: '<Root>/DI_V_AccelPedalPos2'
       *  Product: '<S18>/Divide'
       *  Sum: '<S18>/Subtract1'
       */
      rtb_Gain = ((real32_T)controller_autogen_U.DI_V_AccelPedalPos2 -
                  controller_autogen_ConstB.DataTypeConversion2_e) /
        controller_autogen_ConstB.range_l * 100.0F;
    } else {
      /* If: '<S2>/If' incorporates:
       *  DataTypeConversion: '<S11>/Data Type Conversion1'
       *  Gain: '<S16>/Gain'
       *  Inport: '<Root>/DI_V_AccelPedalPos1'
       *  Product: '<S16>/Divide'
       *  Sum: '<S16>/Subtract1'
       */
      rtb_Gain = ((real32_T)controller_autogen_U.DI_V_AccelPedalPos1 -
                  controller_autogen_ConstB.DataTypeConversion2) /
        controller_autogen_ConstB.range * 100.0F;
    }

    rtb_Gain = 0.01F * look1_iflf_binlcpw(rtb_Gain,
      controller_autogen_ConstP.pooled2, controller_autogen_ConstP.pooled2, 20U);
  }

  /* End of Switch: '<S5>/Switch2' */

  /* Product: '<S5>/Divide' incorporates:
   *  MinMax: '<S5>/T_globalTorqLimit'
   */
  rtb_Gain *= fminf(rtb_TorqueLimit_j, rtb_TorqueLimit);

  /* Chart: '<S4>/RIGHT_MOTOR' incorporates:
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
   *  Product: '<S5>/TorqVectoringFactor'
   */
  controller_autogen_LEFT_MOTOR(controller_autogen_B.GOV_e_miCmd,
    controller_autogen_U.AMK_bSystemReady_R, controller_autogen_U.AMK_bError_R,
    controller_autogen_U.AMK_bQuitDcOn_R, controller_autogen_U.AMK_bDcOn_R,
    controller_autogen_U.AMK_bQuitInverterOn_R,
    controller_autogen_U.AMK_bInverterOn_R, 0.0F, rtb_Gain, 0.0F,
    &controller_autogen_B.MI_motorStatus,
    &controller_autogen_Y.AMK_bInverterOn_tx_R,
    &controller_autogen_Y.AMK_bDcOn_tx_R, &controller_autogen_Y.AMK_bEnable_R,
    &controller_autogen_Y.AMK_bErrorReset_R,
    &controller_autogen_Y.AMK_TargetVelocity_R,
    &controller_autogen_Y.AMK_TorqueLimitPositiv_R,
    &controller_autogen_Y.AMK_TorqueLimitNegativ_R,
    &controller_autogen_DW.sf_RIGHT_MOTOR);

  /* Chart: '<S4>/LEFT_MOTOR' incorporates:
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
   *  Product: '<S5>/TorqVectoringFactor1'
   */
  controller_autogen_LEFT_MOTOR(controller_autogen_B.GOV_e_miCmd,
    controller_autogen_U.AMK_bSystemReady_L, controller_autogen_U.AMK_bError_L,
    controller_autogen_U.AMK_bQuitDcOn_L, controller_autogen_U.AMK_bDcOn_L,
    controller_autogen_U.AMK_bQuitInverterOn_L,
    controller_autogen_U.AMK_bInverterOn_L, 0.0F, rtb_Gain, 0.0F,
    &controller_autogen_B.MI_motorStatus_h,
    &controller_autogen_Y.AMK_bInverterOn_tx_L,
    &controller_autogen_Y.AMK_bDcOn_tx_L, &controller_autogen_Y.AMK_bEnable_L,
    &controller_autogen_Y.AMK_bErrorReset_L,
    &controller_autogen_Y.AMK_TargetVelocity_L,
    &controller_autogen_Y.AMK_TorqueLimitPositiv_L,
    &controller_autogen_Y.AMK_TorqueLimitNegativ_L,
    &controller_autogen_DW.sf_LEFT_MOTOR);

  /* Chart: '<S1>/Chart' incorporates:
   *  Delay: '<S3>/Delay'
   *  Inport: '<Root>/BM_b_HVnegContactorSts'
   *  Inport: '<Root>/BM_b_HVposContactorSts'
   *  Inport: '<Root>/BM_b_prechrgContactorSts'
   */
  if (controller_autogen_DW.temporalCounter_i1_p < 7U) {
    controller_autogen_DW.temporalCounter_i1_p++;
  }

  if (controller_autogen_DW.is_active_c3_battery_monitor_li == 0U) {
    controller_autogen_DW.is_active_c3_battery_monitor_li = 1U;
    controller_autogen_DW.is_c3_battery_monitor_lib =
      controller_auto_IN_InitialState;
    controller_autogen_DW.Delay_DSTATE_f = BM_INIT;
  } else {
    switch (controller_autogen_DW.is_c3_battery_monitor_lib) {
     case controll_IN_ErrorAllClosedState:
      controller_autogen_DW.Delay_DSTATE_f = ERR_ALL_CLOSED;
      break;

     case controller_a_IN_ErrorHVPositive:
      controller_autogen_DW.Delay_DSTATE_f = ERR_HV_POSITIVE;
      break;

     case IN_ErrorInitializePrechargeStat:
      controller_autogen_DW.Delay_DSTATE_f = ERR_INIT_PRECHARGE;
      break;

     case co_IN_ErrorPrechargeClosedState:
      controller_autogen_DW.Delay_DSTATE_f = ERR_PRECHARGE_CLOSED;
      break;

     case controll_IN_ErrorPrechargeState:
      controller_autogen_DW.Delay_DSTATE_f = ERR_PRECHARGE;
      break;

     case controller_IN_ErrorRunningState:
      controller_autogen_DW.Delay_DSTATE_f = ERR_RUNNING;
      break;

     case controller_IN_ErrorStartupState:
      controller_autogen_DW.Delay_DSTATE_f = ERR_STARTUP;
      break;

     case controller_auto_IN_InitialState:
      controller_autogen_DW.Delay_DSTATE_f = BM_INIT;
      if ((controller_autogen_U.BM_b_prechrgContactorSts == 0.0) &&
          (controller_autogen_U.BM_b_HVnegContactorSts == 0.0) &&
          (controller_autogen_U.BM_b_HVposContactorSts == 0.0)) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          controller_aut_IN_StartupState1;
        controller_autogen_DW.Delay_DSTATE_f = BM_IDLE;
      } else if ((controller_autogen_U.BM_b_prechrgContactorSts == 1.0) &&
                 (controller_autogen_U.BM_b_HVnegContactorSts == 0.0) &&
                 (controller_autogen_U.BM_b_HVposContactorSts == 0.0)) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          co_IN_ErrorPrechargeClosedState;
        controller_autogen_DW.Delay_DSTATE_f = ERR_PRECHARGE_CLOSED;
      } else if ((controller_autogen_U.BM_b_prechrgContactorSts == 1.0) &&
                 (controller_autogen_U.BM_b_HVnegContactorSts == 1.0) &&
                 (controller_autogen_U.BM_b_HVposContactorSts == 1.0)) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          controll_IN_ErrorAllClosedState;
        controller_autogen_DW.Delay_DSTATE_f = ERR_ALL_CLOSED;
      } else if ((controller_autogen_U.BM_b_prechrgContactorSts == 0.0) &&
                 (controller_autogen_U.BM_b_HVnegContactorSts == 0.0) &&
                 (controller_autogen_U.BM_b_HVposContactorSts == 1.0)) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          controller_a_IN_ErrorHVPositive;
        controller_autogen_DW.Delay_DSTATE_f = ERR_HV_POSITIVE;
      } else if ((controller_autogen_U.BM_b_prechrgContactorSts == 1.0) &&
                 (controller_autogen_U.BM_b_HVnegContactorSts == 1.0) &&
                 (controller_autogen_U.BM_b_HVposContactorSts == 0.0)) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          controller_au_IN_PrechargeState;
        controller_autogen_DW.temporalCounter_i1_p = 0U;
        controller_autogen_DW.Delay_DSTATE_f = PRECHARGE;
      } else if ((controller_autogen_U.BM_b_prechrgContactorSts == 0.0) &&
                 (controller_autogen_U.BM_b_HVnegContactorSts == 1.0) &&
                 (controller_autogen_U.BM_b_HVposContactorSts == 1.0)) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          controller_auto_IN_RunningState;
        controller_autogen_DW.temporalCounter_i1_p = 0U;
        controller_autogen_DW.Delay_DSTATE_f = BM_RUNNING;
      }
      break;

     case con_IN_InitializePrechargeState:
      controller_autogen_DW.Delay_DSTATE_f = INIT_PRECHARGE;
      if ((controller_autogen_U.BM_b_prechrgContactorSts == 1.0) &&
          (controller_autogen_U.BM_b_HVnegContactorSts == 1.0) &&
          (controller_autogen_U.BM_b_HVposContactorSts == 1.0)) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          controller_au_IN_PrechargeState;
        controller_autogen_DW.temporalCounter_i1_p = 0U;
        controller_autogen_DW.Delay_DSTATE_f = PRECHARGE;
      } else if (controller_autogen_DW.temporalCounter_i1_p >= 5U) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          IN_ErrorInitializePrechargeStat;
        controller_autogen_DW.Delay_DSTATE_f = ERR_INIT_PRECHARGE;
      }
      break;

     case controller_au_IN_PrechargeState:
      controller_autogen_DW.Delay_DSTATE_f = PRECHARGE;
      if ((controller_autogen_U.BM_b_prechrgContactorSts == 0.0) &&
          (controller_autogen_U.BM_b_HVnegContactorSts == 1.0) &&
          (controller_autogen_U.BM_b_HVposContactorSts == 1.0)) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          controller_auto_IN_RunningState;
        controller_autogen_DW.temporalCounter_i1_p = 0U;
        controller_autogen_DW.Delay_DSTATE_f = BM_RUNNING;
      } else if (controller_autogen_DW.temporalCounter_i1_p >= 5U) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          controll_IN_ErrorPrechargeState;
        controller_autogen_DW.Delay_DSTATE_f = ERR_PRECHARGE;
      }
      break;

     case controller_auto_IN_RunningState:
      controller_autogen_DW.Delay_DSTATE_f = BM_RUNNING;
      if ((controller_autogen_U.BM_b_prechrgContactorSts == 0.0) &&
          (controller_autogen_U.BM_b_HVnegContactorSts == 1.0) &&
          (controller_autogen_U.BM_b_HVposContactorSts == 1.0)) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          controller_auto_IN_RunningState;
        controller_autogen_DW.temporalCounter_i1_p = 0U;
        controller_autogen_DW.Delay_DSTATE_f = BM_RUNNING;
      } else if (controller_autogen_DW.temporalCounter_i1_p >= 5U) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          controller_IN_ErrorRunningState;
        controller_autogen_DW.Delay_DSTATE_f = ERR_RUNNING;
      }
      break;

     case controller_auto_IN_StartupState:
      controller_autogen_DW.Delay_DSTATE_f = BM_STARTUP;
      if ((controller_autogen_U.BM_b_prechrgContactorSts == 1.0) &&
          (controller_autogen_U.BM_b_HVnegContactorSts == 1.0) &&
          (controller_autogen_U.BM_b_HVposContactorSts == 0.0)) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          con_IN_InitializePrechargeState;
        controller_autogen_DW.temporalCounter_i1_p = 0U;
        controller_autogen_DW.Delay_DSTATE_f = INIT_PRECHARGE;
      } else if (controller_autogen_DW.temporalCounter_i1_p >= 5U) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          controller_IN_ErrorStartupState;
        controller_autogen_DW.Delay_DSTATE_f = ERR_STARTUP;
      }
      break;

     default:
      /* case IN_StartupState1: */
      controller_autogen_DW.Delay_DSTATE_f = BM_IDLE;
      if ((controller_autogen_U.BM_b_prechrgContactorSts == 0.0) &&
          (controller_autogen_U.BM_b_HVnegContactorSts == 1.0) &&
          (controller_autogen_U.BM_b_HVposContactorSts == 0.0)) {
        controller_autogen_DW.is_c3_battery_monitor_lib =
          controller_auto_IN_StartupState;
        controller_autogen_DW.temporalCounter_i1_p = 0U;
        controller_autogen_DW.Delay_DSTATE_f = BM_STARTUP;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* Switch: '<S4>/overallMotorState' incorporates:
   *  Delay: '<S4>/Delay'
   *  RelationalOperator: '<S4>/GreaterThan'
   */
  if (controller_autogen_B.MI_motorStatus_h ==
      controller_autogen_B.MI_motorStatus) {
    controller_autogen_DW.Delay_DSTATE = controller_autogen_B.MI_motorStatus_h;
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
  if ((controller_autogen_B.MI_motorStatus == MI_STS_ERROR) ||
      (controller_autogen_B.MI_motorStatus_h == MI_STS_ERROR)) {
    controller_autogen_DW.Delay1_DSTATE = MI_STS_ERROR;
  } else {
    controller_autogen_DW.Delay1_DSTATE = controller_autogen_DW.Delay_DSTATE;
  }

  /* End of Switch: '<S4>/Switch' */
}

/* Model initialize function */
void controller_autogen_initialize(void)
{
  /* InitializeConditions for Delay: '<S4>/Delay' */
  controller_autogen_DW.Delay_DSTATE = OFF;

  /* SystemInitialize for Chart: '<S4>/RIGHT_MOTOR' incorporates:
   *  Outport: '<Root>/AMK_TargetVelocity_R'
   *  Outport: '<Root>/AMK_TorqueLimitNegativ_R'
   *  Outport: '<Root>/AMK_TorqueLimitPositiv_R'
   *  Outport: '<Root>/AMK_bDcOn_tx_R'
   *  Outport: '<Root>/AMK_bEnable_R'
   *  Outport: '<Root>/AMK_bErrorReset_R'
   *  Outport: '<Root>/AMK_bInverterOn_tx_R'
   */
  controller_auto_LEFT_MOTOR_Init(&controller_autogen_B.MI_motorStatus,
    &controller_autogen_Y.AMK_bInverterOn_tx_R,
    &controller_autogen_Y.AMK_bDcOn_tx_R, &controller_autogen_Y.AMK_bEnable_R,
    &controller_autogen_Y.AMK_bErrorReset_R,
    &controller_autogen_Y.AMK_TargetVelocity_R,
    &controller_autogen_Y.AMK_TorqueLimitPositiv_R,
    &controller_autogen_Y.AMK_TorqueLimitNegativ_R);

  /* SystemInitialize for Chart: '<S4>/LEFT_MOTOR' incorporates:
   *  Outport: '<Root>/AMK_TargetVelocity_L'
   *  Outport: '<Root>/AMK_TorqueLimitNegativ_L'
   *  Outport: '<Root>/AMK_TorqueLimitPositiv_L'
   *  Outport: '<Root>/AMK_bDcOn_tx_L'
   *  Outport: '<Root>/AMK_bEnable_L'
   *  Outport: '<Root>/AMK_bErrorReset_L'
   *  Outport: '<Root>/AMK_bInverterOn_tx_L'
   */
  controller_auto_LEFT_MOTOR_Init(&controller_autogen_B.MI_motorStatus_h,
    &controller_autogen_Y.AMK_bInverterOn_tx_L,
    &controller_autogen_Y.AMK_bDcOn_tx_L, &controller_autogen_Y.AMK_bEnable_L,
    &controller_autogen_Y.AMK_bErrorReset_L,
    &controller_autogen_Y.AMK_TargetVelocity_L,
    &controller_autogen_Y.AMK_TorqueLimitPositiv_L,
    &controller_autogen_Y.AMK_TorqueLimitNegativ_L);
}

/* Model terminate function */
void controller_autogen_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
