/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: controller_autogen_data.c
 *
 * Code generated for Simulink model 'controller_autogen'.
 *
 * Model version                  : 1.33
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Jul 18 16:58:04 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "controller_autogen.h"

/* Invariant block signals (default storage) */
const ConstB rtConstB = {
  1000.0F,                             /* '<S4>/Cast To Single' */
  0.0F,                                /* '<S4>/Cast To Single2' */
  1000.0F,                             /* '<S4>/Cast To Single3' */
  0.0F                                 /* '<S4>/Cast To Single5' */
};

/* Constant parameters (default storage) */
const ConstP rtConstP = {
  /* Pooled Parameter (Expression: [0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100])
   * Referenced by:
   *   '<S2>/AccelPedalPos1 LUT'
   *   '<S2>/BrakePedalPos1 LUT1'
   */
  { 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F,
    55.0F, 60.0F, 65.0F, 70.0F, 75.0F, 80.0F, 85.0F, 90.0F, 95.0F, 100.0F }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
