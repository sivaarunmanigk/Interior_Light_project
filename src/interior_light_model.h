/*
 * File: interior_light_model.h
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

#ifndef interior_light_model_h_
#define interior_light_model_h_
#ifndef interior_light_model_COMMON_INCLUDES_
#define interior_light_model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                               /* interior_light_model_COMMON_INCLUDES_ */

#include "interior_light_model_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T FL;                        /* '<Root>/FL' */
  boolean_T FR;                        /* '<Root>/FR' */
  boolean_T RL;                        /* '<Root>/RL' */
  boolean_T RR;                        /* '<Root>/RR' */
} ExtU_interior_light_model_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T light;                     /* '<Root>/light' */
} ExtY_interior_light_model_T;

/* Real-time Model Data Structure */
struct tag_RTM_interior_light_model_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_interior_light_model_T interior_light_model_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_interior_light_model_T interior_light_model_Y;

/* Model entry point functions */
extern void interior_light_model_initialize(void);
extern void interior_light_model_step(void);
extern void interior_light_model_terminate(void);

/* Real-time Model object */
extern RT_MODEL_interior_light_model_T *const interior_light_model_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'interior_light_model'
 * '<S1>'   : 'interior_light_model/MATLAB Function'
 */
#endif                                 /* interior_light_model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
