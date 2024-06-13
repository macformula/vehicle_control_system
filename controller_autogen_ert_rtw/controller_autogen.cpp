//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: controller_autogen.cpp
//
// Code generated for Simulink model 'controller_autogen'.
//
// Model version                  : 1.91
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Thu Jun 13 16:00:17 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-M
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "controller_autogen.h"
#include "rtwtypes.h"
#include <cmath>
#include <cstring>
#include "controller_autogen_types.h"
#include "controller_autogen_private.h"

// Named constants for Chart: '<S1>/battery_monitor'
const uint8_T controller_IN_StartupSuperstate{ 4U };

const uint8_T controller_a_IN_NO_ACTIVE_CHILD{ 0U };

const uint8_T controller_au_IN_InterruptState{ 2U };

const uint8_T controller_auto_IN_InitialState{ 1U };

const uint8_T controller_autogen_IN_LowSoC{ 3U };

// Named constants for Chart: '<S1>/bm_control'
const uint8_T controll_IN_StartupSuperstate_m{ 2U };

const uint8_T controller_a_IN_Close_precharge{ 3U };

const uint8_T controller_au_IN_Open_precharge{ 4U };

const uint8_T controller_auto_IN_Close_HVneg1{ 1U };

const uint8_T controller_autog_IN_Close_HVpos{ 2U };

const uint8_T controller_autoge_IN_StartupCMD{ 1U };

// Named constants for Chart: '<S2>/driver_interface'
const uint8_T contr_IN_Driver_requested_start{ 1U };

const uint8_T controll_IN_Motor_start_request{ 2U };

const uint8_T controlle_IN_Waiting_for_driver{ 4U };

const uint8_T controller__IN_Vehicle_coasting{ 4U };

const uint8_T controller_au_IN_Ready_to_drive{ 3U };

const uint8_T controller_autoge_IN_DI_running{ 2U };

const uint8_T controller_autoge_IN_SpeakerOff{ 1U };

const uint8_T controller_autoge_IN_SpeakerOn_{ 2U };

const uint8_T controller_autogen_IN_DI_error{ 1U };

const uint8_T controller_autogen_IN_INIT{ 3U };

// Named constants for Chart: '<S3>/governer_stateflow'
const uint8_T contro_IN_Command_motor_startup{ 1U };

const uint8_T contro_IN_DriverInterface_Error{ 1U };

const uint8_T controlle_IN_Initialize_outputs{ 1U };

const uint8_T controller_IN_Send_ReadyToDrive{ 4U };

const uint8_T controller__IN_HV_startup_error{ 3U };

const uint8_T controller__IN_Vehicle_shutdown{ 6U };

const uint8_T controller_a_IN_Motor_run_error{ 2U };

const uint8_T controller_aut_IN_Motor_faulted{ 4U };

const uint8_T controller_aut_IN_RUNNING_ERROR{ 3U };

const uint8_T controller_aut_IN_STARTUP_ERROR{ 5U };

const uint8_T controller_auto_IN_HV_run_error{ 1U };

const uint8_T controller_auto_IN_ReadyToDrive{ 3U };

const uint8_T controller_autoge_IN_HV_startup{ 2U };

const uint8_T controller_autogen_IN_Err_reset{ 2U };

const uint8_T controller_autogen_IN_RUNNING{ 2U };

const uint8_T controller_autogen_IN_STARTUP{ 4U };

// Named constants for Chart: '<S4>/mi_left'
const uint8_T contr_IN_enforceSetpointsZero_b{ 1U };

const uint8_T contr_IN_motorOff_waitingForGov{ 7U };

const uint8_T control_IN_enforceSetpointsZero{ 2U };

const uint8_T controller_IN_AMK_errorDetected{ 1U };

const uint8_T controller__IN_waiting_sysReady{ 4U };

const uint8_T controller_au_IN_AMK_errorReset{ 2U };

const uint8_T controller_auto_IN_AMK_shutdown{ 5U };

const uint8_T controller_auto_IN_toggleEnable{ 3U };

const uint8_T controller_autog_IN_AMK_running{ 4U };

const uint8_T controller_autog_IN_AMK_startup{ 6U };

const uint8_T controller_autog_IN_toggleReset{ 4U };

const uint8_T controller_autoge_IN_toggleDCon{ 3U };

const uint8_T controller_autogen_IN_AMK_ready{ 3U };

const uint8_T controller_autogen_IN_commandOn{ 1U };

const uint8_T controller_autogen_IN_sendReset{ 2U };

// Named constants for Chart: '<S5>/vd_screenshot_check'
const uint8_T controller_autogen_IN_Run{ 1U };

const uint8_T controller_autogen_IN_Stop{ 2U };

real_T look1_binlc(real_T u0, const real_T bp0[], const real_T table[], uint32_T
                   maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  // Column-major Lookup 1-D
  // Search method: 'binary'
  // Use previous index: 'off'
  // Interpolation method: 'Linear point-slope'
  // Extrapolation method: 'Clip'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  // Prelookup - Index and Fraction
  // Index Search method: 'binary'
  // Extrapolation method: 'Clip'
  // Use previous index: 'off'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    // Binary Search
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

  // Column-major Interpolation 1-D
  // Interpolation method: 'Linear point-slope'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Overflow mode: 'wrapping'

  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

real_T look1_binlx(real_T u0, const real_T bp0[], const real_T table[], uint32_T
                   maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  // Column-major Lookup 1-D
  // Search method: 'binary'
  // Use previous index: 'off'
  // Interpolation method: 'Linear point-slope'
  // Extrapolation method: 'Linear'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  // Prelookup - Index and Fraction
  // Index Search method: 'binary'
  // Extrapolation method: 'Linear'
  // Use previous index: 'off'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    // Binary Search
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

  // Column-major Interpolation 1-D
  // Interpolation method: 'Linear point-slope'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Overflow mode: 'wrapping'

  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

// Model step function
void controller_autogen::step()
{
  real_T rtb_VectorConcatenate[11];
  real_T rtb_Max;
  real_T rtb_Merge;
  int32_T rtb_Switch;
  boolean_T rtb_NOT1;
  boolean_T rtb_NOT_dg;
  boolean_T rtb_NOT_i;
  boolean_T rtb_b_DriverInterfaceError;

  // Chart: '<S3>/governer_stateflow' incorporates:
  //   Delay: '<S3>/Delay'
  //   Delay: '<S3>/Delay1'
  //   Delay: '<S3>/Delay2'

  if (controller_autogen_DW.temporalCounter_i1_j < 2047U) {
    controller_autogen_DW.temporalCounter_i1_j = static_cast<uint16_T>
      (controller_autogen_DW.temporalCounter_i1_j + 1U);
  }

  if (controller_autogen_DW.is_active_c8_governor_lib == 0U) {
    controller_autogen_DW.is_active_c8_governor_lib = 1U;
    controller_autogen_DW.is_c8_governor_lib = controlle_IN_Initialize_outputs;
    controller_autogen_DW.temporalCounter_i1_j = 0U;
    controller_autogen_B.GOV_e_govSts = GOV_STATUSES::GOV_INIT;
    controller_autogen_B.GOV_e_diCmd = DI_CMD::DI_CMD_INIT;
    controller_autogen_B.GOV_e_bmCmd = BM_CMD::BM_CMD_INIT;
    controller_autogen_DW.motorStartCount = 0U;
  } else {
    switch (controller_autogen_DW.is_c8_governor_lib) {
     case controlle_IN_Initialize_outputs:
      controller_autogen_B.GOV_e_govSts = GOV_STATUSES::GOV_INIT;
      controller_autogen_B.GOV_e_diCmd = DI_CMD::DI_CMD_INIT;
      controller_autogen_B.GOV_e_bmCmd = BM_CMD::BM_CMD_INIT;
      if ((controller_autogen_DW.temporalCounter_i1_j >= 2000U) &&
          (controller_autogen_DW.Delay2_DSTATE == DI_STATUSES::HV_START_REQ)) {
        controller_autogen_DW.is_c8_governor_lib = controller_autogen_IN_STARTUP;
        controller_autogen_B.GOV_e_govSts = GOV_STATUSES::GOV_STARTUP;
        controller_autogen_DW.is_STARTUP = controller_autoge_IN_HV_startup;
        controller_autogen_B.GOV_e_bmCmd = BM_CMD::HV_STARTUP;
      }
      break;

     case controller_autogen_IN_RUNNING:
      controller_autogen_B.GOV_e_govSts = GOV_STATUSES::GOV_RUNNING;
      if ((controller_autogen_DW.Delay_DSTATE == BM_STATUSES::HVIL_INTERRUPT) ||
          (controller_autogen_DW.Delay_DSTATE == BM_STATUSES::BM_LOW_SOC)) {
        controller_autogen_DW.is_c8_governor_lib =
          controller__IN_Vehicle_shutdown;
        controller_autogen_B.GOV_e_govSts = GOV_STATUSES::GOV_SHUTDOWN;
        controller_autogen_B.GOV_e_miCmd = MI_CMD::CMD_SHUTDOWN;
        controller_autogen_B.GOV_e_diCmd = DI_CMD::DI_SHUTDOWN;
      } else if (controller_autogen_DW.Delay_DSTATE == BM_STATUSES::ERR_RUNNING)
      {
        controller_autogen_DW.is_c8_governor_lib =
          controller_aut_IN_RUNNING_ERROR;
        controller_autogen_DW.is_RUNNING_ERROR = controller_auto_IN_HV_run_error;
        controller_autogen_B.GOV_e_diCmd = DI_CMD::RUN_ERROR;
        controller_autogen_B.GOV_e_govSts = GOV_STATUSES::HV_RUN_ERROR;
      } else if (controller_autogen_DW.Delay1_DSTATE == MI_STATUSES::
                 MI_STS_ERROR) {
        controller_autogen_DW.is_c8_governor_lib =
          controller_aut_IN_RUNNING_ERROR;
        controller_autogen_DW.is_RUNNING_ERROR = controller_a_IN_Motor_run_error;
        controller_autogen_B.GOV_e_diCmd = DI_CMD::RUN_ERROR;
        controller_autogen_B.GOV_e_govSts = GOV_STATUSES::MOTOR_RUN_ERROR;
      }
      break;

     case controller_aut_IN_RUNNING_ERROR:
      if (controller_autogen_DW.is_RUNNING_ERROR ==
          controller_auto_IN_HV_run_error) {
        controller_autogen_B.GOV_e_diCmd = DI_CMD::RUN_ERROR;
        controller_autogen_B.GOV_e_govSts = GOV_STATUSES::HV_RUN_ERROR;
      } else {
        // case IN_Motor_run_error:
        controller_autogen_B.GOV_e_diCmd = DI_CMD::RUN_ERROR;
        controller_autogen_B.GOV_e_govSts = GOV_STATUSES::MOTOR_RUN_ERROR;
      }
      break;

     case controller_autogen_IN_STARTUP:
      {
        controller_autogen_B.GOV_e_govSts = GOV_STATUSES::GOV_STARTUP;
        if (controller_autogen_DW.Delay_DSTATE == BM_STATUSES::HVIL_INTERRUPT) {
          controller_autogen_DW.is_STARTUP = controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c8_governor_lib =
            controller_aut_IN_STARTUP_ERROR;
          controller_autogen_DW.is_STARTUP_ERROR =
            controller__IN_HV_startup_error;
          controller_autogen_B.GOV_e_govSts = GOV_STATUSES::HV_STARTUP_ERROR;
          controller_autogen_B.GOV_e_diCmd = DI_CMD::DI_SHUTDOWN;
        } else if (controller_autogen_DW.Delay2_DSTATE == DI_STATUSES::DI_ERROR)
        {
          controller_autogen_DW.is_STARTUP = controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c8_governor_lib =
            controller_aut_IN_STARTUP_ERROR;
          controller_autogen_DW.is_STARTUP_ERROR =
            contro_IN_DriverInterface_Error;
          controller_autogen_B.GOV_e_govSts = GOV_STATUSES::GOV_DI_ERROR;
        } else if (controller_autogen_DW.Delay1_DSTATE == MI_STATUSES::
                   MI_STS_ERROR) {
          if (controller_autogen_DW.motorStartCount >= 5) {
            controller_autogen_DW.is_STARTUP = controller_a_IN_NO_ACTIVE_CHILD;
            controller_autogen_DW.is_c8_governor_lib =
              controller_aut_IN_STARTUP_ERROR;
            controller_autogen_DW.is_STARTUP_ERROR =
              controller_aut_IN_Motor_faulted;
            controller_autogen_B.GOV_e_miCmd = MI_CMD::CMD_SHUTDOWN;
            controller_autogen_B.GOV_e_govSts = GOV_STATUSES::
              MOTOR_STARTUP_ERROR;
          } else {
            controller_autogen_DW.is_STARTUP = controller_a_IN_NO_ACTIVE_CHILD;
            controller_autogen_DW.is_c8_governor_lib =
              controller_aut_IN_STARTUP_ERROR;
            controller_autogen_DW.is_STARTUP_ERROR =
              controller_autogen_IN_Err_reset;
          }
        } else {
          switch (controller_autogen_DW.is_STARTUP) {
           case contro_IN_Command_motor_startup:
            if (controller_autogen_DW.Delay1_DSTATE == MI_STATUSES::RUNNING) {
              controller_autogen_DW.is_STARTUP = controller_IN_Send_ReadyToDrive;
              controller_autogen_B.GOV_e_diCmd = DI_CMD::READY_TO_DRIVE;
            }
            break;

           case controller_autoge_IN_HV_startup:
            controller_autogen_B.GOV_e_bmCmd = BM_CMD::HV_STARTUP;
            if (controller_autogen_DW.Delay_DSTATE == BM_STATUSES::BM_RUNNING) {
              controller_autogen_DW.is_STARTUP = controller_auto_IN_ReadyToDrive;
              controller_autogen_B.GOV_e_diCmd = DI_CMD::HV_ON;
            }
            break;

           case controller_auto_IN_ReadyToDrive:
            {
              controller_autogen_B.GOV_e_diCmd = DI_CMD::HV_ON;
              if (controller_autogen_DW.Delay2_DSTATE == DI_STATUSES::
                  READY_TO_DRIVE_REQ) {
                uint32_T tmp;
                controller_autogen_DW.is_STARTUP =
                  contro_IN_Command_motor_startup;
                controller_autogen_B.GOV_e_miCmd = MI_CMD::CMD_STARTUP;
                tmp = controller_autogen_DW.motorStartCount + 1U;
                if (controller_autogen_DW.motorStartCount + 1U > 65535U) {
                  tmp = 65535U;
                }

                controller_autogen_DW.motorStartCount = static_cast<uint16_T>
                  (tmp);
              }
            }
            break;

           default:
            // case IN_Send_ReadyToDrive:
            controller_autogen_B.GOV_e_diCmd = DI_CMD::READY_TO_DRIVE;
            if (controller_autogen_DW.Delay2_DSTATE == DI_STATUSES::DI_RUNNING)
            {
              controller_autogen_DW.is_STARTUP = controller_a_IN_NO_ACTIVE_CHILD;
              controller_autogen_DW.is_c8_governor_lib =
                controller_autogen_IN_RUNNING;
              controller_autogen_B.GOV_e_govSts = GOV_STATUSES::GOV_RUNNING;
            }
            break;
          }
        }
      }
      break;

     case controller_aut_IN_STARTUP_ERROR:
      switch (controller_autogen_DW.is_STARTUP_ERROR) {
       case contro_IN_DriverInterface_Error:
        controller_autogen_B.GOV_e_govSts = GOV_STATUSES::GOV_DI_ERROR;
        break;

       case controller_autogen_IN_Err_reset:
        if (controller_autogen_DW.Delay1_DSTATE == MI_STATUSES::OFF) {
          controller_autogen_DW.is_STARTUP_ERROR =
            controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c8_governor_lib =
            controller_autogen_IN_STARTUP;
          controller_autogen_B.GOV_e_govSts = GOV_STATUSES::GOV_STARTUP;
          controller_autogen_DW.is_STARTUP = controller_autoge_IN_HV_startup;
          controller_autogen_B.GOV_e_bmCmd = BM_CMD::HV_STARTUP;
        } else {
          controller_autogen_B.GOV_e_miCmd = MI_CMD::ERR_RESET;
        }
        break;

       case controller__IN_HV_startup_error:
        controller_autogen_B.GOV_e_govSts = GOV_STATUSES::HV_STARTUP_ERROR;
        controller_autogen_B.GOV_e_diCmd = DI_CMD::DI_SHUTDOWN;
        if (controller_autogen_DW.Delay_DSTATE == BM_STATUSES::BM_INIT) {
          controller_autogen_DW.is_STARTUP_ERROR =
            controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c8_governor_lib =
            controlle_IN_Initialize_outputs;
          controller_autogen_DW.temporalCounter_i1_j = 0U;
          controller_autogen_B.GOV_e_govSts = GOV_STATUSES::GOV_INIT;
          controller_autogen_B.GOV_e_diCmd = DI_CMD::DI_CMD_INIT;
          controller_autogen_B.GOV_e_bmCmd = BM_CMD::BM_CMD_INIT;
          controller_autogen_DW.motorStartCount = 0U;
        }
        break;

       default:
        // case IN_Motor_faulted:
        controller_autogen_B.GOV_e_govSts = GOV_STATUSES::MOTOR_STARTUP_ERROR;
        break;
      }
      break;

     default:
      // case IN_Vehicle_shutdown:
      controller_autogen_B.GOV_e_govSts = GOV_STATUSES::GOV_SHUTDOWN;
      controller_autogen_B.GOV_e_diCmd = DI_CMD::DI_SHUTDOWN;
      if (controller_autogen_DW.Delay_DSTATE == BM_STATUSES::BM_INIT) {
        controller_autogen_DW.is_c8_governor_lib =
          controlle_IN_Initialize_outputs;
        controller_autogen_DW.temporalCounter_i1_j = 0U;
        controller_autogen_B.GOV_e_govSts = GOV_STATUSES::GOV_INIT;
        controller_autogen_B.GOV_e_diCmd = DI_CMD::DI_CMD_INIT;
        controller_autogen_B.GOV_e_bmCmd = BM_CMD::BM_CMD_INIT;
        controller_autogen_DW.motorStartCount = 0U;
      }
      break;
    }
  }

  // End of Chart: '<S3>/governer_stateflow'

  // Logic: '<S2>/NOT1' incorporates:
  //   Inport: '<Root>/DI_StartButton'

  rtb_NOT1 = !controller_autogen_U.DI_StartButton;

  // Logic: '<S14>/NOT' incorporates:
  //   Constant: '<S14>/LowerPotentiometerLimit1'
  //   Constant: '<S14>/UpperPotentiometerLimit1'
  //   Inport: '<Root>/DI_FrontBrakePressure'
  //   Logic: '<S19>/FixPt Logical Operator'
  //   RelationalOperator: '<S19>/Lower Test'
  //   RelationalOperator: '<S19>/Upper Test'

  rtb_NOT_i = ((!(controller_autogen_U.DI_FrontBrakePressure >= 0.0)) ||
               (!(controller_autogen_U.DI_FrontBrakePressure <= 1.0)));

  // Logic: '<S15>/NOT' incorporates:
  //   Constant: '<S15>/LowerPotentiometerLimit1'
  //   Constant: '<S15>/UpperPotentiometerLimit1'
  //   Inport: '<Root>/DI_RearBrakePressure'
  //   Logic: '<S20>/FixPt Logical Operator'
  //   RelationalOperator: '<S20>/Lower Test'
  //   RelationalOperator: '<S20>/Upper Test'

  rtb_NOT_dg = ((!(controller_autogen_U.DI_RearBrakePressure >= 0.0)) ||
                (!(controller_autogen_U.DI_RearBrakePressure <= 1.0)));

  // Logic: '<S2>/b_DriverInterfaceError' incorporates:
  //   Abs: '<S8>/Abs'
  //   Constant: '<S12>/LowerPotentiometerLimit1'
  //   Constant: '<S12>/UpperPotentiometerLimit1'
  //   Constant: '<S13>/LowerPotentiometerLimit1'
  //   Constant: '<S13>/UpperPotentiometerLimit1'
  //   Constant: '<S8>/Constant'
  //   Inport: '<Root>/DI_AccelPedalPosition1'
  //   Inport: '<Root>/DI_AccelPedalPosition2'
  //   Logic: '<S12>/NOT'
  //   Logic: '<S13>/NOT'
  //   Logic: '<S17>/FixPt Logical Operator'
  //   Logic: '<S18>/FixPt Logical Operator'
  //   RelationalOperator: '<S17>/Lower Test'
  //   RelationalOperator: '<S17>/Upper Test'
  //   RelationalOperator: '<S18>/Lower Test'
  //   RelationalOperator: '<S18>/Upper Test'
  //   RelationalOperator: '<S8>/GreaterThan'
  //   Sum: '<S8>/Subtract'

  rtb_b_DriverInterfaceError = ((!(controller_autogen_U.DI_AccelPedalPosition1 >=
    0.0)) || (!(controller_autogen_U.DI_AccelPedalPosition1 <= 1.0)) ||
    ((!(controller_autogen_U.DI_AccelPedalPosition2 >= 0.0)) ||
     (!(controller_autogen_U.DI_AccelPedalPosition2 <= 1.0))) || rtb_NOT_i ||
    rtb_NOT_dg || (std::abs(controller_autogen_U.DI_AccelPedalPosition1 -
    controller_autogen_U.DI_AccelPedalPosition2) > 0.1));

  // MinMax: '<S2>/Max' incorporates:
  //   Inport: '<Root>/DI_FrontBrakePressure'
  //   Inport: '<Root>/DI_RearBrakePressure'

  rtb_Max = std::fmax(controller_autogen_U.DI_FrontBrakePressure,
                      controller_autogen_U.DI_RearBrakePressure);

  // Chart: '<S2>/driver_interface' incorporates:
  //   Delay: '<S3>/Delay2'

  if (controller_autogen_DW.temporalCounter_i1_h < 2047U) {
    controller_autogen_DW.temporalCounter_i1_h = static_cast<uint16_T>
      (controller_autogen_DW.temporalCounter_i1_h + 1U);
  }

  if (controller_autogen_DW.is_active_c2_driver_interface_l == 0U) {
    controller_autogen_DW.is_active_c2_driver_interface_l = 1U;
    controller_autogen_DW.is_c2_driver_interface_lib =
      controller_autogen_IN_INIT;
    controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::DI_STS_INIT;
    controller_autogen_B.b_ReadyToDrive = false;

    // Outport: '<Root>/DI_DriverSpeaker' incorporates:
    //   Delay: '<S3>/Delay2'

    controller_autogen_Y.DI_DriverSpeaker = false;
  } else {
    switch (controller_autogen_DW.is_c2_driver_interface_lib) {
     case controller_autogen_IN_DI_error:
      controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::DI_ERROR;
      break;

     case controller_autoge_IN_DI_running:
      if (rtb_b_DriverInterfaceError) {
        controller_autogen_DW.is_Ready_to_drive =
          controller_a_IN_NO_ACTIVE_CHILD;
        controller_autogen_DW.is_DI_running = controller_a_IN_NO_ACTIVE_CHILD;
        controller_autogen_DW.is_c2_driver_interface_lib =
          controller_autogen_IN_DI_error;
        controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::DI_ERROR;
      } else if (controller_autogen_B.GOV_e_diCmd == DI_CMD::DI_SHUTDOWN) {
        controller_autogen_DW.is_Ready_to_drive =
          controller_a_IN_NO_ACTIVE_CHILD;
        controller_autogen_DW.is_DI_running = controller_a_IN_NO_ACTIVE_CHILD;
        controller_autogen_DW.is_c2_driver_interface_lib =
          controller_autogen_IN_INIT;
        controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::DI_STS_INIT;
        controller_autogen_B.b_ReadyToDrive = false;

        // Outport: '<Root>/DI_DriverSpeaker' incorporates:
        //   Delay: '<S3>/Delay2'

        controller_autogen_Y.DI_DriverSpeaker = false;
      } else {
        switch (controller_autogen_DW.is_DI_running) {
         case contr_IN_Driver_requested_start:
          controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::HV_START_REQ;
          if ((controller_autogen_B.GOV_e_diCmd == DI_CMD::HV_ON) && rtb_NOT1) {
            controller_autogen_DW.is_DI_running =
              controll_IN_Motor_start_request;
            controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::
              READY_TO_DRIVE_REQ;
          }
          break;

         case controll_IN_Motor_start_request:
          controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::READY_TO_DRIVE_REQ;
          if ((controller_autogen_B.GOV_e_diCmd == DI_CMD::READY_TO_DRIVE) &&
              (rtb_Max > 0.1)) {
            controller_autogen_DW.is_DI_running =
              controller_au_IN_Ready_to_drive;
            controller_autogen_B.b_ReadyToDrive = true;
            controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::DI_RUNNING;
            controller_autogen_DW.is_Ready_to_drive =
              controller_autoge_IN_SpeakerOn_;
            controller_autogen_DW.temporalCounter_i1_h = 0U;

            // Outport: '<Root>/DI_DriverSpeaker'
            controller_autogen_Y.DI_DriverSpeaker = true;
          }
          break;

         case controller_au_IN_Ready_to_drive:
          controller_autogen_B.b_ReadyToDrive = true;
          controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::DI_RUNNING;
          if (controller_autogen_B.GOV_e_diCmd == DI_CMD::RUN_ERROR) {
            controller_autogen_DW.is_Ready_to_drive =
              controller_a_IN_NO_ACTIVE_CHILD;
            controller_autogen_DW.is_DI_running =
              controller_a_IN_NO_ACTIVE_CHILD;
            controller_autogen_DW.is_c2_driver_interface_lib =
              controller__IN_Vehicle_coasting;
            controller_autogen_B.b_ReadyToDrive = false;
            controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::DI_IDLE;
          } else if (controller_autogen_DW.is_Ready_to_drive ==
                     controller_autoge_IN_SpeakerOff) {
            // Outport: '<Root>/DI_DriverSpeaker'
            controller_autogen_Y.DI_DriverSpeaker = false;
          } else {
            // Outport: '<Root>/DI_DriverSpeaker'
            // case IN_SpeakerOn_:
            controller_autogen_Y.DI_DriverSpeaker = true;
            if (controller_autogen_DW.temporalCounter_i1_h >= 2000U) {
              controller_autogen_DW.is_Ready_to_drive =
                controller_autoge_IN_SpeakerOff;

              // Outport: '<Root>/DI_DriverSpeaker'
              controller_autogen_Y.DI_DriverSpeaker = false;
            }
          }
          break;

         default:
          // case IN_Waiting_for_driver:
          controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::WAITING_FOR_DRVR;
          if (rtb_NOT1) {
            controller_autogen_DW.is_DI_running =
              contr_IN_Driver_requested_start;
            controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::HV_START_REQ;
          }
          break;
        }
      }
      break;

     case controller_autogen_IN_INIT:
      controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::DI_STS_INIT;
      controller_autogen_B.b_ReadyToDrive = false;

      // Outport: '<Root>/DI_DriverSpeaker' incorporates:
      //   Delay: '<S3>/Delay2'

      controller_autogen_Y.DI_DriverSpeaker = false;
      if (controller_autogen_B.GOV_e_diCmd == DI_CMD::DI_CMD_INIT) {
        controller_autogen_DW.is_c2_driver_interface_lib =
          controller_autoge_IN_DI_running;
        controller_autogen_DW.is_DI_running = controlle_IN_Waiting_for_driver;
        controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::WAITING_FOR_DRVR;
      }
      break;

     default:
      // case IN_Vehicle_coasting:
      controller_autogen_B.b_ReadyToDrive = false;
      controller_autogen_DW.Delay2_DSTATE = DI_STATUSES::DI_IDLE;
      break;
    }
  }

  // End of Chart: '<S2>/driver_interface'

  // If: '<S2>/If' incorporates:
  //   Logic: '<S2>/NOT'
  //   Logic: '<S2>/OR1'

  if ((!controller_autogen_B.b_ReadyToDrive) || rtb_b_DriverInterfaceError) {
    // Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
    //   ActionPort: '<S9>/Action Port'

    // SignalConversion generated from: '<S9>/In1' incorporates:
    //   Constant: '<S2>/Constant'

    rtb_Merge = 0.0;

    // End of Outputs for SubSystem: '<S2>/If Action Subsystem'
  } else {
    // Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S10>/Action Port'

    // SignalConversion generated from: '<S10>/In1' incorporates:
    //   Inport: '<Root>/DI_AccelPedalPosition1'
    //   Lookup_n-D: '<S2>/AccelPedalMap'

    rtb_Merge = look1_binlc(controller_autogen_U.DI_AccelPedalPosition1,
      controller_autogen_ConstP.pooled3, controller_autogen_ConstP.pooled3, 1U);

    // End of Outputs for SubSystem: '<S2>/If Action Subsystem1'
  }

  // End of If: '<S2>/If'

  // Switch: '<S2>/Switch2' incorporates:
  //   Constant: '<S2>/Constant1'
  //   Logic: '<S2>/OR'

  if (rtb_NOT_dg || rtb_NOT_i) {
    rtb_Max = 0.0;
  }

  // Lookup_n-D: '<S2>/BrakePedalMap' incorporates:
  //   Switch: '<S2>/Switch2'

  rtb_Max = look1_binlc(rtb_Max, controller_autogen_ConstP.pooled4,
                        controller_autogen_ConstP.pooled4, 20U);

  // Switch: '<S5>/Switch'
  rtb_Switch = (rtb_Max > 0.1);

  // Chart: '<S5>/vd_screenshot_check'
  if (controller_autogen_DW.is_active_c3_controller_autogen == 0U) {
    controller_autogen_DW.is_active_c3_controller_autogen = 1U;
    controller_autogen_DW.is_c3_controller_autogen = controller_autogen_IN_Run;
  } else if (controller_autogen_DW.is_c3_controller_autogen ==
             controller_autogen_IN_Run) {
    if ((rtb_Merge >= 0.25) && (rtb_Switch != 0)) {
      controller_autogen_DW.is_c3_controller_autogen =
        controller_autogen_IN_Stop;
      rtb_Merge = 0.0;
    }

    // case IN_Stop:
  } else if ((rtb_Merge < 0.05) && (rtb_Switch == 0)) {
    controller_autogen_DW.is_c3_controller_autogen = controller_autogen_IN_Run;
  } else {
    rtb_Merge = 0.0;
  }

  // End of Chart: '<S5>/vd_screenshot_check'

  // Lookup_n-D: '<S5>/%pedal to %torque' incorporates:
  //   Product: '<S5>/Product'

  controller_autogen_B.pedaltotorque = look1_binlx(rtb_Merge,
    controller_autogen_ConstP.pedaltotorque_bp01Data,
    controller_autogen_ConstP.pedaltotorque_tableData, 100U);

  // SignalConversion generated from: '<S25>/Vector Concatenate'
  rtb_VectorConcatenate[0] = controller_autogen_B.pedaltotorque;

  // S-Function (sfix_udelay): '<S25>/Tapped Delay'
  std::memcpy(&rtb_VectorConcatenate[1], &controller_autogen_DW.TappedDelay_X[0],
              10U * sizeof(real_T));

  // Sum: '<S25>/Sum of Elements'
  rtb_Merge = -0.0;
  for (rtb_Switch = 0; rtb_Switch < 11; rtb_Switch++) {
    rtb_Merge += rtb_VectorConcatenate[rtb_Switch];
  }

  // Product: '<S25>/Divide' incorporates:
  //   Sum: '<S25>/Sum of Elements'

  rtb_Merge /= 11.0;

  // Chart: '<S4>/mi_right' incorporates:
  //   Inport: '<Root>/AMK1_bDcOn'
  //   Inport: '<Root>/AMK1_bError'
  //   Inport: '<Root>/AMK1_bInverterOn'
  //   Inport: '<Root>/AMK1_bQuitDcOn'
  //   Inport: '<Root>/AMK1_bQuitInverterOn'
  //   Inport: '<Root>/AMK1_bWarn'

  if (controller_autogen_DW.temporalCounter_i1 < 511U) {
    controller_autogen_DW.temporalCounter_i1 = static_cast<uint16_T>
      (controller_autogen_DW.temporalCounter_i1 + 1U);
  }

  if (controller_autogen_DW.is_active_c10_controller_autoge == 0U) {
    controller_autogen_DW.is_active_c10_controller_autoge = 1U;
    controller_autogen_DW.is_c10_controller_autogen =
      contr_IN_motorOff_waitingForGov;
    controller_autogen_B.MI_motorStatus = MI_STATUSES::OFF;

    // Outport: '<Root>/AMK1_bInverterOn_tx'
    controller_autogen_Y.AMK1_bInverterOn_tx = 0U;

    // Outport: '<Root>/AMK1_bDcOn_tx'
    controller_autogen_Y.AMK1_bDcOn_tx = 0U;

    // Outport: '<Root>/AMK1_bEnable'
    controller_autogen_Y.AMK1_bEnable = 0U;

    // Outport: '<Root>/AMK1_bErrorReset'
    controller_autogen_Y.AMK1_bErrorReset = 0U;

    // Outport: '<Root>/AMK1_TargetVelocity'
    controller_autogen_Y.AMK1_TargetVelocity = 0.0F;

    // Outport: '<Root>/AMK1_TorqueLimitPositiv'
    controller_autogen_Y.AMK1_TorqueLimitPositiv = 0.0F;

    // Outport: '<Root>/AMK1_TorqueLimitNegativ'
    controller_autogen_Y.AMK1_TorqueLimitNegativ = 0.0F;
    controller_autogen_B.MI_InverterEn = 0.0;
  } else {
    switch (controller_autogen_DW.is_c10_controller_autogen) {
     case controller_IN_AMK_errorDetected:
      if (controller_autogen_B.GOV_e_miCmd == MI_CMD::ERR_RESET) {
        controller_autogen_DW.is_c10_controller_autogen =
          controller_au_IN_AMK_errorReset;
        controller_autogen_DW.is_AMK_errorReset =
          contr_IN_enforceSetpointsZero_b;

        // Outport: '<Root>/AMK1_TargetVelocity'
        controller_autogen_Y.AMK1_TargetVelocity = 0.0F;

        // Outport: '<Root>/AMK1_TorqueLimitPositiv'
        controller_autogen_Y.AMK1_TorqueLimitPositiv = 0.0F;

        // Outport: '<Root>/AMK1_TorqueLimitNegativ'
        controller_autogen_Y.AMK1_TorqueLimitNegativ = 0.0F;

        // Outport: '<Root>/AMK1_bInverterOn_tx'
        controller_autogen_Y.AMK1_bInverterOn_tx = 0U;
      }
      break;

     case controller_au_IN_AMK_errorReset:
      switch (controller_autogen_DW.is_AMK_errorReset) {
       case contr_IN_enforceSetpointsZero_b:
        // Outport: '<Root>/AMK1_bInverterOn_tx'
        controller_autogen_Y.AMK1_bInverterOn_tx = 0U;
        if (!controller_autogen_U.AMK1_bInverterOn) {
          controller_autogen_DW.is_AMK_errorReset =
            controller_auto_IN_toggleEnable;
          controller_autogen_DW.temporalCounter_i1 = 0U;

          // Outport: '<Root>/AMK1_bEnable'
          controller_autogen_Y.AMK1_bEnable = 0U;
        }
        break;

       case controller_autogen_IN_sendReset:
        // Outport: '<Root>/AMK1_bErrorReset'
        controller_autogen_Y.AMK1_bErrorReset = 1U;
        if (controller_autogen_DW.temporalCounter_i1 >= 500U) {
          controller_autogen_DW.is_AMK_errorReset =
            controller_autog_IN_toggleReset;

          // Outport: '<Root>/AMK1_bErrorReset'
          controller_autogen_Y.AMK1_bErrorReset = 0U;
        }
        break;

       case controller_auto_IN_toggleEnable:
        // Outport: '<Root>/AMK1_bEnable'
        controller_autogen_Y.AMK1_bEnable = 0U;
        if (controller_autogen_DW.temporalCounter_i1 >= 500U) {
          controller_autogen_DW.is_AMK_errorReset =
            controller_autogen_IN_sendReset;
          controller_autogen_DW.temporalCounter_i1 = 0U;

          // Outport: '<Root>/AMK1_bErrorReset'
          controller_autogen_Y.AMK1_bErrorReset = 1U;
        }
        break;

       default:
        // Outport: '<Root>/AMK1_bErrorReset'
        // case IN_toggleReset:
        controller_autogen_Y.AMK1_bErrorReset = 0U;
        if (controller_autogen_U.AMK1_bWarn) {
          controller_autogen_DW.is_AMK_errorReset =
            controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c10_controller_autogen =
            contr_IN_motorOff_waitingForGov;
          controller_autogen_B.MI_motorStatus = MI_STATUSES::OFF;

          // Outport: '<Root>/AMK1_bInverterOn_tx'
          controller_autogen_Y.AMK1_bInverterOn_tx = 0U;

          // Outport: '<Root>/AMK1_bDcOn_tx'
          controller_autogen_Y.AMK1_bDcOn_tx = 0U;

          // Outport: '<Root>/AMK1_bEnable'
          controller_autogen_Y.AMK1_bEnable = 0U;

          // Outport: '<Root>/AMK1_TargetVelocity'
          controller_autogen_Y.AMK1_TargetVelocity = 0.0F;

          // Outport: '<Root>/AMK1_TorqueLimitPositiv'
          controller_autogen_Y.AMK1_TorqueLimitPositiv = 0.0F;

          // Outport: '<Root>/AMK1_TorqueLimitNegativ'
          controller_autogen_Y.AMK1_TorqueLimitNegativ = 0.0F;
          controller_autogen_B.MI_InverterEn = 0.0;
        }
        break;
      }
      break;

     case controller_autogen_IN_AMK_ready:
      if (controller_autogen_U.AMK1_bError) {
        controller_autogen_DW.is_c10_controller_autogen =
          controller_IN_AMK_errorDetected;
        controller_autogen_B.MI_motorStatus = MI_STATUSES::MI_STS_ERROR;
      } else if (controller_autogen_U.AMK1_bQuitInverterOn &&
                 (!controller_autogen_U.AMK1_bError)) {
        controller_autogen_DW.is_c10_controller_autogen =
          controller_autog_IN_AMK_running;
      } else {
        controller_autogen_B.MI_motorStatus = MI_STATUSES::READY;
        controller_autogen_B.MI_InverterEn = 1.0;
      }
      break;

     case controller_autog_IN_AMK_running:
      if (controller_autogen_U.AMK1_bError) {
        controller_autogen_DW.is_c10_controller_autogen =
          controller_IN_AMK_errorDetected;
        controller_autogen_B.MI_motorStatus = MI_STATUSES::MI_STS_ERROR;
      } else if (controller_autogen_B.GOV_e_miCmd == MI_CMD::CMD_SHUTDOWN) {
        controller_autogen_DW.is_c10_controller_autogen =
          controller_auto_IN_AMK_shutdown;
        controller_autogen_DW.temporalCounter_i1 = 0U;

        // Outport: '<Root>/AMK1_TargetVelocity'
        controller_autogen_Y.AMK1_TargetVelocity = 0.0F;

        // Outport: '<Root>/AMK1_TorqueLimitPositiv'
        controller_autogen_Y.AMK1_TorqueLimitPositiv = 0.0F;

        // Outport: '<Root>/AMK1_TorqueLimitNegativ'
        controller_autogen_Y.AMK1_TorqueLimitNegativ = 0.0F;
        controller_autogen_B.MI_InverterEn = 0.0;
      } else {
        controller_autogen_B.MI_motorStatus = MI_STATUSES::RUNNING;

        // Outport: '<Root>/AMK1_TargetVelocity'
        controller_autogen_Y.AMK1_TargetVelocity = 10000.0F;

        // Outport: '<Root>/AMK1_TorqueLimitPositiv' incorporates:
        //   DataTypeConversion: '<S4>/Cast To Single1'

        controller_autogen_Y.AMK1_TorqueLimitPositiv = static_cast<real32_T>
          (rtb_Merge);

        // Outport: '<Root>/AMK1_TorqueLimitNegativ'
        controller_autogen_Y.AMK1_TorqueLimitNegativ = 0.0F;
      }
      break;

     case controller_auto_IN_AMK_shutdown:
      if (controller_autogen_DW.temporalCounter_i1 >= 500U) {
        controller_autogen_DW.is_c10_controller_autogen =
          contr_IN_motorOff_waitingForGov;
        controller_autogen_B.MI_motorStatus = MI_STATUSES::OFF;

        // Outport: '<Root>/AMK1_bInverterOn_tx'
        controller_autogen_Y.AMK1_bInverterOn_tx = 0U;

        // Outport: '<Root>/AMK1_bDcOn_tx'
        controller_autogen_Y.AMK1_bDcOn_tx = 0U;

        // Outport: '<Root>/AMK1_bEnable'
        controller_autogen_Y.AMK1_bEnable = 0U;

        // Outport: '<Root>/AMK1_bErrorReset'
        controller_autogen_Y.AMK1_bErrorReset = 0U;

        // Outport: '<Root>/AMK1_TargetVelocity'
        controller_autogen_Y.AMK1_TargetVelocity = 0.0F;

        // Outport: '<Root>/AMK1_TorqueLimitPositiv'
        controller_autogen_Y.AMK1_TorqueLimitPositiv = 0.0F;

        // Outport: '<Root>/AMK1_TorqueLimitNegativ'
        controller_autogen_Y.AMK1_TorqueLimitNegativ = 0.0F;
        controller_autogen_B.MI_InverterEn = 0.0;
      }
      break;

     case controller_autog_IN_AMK_startup:
      switch (controller_autogen_DW.is_AMK_startup) {
       case controller_autogen_IN_commandOn:
        // Outport: '<Root>/AMK1_bEnable'
        controller_autogen_Y.AMK1_bEnable = 1U;

        // Outport: '<Root>/AMK1_bInverterOn_tx'
        controller_autogen_Y.AMK1_bInverterOn_tx = 1U;
        if (controller_autogen_U.AMK1_bInverterOn) {
          controller_autogen_DW.is_AMK_startup = controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c10_controller_autogen =
            controller_autogen_IN_AMK_ready;
          controller_autogen_B.MI_motorStatus = MI_STATUSES::READY;
          controller_autogen_B.MI_InverterEn = 1.0;
        } else if (controller_autogen_U.AMK1_bError) {
          controller_autogen_DW.is_AMK_startup = controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c10_controller_autogen =
            controller_IN_AMK_errorDetected;
          controller_autogen_B.MI_motorStatus = MI_STATUSES::MI_STS_ERROR;
        }
        break;

       case control_IN_enforceSetpointsZero:
        if (controller_autogen_DW.temporalCounter_i1 >= 100U) {
          controller_autogen_DW.is_AMK_startup = controller_autogen_IN_commandOn;

          // Outport: '<Root>/AMK1_bEnable'
          controller_autogen_Y.AMK1_bEnable = 1U;

          // Outport: '<Root>/AMK1_bInverterOn_tx'
          controller_autogen_Y.AMK1_bInverterOn_tx = 1U;
        } else if (controller_autogen_U.AMK1_bError) {
          controller_autogen_DW.is_AMK_startup = controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c10_controller_autogen =
            controller_IN_AMK_errorDetected;
          controller_autogen_B.MI_motorStatus = MI_STATUSES::MI_STS_ERROR;
        }
        break;

       case controller_autoge_IN_toggleDCon:
        // Outport: '<Root>/AMK1_bDcOn_tx'
        controller_autogen_Y.AMK1_bDcOn_tx = 1U;
        if (controller_autogen_U.AMK1_bDcOn &&
            controller_autogen_U.AMK1_bQuitDcOn) {
          controller_autogen_DW.is_AMK_startup = control_IN_enforceSetpointsZero;
          controller_autogen_DW.temporalCounter_i1 = 0U;

          // Outport: '<Root>/AMK1_TargetVelocity'
          controller_autogen_Y.AMK1_TargetVelocity = 0.0F;

          // Outport: '<Root>/AMK1_TorqueLimitPositiv'
          controller_autogen_Y.AMK1_TorqueLimitPositiv = 0.0F;

          // Outport: '<Root>/AMK1_TorqueLimitNegativ'
          controller_autogen_Y.AMK1_TorqueLimitNegativ = 0.0F;
        } else if (controller_autogen_U.AMK1_bError) {
          controller_autogen_DW.is_AMK_startup = controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c10_controller_autogen =
            controller_IN_AMK_errorDetected;
          controller_autogen_B.MI_motorStatus = MI_STATUSES::MI_STS_ERROR;
        }
        break;

       default:
        // case IN_waiting_sysReady:
        if (controller_autogen_U.AMK1_bWarn) {
          controller_autogen_DW.is_AMK_startup = controller_autoge_IN_toggleDCon;

          // Outport: '<Root>/AMK1_bDcOn_tx'
          controller_autogen_Y.AMK1_bDcOn_tx = 1U;
        } else if (controller_autogen_U.AMK1_bError) {
          controller_autogen_DW.is_AMK_startup = controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c10_controller_autogen =
            controller_IN_AMK_errorDetected;
          controller_autogen_B.MI_motorStatus = MI_STATUSES::MI_STS_ERROR;
        }
        break;
      }
      break;

     default:
      // Outport: '<Root>/AMK1_bInverterOn_tx'
      // case IN_motorOff_waitingForGov:
      controller_autogen_Y.AMK1_bInverterOn_tx = 0U;

      // Outport: '<Root>/AMK1_bDcOn_tx'
      controller_autogen_Y.AMK1_bDcOn_tx = 0U;

      // Outport: '<Root>/AMK1_bEnable'
      controller_autogen_Y.AMK1_bEnable = 0U;

      // Outport: '<Root>/AMK1_bErrorReset'
      controller_autogen_Y.AMK1_bErrorReset = 0U;
      if (controller_autogen_B.GOV_e_miCmd == MI_CMD::CMD_STARTUP) {
        controller_autogen_DW.is_c10_controller_autogen =
          controller_autog_IN_AMK_startup;
        controller_autogen_DW.is_AMK_startup = controller__IN_waiting_sysReady;
        controller_autogen_B.MI_motorStatus = MI_STATUSES::STARTUP;
      }
      break;
    }
  }

  // End of Chart: '<S4>/mi_right'

  // Chart: '<S4>/mi_left' incorporates:
  //   Inport: '<Root>/AMK0_bDcOn'
  //   Inport: '<Root>/AMK0_bError'
  //   Inport: '<Root>/AMK0_bInverterOn'
  //   Inport: '<Root>/AMK0_bQuitDcOn'
  //   Inport: '<Root>/AMK0_bQuitInverterOn'
  //   Inport: '<Root>/AMK0_bSystemReady'

  if (controller_autogen_DW.temporalCounter_i1_n < 511U) {
    controller_autogen_DW.temporalCounter_i1_n = static_cast<uint16_T>
      (controller_autogen_DW.temporalCounter_i1_n + 1U);
  }

  if (controller_autogen_DW.is_active_c9_controller_autogen == 0U) {
    controller_autogen_DW.is_active_c9_controller_autogen = 1U;
    controller_autogen_DW.is_c9_controller_autogen =
      contr_IN_motorOff_waitingForGov;
    controller_autogen_B.MI_motorStatus_o = MI_STATUSES::OFF;

    // Outport: '<Root>/AMK0_bInverterOn_tx'
    controller_autogen_Y.AMK0_bInverterOn_tx = 0U;

    // Outport: '<Root>/AMK0_bDcOn_tx'
    controller_autogen_Y.AMK0_bDcOn_tx = 0U;

    // Outport: '<Root>/AMK0_bEnable'
    controller_autogen_Y.AMK0_bEnable = 0U;

    // Outport: '<Root>/AMK0_bErrorReset'
    controller_autogen_Y.AMK0_bErrorReset = 0U;

    // Outport: '<Root>/AMK0_TargetVelocity'
    controller_autogen_Y.AMK0_TargetVelocity = 0.0F;

    // Outport: '<Root>/AMK0_TorqueLimitPositiv'
    controller_autogen_Y.AMK0_TorqueLimitPositiv = 0.0F;

    // Outport: '<Root>/AMK0_TorqueLimitNegativ'
    controller_autogen_Y.AMK0_TorqueLimitNegativ = 0.0F;
    controller_autogen_B.MI_InverterEn_p = 0.0;
  } else {
    switch (controller_autogen_DW.is_c9_controller_autogen) {
     case controller_IN_AMK_errorDetected:
      if (controller_autogen_B.GOV_e_miCmd == MI_CMD::ERR_RESET) {
        controller_autogen_DW.is_c9_controller_autogen =
          controller_au_IN_AMK_errorReset;
        controller_autogen_DW.is_AMK_errorReset_d =
          contr_IN_enforceSetpointsZero_b;

        // Outport: '<Root>/AMK0_TargetVelocity'
        controller_autogen_Y.AMK0_TargetVelocity = 0.0F;

        // Outport: '<Root>/AMK0_TorqueLimitPositiv'
        controller_autogen_Y.AMK0_TorqueLimitPositiv = 0.0F;

        // Outport: '<Root>/AMK0_TorqueLimitNegativ'
        controller_autogen_Y.AMK0_TorqueLimitNegativ = 0.0F;

        // Outport: '<Root>/AMK0_bInverterOn_tx'
        controller_autogen_Y.AMK0_bInverterOn_tx = 0U;
      }
      break;

     case controller_au_IN_AMK_errorReset:
      switch (controller_autogen_DW.is_AMK_errorReset_d) {
       case contr_IN_enforceSetpointsZero_b:
        // Outport: '<Root>/AMK0_bInverterOn_tx'
        controller_autogen_Y.AMK0_bInverterOn_tx = 0U;
        if (!controller_autogen_U.AMK0_bInverterOn) {
          controller_autogen_DW.is_AMK_errorReset_d =
            controller_auto_IN_toggleEnable;
          controller_autogen_DW.temporalCounter_i1_n = 0U;

          // Outport: '<Root>/AMK0_bEnable'
          controller_autogen_Y.AMK0_bEnable = 0U;
        }
        break;

       case controller_autogen_IN_sendReset:
        // Outport: '<Root>/AMK0_bErrorReset'
        controller_autogen_Y.AMK0_bErrorReset = 1U;
        if (controller_autogen_DW.temporalCounter_i1_n >= 500U) {
          controller_autogen_DW.is_AMK_errorReset_d =
            controller_autog_IN_toggleReset;

          // Outport: '<Root>/AMK0_bErrorReset'
          controller_autogen_Y.AMK0_bErrorReset = 0U;
        }
        break;

       case controller_auto_IN_toggleEnable:
        // Outport: '<Root>/AMK0_bEnable'
        controller_autogen_Y.AMK0_bEnable = 0U;
        if (controller_autogen_DW.temporalCounter_i1_n >= 500U) {
          controller_autogen_DW.is_AMK_errorReset_d =
            controller_autogen_IN_sendReset;
          controller_autogen_DW.temporalCounter_i1_n = 0U;

          // Outport: '<Root>/AMK0_bErrorReset'
          controller_autogen_Y.AMK0_bErrorReset = 1U;
        }
        break;

       default:
        // Outport: '<Root>/AMK0_bErrorReset'
        // case IN_toggleReset:
        controller_autogen_Y.AMK0_bErrorReset = 0U;
        if (controller_autogen_U.AMK0_bSystemReady) {
          controller_autogen_DW.is_AMK_errorReset_d =
            controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c9_controller_autogen =
            contr_IN_motorOff_waitingForGov;
          controller_autogen_B.MI_motorStatus_o = MI_STATUSES::OFF;

          // Outport: '<Root>/AMK0_bInverterOn_tx'
          controller_autogen_Y.AMK0_bInverterOn_tx = 0U;

          // Outport: '<Root>/AMK0_bDcOn_tx'
          controller_autogen_Y.AMK0_bDcOn_tx = 0U;

          // Outport: '<Root>/AMK0_bEnable'
          controller_autogen_Y.AMK0_bEnable = 0U;

          // Outport: '<Root>/AMK0_TargetVelocity'
          controller_autogen_Y.AMK0_TargetVelocity = 0.0F;

          // Outport: '<Root>/AMK0_TorqueLimitPositiv'
          controller_autogen_Y.AMK0_TorqueLimitPositiv = 0.0F;

          // Outport: '<Root>/AMK0_TorqueLimitNegativ'
          controller_autogen_Y.AMK0_TorqueLimitNegativ = 0.0F;
          controller_autogen_B.MI_InverterEn_p = 0.0;
        }
        break;
      }
      break;

     case controller_autogen_IN_AMK_ready:
      if (controller_autogen_U.AMK0_bError) {
        controller_autogen_DW.is_c9_controller_autogen =
          controller_IN_AMK_errorDetected;
        controller_autogen_B.MI_motorStatus_o = MI_STATUSES::MI_STS_ERROR;
      } else if (controller_autogen_U.AMK0_bQuitInverterOn &&
                 (!controller_autogen_U.AMK0_bError)) {
        controller_autogen_DW.is_c9_controller_autogen =
          controller_autog_IN_AMK_running;
      } else {
        controller_autogen_B.MI_motorStatus_o = MI_STATUSES::READY;
        controller_autogen_B.MI_InverterEn_p = 1.0;
      }
      break;

     case controller_autog_IN_AMK_running:
      if (controller_autogen_U.AMK0_bError) {
        controller_autogen_DW.is_c9_controller_autogen =
          controller_IN_AMK_errorDetected;
        controller_autogen_B.MI_motorStatus_o = MI_STATUSES::MI_STS_ERROR;
      } else if (controller_autogen_B.GOV_e_miCmd == MI_CMD::CMD_SHUTDOWN) {
        controller_autogen_DW.is_c9_controller_autogen =
          controller_auto_IN_AMK_shutdown;
        controller_autogen_DW.temporalCounter_i1_n = 0U;

        // Outport: '<Root>/AMK0_TargetVelocity'
        controller_autogen_Y.AMK0_TargetVelocity = 0.0F;

        // Outport: '<Root>/AMK0_TorqueLimitPositiv'
        controller_autogen_Y.AMK0_TorqueLimitPositiv = 0.0F;

        // Outport: '<Root>/AMK0_TorqueLimitNegativ'
        controller_autogen_Y.AMK0_TorqueLimitNegativ = 0.0F;
        controller_autogen_B.MI_InverterEn_p = 0.0;
      } else {
        controller_autogen_B.MI_motorStatus_o = MI_STATUSES::RUNNING;

        // Outport: '<Root>/AMK0_TargetVelocity'
        controller_autogen_Y.AMK0_TargetVelocity = 10000.0F;

        // Outport: '<Root>/AMK0_TorqueLimitPositiv' incorporates:
        //   DataTypeConversion: '<S4>/Cast To Single4'

        controller_autogen_Y.AMK0_TorqueLimitPositiv = static_cast<real32_T>
          (rtb_Merge);

        // Outport: '<Root>/AMK0_TorqueLimitNegativ'
        controller_autogen_Y.AMK0_TorqueLimitNegativ = 0.0F;
      }
      break;

     case controller_auto_IN_AMK_shutdown:
      if (controller_autogen_DW.temporalCounter_i1_n >= 500U) {
        controller_autogen_DW.is_c9_controller_autogen =
          contr_IN_motorOff_waitingForGov;
        controller_autogen_B.MI_motorStatus_o = MI_STATUSES::OFF;

        // Outport: '<Root>/AMK0_bInverterOn_tx'
        controller_autogen_Y.AMK0_bInverterOn_tx = 0U;

        // Outport: '<Root>/AMK0_bDcOn_tx'
        controller_autogen_Y.AMK0_bDcOn_tx = 0U;

        // Outport: '<Root>/AMK0_bEnable'
        controller_autogen_Y.AMK0_bEnable = 0U;

        // Outport: '<Root>/AMK0_bErrorReset'
        controller_autogen_Y.AMK0_bErrorReset = 0U;

        // Outport: '<Root>/AMK0_TargetVelocity'
        controller_autogen_Y.AMK0_TargetVelocity = 0.0F;

        // Outport: '<Root>/AMK0_TorqueLimitPositiv'
        controller_autogen_Y.AMK0_TorqueLimitPositiv = 0.0F;

        // Outport: '<Root>/AMK0_TorqueLimitNegativ'
        controller_autogen_Y.AMK0_TorqueLimitNegativ = 0.0F;
        controller_autogen_B.MI_InverterEn_p = 0.0;
      }
      break;

     case controller_autog_IN_AMK_startup:
      switch (controller_autogen_DW.is_AMK_startup_e) {
       case controller_autogen_IN_commandOn:
        // Outport: '<Root>/AMK0_bEnable'
        controller_autogen_Y.AMK0_bEnable = 1U;

        // Outport: '<Root>/AMK0_bInverterOn_tx'
        controller_autogen_Y.AMK0_bInverterOn_tx = 1U;
        if (controller_autogen_U.AMK0_bInverterOn) {
          controller_autogen_DW.is_AMK_startup_e =
            controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c9_controller_autogen =
            controller_autogen_IN_AMK_ready;
          controller_autogen_B.MI_motorStatus_o = MI_STATUSES::READY;
          controller_autogen_B.MI_InverterEn_p = 1.0;
        } else if (controller_autogen_U.AMK0_bError) {
          controller_autogen_DW.is_AMK_startup_e =
            controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c9_controller_autogen =
            controller_IN_AMK_errorDetected;
          controller_autogen_B.MI_motorStatus_o = MI_STATUSES::MI_STS_ERROR;
        }
        break;

       case control_IN_enforceSetpointsZero:
        if (controller_autogen_DW.temporalCounter_i1_n >= 100U) {
          controller_autogen_DW.is_AMK_startup_e =
            controller_autogen_IN_commandOn;

          // Outport: '<Root>/AMK0_bEnable'
          controller_autogen_Y.AMK0_bEnable = 1U;

          // Outport: '<Root>/AMK0_bInverterOn_tx'
          controller_autogen_Y.AMK0_bInverterOn_tx = 1U;
        } else if (controller_autogen_U.AMK0_bError) {
          controller_autogen_DW.is_AMK_startup_e =
            controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c9_controller_autogen =
            controller_IN_AMK_errorDetected;
          controller_autogen_B.MI_motorStatus_o = MI_STATUSES::MI_STS_ERROR;
        }
        break;

       case controller_autoge_IN_toggleDCon:
        // Outport: '<Root>/AMK0_bDcOn_tx'
        controller_autogen_Y.AMK0_bDcOn_tx = 1U;
        if (controller_autogen_U.AMK0_bDcOn &&
            controller_autogen_U.AMK0_bQuitDcOn) {
          controller_autogen_DW.is_AMK_startup_e =
            control_IN_enforceSetpointsZero;
          controller_autogen_DW.temporalCounter_i1_n = 0U;

          // Outport: '<Root>/AMK0_TargetVelocity'
          controller_autogen_Y.AMK0_TargetVelocity = 0.0F;

          // Outport: '<Root>/AMK0_TorqueLimitPositiv'
          controller_autogen_Y.AMK0_TorqueLimitPositiv = 0.0F;

          // Outport: '<Root>/AMK0_TorqueLimitNegativ'
          controller_autogen_Y.AMK0_TorqueLimitNegativ = 0.0F;
        } else if (controller_autogen_U.AMK0_bError) {
          controller_autogen_DW.is_AMK_startup_e =
            controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c9_controller_autogen =
            controller_IN_AMK_errorDetected;
          controller_autogen_B.MI_motorStatus_o = MI_STATUSES::MI_STS_ERROR;
        }
        break;

       default:
        // case IN_waiting_sysReady:
        if (controller_autogen_U.AMK0_bSystemReady) {
          controller_autogen_DW.is_AMK_startup_e =
            controller_autoge_IN_toggleDCon;

          // Outport: '<Root>/AMK0_bDcOn_tx'
          controller_autogen_Y.AMK0_bDcOn_tx = 1U;
        } else if (controller_autogen_U.AMK0_bError) {
          controller_autogen_DW.is_AMK_startup_e =
            controller_a_IN_NO_ACTIVE_CHILD;
          controller_autogen_DW.is_c9_controller_autogen =
            controller_IN_AMK_errorDetected;
          controller_autogen_B.MI_motorStatus_o = MI_STATUSES::MI_STS_ERROR;
        }
        break;
      }
      break;

     default:
      // Outport: '<Root>/AMK0_bInverterOn_tx'
      // case IN_motorOff_waitingForGov:
      controller_autogen_Y.AMK0_bInverterOn_tx = 0U;

      // Outport: '<Root>/AMK0_bDcOn_tx'
      controller_autogen_Y.AMK0_bDcOn_tx = 0U;

      // Outport: '<Root>/AMK0_bEnable'
      controller_autogen_Y.AMK0_bEnable = 0U;

      // Outport: '<Root>/AMK0_bErrorReset'
      controller_autogen_Y.AMK0_bErrorReset = 0U;
      if (controller_autogen_B.GOV_e_miCmd == MI_CMD::CMD_STARTUP) {
        controller_autogen_DW.is_c9_controller_autogen =
          controller_autog_IN_AMK_startup;
        controller_autogen_DW.is_AMK_startup_e = controller__IN_waiting_sysReady;
        controller_autogen_B.MI_motorStatus_o = MI_STATUSES::STARTUP;
      }
      break;
    }
  }

  // End of Chart: '<S4>/mi_left'

  // Chart: '<S1>/battery_monitor' incorporates:
  //   Delay: '<S3>/Delay'
  //   Inport: '<Root>/BM_HVnegContactorSts'
  //   Inport: '<Root>/BM_HVposContactorSts'
  //   Inport: '<Root>/BM_HvilFeedback'
  //   Inport: '<Root>/BM_prechrgContactorSts'

  if (controller_autogen_DW.temporalCounter_i1_e < 8191U) {
    controller_autogen_DW.temporalCounter_i1_e = static_cast<uint16_T>
      (controller_autogen_DW.temporalCounter_i1_e + 1U);
  }

  if (controller_autogen_DW.is_active_c4_battery_monitor_li == 0U) {
    controller_autogen_DW.is_active_c4_battery_monitor_li = 1U;
    controller_autogen_DW.is_c4_battery_monitor_lib =
      controller_auto_IN_InitialState;
    controller_autogen_DW.Delay_DSTATE = BM_STATUSES::BM_INIT;
  } else {
    switch (controller_autogen_DW.is_c4_battery_monitor_lib) {
     case controller_auto_IN_InitialState:
      controller_autogen_DW.Delay_DSTATE = BM_STATUSES::BM_INIT;
      if (controller_autogen_U.BM_prechrgContactorSts &&
          controller_autogen_U.BM_HVnegContactorSts &&
          controller_autogen_U.BM_HVposContactorSts &&
          (controller_autogen_B.GOV_e_bmCmd == BM_CMD::HV_STARTUP) &&
          controller_autogen_U.BM_HvilFeedback) {
        controller_autogen_DW.is_c4_battery_monitor_lib =
          controller_IN_StartupSuperstate;
        controller_autogen_DW.Delay_DSTATE = BM_STATUSES::BM_IDLE;
      }
      break;

     case controller_au_IN_InterruptState:
      controller_autogen_DW.Delay_DSTATE = BM_STATUSES::HVIL_INTERRUPT;
      if ((controller_autogen_DW.temporalCounter_i1_e >= 5000U) &&
          controller_autogen_U.BM_HvilFeedback) {
        controller_autogen_DW.is_c4_battery_monitor_lib =
          controller_auto_IN_InitialState;
        controller_autogen_DW.Delay_DSTATE = BM_STATUSES::BM_INIT;
      }
      break;

     case controller_autogen_IN_LowSoC:
      controller_autogen_DW.Delay_DSTATE = BM_STATUSES::BM_LOW_SOC;
      break;

     default:
      // case IN_StartupSuperstate:
      if (!controller_autogen_U.BM_HvilFeedback) {
        controller_autogen_DW.is_c4_battery_monitor_lib =
          controller_au_IN_InterruptState;
        controller_autogen_DW.temporalCounter_i1_e = 0U;
        controller_autogen_DW.Delay_DSTATE = BM_STATUSES::HVIL_INTERRUPT;
      } else {
        controller_autogen_DW.is_c4_battery_monitor_lib =
          controller_autogen_IN_LowSoC;
        controller_autogen_DW.Delay_DSTATE = BM_STATUSES::BM_LOW_SOC;
      }
      break;
    }
  }

  // End of Chart: '<S1>/battery_monitor'

  // Chart: '<S1>/bm_control' incorporates:
  //   Delay: '<S3>/Delay'

  if (controller_autogen_DW.temporalCounter_i1_o < 8191U) {
    controller_autogen_DW.temporalCounter_i1_o = static_cast<uint16_T>
      (controller_autogen_DW.temporalCounter_i1_o + 1U);
  }

  if (controller_autogen_DW.is_active_c5_battery_monitor_li == 0U) {
    controller_autogen_DW.is_active_c5_battery_monitor_li = 1U;
    controller_autogen_DW.is_c5_battery_monitor_lib =
      controller_autoge_IN_StartupCMD;

    // Outport: '<Root>/BM_PrechargeContactorCmd'
    controller_autogen_Y.BM_PrechargeContactorCmd = 0.0;

    // Outport: '<Root>/BM_HVnegContactorCmd'
    controller_autogen_Y.BM_HVnegContactorCmd = 0.0;

    // Outport: '<Root>/BM_HVposContactorCmd'
    controller_autogen_Y.BM_HVposContactorCmd = 0.0;
  } else if (controller_autogen_DW.is_c5_battery_monitor_lib ==
             controller_autoge_IN_StartupCMD) {
    if (controller_autogen_DW.Delay_DSTATE == BM_STATUSES::BM_IDLE) {
      controller_autogen_DW.is_c5_battery_monitor_lib =
        controll_IN_StartupSuperstate_m;
      controller_autogen_DW.is_StartupSuperstate =
        controller_auto_IN_Close_HVneg1;
      controller_autogen_DW.temporalCounter_i1_o = 0U;

      // Outport: '<Root>/BM_PrechargeContactorCmd'
      controller_autogen_Y.BM_PrechargeContactorCmd = 0.0;

      // Outport: '<Root>/BM_HVnegContactorCmd'
      controller_autogen_Y.BM_HVnegContactorCmd = 1.0;

      // Outport: '<Root>/BM_HVposContactorCmd'
      controller_autogen_Y.BM_HVposContactorCmd = 0.0;
    }

    // case IN_StartupSuperstate:
  } else if ((controller_autogen_DW.Delay_DSTATE == BM_STATUSES::HVIL_INTERRUPT)
             || (controller_autogen_DW.Delay_DSTATE == BM_STATUSES::BM_LOW_SOC))
  {
    controller_autogen_DW.is_StartupSuperstate = controller_a_IN_NO_ACTIVE_CHILD;
    controller_autogen_DW.is_c5_battery_monitor_lib =
      controller_autoge_IN_StartupCMD;

    // Outport: '<Root>/BM_PrechargeContactorCmd'
    controller_autogen_Y.BM_PrechargeContactorCmd = 0.0;

    // Outport: '<Root>/BM_HVnegContactorCmd'
    controller_autogen_Y.BM_HVnegContactorCmd = 0.0;

    // Outport: '<Root>/BM_HVposContactorCmd'
    controller_autogen_Y.BM_HVposContactorCmd = 0.0;
  } else {
    switch (controller_autogen_DW.is_StartupSuperstate) {
     case controller_auto_IN_Close_HVneg1:
      if ((controller_autogen_DW.temporalCounter_i1_o >= 100U) &&
          (controller_autogen_DW.Delay_DSTATE == BM_STATUSES::BM_STARTUP)) {
        controller_autogen_DW.is_StartupSuperstate =
          controller_a_IN_Close_precharge;
        controller_autogen_DW.temporalCounter_i1_o = 0U;

        // Outport: '<Root>/BM_PrechargeContactorCmd'
        controller_autogen_Y.BM_PrechargeContactorCmd = 1.0;

        // Outport: '<Root>/BM_HVnegContactorCmd'
        controller_autogen_Y.BM_HVnegContactorCmd = 1.0;

        // Outport: '<Root>/BM_HVposContactorCmd'
        controller_autogen_Y.BM_HVposContactorCmd = 0.0;
      }
      break;

     case controller_autog_IN_Close_HVpos:
      if ((controller_autogen_DW.temporalCounter_i1_o >= 100U) &&
          (controller_autogen_DW.Delay_DSTATE == BM_STATUSES::PRECHARGE)) {
        controller_autogen_DW.is_StartupSuperstate =
          controller_au_IN_Open_precharge;

        // Outport: '<Root>/BM_PrechargeContactorCmd'
        controller_autogen_Y.BM_PrechargeContactorCmd = 0.0;

        // Outport: '<Root>/BM_HVnegContactorCmd'
        controller_autogen_Y.BM_HVnegContactorCmd = 1.0;

        // Outport: '<Root>/BM_HVposContactorCmd'
        controller_autogen_Y.BM_HVposContactorCmd = 1.0;
      }
      break;

     case controller_a_IN_Close_precharge:
      if ((controller_autogen_DW.temporalCounter_i1_o >= 6500U) &&
          (controller_autogen_DW.Delay_DSTATE == BM_STATUSES::INIT_PRECHARGE)) {
        controller_autogen_DW.is_StartupSuperstate =
          controller_autog_IN_Close_HVpos;
        controller_autogen_DW.temporalCounter_i1_o = 0U;

        // Outport: '<Root>/BM_PrechargeContactorCmd'
        controller_autogen_Y.BM_PrechargeContactorCmd = 1.0;

        // Outport: '<Root>/BM_HVnegContactorCmd'
        controller_autogen_Y.BM_HVnegContactorCmd = 1.0;

        // Outport: '<Root>/BM_HVposContactorCmd'
        controller_autogen_Y.BM_HVposContactorCmd = 1.0;
      }
      break;

     default:
      // case IN_Open_precharge:
      if (controller_autogen_DW.Delay_DSTATE == BM_STATUSES::BM_RUNNING) {
        controller_autogen_DW.is_StartupSuperstate =
          controller_au_IN_Open_precharge;

        // Outport: '<Root>/BM_PrechargeContactorCmd'
        controller_autogen_Y.BM_PrechargeContactorCmd = 0.0;

        // Outport: '<Root>/BM_HVnegContactorCmd'
        controller_autogen_Y.BM_HVnegContactorCmd = 1.0;

        // Outport: '<Root>/BM_HVposContactorCmd'
        controller_autogen_Y.BM_HVposContactorCmd = 1.0;
      } else {
        // Outport: '<Root>/BM_PrechargeContactorCmd'
        controller_autogen_Y.BM_PrechargeContactorCmd = 0.0;

        // Outport: '<Root>/BM_HVnegContactorCmd'
        controller_autogen_Y.BM_HVnegContactorCmd = 1.0;

        // Outport: '<Root>/BM_HVposContactorCmd'
        controller_autogen_Y.BM_HVposContactorCmd = 1.0;
      }
      break;
    }
  }

  // End of Chart: '<S1>/bm_control'

  // Outport: '<Root>/DI_BrakeLightEn' incorporates:
  //   Switch: '<S2>/Switch'

  controller_autogen_Y.DI_BrakeLightEn = (rtb_Max > 0.1);

  // Outport: '<Root>/GOV_Status' incorporates:
  //   DataTypeConversion: '<Root>/Cast To Single'

  controller_autogen_Y.GOV_Status = static_cast<uint8_T>
    (controller_autogen_B.GOV_e_govSts);

  // Switch: '<S4>/overallMotorState' incorporates:
  //   Delay: '<S4>/Delay'
  //   RelationalOperator: '<S4>/GreaterThan'

  if (controller_autogen_B.MI_motorStatus_o ==
      controller_autogen_B.MI_motorStatus) {
    controller_autogen_DW.Delay_DSTATE_k = controller_autogen_B.MI_motorStatus_o;
  }

  // End of Switch: '<S4>/overallMotorState'

  // Switch: '<S4>/Switch' incorporates:
  //   Constant: '<S4>/Constant'
  //   Constant: '<S4>/Constant1'
  //   Delay: '<S3>/Delay1'
  //   Delay: '<S4>/Delay'
  //   Logic: '<S4>/OR'
  //   RelationalOperator: '<S4>/motorErrorActive'
  //   RelationalOperator: '<S4>/motorErrorActive1'

  if ((controller_autogen_B.MI_motorStatus == MI_STATUSES::MI_STS_ERROR) ||
      (controller_autogen_B.MI_motorStatus_o == MI_STATUSES::MI_STS_ERROR)) {
    controller_autogen_DW.Delay1_DSTATE = MI_STATUSES::MI_STS_ERROR;
  } else {
    controller_autogen_DW.Delay1_DSTATE = controller_autogen_DW.Delay_DSTATE_k;
  }

  // End of Switch: '<S4>/Switch'

  // Outport: '<Root>/MI_Status' incorporates:
  //   DataTypeConversion: '<Root>/Cast To Single1'
  //   Delay: '<S3>/Delay1'

  controller_autogen_Y.MI_Status = static_cast<uint8_T>
    (controller_autogen_DW.Delay1_DSTATE);

  // Outport: '<Root>/Di_Status' incorporates:
  //   DataTypeConversion: '<Root>/Cast To Single2'
  //   Delay: '<S3>/Delay2'

  controller_autogen_Y.Di_Status = static_cast<uint8_T>
    (controller_autogen_DW.Delay2_DSTATE);

  // Outport: '<Root>/BM_Status' incorporates:
  //   DataTypeConversion: '<Root>/Cast To Single3'
  //   Delay: '<S3>/Delay'

  controller_autogen_Y.BM_Status = static_cast<uint8_T>
    (controller_autogen_DW.Delay_DSTATE);

  // Outport: '<Root>/MI_InverterEn' incorporates:
  //   Logic: '<S4>/AND'

  controller_autogen_Y.MI_InverterEn = ((controller_autogen_B.MI_InverterEn_p !=
    0.0) && (controller_autogen_B.MI_InverterEn != 0.0));

  // Update for S-Function (sfix_udelay): '<S25>/Tapped Delay'
  for (rtb_Switch = 0; rtb_Switch < 9; rtb_Switch++) {
    controller_autogen_DW.TappedDelay_X[rtb_Switch] =
      controller_autogen_DW.TappedDelay_X[rtb_Switch + 1];
  }

  controller_autogen_DW.TappedDelay_X[9] = controller_autogen_B.pedaltotorque;

  // End of Update for S-Function (sfix_udelay): '<S25>/Tapped Delay'
}

// Model initialize function
void controller_autogen::initialize()
{
  // InitializeConditions for Delay: '<S4>/Delay'
  controller_autogen_DW.Delay_DSTATE_k = MI_STATUSES::OFF;
}

// Model terminate function
void controller_autogen::terminate()
{
  // (no terminate code required)
}

// Constructor
controller_autogen::controller_autogen() :
  controller_autogen_U(),
  controller_autogen_Y(),
  controller_autogen_B(),
  controller_autogen_DW(),
  controller_autogen_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
controller_autogen::~controller_autogen()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
controller_autogen::RT_MODEL_controller_autogen_T * controller_autogen::getRTM()
{
  return (&controller_autogen_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
