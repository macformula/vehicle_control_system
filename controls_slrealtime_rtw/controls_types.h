/*
 * controls_types.h
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

#ifndef RTW_HEADER_controls_types_h_
#define RTW_HEADER_controls_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_BM_STATUSES_
#define DEFINED_TYPEDEF_FOR_BM_STATUSES_

typedef enum {
  BM_UNKNOWN = 0,                      /* Default value */
  BM_INIT,
  BM_IDLE,
  BM_STARTUP,
  INIT_PRECHARGE,
  PRECHARGE,
  BM_RUNNING,
  HVIL_INTERRUPT,
  BM_LOW_SOC,
  ERR_RUNNING
} BM_STATUSES;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DI_CMD_
#define DEFINED_TYPEDEF_FOR_DI_CMD_

typedef enum {
  DI_CMD_INIT = 0,                     /* Default value */
  HV_ON,
  READY_TO_DRIVE,
  DI_SHUTDOWN,
  RUN_ERROR,
  DI_ERR_RESET
} DI_CMD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DI_STATUSES_
#define DEFINED_TYPEDEF_FOR_DI_STATUSES_

typedef enum {
  DI_UNKNOWN = 0,                      /* Default value */
  DI_STS_INIT,
  DI_IDLE,
  DI_STARTUP,
  WAITING_FOR_DRVR,
  READY_TO_DRIVE_REQ,
  HV_START_REQ,
  DI_RUNNING,
  DI_ERROR
} DI_STATUSES;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MI_STATUSES_
#define DEFINED_TYPEDEF_FOR_MI_STATUSES_

typedef enum {
  UNKNOWN = 0,                         /* Default value */
  STS_INIT,
  STARTUP,
  READY,
  RUNNING,
  SHUTDOWN,
  MI_STS_ERROR,
  OFF
} MI_STATUSES;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MI_CMD_
#define DEFINED_TYPEDEF_FOR_MI_CMD_

typedef enum {
  CMD_INIT = 0,                        /* Default value */
  IDLE,
  CMD_STARTUP,
  CMD_SHUTDOWN,
  ERR_RESET
} MI_CMD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_GOV_STATUSES_
#define DEFINED_TYPEDEF_FOR_GOV_STATUSES_

typedef enum {
  GOV_INIT = 0,                        /* Default value */
  GOV_STARTUP,
  GOV_RUNNING,
  GOV_SHUTDOWN,
  HV_STARTUP_ERROR,
  MOTOR_STARTUP_ERROR,
  GOV_DI_ERROR,
  HV_RUN_ERROR,
  MOTOR_RUN_ERROR
} GOV_STATUSES;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BM_CMD_
#define DEFINED_TYPEDEF_FOR_BM_CMD_

typedef enum {
  BM_CMD_INIT = 0,                     /* Default value */
  HV_STARTUP,
  HV_SHUTDOWN
} BM_CMD;

#endif

/* Parameters (default storage) */
typedef struct P_controls_T_ P_controls_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_controls_T RT_MODEL_controls_T;

#endif                                 /* RTW_HEADER_controls_types_h_ */
