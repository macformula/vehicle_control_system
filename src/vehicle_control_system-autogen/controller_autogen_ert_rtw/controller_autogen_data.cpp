//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: controller_autogen_data.cpp
//
// Code generated for Simulink model 'controller_autogen'.
//
// Model version                  : 1.91
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Thu Jun 13 00:14:43 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex-M
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#include "controller_autogen.h"

// Constant parameters (default storage)
const controller_autogen::ConstP rtConstP{
  // Pooled Parameter (Expression: [0 1])
  //  Referenced by: '<S2>/AccelPedalMap'

  { 0.0, 1.0 },

  // Pooled Parameter (Expression: [0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100])
  //  Referenced by: '<S2>/BrakePedalMap'

  { 0.0, 5.0, 10.0, 15.0, 20.0, 25.0, 30.0, 35.0, 40.0, 45.0, 50.0, 55.0, 60.0,
    65.0, 70.0, 75.0, 80.0, 85.0, 90.0, 95.0, 100.0 },

  // Expression: [linspace(0,600,101)]
  //  Referenced by: '<S5>/%pedal to %torque'

  { 0.0, 6.0, 12.0, 18.0, 24.0, 30.0, 36.0, 42.0, 48.0, 54.0, 60.0, 66.0, 72.0,
    78.0, 84.0, 90.0, 96.0, 102.0, 108.0, 114.0, 120.0, 126.0, 132.0, 138.0,
    144.0, 150.0, 156.0, 162.0, 168.0, 174.0, 180.0, 186.0, 192.0, 198.0, 204.0,
    210.0, 216.0, 222.0, 228.0, 234.0, 240.0, 246.0, 252.0, 258.0, 264.0, 270.0,
    276.0, 282.0, 288.0, 294.0, 300.0, 306.0, 312.0, 318.0, 324.0, 330.0, 336.0,
    342.0, 348.0, 354.0, 360.0, 366.0, 372.0, 378.0, 384.0, 390.0, 396.0, 402.0,
    408.0, 414.0, 420.0, 426.0, 432.0, 438.0, 444.0, 450.0, 456.0, 462.0, 468.0,
    474.0, 480.0, 486.0, 492.0, 498.0, 504.0, 510.0, 516.0, 522.0, 528.0, 534.0,
    540.0, 546.0, 552.0, 558.0, 564.0, 570.0, 576.0, 582.0, 588.0, 594.0, 600.0
  },

  // Expression: [linspace(0,1,101)]
  //  Referenced by: '<S5>/%pedal to %torque'

  { 0.0, 0.01, 0.02, 0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.1, 0.11, 0.12,
    0.13, 0.14, 0.15, 0.16, 0.17, 0.18, 0.19, 0.2, 0.21, 0.22, 0.23, 0.24, 0.25,
    0.26, 0.27, 0.28, 0.29, 0.3, 0.31, 0.32, 0.33, 0.34, 0.35, 0.36, 0.37, 0.38,
    0.39, 0.4, 0.41, 0.42, 0.43, 0.44, 0.45, 0.46, 0.47, 0.48, 0.49, 0.5, 0.51,
    0.52, 0.53, 0.54, 0.55, 0.56, 0.57, 0.58, 0.59, 0.6, 0.61, 0.62, 0.63, 0.64,
    0.65, 0.66, 0.67, 0.68, 0.69, 0.7, 0.71, 0.72, 0.73, 0.74, 0.75, 0.76, 0.77,
    0.78, 0.79, 0.8, 0.81, 0.82, 0.83, 0.84, 0.85, 0.86, 0.87, 0.88, 0.89, 0.9,
    0.91, 0.92, 0.93, 0.94, 0.95, 0.96, 0.97, 0.98, 0.99, 1.0 }
};

//
// File trailer for generated code.
//
// [EOF]
//
