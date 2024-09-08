#ifndef RTW_HEADER_plant_cal_h_
#define RTW_HEADER_plant_cal_h_
#include "plant_types.h"
#include "rtwtypes.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct plant_cal_type {
  struct_oLkX0Cc3azHvV4SXLEJRKF pt_CAN_IN_Y0;/* Computed Parameter: pt_CAN_IN_Y0
                                              * Referenced by: '<S4>/pt_CAN_IN'
                                              */
  struct_nmdL1dQhphtiVwXIQLow6B pt_CAN_IN_Y0_h;/* Computed Parameter: pt_CAN_IN_Y0_h
                                                * Referenced by: '<S5>/pt_CAN_IN'
                                                */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S10>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S10>/Constant1'
                                        */
  real_T Constant2_Value_k;            /* Expression: 0
                                        * Referenced by: '<S11>/Constant2'
                                        */
  real_T Constant1_Value_c;            /* Expression: 0
                                        * Referenced by: '<S11>/Constant1'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S14>/Delay'
                                        */
  real_T Delay1_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S14>/Delay1'
                                        */
  real_T Delay2_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<S14>/Delay2'
                                        */
  real_T CANandLINSetup_P1_Size[2];/* Computed Parameter: CANandLINSetup_P1_Size
                                    * Referenced by: '<Root>/CAN and LIN Setup '
                                    */
  real_T CANandLINSetup_P1[45];
  /* Expression: [moduleInitValues, canChn1InitValues, canChn2InitValues, canChn3InitValues, canChn4InitValues, linChn1InitValues, linChn2InitValues]
   * Referenced by: '<Root>/CAN and LIN Setup '
   */
  real_T CANandLINSetup_P2_Size[2];/* Computed Parameter: CANandLINSetup_P2_Size
                                    * Referenced by: '<Root>/CAN and LIN Setup '
                                    */
  real_T CANandLINSetup_P2;            /* Expression: canInitStructArray
                                        * Referenced by: '<Root>/CAN and LIN Setup '
                                        */
  real_T CANandLINSetup_P3_Size[2];/* Computed Parameter: CANandLINSetup_P3_Size
                                    * Referenced by: '<Root>/CAN and LIN Setup '
                                    */
  real_T CANandLINSetup_P3;            /* Expression: canTermStructArray
                                        * Referenced by: '<Root>/CAN and LIN Setup '
                                        */
  real_T CANRead1_P1_Size[2];          /* Computed Parameter: CANRead1_P1_Size
                                        * Referenced by: '<Root>/CAN Read 1'
                                        */
  real_T CANRead1_P1[13];              /* Expression: initValues
                                        * Referenced by: '<Root>/CAN Read 1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant1_Value_g;            /* Expression: 0
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T CANWrite_P1_Size[2];          /* Computed Parameter: CANWrite_P1_Size
                                        * Referenced by: '<Root>/CAN Write '
                                        */
  real_T CANWrite_P1[10];              /* Expression: initValues
                                        * Referenced by: '<Root>/CAN Write '
                                        */
  real_T CANWrite1_P1_Size[2];         /* Computed Parameter: CANWrite1_P1_Size
                                        * Referenced by: '<Root>/CAN Write 1'
                                        */
  real_T CANWrite1_P1[10];             /* Expression: initValues
                                        * Referenced by: '<Root>/CAN Write 1'
                                        */
  real_T Constant_Value_c;             /* Expression: 0.5
                                        * Referenced by: '<S10>/Constant'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S10>/Switch2'
                                        */
  real_T Constant_Value_a;             /* Expression: 0.5
                                        * Referenced by: '<S11>/Constant'
                                        */
  real_T Switch2_Threshold_k;          /* Expression: 0
                                        * Referenced by: '<S11>/Switch2'
                                        */
  real_T CANRead_P1_Size[2];           /* Computed Parameter: CANRead_P1_Size
                                        * Referenced by: '<Root>/CAN Read '
                                        */
  real_T CANRead_P1[13];               /* Expression: initValues
                                        * Referenced by: '<Root>/CAN Read '
                                        */
  real32_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S10>/Constant3'
                                        */
  real32_T Constant6_Value;            /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S10>/Constant6'
                                        */
  real32_T Constant5_Value;            /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<S10>/Constant5'
                                        */
  real32_T Constant4_Value;            /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S10>/Constant4'
                                        */
  real32_T Constant3_Value_d;          /* Computed Parameter: Constant3_Value_d
                                        * Referenced by: '<S11>/Constant3'
                                        */
  real32_T Constant6_Value_b;          /* Computed Parameter: Constant6_Value_b
                                        * Referenced by: '<S11>/Constant6'
                                        */
  real32_T Constant5_Value_o;          /* Computed Parameter: Constant5_Value_o
                                        * Referenced by: '<S11>/Constant5'
                                        */
  real32_T Constant4_Value_k;          /* Computed Parameter: Constant4_Value_k
                                        * Referenced by: '<S11>/Constant4'
                                        */
};

/* Storage class 'PageSwitching' */
extern plant_cal_type plant_cal_impl;
extern plant_cal_type *plant_cal;

#endif                                 /* RTW_HEADER_plant_cal_h_ */
