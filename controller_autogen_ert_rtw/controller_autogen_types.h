//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: controller_autogen_types.h
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
#ifndef RTW_HEADER_controller_autogen_types_h_
#define RTW_HEADER_controller_autogen_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_BM_STATUSES_
#define DEFINED_TYPEDEF_FOR_BM_STATUSES_

enum class BM_STATUSES
  : int32_T {
  BM_UNKNOWN = 0,                      // Default value
  BM_INIT,
  BM_IDLE,
  BM_STARTUP,
  INIT_PRECHARGE,
  PRECHARGE,
  BM_RUNNING,
  HVIL_INTERRUPT,
  BM_LOW_SOC,
  ERR_RUNNING
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_DI_CMD_
#define DEFINED_TYPEDEF_FOR_DI_CMD_

enum class DI_CMD
  : int32_T {
  DI_CMD_INIT = 0,                     // Default value
  HV_ON,
  READY_TO_DRIVE,
  DI_SHUTDOWN,
  RUN_ERROR,
  DI_ERR_RESET
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_DI_STATUSES_
#define DEFINED_TYPEDEF_FOR_DI_STATUSES_

enum class DI_STATUSES
  : int32_T {
  DI_UNKNOWN = 0,                      // Default value
  DI_STS_INIT,
  DI_IDLE,
  DI_STARTUP,
  WAITING_FOR_DRVR,
  READY_TO_DRIVE_REQ,
  HV_START_REQ,
  DI_RUNNING,
  DI_ERROR
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_MI_STATUSES_
#define DEFINED_TYPEDEF_FOR_MI_STATUSES_

enum class MI_STATUSES
  : int32_T {
  UNKNOWN = 0,                         // Default value
  STS_INIT,
  STARTUP,
  READY,
  RUNNING,
  SHUTDOWN,
  MI_STS_ERROR,
  OFF
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_MI_CMD_
#define DEFINED_TYPEDEF_FOR_MI_CMD_

enum class MI_CMD
  : int32_T {
  CMD_INIT = 0,                        // Default value
  IDLE,
  CMD_STARTUP,
  CMD_SHUTDOWN,
  ERR_RESET
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_GOV_STATUSES_
#define DEFINED_TYPEDEF_FOR_GOV_STATUSES_

enum class GOV_STATUSES
  : int32_T {
  GOV_INIT = 0,                        // Default value
  GOV_STARTUP,
  GOV_RUNNING,
  GOV_SHUTDOWN,
  HV_STARTUP_ERROR,
  MOTOR_STARTUP_ERROR,
  GOV_DI_ERROR,
  HV_RUN_ERROR,
  MOTOR_RUN_ERROR
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_BM_CMD_
#define DEFINED_TYPEDEF_FOR_BM_CMD_

enum class BM_CMD
  : int32_T {
  BM_CMD_INIT = 0,                     // Default value
  HV_STARTUP,
  HV_SHUTDOWN
};

#endif
#endif                                // RTW_HEADER_controller_autogen_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
