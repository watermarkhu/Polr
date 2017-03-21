/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * conv2.c
 *
 * Code generation for function 'conv2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sobel.h"
#include "conv2.h"
#include "xaxpy.h"
#include "sobel_emxutil.h"

/* Variable Definitions */
static emlrtRSInfo d_emlrtRSI = { 15,  /* lineNo */
  "conv2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 116, /* lineNo */
  "conv2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 128, /* lineNo */
  "conv2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"/* pathName */
};

static emlrtRTEInfo d_emlrtRTEI = { 1, /* lineNo */
  14,                                  /* colNo */
  "conv2",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"/* pName */
};

/* Function Definitions */
void b_conv2(const emlrtStack *sp, const emxArray_real_T *arg1, emxArray_real_T *
             c)
{
  int16_T unnamed_idx_0;
  int16_T unnamed_idx_1;
  int32_T firstRowA;
  int32_T aidx;
  boolean_T b1;
  int32_T ma;
  int32_T na;
  int32_T firstColB;
  int32_T lastColB;
  int32_T firstRowB;
  int32_T lastRowB;
  int32_T lastColA;
  int32_T k;
  int32_T b_firstColB;
  int32_T iC;
  int32_T b_c;
  int32_T iB;
  int32_T i;
  int32_T b_i;
  int32_T a_length;
  static const int8_T iv1[9] = { 1, 2, 1, 0, 0, 0, -1, -2, -1 };

  int32_T r;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &d_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &e_emlrtRSI;
  unnamed_idx_0 = (int16_T)arg1->size[0];
  unnamed_idx_1 = (int16_T)arg1->size[1];
  c_st.site = &f_emlrtRSI;
  firstRowA = c->size[0] * c->size[1];
  c->size[0] = unnamed_idx_0;
  c->size[1] = unnamed_idx_1;
  emxEnsureCapacity(&c_st, (emxArray__common *)c, firstRowA, (int32_T)sizeof
                    (real_T), &d_emlrtRTEI);
  aidx = unnamed_idx_0 * unnamed_idx_1;
  for (firstRowA = 0; firstRowA < aidx; firstRowA++) {
    c->data[firstRowA] = 0.0;
  }

  if ((arg1->size[0] == 0) || (arg1->size[1] == 0) || ((unnamed_idx_0 == 0) ||
       (unnamed_idx_1 == 0))) {
    b1 = true;
  } else {
    b1 = false;
  }

  if (!b1) {
    ma = arg1->size[0];
    na = arg1->size[1];
    if (arg1->size[1] < 1) {
      firstColB = 2;
    } else {
      firstColB = 0;
    }

    if (3 <= unnamed_idx_1) {
      lastColB = 2;
    } else {
      lastColB = unnamed_idx_1;
    }

    if (arg1->size[0] < 1) {
      firstRowB = 2;
    } else {
      firstRowB = 0;
    }

    if (3 <= unnamed_idx_0) {
      lastRowB = 2;
    } else {
      lastRowB = unnamed_idx_0;
    }

    while (firstColB <= lastColB) {
      if ((firstColB + na) - 1 < unnamed_idx_1) {
        lastColA = na - 1;
      } else {
        lastColA = unnamed_idx_1 - firstColB;
      }

      for (k = (firstColB < 1); k <= lastColA; k++) {
        if (firstColB + k > 1) {
          b_firstColB = (firstColB + k) - 1;
        } else {
          b_firstColB = 0;
        }

        iC = b_firstColB * unnamed_idx_0;
        b_c = k * ma;
        iB = firstRowB + firstColB * 3;
        for (i = firstRowB; i <= lastRowB; i++) {
          firstRowA = (i < 1);
          if (i + ma <= unnamed_idx_0) {
            b_i = ma;
          } else {
            b_i = (unnamed_idx_0 - i) + 1;
          }

          a_length = b_i - firstRowA;
          if (ma > 128) {
            xaxpy(a_length, iv1[iB], arg1, (b_c + firstRowA) + 1, c, iC + 1);
          } else {
            aidx = b_c + firstRowA;
            firstRowA = iC;
            for (r = 1; r <= a_length; r++) {
              c->data[firstRowA] += (real_T)iv1[iB] * arg1->data[aidx];
              aidx++;
              firstRowA++;
            }
          }

          iB++;
          if (i >= 1) {
            iC++;
          }
        }
      }

      firstColB++;
    }
  }
}

void conv2(const emlrtStack *sp, const emxArray_real_T *arg1, emxArray_real_T *c)
{
  int16_T unnamed_idx_0;
  int16_T unnamed_idx_1;
  int32_T firstRowA;
  int32_T aidx;
  boolean_T b0;
  int32_T ma;
  int32_T na;
  int32_T firstColB;
  int32_T lastColB;
  int32_T firstRowB;
  int32_T lastRowB;
  int32_T lastColA;
  int32_T k;
  int32_T b_firstColB;
  int32_T iC;
  int32_T b_c;
  int32_T iB;
  int32_T i;
  int32_T b_i;
  int32_T a_length;
  static const int8_T iv0[9] = { 1, 0, -1, 2, 0, -2, 1, 0, -1 };

  int32_T r;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &d_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &e_emlrtRSI;
  unnamed_idx_0 = (int16_T)arg1->size[0];
  unnamed_idx_1 = (int16_T)arg1->size[1];
  c_st.site = &f_emlrtRSI;
  firstRowA = c->size[0] * c->size[1];
  c->size[0] = unnamed_idx_0;
  c->size[1] = unnamed_idx_1;
  emxEnsureCapacity(&c_st, (emxArray__common *)c, firstRowA, (int32_T)sizeof
                    (real_T), &d_emlrtRTEI);
  aidx = unnamed_idx_0 * unnamed_idx_1;
  for (firstRowA = 0; firstRowA < aidx; firstRowA++) {
    c->data[firstRowA] = 0.0;
  }

  if ((arg1->size[0] == 0) || (arg1->size[1] == 0) || ((unnamed_idx_0 == 0) ||
       (unnamed_idx_1 == 0))) {
    b0 = true;
  } else {
    b0 = false;
  }

  if (!b0) {
    ma = arg1->size[0];
    na = arg1->size[1];
    if (arg1->size[1] < 1) {
      firstColB = 2;
    } else {
      firstColB = 0;
    }

    if (3 <= unnamed_idx_1) {
      lastColB = 2;
    } else {
      lastColB = unnamed_idx_1;
    }

    if (arg1->size[0] < 1) {
      firstRowB = 2;
    } else {
      firstRowB = 0;
    }

    if (3 <= unnamed_idx_0) {
      lastRowB = 2;
    } else {
      lastRowB = unnamed_idx_0;
    }

    while (firstColB <= lastColB) {
      if ((firstColB + na) - 1 < unnamed_idx_1) {
        lastColA = na - 1;
      } else {
        lastColA = unnamed_idx_1 - firstColB;
      }

      for (k = (firstColB < 1); k <= lastColA; k++) {
        if (firstColB + k > 1) {
          b_firstColB = (firstColB + k) - 1;
        } else {
          b_firstColB = 0;
        }

        iC = b_firstColB * unnamed_idx_0;
        b_c = k * ma;
        iB = firstRowB + firstColB * 3;
        for (i = firstRowB; i <= lastRowB; i++) {
          firstRowA = (i < 1);
          if (i + ma <= unnamed_idx_0) {
            b_i = ma;
          } else {
            b_i = (unnamed_idx_0 - i) + 1;
          }

          a_length = b_i - firstRowA;
          if (ma > 128) {
            xaxpy(a_length, iv0[iB], arg1, (b_c + firstRowA) + 1, c, iC + 1);
          } else {
            aidx = b_c + firstRowA;
            firstRowA = iC;
            for (r = 1; r <= a_length; r++) {
              c->data[firstRowA] += (real_T)iv0[iB] * arg1->data[aidx];
              aidx++;
              firstRowA++;
            }
          }

          iB++;
          if (i >= 1) {
            iC++;
          }
        }
      }

      firstColB++;
    }
  }
}

/* End of code generation (conv2.c) */
