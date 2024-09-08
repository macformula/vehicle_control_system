#include "plant_cal.h"
#include "plant.h"

/* Storage class 'PageSwitching' */
plant_cal_type plant_cal_impl = {
  /* Computed Parameter: pt_CAN_IN_Y0
   * Referenced by: '<S4>/pt_CAN_IN'
   */
  {
    {
      0.0,                             /* AMK0_TargetVelocity */
      0.0,                             /* AMK0_TorqueLimitNegativ */
      0.0,                             /* AMK0_TorqueLimitPositiv */
      0.0,                             /* AMK0_bDcOn */
      0.0,                             /* AMK0_bEnable */
      0.0,                             /* AMK0_bErrorReset */
      0.0                              /* AMK0_bInverterOn */
    },                                 /* ptCAN_AMK0_Setpoints1_Left */

    {
      0.0,                             /* AMK1_TargetVelocity */
      0.0,                             /* AMK1_TorqueLimitNegativ */
      0.0,                             /* AMK1_TorqueLimitPositiv */
      0.0,                             /* AMK1_bDcOn */
      0.0,                             /* AMK1_bEnable */
      0.0,                             /* AMK1_bErrorReset */
      0.0                              /* AMK1_bInverterOn */
    }                                  /* ptCAN_AMK1_Setpoints1_Right */
  },

  /* Computed Parameter: pt_CAN_IN_Y0_h
   * Referenced by: '<S5>/pt_CAN_IN'
   */
  {
    0.0,                               /* AIR_neg */
    0.0,                               /* AIR_pos */
    0.0                                /* precharge */
  },

  /* Expression: 0
   * Referenced by: '<S10>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S10>/Constant1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S11>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S11>/Constant1'
   */
  0.0,

  /* Expression: 0.0
   * Referenced by: '<S14>/Delay'
   */
  0.0,

  /* Expression: 0.0
   * Referenced by: '<S14>/Delay1'
   */
  0.0,

  /* Expression: 0.0
   * Referenced by: '<S14>/Delay2'
   */
  0.0,

  /* Computed Parameter: CANandLINSetup_P1_Size
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  { 1.0, 45.0 },

  /* Expression: [moduleInitValues, canChn1InitValues, canChn2InitValues, canChn3InitValues, canChn4InitValues, linChn1InitValues, linChn2InitValues]
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  { 614.0, 1.0, 1.0, -1.0, -1.0, 2.0, 4.0, 1.0, 31.0, 8.0, 2.0, 1.0, 5.0, 2.0,
    2.0, 4.0, 1.0, 31.0, 8.0, 2.0, 1.0, 5.0, 2.0, 1.0, 2.0, 1.0, 31.0, 8.0, 2.0,
    1.0, 5.0, 2.0, 1.0, 2.0, 1.0, 31.0, 8.0, 2.0, 1.0, 5.0, 2.0, 1.0, 19200.0,
    1.0, 19200.0 },

  /* Computed Parameter: CANandLINSetup_P2_Size
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: canInitStructArray
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  0.0,

  /* Computed Parameter: CANandLINSetup_P3_Size
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: canTermStructArray
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  0.0,

  /* Computed Parameter: CANRead1_P1_Size
   * Referenced by: '<Root>/CAN Read 1'
   */
  { 1.0, 13.0 },

  /* Expression: initValues
   * Referenced by: '<Root>/CAN Read 1'
   */
  { 614.0, 1.0, -1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 2.0, 1.0, 2.0 },

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant1'
   */
  0.0,

  /* Computed Parameter: CANWrite_P1_Size
   * Referenced by: '<Root>/CAN Write '
   */
  { 1.0, 10.0 },

  /* Expression: initValues
   * Referenced by: '<Root>/CAN Write '
   */
  { 614.0, 1.0, -1.0, 0.0, 1.0, 1.0, 0.0, 4.0, 0.0, 0.0 },

  /* Computed Parameter: CANWrite1_P1_Size
   * Referenced by: '<Root>/CAN Write 1'
   */
  { 1.0, 10.0 },

  /* Expression: initValues
   * Referenced by: '<Root>/CAN Write 1'
   */
  { 614.0, 1.0, -1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 0.0 },

  /* Expression: 0.5
   * Referenced by: '<S10>/Constant'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S10>/Switch2'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S11>/Constant'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S11>/Switch2'
   */
  0.0,

  /* Computed Parameter: CANRead_P1_Size
   * Referenced by: '<Root>/CAN Read '
   */
  { 1.0, 13.0 },

  /* Expression: initValues
   * Referenced by: '<Root>/CAN Read '
   */
  { 614.0, 1.0, -1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 2.0, 1.0, 2.0 },

  /* Expression: 1
   * Referenced by: '<Root>/APPS'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/BPPS'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/HVILStatus'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/StartButton'
   */
  1.0,

  /* Expression: 0.5219295562081905
   * Referenced by: '<Root>/SteeringAngle'
   */
  0.52192955620819048,

  /* Computed Parameter: Constant3_Value
   * Referenced by: '<S10>/Constant3'
   */
  0.0F,

  /* Computed Parameter: Constant6_Value
   * Referenced by: '<S10>/Constant6'
   */
  0.0F,

  /* Computed Parameter: Constant5_Value
   * Referenced by: '<S10>/Constant5'
   */
  0.0F,

  /* Computed Parameter: Constant4_Value
   * Referenced by: '<S10>/Constant4'
   */
  0.0F,

  /* Computed Parameter: Constant3_Value_d
   * Referenced by: '<S11>/Constant3'
   */
  0.0F,

  /* Computed Parameter: Constant6_Value_b
   * Referenced by: '<S11>/Constant6'
   */
  0.0F,

  /* Computed Parameter: Constant5_Value_o
   * Referenced by: '<S11>/Constant5'
   */
  0.0F,

  /* Computed Parameter: Constant4_Value_k
   * Referenced by: '<S11>/Constant4'
   */
  0.0F
};

plant_cal_type *plant_cal = &plant_cal_impl;
