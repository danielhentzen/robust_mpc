/* Include files */

#include <stddef.h>
#include "blas.h"
#include "Robust_MPC_Library_sfun.h"
#include "c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "Robust_MPC_Library_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(sfGlobalDebugInstanceStruct,S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c1_fSQGMH2uGoHTT2XCT6JYRC_debug_family_names[32] = {
  "tolerance", "nr", "MPT_ABSTOL", "minreg", "Hi", "Ki", "abspos", "ireg",
  "sumViol", "isinside", "i", "j", "F", "G", "nc", "ic", "hx", "size_F",
  "nargin", "nargout", "X", "Hn", "Kn", "Fi", "Gi", "Nc", "Hi_init", "Ki_init",
  "Nx", "U", "flag_oob", "flag_minreg" };

/* Function Declarations */
static void initialize_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance);
static void initialize_params_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance);
static void enable_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance);
static void disable_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_update_debugger_state_c1_fSQGMH2uGoHTT
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance);
static void set_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_st);
static void finalize_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance);
static void sf_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_chartstep_c1_fSQGMH2uGoHTT2XCT6JYRC_Ro
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance);
static void initSimStructsc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance);
static void registerMessagesc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T
  c1_fSQGMH2uGoHTT2XCT6JYRC_machineNumber, uint32_T
  c1_fSQGMH2uGoHTT2XCT6JYRC_chartNumber);
static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData);
static real_T c1_fSQGMH2uGoHTT2XCT6JYRC_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg, const char_T
   *c1_fSQGMH2uGoHTT2XCT6JYRC_identifier);
static real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData, const char_T
  *c1_fSQGMH2uGoHTT2XCT6JYRC_varName, void *c1_fSQGMH2uGoHTT2XCT6JYRC_outData);
static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_b_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData);
static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_c_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData);
static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_d_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData);
static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_e_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData);
static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_f_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData);
static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_g_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData);
static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_h_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData);
static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_i_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_c_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y[2]);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_b_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData, const char_T
  *c1_fSQGMH2uGoHTT2XCT6JYRC_varName, void *c1_fSQGMH2uGoHTT2XCT6JYRC_outData);
static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_j_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_d_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y[3]);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_c_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData, const char_T
  *c1_fSQGMH2uGoHTT2XCT6JYRC_varName, void *c1_fSQGMH2uGoHTT2XCT6JYRC_outData);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_e_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y[100]);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_d_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData, const char_T
  *c1_fSQGMH2uGoHTT2XCT6JYRC_varName, void *c1_fSQGMH2uGoHTT2XCT6JYRC_outData);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_f_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y[300]);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_e_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData, const char_T
  *c1_fSQGMH2uGoHTT2XCT6JYRC_varName, void *c1_fSQGMH2uGoHTT2XCT6JYRC_outData);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_info_helper
  (c1_fSQGMH2uGoHTT2XCT6JYRC_ResolvedFunctionInfo
   c1_fSQGMH2uGoHTT2XCT6JYRC_info[26]);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_round
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   real_T c1_fSQGMH2uGoHTT2XCT6JYRC_x[3], real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_x[3]);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_eml_scalar_eg
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance);
static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_k_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData);
static int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_g_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_f_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData, const char_T
  *c1_fSQGMH2uGoHTT2XCT6JYRC_varName, void *c1_fSQGMH2uGoHTT2XCT6JYRC_outData);
static uint8_T c1_fSQGMH2uGoHTT2XCT6JYRC_h_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray
   *c1_fSQGMH2uGoHTT2XCT6JYRC_b_is_active_c1_fSQGMH2uGoHTT2XCT6JYRC_, const
   char_T *c1_fSQGMH2uGoHTT2XCT6JYRC_identifier);
static uint8_T c1_fSQGMH2uGoHTT2XCT6JYRC_i_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId);
static void c1_fSQGMH2uGoHTT2XCT6JYRC_b_round
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   real_T c1_fSQGMH2uGoHTT2XCT6JYRC_x[3]);
static void init_dsm_address_info
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance)
{
  chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_is_active_c1_fSQGMH2uGoHTT2XCT6JYRC_Ro
    = 0U;
}

static void initialize_params_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance)
{
}

static void enable_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_update_debugger_state_c1_fSQGMH2uGoHTT
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_st;
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_hoistedGlobal;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_u;
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_b_y = NULL;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_hoistedGlobal;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_u;
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_c_y = NULL;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_c_hoistedGlobal;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_c_u;
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_d_y = NULL;
  uint8_T c1_fSQGMH2uGoHTT2XCT6JYRC_d_hoistedGlobal;
  uint8_T c1_fSQGMH2uGoHTT2XCT6JYRC_d_u;
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_e_y = NULL;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_U;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob;
  c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg = (real_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob = (real_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c1_fSQGMH2uGoHTT2XCT6JYRC_U = (real_T *)ssGetOutputPortSignal(chartInstance->S,
    1);
  c1_fSQGMH2uGoHTT2XCT6JYRC_st = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_st = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_y, sf_mex_createcellarray(4), FALSE);
  c1_fSQGMH2uGoHTT2XCT6JYRC_hoistedGlobal = *c1_fSQGMH2uGoHTT2XCT6JYRC_U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_u = c1_fSQGMH2uGoHTT2XCT6JYRC_hoistedGlobal;
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_b_y, sf_mex_create("y",
    &c1_fSQGMH2uGoHTT2XCT6JYRC_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c1_fSQGMH2uGoHTT2XCT6JYRC_y, 0, c1_fSQGMH2uGoHTT2XCT6JYRC_b_y);
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_hoistedGlobal =
    *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg;
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_u = c1_fSQGMH2uGoHTT2XCT6JYRC_b_hoistedGlobal;
  c1_fSQGMH2uGoHTT2XCT6JYRC_c_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_c_y, sf_mex_create("y",
    &c1_fSQGMH2uGoHTT2XCT6JYRC_b_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c1_fSQGMH2uGoHTT2XCT6JYRC_y, 1, c1_fSQGMH2uGoHTT2XCT6JYRC_c_y);
  c1_fSQGMH2uGoHTT2XCT6JYRC_c_hoistedGlobal =
    *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob;
  c1_fSQGMH2uGoHTT2XCT6JYRC_c_u = c1_fSQGMH2uGoHTT2XCT6JYRC_c_hoistedGlobal;
  c1_fSQGMH2uGoHTT2XCT6JYRC_d_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_d_y, sf_mex_create("y",
    &c1_fSQGMH2uGoHTT2XCT6JYRC_c_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c1_fSQGMH2uGoHTT2XCT6JYRC_y, 2, c1_fSQGMH2uGoHTT2XCT6JYRC_d_y);
  c1_fSQGMH2uGoHTT2XCT6JYRC_d_hoistedGlobal =
    chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_is_active_c1_fSQGMH2uGoHTT2XCT6JYRC_Ro;
  c1_fSQGMH2uGoHTT2XCT6JYRC_d_u = c1_fSQGMH2uGoHTT2XCT6JYRC_d_hoistedGlobal;
  c1_fSQGMH2uGoHTT2XCT6JYRC_e_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_e_y, sf_mex_create("y",
    &c1_fSQGMH2uGoHTT2XCT6JYRC_d_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c1_fSQGMH2uGoHTT2XCT6JYRC_y, 3, c1_fSQGMH2uGoHTT2XCT6JYRC_e_y);
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_st, c1_fSQGMH2uGoHTT2XCT6JYRC_y,
                FALSE);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_st;
}

static void set_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_st)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_U;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob;
  c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg = (real_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob = (real_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c1_fSQGMH2uGoHTT2XCT6JYRC_U = (real_T *)ssGetOutputPortSignal(chartInstance->S,
    1);
  chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_doneDoubleBufferReInit = TRUE;
  c1_fSQGMH2uGoHTT2XCT6JYRC_u = sf_mex_dup(c1_fSQGMH2uGoHTT2XCT6JYRC_st);
  *c1_fSQGMH2uGoHTT2XCT6JYRC_U = c1_fSQGMH2uGoHTT2XCT6JYRC_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_fSQGMH2uGoHTT2XCT6JYRC_u, 0)),
     "U");
  *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg =
    c1_fSQGMH2uGoHTT2XCT6JYRC_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_fSQGMH2uGoHTT2XCT6JYRC_u, 1)), "flag_minreg");
  *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob =
    c1_fSQGMH2uGoHTT2XCT6JYRC_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_fSQGMH2uGoHTT2XCT6JYRC_u, 2)), "flag_oob");
  chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_is_active_c1_fSQGMH2uGoHTT2XCT6JYRC_Ro
    = c1_fSQGMH2uGoHTT2XCT6JYRC_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_fSQGMH2uGoHTT2XCT6JYRC_u, 3)),
    "is_active_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library");
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_u);
  c1_fSQGMH2uGoHTT2XCT6JYRC_update_debugger_state_c1_fSQGMH2uGoHTT(chartInstance);
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_st);
}

static void finalize_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance)
{
}

static void sf_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance)
{
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i0;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i1;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i2;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i3;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i4;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i5;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i6;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i7;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_U;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_Nx;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg;
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Ki_init)[100];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Hi_init)[300];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Nc)[68];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Gi)[68];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Fi)[204];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Kn)[401];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Hn)[1203];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_X)[3];
  c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg = (real_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob = (real_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c1_fSQGMH2uGoHTT2XCT6JYRC_Nx = (real_T *)ssGetInputPortSignal(chartInstance->S,
    8);
  c1_fSQGMH2uGoHTT2XCT6JYRC_Ki_init = (real_T (*)[100])ssGetInputPortSignal
    (chartInstance->S, 7);
  c1_fSQGMH2uGoHTT2XCT6JYRC_Hi_init = (real_T (*)[300])ssGetInputPortSignal
    (chartInstance->S, 6);
  c1_fSQGMH2uGoHTT2XCT6JYRC_Nc = (real_T (*)[68])ssGetInputPortSignal
    (chartInstance->S, 5);
  c1_fSQGMH2uGoHTT2XCT6JYRC_Gi = (real_T (*)[68])ssGetInputPortSignal
    (chartInstance->S, 4);
  c1_fSQGMH2uGoHTT2XCT6JYRC_Fi = (real_T (*)[204])ssGetInputPortSignal
    (chartInstance->S, 3);
  c1_fSQGMH2uGoHTT2XCT6JYRC_Kn = (real_T (*)[401])ssGetInputPortSignal
    (chartInstance->S, 2);
  c1_fSQGMH2uGoHTT2XCT6JYRC_Hn = (real_T (*)[1203])ssGetInputPortSignal
    (chartInstance->S, 1);
  c1_fSQGMH2uGoHTT2XCT6JYRC_U = (real_T *)ssGetOutputPortSignal(chartInstance->S,
    1);
  c1_fSQGMH2uGoHTT2XCT6JYRC_X = (real_T (*)[3])ssGetInputPortSignal
    (chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U,
               chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i0 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i0 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i0++) {
    _SFD_DATA_RANGE_CHECK((*c1_fSQGMH2uGoHTT2XCT6JYRC_X)
                          [c1_fSQGMH2uGoHTT2XCT6JYRC_i0], 0U);
  }

  _SFD_DATA_RANGE_CHECK(*c1_fSQGMH2uGoHTT2XCT6JYRC_U, 1U);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i1 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i1 < 1203;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i1++) {
    _SFD_DATA_RANGE_CHECK((*c1_fSQGMH2uGoHTT2XCT6JYRC_Hn)
                          [c1_fSQGMH2uGoHTT2XCT6JYRC_i1], 2U);
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i2 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i2 < 401;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i2++) {
    _SFD_DATA_RANGE_CHECK((*c1_fSQGMH2uGoHTT2XCT6JYRC_Kn)
                          [c1_fSQGMH2uGoHTT2XCT6JYRC_i2], 3U);
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i3 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i3 < 204;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i3++) {
    _SFD_DATA_RANGE_CHECK((*c1_fSQGMH2uGoHTT2XCT6JYRC_Fi)
                          [c1_fSQGMH2uGoHTT2XCT6JYRC_i3], 4U);
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i4 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i4 < 68;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i4++) {
    _SFD_DATA_RANGE_CHECK((*c1_fSQGMH2uGoHTT2XCT6JYRC_Gi)
                          [c1_fSQGMH2uGoHTT2XCT6JYRC_i4], 5U);
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i5 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i5 < 68;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i5++) {
    _SFD_DATA_RANGE_CHECK((*c1_fSQGMH2uGoHTT2XCT6JYRC_Nc)
                          [c1_fSQGMH2uGoHTT2XCT6JYRC_i5], 6U);
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i6 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i6 < 300;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i6++) {
    _SFD_DATA_RANGE_CHECK((*c1_fSQGMH2uGoHTT2XCT6JYRC_Hi_init)
                          [c1_fSQGMH2uGoHTT2XCT6JYRC_i6], 7U);
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i7 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i7 < 100;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i7++) {
    _SFD_DATA_RANGE_CHECK((*c1_fSQGMH2uGoHTT2XCT6JYRC_Ki_init)
                          [c1_fSQGMH2uGoHTT2XCT6JYRC_i7], 8U);
  }

  _SFD_DATA_RANGE_CHECK(*c1_fSQGMH2uGoHTT2XCT6JYRC_Nx, 9U);
  _SFD_DATA_RANGE_CHECK(*c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob, 10U);
  _SFD_DATA_RANGE_CHECK(*c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg, 11U);
  chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent = CALL_EVENT;
  c1_fSQGMH2uGoHTT2XCT6JYRC_chartstep_c1_fSQGMH2uGoHTT2XCT6JYRC_Ro(chartInstance);
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_Robust_MPC_LibraryMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_chartstep_c1_fSQGMH2uGoHTT2XCT6JYRC_Ro
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance)
{
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_hoistedGlobal;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i8;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_X[3];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i9;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_Hn[1203];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i10;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_Kn[401];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i11;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_Fi[204];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i12;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_Gi[68];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i13;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_Nc[68];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i14;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_Hi_init[300];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i15;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_Ki_init[100];
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_Nx;
  uint32_T c1_fSQGMH2uGoHTT2XCT6JYRC_debug_family_var_map[32];
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_tolerance;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_nr;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_MPT_ABSTOL;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_minreg;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_Hi[300];
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_Ki[100];
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_abspos;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_ireg;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_sumViol;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_isinside;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_i;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_j;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_F[3];
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_G;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_nc;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_ic;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_hx;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_size_F[2];
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_nargin = 9.0;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_nargout = 3.0;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_U;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i16;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b[3];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i17;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i18;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i19;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i20;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_ireg;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_d0;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i21;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_i;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_Nx;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i22;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_j;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_d1;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i23;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_c_i;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_c_ireg;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i24;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_nc;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i25;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_ic;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_c_ic;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i26;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_a[3];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i27;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_k;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_k;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i28;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i29;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_c_k;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_d_k;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i30;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_minreg;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i31;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i32;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i33;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_y;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_e_k;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_f_k;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_c_Nx;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_b_U;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_b_flag_oob;
  real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_b_flag_minreg;
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Ki_init)[100];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Hi_init)[300];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Nc)[68];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Gi)[68];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Fi)[204];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Kn)[401];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Hn)[1203];
  real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_X)[3];
  boolean_T guard1 = FALSE;
  int32_T exitg1;
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_flag_minreg = (real_T *)ssGetOutputPortSignal
    (chartInstance->S, 3);
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_flag_oob = (real_T *)ssGetOutputPortSignal
    (chartInstance->S, 2);
  c1_fSQGMH2uGoHTT2XCT6JYRC_c_Nx = (real_T *)ssGetInputPortSignal
    (chartInstance->S, 8);
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_Ki_init = (real_T (*)[100])ssGetInputPortSignal
    (chartInstance->S, 7);
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_Hi_init = (real_T (*)[300])ssGetInputPortSignal
    (chartInstance->S, 6);
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_Nc = (real_T (*)[68])ssGetInputPortSignal
    (chartInstance->S, 5);
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_Gi = (real_T (*)[68])ssGetInputPortSignal
    (chartInstance->S, 4);
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_Fi = (real_T (*)[204])ssGetInputPortSignal
    (chartInstance->S, 3);
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_Kn = (real_T (*)[401])ssGetInputPortSignal
    (chartInstance->S, 2);
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_Hn = (real_T (*)[1203])ssGetInputPortSignal
    (chartInstance->S, 1);
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_U = (real_T *)ssGetOutputPortSignal
    (chartInstance->S, 1);
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_X = (real_T (*)[3])ssGetInputPortSignal
    (chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U,
               chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent);
  c1_fSQGMH2uGoHTT2XCT6JYRC_hoistedGlobal = *c1_fSQGMH2uGoHTT2XCT6JYRC_c_Nx;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i8 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i8 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i8++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_X[c1_fSQGMH2uGoHTT2XCT6JYRC_i8] =
      (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_X)[c1_fSQGMH2uGoHTT2XCT6JYRC_i8];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i9 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i9 < 1203;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i9++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_Hn[c1_fSQGMH2uGoHTT2XCT6JYRC_i9] =
      (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Hn)[c1_fSQGMH2uGoHTT2XCT6JYRC_i9];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i10 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i10 < 401;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i10++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_Kn[c1_fSQGMH2uGoHTT2XCT6JYRC_i10] =
      (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Kn)[c1_fSQGMH2uGoHTT2XCT6JYRC_i10];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i11 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i11 < 204;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i11++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_Fi[c1_fSQGMH2uGoHTT2XCT6JYRC_i11] =
      (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Fi)[c1_fSQGMH2uGoHTT2XCT6JYRC_i11];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i12 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i12 < 68;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i12++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_Gi[c1_fSQGMH2uGoHTT2XCT6JYRC_i12] =
      (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Gi)[c1_fSQGMH2uGoHTT2XCT6JYRC_i12];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i13 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i13 < 68;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i13++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_Nc[c1_fSQGMH2uGoHTT2XCT6JYRC_i13] =
      (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Nc)[c1_fSQGMH2uGoHTT2XCT6JYRC_i13];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i14 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i14 < 300;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i14++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_Hi_init[c1_fSQGMH2uGoHTT2XCT6JYRC_i14] =
      (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Hi_init)[c1_fSQGMH2uGoHTT2XCT6JYRC_i14];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i15 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i15 < 100;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i15++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_Ki_init[c1_fSQGMH2uGoHTT2XCT6JYRC_i15] =
      (*c1_fSQGMH2uGoHTT2XCT6JYRC_b_Ki_init)[c1_fSQGMH2uGoHTT2XCT6JYRC_i15];
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_Nx = c1_fSQGMH2uGoHTT2XCT6JYRC_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 32U, 32U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_debug_family_names,
    c1_fSQGMH2uGoHTT2XCT6JYRC_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_tolerance, 0U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_fSQGMH2uGoHTT2XCT6JYRC_nr, 1U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_MPT_ABSTOL, 2U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_minreg, 3U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_fSQGMH2uGoHTT2XCT6JYRC_Hi, 4U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_c_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_fSQGMH2uGoHTT2XCT6JYRC_Ki, 5U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_b_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_abspos, 6U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_ireg, 7U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_sumViol, 8U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_isinside, 9U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_i, 10U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_j, 11U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_fSQGMH2uGoHTT2XCT6JYRC_F, 12U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_j_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_G, 13U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_nc, 14U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_ic, 15U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_hx, 16U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_fSQGMH2uGoHTT2XCT6JYRC_size_F, 17U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_i_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_nargin, 18U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_nargout, 19U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_fSQGMH2uGoHTT2XCT6JYRC_X, 20U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_h_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_fSQGMH2uGoHTT2XCT6JYRC_Hn, 21U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_g_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_fSQGMH2uGoHTT2XCT6JYRC_Kn, 22U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_f_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_fSQGMH2uGoHTT2XCT6JYRC_Fi, 23U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_e_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_fSQGMH2uGoHTT2XCT6JYRC_Gi, 24U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_fSQGMH2uGoHTT2XCT6JYRC_Nc, 25U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_fSQGMH2uGoHTT2XCT6JYRC_Hi_init, 26U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_fSQGMH2uGoHTT2XCT6JYRC_Ki_init, 27U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_fSQGMH2uGoHTT2XCT6JYRC_Nx, 28U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_U, 29U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob, 30U,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg,
    31U, c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
    c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 4);
  c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg = 0.0;
  _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 6);
  c1_fSQGMH2uGoHTT2XCT6JYRC_tolerance = 1.0;
  _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 7);
  c1_fSQGMH2uGoHTT2XCT6JYRC_nr = 68.0;
  _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 8);
  c1_fSQGMH2uGoHTT2XCT6JYRC_MPT_ABSTOL = 1.0E-8;
  _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 9);
  c1_fSQGMH2uGoHTT2XCT6JYRC_minreg = 0.0;
  _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 10);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i16 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i16 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i16++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_b[c1_fSQGMH2uGoHTT2XCT6JYRC_i16] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_X[c1_fSQGMH2uGoHTT2XCT6JYRC_i16];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i17 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i17 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i17++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_b[c1_fSQGMH2uGoHTT2XCT6JYRC_i17] *= 10000.0;
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_b_round(chartInstance, c1_fSQGMH2uGoHTT2XCT6JYRC_b);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i18 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i18 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i18++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_X[c1_fSQGMH2uGoHTT2XCT6JYRC_i18] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_b[c1_fSQGMH2uGoHTT2XCT6JYRC_i18] / 10000.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 12);
  c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob = 0.0;
  _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 15);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i19 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i19 < 300;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i19++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_Hi[c1_fSQGMH2uGoHTT2XCT6JYRC_i19] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_Hi_init[c1_fSQGMH2uGoHTT2XCT6JYRC_i19];
  }

  _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 16);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i20 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i20 < 100;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i20++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_Ki[c1_fSQGMH2uGoHTT2XCT6JYRC_i20] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_Ki_init[c1_fSQGMH2uGoHTT2XCT6JYRC_i20];
  }

  _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 19);
  c1_fSQGMH2uGoHTT2XCT6JYRC_abspos = 1.0;
  _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 20);
  c1_fSQGMH2uGoHTT2XCT6JYRC_ireg = 1.0;
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_ireg = 0;
  do {
    exitg1 = 0;
    if (c1_fSQGMH2uGoHTT2XCT6JYRC_b_ireg < 68) {
      c1_fSQGMH2uGoHTT2XCT6JYRC_ireg = 1.0 + (real_T)
        c1_fSQGMH2uGoHTT2XCT6JYRC_b_ireg;
      CV_EML_FOR(0, 1, 0, 1);
      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 21);
      c1_fSQGMH2uGoHTT2XCT6JYRC_sumViol = 0.0;
      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 22);
      c1_fSQGMH2uGoHTT2XCT6JYRC_isinside = 1.0;
      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 26);
      c1_fSQGMH2uGoHTT2XCT6JYRC_d0 = c1_fSQGMH2uGoHTT2XCT6JYRC_Nc[(int32_T)
        (real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("Nc", (int32_T)_SFD_INTEGER_CHECK(
        "ireg", c1_fSQGMH2uGoHTT2XCT6JYRC_ireg), 1, 68, 1, 0) - 1];
      c1_fSQGMH2uGoHTT2XCT6JYRC_i21 = (int32_T)c1_fSQGMH2uGoHTT2XCT6JYRC_d0;
      _SFD_FOR_LOOP_VECTOR_CHECK(1.0, 1.0, c1_fSQGMH2uGoHTT2XCT6JYRC_d0,
        mxDOUBLE_CLASS, c1_fSQGMH2uGoHTT2XCT6JYRC_i21);
      c1_fSQGMH2uGoHTT2XCT6JYRC_i = 1.0;
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_i = 0;
      while (c1_fSQGMH2uGoHTT2XCT6JYRC_b_i <= c1_fSQGMH2uGoHTT2XCT6JYRC_i21 - 1)
      {
        c1_fSQGMH2uGoHTT2XCT6JYRC_i = 1.0 + (real_T)
          c1_fSQGMH2uGoHTT2XCT6JYRC_b_i;
        CV_EML_FOR(0, 1, 1, 1);
        _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 27);
        c1_fSQGMH2uGoHTT2XCT6JYRC_b_Nx = c1_fSQGMH2uGoHTT2XCT6JYRC_Nx;
        c1_fSQGMH2uGoHTT2XCT6JYRC_i22 = (int32_T)c1_fSQGMH2uGoHTT2XCT6JYRC_b_Nx;
        _SFD_FOR_LOOP_VECTOR_CHECK(1.0, 1.0, c1_fSQGMH2uGoHTT2XCT6JYRC_b_Nx,
          mxDOUBLE_CLASS, c1_fSQGMH2uGoHTT2XCT6JYRC_i22);
        c1_fSQGMH2uGoHTT2XCT6JYRC_j = 1.0;
        c1_fSQGMH2uGoHTT2XCT6JYRC_b_j = 0;
        while (c1_fSQGMH2uGoHTT2XCT6JYRC_b_j <= c1_fSQGMH2uGoHTT2XCT6JYRC_i22 -
               1) {
          c1_fSQGMH2uGoHTT2XCT6JYRC_j = 1.0 + (real_T)
            c1_fSQGMH2uGoHTT2XCT6JYRC_b_j;
          CV_EML_FOR(0, 1, 2, 1);
          _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 28);
          c1_fSQGMH2uGoHTT2XCT6JYRC_Hi[((int32_T)(real_T)
            _SFD_EML_ARRAY_BOUNDS_CHECK("Hi", (int32_T)_SFD_INTEGER_CHECK("i",
            c1_fSQGMH2uGoHTT2XCT6JYRC_i), 1, 100, 1, 0) + 100 * ((int32_T)
            (real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("Hi", (int32_T)
            _SFD_INTEGER_CHECK("j", c1_fSQGMH2uGoHTT2XCT6JYRC_j), 1, 3, 2, 0) -
            1)) - 1] = c1_fSQGMH2uGoHTT2XCT6JYRC_Hn[((int32_T)(real_T)
            _SFD_EML_ARRAY_BOUNDS_CHECK("Hn", (int32_T)_SFD_INTEGER_CHECK(
            "abspos + i - 1", (c1_fSQGMH2uGoHTT2XCT6JYRC_abspos +
                               c1_fSQGMH2uGoHTT2XCT6JYRC_i) - 1.0), 1, 401, 1, 0)
            + 401 * ((int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("Hn", (int32_T)
            _SFD_INTEGER_CHECK("j", c1_fSQGMH2uGoHTT2XCT6JYRC_j), 1, 3, 2, 0) -
                     1)) - 1];
          c1_fSQGMH2uGoHTT2XCT6JYRC_b_j++;
          _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
        }

        CV_EML_FOR(0, 1, 2, 0);
        c1_fSQGMH2uGoHTT2XCT6JYRC_b_i++;
        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }

      CV_EML_FOR(0, 1, 1, 0);
      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 33);
      c1_fSQGMH2uGoHTT2XCT6JYRC_d1 = c1_fSQGMH2uGoHTT2XCT6JYRC_Nc[(int32_T)
        (real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("Nc", (int32_T)_SFD_INTEGER_CHECK(
        "ireg", c1_fSQGMH2uGoHTT2XCT6JYRC_ireg), 1, 68, 1, 0) - 1];
      c1_fSQGMH2uGoHTT2XCT6JYRC_i23 = (int32_T)c1_fSQGMH2uGoHTT2XCT6JYRC_d1;
      _SFD_FOR_LOOP_VECTOR_CHECK(1.0, 1.0, c1_fSQGMH2uGoHTT2XCT6JYRC_d1,
        mxDOUBLE_CLASS, c1_fSQGMH2uGoHTT2XCT6JYRC_i23);
      c1_fSQGMH2uGoHTT2XCT6JYRC_i = 1.0;
      c1_fSQGMH2uGoHTT2XCT6JYRC_c_i = 0;
      while (c1_fSQGMH2uGoHTT2XCT6JYRC_c_i <= c1_fSQGMH2uGoHTT2XCT6JYRC_i23 - 1)
      {
        c1_fSQGMH2uGoHTT2XCT6JYRC_i = 1.0 + (real_T)
          c1_fSQGMH2uGoHTT2XCT6JYRC_c_i;
        CV_EML_FOR(0, 1, 3, 1);
        _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 34);
        c1_fSQGMH2uGoHTT2XCT6JYRC_Ki[(int32_T)(real_T)
          _SFD_EML_ARRAY_BOUNDS_CHECK("Ki", (int32_T)_SFD_INTEGER_CHECK("i",
          c1_fSQGMH2uGoHTT2XCT6JYRC_i), 1, 100, 1, 0) - 1] =
          c1_fSQGMH2uGoHTT2XCT6JYRC_Kn[(int32_T)(real_T)
          _SFD_EML_ARRAY_BOUNDS_CHECK("Kn", (int32_T)_SFD_INTEGER_CHECK(
          "abspos + i - 1", (c1_fSQGMH2uGoHTT2XCT6JYRC_abspos +
                             c1_fSQGMH2uGoHTT2XCT6JYRC_i) - 1.0), 1, 401, 1, 0)
          - 1];
        c1_fSQGMH2uGoHTT2XCT6JYRC_c_i++;
        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }

      CV_EML_FOR(0, 1, 3, 0);
      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 36);
      c1_fSQGMH2uGoHTT2XCT6JYRC_abspos += c1_fSQGMH2uGoHTT2XCT6JYRC_Nc[(int32_T)
        (real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("Nc", (int32_T)_SFD_INTEGER_CHECK(
        "ireg", c1_fSQGMH2uGoHTT2XCT6JYRC_ireg), 1, 68, 1, 0) - 1];
      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 38);
      c1_fSQGMH2uGoHTT2XCT6JYRC_c_ireg = (int32_T)(real_T)
        _SFD_EML_ARRAY_BOUNDS_CHECK("Fi", (int32_T)_SFD_INTEGER_CHECK("ireg",
        c1_fSQGMH2uGoHTT2XCT6JYRC_ireg), 1, 68, 1, 0) - 1;
      for (c1_fSQGMH2uGoHTT2XCT6JYRC_i24 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i24 < 3;
           c1_fSQGMH2uGoHTT2XCT6JYRC_i24++) {
        c1_fSQGMH2uGoHTT2XCT6JYRC_F[c1_fSQGMH2uGoHTT2XCT6JYRC_i24] =
          c1_fSQGMH2uGoHTT2XCT6JYRC_Fi[c1_fSQGMH2uGoHTT2XCT6JYRC_c_ireg + 68 *
          c1_fSQGMH2uGoHTT2XCT6JYRC_i24];
      }

      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 39);
      c1_fSQGMH2uGoHTT2XCT6JYRC_G = c1_fSQGMH2uGoHTT2XCT6JYRC_Gi[(int32_T)
        (real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("Gi", (int32_T)_SFD_INTEGER_CHECK(
        "ireg", c1_fSQGMH2uGoHTT2XCT6JYRC_ireg), 1, 68, 1, 0) - 1];
      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 41);
      c1_fSQGMH2uGoHTT2XCT6JYRC_nc = c1_fSQGMH2uGoHTT2XCT6JYRC_Nc[(int32_T)
        (real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("Nc", (int32_T)_SFD_INTEGER_CHECK(
        "ireg", c1_fSQGMH2uGoHTT2XCT6JYRC_ireg), 1, 68, 1, 0) - 1];
      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 43);
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_nc = c1_fSQGMH2uGoHTT2XCT6JYRC_nc;
      c1_fSQGMH2uGoHTT2XCT6JYRC_i25 = (int32_T)c1_fSQGMH2uGoHTT2XCT6JYRC_b_nc;
      _SFD_FOR_LOOP_VECTOR_CHECK(1.0, 1.0, c1_fSQGMH2uGoHTT2XCT6JYRC_b_nc,
        mxDOUBLE_CLASS, c1_fSQGMH2uGoHTT2XCT6JYRC_i25);
      c1_fSQGMH2uGoHTT2XCT6JYRC_ic = 1.0;
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_ic = 0;
      while (c1_fSQGMH2uGoHTT2XCT6JYRC_b_ic <= c1_fSQGMH2uGoHTT2XCT6JYRC_i25 - 1)
      {
        c1_fSQGMH2uGoHTT2XCT6JYRC_ic = 1.0 + (real_T)
          c1_fSQGMH2uGoHTT2XCT6JYRC_b_ic;
        CV_EML_FOR(0, 1, 4, 1);
        _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 44);
        c1_fSQGMH2uGoHTT2XCT6JYRC_c_ic = (int32_T)(real_T)
          _SFD_EML_ARRAY_BOUNDS_CHECK("Hi", (int32_T)_SFD_INTEGER_CHECK("ic",
          c1_fSQGMH2uGoHTT2XCT6JYRC_ic), 1, 100, 1, 0) - 1;
        for (c1_fSQGMH2uGoHTT2XCT6JYRC_i26 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i26 <
             3; c1_fSQGMH2uGoHTT2XCT6JYRC_i26++) {
          c1_fSQGMH2uGoHTT2XCT6JYRC_a[c1_fSQGMH2uGoHTT2XCT6JYRC_i26] =
            c1_fSQGMH2uGoHTT2XCT6JYRC_Hi[c1_fSQGMH2uGoHTT2XCT6JYRC_c_ic + 100 *
            c1_fSQGMH2uGoHTT2XCT6JYRC_i26];
        }

        for (c1_fSQGMH2uGoHTT2XCT6JYRC_i27 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i27 <
             3; c1_fSQGMH2uGoHTT2XCT6JYRC_i27++) {
          c1_fSQGMH2uGoHTT2XCT6JYRC_b[c1_fSQGMH2uGoHTT2XCT6JYRC_i27] =
            c1_fSQGMH2uGoHTT2XCT6JYRC_X[c1_fSQGMH2uGoHTT2XCT6JYRC_i27];
        }

        c1_fSQGMH2uGoHTT2XCT6JYRC_eml_scalar_eg(chartInstance);
        c1_fSQGMH2uGoHTT2XCT6JYRC_eml_scalar_eg(chartInstance);
        c1_fSQGMH2uGoHTT2XCT6JYRC_hx = 0.0;
        for (c1_fSQGMH2uGoHTT2XCT6JYRC_k = 1; c1_fSQGMH2uGoHTT2XCT6JYRC_k < 4;
             c1_fSQGMH2uGoHTT2XCT6JYRC_k++) {
          c1_fSQGMH2uGoHTT2XCT6JYRC_b_k = c1_fSQGMH2uGoHTT2XCT6JYRC_k;
          c1_fSQGMH2uGoHTT2XCT6JYRC_hx +=
            c1_fSQGMH2uGoHTT2XCT6JYRC_a[_SFD_EML_ARRAY_BOUNDS_CHECK("", (int32_T)
            _SFD_INTEGER_CHECK("", (real_T)c1_fSQGMH2uGoHTT2XCT6JYRC_b_k), 1, 3,
            1, 0) - 1] * c1_fSQGMH2uGoHTT2XCT6JYRC_b[_SFD_EML_ARRAY_BOUNDS_CHECK
            ("", (int32_T)_SFD_INTEGER_CHECK("", (real_T)
              c1_fSQGMH2uGoHTT2XCT6JYRC_b_k), 1, 3, 1, 0) - 1];
        }

        _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 45);
        if (CV_EML_IF(0, 1, 0, c1_fSQGMH2uGoHTT2XCT6JYRC_hx -
                      c1_fSQGMH2uGoHTT2XCT6JYRC_Ki[(int32_T)(real_T)
                      _SFD_EML_ARRAY_BOUNDS_CHECK("Ki", (int32_T)
              _SFD_INTEGER_CHECK("ic", c1_fSQGMH2uGoHTT2XCT6JYRC_ic), 1, 100, 1,
              0) - 1] > c1_fSQGMH2uGoHTT2XCT6JYRC_MPT_ABSTOL)) {
          _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 46);
          c1_fSQGMH2uGoHTT2XCT6JYRC_isinside = 0.0;
          _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 47);
          c1_fSQGMH2uGoHTT2XCT6JYRC_sumViol += c1_fSQGMH2uGoHTT2XCT6JYRC_hx -
            c1_fSQGMH2uGoHTT2XCT6JYRC_Ki[(int32_T)(real_T)
            _SFD_EML_ARRAY_BOUNDS_CHECK("Ki", (int32_T)_SFD_INTEGER_CHECK("ic",
            c1_fSQGMH2uGoHTT2XCT6JYRC_ic), 1, 100, 1, 0) - 1];
        }

        c1_fSQGMH2uGoHTT2XCT6JYRC_b_ic++;
        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }

      CV_EML_FOR(0, 1, 4, 0);
      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 51);
      if (CV_EML_IF(0, 1, 1, c1_fSQGMH2uGoHTT2XCT6JYRC_sumViol <
                    c1_fSQGMH2uGoHTT2XCT6JYRC_tolerance)) {
        _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 52);
        c1_fSQGMH2uGoHTT2XCT6JYRC_tolerance = c1_fSQGMH2uGoHTT2XCT6JYRC_sumViol;
        _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 53);
        c1_fSQGMH2uGoHTT2XCT6JYRC_minreg = c1_fSQGMH2uGoHTT2XCT6JYRC_ireg;
      }

      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 56);
      if (CV_EML_IF(0, 1, 2, c1_fSQGMH2uGoHTT2XCT6JYRC_isinside == 1.0)) {
        _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 57);
        for (c1_fSQGMH2uGoHTT2XCT6JYRC_i28 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i28 <
             3; c1_fSQGMH2uGoHTT2XCT6JYRC_i28++) {
          c1_fSQGMH2uGoHTT2XCT6JYRC_a[c1_fSQGMH2uGoHTT2XCT6JYRC_i28] =
            c1_fSQGMH2uGoHTT2XCT6JYRC_F[c1_fSQGMH2uGoHTT2XCT6JYRC_i28];
        }

        for (c1_fSQGMH2uGoHTT2XCT6JYRC_i29 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i29 <
             3; c1_fSQGMH2uGoHTT2XCT6JYRC_i29++) {
          c1_fSQGMH2uGoHTT2XCT6JYRC_b[c1_fSQGMH2uGoHTT2XCT6JYRC_i29] =
            c1_fSQGMH2uGoHTT2XCT6JYRC_X[c1_fSQGMH2uGoHTT2XCT6JYRC_i29];
        }

        c1_fSQGMH2uGoHTT2XCT6JYRC_eml_scalar_eg(chartInstance);
        c1_fSQGMH2uGoHTT2XCT6JYRC_eml_scalar_eg(chartInstance);
        c1_fSQGMH2uGoHTT2XCT6JYRC_y = 0.0;
        for (c1_fSQGMH2uGoHTT2XCT6JYRC_c_k = 1; c1_fSQGMH2uGoHTT2XCT6JYRC_c_k <
             4; c1_fSQGMH2uGoHTT2XCT6JYRC_c_k++) {
          c1_fSQGMH2uGoHTT2XCT6JYRC_d_k = c1_fSQGMH2uGoHTT2XCT6JYRC_c_k;
          c1_fSQGMH2uGoHTT2XCT6JYRC_y +=
            c1_fSQGMH2uGoHTT2XCT6JYRC_a[_SFD_EML_ARRAY_BOUNDS_CHECK("", (int32_T)
            _SFD_INTEGER_CHECK("", (real_T)c1_fSQGMH2uGoHTT2XCT6JYRC_d_k), 1, 3,
            1, 0) - 1] * c1_fSQGMH2uGoHTT2XCT6JYRC_b[_SFD_EML_ARRAY_BOUNDS_CHECK
            ("", (int32_T)_SFD_INTEGER_CHECK("", (real_T)
              c1_fSQGMH2uGoHTT2XCT6JYRC_d_k), 1, 3, 1, 0) - 1];
        }

        c1_fSQGMH2uGoHTT2XCT6JYRC_U = c1_fSQGMH2uGoHTT2XCT6JYRC_y +
          c1_fSQGMH2uGoHTT2XCT6JYRC_G;
        _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 58);
        exitg1 = 1;
      } else {
        c1_fSQGMH2uGoHTT2XCT6JYRC_b_ireg++;
        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }
    } else {
      CV_EML_FOR(0, 1, 0, 0);
      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 63);
      for (c1_fSQGMH2uGoHTT2XCT6JYRC_i30 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i30 < 2;
           c1_fSQGMH2uGoHTT2XCT6JYRC_i30++) {
        c1_fSQGMH2uGoHTT2XCT6JYRC_size_F[c1_fSQGMH2uGoHTT2XCT6JYRC_i30] = 1.0 +
          2.0 * (real_T)c1_fSQGMH2uGoHTT2XCT6JYRC_i30;
      }

      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 64);
      guard1 = FALSE;
      if (CV_EML_COND(0, 1, 0, c1_fSQGMH2uGoHTT2XCT6JYRC_minreg == 0.0)) {
        guard1 = TRUE;
      } else if (CV_EML_COND(0, 1, 1, c1_fSQGMH2uGoHTT2XCT6JYRC_minreg >
                             c1_fSQGMH2uGoHTT2XCT6JYRC_size_F[0])) {
        guard1 = TRUE;
      } else {
        CV_EML_MCDC(0, 1, 0, FALSE);
        CV_EML_IF(0, 1, 3, FALSE);
      }

      if (guard1 == TRUE) {
        CV_EML_MCDC(0, 1, 0, TRUE);
        CV_EML_IF(0, 1, 3, TRUE);
        _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 65);
        c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg = 1.0;
        _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 66);
        c1_fSQGMH2uGoHTT2XCT6JYRC_minreg = 1.0;
      }

      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 69);
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_minreg = (int32_T)(real_T)
        _SFD_EML_ARRAY_BOUNDS_CHECK("Fi", (int32_T)_SFD_INTEGER_CHECK("minreg",
        c1_fSQGMH2uGoHTT2XCT6JYRC_minreg), 1, 68, 1, 0) - 1;
      for (c1_fSQGMH2uGoHTT2XCT6JYRC_i31 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i31 < 3;
           c1_fSQGMH2uGoHTT2XCT6JYRC_i31++) {
        c1_fSQGMH2uGoHTT2XCT6JYRC_F[c1_fSQGMH2uGoHTT2XCT6JYRC_i31] =
          c1_fSQGMH2uGoHTT2XCT6JYRC_Fi[c1_fSQGMH2uGoHTT2XCT6JYRC_b_minreg + 68 *
          c1_fSQGMH2uGoHTT2XCT6JYRC_i31];
      }

      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 70);
      c1_fSQGMH2uGoHTT2XCT6JYRC_G = c1_fSQGMH2uGoHTT2XCT6JYRC_Gi[(int32_T)
        (real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("Gi", (int32_T)_SFD_INTEGER_CHECK(
        "minreg", c1_fSQGMH2uGoHTT2XCT6JYRC_minreg), 1, 68, 1, 0) - 1];
      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 71);
      for (c1_fSQGMH2uGoHTT2XCT6JYRC_i32 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i32 < 3;
           c1_fSQGMH2uGoHTT2XCT6JYRC_i32++) {
        c1_fSQGMH2uGoHTT2XCT6JYRC_a[c1_fSQGMH2uGoHTT2XCT6JYRC_i32] =
          c1_fSQGMH2uGoHTT2XCT6JYRC_F[c1_fSQGMH2uGoHTT2XCT6JYRC_i32];
      }

      for (c1_fSQGMH2uGoHTT2XCT6JYRC_i33 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i33 < 3;
           c1_fSQGMH2uGoHTT2XCT6JYRC_i33++) {
        c1_fSQGMH2uGoHTT2XCT6JYRC_b[c1_fSQGMH2uGoHTT2XCT6JYRC_i33] =
          c1_fSQGMH2uGoHTT2XCT6JYRC_X[c1_fSQGMH2uGoHTT2XCT6JYRC_i33];
      }

      c1_fSQGMH2uGoHTT2XCT6JYRC_eml_scalar_eg(chartInstance);
      c1_fSQGMH2uGoHTT2XCT6JYRC_eml_scalar_eg(chartInstance);
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_y = 0.0;
      for (c1_fSQGMH2uGoHTT2XCT6JYRC_e_k = 1; c1_fSQGMH2uGoHTT2XCT6JYRC_e_k < 4;
           c1_fSQGMH2uGoHTT2XCT6JYRC_e_k++) {
        c1_fSQGMH2uGoHTT2XCT6JYRC_f_k = c1_fSQGMH2uGoHTT2XCT6JYRC_e_k;
        c1_fSQGMH2uGoHTT2XCT6JYRC_b_y +=
          c1_fSQGMH2uGoHTT2XCT6JYRC_a[_SFD_EML_ARRAY_BOUNDS_CHECK("", (int32_T)
          _SFD_INTEGER_CHECK("", (real_T)c1_fSQGMH2uGoHTT2XCT6JYRC_f_k), 1, 3, 1,
          0) - 1] * c1_fSQGMH2uGoHTT2XCT6JYRC_b[_SFD_EML_ARRAY_BOUNDS_CHECK("",
          (int32_T)_SFD_INTEGER_CHECK("", (real_T)c1_fSQGMH2uGoHTT2XCT6JYRC_f_k),
          1, 3, 1, 0) - 1];
      }

      c1_fSQGMH2uGoHTT2XCT6JYRC_U = c1_fSQGMH2uGoHTT2XCT6JYRC_b_y +
        c1_fSQGMH2uGoHTT2XCT6JYRC_G;
      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 72);
      c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob = 1.0;
      _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, 74);
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  _SFD_EML_CALL(0U, chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent, -74);
  _SFD_SYMBOL_SCOPE_POP();
  *c1_fSQGMH2uGoHTT2XCT6JYRC_b_U = c1_fSQGMH2uGoHTT2XCT6JYRC_U;
  *c1_fSQGMH2uGoHTT2XCT6JYRC_b_flag_oob = c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob;
  *c1_fSQGMH2uGoHTT2XCT6JYRC_b_flag_minreg =
    c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U,
               chartInstance->c1_fSQGMH2uGoHTT2XCT6JYRC_sfEvent);
}

static void initSimStructsc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance)
{
}

static void registerMessagesc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T
  c1_fSQGMH2uGoHTT2XCT6JYRC_machineNumber, uint32_T
  c1_fSQGMH2uGoHTT2XCT6JYRC_chartNumber)
{
}

static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_u;
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_u = *(real_T *)c1_fSQGMH2uGoHTT2XCT6JYRC_inData;
  c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_y, sf_mex_create("y",
    &c1_fSQGMH2uGoHTT2XCT6JYRC_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData,
                c1_fSQGMH2uGoHTT2XCT6JYRC_y, FALSE);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData;
}

static real_T c1_fSQGMH2uGoHTT2XCT6JYRC_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg, const char_T
   *c1_fSQGMH2uGoHTT2XCT6JYRC_identifier)
{
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y;
  emlrtMsgIdentifier c1_fSQGMH2uGoHTT2XCT6JYRC_thisId;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fIdentifier =
    c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fParent = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_y = c1_fSQGMH2uGoHTT2XCT6JYRC_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg),
     &c1_fSQGMH2uGoHTT2XCT6JYRC_thisId);
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_y;
}

static real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId)
{
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_d2;
  sf_mex_import(c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, sf_mex_dup
                (c1_fSQGMH2uGoHTT2XCT6JYRC_u), &c1_fSQGMH2uGoHTT2XCT6JYRC_d2, 1,
                0, 0U, 0, 0U, 0);
  c1_fSQGMH2uGoHTT2XCT6JYRC_y = c1_fSQGMH2uGoHTT2XCT6JYRC_d2;
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_u);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_y;
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData, const char_T
  *c1_fSQGMH2uGoHTT2XCT6JYRC_varName, void *c1_fSQGMH2uGoHTT2XCT6JYRC_outData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg;
  const char_T *c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  emlrtMsgIdentifier c1_fSQGMH2uGoHTT2XCT6JYRC_thisId;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg = sf_mex_dup
    (c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData);
  c1_fSQGMH2uGoHTT2XCT6JYRC_identifier = c1_fSQGMH2uGoHTT2XCT6JYRC_varName;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fIdentifier =
    c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fParent = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_y = c1_fSQGMH2uGoHTT2XCT6JYRC_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg),
     &c1_fSQGMH2uGoHTT2XCT6JYRC_thisId);
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg);
  *(real_T *)c1_fSQGMH2uGoHTT2XCT6JYRC_outData = c1_fSQGMH2uGoHTT2XCT6JYRC_y;
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData);
}

static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_b_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i34;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[100];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i35;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_u[100];
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i34 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i34 < 100;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i34++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i34] =
      (*(real_T (*)[100])c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
      [c1_fSQGMH2uGoHTT2XCT6JYRC_i34];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i35 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i35 < 100;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i35++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_u[c1_fSQGMH2uGoHTT2XCT6JYRC_i35] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i35];
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_y, sf_mex_create("y",
    c1_fSQGMH2uGoHTT2XCT6JYRC_u, 0, 0U, 1U, 0U, 1, 100), FALSE);
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData,
                c1_fSQGMH2uGoHTT2XCT6JYRC_y, FALSE);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData;
}

static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_c_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i36;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i37;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i38;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[300];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i39;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i40;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i41;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_u[300];
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_i36 = 0;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i37 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i37 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i37++) {
    for (c1_fSQGMH2uGoHTT2XCT6JYRC_i38 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i38 < 100;
         c1_fSQGMH2uGoHTT2XCT6JYRC_i38++) {
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i38 +
        c1_fSQGMH2uGoHTT2XCT6JYRC_i36] = (*(real_T (*)[300])
        c1_fSQGMH2uGoHTT2XCT6JYRC_inData)[c1_fSQGMH2uGoHTT2XCT6JYRC_i38 +
        c1_fSQGMH2uGoHTT2XCT6JYRC_i36];
    }

    c1_fSQGMH2uGoHTT2XCT6JYRC_i36 += 100;
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_i39 = 0;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i40 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i40 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i40++) {
    for (c1_fSQGMH2uGoHTT2XCT6JYRC_i41 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i41 < 100;
         c1_fSQGMH2uGoHTT2XCT6JYRC_i41++) {
      c1_fSQGMH2uGoHTT2XCT6JYRC_u[c1_fSQGMH2uGoHTT2XCT6JYRC_i41 +
        c1_fSQGMH2uGoHTT2XCT6JYRC_i39] =
        c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i41 +
        c1_fSQGMH2uGoHTT2XCT6JYRC_i39];
    }

    c1_fSQGMH2uGoHTT2XCT6JYRC_i39 += 100;
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_y, sf_mex_create("y",
    c1_fSQGMH2uGoHTT2XCT6JYRC_u, 0, 0U, 1U, 0U, 2, 100, 3), FALSE);
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData,
                c1_fSQGMH2uGoHTT2XCT6JYRC_y, FALSE);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData;
}

static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_d_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i42;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[68];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i43;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_u[68];
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i42 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i42 < 68;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i42++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i42] =
      (*(real_T (*)[68])c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
      [c1_fSQGMH2uGoHTT2XCT6JYRC_i42];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i43 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i43 < 68;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i43++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_u[c1_fSQGMH2uGoHTT2XCT6JYRC_i43] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i43];
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_y, sf_mex_create("y",
    c1_fSQGMH2uGoHTT2XCT6JYRC_u, 0, 0U, 1U, 0U, 1, 68), FALSE);
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData,
                c1_fSQGMH2uGoHTT2XCT6JYRC_y, FALSE);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData;
}

static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_e_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i44;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i45;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i46;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[204];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i47;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i48;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i49;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_u[204];
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_i44 = 0;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i45 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i45 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i45++) {
    for (c1_fSQGMH2uGoHTT2XCT6JYRC_i46 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i46 < 68;
         c1_fSQGMH2uGoHTT2XCT6JYRC_i46++) {
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i46 +
        c1_fSQGMH2uGoHTT2XCT6JYRC_i44] = (*(real_T (*)[204])
        c1_fSQGMH2uGoHTT2XCT6JYRC_inData)[c1_fSQGMH2uGoHTT2XCT6JYRC_i46 +
        c1_fSQGMH2uGoHTT2XCT6JYRC_i44];
    }

    c1_fSQGMH2uGoHTT2XCT6JYRC_i44 += 68;
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_i47 = 0;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i48 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i48 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i48++) {
    for (c1_fSQGMH2uGoHTT2XCT6JYRC_i49 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i49 < 68;
         c1_fSQGMH2uGoHTT2XCT6JYRC_i49++) {
      c1_fSQGMH2uGoHTT2XCT6JYRC_u[c1_fSQGMH2uGoHTT2XCT6JYRC_i49 +
        c1_fSQGMH2uGoHTT2XCT6JYRC_i47] =
        c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i49 +
        c1_fSQGMH2uGoHTT2XCT6JYRC_i47];
    }

    c1_fSQGMH2uGoHTT2XCT6JYRC_i47 += 68;
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_y, sf_mex_create("y",
    c1_fSQGMH2uGoHTT2XCT6JYRC_u, 0, 0U, 1U, 0U, 2, 68, 3), FALSE);
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData,
                c1_fSQGMH2uGoHTT2XCT6JYRC_y, FALSE);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData;
}

static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_f_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i50;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[401];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i51;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_u[401];
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i50 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i50 < 401;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i50++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i50] =
      (*(real_T (*)[401])c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
      [c1_fSQGMH2uGoHTT2XCT6JYRC_i50];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i51 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i51 < 401;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i51++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_u[c1_fSQGMH2uGoHTT2XCT6JYRC_i51] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i51];
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_y, sf_mex_create("y",
    c1_fSQGMH2uGoHTT2XCT6JYRC_u, 0, 0U, 1U, 0U, 1, 401), FALSE);
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData,
                c1_fSQGMH2uGoHTT2XCT6JYRC_y, FALSE);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData;
}

static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_g_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i52;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i53;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i54;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[1203];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i55;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i56;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i57;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_u[1203];
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_i52 = 0;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i53 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i53 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i53++) {
    for (c1_fSQGMH2uGoHTT2XCT6JYRC_i54 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i54 < 401;
         c1_fSQGMH2uGoHTT2XCT6JYRC_i54++) {
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i54 +
        c1_fSQGMH2uGoHTT2XCT6JYRC_i52] = (*(real_T (*)[1203])
        c1_fSQGMH2uGoHTT2XCT6JYRC_inData)[c1_fSQGMH2uGoHTT2XCT6JYRC_i54 +
        c1_fSQGMH2uGoHTT2XCT6JYRC_i52];
    }

    c1_fSQGMH2uGoHTT2XCT6JYRC_i52 += 401;
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_i55 = 0;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i56 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i56 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i56++) {
    for (c1_fSQGMH2uGoHTT2XCT6JYRC_i57 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i57 < 401;
         c1_fSQGMH2uGoHTT2XCT6JYRC_i57++) {
      c1_fSQGMH2uGoHTT2XCT6JYRC_u[c1_fSQGMH2uGoHTT2XCT6JYRC_i57 +
        c1_fSQGMH2uGoHTT2XCT6JYRC_i55] =
        c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i57 +
        c1_fSQGMH2uGoHTT2XCT6JYRC_i55];
    }

    c1_fSQGMH2uGoHTT2XCT6JYRC_i55 += 401;
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_y, sf_mex_create("y",
    c1_fSQGMH2uGoHTT2XCT6JYRC_u, 0, 0U, 1U, 0U, 2, 401, 3), FALSE);
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData,
                c1_fSQGMH2uGoHTT2XCT6JYRC_y, FALSE);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData;
}

static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_h_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i58;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[3];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i59;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_u[3];
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i58 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i58 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i58++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i58] =
      (*(real_T (*)[3])c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
      [c1_fSQGMH2uGoHTT2XCT6JYRC_i58];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i59 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i59 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i59++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_u[c1_fSQGMH2uGoHTT2XCT6JYRC_i59] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i59];
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_y, sf_mex_create("y",
    c1_fSQGMH2uGoHTT2XCT6JYRC_u, 0, 0U, 1U, 0U, 1, 3), FALSE);
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData,
                c1_fSQGMH2uGoHTT2XCT6JYRC_y, FALSE);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData;
}

static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_i_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i60;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[2];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i61;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_u[2];
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i60 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i60 < 2;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i60++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i60] =
      (*(real_T (*)[2])c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
      [c1_fSQGMH2uGoHTT2XCT6JYRC_i60];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i61 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i61 < 2;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i61++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_u[c1_fSQGMH2uGoHTT2XCT6JYRC_i61] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i61];
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_y, sf_mex_create("y",
    c1_fSQGMH2uGoHTT2XCT6JYRC_u, 0, 0U, 1U, 0U, 2, 1, 2), FALSE);
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData,
                c1_fSQGMH2uGoHTT2XCT6JYRC_y, FALSE);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData;
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_c_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y[2])
{
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_dv0[2];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i62;
  sf_mex_import(c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, sf_mex_dup
                (c1_fSQGMH2uGoHTT2XCT6JYRC_u), c1_fSQGMH2uGoHTT2XCT6JYRC_dv0, 1,
                0, 0U, 1, 0U, 2, 1, 2);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i62 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i62 < 2;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i62++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_y[c1_fSQGMH2uGoHTT2XCT6JYRC_i62] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_dv0[c1_fSQGMH2uGoHTT2XCT6JYRC_i62];
  }

  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_u);
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_b_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData, const char_T
  *c1_fSQGMH2uGoHTT2XCT6JYRC_varName, void *c1_fSQGMH2uGoHTT2XCT6JYRC_outData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_size_F;
  const char_T *c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  emlrtMsgIdentifier c1_fSQGMH2uGoHTT2XCT6JYRC_thisId;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y[2];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i63;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_size_F = sf_mex_dup
    (c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData);
  c1_fSQGMH2uGoHTT2XCT6JYRC_identifier = c1_fSQGMH2uGoHTT2XCT6JYRC_varName;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fIdentifier =
    c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fParent = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_fSQGMH2uGoHTT2XCT6JYRC_size_F), &c1_fSQGMH2uGoHTT2XCT6JYRC_thisId,
    c1_fSQGMH2uGoHTT2XCT6JYRC_y);
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_size_F);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i63 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i63 < 2;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i63++) {
    (*(real_T (*)[2])c1_fSQGMH2uGoHTT2XCT6JYRC_outData)
      [c1_fSQGMH2uGoHTT2XCT6JYRC_i63] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_y[c1_fSQGMH2uGoHTT2XCT6JYRC_i63];
  }

  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData);
}

static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_j_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i64;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[3];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i65;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_u[3];
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i64 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i64 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i64++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i64] =
      (*(real_T (*)[3])c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
      [c1_fSQGMH2uGoHTT2XCT6JYRC_i64];
  }

  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i65 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i65 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i65++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_u[c1_fSQGMH2uGoHTT2XCT6JYRC_i65] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_inData[c1_fSQGMH2uGoHTT2XCT6JYRC_i65];
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_y, sf_mex_create("y",
    c1_fSQGMH2uGoHTT2XCT6JYRC_u, 0, 0U, 1U, 0U, 2, 1, 3), FALSE);
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData,
                c1_fSQGMH2uGoHTT2XCT6JYRC_y, FALSE);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData;
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_d_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y[3])
{
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_dv1[3];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i66;
  sf_mex_import(c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, sf_mex_dup
                (c1_fSQGMH2uGoHTT2XCT6JYRC_u), c1_fSQGMH2uGoHTT2XCT6JYRC_dv1, 1,
                0, 0U, 1, 0U, 2, 1, 3);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i66 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i66 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i66++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_y[c1_fSQGMH2uGoHTT2XCT6JYRC_i66] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_dv1[c1_fSQGMH2uGoHTT2XCT6JYRC_i66];
  }

  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_u);
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_c_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData, const char_T
  *c1_fSQGMH2uGoHTT2XCT6JYRC_varName, void *c1_fSQGMH2uGoHTT2XCT6JYRC_outData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_F;
  const char_T *c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  emlrtMsgIdentifier c1_fSQGMH2uGoHTT2XCT6JYRC_thisId;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y[3];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i67;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_F = sf_mex_dup
    (c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData);
  c1_fSQGMH2uGoHTT2XCT6JYRC_identifier = c1_fSQGMH2uGoHTT2XCT6JYRC_varName;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fIdentifier =
    c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fParent = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_fSQGMH2uGoHTT2XCT6JYRC_F), &c1_fSQGMH2uGoHTT2XCT6JYRC_thisId,
    c1_fSQGMH2uGoHTT2XCT6JYRC_y);
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_F);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i67 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i67 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i67++) {
    (*(real_T (*)[3])c1_fSQGMH2uGoHTT2XCT6JYRC_outData)
      [c1_fSQGMH2uGoHTT2XCT6JYRC_i67] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_y[c1_fSQGMH2uGoHTT2XCT6JYRC_i67];
  }

  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData);
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_e_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y[100])
{
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_dv2[100];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i68;
  sf_mex_import(c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, sf_mex_dup
                (c1_fSQGMH2uGoHTT2XCT6JYRC_u), c1_fSQGMH2uGoHTT2XCT6JYRC_dv2, 1,
                0, 0U, 1, 0U, 1, 100);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i68 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i68 < 100;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i68++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_y[c1_fSQGMH2uGoHTT2XCT6JYRC_i68] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_dv2[c1_fSQGMH2uGoHTT2XCT6JYRC_i68];
  }

  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_u);
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_d_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData, const char_T
  *c1_fSQGMH2uGoHTT2XCT6JYRC_varName, void *c1_fSQGMH2uGoHTT2XCT6JYRC_outData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_Ki;
  const char_T *c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  emlrtMsgIdentifier c1_fSQGMH2uGoHTT2XCT6JYRC_thisId;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y[100];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i69;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_Ki = sf_mex_dup
    (c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData);
  c1_fSQGMH2uGoHTT2XCT6JYRC_identifier = c1_fSQGMH2uGoHTT2XCT6JYRC_varName;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fIdentifier =
    c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fParent = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_fSQGMH2uGoHTT2XCT6JYRC_Ki), &c1_fSQGMH2uGoHTT2XCT6JYRC_thisId,
    c1_fSQGMH2uGoHTT2XCT6JYRC_y);
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_Ki);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i69 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i69 < 100;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i69++) {
    (*(real_T (*)[100])c1_fSQGMH2uGoHTT2XCT6JYRC_outData)
      [c1_fSQGMH2uGoHTT2XCT6JYRC_i69] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_y[c1_fSQGMH2uGoHTT2XCT6JYRC_i69];
  }

  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData);
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_f_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y[300])
{
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_dv3[300];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i70;
  sf_mex_import(c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, sf_mex_dup
                (c1_fSQGMH2uGoHTT2XCT6JYRC_u), c1_fSQGMH2uGoHTT2XCT6JYRC_dv3, 1,
                0, 0U, 1, 0U, 2, 100, 3);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i70 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i70 < 300;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i70++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_y[c1_fSQGMH2uGoHTT2XCT6JYRC_i70] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_dv3[c1_fSQGMH2uGoHTT2XCT6JYRC_i70];
  }

  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_u);
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_e_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData, const char_T
  *c1_fSQGMH2uGoHTT2XCT6JYRC_varName, void *c1_fSQGMH2uGoHTT2XCT6JYRC_outData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_Hi;
  const char_T *c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  emlrtMsgIdentifier c1_fSQGMH2uGoHTT2XCT6JYRC_thisId;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_y[300];
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i71;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i72;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i73;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_Hi = sf_mex_dup
    (c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData);
  c1_fSQGMH2uGoHTT2XCT6JYRC_identifier = c1_fSQGMH2uGoHTT2XCT6JYRC_varName;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fIdentifier =
    c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fParent = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_fSQGMH2uGoHTT2XCT6JYRC_Hi), &c1_fSQGMH2uGoHTT2XCT6JYRC_thisId,
    c1_fSQGMH2uGoHTT2XCT6JYRC_y);
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_Hi);
  c1_fSQGMH2uGoHTT2XCT6JYRC_i71 = 0;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i72 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i72 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i72++) {
    for (c1_fSQGMH2uGoHTT2XCT6JYRC_i73 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i73 < 100;
         c1_fSQGMH2uGoHTT2XCT6JYRC_i73++) {
      (*(real_T (*)[300])c1_fSQGMH2uGoHTT2XCT6JYRC_outData)
        [c1_fSQGMH2uGoHTT2XCT6JYRC_i73 + c1_fSQGMH2uGoHTT2XCT6JYRC_i71] =
        c1_fSQGMH2uGoHTT2XCT6JYRC_y[c1_fSQGMH2uGoHTT2XCT6JYRC_i73 +
        c1_fSQGMH2uGoHTT2XCT6JYRC_i71];
    }

    c1_fSQGMH2uGoHTT2XCT6JYRC_i71 += 100;
  }

  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData);
}

const mxArray
  *sf_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_nameCaptureInfo;
  c1_fSQGMH2uGoHTT2XCT6JYRC_ResolvedFunctionInfo c1_fSQGMH2uGoHTT2XCT6JYRC_info
    [26];
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_m0 = NULL;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i74;
  c1_fSQGMH2uGoHTT2XCT6JYRC_ResolvedFunctionInfo *c1_fSQGMH2uGoHTT2XCT6JYRC_r0;
  c1_fSQGMH2uGoHTT2XCT6JYRC_nameCaptureInfo = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_nameCaptureInfo = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info_helper(c1_fSQGMH2uGoHTT2XCT6JYRC_info);
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_m0, sf_mex_createstruct(
    "nameCaptureInfo", 1, 26), FALSE);
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i74 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i74 < 26;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i74++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_r0 =
      &c1_fSQGMH2uGoHTT2XCT6JYRC_info[c1_fSQGMH2uGoHTT2XCT6JYRC_i74];
    sf_mex_addfield(c1_fSQGMH2uGoHTT2XCT6JYRC_m0, sf_mex_create(
      "nameCaptureInfo", c1_fSQGMH2uGoHTT2XCT6JYRC_r0->context, 15, 0U, 0U, 0U,
      2, 1, strlen(c1_fSQGMH2uGoHTT2XCT6JYRC_r0->context)), "context",
                    "nameCaptureInfo", c1_fSQGMH2uGoHTT2XCT6JYRC_i74);
    sf_mex_addfield(c1_fSQGMH2uGoHTT2XCT6JYRC_m0, sf_mex_create(
      "nameCaptureInfo", c1_fSQGMH2uGoHTT2XCT6JYRC_r0->name, 15, 0U, 0U, 0U, 2,
      1, strlen(c1_fSQGMH2uGoHTT2XCT6JYRC_r0->name)), "name", "nameCaptureInfo",
                    c1_fSQGMH2uGoHTT2XCT6JYRC_i74);
    sf_mex_addfield(c1_fSQGMH2uGoHTT2XCT6JYRC_m0, sf_mex_create(
      "nameCaptureInfo", c1_fSQGMH2uGoHTT2XCT6JYRC_r0->dominantType, 15, 0U, 0U,
      0U, 2, 1, strlen(c1_fSQGMH2uGoHTT2XCT6JYRC_r0->dominantType)),
                    "dominantType", "nameCaptureInfo",
                    c1_fSQGMH2uGoHTT2XCT6JYRC_i74);
    sf_mex_addfield(c1_fSQGMH2uGoHTT2XCT6JYRC_m0, sf_mex_create(
      "nameCaptureInfo", c1_fSQGMH2uGoHTT2XCT6JYRC_r0->resolved, 15, 0U, 0U, 0U,
      2, 1, strlen(c1_fSQGMH2uGoHTT2XCT6JYRC_r0->resolved)), "resolved",
                    "nameCaptureInfo", c1_fSQGMH2uGoHTT2XCT6JYRC_i74);
    sf_mex_addfield(c1_fSQGMH2uGoHTT2XCT6JYRC_m0, sf_mex_create(
      "nameCaptureInfo", &c1_fSQGMH2uGoHTT2XCT6JYRC_r0->fileTimeLo, 7, 0U, 0U,
      0U, 0), "fileTimeLo", "nameCaptureInfo", c1_fSQGMH2uGoHTT2XCT6JYRC_i74);
    sf_mex_addfield(c1_fSQGMH2uGoHTT2XCT6JYRC_m0, sf_mex_create(
      "nameCaptureInfo", &c1_fSQGMH2uGoHTT2XCT6JYRC_r0->fileTimeHi, 7, 0U, 0U,
      0U, 0), "fileTimeHi", "nameCaptureInfo", c1_fSQGMH2uGoHTT2XCT6JYRC_i74);
    sf_mex_addfield(c1_fSQGMH2uGoHTT2XCT6JYRC_m0, sf_mex_create(
      "nameCaptureInfo", &c1_fSQGMH2uGoHTT2XCT6JYRC_r0->mFileTimeLo, 7, 0U, 0U,
      0U, 0), "mFileTimeLo", "nameCaptureInfo", c1_fSQGMH2uGoHTT2XCT6JYRC_i74);
    sf_mex_addfield(c1_fSQGMH2uGoHTT2XCT6JYRC_m0, sf_mex_create(
      "nameCaptureInfo", &c1_fSQGMH2uGoHTT2XCT6JYRC_r0->mFileTimeHi, 7, 0U, 0U,
      0U, 0), "mFileTimeHi", "nameCaptureInfo", c1_fSQGMH2uGoHTT2XCT6JYRC_i74);
  }

  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_nameCaptureInfo,
                c1_fSQGMH2uGoHTT2XCT6JYRC_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a
    (&c1_fSQGMH2uGoHTT2XCT6JYRC_nameCaptureInfo);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_nameCaptureInfo;
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_info_helper
  (c1_fSQGMH2uGoHTT2XCT6JYRC_ResolvedFunctionInfo
   c1_fSQGMH2uGoHTT2XCT6JYRC_info[26])
{
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[0].context = "";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[0].name = "mtimes";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[0].dominantType = "double";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[0].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[0].fileTimeLo = 1289519692U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[0].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[0].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[0].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[1].context = "";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[1].name = "round";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[1].dominantType = "double";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[1].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/round.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[1].fileTimeLo = 1343830384U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[1].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[1].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[1].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[2].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/round.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[2].name = "eml_scalar_round";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[2].dominantType = "double";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[2].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_round.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[2].fileTimeLo = 1307651238U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[2].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[2].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[2].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[3].context = "";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[3].name = "mrdivide";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[3].dominantType = "double";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[3].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[3].fileTimeLo = 1357951548U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[3].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[3].mFileTimeLo = 1319729966U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[3].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[4].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[4].name = "rdivide";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[4].dominantType = "double";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[4].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[4].fileTimeLo = 1346510388U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[4].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[4].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[4].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[5].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[5].name = "eml_scalexp_compatible";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[5].dominantType = "double";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[5].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[5].fileTimeLo = 1286818796U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[5].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[5].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[5].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[6].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[6].name = "eml_div";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[6].dominantType = "double";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[6].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[6].fileTimeLo = 1313347810U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[6].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[6].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[6].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[7].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[7].name = "eml_index_class";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[7].dominantType = "";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[7].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[7].fileTimeLo = 1323170578U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[7].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[7].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[7].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[8].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[8].name = "eml_scalar_eg";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[8].dominantType = "double";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[8].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[8].fileTimeLo = 1286818796U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[8].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[8].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[8].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[9].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[9].name = "eml_xdotu";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[9].dominantType = "double";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[9].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[9].fileTimeLo = 1299076772U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[9].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[9].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[9].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[10].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[10].name = "eml_blas_inline";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[10].dominantType = "";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[10].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_blas_inline.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[10].fileTimeLo = 1299076768U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[10].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[10].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[10].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[11].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[11].name = "eml_xdot";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[11].dominantType = "double";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[11].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdot.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[11].fileTimeLo = 1299076772U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[11].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[11].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[11].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[12].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdot.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[12].name = "eml_blas_inline";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[12].dominantType = "";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[12].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_blas_inline.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[12].fileTimeLo = 1299076768U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[12].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[12].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[12].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[13].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[13].name = "eml_index_class";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[13].dominantType = "";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[13].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[13].fileTimeLo = 1323170578U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[13].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[13].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[13].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[14].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xdot.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[14].name = "eml_refblas_xdot";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[14].dominantType = "double";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[14].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdot.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[14].fileTimeLo = 1299076772U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[14].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[14].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[14].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[15].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdot.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[15].name = "eml_refblas_xdotx";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[15].dominantType = "char";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[15].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[15].fileTimeLo = 1299076774U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[15].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[15].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[15].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[16].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[16].name = "eml_scalar_eg";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[16].dominantType = "double";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[16].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[16].fileTimeLo = 1286818796U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[16].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[16].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[16].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[17].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[17].name = "eml_index_class";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[17].dominantType = "";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[17].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[17].fileTimeLo = 1323170578U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[17].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[17].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[17].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[18].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[18].name = "eml_index_minus";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[18].dominantType = "double";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[18].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[18].fileTimeLo = 1286818778U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[18].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[18].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[18].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[19].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[19].name = "eml_index_class";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[19].dominantType = "";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[19].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[19].fileTimeLo = 1323170578U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[19].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[19].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[19].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[20].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[20].name = "eml_index_times";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[20].dominantType = "coder.internal.indexInt";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[20].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[20].fileTimeLo = 1286818780U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[20].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[20].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[20].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[21].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[21].name = "eml_index_class";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[21].dominantType = "";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[21].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[21].fileTimeLo = 1323170578U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[21].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[21].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[21].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[22].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[22].name = "eml_index_plus";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[22].dominantType = "coder.internal.indexInt";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[22].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[22].fileTimeLo = 1286818778U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[22].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[22].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[22].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[23].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[23].name = "eml_index_class";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[23].dominantType = "";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[23].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[23].fileTimeLo = 1323170578U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[23].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[23].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[23].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[24].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/refblas/eml_refblas_xdotx.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[24].name = "eml_int_forloop_overflow_check";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[24].dominantType = "";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[24].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[24].fileTimeLo = 1346510340U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[24].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[24].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[24].mFileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[25].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[25].name = "intmax";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[25].dominantType = "char";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[25].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m";
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[25].fileTimeLo = 1311255316U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[25].fileTimeHi = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[25].mFileTimeLo = 0U;
  c1_fSQGMH2uGoHTT2XCT6JYRC_info[25].mFileTimeHi = 0U;
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_round
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   real_T c1_fSQGMH2uGoHTT2XCT6JYRC_x[3], real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_x[3])
{
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i75;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_i75 = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_i75 < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_i75++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_b_x[c1_fSQGMH2uGoHTT2XCT6JYRC_i75] =
      c1_fSQGMH2uGoHTT2XCT6JYRC_x[c1_fSQGMH2uGoHTT2XCT6JYRC_i75];
  }

  c1_fSQGMH2uGoHTT2XCT6JYRC_b_round(chartInstance, c1_fSQGMH2uGoHTT2XCT6JYRC_b_x);
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_eml_scalar_eg
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance)
{
}

static const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_k_sf_marshallOut(void
  *chartInstanceVoid, void *c1_fSQGMH2uGoHTT2XCT6JYRC_inData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_u;
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_u = *(int32_T *)c1_fSQGMH2uGoHTT2XCT6JYRC_inData;
  c1_fSQGMH2uGoHTT2XCT6JYRC_y = NULL;
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_y, sf_mex_create("y",
    &c1_fSQGMH2uGoHTT2XCT6JYRC_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData,
                c1_fSQGMH2uGoHTT2XCT6JYRC_y, FALSE);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayOutData;
}

static int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_g_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId)
{
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_y;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_i76;
  sf_mex_import(c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, sf_mex_dup
                (c1_fSQGMH2uGoHTT2XCT6JYRC_u), &c1_fSQGMH2uGoHTT2XCT6JYRC_i76, 1,
                6, 0U, 0, 0U, 0);
  c1_fSQGMH2uGoHTT2XCT6JYRC_y = c1_fSQGMH2uGoHTT2XCT6JYRC_i76;
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_u);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_y;
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_f_sf_marshallIn(void *chartInstanceVoid,
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData, const char_T
  *c1_fSQGMH2uGoHTT2XCT6JYRC_varName, void *c1_fSQGMH2uGoHTT2XCT6JYRC_outData)
{
  const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_b_sfEvent;
  const char_T *c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  emlrtMsgIdentifier c1_fSQGMH2uGoHTT2XCT6JYRC_thisId;
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_y;
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    chartInstanceVoid;
  c1_fSQGMH2uGoHTT2XCT6JYRC_b_sfEvent = sf_mex_dup
    (c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData);
  c1_fSQGMH2uGoHTT2XCT6JYRC_identifier = c1_fSQGMH2uGoHTT2XCT6JYRC_varName;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fIdentifier =
    c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fParent = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_y = c1_fSQGMH2uGoHTT2XCT6JYRC_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(c1_fSQGMH2uGoHTT2XCT6JYRC_b_sfEvent),
     &c1_fSQGMH2uGoHTT2XCT6JYRC_thisId);
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_b_sfEvent);
  *(int32_T *)c1_fSQGMH2uGoHTT2XCT6JYRC_outData = c1_fSQGMH2uGoHTT2XCT6JYRC_y;
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_mxArrayInData);
}

static uint8_T c1_fSQGMH2uGoHTT2XCT6JYRC_h_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray
   *c1_fSQGMH2uGoHTT2XCT6JYRC_b_is_active_c1_fSQGMH2uGoHTT2XCT6JYRC_, const
   char_T *c1_fSQGMH2uGoHTT2XCT6JYRC_identifier)
{
  uint8_T c1_fSQGMH2uGoHTT2XCT6JYRC_y;
  emlrtMsgIdentifier c1_fSQGMH2uGoHTT2XCT6JYRC_thisId;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fIdentifier =
    c1_fSQGMH2uGoHTT2XCT6JYRC_identifier;
  c1_fSQGMH2uGoHTT2XCT6JYRC_thisId.fParent = NULL;
  c1_fSQGMH2uGoHTT2XCT6JYRC_y = c1_fSQGMH2uGoHTT2XCT6JYRC_i_emlrt_marshallIn
    (chartInstance, sf_mex_dup
     (c1_fSQGMH2uGoHTT2XCT6JYRC_b_is_active_c1_fSQGMH2uGoHTT2XCT6JYRC_),
     &c1_fSQGMH2uGoHTT2XCT6JYRC_thisId);
  sf_mex_destroy
    (&c1_fSQGMH2uGoHTT2XCT6JYRC_b_is_active_c1_fSQGMH2uGoHTT2XCT6JYRC_);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_y;
}

static uint8_T c1_fSQGMH2uGoHTT2XCT6JYRC_i_emlrt_marshallIn
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   const mxArray *c1_fSQGMH2uGoHTT2XCT6JYRC_u, const emlrtMsgIdentifier
   *c1_fSQGMH2uGoHTT2XCT6JYRC_parentId)
{
  uint8_T c1_fSQGMH2uGoHTT2XCT6JYRC_y;
  uint8_T c1_fSQGMH2uGoHTT2XCT6JYRC_u0;
  sf_mex_import(c1_fSQGMH2uGoHTT2XCT6JYRC_parentId, sf_mex_dup
                (c1_fSQGMH2uGoHTT2XCT6JYRC_u), &c1_fSQGMH2uGoHTT2XCT6JYRC_u0, 1,
                3, 0U, 0, 0U, 0);
  c1_fSQGMH2uGoHTT2XCT6JYRC_y = c1_fSQGMH2uGoHTT2XCT6JYRC_u0;
  sf_mex_destroy(&c1_fSQGMH2uGoHTT2XCT6JYRC_u);
  return c1_fSQGMH2uGoHTT2XCT6JYRC_y;
}

static void c1_fSQGMH2uGoHTT2XCT6JYRC_b_round
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance,
   real_T c1_fSQGMH2uGoHTT2XCT6JYRC_x[3])
{
  int32_T c1_fSQGMH2uGoHTT2XCT6JYRC_k;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_k;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_b_x;
  real_T c1_fSQGMH2uGoHTT2XCT6JYRC_c_x;
  for (c1_fSQGMH2uGoHTT2XCT6JYRC_k = 0; c1_fSQGMH2uGoHTT2XCT6JYRC_k < 3;
       c1_fSQGMH2uGoHTT2XCT6JYRC_k++) {
    c1_fSQGMH2uGoHTT2XCT6JYRC_b_k = 1.0 + (real_T)c1_fSQGMH2uGoHTT2XCT6JYRC_k;
    c1_fSQGMH2uGoHTT2XCT6JYRC_b_x = c1_fSQGMH2uGoHTT2XCT6JYRC_x[(int32_T)(real_T)
      _SFD_EML_ARRAY_BOUNDS_CHECK("", (int32_T)_SFD_INTEGER_CHECK("",
      c1_fSQGMH2uGoHTT2XCT6JYRC_b_k), 1, 3, 1, 0) - 1];
    c1_fSQGMH2uGoHTT2XCT6JYRC_c_x = c1_fSQGMH2uGoHTT2XCT6JYRC_b_x;
    c1_fSQGMH2uGoHTT2XCT6JYRC_c_x = muDoubleScalarRound
      (c1_fSQGMH2uGoHTT2XCT6JYRC_c_x);
    c1_fSQGMH2uGoHTT2XCT6JYRC_x[(int32_T)(real_T)_SFD_EML_ARRAY_BOUNDS_CHECK("",
      (int32_T)_SFD_INTEGER_CHECK("", c1_fSQGMH2uGoHTT2XCT6JYRC_b_k), 1, 3, 1, 0)
      - 1] = c1_fSQGMH2uGoHTT2XCT6JYRC_c_x;
  }
}

static void init_dsm_address_info
  (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library_get_check_sum(mxArray *
  plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1541510654U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(515420297U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2759173431U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4228988034U);
}

mxArray
  *sf_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("uioQFC3U1NPqMJKLjeyAeB");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,9,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(401);
      pr[1] = (double)(3);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(401);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(68);
      pr[1] = (double)(3);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(68);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(68);
      pr[1] = (double)(1);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(100);
      pr[1] = (double)(3);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(100);
      pr[1] = (double)(1);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library_third_party_uses_info
  (void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

static const mxArray
  *sf_get_sim_state_info_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[5],T\"U\",},{M[1],M[16],T\"flag_minreg\",},{M[1],M[12],T\"flag_oob\",},{M[8],M[0],T\"is_active_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
    chartInstance =
      (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _Robust_MPC_LibraryMachineNumber_,
           1,
           1,
           1,
           12,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           ssGetPath(S),
           (void *)S);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation(_Robust_MPC_LibraryMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_Robust_MPC_LibraryMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _Robust_MPC_LibraryMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"X");
          _SFD_SET_DATA_PROPS(1,2,0,1,"U");
          _SFD_SET_DATA_PROPS(2,1,1,0,"Hn");
          _SFD_SET_DATA_PROPS(3,1,1,0,"Kn");
          _SFD_SET_DATA_PROPS(4,1,1,0,"Fi");
          _SFD_SET_DATA_PROPS(5,1,1,0,"Gi");
          _SFD_SET_DATA_PROPS(6,1,1,0,"Nc");
          _SFD_SET_DATA_PROPS(7,1,1,0,"Hi_init");
          _SFD_SET_DATA_PROPS(8,1,1,0,"Ki_init");
          _SFD_SET_DATA_PROPS(9,1,1,0,"Nx");
          _SFD_SET_DATA_PROPS(10,2,0,1,"flag_oob");
          _SFD_SET_DATA_PROPS(11,2,0,1,"flag_minreg");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,4,0,0,0,5,0,2,1);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,1422);
        _SFD_CV_INIT_EML_IF(0,1,0,857,888,-1,973);
        _SFD_CV_INIT_EML_IF(0,1,1,991,1015,-1,1075);
        _SFD_CV_INIT_EML_IF(0,1,2,1116,1134,-1,-2);
        _SFD_CV_INIT_EML_IF(0,1,3,1253,1294,-1,1337);
        _SFD_CV_INIT_EML_FOR(0,1,0,339,355,1182);
        _SFD_CV_INIT_EML_FOR(0,1,1,462,481,565);
        _SFD_CV_INIT_EML_FOR(0,1,2,489,502,557);
        _SFD_CV_INIT_EML_FOR(0,1,3,633,652,699);
        _SFD_CV_INIT_EML_FOR(0,1,4,810,824,981);

        {
          static int condStart[] = { 1259, 1274 };

          static int condEnd[] = { 1268, 1292 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(0,1,0,1258,1294,2,0,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_h_sf_marshallOut,
            (MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
          (MexInFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);

        {
          unsigned int dimVector[2];
          dimVector[0]= 401;
          dimVector[1]= 3;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_g_sf_marshallOut,
            (MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 401;
          _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_f_sf_marshallOut,
            (MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[2];
          dimVector[0]= 68;
          dimVector[1]= 3;
          _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_e_sf_marshallOut,
            (MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 68;
          _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_d_sf_marshallOut,
            (MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 68;
          _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_d_sf_marshallOut,
            (MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[2];
          dimVector[0]= 100;
          dimVector[1]= 3;
          _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_c_sf_marshallOut,
            (MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 100;
          _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_b_sf_marshallOut,
            (MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
          (MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
          (MexInFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(11,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallOut,
          (MexInFcnForType)c1_fSQGMH2uGoHTT2XCT6JYRC_sf_marshallIn);

        {
          real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_U;
          real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_Nx;
          real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob;
          real_T *c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg;
          real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_X)[3];
          real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Hn)[1203];
          real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Kn)[401];
          real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Fi)[204];
          real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Gi)[68];
          real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Nc)[68];
          real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Hi_init)[300];
          real_T (*c1_fSQGMH2uGoHTT2XCT6JYRC_Ki_init)[100];
          c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg = (real_T *)
            ssGetOutputPortSignal(chartInstance->S, 3);
          c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob = (real_T *)ssGetOutputPortSignal
            (chartInstance->S, 2);
          c1_fSQGMH2uGoHTT2XCT6JYRC_Nx = (real_T *)ssGetInputPortSignal
            (chartInstance->S, 8);
          c1_fSQGMH2uGoHTT2XCT6JYRC_Ki_init = (real_T (*)[100])
            ssGetInputPortSignal(chartInstance->S, 7);
          c1_fSQGMH2uGoHTT2XCT6JYRC_Hi_init = (real_T (*)[300])
            ssGetInputPortSignal(chartInstance->S, 6);
          c1_fSQGMH2uGoHTT2XCT6JYRC_Nc = (real_T (*)[68])ssGetInputPortSignal
            (chartInstance->S, 5);
          c1_fSQGMH2uGoHTT2XCT6JYRC_Gi = (real_T (*)[68])ssGetInputPortSignal
            (chartInstance->S, 4);
          c1_fSQGMH2uGoHTT2XCT6JYRC_Fi = (real_T (*)[204])ssGetInputPortSignal
            (chartInstance->S, 3);
          c1_fSQGMH2uGoHTT2XCT6JYRC_Kn = (real_T (*)[401])ssGetInputPortSignal
            (chartInstance->S, 2);
          c1_fSQGMH2uGoHTT2XCT6JYRC_Hn = (real_T (*)[1203])ssGetInputPortSignal
            (chartInstance->S, 1);
          c1_fSQGMH2uGoHTT2XCT6JYRC_U = (real_T *)ssGetOutputPortSignal
            (chartInstance->S, 1);
          c1_fSQGMH2uGoHTT2XCT6JYRC_X = (real_T (*)[3])ssGetInputPortSignal
            (chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, *c1_fSQGMH2uGoHTT2XCT6JYRC_X);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_fSQGMH2uGoHTT2XCT6JYRC_U);
          _SFD_SET_DATA_VALUE_PTR(2U, *c1_fSQGMH2uGoHTT2XCT6JYRC_Hn);
          _SFD_SET_DATA_VALUE_PTR(3U, *c1_fSQGMH2uGoHTT2XCT6JYRC_Kn);
          _SFD_SET_DATA_VALUE_PTR(4U, *c1_fSQGMH2uGoHTT2XCT6JYRC_Fi);
          _SFD_SET_DATA_VALUE_PTR(5U, *c1_fSQGMH2uGoHTT2XCT6JYRC_Gi);
          _SFD_SET_DATA_VALUE_PTR(6U, *c1_fSQGMH2uGoHTT2XCT6JYRC_Nc);
          _SFD_SET_DATA_VALUE_PTR(7U, *c1_fSQGMH2uGoHTT2XCT6JYRC_Hi_init);
          _SFD_SET_DATA_VALUE_PTR(8U, *c1_fSQGMH2uGoHTT2XCT6JYRC_Ki_init);
          _SFD_SET_DATA_VALUE_PTR(9U, c1_fSQGMH2uGoHTT2XCT6JYRC_Nx);
          _SFD_SET_DATA_VALUE_PTR(10U, c1_fSQGMH2uGoHTT2XCT6JYRC_flag_oob);
          _SFD_SET_DATA_VALUE_PTR(11U, c1_fSQGMH2uGoHTT2XCT6JYRC_flag_minreg);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _Robust_MPC_LibraryMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "fSQGMH2uGoHTT2XCT6JYRC";
}

static void sf_opaque_initialize_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (void *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct*)
      chartInstanceVar)->S,0);
  initialize_params_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
    ((SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct*)
     chartInstanceVar);
  initialize_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
    ((SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_enable_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library(void
  *chartInstanceVar)
{
  enable_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
    ((SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_disable_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library(void *
  chartInstanceVar)
{
  disable_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
    ((SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct*)
     chartInstanceVar);
}

static void sf_opaque_gateway_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library(void *
  chartInstanceVar)
{
  sf_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
    ((SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct*)
     chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*)
    get_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
    ((SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

extern void
  sf_internal_set_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
    ((SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
    (S);
}

static void sf_opaque_set_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library(S, st);
}

static void sf_opaque_terminate_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S =
      ((SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct*)
       chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_Robust_MPC_Library_optimization_info();
    }

    finalize_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
      ((SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct*)
       chartInstanceVar);
    utFree((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
    ((SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct*)
     chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
      ((SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct*)
       (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library
  (SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_Robust_MPC_Library_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,1,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,1,
      "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(S,sf_get_instance_specialization(),infoStruct,1);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 8, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,1,9);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,1,3);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=3; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 9; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2511556131U));
  ssSetChecksum1(S,(1726708384U));
  ssSetChecksum2(S,(1495524878U));
  ssSetChecksum3(S,(925779492U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library(SimStruct *S)
{
  SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *chartInstance;
  chartInstance = (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct *)
    utMalloc(sizeof(SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_LibraryInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW =
    mdlRTW_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library_method_dispatcher(SimStruct *S,
  int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_fSQGMH2uGoHTT2XCT6JYRC_Robust_MPC_Library_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
