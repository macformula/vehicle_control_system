#ifndef RTW_HEADER_controls_cal_h_
#define RTW_HEADER_controls_cal_h_
#include "rtwtypes.h"
#include "controls_types.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct controls_cal_type {
  real_T TappedDelay_vinit;            /* Mask Parameter: TappedDelay_vinit
                                        * Referenced by: '<S28>/Tapped Delay'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Constant1_Value_j;            /* Expression: 1
                                        * Referenced by: '<S11>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S11>/Constant2'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<S8>/Constant5'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S8>/Constant4'
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
  real_T Constant1_Value_o;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T CANRead1_P1_Size[2];          /* Computed Parameter: CANRead1_P1_Size
                                        * Referenced by: '<Root>/CAN Read 1'
                                        */
  real_T CANRead1_P1[13];              /* Expression: initValues
                                        * Referenced by: '<Root>/CAN Read 1'
                                        */
  real_T Constant13_Value;             /* Expression: 1
                                        * Referenced by: '<Root>/Constant13'
                                        */
  real_T Constant14_Value;             /* Expression: 100
                                        * Referenced by: '<Root>/Constant14'
                                        */
  real_T CANRead_P1_Size[2];           /* Computed Parameter: CANRead_P1_Size
                                        * Referenced by: '<Root>/CAN Read '
                                        */
  real_T CANRead_P1[13];               /* Expression: initValues
                                        * Referenced by: '<Root>/CAN Read '
                                        */
  real_T Constant_Value_f;             /* Expression: 5000
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T LowerPotentiometerLimit1_Value;/* Expression: 0
                                         * Referenced by: '<S15>/LowerPotentiometerLimit1'
                                         */
  real_T UpperPotentiometerLimit1_Value;/* Expression: 1
                                         * Referenced by: '<S15>/UpperPotentiometerLimit1'
                                         */
  real_T LowerPotentiometerLimit1_Valu_p;/* Expression: 0
                                          * Referenced by: '<S16>/LowerPotentiometerLimit1'
                                          */
  real_T UpperPotentiometerLimit1_Valu_j;/* Expression: 1
                                          * Referenced by: '<S16>/UpperPotentiometerLimit1'
                                          */
  real_T LowerPotentiometerLimit1_Valu_f;/* Expression: 0
                                          * Referenced by: '<S17>/LowerPotentiometerLimit1'
                                          */
  real_T UpperPotentiometerLimit1_Valu_a;/* Expression: 1
                                          * Referenced by: '<S17>/UpperPotentiometerLimit1'
                                          */
  real_T LowerPotentiometerLimit1_Valu_i;/* Expression: 0
                                          * Referenced by: '<S18>/LowerPotentiometerLimit1'
                                          */
  real_T UpperPotentiometerLimit1_Valu_g;/* Expression: 1
                                          * Referenced by: '<S18>/UpperPotentiometerLimit1'
                                          */
  real_T LowerPotentiometerLimit1_Val_fz;/* Expression: 0
                                          * Referenced by: '<S19>/LowerPotentiometerLimit1'
                                          */
  real_T UpperPotentiometerLimit1_Valu_k;/* Expression: 1
                                          * Referenced by: '<S19>/UpperPotentiometerLimit1'
                                          */
  real_T Constant_Value_i;             /* Expression: 0.1
                                        * Referenced by: '<S11>/Constant'
                                        */
  real_T AccelPedalMap_tableData[2];   /* Expression: [0 1]
                                        * Referenced by: '<S5>/AccelPedalMap'
                                        */
  real_T AccelPedalMap_bp01Data[2];    /* Expression: [0 1]
                                        * Referenced by: '<S5>/AccelPedalMap'
                                        */
  real_T Constant_Value_g;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T BrakePedalMap_tableData[21];
  /* Expression: [0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100]
   * Referenced by: '<S5>/BrakePedalMap'
   */
  real_T BrakePedalMap_bp01Data[21];
  /* Expression: [0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100]
   * Referenced by: '<S5>/BrakePedalMap'
   */
  real_T Switch_Threshold;             /* Expression: 0.1
                                        * Referenced by: '<S8>/Switch'
                                        */
  real_T Constant7_Value;              /* Expression: 1
                                        * Referenced by: '<S8>/Constant7'
                                        */
  real_T pedaltotorque_tableData[101]; /* Expression: [linspace(0,1000,101)]
                                        * Referenced by: '<S8>/%pedal to %torque'
                                        */
  real_T pedaltotorque_bp01Data[101];  /* Expression: [linspace(0,1,101)]
                                        * Referenced by: '<S8>/%pedal to %torque'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S8>/Constant3'
                                        */
  real_T Constant1_Value_f;            /* Expression: 5000
                                        * Referenced by: '<S8>/Constant1'
                                        */
  real_T Constant2_Value_g;            /* Expression: 0
                                        * Referenced by: '<S8>/Constant2'
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
  real_T Switch_Threshold_f;           /* Expression: 0.1
                                        * Referenced by: '<S5>/Switch'
                                        */
  real_T Constant2_Value_m;            /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant6_Value;              /* Expression: 0.2
                                        * Referenced by: '<S8>/Constant6'
                                        */
  real_T Constant_Value_gj;            /* Expression: 1
                                        * Referenced by: '<S29>/Constant'
                                        */
  real_T Setlowerboundto0_LowerSat;    /* Expression: 0
                                        * Referenced by: '<S29>/Set lower bound to 0'
                                        */
  BM_STATUSES Delay_InitialCondition;  /* Expression: BM_STATUSES.BM_UNKNOWN
                                        * Referenced by: '<S6>/Delay'
                                        */
  DI_STATUSES Delay2_InitialCondition; /* Expression: DI_STATUSES.DI_UNKNOWN
                                        * Referenced by: '<S6>/Delay2'
                                        */
  MI_STATUSES Constant1_Value_l;       /* Expression: MI_STATUSES.MI_STS_ERROR
                                        * Referenced by: '<S7>/Constant1'
                                        */
  MI_STATUSES Delay1_InitialCondition; /* Expression: MI_STATUSES.UNKNOWN
                                        * Referenced by: '<S6>/Delay1'
                                        */
  MI_STATUSES Constant_Value_m;        /* Expression: MI_STATUSES.MI_STS_ERROR
                                        * Referenced by: '<S7>/Constant'
                                        */
  MI_STATUSES Delay_InitialCondition_o;/* Expression: MI_STATUSES.OFF
                                        * Referenced by: '<S7>/Delay'
                                        */
  real32_T Constant2_Value_e;          /* Computed Parameter: Constant2_Value_e
                                        * Referenced by: '<S5>/Constant2'
                                        */
  real32_T Constant1_Value_k;          /* Computed Parameter: Constant1_Value_k
                                        * Referenced by: '<S5>/Constant1'
                                        */
  boolean_T Constant4_Value_i;         /* Computed Parameter: Constant4_Value_i
                                        * Referenced by: '<S5>/Constant4'
                                        */
  boolean_T Constant3_Value_m;         /* Computed Parameter: Constant3_Value_m
                                        * Referenced by: '<S5>/Constant3'
                                        */
};

/* Storage class 'PageSwitching' */
extern controls_cal_type controls_cal_impl;
extern controls_cal_type *controls_cal;

#endif                                 /* RTW_HEADER_controls_cal_h_ */
