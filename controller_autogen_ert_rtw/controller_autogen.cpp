//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: controller_autogen.cpp
//
// Code generated for Simulink model 'controller_autogen'.
//
// Model version                  : 1.92
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Thu Jun 13 16:57:00 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-M
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#include "controller_autogen.h"
#include "rtwtypes.h"
#include <cmath>
#include <cstring>

// Named constants for Chart: '<S1>/battery_monitor'
const uint8_T IN_InitialState{ 1U };

const uint8_T IN_InterruptState{ 2U };

const uint8_T IN_LowSoC{ 3U };

const uint8_T IN_NO_ACTIVE_CHILD{ 0U };

const uint8_T IN_StartupSuperstate{ 4U };

// Named constants for Chart: '<S1>/bm_control'
const uint8_T IN_Close_HVneg1{ 1U };

const uint8_T IN_Close_HVpos{ 2U };

const uint8_T IN_Close_precharge{ 3U };

const uint8_T IN_Open_precharge{ 4U };

const uint8_T IN_StartupCMD{ 1U };

const uint8_T IN_StartupSuperstate_b{ 2U };

// Named constants for Chart: '<S2>/driver_interface'
const uint8_T IN_DI_error{ 1U };

const uint8_T IN_DI_running{ 2U };

const uint8_T IN_Driver_requested_start{ 1U };

const uint8_T IN_INIT{ 3U };

const uint8_T IN_Motor_start_request{ 2U };

const uint8_T IN_Ready_to_drive{ 3U };

const uint8_T IN_SpeakerOff{ 1U };

const uint8_T IN_SpeakerOn_{ 2U };

const uint8_T IN_Vehicle_coasting{ 4U };

const uint8_T IN_Waiting_for_driver{ 4U };

// Named constants for Chart: '<S3>/governer_stateflow'
const uint8_T IN_Command_motor_startup{ 1U };

const uint8_T IN_DriverInterface_Error{ 1U };

const uint8_T IN_Err_reset{ 2U };

const uint8_T IN_HV_run_error{ 1U };

const uint8_T IN_HV_startup{ 2U };

const uint8_T IN_HV_startup_error{ 3U };

const uint8_T IN_Initialize_outputs{ 1U };

const uint8_T IN_Motor_faulted{ 4U };

const uint8_T IN_Motor_run_error{ 2U };

const uint8_T IN_RUNNING{ 2U };

const uint8_T IN_RUNNING_ERROR{ 3U };

const uint8_T IN_ReadyToDrive{ 3U };

const uint8_T IN_STARTUP{ 4U };

const uint8_T IN_STARTUP_ERROR{ 5U };

const uint8_T IN_Send_ReadyToDrive{ 4U };

const uint8_T IN_Vehicle_shutdown{ 6U };

// Named constants for Chart: '<S4>/mi_left'
const uint8_T IN_AMK_errorDetected{ 1U };

const uint8_T IN_AMK_errorReset{ 2U };

const uint8_T IN_AMK_ready{ 3U };

const uint8_T IN_AMK_running{ 4U };

const uint8_T IN_AMK_shutdown{ 5U };

const uint8_T IN_AMK_startup{ 6U };

const uint8_T IN_commandOn{ 1U };

const uint8_T IN_enforceSetpointsZero{ 2U };

const uint8_T IN_enforceSetpointsZero_b{ 1U };

const uint8_T IN_motorOff_waitingForGov{ 7U };

const uint8_T IN_sendReset{ 2U };

const uint8_T IN_toggleDCon{ 3U };

const uint8_T IN_toggleEnable{ 3U };

const uint8_T IN_toggleReset{ 4U };

const uint8_T IN_waiting_sysReady{ 4U };

// Named constants for Chart: '<S5>/vd_screenshot_check'
const uint8_T IN_Run{ 1U };

const uint8_T IN_Stop{ 2U };

static real_T look1_binlc(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
static real_T look1_binlx(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
static real_T look1_binlc(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex)
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

static real_T look1_binlx(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex)
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
  BM_STATUSES rtb_GOV_e_bmSts;
  DI_STATUSES rtb_GOV_e_diSts;
  MI_STATUSES rtb_Switch_m;
  MI_STATUSES rtb_overallMotorState;

  // Chart: '<S3>/governer_stateflow' incorporates:
  //   Delay: '<S3>/Delay'
  //   Delay: '<S3>/Delay1'
  //   Delay: '<S3>/Delay2'

  if (rtDW.temporalCounter_i1_j < 2047U) {
    rtDW.temporalCounter_i1_j = static_cast<uint16_T>(rtDW.temporalCounter_i1_j
      + 1U);
  }

  if (rtDW.is_active_c8_governor_lib == 0U) {
    rtDW.is_active_c8_governor_lib = 1U;
    rtDW.is_c8_governor_lib = IN_Initialize_outputs;
    rtDW.temporalCounter_i1_j = 0U;
    rtDW.GOV_e_govSts = GOV_STATUSES::GOV_INIT;
    rtDW.GOV_e_diCmd = DI_CMD::DI_CMD_INIT;
    rtDW.GOV_e_bmCmd = BM_CMD::BM_CMD_INIT;
    rtDW.motorStartCount = 0U;
  } else {
    switch (rtDW.is_c8_governor_lib) {
     case IN_Initialize_outputs:
      rtDW.GOV_e_govSts = GOV_STATUSES::GOV_INIT;
      rtDW.GOV_e_diCmd = DI_CMD::DI_CMD_INIT;
      rtDW.GOV_e_bmCmd = BM_CMD::BM_CMD_INIT;
      if ((rtDW.temporalCounter_i1_j >= 2000U) && (rtDW.Delay2_DSTATE ==
           DI_STATUSES::HV_START_REQ)) {
        rtDW.is_c8_governor_lib = IN_STARTUP;
        rtDW.GOV_e_govSts = GOV_STATUSES::GOV_STARTUP;
        rtDW.is_STARTUP = IN_HV_startup;
        rtDW.GOV_e_bmCmd = BM_CMD::HV_STARTUP;
      }
      break;

     case IN_RUNNING:
      rtDW.GOV_e_govSts = GOV_STATUSES::GOV_RUNNING;
      if ((rtDW.Delay_DSTATE == BM_STATUSES::HVIL_INTERRUPT) ||
          (rtDW.Delay_DSTATE == BM_STATUSES::BM_LOW_SOC)) {
        rtDW.is_c8_governor_lib = IN_Vehicle_shutdown;
        rtDW.GOV_e_govSts = GOV_STATUSES::GOV_SHUTDOWN;
        rtDW.GOV_e_miCmd = MI_CMD::CMD_SHUTDOWN;
        rtDW.GOV_e_diCmd = DI_CMD::DI_SHUTDOWN;
      } else if (rtDW.Delay_DSTATE == BM_STATUSES::ERR_RUNNING) {
        rtDW.is_c8_governor_lib = IN_RUNNING_ERROR;
        rtDW.is_RUNNING_ERROR = IN_HV_run_error;
        rtDW.GOV_e_diCmd = DI_CMD::RUN_ERROR;
        rtDW.GOV_e_govSts = GOV_STATUSES::HV_RUN_ERROR;
      } else if (rtDW.Delay1_DSTATE == MI_STATUSES::MI_STS_ERROR) {
        rtDW.is_c8_governor_lib = IN_RUNNING_ERROR;
        rtDW.is_RUNNING_ERROR = IN_Motor_run_error;
        rtDW.GOV_e_diCmd = DI_CMD::RUN_ERROR;
        rtDW.GOV_e_govSts = GOV_STATUSES::MOTOR_RUN_ERROR;
      }
      break;

     case IN_RUNNING_ERROR:
      if (rtDW.is_RUNNING_ERROR == IN_HV_run_error) {
        rtDW.GOV_e_diCmd = DI_CMD::RUN_ERROR;
        rtDW.GOV_e_govSts = GOV_STATUSES::HV_RUN_ERROR;
      } else {
        // case IN_Motor_run_error:
        rtDW.GOV_e_diCmd = DI_CMD::RUN_ERROR;
        rtDW.GOV_e_govSts = GOV_STATUSES::MOTOR_RUN_ERROR;
      }
      break;

     case IN_STARTUP:
      {
        rtDW.GOV_e_govSts = GOV_STATUSES::GOV_STARTUP;
        if (rtDW.Delay_DSTATE == BM_STATUSES::HVIL_INTERRUPT) {
          rtDW.is_STARTUP = IN_NO_ACTIVE_CHILD;
          rtDW.is_c8_governor_lib = IN_STARTUP_ERROR;
          rtDW.is_STARTUP_ERROR = IN_HV_startup_error;
          rtDW.GOV_e_govSts = GOV_STATUSES::HV_STARTUP_ERROR;
          rtDW.GOV_e_diCmd = DI_CMD::DI_SHUTDOWN;
        } else if (rtDW.Delay2_DSTATE == DI_STATUSES::DI_ERROR) {
          rtDW.is_STARTUP = IN_NO_ACTIVE_CHILD;
          rtDW.is_c8_governor_lib = IN_STARTUP_ERROR;
          rtDW.is_STARTUP_ERROR = IN_DriverInterface_Error;
          rtDW.GOV_e_govSts = GOV_STATUSES::GOV_DI_ERROR;
        } else if (rtDW.Delay1_DSTATE == MI_STATUSES::MI_STS_ERROR) {
          if (rtDW.motorStartCount >= 5) {
            rtDW.is_STARTUP = IN_NO_ACTIVE_CHILD;
            rtDW.is_c8_governor_lib = IN_STARTUP_ERROR;
            rtDW.is_STARTUP_ERROR = IN_Motor_faulted;
            rtDW.GOV_e_miCmd = MI_CMD::CMD_SHUTDOWN;
            rtDW.GOV_e_govSts = GOV_STATUSES::MOTOR_STARTUP_ERROR;
          } else {
            rtDW.is_STARTUP = IN_NO_ACTIVE_CHILD;
            rtDW.is_c8_governor_lib = IN_STARTUP_ERROR;
            rtDW.is_STARTUP_ERROR = IN_Err_reset;
          }
        } else {
          switch (rtDW.is_STARTUP) {
           case IN_Command_motor_startup:
            if (rtDW.Delay1_DSTATE == MI_STATUSES::RUNNING) {
              rtDW.is_STARTUP = IN_Send_ReadyToDrive;
              rtDW.GOV_e_diCmd = DI_CMD::READY_TO_DRIVE;
            }
            break;

           case IN_HV_startup:
            rtDW.GOV_e_bmCmd = BM_CMD::HV_STARTUP;
            if (rtDW.Delay_DSTATE == BM_STATUSES::BM_RUNNING) {
              rtDW.is_STARTUP = IN_ReadyToDrive;
              rtDW.GOV_e_diCmd = DI_CMD::HV_ON;
            }
            break;

           case IN_ReadyToDrive:
            {
              rtDW.GOV_e_diCmd = DI_CMD::HV_ON;
              if (rtDW.Delay2_DSTATE == DI_STATUSES::READY_TO_DRIVE_REQ) {
                uint32_T tmp;
                rtDW.is_STARTUP = IN_Command_motor_startup;
                rtDW.GOV_e_miCmd = MI_CMD::CMD_STARTUP;
                tmp = rtDW.motorStartCount + 1U;
                if (rtDW.motorStartCount + 1U > 65535U) {
                  tmp = 65535U;
                }

                rtDW.motorStartCount = static_cast<uint16_T>(tmp);
              }
            }
            break;

           default:
            // case IN_Send_ReadyToDrive:
            rtDW.GOV_e_diCmd = DI_CMD::READY_TO_DRIVE;
            if (rtDW.Delay2_DSTATE == DI_STATUSES::DI_RUNNING) {
              rtDW.is_STARTUP = IN_NO_ACTIVE_CHILD;
              rtDW.is_c8_governor_lib = IN_RUNNING;
              rtDW.GOV_e_govSts = GOV_STATUSES::GOV_RUNNING;
            }
            break;
          }
        }
      }
      break;

     case IN_STARTUP_ERROR:
      switch (rtDW.is_STARTUP_ERROR) {
       case IN_DriverInterface_Error:
        rtDW.GOV_e_govSts = GOV_STATUSES::GOV_DI_ERROR;
        break;

       case IN_Err_reset:
        if (rtDW.Delay1_DSTATE == MI_STATUSES::OFF) {
          rtDW.is_STARTUP_ERROR = IN_NO_ACTIVE_CHILD;
          rtDW.is_c8_governor_lib = IN_STARTUP;
          rtDW.GOV_e_govSts = GOV_STATUSES::GOV_STARTUP;
          rtDW.is_STARTUP = IN_HV_startup;
          rtDW.GOV_e_bmCmd = BM_CMD::HV_STARTUP;
        } else {
          rtDW.GOV_e_miCmd = MI_CMD::ERR_RESET;
        }
        break;

       case IN_HV_startup_error:
        rtDW.GOV_e_govSts = GOV_STATUSES::HV_STARTUP_ERROR;
        rtDW.GOV_e_diCmd = DI_CMD::DI_SHUTDOWN;
        if (rtDW.Delay_DSTATE == BM_STATUSES::BM_INIT) {
          rtDW.is_STARTUP_ERROR = IN_NO_ACTIVE_CHILD;
          rtDW.is_c8_governor_lib = IN_Initialize_outputs;
          rtDW.temporalCounter_i1_j = 0U;
          rtDW.GOV_e_govSts = GOV_STATUSES::GOV_INIT;
          rtDW.GOV_e_diCmd = DI_CMD::DI_CMD_INIT;
          rtDW.GOV_e_bmCmd = BM_CMD::BM_CMD_INIT;
          rtDW.motorStartCount = 0U;
        }
        break;

       default:
        // case IN_Motor_faulted:
        rtDW.GOV_e_govSts = GOV_STATUSES::MOTOR_STARTUP_ERROR;
        break;
      }
      break;

     default:
      // case IN_Vehicle_shutdown:
      rtDW.GOV_e_govSts = GOV_STATUSES::GOV_SHUTDOWN;
      rtDW.GOV_e_diCmd = DI_CMD::DI_SHUTDOWN;
      if (rtDW.Delay_DSTATE == BM_STATUSES::BM_INIT) {
        rtDW.is_c8_governor_lib = IN_Initialize_outputs;
        rtDW.temporalCounter_i1_j = 0U;
        rtDW.GOV_e_govSts = GOV_STATUSES::GOV_INIT;
        rtDW.GOV_e_diCmd = DI_CMD::DI_CMD_INIT;
        rtDW.GOV_e_bmCmd = BM_CMD::BM_CMD_INIT;
        rtDW.motorStartCount = 0U;
      }
      break;
    }
  }

  // End of Chart: '<S3>/governer_stateflow'

  // Logic: '<S2>/NOT1' incorporates:
  //   Inport: '<Root>/DI_StartButton'

  rtb_NOT1 = !rtU.DI_StartButton;

  // Logic: '<S14>/NOT' incorporates:
  //   Constant: '<S14>/LowerPotentiometerLimit1'
  //   Constant: '<S14>/UpperPotentiometerLimit1'
  //   Inport: '<Root>/DI_FrontBrakePressure'
  //   Logic: '<S19>/FixPt Logical Operator'
  //   RelationalOperator: '<S19>/Lower Test'
  //   RelationalOperator: '<S19>/Upper Test'

  rtb_NOT_i = ((!(rtU.DI_FrontBrakePressure >= 0.0)) ||
               (!(rtU.DI_FrontBrakePressure <= 1.0)));

  // Logic: '<S15>/NOT' incorporates:
  //   Constant: '<S15>/LowerPotentiometerLimit1'
  //   Constant: '<S15>/UpperPotentiometerLimit1'
  //   Inport: '<Root>/DI_RearBrakePressure'
  //   Logic: '<S20>/FixPt Logical Operator'
  //   RelationalOperator: '<S20>/Lower Test'
  //   RelationalOperator: '<S20>/Upper Test'

  rtb_NOT_dg = ((!(rtU.DI_RearBrakePressure >= 0.0)) ||
                (!(rtU.DI_RearBrakePressure <= 1.0)));

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

  rtb_b_DriverInterfaceError = ((!(rtU.DI_AccelPedalPosition1 >= 0.0)) ||
    (!(rtU.DI_AccelPedalPosition1 <= 1.0)) || ((!(rtU.DI_AccelPedalPosition2 >=
    0.0)) || (!(rtU.DI_AccelPedalPosition2 <= 1.0))) || rtb_NOT_i || rtb_NOT_dg ||
    (std::abs(rtU.DI_AccelPedalPosition1 - rtU.DI_AccelPedalPosition2) > 0.1));

  // MinMax: '<S2>/Max' incorporates:
  //   Inport: '<Root>/DI_FrontBrakePressure'
  //   Inport: '<Root>/DI_RearBrakePressure'

  rtb_Max = std::fmax(rtU.DI_FrontBrakePressure, rtU.DI_RearBrakePressure);

  // Chart: '<S2>/driver_interface'
  if (rtDW.temporalCounter_i1_h < 2047U) {
    rtDW.temporalCounter_i1_h = static_cast<uint16_T>(rtDW.temporalCounter_i1_h
      + 1U);
  }

  if (rtDW.is_active_c2_driver_interface_l == 0U) {
    rtDW.is_active_c2_driver_interface_l = 1U;
    rtDW.is_c2_driver_interface_lib = IN_INIT;
    rtb_GOV_e_diSts = DI_STATUSES::DI_STS_INIT;
    rtDW.b_ReadyToDrive = false;

    // Outport: '<Root>/DI_DriverSpeaker'
    rtY.DI_DriverSpeaker = false;
  } else {
    switch (rtDW.is_c2_driver_interface_lib) {
     case IN_DI_error:
      rtb_GOV_e_diSts = DI_STATUSES::DI_ERROR;
      break;

     case IN_DI_running:
      if (rtb_b_DriverInterfaceError) {
        rtDW.is_Ready_to_drive = IN_NO_ACTIVE_CHILD;
        rtDW.is_DI_running = IN_NO_ACTIVE_CHILD;
        rtDW.is_c2_driver_interface_lib = IN_DI_error;
        rtb_GOV_e_diSts = DI_STATUSES::DI_ERROR;
      } else if (rtDW.GOV_e_diCmd == DI_CMD::DI_SHUTDOWN) {
        rtDW.is_Ready_to_drive = IN_NO_ACTIVE_CHILD;
        rtDW.is_DI_running = IN_NO_ACTIVE_CHILD;
        rtDW.is_c2_driver_interface_lib = IN_INIT;
        rtb_GOV_e_diSts = DI_STATUSES::DI_STS_INIT;
        rtDW.b_ReadyToDrive = false;

        // Outport: '<Root>/DI_DriverSpeaker'
        rtY.DI_DriverSpeaker = false;
      } else {
        switch (rtDW.is_DI_running) {
         case IN_Driver_requested_start:
          rtb_GOV_e_diSts = DI_STATUSES::HV_START_REQ;
          if ((rtDW.GOV_e_diCmd == DI_CMD::HV_ON) && rtb_NOT1) {
            rtDW.is_DI_running = IN_Motor_start_request;
            rtb_GOV_e_diSts = DI_STATUSES::READY_TO_DRIVE_REQ;
          }
          break;

         case IN_Motor_start_request:
          rtb_GOV_e_diSts = DI_STATUSES::READY_TO_DRIVE_REQ;
          if ((rtDW.GOV_e_diCmd == DI_CMD::READY_TO_DRIVE) && (rtb_Max > 0.1)) {
            rtDW.is_DI_running = IN_Ready_to_drive;
            rtDW.b_ReadyToDrive = true;
            rtb_GOV_e_diSts = DI_STATUSES::DI_RUNNING;
            rtDW.is_Ready_to_drive = IN_SpeakerOn_;
            rtDW.temporalCounter_i1_h = 0U;

            // Outport: '<Root>/DI_DriverSpeaker'
            rtY.DI_DriverSpeaker = true;
          }
          break;

         case IN_Ready_to_drive:
          rtDW.b_ReadyToDrive = true;
          rtb_GOV_e_diSts = DI_STATUSES::DI_RUNNING;
          if (rtDW.GOV_e_diCmd == DI_CMD::RUN_ERROR) {
            rtDW.is_Ready_to_drive = IN_NO_ACTIVE_CHILD;
            rtDW.is_DI_running = IN_NO_ACTIVE_CHILD;
            rtDW.is_c2_driver_interface_lib = IN_Vehicle_coasting;
            rtDW.b_ReadyToDrive = false;
            rtb_GOV_e_diSts = DI_STATUSES::DI_IDLE;
          } else if (rtDW.is_Ready_to_drive == IN_SpeakerOff) {
            // Outport: '<Root>/DI_DriverSpeaker'
            rtY.DI_DriverSpeaker = false;
          } else {
            // Outport: '<Root>/DI_DriverSpeaker'
            // case IN_SpeakerOn_:
            rtY.DI_DriverSpeaker = true;
            if (rtDW.temporalCounter_i1_h >= 2000U) {
              rtDW.is_Ready_to_drive = IN_SpeakerOff;

              // Outport: '<Root>/DI_DriverSpeaker'
              rtY.DI_DriverSpeaker = false;
            }
          }
          break;

         default:
          // case IN_Waiting_for_driver:
          rtb_GOV_e_diSts = DI_STATUSES::WAITING_FOR_DRVR;
          if (rtb_NOT1) {
            rtDW.is_DI_running = IN_Driver_requested_start;
            rtb_GOV_e_diSts = DI_STATUSES::HV_START_REQ;
          }
          break;
        }
      }
      break;

     case IN_INIT:
      rtb_GOV_e_diSts = DI_STATUSES::DI_STS_INIT;
      rtDW.b_ReadyToDrive = false;

      // Outport: '<Root>/DI_DriverSpeaker'
      rtY.DI_DriverSpeaker = false;
      if (rtDW.GOV_e_diCmd == DI_CMD::DI_CMD_INIT) {
        rtDW.is_c2_driver_interface_lib = IN_DI_running;
        rtDW.is_DI_running = IN_Waiting_for_driver;
        rtb_GOV_e_diSts = DI_STATUSES::WAITING_FOR_DRVR;
      }
      break;

     default:
      // case IN_Vehicle_coasting:
      rtDW.b_ReadyToDrive = false;
      rtb_GOV_e_diSts = DI_STATUSES::DI_IDLE;
      break;
    }
  }

  // End of Chart: '<S2>/driver_interface'

  // If: '<S2>/If' incorporates:
  //   Logic: '<S2>/NOT'
  //   Logic: '<S2>/OR1'

  if ((!rtDW.b_ReadyToDrive) || rtb_b_DriverInterfaceError) {
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

    rtb_Merge = look1_binlc(rtU.DI_AccelPedalPosition1, rtConstP.pooled3,
      rtConstP.pooled3, 1U);

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

  rtb_Max = look1_binlc(rtb_Max, rtConstP.pooled4, rtConstP.pooled4, 20U);

  // Switch: '<S5>/Switch'
  rtb_Switch = (rtb_Max > 0.1);

  // Chart: '<S5>/vd_screenshot_check'
  if (rtDW.is_active_c3_controller_autogen == 0U) {
    rtDW.is_active_c3_controller_autogen = 1U;
    rtDW.is_c3_controller_autogen = IN_Run;
  } else if (rtDW.is_c3_controller_autogen == IN_Run) {
    if ((rtb_Merge >= 0.25) && (rtb_Switch != 0)) {
      rtDW.is_c3_controller_autogen = IN_Stop;
      rtb_Merge = 0.0;
    }

    // case IN_Stop:
  } else if ((rtb_Merge < 0.05) && (rtb_Switch == 0)) {
    rtDW.is_c3_controller_autogen = IN_Run;
  } else {
    rtb_Merge = 0.0;
  }

  // End of Chart: '<S5>/vd_screenshot_check'

  // Lookup_n-D: '<S5>/%pedal to %torque' incorporates:
  //   Product: '<S25>/Divide'

  rtDW.pedaltotorque = look1_binlx(rtb_Merge, rtConstP.pedaltotorque_bp01Data,
    rtConstP.pedaltotorque_tableData, 100U);

  // SignalConversion generated from: '<S25>/Vector Concatenate'
  rtb_VectorConcatenate[0] = rtDW.pedaltotorque;

  // S-Function (sfix_udelay): '<S25>/Tapped Delay'
  std::memcpy(&rtb_VectorConcatenate[1], &rtDW.TappedDelay_X[0], 10U * sizeof
              (real_T));

  // Sum: '<S25>/Sum of Elements'
  rtb_Merge = -0.0;
  for (rtb_Switch = 0; rtb_Switch < 11; rtb_Switch++) {
    rtb_Merge += rtb_VectorConcatenate[rtb_Switch];
  }

  // End of Sum: '<S25>/Sum of Elements'

  // Product: '<S25>/Divide'
  rtb_Merge /= 11.0;

  // Chart: '<S4>/mi_right' incorporates:
  //   Inport: '<Root>/AMK1_bDcOn'
  //   Inport: '<Root>/AMK1_bError'
  //   Inport: '<Root>/AMK1_bInverterOn'
  //   Inport: '<Root>/AMK1_bQuitDcOn'
  //   Inport: '<Root>/AMK1_bQuitInverterOn'
  //   Inport: '<Root>/AMK1_bWarn'

  if (rtDW.temporalCounter_i1 < 511U) {
    rtDW.temporalCounter_i1 = static_cast<uint16_T>(rtDW.temporalCounter_i1 + 1U);
  }

  if (rtDW.is_active_c10_controller_autoge == 0U) {
    rtDW.is_active_c10_controller_autoge = 1U;
    rtDW.is_c10_controller_autogen = IN_motorOff_waitingForGov;
    rtDW.MI_motorStatus = MI_STATUSES::OFF;

    // Outport: '<Root>/AMK1_bInverterOn_tx'
    rtY.AMK1_bInverterOn_tx = 0U;

    // Outport: '<Root>/AMK1_bDcOn_tx'
    rtY.AMK1_bDcOn_tx = 0U;

    // Outport: '<Root>/AMK1_bEnable'
    rtY.AMK1_bEnable = 0U;

    // Outport: '<Root>/AMK1_bErrorReset'
    rtY.AMK1_bErrorReset = 0U;

    // Outport: '<Root>/AMK1_TargetVelocity'
    rtY.AMK1_TargetVelocity = 0.0F;

    // Outport: '<Root>/AMK1_TorqueLimitPositiv'
    rtY.AMK1_TorqueLimitPositiv = 0.0F;

    // Outport: '<Root>/AMK1_TorqueLimitNegativ'
    rtY.AMK1_TorqueLimitNegativ = 0.0F;
    rtDW.MI_InverterEn = 0.0;
  } else {
    switch (rtDW.is_c10_controller_autogen) {
     case IN_AMK_errorDetected:
      if (rtDW.GOV_e_miCmd == MI_CMD::ERR_RESET) {
        rtDW.is_c10_controller_autogen = IN_AMK_errorReset;
        rtDW.is_AMK_errorReset = IN_enforceSetpointsZero_b;

        // Outport: '<Root>/AMK1_TargetVelocity'
        rtY.AMK1_TargetVelocity = 0.0F;

        // Outport: '<Root>/AMK1_TorqueLimitPositiv'
        rtY.AMK1_TorqueLimitPositiv = 0.0F;

        // Outport: '<Root>/AMK1_TorqueLimitNegativ'
        rtY.AMK1_TorqueLimitNegativ = 0.0F;

        // Outport: '<Root>/AMK1_bInverterOn_tx'
        rtY.AMK1_bInverterOn_tx = 0U;
      }
      break;

     case IN_AMK_errorReset:
      switch (rtDW.is_AMK_errorReset) {
       case IN_enforceSetpointsZero_b:
        // Outport: '<Root>/AMK1_bInverterOn_tx'
        rtY.AMK1_bInverterOn_tx = 0U;
        if (!rtU.AMK1_bInverterOn) {
          rtDW.is_AMK_errorReset = IN_toggleEnable;
          rtDW.temporalCounter_i1 = 0U;

          // Outport: '<Root>/AMK1_bEnable'
          rtY.AMK1_bEnable = 0U;
        }
        break;

       case IN_sendReset:
        // Outport: '<Root>/AMK1_bErrorReset'
        rtY.AMK1_bErrorReset = 1U;
        if (rtDW.temporalCounter_i1 >= 500U) {
          rtDW.is_AMK_errorReset = IN_toggleReset;

          // Outport: '<Root>/AMK1_bErrorReset'
          rtY.AMK1_bErrorReset = 0U;
        }
        break;

       case IN_toggleEnable:
        // Outport: '<Root>/AMK1_bEnable'
        rtY.AMK1_bEnable = 0U;
        if (rtDW.temporalCounter_i1 >= 500U) {
          rtDW.is_AMK_errorReset = IN_sendReset;
          rtDW.temporalCounter_i1 = 0U;

          // Outport: '<Root>/AMK1_bErrorReset'
          rtY.AMK1_bErrorReset = 1U;
        }
        break;

       default:
        // Outport: '<Root>/AMK1_bErrorReset'
        // case IN_toggleReset:
        rtY.AMK1_bErrorReset = 0U;
        if (rtU.AMK1_bWarn) {
          rtDW.is_AMK_errorReset = IN_NO_ACTIVE_CHILD;
          rtDW.is_c10_controller_autogen = IN_motorOff_waitingForGov;
          rtDW.MI_motorStatus = MI_STATUSES::OFF;

          // Outport: '<Root>/AMK1_bInverterOn_tx'
          rtY.AMK1_bInverterOn_tx = 0U;

          // Outport: '<Root>/AMK1_bDcOn_tx'
          rtY.AMK1_bDcOn_tx = 0U;

          // Outport: '<Root>/AMK1_bEnable'
          rtY.AMK1_bEnable = 0U;

          // Outport: '<Root>/AMK1_TargetVelocity'
          rtY.AMK1_TargetVelocity = 0.0F;

          // Outport: '<Root>/AMK1_TorqueLimitPositiv'
          rtY.AMK1_TorqueLimitPositiv = 0.0F;

          // Outport: '<Root>/AMK1_TorqueLimitNegativ'
          rtY.AMK1_TorqueLimitNegativ = 0.0F;
          rtDW.MI_InverterEn = 0.0;
        }
        break;
      }
      break;

     case IN_AMK_ready:
      if (rtU.AMK1_bError) {
        rtDW.is_c10_controller_autogen = IN_AMK_errorDetected;
        rtDW.MI_motorStatus = MI_STATUSES::MI_STS_ERROR;
      } else if (rtU.AMK1_bQuitInverterOn && (!rtU.AMK1_bError)) {
        rtDW.is_c10_controller_autogen = IN_AMK_running;
      } else {
        rtDW.MI_motorStatus = MI_STATUSES::READY;
        rtDW.MI_InverterEn = 1.0;
      }
      break;

     case IN_AMK_running:
      if (rtU.AMK1_bError) {
        rtDW.is_c10_controller_autogen = IN_AMK_errorDetected;
        rtDW.MI_motorStatus = MI_STATUSES::MI_STS_ERROR;
      } else if (rtDW.GOV_e_miCmd == MI_CMD::CMD_SHUTDOWN) {
        rtDW.is_c10_controller_autogen = IN_AMK_shutdown;
        rtDW.temporalCounter_i1 = 0U;

        // Outport: '<Root>/AMK1_TargetVelocity'
        rtY.AMK1_TargetVelocity = 0.0F;

        // Outport: '<Root>/AMK1_TorqueLimitPositiv'
        rtY.AMK1_TorqueLimitPositiv = 0.0F;

        // Outport: '<Root>/AMK1_TorqueLimitNegativ'
        rtY.AMK1_TorqueLimitNegativ = 0.0F;
        rtDW.MI_InverterEn = 0.0;
      } else {
        rtDW.MI_motorStatus = MI_STATUSES::RUNNING;

        // Outport: '<Root>/AMK1_TargetVelocity'
        rtY.AMK1_TargetVelocity = 10000.0F;

        // Outport: '<Root>/AMK1_TorqueLimitPositiv' incorporates:
        //   DataTypeConversion: '<S4>/Cast To Single1'

        rtY.AMK1_TorqueLimitPositiv = static_cast<real32_T>(rtb_Merge);

        // Outport: '<Root>/AMK1_TorqueLimitNegativ'
        rtY.AMK1_TorqueLimitNegativ = 0.0F;
      }
      break;

     case IN_AMK_shutdown:
      if (rtDW.temporalCounter_i1 >= 500U) {
        rtDW.is_c10_controller_autogen = IN_motorOff_waitingForGov;
        rtDW.MI_motorStatus = MI_STATUSES::OFF;

        // Outport: '<Root>/AMK1_bInverterOn_tx'
        rtY.AMK1_bInverterOn_tx = 0U;

        // Outport: '<Root>/AMK1_bDcOn_tx'
        rtY.AMK1_bDcOn_tx = 0U;

        // Outport: '<Root>/AMK1_bEnable'
        rtY.AMK1_bEnable = 0U;

        // Outport: '<Root>/AMK1_bErrorReset'
        rtY.AMK1_bErrorReset = 0U;

        // Outport: '<Root>/AMK1_TargetVelocity'
        rtY.AMK1_TargetVelocity = 0.0F;

        // Outport: '<Root>/AMK1_TorqueLimitPositiv'
        rtY.AMK1_TorqueLimitPositiv = 0.0F;

        // Outport: '<Root>/AMK1_TorqueLimitNegativ'
        rtY.AMK1_TorqueLimitNegativ = 0.0F;
        rtDW.MI_InverterEn = 0.0;
      }
      break;

     case IN_AMK_startup:
      switch (rtDW.is_AMK_startup) {
       case IN_commandOn:
        // Outport: '<Root>/AMK1_bEnable'
        rtY.AMK1_bEnable = 1U;

        // Outport: '<Root>/AMK1_bInverterOn_tx'
        rtY.AMK1_bInverterOn_tx = 1U;
        if (rtU.AMK1_bInverterOn) {
          rtDW.is_AMK_startup = IN_NO_ACTIVE_CHILD;
          rtDW.is_c10_controller_autogen = IN_AMK_ready;
          rtDW.MI_motorStatus = MI_STATUSES::READY;
          rtDW.MI_InverterEn = 1.0;
        } else if (rtU.AMK1_bError) {
          rtDW.is_AMK_startup = IN_NO_ACTIVE_CHILD;
          rtDW.is_c10_controller_autogen = IN_AMK_errorDetected;
          rtDW.MI_motorStatus = MI_STATUSES::MI_STS_ERROR;
        }
        break;

       case IN_enforceSetpointsZero:
        if (rtDW.temporalCounter_i1 >= 100U) {
          rtDW.is_AMK_startup = IN_commandOn;

          // Outport: '<Root>/AMK1_bEnable'
          rtY.AMK1_bEnable = 1U;

          // Outport: '<Root>/AMK1_bInverterOn_tx'
          rtY.AMK1_bInverterOn_tx = 1U;
        } else if (rtU.AMK1_bError) {
          rtDW.is_AMK_startup = IN_NO_ACTIVE_CHILD;
          rtDW.is_c10_controller_autogen = IN_AMK_errorDetected;
          rtDW.MI_motorStatus = MI_STATUSES::MI_STS_ERROR;
        }
        break;

       case IN_toggleDCon:
        // Outport: '<Root>/AMK1_bDcOn_tx'
        rtY.AMK1_bDcOn_tx = 1U;
        if (rtU.AMK1_bDcOn && rtU.AMK1_bQuitDcOn) {
          rtDW.is_AMK_startup = IN_enforceSetpointsZero;
          rtDW.temporalCounter_i1 = 0U;

          // Outport: '<Root>/AMK1_TargetVelocity'
          rtY.AMK1_TargetVelocity = 0.0F;

          // Outport: '<Root>/AMK1_TorqueLimitPositiv'
          rtY.AMK1_TorqueLimitPositiv = 0.0F;

          // Outport: '<Root>/AMK1_TorqueLimitNegativ'
          rtY.AMK1_TorqueLimitNegativ = 0.0F;
        } else if (rtU.AMK1_bError) {
          rtDW.is_AMK_startup = IN_NO_ACTIVE_CHILD;
          rtDW.is_c10_controller_autogen = IN_AMK_errorDetected;
          rtDW.MI_motorStatus = MI_STATUSES::MI_STS_ERROR;
        }
        break;

       default:
        // case IN_waiting_sysReady:
        if (rtU.AMK1_bWarn) {
          rtDW.is_AMK_startup = IN_toggleDCon;

          // Outport: '<Root>/AMK1_bDcOn_tx'
          rtY.AMK1_bDcOn_tx = 1U;
        } else if (rtU.AMK1_bError) {
          rtDW.is_AMK_startup = IN_NO_ACTIVE_CHILD;
          rtDW.is_c10_controller_autogen = IN_AMK_errorDetected;
          rtDW.MI_motorStatus = MI_STATUSES::MI_STS_ERROR;
        }
        break;
      }
      break;

     default:
      // Outport: '<Root>/AMK1_bInverterOn_tx'
      // case IN_motorOff_waitingForGov:
      rtY.AMK1_bInverterOn_tx = 0U;

      // Outport: '<Root>/AMK1_bDcOn_tx'
      rtY.AMK1_bDcOn_tx = 0U;

      // Outport: '<Root>/AMK1_bEnable'
      rtY.AMK1_bEnable = 0U;

      // Outport: '<Root>/AMK1_bErrorReset'
      rtY.AMK1_bErrorReset = 0U;
      if (rtDW.GOV_e_miCmd == MI_CMD::CMD_STARTUP) {
        rtDW.is_c10_controller_autogen = IN_AMK_startup;
        rtDW.is_AMK_startup = IN_waiting_sysReady;
        rtDW.MI_motorStatus = MI_STATUSES::STARTUP;
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

  if (rtDW.temporalCounter_i1_n < 511U) {
    rtDW.temporalCounter_i1_n = static_cast<uint16_T>(rtDW.temporalCounter_i1_n
      + 1U);
  }

  if (rtDW.is_active_c9_controller_autogen == 0U) {
    rtDW.is_active_c9_controller_autogen = 1U;
    rtDW.is_c9_controller_autogen = IN_motorOff_waitingForGov;
    rtDW.MI_motorStatus_o = MI_STATUSES::OFF;

    // Outport: '<Root>/AMK0_bInverterOn_tx'
    rtY.AMK0_bInverterOn_tx = 0U;

    // Outport: '<Root>/AMK0_bDcOn_tx'
    rtY.AMK0_bDcOn_tx = 0U;

    // Outport: '<Root>/AMK0_bEnable'
    rtY.AMK0_bEnable = 0U;

    // Outport: '<Root>/AMK0_bErrorReset'
    rtY.AMK0_bErrorReset = 0U;

    // Outport: '<Root>/AMK0_TargetVelocity'
    rtY.AMK0_TargetVelocity = 0.0F;

    // Outport: '<Root>/AMK0_TorqueLimitPositiv'
    rtY.AMK0_TorqueLimitPositiv = 0.0F;

    // Outport: '<Root>/AMK0_TorqueLimitNegativ'
    rtY.AMK0_TorqueLimitNegativ = 0.0F;
    rtDW.MI_InverterEn_p = 0.0;
  } else {
    switch (rtDW.is_c9_controller_autogen) {
     case IN_AMK_errorDetected:
      if (rtDW.GOV_e_miCmd == MI_CMD::ERR_RESET) {
        rtDW.is_c9_controller_autogen = IN_AMK_errorReset;
        rtDW.is_AMK_errorReset_d = IN_enforceSetpointsZero_b;

        // Outport: '<Root>/AMK0_TargetVelocity'
        rtY.AMK0_TargetVelocity = 0.0F;

        // Outport: '<Root>/AMK0_TorqueLimitPositiv'
        rtY.AMK0_TorqueLimitPositiv = 0.0F;

        // Outport: '<Root>/AMK0_TorqueLimitNegativ'
        rtY.AMK0_TorqueLimitNegativ = 0.0F;

        // Outport: '<Root>/AMK0_bInverterOn_tx'
        rtY.AMK0_bInverterOn_tx = 0U;
      }
      break;

     case IN_AMK_errorReset:
      switch (rtDW.is_AMK_errorReset_d) {
       case IN_enforceSetpointsZero_b:
        // Outport: '<Root>/AMK0_bInverterOn_tx'
        rtY.AMK0_bInverterOn_tx = 0U;
        if (!rtU.AMK0_bInverterOn) {
          rtDW.is_AMK_errorReset_d = IN_toggleEnable;
          rtDW.temporalCounter_i1_n = 0U;

          // Outport: '<Root>/AMK0_bEnable'
          rtY.AMK0_bEnable = 0U;
        }
        break;

       case IN_sendReset:
        // Outport: '<Root>/AMK0_bErrorReset'
        rtY.AMK0_bErrorReset = 1U;
        if (rtDW.temporalCounter_i1_n >= 500U) {
          rtDW.is_AMK_errorReset_d = IN_toggleReset;

          // Outport: '<Root>/AMK0_bErrorReset'
          rtY.AMK0_bErrorReset = 0U;
        }
        break;

       case IN_toggleEnable:
        // Outport: '<Root>/AMK0_bEnable'
        rtY.AMK0_bEnable = 0U;
        if (rtDW.temporalCounter_i1_n >= 500U) {
          rtDW.is_AMK_errorReset_d = IN_sendReset;
          rtDW.temporalCounter_i1_n = 0U;

          // Outport: '<Root>/AMK0_bErrorReset'
          rtY.AMK0_bErrorReset = 1U;
        }
        break;

       default:
        // Outport: '<Root>/AMK0_bErrorReset'
        // case IN_toggleReset:
        rtY.AMK0_bErrorReset = 0U;
        if (rtU.AMK0_bSystemReady) {
          rtDW.is_AMK_errorReset_d = IN_NO_ACTIVE_CHILD;
          rtDW.is_c9_controller_autogen = IN_motorOff_waitingForGov;
          rtDW.MI_motorStatus_o = MI_STATUSES::OFF;

          // Outport: '<Root>/AMK0_bInverterOn_tx'
          rtY.AMK0_bInverterOn_tx = 0U;

          // Outport: '<Root>/AMK0_bDcOn_tx'
          rtY.AMK0_bDcOn_tx = 0U;

          // Outport: '<Root>/AMK0_bEnable'
          rtY.AMK0_bEnable = 0U;

          // Outport: '<Root>/AMK0_TargetVelocity'
          rtY.AMK0_TargetVelocity = 0.0F;

          // Outport: '<Root>/AMK0_TorqueLimitPositiv'
          rtY.AMK0_TorqueLimitPositiv = 0.0F;

          // Outport: '<Root>/AMK0_TorqueLimitNegativ'
          rtY.AMK0_TorqueLimitNegativ = 0.0F;
          rtDW.MI_InverterEn_p = 0.0;
        }
        break;
      }
      break;

     case IN_AMK_ready:
      if (rtU.AMK0_bError) {
        rtDW.is_c9_controller_autogen = IN_AMK_errorDetected;
        rtDW.MI_motorStatus_o = MI_STATUSES::MI_STS_ERROR;
      } else if (rtU.AMK0_bQuitInverterOn && (!rtU.AMK0_bError)) {
        rtDW.is_c9_controller_autogen = IN_AMK_running;
      } else {
        rtDW.MI_motorStatus_o = MI_STATUSES::READY;
        rtDW.MI_InverterEn_p = 1.0;
      }
      break;

     case IN_AMK_running:
      if (rtU.AMK0_bError) {
        rtDW.is_c9_controller_autogen = IN_AMK_errorDetected;
        rtDW.MI_motorStatus_o = MI_STATUSES::MI_STS_ERROR;
      } else if (rtDW.GOV_e_miCmd == MI_CMD::CMD_SHUTDOWN) {
        rtDW.is_c9_controller_autogen = IN_AMK_shutdown;
        rtDW.temporalCounter_i1_n = 0U;

        // Outport: '<Root>/AMK0_TargetVelocity'
        rtY.AMK0_TargetVelocity = 0.0F;

        // Outport: '<Root>/AMK0_TorqueLimitPositiv'
        rtY.AMK0_TorqueLimitPositiv = 0.0F;

        // Outport: '<Root>/AMK0_TorqueLimitNegativ'
        rtY.AMK0_TorqueLimitNegativ = 0.0F;
        rtDW.MI_InverterEn_p = 0.0;
      } else {
        rtDW.MI_motorStatus_o = MI_STATUSES::RUNNING;

        // Outport: '<Root>/AMK0_TargetVelocity'
        rtY.AMK0_TargetVelocity = 10000.0F;

        // Outport: '<Root>/AMK0_TorqueLimitPositiv' incorporates:
        //   DataTypeConversion: '<S4>/Cast To Single4'

        rtY.AMK0_TorqueLimitPositiv = static_cast<real32_T>(rtb_Merge);

        // Outport: '<Root>/AMK0_TorqueLimitNegativ'
        rtY.AMK0_TorqueLimitNegativ = 0.0F;
      }
      break;

     case IN_AMK_shutdown:
      if (rtDW.temporalCounter_i1_n >= 500U) {
        rtDW.is_c9_controller_autogen = IN_motorOff_waitingForGov;
        rtDW.MI_motorStatus_o = MI_STATUSES::OFF;

        // Outport: '<Root>/AMK0_bInverterOn_tx'
        rtY.AMK0_bInverterOn_tx = 0U;

        // Outport: '<Root>/AMK0_bDcOn_tx'
        rtY.AMK0_bDcOn_tx = 0U;

        // Outport: '<Root>/AMK0_bEnable'
        rtY.AMK0_bEnable = 0U;

        // Outport: '<Root>/AMK0_bErrorReset'
        rtY.AMK0_bErrorReset = 0U;

        // Outport: '<Root>/AMK0_TargetVelocity'
        rtY.AMK0_TargetVelocity = 0.0F;

        // Outport: '<Root>/AMK0_TorqueLimitPositiv'
        rtY.AMK0_TorqueLimitPositiv = 0.0F;

        // Outport: '<Root>/AMK0_TorqueLimitNegativ'
        rtY.AMK0_TorqueLimitNegativ = 0.0F;
        rtDW.MI_InverterEn_p = 0.0;
      }
      break;

     case IN_AMK_startup:
      switch (rtDW.is_AMK_startup_e) {
       case IN_commandOn:
        // Outport: '<Root>/AMK0_bEnable'
        rtY.AMK0_bEnable = 1U;

        // Outport: '<Root>/AMK0_bInverterOn_tx'
        rtY.AMK0_bInverterOn_tx = 1U;
        if (rtU.AMK0_bInverterOn) {
          rtDW.is_AMK_startup_e = IN_NO_ACTIVE_CHILD;
          rtDW.is_c9_controller_autogen = IN_AMK_ready;
          rtDW.MI_motorStatus_o = MI_STATUSES::READY;
          rtDW.MI_InverterEn_p = 1.0;
        } else if (rtU.AMK0_bError) {
          rtDW.is_AMK_startup_e = IN_NO_ACTIVE_CHILD;
          rtDW.is_c9_controller_autogen = IN_AMK_errorDetected;
          rtDW.MI_motorStatus_o = MI_STATUSES::MI_STS_ERROR;
        }
        break;

       case IN_enforceSetpointsZero:
        if (rtDW.temporalCounter_i1_n >= 100U) {
          rtDW.is_AMK_startup_e = IN_commandOn;

          // Outport: '<Root>/AMK0_bEnable'
          rtY.AMK0_bEnable = 1U;

          // Outport: '<Root>/AMK0_bInverterOn_tx'
          rtY.AMK0_bInverterOn_tx = 1U;
        } else if (rtU.AMK0_bError) {
          rtDW.is_AMK_startup_e = IN_NO_ACTIVE_CHILD;
          rtDW.is_c9_controller_autogen = IN_AMK_errorDetected;
          rtDW.MI_motorStatus_o = MI_STATUSES::MI_STS_ERROR;
        }
        break;

       case IN_toggleDCon:
        // Outport: '<Root>/AMK0_bDcOn_tx'
        rtY.AMK0_bDcOn_tx = 1U;
        if (rtU.AMK0_bDcOn && rtU.AMK0_bQuitDcOn) {
          rtDW.is_AMK_startup_e = IN_enforceSetpointsZero;
          rtDW.temporalCounter_i1_n = 0U;

          // Outport: '<Root>/AMK0_TargetVelocity'
          rtY.AMK0_TargetVelocity = 0.0F;

          // Outport: '<Root>/AMK0_TorqueLimitPositiv'
          rtY.AMK0_TorqueLimitPositiv = 0.0F;

          // Outport: '<Root>/AMK0_TorqueLimitNegativ'
          rtY.AMK0_TorqueLimitNegativ = 0.0F;
        } else if (rtU.AMK0_bError) {
          rtDW.is_AMK_startup_e = IN_NO_ACTIVE_CHILD;
          rtDW.is_c9_controller_autogen = IN_AMK_errorDetected;
          rtDW.MI_motorStatus_o = MI_STATUSES::MI_STS_ERROR;
        }
        break;

       default:
        // case IN_waiting_sysReady:
        if (rtU.AMK0_bSystemReady) {
          rtDW.is_AMK_startup_e = IN_toggleDCon;

          // Outport: '<Root>/AMK0_bDcOn_tx'
          rtY.AMK0_bDcOn_tx = 1U;
        } else if (rtU.AMK0_bError) {
          rtDW.is_AMK_startup_e = IN_NO_ACTIVE_CHILD;
          rtDW.is_c9_controller_autogen = IN_AMK_errorDetected;
          rtDW.MI_motorStatus_o = MI_STATUSES::MI_STS_ERROR;
        }
        break;
      }
      break;

     default:
      // Outport: '<Root>/AMK0_bInverterOn_tx'
      // case IN_motorOff_waitingForGov:
      rtY.AMK0_bInverterOn_tx = 0U;

      // Outport: '<Root>/AMK0_bDcOn_tx'
      rtY.AMK0_bDcOn_tx = 0U;

      // Outport: '<Root>/AMK0_bEnable'
      rtY.AMK0_bEnable = 0U;

      // Outport: '<Root>/AMK0_bErrorReset'
      rtY.AMK0_bErrorReset = 0U;
      if (rtDW.GOV_e_miCmd == MI_CMD::CMD_STARTUP) {
        rtDW.is_c9_controller_autogen = IN_AMK_startup;
        rtDW.is_AMK_startup_e = IN_waiting_sysReady;
        rtDW.MI_motorStatus_o = MI_STATUSES::STARTUP;
      }
      break;
    }
  }

  // End of Chart: '<S4>/mi_left'

  // Chart: '<S1>/battery_monitor' incorporates:
  //   Inport: '<Root>/BM_HVnegContactorSts'
  //   Inport: '<Root>/BM_HVposContactorSts'
  //   Inport: '<Root>/BM_HvilFeedback'
  //   Inport: '<Root>/BM_prechrgContactorSts'

  if (rtDW.temporalCounter_i1_h0 < 8191U) {
    rtDW.temporalCounter_i1_h0 = static_cast<uint16_T>
      (rtDW.temporalCounter_i1_h0 + 1U);
  }

  if (rtDW.is_active_c4_controller_autogen == 0U) {
    rtDW.is_active_c4_controller_autogen = 1U;
    rtDW.is_c4_controller_autogen = IN_InitialState;
    rtb_GOV_e_bmSts = BM_STATUSES::BM_INIT;
  } else {
    switch (rtDW.is_c4_controller_autogen) {
     case IN_InitialState:
      rtb_GOV_e_bmSts = BM_STATUSES::BM_INIT;
      if (rtU.BM_prechrgContactorSts && rtU.BM_HVnegContactorSts &&
          rtU.BM_HVposContactorSts && (rtDW.GOV_e_bmCmd == BM_CMD::HV_STARTUP) &&
          rtU.BM_HvilFeedback) {
        rtDW.is_c4_controller_autogen = IN_StartupSuperstate;
        rtb_GOV_e_bmSts = BM_STATUSES::BM_IDLE;
      }
      break;

     case IN_InterruptState:
      rtb_GOV_e_bmSts = BM_STATUSES::HVIL_INTERRUPT;
      if ((rtDW.temporalCounter_i1_h0 >= 5000U) && rtU.BM_HvilFeedback) {
        rtDW.is_c4_controller_autogen = IN_InitialState;
        rtb_GOV_e_bmSts = BM_STATUSES::BM_INIT;
      }
      break;

     case IN_LowSoC:
      rtb_GOV_e_bmSts = BM_STATUSES::BM_LOW_SOC;
      break;

     default:
      // case IN_StartupSuperstate:
      if (!rtU.BM_HvilFeedback) {
        rtDW.is_c4_controller_autogen = IN_InterruptState;
        rtDW.temporalCounter_i1_h0 = 0U;
        rtb_GOV_e_bmSts = BM_STATUSES::HVIL_INTERRUPT;
      } else {
        rtDW.is_c4_controller_autogen = IN_LowSoC;
        rtb_GOV_e_bmSts = BM_STATUSES::BM_LOW_SOC;
      }
      break;
    }
  }

  // End of Chart: '<S1>/battery_monitor'

  // Chart: '<S1>/bm_control'
  if (rtDW.temporalCounter_i1_b < 8191U) {
    rtDW.temporalCounter_i1_b = static_cast<uint16_T>(rtDW.temporalCounter_i1_b
      + 1U);
  }

  if (rtDW.is_active_c5_controller_autogen == 0U) {
    rtDW.is_active_c5_controller_autogen = 1U;
    rtDW.is_c5_controller_autogen = IN_StartupCMD;

    // Outport: '<Root>/BM_PrechargeContactorCmd'
    rtY.BM_PrechargeContactorCmd = false;

    // Outport: '<Root>/BM_HVnegContactorCmd'
    rtY.BM_HVnegContactorCmd = false;

    // Outport: '<Root>/BM_HVposContactorCmd'
    rtY.BM_HVposContactorCmd = false;
  } else if (rtDW.is_c5_controller_autogen == IN_StartupCMD) {
    if (rtb_GOV_e_bmSts == BM_STATUSES::BM_IDLE) {
      rtDW.is_c5_controller_autogen = IN_StartupSuperstate_b;
      rtDW.is_StartupSuperstate = IN_Close_HVneg1;
      rtDW.temporalCounter_i1_b = 0U;

      // Outport: '<Root>/BM_PrechargeContactorCmd'
      rtY.BM_PrechargeContactorCmd = false;

      // Outport: '<Root>/BM_HVnegContactorCmd'
      rtY.BM_HVnegContactorCmd = true;

      // Outport: '<Root>/BM_HVposContactorCmd'
      rtY.BM_HVposContactorCmd = false;
    }

    // case IN_StartupSuperstate:
  } else if ((rtb_GOV_e_bmSts == BM_STATUSES::HVIL_INTERRUPT) ||
             (rtb_GOV_e_bmSts == BM_STATUSES::BM_LOW_SOC)) {
    rtDW.is_StartupSuperstate = IN_NO_ACTIVE_CHILD;
    rtDW.is_c5_controller_autogen = IN_StartupCMD;

    // Outport: '<Root>/BM_PrechargeContactorCmd'
    rtY.BM_PrechargeContactorCmd = false;

    // Outport: '<Root>/BM_HVnegContactorCmd'
    rtY.BM_HVnegContactorCmd = false;

    // Outport: '<Root>/BM_HVposContactorCmd'
    rtY.BM_HVposContactorCmd = false;
  } else {
    switch (rtDW.is_StartupSuperstate) {
     case IN_Close_HVneg1:
      if ((rtDW.temporalCounter_i1_b >= 100U) && (rtb_GOV_e_bmSts == BM_STATUSES::
           BM_STARTUP)) {
        rtDW.is_StartupSuperstate = IN_Close_precharge;
        rtDW.temporalCounter_i1_b = 0U;

        // Outport: '<Root>/BM_PrechargeContactorCmd'
        rtY.BM_PrechargeContactorCmd = true;

        // Outport: '<Root>/BM_HVnegContactorCmd'
        rtY.BM_HVnegContactorCmd = true;

        // Outport: '<Root>/BM_HVposContactorCmd'
        rtY.BM_HVposContactorCmd = false;
      }
      break;

     case IN_Close_HVpos:
      if ((rtDW.temporalCounter_i1_b >= 100U) && (rtb_GOV_e_bmSts == BM_STATUSES::
           PRECHARGE)) {
        rtDW.is_StartupSuperstate = IN_Open_precharge;

        // Outport: '<Root>/BM_PrechargeContactorCmd'
        rtY.BM_PrechargeContactorCmd = false;

        // Outport: '<Root>/BM_HVnegContactorCmd'
        rtY.BM_HVnegContactorCmd = true;

        // Outport: '<Root>/BM_HVposContactorCmd'
        rtY.BM_HVposContactorCmd = true;
      }
      break;

     case IN_Close_precharge:
      if ((rtDW.temporalCounter_i1_b >= 6500U) && (rtb_GOV_e_bmSts ==
           BM_STATUSES::INIT_PRECHARGE)) {
        rtDW.is_StartupSuperstate = IN_Close_HVpos;
        rtDW.temporalCounter_i1_b = 0U;

        // Outport: '<Root>/BM_PrechargeContactorCmd'
        rtY.BM_PrechargeContactorCmd = true;

        // Outport: '<Root>/BM_HVnegContactorCmd'
        rtY.BM_HVnegContactorCmd = true;

        // Outport: '<Root>/BM_HVposContactorCmd'
        rtY.BM_HVposContactorCmd = true;
      }
      break;

     default:
      // case IN_Open_precharge:
      if (rtb_GOV_e_bmSts == BM_STATUSES::BM_RUNNING) {
        rtDW.is_StartupSuperstate = IN_Open_precharge;

        // Outport: '<Root>/BM_PrechargeContactorCmd'
        rtY.BM_PrechargeContactorCmd = false;

        // Outport: '<Root>/BM_HVnegContactorCmd'
        rtY.BM_HVnegContactorCmd = true;

        // Outport: '<Root>/BM_HVposContactorCmd'
        rtY.BM_HVposContactorCmd = true;
      } else {
        // Outport: '<Root>/BM_PrechargeContactorCmd'
        rtY.BM_PrechargeContactorCmd = false;

        // Outport: '<Root>/BM_HVnegContactorCmd'
        rtY.BM_HVnegContactorCmd = true;

        // Outport: '<Root>/BM_HVposContactorCmd'
        rtY.BM_HVposContactorCmd = true;
      }
      break;
    }
  }

  // End of Chart: '<S1>/bm_control'

  // Outport: '<Root>/DI_BrakeLightEn' incorporates:
  //   Switch: '<S2>/Switch'

  rtY.DI_BrakeLightEn = (rtb_Max > 0.1);

  // Outport: '<Root>/GOV_Status' incorporates:
  //   DataTypeConversion: '<Root>/Cast To Single'

  rtY.GOV_Status = static_cast<uint8_T>(rtDW.GOV_e_govSts);

  // Switch: '<S4>/overallMotorState' incorporates:
  //   Delay: '<S4>/Delay'
  //   RelationalOperator: '<S4>/GreaterThan'

  if (rtDW.MI_motorStatus_o == rtDW.MI_motorStatus) {
    rtb_overallMotorState = rtDW.MI_motorStatus_o;
  } else {
    rtb_overallMotorState = rtDW.Delay_DSTATE_k;
  }

  // End of Switch: '<S4>/overallMotorState'

  // Switch: '<S4>/Switch' incorporates:
  //   Constant: '<S4>/Constant'
  //   Constant: '<S4>/Constant1'
  //   Logic: '<S4>/OR'
  //   RelationalOperator: '<S4>/motorErrorActive'
  //   RelationalOperator: '<S4>/motorErrorActive1'

  if ((rtDW.MI_motorStatus == MI_STATUSES::MI_STS_ERROR) ||
      (rtDW.MI_motorStatus_o == MI_STATUSES::MI_STS_ERROR)) {
    rtb_Switch_m = MI_STATUSES::MI_STS_ERROR;
  } else {
    rtb_Switch_m = rtb_overallMotorState;
  }

  // End of Switch: '<S4>/Switch'

  // Outport: '<Root>/MI_Status' incorporates:
  //   DataTypeConversion: '<Root>/Cast To Single1'

  rtY.MI_Status = static_cast<uint8_T>(rtb_Switch_m);

  // Outport: '<Root>/Di_Status' incorporates:
  //   DataTypeConversion: '<Root>/Cast To Single2'

  rtY.Di_Status = static_cast<uint8_T>(rtb_GOV_e_diSts);

  // Outport: '<Root>/BM_Status' incorporates:
  //   DataTypeConversion: '<Root>/Cast To Single3'

  rtY.BM_Status = static_cast<uint8_T>(rtb_GOV_e_bmSts);

  // Outport: '<Root>/MI_InverterEn' incorporates:
  //   Logic: '<S4>/AND'

  rtY.MI_InverterEn = ((rtDW.MI_InverterEn_p != 0.0) && (rtDW.MI_InverterEn !=
    0.0));

  // Update for Delay: '<S3>/Delay'
  rtDW.Delay_DSTATE = rtb_GOV_e_bmSts;

  // Update for Delay: '<S3>/Delay1'
  rtDW.Delay1_DSTATE = rtb_Switch_m;

  // Update for Delay: '<S3>/Delay2'
  rtDW.Delay2_DSTATE = rtb_GOV_e_diSts;

  // Update for S-Function (sfix_udelay): '<S25>/Tapped Delay'
  for (rtb_Switch = 0; rtb_Switch < 9; rtb_Switch++) {
    rtDW.TappedDelay_X[rtb_Switch] = rtDW.TappedDelay_X[rtb_Switch + 1];
  }

  rtDW.TappedDelay_X[9] = rtDW.pedaltotorque;

  // End of Update for S-Function (sfix_udelay): '<S25>/Tapped Delay'

  // Update for Delay: '<S4>/Delay'
  rtDW.Delay_DSTATE_k = rtb_overallMotorState;
}

// Model initialize function
void controller_autogen::initialize()
{
  // InitializeConditions for Delay: '<S4>/Delay'
  rtDW.Delay_DSTATE_k = MI_STATUSES::OFF;
}

// Model terminate function
void controller_autogen::terminate()
{
  // (no terminate code required)
}

// Constructor
controller_autogen::controller_autogen() :
  rtU(),
  rtY(),
  rtDW(),
  rtM()
{
  // Currently there is no constructor body generated.
}

// Destructor
controller_autogen::~controller_autogen()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
controller_autogen::RT_MODEL * controller_autogen::getRTM()
{
  return (&rtM);
}

//
// File trailer for generated code.
//
// [EOF]
//
