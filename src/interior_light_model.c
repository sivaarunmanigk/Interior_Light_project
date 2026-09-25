/*
 * File: interior_light_model.c
 *
 * Code generated for Simulink model 'interior_light_model'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Fri Sep 25 15:28:57 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "interior_light_model.h"

/* External inputs (root inport signals with default storage) */
ExtU_interior_light_model_T interior_light_model_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_interior_light_model_T interior_light_model_Y;

/* Real-time model */
static RT_MODEL_interior_light_model_T interior_light_model_M_;
RT_MODEL_interior_light_model_T *const interior_light_model_M =
  &interior_light_model_M_;

/* Model step function */
void interior_light_model_step(void)
{
  /* Outport: '<Root>/light' incorporates:
   *  Inport: '<Root>/FL'
   *  Inport: '<Root>/FR'
   *  Inport: '<Root>/RL'
   *  Inport: '<Root>/RR'
   *  Logic: '<Root>/OR'
   */
  interior_light_model_Y.light = (interior_light_model_U.FL ||
    interior_light_model_U.FR || interior_light_model_U.RL ||
    interior_light_model_U.RR);
}

/* Model initialize function */
void interior_light_model_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void interior_light_model_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
