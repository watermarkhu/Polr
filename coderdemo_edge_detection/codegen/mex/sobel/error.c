/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sobel.h"
#include "error.h"

/* Variable Definitions */
static emlrtRTEInfo f_emlrtRTEI = { 17,/* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\error.m"/* pName */
};

/* Function Definitions */
void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &f_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
}

/* End of code generation (error.c) */
