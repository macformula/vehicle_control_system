#include "controls_cal.h"
#include "controls.h"

/* Storage class 'PageSwitching' */
controls_cal_type controls_cal_impl = {
  /* Mask Parameter: TappedDelay_vinit
   * Referenced by: '<S28>/Tapped Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S11>/Constant1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S11>/Constant2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S8>/Constant5'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S8>/Constant4'
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

  /* Expression: 0
   * Referenced by: '<Root>/Constant1'
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
   * Referenced by: '<Root>/Constant13'
   */
  1.0,

  /* Expression: 100
   * Referenced by: '<Root>/Constant14'
   */
  100.0,

  /* Computed Parameter: CANRead_P1_Size
   * Referenced by: '<Root>/CAN Read '
   */
  { 1.0, 13.0 },

  /* Expression: initValues
   * Referenced by: '<Root>/CAN Read '
   */
  { 614.0, 1.0, -1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 2.0, 1.0, 2.0 },

  /* Expression: 5000
   * Referenced by: '<S8>/Constant'
   */
  5000.0,

  /* Expression: 0
   * Referenced by: '<S15>/LowerPotentiometerLimit1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S15>/UpperPotentiometerLimit1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S16>/LowerPotentiometerLimit1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S16>/UpperPotentiometerLimit1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S17>/LowerPotentiometerLimit1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S17>/UpperPotentiometerLimit1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S18>/LowerPotentiometerLimit1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S18>/UpperPotentiometerLimit1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S19>/LowerPotentiometerLimit1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S19>/UpperPotentiometerLimit1'
   */
  1.0,

  /* Expression: 0.1
   * Referenced by: '<S11>/Constant'
   */
  0.1,

  /* Expression: [0 1]
   * Referenced by: '<S5>/AccelPedalMap'
   */
  { 0.0, 1.0 },

  /* Expression: [0 1]
   * Referenced by: '<S5>/AccelPedalMap'
   */
  { 0.0, 1.0 },

  /* Expression: 0
   * Referenced by: '<S5>/Constant'
   */
  0.0,

  /* Expression: [0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100]
   * Referenced by: '<S5>/BrakePedalMap'
   */
  { 0.0, 5.0, 10.0, 15.0, 20.0, 25.0, 30.0, 35.0, 40.0, 45.0, 50.0, 55.0, 60.0,
    65.0, 70.0, 75.0, 80.0, 85.0, 90.0, 95.0, 100.0 },

  /* Expression: [0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100]
   * Referenced by: '<S5>/BrakePedalMap'
   */
  { 0.0, 5.0, 10.0, 15.0, 20.0, 25.0, 30.0, 35.0, 40.0, 45.0, 50.0, 55.0, 60.0,
    65.0, 70.0, 75.0, 80.0, 85.0, 90.0, 95.0, 100.0 },

  /* Expression: 0.1
   * Referenced by: '<S8>/Switch'
   */
  0.1,

  /* Expression: 1
   * Referenced by: '<S8>/Constant7'
   */
  1.0,

  /* Expression: [linspace(0,1000,101)]
   * Referenced by: '<S8>/%pedal to %torque'
   */
  { 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0, 110.0,
    120.0, 130.0, 140.0, 150.0, 160.0, 170.0, 180.0, 190.0, 200.0, 210.0, 220.0,
    230.0, 240.0, 250.0, 260.0, 270.0, 280.0, 290.0, 300.0, 310.0, 320.0, 330.0,
    340.0, 350.0, 360.0, 370.0, 380.0, 390.0, 400.0, 410.0, 420.0, 430.0, 440.0,
    450.0, 460.0, 470.0, 480.0, 490.0, 500.0, 510.0, 520.0, 530.0, 540.0, 550.0,
    560.0, 570.0, 580.0, 590.0, 600.0, 610.0, 620.0, 630.0, 640.0, 650.0, 660.0,
    670.0, 680.0, 690.0, 700.0, 710.0, 720.0, 730.0, 740.0, 750.0, 760.0, 770.0,
    780.0, 790.0, 800.0, 810.0, 820.0, 830.0, 840.0, 850.0, 860.0, 870.0, 880.0,
    890.0, 900.0, 910.0, 920.0, 930.0, 940.0, 950.0, 960.0, 970.0, 980.0, 990.0,
    1000.0 },

  /* Expression: [linspace(0,1,101)]
   * Referenced by: '<S8>/%pedal to %torque'
   */
  { 0.0, 0.01, 0.02, 0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.1, 0.11, 0.12,
    0.13, 0.14, 0.15, 0.16, 0.17, 0.18, 0.19, 0.2, 0.21, 0.22, 0.23, 0.24, 0.25,
    0.26, 0.27, 0.28, 0.29, 0.3, 0.31, 0.32, 0.33, 0.34, 0.35, 0.36, 0.37, 0.38,
    0.39, 0.4, 0.41, 0.42, 0.43, 0.44, 0.45, 0.46, 0.47, 0.48, 0.49, 0.5, 0.51,
    0.52, 0.53, 0.54, 0.55, 0.56, 0.57, 0.58, 0.59, 0.6, 0.61, 0.62, 0.63, 0.64,
    0.65, 0.66, 0.67, 0.68, 0.69, 0.7, 0.71, 0.72, 0.73, 0.74, 0.75, 0.76, 0.77,
    0.78, 0.79, 0.8, 0.81, 0.82, 0.83, 0.84, 0.85, 0.86, 0.87, 0.88, 0.89, 0.9,
    0.91, 0.92, 0.93, 0.94, 0.95, 0.96, 0.97, 0.98, 0.99, 1.0 },

  /* Expression: 0
   * Referenced by: '<S8>/Constant3'
   */
  0.0,

  /* Expression: 5000
   * Referenced by: '<S8>/Constant1'
   */
  5000.0,

  /* Expression: 0
   * Referenced by: '<S8>/Constant2'
   */
  0.0,

  /* Computed Parameter: CANWrite_P1_Size
   * Referenced by: '<Root>/CAN Write '
   */
  { 1.0, 10.0 },

  /* Expression: initValues
   * Referenced by: '<Root>/CAN Write '
   */
  { 614.0, 1.0, -1.0, 1.0, 1.0, 1.0, 0.0, 2.0, 0.0, 0.0 },

  /* Computed Parameter: CANWrite1_P1_Size
   * Referenced by: '<Root>/CAN Write 1'
   */
  { 1.0, 10.0 },

  /* Expression: initValues
   * Referenced by: '<Root>/CAN Write 1'
   */
  { 614.0, 1.0, -1.0, 0.0, 1.0, 1.0, 0.0, 2.0, 0.0, 0.0 },

  /* Expression: 0.1
   * Referenced by: '<S5>/Switch'
   */
  0.1,

  /* Expression: 0
   * Referenced by: '<Root>/Constant2'
   */
  0.0,

  /* Expression: 0.2
   * Referenced by: '<S8>/Constant6'
   */
  0.2,

  /* Expression: 1
   * Referenced by: '<S29>/Constant'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S29>/Set lower bound to 0'
   */
  0.0,

  /* Expression: BM_STATUSES.BM_UNKNOWN
   * Referenced by: '<S6>/Delay'
   */
  BM_UNKNOWN,

  /* Expression: DI_STATUSES.DI_UNKNOWN
   * Referenced by: '<S6>/Delay2'
   */
  DI_UNKNOWN,

  /* Expression: MI_STATUSES.MI_STS_ERROR
   * Referenced by: '<S7>/Constant1'
   */
  MI_STS_ERROR,

  /* Expression: MI_STATUSES.UNKNOWN
   * Referenced by: '<S6>/Delay1'
   */
  UNKNOWN,

  /* Expression: MI_STATUSES.MI_STS_ERROR
   * Referenced by: '<S7>/Constant'
   */
  MI_STS_ERROR,

  /* Expression: MI_STATUSES.OFF
   * Referenced by: '<S7>/Delay'
   */
  OFF,

  /* Computed Parameter: Constant2_Value_e
   * Referenced by: '<S5>/Constant2'
   */
  0.5F,

  /* Computed Parameter: Constant1_Value_k
   * Referenced by: '<S5>/Constant1'
   */
  0.0F,

  /* Computed Parameter: Constant4_Value_i
   * Referenced by: '<S5>/Constant4'
   */
  true,

  /* Computed Parameter: Constant3_Value_m
   * Referenced by: '<S5>/Constant3'
   */
  false
};

controls_cal_type *controls_cal = &controls_cal_impl;
