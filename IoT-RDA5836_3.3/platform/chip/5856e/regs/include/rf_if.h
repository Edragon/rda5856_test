//------------------------------------------------------------------------
// Copyright (C) 2016 RDA microelectronic Inc.                                           
// All Rights Reserved                                                    
// THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE of RDA microelectronic Inc.                
// The copyright notice above does not evidence any actual or intended    
// publication of such source code.                                       
// No part of this code may be reproduced, stored in a retrieval system,  
// or transmitted, in any form or by any means, electronic, mechanical,   
// photocopying, recording, or otherwise, without the prior written       
// permission of RDA microelectronic Inc.                                                 
//------------------------------------------------------------------------
// File name      : rf_if                                            
// Author         : liqiu                                                 
// Date of created: 2016-12-05 14:09:03                                                  
// Last modified  : 2016-12-05 14:09:03                                                  
//------------------------------------------------------------------------
// Reversion History:                                                     
// 2016-12-05 14:09:03 --  Create by liqiu                                               
//------------------------------------------------------------------------
#ifndef __RF_IF_H__
#define __RF_IF_H__
//Auto-gen by reg_gen
#include "base_address.h"
#include "type_def.h"

#define NORMAL_CHEAD
#ifndef NORMAL_CHEAD
//revision
typedef union
{
    U32 v;
    struct
    {
        U32 revid                          :4 ; /*3 :0 , Revision ID.                  */
        U32 revision_reserved_0            :28; /*31:4 , No description.               */
    } b;
} T_RF_IF_revision;

//sys_control
typedef union
{
    U32 v;
    struct
    {
        U32 soft_resetn                    :1 ; /*0 :0 , soft reset. Active low.       */
        U32 chip_self_cal_enable           :1 ; /*1 :1 , Chip self_cal enable.
        U32 rf_mode                        :1 ; /*2 :2 , RF mode.
        U32 clk_digital_enable_reg         :1 ; /*3 :3 , enable all digital clock.
        U32 bt_tune_diff_en                :1 ; /*4 :4 , enable BT ARFCN tune diff mode.
        U32 bt_hopping_en                  :1 ; /*5 :5 , enable bt hopping while channel is muliplier of 26MHz during rx procedure.
        U32 fm_adclk_mode                  :2 ; /*7 :6 , fm adc clock mode.
        U32 sys_control_reserved_0         :24; /*31:8 , No description.               */
    } b;
} T_RF_IF_sys_control;

//bt_control
typedef union
{
    U32 v;
    struct
    {
        U32 bt_arfcn                       :7 ; /*6 :0 , BT Channel number. _x000D_
        U32 bt_ch_type                     :1 ; /*7 :7 , BT channel type.
        U32 bt_control_reserved_0          :24; /*31:8 , No description.               */
    } b;
} T_RF_IF_bt_control;

//fm_control
typedef union
{
    U32 v;
    struct
    {
        U32 fm_tune                        :1 ; /*0 :0 , Start tune.
        U32 fm_chan_reg                    :11; /*11:1 , FM channel.                   */
        U32 fm_freq_mode                   :1 ; /*12:12, FM freq mode.
        U32 fm_band_sel                    :2 ; /*14:13, FM band select.
        U32 fm_control_reserved_0          :1 ; /*15:15, No description.               */
        U32 fm_freq_direct                 :16; /*31:16, frequency direct reg. u6.10, unit is MHz*/
    } b;
} T_RF_IF_fm_control;

//inter_freq_setting
typedef union
{
    U32 v;
    struct
    {
        U32 bt_if                          :11; /*10:0 , BT intermediate freqeuncy. u1.10. Unit is Mhz. Default is740KHz.*/
        U32 bt_imgrej                      :1 ; /*11:11, BT intermediate frequency mode.
        U32 bt_zif                         :1 ; /*12:12, enable zero intermediate frequency.
        U32 inter_freq_setting_reserved_1  :3 ; /*15:13, No description.               */
        U32 fm_if                          :11; /*26:16, FM intermediate freqeuncy. u1.10. Unit is Mhz. Default is 125KHz. _x000D_*/
        U32 fm_imgrej                      :1 ; /*27:27, FM intermediate frequency mode.
        U32 inter_freq_setting_reserved_0  :4 ; /*31:28, No description.               */
    } b;
} T_RF_IF_inter_freq_setting;

//ldo_setting
typedef union
{
    U32 v;
    struct
    {
        U32 rf_ivref_avdd_bit              :1 ; /*0 :0 , No description.               */
        U32 ldo_setting_reserved_0         :31; /*31:1 , No description.               */
    } b;
} T_RF_IF_ldo_setting;

//bt_lna_rmx_setting
typedef union
{
    U32 v;
    struct
    {
        U32 bt_rmx_reg_bypass              :1 ; /*0 :0 , No description.               */
        U32 bt_rmx_reg_bit                 :3 ; /*3 :1 , No description.               */
        U32 bt_lna_rmx_setting_reserved_2  :2 ; /*5 :4 , bt_rmx_lo_vcom_bit            */
        U32 bt_rmx_lo_ifvcom_bit           :4 ; /*9 :6 , No description.               */
        U32 bt_rmx_lo_ifvcom_sel           :1 ; /*10:10, No description.               */
        U32 bt_lna_rmx_setting_reserved_1  :5 ; /*15:11, No description.               */
        U32 bt_lna_selfbias_en             :1 ; /*16:16, No description.               */
        U32 bt_lna_vcas_bit                :2 ; /*18:17, No description.               */
        U32 bt_lna_rmx_setting_reserved_0  :3 ; /*21:19, bt_lna_cload_bit              */
        U32 bt_lna_reg_bypass              :1 ; /*22:22, No description.               */
        U32 bt_lna_reg_bit                 :3 ; /*25:23, No description.               */
        U32 bt_balun_cap_bit_tx            :3 ; /*28:26, No description.               */
        U32 bt_balun_cap_bit_rx            :3 ; /*31:29, No description.               */
    } b;
} T_RF_IF_bt_lna_rmx_setting;

//fm_lna_rmx_rxflt_setting
typedef union
{
    U32 v;
    struct
    {
        U32 fm_rxflt_op_ibit               :2 ; /*1 :0 , No description.               */
        U32 fm_rmx_lobias_bit              :2 ; /*3 :2 , No description.               */
        U32 fm_rmx_harm_rej_en             :1 ; /*4 :4 , No description.               */
        U32 fm_lna_ibit                    :3 ; /*7 :5 , No description.               */
        U32 fm_lna_rmx_rxflt_setting_reserved_0 :24; /*31:8 , No description.               */
    } b;
} T_RF_IF_fm_lna_rmx_rxflt_setting;

//rxflt_adc_setting
typedef union
{
    U32 v;
    struct
    {
        U32 adc_skip                       :1 ; /*0 :0 , No description.               */
        U32 adc_vref_vbit                  :2 ; /*2 :1 , No description.               */
        U32 adc_vref_rbit                  :2 ; /*4 :3 , No description.               */
        U32 adc_delay_bit                  :4 ; /*8 :5 , No description.               */
        U32 adc_clk_div2                   :1 ; /*9 :9 , No description.               */
        U32 adc_clk_edge_sel               :1 ; /*10:10, No description.               */
        U32 adc_clk_sel_reg                :2 ; /*12:11, No description.               */
        U32 adc_clk_sel_dr                 :1 ; /*13:13, No description.               */
        U32 adc_clk_xtal_en_reg            :1 ; /*14:14, No description.               */
        U32 adc_clk_xtal_en_dr             :1 ; /*15:15, No description.               */
        U32 rxflt_iqswap                   :1 ; /*16:16, No description.               */
        U32 rxflt_op_drive_bit             :3 ; /*19:17, No description.               */
        U32 rxflt_cap_bit                  :4 ; /*23:20, No description.               */
        U32 rxflt_fm_bp_mode               :2 ; /*25:24, No description.               */
        U32 rxflt_bt_bp_mode               :2 ; /*27:26, No description.               */
        U32 rxflt_fm_mode_reg              :1 ; /*28:28, No description.               */
        U32 rxflt_fm_mode_dr               :1 ; /*29:29, No description.               */
        U32 rxflt_rstn_reg                 :1 ; /*30:30, No description.               */
        U32 rxflt_rstn_dr                  :1 ; /*31:31, No description.               */
    } b;
} T_RF_IF_rxflt_adc_setting;

//bt_bbdac_setting
typedef union
{
    U32 v;
    struct
    {
        U32 bt_bbdac_vtr_sel               :1 ; /*0 :0 , No description.               */
        U32 bt_bbdac_clk_edge_sel          :1 ; /*1 :1 , No description.               */
        U32 bt_bbdac_vlow_bit              :3 ; /*4 :2 , No description.               */
        U32 bt_bbdac_setting_reserved_0    :27; /*31:5 , No description.               */
    } b;
} T_RF_IF_bt_bbdac_setting;

//bt_padrv_tmx_setting
typedef union
{
    U32 v;
    struct
    {
        U32 bt_tmx_reg_bit                 :3 ; /*2 :0 , No description.               */
        U32 bt_tmx_bbtest_en               :1 ; /*3 :3 , No description.               */
        U32 bt_tmx_plltest_en              :1 ; /*4 :4 , No description.               */
        U32 bt_padrv_tmx_setting_reserved_2 :4 ; /*8 :5 , bt_tmx_cap_bit                */
        U32 bt_tmx_ibit                    :2 ; /*10:9 , No description.               */
        U32 bt_padrv_tmx_setting_reserved_1 :5 ; /*15:11, bt_tmx_lobias                 */
        U32 bt_padrv_ibit                  :6 ; /*21:16, No description.               */
        U32 bt_delay_padrv                 :8 ; /*29:22, No description.               */
        U32 bt_padrv_tmx_setting_reserved_0 :2 ; /*31:30, No description.               */
    } b;
} T_RF_IF_bt_padrv_tmx_setting;

//fm_dsp_setting
typedef union
{
    U32 v;
    struct
    {
        U32 fm_dsp_resetn_reg              :1 ; /*0 :0 , No description.               */
        U32 fm_dsp_resetn_dr               :1 ; /*1 :1 , No description.               */
        U32 fm_dsp_resetn_delay            :2 ; /*3 :2 , No description.               */
        U32 fm_dsp_setting_reserved_0      :28; /*31:4 , No description.               */
    } b;
} T_RF_IF_fm_dsp_setting;

//vco_setting
typedef union
{
    U32 v;
    struct
    {
        U32 vco_div2_bias_bit              :3 ; /*2 :0 , No description.               */
        U32 vco_buf_bias_bit               :2 ; /*4 :3 , No description.               */
        U32 vco_buf_ibit                   :4 ; /*8 :5 , No description.               */
        U32 vco_reg_bypass                 :1 ; /*9 :9 , No description.               */
        U32 vco_setting_reserved_0         :22; /*31:10, No description.               */
    } b;
} T_RF_IF_vco_setting;

//rfpll_setting0
typedef union
{
    U32 v;
    struct
    {
        U32 rfpll_div_fm_adclk_reg         :5 ; /*4 :0 , No description.               */
        U32 rfpll_div_fm_adclk_dr          :1 ; /*5 :5 , No description.               */
        U32 rfpll_div_fm_reg               :4 ; /*9 :6 , No description.               */
        U32 rfpll_div_fm_dr                :1 ; /*10:10, No description.               */
        U32 rfpll_setting0_reserved_1      :2 ; /*12:11, No description.               */
        U32 rfpll_dvdd_r_bit               :4 ; /*16:13, No description.               */
        U32 rfpll_bypass_notch             :1 ; /*17:17, No description.               */
        U32 rfpll_presc_reg_bit            :4 ; /*21:18, No description.               */
        U32 rfpll_refmulti2_en             :1 ; /*22:22, No description.               */
        U32 reset_rfpll_lock_delay         :2 ; /*24:23, No description.               */
        U32 rfpll_cp_r_bit_rx              :2 ; /*26:25, No description.               */
        U32 rfpll_cp_r_bit_tx              :2 ; /*28:27, No description.               */
        U32 rfpll_setting0_reserved_0      :3 ; /*31:29, No description.               */
    } b;
} T_RF_IF_rfpll_setting0;

//rfpll_setting1
typedef union
{
    U32 v;
    struct
    {
        U32 rfpll_cp_bit_tx                :6 ; /*5 :0 , No description.               */
        U32 rfpll_gain_bit_tx              :3 ; /*8 :6 , No description.               */
        U32 rfpll_setting1_reserved_0      :3 ; /*11:9 , No description.               */
        U32 mdll_div_tx                    :4 ; /*15:12, No description.               */
        U32 rfpll_cp_bit_rx                :6 ; /*21:16, No description.               */
        U32 rfpll_gain_bit_rx              :3 ; /*24:22, No description.               */
        U32 rfpll_presc_reg_rc             :3 ; /*27:25, No description.               */
        U32 mdll_div_rx                    :4 ; /*31:28, No description.               */
    } b;
} T_RF_IF_rfpll_setting1;

//rfpll_setting2
typedef union
{
    U32 v;
    struct
    {
        U32 rfpll_pfd_res_bit_tx           :6 ; /*5 :0 , No description.               */
        U32 rfpll_lpf_gain_bit_tx          :5 ; /*10:6 , No description.               */
        U32 rfpll_r_bit_tx                 :5 ; /*15:11, No description.               */
        U32 rfpll_pfd_res_bit_rx           :6 ; /*21:16, No description.               */
        U32 rfpll_lpf_gain_bit_rx          :5 ; /*26:22, No description.               */
        U32 rfpll_r_bit_rx                 :5 ; /*31:27, No description.               */
    } b;
} T_RF_IF_rfpll_setting2;

//rfpll_status
typedef union
{
    U32 v;
    struct
    {
        U32 rfpll_lock_det                 :1 ; /*0 :0 , Indicate if rfpll in lock state.*/
        U32 rfpll_lock_flag                :1 ; /*1 :1 , No description.               */
        U32 rfpll_status_reserved_0        :30; /*31:2 , No description.               */
    } b;
} T_RF_IF_rfpll_status;

//adpll_setting0
typedef union
{
    U32 v;
    struct
    {
        U32 adpll_clk_test_en              :1 ; /*0 :0 , No description.               */
        U32 adpll_sdm_clk_test_en          :1 ; /*1 :1 , No description.               */
        U32 adpll_pcon_mode                :1 ; /*2 :2 , No description.               */
        U32 adpll_refmulti2_en             :1 ; /*3 :3 , No description.               */
        U32 adpll_cp_r2_bit                :3 ; /*6 :4 , No description.               */
        U32 adpll_cp_c2_bit                :3 ; /*9 :7 , No description.               */
        U32 adpll_cp_bias_bit              :3 ; /*12:10, No description.               */
        U32 adpll_digi_reg_rout_bit        :4 ; /*16:13, No description.               */
        U32 adpll_digi_reg_res_bit         :3 ; /*19:17, No description.               */
        U32 adpll_digi_reg_range_bit       :4 ; /*23:20, No description.               */
        U32 adpll_vreg_bit                 :4 ; /*27:24, No description.               */
        U32 adpll_rstn_reg                 :1 ; /*28:28, No description.               */
        U32 adpll_rstn_dr                  :1 ; /*29:29, No description.               */
        U32 pu_adpll_reg                   :1 ; /*30:30, No description.               */
        U32 pu_adpll_dr                    :1 ; /*31:31, No description.               */
    } b;
} T_RF_IF_adpll_setting0;

//adpll_setting1
typedef union
{
    U32 v;
    struct
    {
        U32 reset_adpll_lock_delay         :2 ; /*1 :0 , No description.               */
        U32 adpll_vco_low_test             :1 ; /*2 :2 , No description.               */
        U32 adpll_vco_high_test            :1 ; /*3 :3 , No description.               */
        U32 adpll_fm_sel                   :1 ; /*4 :4 , No description.               */
        U32 adpll_cpu_sel                  :1 ; /*5 :5 , No description.               */
        U32 adpll_bt_sel                   :1 ; /*6 :6 , No description.               */
        U32 adpll_clk_fm_en                :1 ; /*7 :7 , No description.               */
        U32 adpll_clk_cpu_en               :1 ; /*8 :8 , No description.               */
        U32 adpll_clk_bt_en                :1 ; /*9 :9 , No description.               */
        U32 adpll_setting1_reserved_0      :6 ; /*15:10, No description.               */
        U32 usbc_phy_clk_div               :2 ; /*17:16, USBC PHY clock divider
0:: div_1
1:: div_2
2:: div_3
3:: div_4*/
        U32 usbc_phy_clk_ld_cfg            :1 ; /*18:18, USBC PHY clock load configuration*/
        U32 sys_clk_sel_fast               :1 ; /*19:19, System clock select fast clock
0:: slow
1:: fast*/
        U32 sys_fast_clk_sel               :2 ; /*21:20, System clock selection
0:: xtal_26m
1:: xtal_39m 
2:: xtal_52m 
3:: sys_pll_div_clk*/
        U32 sys_pll_clk_div                :4 ; /*25:22, sys_pll_div_clk divider select
output frequency is clk_cpu_adpll*(sys_pll_clk_div+1)/16*/
        U32 sys_pll_clk_ld_cfg             :1 ; /*26:26, System PLL clock load configuration*/
        U32 hclk_pclk_div                  :3 ; /*29:27, HCLK/PCLK clock divider
0:: div_1
1:: div_2
2:: div_4
3:: div_8
4:: div_16*/
        U32 hclk_pclk_ld_cfg               :1 ; /*30:30, HCLK/PCLK load configuration  */
        U32 sys_pll_clk_src_sel            :1 ; /*31:31, System PLL souce select.
0:: ADPLL
1:: AUPLL*/
    } b;
} T_RF_IF_adpll_setting1;

//adpll_status
typedef union
{
    U32 v;
    struct
    {
        U32 adpll_lock_det                 :1 ; /*0 :0 , Indicate if pll in lock state.*/
        U32 adpll_lock_flag                :1 ; /*1 :1 , No description.               */
        U32 adpll_status_reserved_0        :30; /*31:2 , No description.               */
    } b;
} T_RF_IF_adpll_status;

//rfpll_sdm_setting0
typedef union
{
    U32 v;
    struct
    {
        U32 rfpll_sdm_delay_sel            :4 ; /*3 :0 , No description.               */
        U32 rfpll_sdm_dither_bypass        :1 ; /*4 :4 , No description.               */
        U32 rfpll_sdm_int_dec_sel          :2 ; /*6 :5 , No description.               */
        U32 rfpll_sdm_clk_edge             :1 ; /*7 :7 , No description.               */
        U32 rfpll_sdm_resetn_reg           :1 ; /*8 :8 , No description.               */
        U32 rfpll_sdm_resetn_dr            :1 ; /*9 :9 , No description.               */
        U32 reset_rfpll_sdm_delay          :2 ; /*11:10, No description.               */
        U32 rfpll_sdm_clk_sel_1            :1 ; /*12:12, No description.               */
        U32 rfpll_sdm_clk_sel_0            :1 ; /*13:13, No description.               */
        U32 rfpll_div_dr                   :1 ; /*14:14, No description.               */
        U32 rfpll_sdm_setting0_reserved_0  :17; /*31:15, No description.               */
    } b;
} T_RF_IF_rfpll_sdm_setting0;

//rfpll_sdm_setting1
typedef union
{
    U32 v;
    struct
    {
        U32 rfpll_div_reg                  :31; /*30:0 , To be used when rfpll_pll_freq_dr=1._x000D_
        U32 rfpll_sdm_setting1_reserved_0  :1 ; /*31:31, No description.               */
    } b;
} T_RF_IF_rfpll_sdm_setting1;

//adpll_sdm_setting0
typedef union
{
    U32 v;
    struct
    {
        U32 adpll_sdm_refdiv2_en           :1 ; /*0 :0 , No description.               */
        U32 adpll_sdm_dither_bypass        :1 ; /*1 :1 , SDM dither bypass enable.     */
        U32 adpll_sdm_int_dec_sel          :3 ; /*4 :2 , No description.               */
        U32 adpll_sdm_clk_fbc_inv          :1 ; /*5 :5 , Invert SDM clock edge.        */
        U32 adpll_sdm_resetn_reg           :1 ; /*6 :6 , adpll Sdm modulator module reset register*/
        U32 adpll_sdm_resetn_dr            :1 ; /*7 :7 , If 1, adpll sdm resetn uses sdm_resetn_reg; _x000D_
        U32 reset_adpll_sdm_delay          :2 ; /*9 :8 , Delay time select after txon|rxon|self_cal_en after pll_cal_ready &amp; prescaler_div_ready_x000D_
        U32 adpll_sdm_clk_sel_1            :1 ; /*10:10, No description.               */
        U32 adpll_sdm_clk_sel_0            :1 ; /*11:11, No description.               */
        U32 adpll_sdm_freq_dr              :1 ; /*12:12, If 1, pll frequency is decided by freq register;_x000D_*/
        U32 adpll_sdm_setting0_reserved_0  :19; /*31:13, No description.               */
    } b;
} T_RF_IF_adpll_sdm_setting0;

//adpll_sdm_setting1
typedef union
{
    U32 v;
    struct
    {
        U32 adpll_sdm_freq_reg             :32; /*31:0 , To be used when adpll_sdm_freq_dr=1._x000D_
    } b;
} T_RF_IF_adpll_sdm_setting1;

//dc_cal_setting0
typedef union
{
    U32 v;
    struct
    {
        U32 dc_offset_init_delay           :2 ; /*1 :0 , No description.               */
        U32 dc_cal_cnt                     :4 ; /*5 :2 , No description.               */
        U32 dc_cal_iqswap                  :1 ; /*6 :6 , No description.               */
        U32 dc_cal_polarity                :1 ; /*7 :7 , No description.               */
        U32 dc_cal_mode                    :2 ; /*9 :8 , No description.               */
        U32 dc_cal_clk_edge                :1 ; /*10:10, No description.               */
        U32 fm_dc_table_full_mode          :1 ; /*11:11, No description.               */
        U32 bt_dc_table_full_mode          :1 ; /*12:12, No description.               */
        U32 rxflt_calclk_edge_sel          :1 ; /*13:13, No description.               */
        U32 rxflt_cal_mode                 :1 ; /*14:14, No description.               */
        U32 rxflt_offset_range_bit         :3 ; /*17:15, No description.               */
        U32 rxflt_offset_bit_dr            :1 ; /*18:18, No description.               */
        U32 dc_cal_setting0_reserved_0     :13; /*31:19, No description.               */
    } b;
} T_RF_IF_dc_cal_setting0;

//dc_cal_setting1
typedef union
{
    U32 v;
    struct
    {
        U32 rxflt_offset_q_bit_reg         :8 ; /*7 :0 , No description.               */
        U32 rxflt_offset_i_bit_reg         :8 ; /*15:8 , No description.               */
        U32 dc_cal_setting1_reserved_0     :16; /*31:16, No description.               */
    } b;
} T_RF_IF_dc_cal_setting1;

//dc_cal_status
typedef union
{
    U32 v;
    struct
    {
        U32 rxflt_offset_q_bit             :8 ; /*7 :0 , current rxflt_offset_q_bit    */
        U32 rxflt_offset_i_bit             :8 ; /*15:8 , current rxflt_offset_i_bit    */
        U32 dc_cal_status_reserved_0       :16; /*31:16, No description.               */
    } b;
} T_RF_IF_dc_cal_status;

//vco_cal_setting
typedef union
{
    U32 v;
    struct
    {
        U32 vco_cal_polarity               :1 ; /*0 :0 , vco_pkd_out polarity          */
        U32 vco_cal_init_delay             :2 ; /*2 :1 , vco calibration initial delay.
        U32 vco_cal_cnt                    :2 ; /*4 :3 , if vco_cal_mode=0, define the calibration period.
        U32 vco_cal_mode                   :1 ; /*5 :5 , vco calibration mode. 1'd1: fast;'1d0:normal*/
        U32 vco_cal_clk_edge               :1 ; /*6 :6 , No description.               */
        U32 vco_pkd_clk_edge_sel           :1 ; /*7 :7 , vco_pkd_clk edge selection    */
        U32 vco_pkd_ref_bit                :3 ; /*10:8 , No description.               */
        U32 vco_ibit_reg                   :4 ; /*14:11, No description.               */
        U32 vco_ibit_dr                    :1 ; /*15:15, if 1, vco_ibit is triggered by register;
        U32 vco_cal_setting_reserved_0     :16; /*31:16, No description.               */
    } b;
} T_RF_IF_vco_cal_setting;

//rfpll_cal_setting0
typedef union
{
    U32 v;
    struct
    {
        U32 rfpll_init_delay               :3 ; /*2 :0 , Define pll_cal initial delay, which is the  time between RXON(TXON) and rxpll_cal_enable._x000D_
        U32 rfpll_cal_cnt_sel              :3 ; /*5 :3 , pll cal count time select_x000D_
        U32 rfpll_cal_opt                  :1 ; /*6 :6 , If 1, select the best vco band bit*/
        U32 rfpll_vco_bit_hold_time        :3 ; /*9 :7 , Vco bit hold time when vco bit changed during pll vco band calibration._x000D_
        U32 rfpll_cnt_enable_polarity      :1 ; /*10:10, If 1, change pll_cnt_en edge mode(posedge or negedge of 26mhz clk)*/
        U32 rfpll_cal_freq_dr              :1 ; /*11:11, No description.               */
        U32 vco_band_reg                   :10; /*21:12, VCO band  setting.            */
        U32 vco_band_dr                    :1 ; /*22:22, Pll_vco_band_reg direct reg enable.*/
        U32 rfpll_open_en                  :1 ; /*23:23, If 1, pll will be open loop.  */
        U32 rfpll_cal_bit                  :2 ; /*25:24, Control voltage when in calibration._x000D_
        U32 rfpll_cal_clk_sel              :1 ; /*26:26, Select the positive or negative edge of cal clk*/
        U32 rfpll_cal_setting0_reserved_0  :5 ; /*31:27, No description.               */
    } b;
} T_RF_IF_rfpll_cal_setting0;

//rfpll_cal_setting1
typedef union
{
    U32 v;
    struct
    {
        U32 rfpll_cal_freq_reg             :16; /*15:0 , No description.               */
        U32 rfpll_cal_setting1_reserved_0  :16; /*31:16, No description.               */
    } b;
} T_RF_IF_rfpll_cal_setting1;

//cal_dr_setting
typedef union
{
    U32 v;
    struct
    {
        U32 self_cal_ready_reg             :1 ; /*0 :0 , No description.               */
        U32 self_cal_ready_dr              :1 ; /*1 :1 , No description.               */
        U32 rfpll_cal_resetn_reg           :1 ; /*2 :2 , No description.               */
        U32 rfpll_cal_resetn_dr            :1 ; /*3 :3 , No description.               */
        U32 vco_cal_resetn_reg             :1 ; /*4 :4 , No description.               */
        U32 vco_cal_resetn_dr              :1 ; /*5 :5 , No description.               */
        U32 bt_dc_cal_fsm_resetn_reg       :1 ; /*6 :6 , No description.               */
        U32 bt_dc_cal_fsm_resetn_dr        :1 ; /*7 :7 , No description.               */
        U32 fm_dc_cal_fsm_resetn_reg       :1 ; /*8 :8 , No description.               */
        U32 fm_dc_cal_fsm_resetn_dr        :1 ; /*9 :9 , No description.               */
        U32 cal_dr_setting_reserved_0      :22; /*31:10, No description.               */
    } b;
} T_RF_IF_cal_dr_setting;

//cal_status
typedef union
{
    U32 v;
    struct
    {
        U32 bt_self_cal_ready              :1 ; /*0 :0 , No description.               */
        U32 fm_self_cal_ready              :1 ; /*1 :1 , No description.               */
        U32 dc_cal_ready                   :1 ; /*2 :2 , No description.               */
        U32 rfpll_cal_ready                :1 ; /*3 :3 , No description.               */
        U32 vco_cal_ready                  :1 ; /*4 :4 , No description.               */
        U32 bt_dc_cal_fsm_ready            :1 ; /*5 :5 , No description.               */
        U32 fm_dc_cal_fsm_ready            :1 ; /*6 :6 , No description.               */
        U32 cal_status_reserved_0          :25; /*31:7 , No description.               */
    } b;
} T_RF_IF_cal_status;

//power_dr
typedef union
{
    U32 v;
    struct
    {
        U32 power_dr_reserved_1            :1 ; /*0 :0 , No description.               */
        U32 pu_rfpll_fm_adclk_dr           :1 ; /*1 :1 , enable direct power control.
        U32 pu_rfpll_fmclk_dr              :1 ; /*2 :2 , enable direct power control.
        U32 pu_rfpll_presc_dr              :1 ; /*3 :3 , enable direct power control.
        U32 pu_rfpll_digi_dr               :1 ; /*4 :4 , enable direct power control.
        U32 pu_vco_pkd_dr                  :1 ; /*5 :5 , enable direct power control.
        U32 pu_lo_rx_dr                    :1 ; /*6 :6 , enable direct power control.
        U32 pu_lo_tx_dr                    :1 ; /*7 :7 , enable direct power control.
        U32 pu_vco_dr                      :1 ; /*8 :8 , enable direct power control.
        U32 pu_bt_tmx_dr                   :1 ; /*9 :9 , enable direct power control.
        U32 pu_bt_padrv_dr                 :1 ; /*10:10, enable direct power control.
        U32 pu_bt_bbdac_dr                 :1 ; /*11:11, enable direct power control.
        U32 pu_adc_dr                      :1 ; /*12:12, enable direct power control.
        U32 pu_rxflt_dr                    :1 ; /*13:13, enable direct power control.
        U32 pu_bt_rmx_dr                   :1 ; /*14:14, enable direct power control.
        U32 pu_bt_lna_dr                   :1 ; /*15:15, enable direct power control.
        U32 pu_fm_rmx_dr                   :1 ; /*16:16, enable direct power control.
        U32 pu_fm_lna_dr                   :1 ; /*17:17, enable direct power control.
        U32 pu_rf_ivref_dr                 :1 ; /*18:18, enable direct power control.
        U32 power_dr_reserved_0            :13; /*31:19, No description.               */
    } b;
} T_RF_IF_power_dr;

//power_reg
typedef union
{
    U32 v;
    struct
    {
        U32 power_reg_reserved_1           :1 ; /*0 :0 , No description.               */
        U32 pu_rfpll_fm_adclk_reg          :1 ; /*1 :1 , power control direct register.
        U32 pu_rfpll_fmclk_reg             :1 ; /*2 :2 , power control direct register.
        U32 pu_rfpll_presc_reg             :1 ; /*3 :3 , power control direct register.
        U32 pu_rfpll_digi_reg              :1 ; /*4 :4 , power control direct register.
        U32 pu_vco_pkd_reg                 :1 ; /*5 :5 , power control direct register.
        U32 pu_lo_rx_reg                   :1 ; /*6 :6 , power control direct register.
        U32 pu_lo_tx_reg                   :1 ; /*7 :7 , power control direct register.
        U32 pu_vco_reg                     :1 ; /*8 :8 , power control direct register.
        U32 pu_bt_tmx_reg                  :1 ; /*9 :9 , power control direct register.
        U32 pu_bt_padrv_reg                :1 ; /*10:10, power control direct register.
        U32 pu_bt_bbdac_reg                :1 ; /*11:11, power control direct register.
        U32 pu_adc_reg                     :1 ; /*12:12, power control direct register.
        U32 pu_rxflt_reg                   :1 ; /*13:13, power control direct register.
        U32 pu_bt_rmx_reg                  :1 ; /*14:14, power control direct register.
        U32 pu_bt_lna_reg                  :1 ; /*15:15, power control direct register.
        U32 pu_fm_rmx_reg                  :1 ; /*16:16, power control direct register.
        U32 pu_fm_lna_reg                  :1 ; /*17:17, power control direct register.
        U32 pu_rf_ivref_reg                :1 ; /*18:18, power control direct register.
        U32 pu_tbuf_reg                    :1 ; /*19:19, power control direct register.
        U32 pu_rf_iobuf_reg                :1 ; /*20:20, power control direct register.
        U32 power_reg_reserved_0           :11; /*31:21, No description.               */
    } b;
} T_RF_IF_power_reg;

//power_status
typedef union
{
    U32 v;
    struct
    {
        U32 pu_adpll                       :1 ; /*0 :0 , power up status.              */
        U32 pu_rfpll_fm_adclk              :1 ; /*1 :1 , power up status.              */
        U32 pu_rfpll_fmclk                 :1 ; /*2 :2 , power up status.              */
        U32 pu_rfpll_presc                 :1 ; /*3 :3 , power up status.              */
        U32 pu_rfpll_digi                  :1 ; /*4 :4 , power up status.              */
        U32 pu_vco_pkd                     :1 ; /*5 :5 , power up status.              */
        U32 pu_lo_rx                       :1 ; /*6 :6 , power up status.              */
        U32 pu_lo_tx                       :1 ; /*7 :7 , power up status.              */
        U32 pu_vco                         :1 ; /*8 :8 , power up status.              */
        U32 pu_bt_tmx                      :1 ; /*9 :9 , power up status.              */
        U32 pu_bt_padrv                    :1 ; /*10:10, power up status.              */
        U32 pu_bt_bbdac                    :1 ; /*11:11, power up status.              */
        U32 pu_adc                         :1 ; /*12:12, power up status.              */
        U32 pu_rxflt                       :1 ; /*13:13, power up status.              */
        U32 pu_bt_rmx                      :1 ; /*14:14, power up status.              */
        U32 pu_bt_lna                      :1 ; /*15:15, power up status.              */
        U32 pu_fm_rmx                      :1 ; /*16:16, power up status.              */
        U32 pu_fm_lna                      :1 ; /*17:17, power up status.              */
        U32 pu_rf_ivref                    :1 ; /*18:18, power up status.              */
        U32 pu_tbuf                        :1 ; /*19:19, power up status.              */
        U32 pu_rf_iobuf                    :1 ; /*20:20, power up status.              */
        U32 power_status_reserved_0        :11; /*31:21, No description.               */
    } b;
} T_RF_IF_power_status;

//bt_gain_table_0
typedef union
{
    U32 v;
    struct
    {
        U32 bt_rxflt_gain2_1               :2 ; /*1 :0 , filter_gain2 when agc_index=1 */
        U32 bt_rxflt_gain1_1               :2 ; /*3 :2 , filter_gain1 when agc_index=1 */
        U32 bt_rmx_gain_1                  :4 ; /*7 :4 , rmx_gain when agc_index=1     */
        U32 bt_lna_gain2_1                 :2 ; /*9 :8 , lna_gain2 when agc_index=1    */
        U32 bt_lna_gain1_1                 :4 ; /*13:10, lna_gain1 when agc_index=1    */
        U32 bt_gain_table_0_reserved_1     :2 ; /*15:14, No description.               */
        U32 bt_rxflt_gain2_0               :2 ; /*17:16, filter_gain2 when agc_index=0 */
        U32 bt_rxflt_gain1_0               :2 ; /*19:18, filter_gain1 when agc_index=0 */
        U32 bt_rmx_gain_0                  :4 ; /*23:20, rmx_gain when agc_index=0     */
        U32 bt_lna_gain2_0                 :2 ; /*25:24, lna_gain2 when agc_index=0    */
        U32 bt_lna_gain1_0                 :4 ; /*29:26, lna_gain1 when agc_index=0    */
        U32 bt_agc_gain_dr                 :1 ; /*30:30, enable BT gain direct control.
        U32 bt_gain_table_0_reserved_0     :1 ; /*31:31, No description.               */
    } b;
} T_RF_IF_bt_gain_table_0;

//bt_gain_table_1
typedef union
{
    U32 v;
    struct
    {
        U32 bt_rxflt_gain2_3               :2 ; /*1 :0 , filter_gain2 when agc_index=3 */
        U32 bt_rxflt_gain1_3               :2 ; /*3 :2 , filter_gain1 when agc_index=3 */
        U32 bt_rmx_gain_3                  :4 ; /*7 :4 , rmx_gain when agc_index=3     */
        U32 bt_lna_gain2_3                 :2 ; /*9 :8 , lna_gain2 when agc_index=3    */
        U32 bt_lna_gain1_3                 :4 ; /*13:10, lna_gain1 when agc_index=3    */
        U32 bt_gain_table_1_reserved_1     :2 ; /*15:14, No description.               */
        U32 bt_rxflt_gain2_2               :2 ; /*17:16, filter_gain2 when agc_index=2 */
        U32 bt_rxflt_gain1_2               :2 ; /*19:18, filter_gain1 when agc_index=2 */
        U32 bt_rmx_gain_2                  :4 ; /*23:20, rmx_gain when agc_index=2     */
        U32 bt_lna_gain2_2                 :2 ; /*25:24, lna_gain2 when agc_index=2    */
        U32 bt_lna_gain1_2                 :4 ; /*29:26, lna_gain1 when agc_index=2    */
        U32 bt_gain_table_1_reserved_0     :2 ; /*31:30, No description.               */
    } b;
} T_RF_IF_bt_gain_table_1;

//bt_gain_table_2
typedef union
{
    U32 v;
    struct
    {
        U32 bt_rxflt_gain2_5               :2 ; /*1 :0 , filter_gain2 when agc_index=5 */
        U32 bt_rxflt_gain1_5               :2 ; /*3 :2 , filter_gain1 when agc_index=5 */
        U32 bt_rmx_gain_5                  :4 ; /*7 :4 , rmx_gain when agc_index=5     */
        U32 bt_lna_gain2_5                 :2 ; /*9 :8 , lna_gain2 when agc_index=5    */
        U32 bt_lna_gain1_5                 :4 ; /*13:10, lna_gain1 when agc_index=5    */
        U32 bt_gain_table_2_reserved_1     :2 ; /*15:14, No description.               */
        U32 bt_rxflt_gain2_4               :2 ; /*17:16, filter_gain2 when agc_index=4 */
        U32 bt_rxflt_gain1_4               :2 ; /*19:18, filter_gain1 when agc_index=4 */
        U32 bt_rmx_gain_4                  :4 ; /*23:20, rmx_gain when agc_index=4     */
        U32 bt_lna_gain2_4                 :2 ; /*25:24, lna_gain2 when agc_index=4    */
        U32 bt_lna_gain1_4                 :4 ; /*29:26, lna_gain1 when agc_index=4    */
        U32 bt_gain_table_2_reserved_0     :2 ; /*31:30, No description.               */
    } b;
} T_RF_IF_bt_gain_table_2;

//bt_gain_table_3
typedef union
{
    U32 v;
    struct
    {
        U32 bt_rxflt_gain2_7               :2 ; /*1 :0 , filter_gain2 when agc_index=7 */
        U32 bt_rxflt_gain1_7               :2 ; /*3 :2 , filter_gain1 when agc_index=7 */
        U32 bt_rmx_gain_7                  :4 ; /*7 :4 , rmx_gain when agc_index=7     */
        U32 bt_lna_gain2_7                 :2 ; /*9 :8 , lna_gain2 when agc_index=7    */
        U32 bt_lna_gain1_7                 :4 ; /*13:10, lna_gain1 when agc_index=7    */
        U32 bt_gain_table_3_reserved_1     :2 ; /*15:14, No description.               */
        U32 bt_rxflt_gain2_6               :2 ; /*17:16, filter_gain2 when agc_index=6 */
        U32 bt_rxflt_gain1_6               :2 ; /*19:18, filter_gain1 when agc_index=6 */
        U32 bt_rmx_gain_6                  :4 ; /*23:20, rmx_gain when agc_index=6     */
        U32 bt_lna_gain2_6                 :2 ; /*25:24, lna_gain2 when agc_index=6    */
        U32 bt_lna_gain1_6                 :4 ; /*29:26, lna_gain1 when agc_index=6    */
        U32 bt_gain_table_3_reserved_0     :2 ; /*31:30, No description.               */
    } b;
} T_RF_IF_bt_gain_table_3;

//bt_gain_table_4
typedef union
{
    U32 v;
    struct
    {
        U32 bt_rxflt_gain2_9               :2 ; /*1 :0 , filter_gain2 when agc_index=9 */
        U32 bt_rxflt_gain1_9               :2 ; /*3 :2 , filter_gain1 when agc_index=9 */
        U32 bt_rmx_gain_9                  :4 ; /*7 :4 , rmx_gain when agc_index=9     */
        U32 bt_lna_gain2_9                 :2 ; /*9 :8 , lna_gain2 when agc_index=9    */
        U32 bt_lna_gain1_9                 :4 ; /*13:10, lna_gain1 when agc_index=9    */
        U32 bt_gain_table_4_reserved_1     :2 ; /*15:14, No description.               */
        U32 bt_rxflt_gain2_8               :2 ; /*17:16, filter_gain2 when agc_index=8 */
        U32 bt_rxflt_gain1_8               :2 ; /*19:18, filter_gain1 when agc_index=8 */
        U32 bt_rmx_gain_8                  :4 ; /*23:20, rmx_gain when agc_index=8     */
        U32 bt_lna_gain2_8                 :2 ; /*25:24, lna_gain2 when agc_index=8    */
        U32 bt_lna_gain1_8                 :4 ; /*29:26, lna_gain1 when agc_index=8    */
        U32 bt_gain_table_4_reserved_0     :2 ; /*31:30, No description.               */
    } b;
} T_RF_IF_bt_gain_table_4;

//bt_gain_table_5
typedef union
{
    U32 v;
    struct
    {
        U32 bt_rxflt_gain2_b               :2 ; /*1 :0 , filter_gain2 when agc_index=b */
        U32 bt_rxflt_gain1_b               :2 ; /*3 :2 , filter_gain1 when agc_index=b */
        U32 bt_rmx_gain_b                  :4 ; /*7 :4 , rmx_gain when agc_index=b     */
        U32 bt_lna_gain2_b                 :2 ; /*9 :8 , lna_gain2 when agc_index=b    */
        U32 bt_lna_gain1_b                 :4 ; /*13:10, lna_gain1 when agc_index=b    */
        U32 bt_gain_table_5_reserved_1     :2 ; /*15:14, No description.               */
        U32 bt_rxflt_gain2_a               :2 ; /*17:16, filter_gain2 when agc_index=a */
        U32 bt_rxflt_gain1_a               :2 ; /*19:18, filter_gain1 when agc_index=a */
        U32 bt_rmx_gain_a                  :4 ; /*23:20, rmx_gain when agc_index=a     */
        U32 bt_lna_gain2_a                 :2 ; /*25:24, lna_gain2 when agc_index=a    */
        U32 bt_lna_gain1_a                 :4 ; /*29:26, lna_gain1 when agc_index=a    */
        U32 bt_gain_table_5_reserved_0     :2 ; /*31:30, No description.               */
    } b;
} T_RF_IF_bt_gain_table_5;

//bt_gain_table_6
typedef union
{
    U32 v;
    struct
    {
        U32 bt_rxflt_gain2_d               :2 ; /*1 :0 , filter_gain2 when agc_index=d */
        U32 bt_rxflt_gain1_d               :2 ; /*3 :2 , filter_gain1 when agc_index=d */
        U32 bt_rmx_gain_d                  :4 ; /*7 :4 , rmx_gain when agc_index=d     */
        U32 bt_lna_gain2_d                 :2 ; /*9 :8 , lna_gain2 when agc_index=d    */
        U32 bt_lna_gain1_d                 :4 ; /*13:10, lna_gain1 when agc_index=d    */
        U32 bt_gain_table_6_reserved_1     :2 ; /*15:14, No description.               */
        U32 bt_rxflt_gain2_c               :2 ; /*17:16, filter_gain2 when agc_index=c */
        U32 bt_rxflt_gain1_c               :2 ; /*19:18, filter_gain1 when agc_index=c */
        U32 bt_rmx_gain_c                  :4 ; /*23:20, rmx_gain when agc_index=c     */
        U32 bt_lna_gain2_c                 :2 ; /*25:24, lna_gain2 when agc_index=c    */
        U32 bt_lna_gain1_c                 :4 ; /*29:26, lna_gain1 when agc_index=c    */
        U32 bt_gain_table_6_reserved_0     :2 ; /*31:30, No description.               */
    } b;
} T_RF_IF_bt_gain_table_6;

//bt_gain_table_7
typedef union
{
    U32 v;
    struct
    {
        U32 bt_rxflt_gain2_f               :2 ; /*1 :0 , filter_gain2 when agc_index=f */
        U32 bt_rxflt_gain1_f               :2 ; /*3 :2 , filter_gain1 when agc_index=f */
        U32 bt_rmx_gain_f                  :4 ; /*7 :4 , rmx_gain when agc_index=f     */
        U32 bt_lna_gain2_f                 :2 ; /*9 :8 , lna_gain2 when agc_index=f    */
        U32 bt_lna_gain1_f                 :4 ; /*13:10, lna_gain1 when agc_index=f    */
        U32 bt_gain_table_7_reserved_1     :2 ; /*15:14, No description.               */
        U32 bt_rxflt_gain2_e               :2 ; /*17:16, filter_gain2 when agc_index=e */
        U32 bt_rxflt_gain1_e               :2 ; /*19:18, filter_gain1 when agc_index=e */
        U32 bt_rmx_gain_e                  :4 ; /*23:20, rmx_gain when agc_index=e     */
        U32 bt_lna_gain2_e                 :2 ; /*25:24, lna_gain2 when agc_index=e    */
        U32 bt_lna_gain1_e                 :4 ; /*29:26, lna_gain1 when agc_index=e    */
        U32 bt_gain_table_7_reserved_0     :2 ; /*31:30, No description.               */
    } b;
} T_RF_IF_bt_gain_table_7;

//bt_ibit_table_0
typedef union
{
    U32 v;
    struct
    {
        U32 bt_lna_ibit2_3                 :4 ; /*3 :0 , lna_ibit2 when agc_index=3    */
        U32 bt_lna_ibit1_3                 :3 ; /*6 :4 , lna_ibit1 when agc_index=3    */
        U32 bt_ibit_table_0_reserved_3     :1 ; /*7 :7 , No description.               */
        U32 bt_lna_ibit2_2                 :4 ; /*11:8 , lna_ibit2 when agc_index=2    */
        U32 bt_lna_ibit1_2                 :3 ; /*14:12, lna_ibit1 when agc_index=2    */
        U32 bt_ibit_table_0_reserved_2     :1 ; /*15:15, No description.               */
        U32 bt_lna_ibit2_1                 :4 ; /*19:16, lna_ibit2 when agc_index=1    */
        U32 bt_lna_ibit1_1                 :3 ; /*22:20, lna_ibit1 when agc_index=1    */
        U32 bt_ibit_table_0_reserved_1     :1 ; /*23:23, No description.               */
        U32 bt_lna_ibit2_0                 :4 ; /*27:24, lna_ibit2 when agc_index=0    */
        U32 bt_lna_ibit1_0                 :3 ; /*30:28, lna_ibit1 when agc_index=0    */
        U32 bt_ibit_table_0_reserved_0     :1 ; /*31:31, No description.               */
    } b;
} T_RF_IF_bt_ibit_table_0;

//bt_ibit_table_1
typedef union
{
    U32 v;
    struct
    {
        U32 bt_lna_ibit2_7                 :4 ; /*3 :0 , lna_ibit2 when agc_index=7    */
        U32 bt_lna_ibit1_7                 :3 ; /*6 :4 , lna_ibit1 when agc_index=7    */
        U32 bt_ibit_table_1_reserved_3     :1 ; /*7 :7 , No description.               */
        U32 bt_lna_ibit2_6                 :4 ; /*11:8 , lna_ibit2 when agc_index=6    */
        U32 bt_lna_ibit1_6                 :3 ; /*14:12, lna_ibit1 when agc_index=6    */
        U32 bt_ibit_table_1_reserved_2     :1 ; /*15:15, No description.               */
        U32 bt_lna_ibit2_5                 :4 ; /*19:16, lna_ibit2 when agc_index=5    */
        U32 bt_lna_ibit1_5                 :3 ; /*22:20, lna_ibit1 when agc_index=5    */
        U32 bt_ibit_table_1_reserved_1     :1 ; /*23:23, No description.               */
        U32 bt_lna_ibit2_4                 :4 ; /*27:24, lna_ibit2 when agc_index=4    */
        U32 bt_lna_ibit1_4                 :3 ; /*30:28, lna_ibit1 when agc_index=4    */
        U32 bt_ibit_table_1_reserved_0     :1 ; /*31:31, No description.               */
    } b;
} T_RF_IF_bt_ibit_table_1;

//bt_ibit_table_2
typedef union
{
    U32 v;
    struct
    {
        U32 bt_lna_ibit2_b                 :4 ; /*3 :0 , lna_ibit2 when agc_index=b    */
        U32 bt_lna_ibit1_b                 :3 ; /*6 :4 , lna_ibit1 when agc_index=b    */
        U32 bt_ibit_table_2_reserved_3     :1 ; /*7 :7 , No description.               */
        U32 bt_lna_ibit2_a                 :4 ; /*11:8 , lna_ibit2 when agc_index=a    */
        U32 bt_lna_ibit1_a                 :3 ; /*14:12, lna_ibit1 when agc_index=a    */
        U32 bt_ibit_table_2_reserved_2     :1 ; /*15:15, No description.               */
        U32 bt_lna_ibit2_9                 :4 ; /*19:16, lna_ibit2 when agc_index=9    */
        U32 bt_lna_ibit1_9                 :3 ; /*22:20, lna_ibit1 when agc_index=9    */
        U32 bt_ibit_table_2_reserved_1     :1 ; /*23:23, No description.               */
        U32 bt_lna_ibit2_8                 :4 ; /*27:24, lna_ibit2 when agc_index=8    */
        U32 bt_lna_ibit1_8                 :3 ; /*30:28, lna_ibit1 when agc_index=8    */
        U32 bt_ibit_table_2_reserved_0     :1 ; /*31:31, No description.               */
    } b;
} T_RF_IF_bt_ibit_table_2;

//bt_ibit_table_3
typedef union
{
    U32 v;
    struct
    {
        U32 bt_lna_ibit2_f                 :4 ; /*3 :0 , lna_ibit2 when agc_index=f    */
        U32 bt_lna_ibit1_f                 :3 ; /*6 :4 , lna_ibit1 when agc_index=f    */
        U32 bt_ibit_table_3_reserved_3     :1 ; /*7 :7 , No description.               */
        U32 bt_lna_ibit2_e                 :4 ; /*11:8 , lna_ibit2 when agc_index=e    */
        U32 bt_lna_ibit1_e                 :3 ; /*14:12, lna_ibit1 when agc_index=e    */
        U32 bt_ibit_table_3_reserved_2     :1 ; /*15:15, No description.               */
        U32 bt_lna_ibit2_d                 :4 ; /*19:16, lna_ibit2 when agc_index=d    */
        U32 bt_lna_ibit1_d                 :3 ; /*22:20, lna_ibit1 when agc_index=d    */
        U32 bt_ibit_table_3_reserved_1     :1 ; /*23:23, No description.               */
        U32 bt_lna_ibit2_c                 :4 ; /*27:24, lna_ibit2 when agc_index=c    */
        U32 bt_lna_ibit1_c                 :3 ; /*30:28, lna_ibit1 when agc_index=c    */
        U32 bt_ibit_table_3_reserved_0     :1 ; /*31:31, No description.               */
    } b;
} T_RF_IF_bt_ibit_table_3;

//bt_ibit_table_4
typedef union
{
    U32 v;
    struct
    {
        U32 bt_rxflt_op_ibit_f             :2 ; /*1 :0 , rx filter op_ibit when agc_index=f*/
        U32 bt_rxflt_op_ibit_e             :2 ; /*3 :2 , rx filter op_ibit when agc_index=e*/
        U32 bt_rxflt_op_ibit_d             :2 ; /*5 :4 , rx filter op_ibit when agc_index=d*/
        U32 bt_rxflt_op_ibit_c             :2 ; /*7 :6 , rx filter op_ibit when agc_index=c*/
        U32 bt_rxflt_op_ibit_b             :2 ; /*9 :8 , rx filter op_ibit when agc_index=b*/
        U32 bt_rxflt_op_ibit_a             :2 ; /*11:10, rx filter op_ibit when agc_index=a*/
        U32 bt_rxflt_op_ibit_9             :2 ; /*13:12, rx filter op_ibit when agc_index=9*/
        U32 bt_rxflt_op_ibit_8             :2 ; /*15:14, rx filter op_ibit when agc_index=8*/
        U32 bt_rxflt_op_ibit_7             :2 ; /*17:16, rx filter op_ibit when agc_index=7*/
        U32 bt_rxflt_op_ibit_6             :2 ; /*19:18, rx filter op_ibit when agc_index=6*/
        U32 bt_rxflt_op_ibit_5             :2 ; /*21:20, rx filter op_ibit when agc_index=5*/
        U32 bt_rxflt_op_ibit_4             :2 ; /*23:22, rx filter op_ibit when agc_index=4*/
        U32 bt_rxflt_op_ibit_3             :2 ; /*25:24, rx filter op_ibit when agc_index=3*/
        U32 bt_rxflt_op_ibit_2             :2 ; /*27:26, rx filter op_ibit when agc_index=2*/
        U32 bt_rxflt_op_ibit_1             :2 ; /*29:28, rx filter op_ibit when agc_index=1*/
        U32 bt_rxflt_op_ibit_0             :2 ; /*31:30, rx filter op_ibit when agc_index=0*/
    } b;
} T_RF_IF_bt_ibit_table_4;

//bt_padrv_tmx_gain_table_0
typedef union
{
    U32 v;
    struct
    {
        U32 bt_padrv_gain_3                :3 ; /*2 :0 , padrv gain when apc_index=3   */
        U32 bt_tmx_gain_3                  :3 ; /*5 :3 , tmx gain when apc_index=3     */
        U32 bt_padrv_tmx_gain_table_0_reserved_3 :2 ; /*7 :6 , No description.               */
        U32 bt_padrv_gain_2                :3 ; /*10:8 , padrv gain when apc_index=2   */
        U32 bt_tmx_gain_2                  :3 ; /*13:11, tmx gain when apc_index=2     */
        U32 bt_padrv_tmx_gain_table_0_reserved_2 :2 ; /*15:14, No description.               */
        U32 bt_padrv_gain_1                :3 ; /*18:16, padrv gain when apc_index=1   */
        U32 bt_tmx_gain_1                  :3 ; /*21:19, tmx gain when apc_index=1     */
        U32 bt_padrv_tmx_gain_table_0_reserved_1 :2 ; /*23:22, No description.               */
        U32 bt_padrv_gain_0                :3 ; /*26:24, padrv gain when apc_index=0   */
        U32 bt_tmx_gain_0                  :3 ; /*29:27, tmx gain when apc_index=0     */
        U32 bt_padrv_tmx_gain_table_0_reserved_0 :2 ; /*31:30, No description.               */
    } b;
} T_RF_IF_bt_padrv_tmx_gain_table_0;

//bt_padrv_tmx_gain_table_1
typedef union
{
    U32 v;
    struct
    {
        U32 bt_padrv_gain_7                :3 ; /*2 :0 , padrv gain when apc_index=7   */
        U32 bt_tmx_gain_7                  :3 ; /*5 :3 , tmx gain when apc_index=7     */
        U32 bt_padrv_tmx_gain_table_1_reserved_3 :2 ; /*7 :6 , No description.               */
        U32 bt_padrv_gain_6                :3 ; /*10:8 , padrv gain when apc_index=6   */
        U32 bt_tmx_gain_6                  :3 ; /*13:11, tmx gain when apc_index=6     */
        U32 bt_padrv_tmx_gain_table_1_reserved_2 :2 ; /*15:14, No description.               */
        U32 bt_padrv_gain_5                :3 ; /*18:16, padrv gain when apc_index=5   */
        U32 bt_tmx_gain_5                  :3 ; /*21:19, tmx gain when apc_index=5     */
        U32 bt_padrv_tmx_gain_table_1_reserved_1 :2 ; /*23:22, No description.               */
        U32 bt_padrv_gain_4                :3 ; /*26:24, padrv gain when apc_index=4   */
        U32 bt_tmx_gain_4                  :3 ; /*29:27, tmx gain when apc_index=4     */
        U32 bt_padrv_tmx_gain_table_1_reserved_0 :2 ; /*31:30, No description.               */
    } b;
} T_RF_IF_bt_padrv_tmx_gain_table_1;

//fm_lna_gain_table
typedef union
{
    U32 v;
    struct
    {
        U32 fm_lna_gain_bit_f              :2 ; /*1 :0 , fm lna gain bit when agc_index=f*/
        U32 fm_lna_gain_bit_e              :2 ; /*3 :2 , fm lna gain bit when agc_index=e*/
        U32 fm_lna_gain_bit_d              :2 ; /*5 :4 , fm lna gain bit when agc_index=d*/
        U32 fm_lna_gain_bit_c              :2 ; /*7 :6 , fm lna gain bit when agc_index=c*/
        U32 fm_lna_gain_bit_b              :2 ; /*9 :8 , fm lna gain bit when agc_index=b*/
        U32 fm_lna_gain_bit_a              :2 ; /*11:10, fm lna gain bit when agc_index=a*/
        U32 fm_lna_gain_bit_9              :2 ; /*13:12, fm lna gain bit when agc_index=9*/
        U32 fm_lna_gain_bit_8              :2 ; /*15:14, fm lna gain bit when agc_index=8*/
        U32 fm_lna_gain_bit_7              :2 ; /*17:16, fm lna gain bit when agc_index=7*/
        U32 fm_lna_gain_bit_6              :2 ; /*19:18, fm lna gain bit when agc_index=6*/
        U32 fm_lna_gain_bit_5              :2 ; /*21:20, fm lna gain bit when agc_index=5*/
        U32 fm_lna_gain_bit_4              :2 ; /*23:22, fm lna gain bit when agc_index=4*/
        U32 fm_lna_gain_bit_3              :2 ; /*25:24, fm lna gain bit when agc_index=3*/
        U32 fm_lna_gain_bit_2              :2 ; /*27:26, fm lna gain bit when agc_index=2*/
        U32 fm_lna_gain_bit_1              :2 ; /*29:28, fm lna gain bit when agc_index=1*/
        U32 fm_lna_gain_bit_0              :2 ; /*31:30, fm lna gain bit when agc_index=0*/
    } b;
} T_RF_IF_fm_lna_gain_table;

//fm_rmx_gain_table_0
typedef union
{
    U32 v;
    struct
    {
        U32 fm_rmx_gain_bit_7              :3 ; /*2 :0 , fm mixer gain bit when agc_index=7*/
        U32 fm_rmx_gain_table_0_reserved_6 :1 ; /*3 :3 , No description.               */
        U32 fm_rmx_gain_bit_6              :3 ; /*6 :4 , fm mixer gain bit when agc_index=6*/
        U32 fm_rmx_gain_table_0_reserved_5 :1 ; /*7 :7 , No description.               */
        U32 fm_rmx_gain_bit_5              :3 ; /*10:8 , fm mixer gain bit when agc_index=5*/
        U32 fm_rmx_gain_table_0_reserved_4 :1 ; /*11:11, No description.               */
        U32 fm_rmx_gain_bit_4              :3 ; /*14:12, fm mixer gain bit when agc_index=4*/
        U32 fm_rmx_gain_table_0_reserved_3 :1 ; /*15:15, No description.               */
        U32 fm_rmx_gain_bit_3              :3 ; /*18:16, fm mixer gain bit when agc_index=3*/
        U32 fm_rmx_gain_table_0_reserved_2 :1 ; /*19:19, No description.               */
        U32 fm_rmx_gain_bit_2              :3 ; /*22:20, fm mixer gain bit when agc_index=2*/
        U32 fm_rmx_gain_table_0_reserved_1 :1 ; /*23:23, No description.               */
        U32 fm_rmx_gain_bit_1              :3 ; /*26:24, fm mixer gain bit when agc_index=1*/
        U32 fm_rmx_gain_table_0_reserved_0 :1 ; /*27:27, No description.               */
        U32 fm_rmx_gain_bit_0              :3 ; /*30:28, fm mixer gain bit when agc_index=0*/
        U32 fm_agc_gain_dr                 :1 ; /*31:31, enable FM gain direct control.
    } b;
} T_RF_IF_fm_rmx_gain_table_0;

//fm_rmx_gain_table_1
typedef union
{
    U32 v;
    struct
    {
        U32 fm_rmx_gain_bit_f              :3 ; /*2 :0 , fm mixer gain bit when agc_index=f*/
        U32 fm_rmx_gain_table_1_reserved_7 :1 ; /*3 :3 , No description.               */
        U32 fm_rmx_gain_bit_e              :3 ; /*6 :4 , fm mixer gain bit when agc_index=e*/
        U32 fm_rmx_gain_table_1_reserved_6 :1 ; /*7 :7 , No description.               */
        U32 fm_rmx_gain_bit_d              :3 ; /*10:8 , fm mixer gain bit when agc_index=d*/
        U32 fm_rmx_gain_table_1_reserved_5 :1 ; /*11:11, No description.               */
        U32 fm_rmx_gain_bit_c              :3 ; /*14:12, fm mixer gain bit when agc_index=c*/
        U32 fm_rmx_gain_table_1_reserved_4 :1 ; /*15:15, No description.               */
        U32 fm_rmx_gain_bit_b              :3 ; /*18:16, fm mixer gain bit when agc_index=b*/
        U32 fm_rmx_gain_table_1_reserved_3 :1 ; /*19:19, No description.               */
        U32 fm_rmx_gain_bit_a              :3 ; /*22:20, fm mixer gain bit when agc_index=a*/
        U32 fm_rmx_gain_table_1_reserved_2 :1 ; /*23:23, No description.               */
        U32 fm_rmx_gain_bit_9              :3 ; /*26:24, fm mixer gain bit when agc_index=9*/
        U32 fm_rmx_gain_table_1_reserved_1 :1 ; /*27:27, No description.               */
        U32 fm_rmx_gain_bit_8              :3 ; /*30:28, fm mixer gain bit when agc_index=8*/
        U32 fm_rmx_gain_table_1_reserved_0 :1 ; /*31:31, No description.               */
    } b;
} T_RF_IF_fm_rmx_gain_table_1;

//fm_rxflt_gain_table
typedef union
{
    U32 v;
    struct
    {
        U32 fm_rxflt_gain_bit_f            :2 ; /*1 :0 , fm rxflt gain bit when agc_index=f*/
        U32 fm_rxflt_gain_bit_e            :2 ; /*3 :2 , fm rxflt gain bit when agc_index=e*/
        U32 fm_rxflt_gain_bit_d            :2 ; /*5 :4 , fm rxflt gain bit when agc_index=d*/
        U32 fm_rxflt_gain_bit_c            :2 ; /*7 :6 , fm rxflt gain bit when agc_index=c*/
        U32 fm_rxflt_gain_bit_b            :2 ; /*9 :8 , fm rxflt gain bit when agc_index=b*/
        U32 fm_rxflt_gain_bit_a            :2 ; /*11:10, fm rxflt gain bit when agc_index=a*/
        U32 fm_rxflt_gain_bit_9            :2 ; /*13:12, fm rxflt gain bit when agc_index=9*/
        U32 fm_rxflt_gain_bit_8            :2 ; /*15:14, fm rxflt gain bit when agc_index=8*/
        U32 fm_rxflt_gain_bit_7            :2 ; /*17:16, fm rxflt gain bit when agc_index=7*/
        U32 fm_rxflt_gain_bit_6            :2 ; /*19:18, fm rxflt gain bit when agc_index=6*/
        U32 fm_rxflt_gain_bit_5            :2 ; /*21:20, fm rxflt gain bit when agc_index=5*/
        U32 fm_rxflt_gain_bit_4            :2 ; /*23:22, fm rxflt gain bit when agc_index=4*/
        U32 fm_rxflt_gain_bit_3            :2 ; /*25:24, fm rxflt gain bit when agc_index=3*/
        U32 fm_rxflt_gain_bit_2            :2 ; /*27:26, fm rxflt gain bit when agc_index=2*/
        U32 fm_rxflt_gain_bit_1            :2 ; /*29:28, fm rxflt gain bit when agc_index=1*/
        U32 fm_rxflt_gain_bit_0            :2 ; /*31:30, fm rxflt gain bit when agc_index=0*/
    } b;
} T_RF_IF_fm_rxflt_gain_table;

//test_buffer_setting
typedef union
{
    U32 v;
    struct
    {
        U32 aux_out_mode                   :1 ; /*0 :0 , No description.               */
        U32 aux_flt_en                     :1 ; /*1 :1 , No description.               */
        U32 tbuf_vtr_sel                   :1 ; /*2 :2 , No description.               */
        U32 tbuf_op_ibit                   :2 ; /*4 :3 , No description.               */
        U32 tbuf_mux_en                    :2 ; /*6 :5 , No description.               */
        U32 tbuf_range_bit                 :2 ; /*8 :7 , No description.               */
        U32 tbuf_cm_bit                    :2 ; /*10:9 , No description.               */
        U32 tbuf_rstn_reg                  :1 ; /*11:11, No description.               */
        U32 tbuf_rstn_dr                   :1 ; /*12:12, No description.               */
        U32 test_buffer_setting_reserved_0 :19; /*31:13, No description.               */
    } b;
} T_RF_IF_test_buffer_setting;

//reserved_reg
typedef union
{
    U32 v;
    struct
    {
        U32 ana_rsvd                       :16; /*15:0 , No description.               */
        U32 dig_rsvd                       :16; /*31:16, No description.               */
    } b;
} T_RF_IF_reserved_reg;

//channel_setting
typedef union
{
    U32 v;
    struct
    {
        U32 bt_tmx_lobias                  :5 ; /*4 :0 , No description.               */
        U32 bt_tmx_cap_bit                 :4 ; /*8 :5 , No description.               */
        U32 bt_rmx_lo_vcom_bit             :2 ; /*10:9 , No description.               */
        U32 bt_lna_cload_bit               :3 ; /*13:11, No description.               */
        U32 channel_setting_reserved_0     :18; /*31:14, No description.               */
    } b;
} T_RF_IF_channel_setting;

//reserved_in_reg
typedef union
{
    U32 v;
    struct
    {
        U32 rf_rsvd_in                     :16; /*15:0 , No description.               */
        U32 reserved_in_reg_reserved_0     :16; /*31:16, No description.               */
    } b;
} T_RF_IF_reserved_in_reg;

//sys_clk_cfg
typedef union
{
    U32 v;
    struct
    {
        U32 dig_rsvd_2                     :16; /*15:0 , No description.               */
    } b;
} T_RF_IF_sys_clk_cfg;

typedef struct
{
    volatile                T_RF_IF_revision                       revision; /*0x0  , RO   , 0x00000000, No description.               */
    volatile             T_RF_IF_sys_control                    sys_control; /*0x4  , RW   , 0x00000031, No description.               */
    volatile              T_RF_IF_bt_control                     bt_control; /*0x8  , RW   , 0x00000027, No description.               */
    volatile              T_RF_IF_fm_control                     fm_control; /*0xc  , RW   , 0x00004808, No description.               */
    volatile      T_RF_IF_inter_freq_setting             inter_freq_setting; /*0x10 , RW   , 0x008002F6, No description.               */
    volatile             T_RF_IF_ldo_setting                    ldo_setting; /*0x14 , RW   , 0x00000001, No description.               */
    volatile      T_RF_IF_bt_lna_rmx_setting             bt_lna_rmx_setting; /*0x18 , RW   , 0x92400628, No description.               */
    volatile T_RF_IF_fm_lna_rmx_rxflt_setting       fm_lna_rmx_rxflt_setting; /*0x1c , RW   , 0x00000098, No description.               */
    volatile       T_RF_IF_rxflt_adc_setting              rxflt_adc_setting; /*0x20 , RW   , 0x0A700244, No description.               */
    volatile        T_RF_IF_bt_bbdac_setting               bt_bbdac_setting; /*0x24 , RW   , 0x00000012, No description.               */
    volatile    T_RF_IF_bt_padrv_tmx_setting           bt_padrv_tmx_setting; /*0x28 , RW   , 0x079F0204, No description.               */
    volatile          T_RF_IF_fm_dsp_setting                 fm_dsp_setting; /*0x2c , RW   , 0x00000000, No description.               */
    volatile             T_RF_IF_vco_setting                    vco_setting; /*0x30 , RW   , 0x00000029, No description.               */
    volatile          T_RF_IF_rfpll_setting0                 rfpll_setting0; /*0x34 , RW   , 0x0A61019C, No description.               */
    volatile          T_RF_IF_rfpll_setting1                 rfpll_setting1; /*0x38 , RW   , 0x23032103, No description.               */
    volatile          T_RF_IF_rfpll_setting2                 rfpll_setting2; /*0x3c , RW   , 0x60006000, No description.               */
    volatile            T_RF_IF_rfpll_status                   rfpll_status; /*0x40 , RO   , 0x00000000, No description.               */
    volatile          T_RF_IF_adpll_setting0                 adpll_setting0; /*0x44 , RW   , 0x08891248, No description.               */
    volatile          T_RF_IF_adpll_setting1                 adpll_setting1; /*0x48 , RW   , 0x00000000, No description.               */
    volatile            T_RF_IF_adpll_status                   adpll_status; /*0x4c , RO   , 0x00000000, No description.               */
    volatile      T_RF_IF_rfpll_sdm_setting0             rfpll_sdm_setting0; /*0x50 , RW   , 0x00001000, No description.               */
    volatile      T_RF_IF_rfpll_sdm_setting1             rfpll_sdm_setting1; /*0x54 , RW   , 0x00000000, No description.               */
    volatile      T_RF_IF_adpll_sdm_setting0             adpll_sdm_setting0; /*0x58 , RW   , 0x0000040C, No description.               */
    volatile      T_RF_IF_adpll_sdm_setting1             adpll_sdm_setting1; /*0x5c , RW   , 0x00000000, No description.               */
    volatile         T_RF_IF_dc_cal_setting0                dc_cal_setting0; /*0x60 , RW   , 0x00025820, No description.               */
    volatile         T_RF_IF_dc_cal_setting1                dc_cal_setting1; /*0x64 , RW   , 0x00008080, No description.               */
    volatile           T_RF_IF_dc_cal_status                  dc_cal_status; /*0x68 , RO   , 0x00008080, No description.               */
    volatile         T_RF_IF_vco_cal_setting                vco_cal_setting; /*0x6c , RW   , 0x00004300, No description.               */
    volatile      T_RF_IF_rfpll_cal_setting0             rfpll_cal_setting0; /*0x70 , RW   , 0x01200048, No description.               */
    volatile      T_RF_IF_rfpll_cal_setting1             rfpll_cal_setting1; /*0x74 , RW   , 0x00000000, No description.               */
    volatile          T_RF_IF_cal_dr_setting                 cal_dr_setting; /*0x78 , RW   , 0x00000000, No description.               */
    volatile              T_RF_IF_cal_status                     cal_status; /*0x7c , RO   , 0x00000000, No description.               */
    volatile                T_RF_IF_power_dr                       power_dr; /*0x80 , RW   , 0x00000000, No description.               */
    volatile               T_RF_IF_power_reg                      power_reg; /*0x84 , RW   , 0x00100000, No description.               */
    volatile            T_RF_IF_power_status                   power_status; /*0x88 , RO   , 0x00140000, No description.               */
    volatile         T_RF_IF_bt_gain_table_0                bt_gain_table_0; /*0x8c , RW   , 0x00000000, No description.               */
    volatile         T_RF_IF_bt_gain_table_1                bt_gain_table_1; /*0x90 , RW   , 0x00000000, No description.               */
    volatile         T_RF_IF_bt_gain_table_2                bt_gain_table_2; /*0x94 , RW   , 0x00000000, No description.               */
    volatile         T_RF_IF_bt_gain_table_3                bt_gain_table_3; /*0x98 , RW   , 0x00000000, No description.               */
    volatile         T_RF_IF_bt_gain_table_4                bt_gain_table_4; /*0x9c , RW   , 0x00000000, No description.               */
    volatile         T_RF_IF_bt_gain_table_5                bt_gain_table_5; /*0xa0 , RW   , 0x00000000, No description.               */
    volatile         T_RF_IF_bt_gain_table_6                bt_gain_table_6; /*0xa4 , RW   , 0x00000000, No description.               */
    volatile         T_RF_IF_bt_gain_table_7                bt_gain_table_7; /*0xa8 , RW   , 0x00003FFF, No description.               */
    volatile         T_RF_IF_bt_ibit_table_0                bt_ibit_table_0; /*0xac , RW   , 0x48484848, No description.               */
    volatile         T_RF_IF_bt_ibit_table_1                bt_ibit_table_1; /*0xb0 , RW   , 0x48484848, No description.               */
    volatile         T_RF_IF_bt_ibit_table_2                bt_ibit_table_2; /*0xb4 , RW   , 0x48484848, No description.               */
    volatile         T_RF_IF_bt_ibit_table_3                bt_ibit_table_3; /*0xb8 , RW   , 0x48484848, No description.               */
    volatile         T_RF_IF_bt_ibit_table_4                bt_ibit_table_4; /*0xbc , RW   , 0xAAAAAAAA, No description.               */
    volatile T_RF_IF_bt_padrv_tmx_gain_table_0      bt_padrv_tmx_gain_table_0; /*0xc0 , RW   , 0x3F3F3F3F, No description.               */
    volatile T_RF_IF_bt_padrv_tmx_gain_table_1      bt_padrv_tmx_gain_table_1; /*0xc4 , RW   , 0x3F3F3F3F, No description.               */
    volatile       T_RF_IF_fm_lna_gain_table              fm_lna_gain_table; /*0xc8 , RW   , 0x00000003, No description.               */
    volatile     T_RF_IF_fm_rmx_gain_table_0            fm_rmx_gain_table_0; /*0xcc , RW   , 0x00000000, No description.               */
    volatile     T_RF_IF_fm_rmx_gain_table_1            fm_rmx_gain_table_1; /*0xd0 , RW   , 0x00000007, No description.               */
    volatile     T_RF_IF_fm_rxflt_gain_table            fm_rxflt_gain_table; /*0xd4 , RW   , 0x00000003, No description.               */
    volatile     T_RF_IF_test_buffer_setting            test_buffer_setting; /*0xd8 , RW   , 0x00000090, No description.               */
    volatile            T_RF_IF_reserved_reg                   reserved_reg; /*0xdc , RW   , 0xFF00FF00, No description.               */
    volatile         T_RF_IF_channel_setting                channel_setting; /*0xe0 , RW   , 0x00001AE4, No description.               */
    volatile         T_RF_IF_reserved_in_reg                reserved_in_reg; /*0xe4 , RO   , 0x00000000, No description.               */
    volatile             T_RF_IF_sys_clk_cfg                    sys_clk_cfg; /*0xe8 , RW   , 0x000003CA, No description.               */
} T_HWP_RF_IF_T;
#else
typedef struct
{
    volatile                             U32                       revision; /*0x0  , RO   , 0x00000000, No description.               */
    volatile                             U32                    sys_control; /*0x4  , RW   , 0x00000031, No description.               */
    volatile                             U32                     bt_control; /*0x8  , RW   , 0x00000027, No description.               */
    volatile                             U32                     fm_control; /*0xc  , RW   , 0x00004808, No description.               */
    volatile                             U32             inter_freq_setting; /*0x10 , RW   , 0x008002F6, No description.               */
    volatile                             U32                    ldo_setting; /*0x14 , RW   , 0x00000001, No description.               */
    volatile                             U32             bt_lna_rmx_setting; /*0x18 , RW   , 0x92400628, No description.               */
    volatile                             U32       fm_lna_rmx_rxflt_setting; /*0x1c , RW   , 0x00000098, No description.               */
    volatile                             U32              rxflt_adc_setting; /*0x20 , RW   , 0x0A700244, No description.               */
    volatile                             U32               bt_bbdac_setting; /*0x24 , RW   , 0x00000012, No description.               */
    volatile                             U32           bt_padrv_tmx_setting; /*0x28 , RW   , 0x079F0204, No description.               */
    volatile                             U32                 fm_dsp_setting; /*0x2c , RW   , 0x00000000, No description.               */
    volatile                             U32                    vco_setting; /*0x30 , RW   , 0x00000029, No description.               */
    volatile                             U32                 rfpll_setting0; /*0x34 , RW   , 0x0A61019C, No description.               */
    volatile                             U32                 rfpll_setting1; /*0x38 , RW   , 0x23032103, No description.               */
    volatile                             U32                 rfpll_setting2; /*0x3c , RW   , 0x60006000, No description.               */
    volatile                             U32                   rfpll_status; /*0x40 , RO   , 0x00000000, No description.               */
    volatile                             U32                 adpll_setting0; /*0x44 , RW   , 0x08891248, No description.               */
    volatile                             U32                 adpll_setting1; /*0x48 , RW   , 0x00000000, No description.               */
    volatile                             U32                   adpll_status; /*0x4c , RO   , 0x00000000, No description.               */
    volatile                             U32             rfpll_sdm_setting0; /*0x50 , RW   , 0x00001000, No description.               */
    volatile                             U32             rfpll_sdm_setting1; /*0x54 , RW   , 0x00000000, No description.               */
    volatile                             U32             adpll_sdm_setting0; /*0x58 , RW   , 0x0000040C, No description.               */
    volatile                             U32             adpll_sdm_setting1; /*0x5c , RW   , 0x00000000, No description.               */
    volatile                             U32                dc_cal_setting0; /*0x60 , RW   , 0x00025820, No description.               */
    volatile                             U32                dc_cal_setting1; /*0x64 , RW   , 0x00008080, No description.               */
    volatile                             U32                  dc_cal_status; /*0x68 , RO   , 0x00008080, No description.               */
    volatile                             U32                vco_cal_setting; /*0x6c , RW   , 0x00004300, No description.               */
    volatile                             U32             rfpll_cal_setting0; /*0x70 , RW   , 0x01200048, No description.               */
    volatile                             U32             rfpll_cal_setting1; /*0x74 , RW   , 0x00000000, No description.               */
    volatile                             U32                 cal_dr_setting; /*0x78 , RW   , 0x00000000, No description.               */
    volatile                             U32                     cal_status; /*0x7c , RO   , 0x00000000, No description.               */
    volatile                             U32                       power_dr; /*0x80 , RW   , 0x00000000, No description.               */
    volatile                             U32                      power_reg; /*0x84 , RW   , 0x00100000, No description.               */
    volatile                             U32                   power_status; /*0x88 , RO   , 0x00140000, No description.               */
    volatile                             U32                bt_gain_table_0; /*0x8c , RW   , 0x00000000, No description.               */
    volatile                             U32                bt_gain_table_1; /*0x90 , RW   , 0x00000000, No description.               */
    volatile                             U32                bt_gain_table_2; /*0x94 , RW   , 0x00000000, No description.               */
    volatile                             U32                bt_gain_table_3; /*0x98 , RW   , 0x00000000, No description.               */
    volatile                             U32                bt_gain_table_4; /*0x9c , RW   , 0x00000000, No description.               */
    volatile                             U32                bt_gain_table_5; /*0xa0 , RW   , 0x00000000, No description.               */
    volatile                             U32                bt_gain_table_6; /*0xa4 , RW   , 0x00000000, No description.               */
    volatile                             U32                bt_gain_table_7; /*0xa8 , RW   , 0x00003FFF, No description.               */
    volatile                             U32                bt_ibit_table_0; /*0xac , RW   , 0x48484848, No description.               */
    volatile                             U32                bt_ibit_table_1; /*0xb0 , RW   , 0x48484848, No description.               */
    volatile                             U32                bt_ibit_table_2; /*0xb4 , RW   , 0x48484848, No description.               */
    volatile                             U32                bt_ibit_table_3; /*0xb8 , RW   , 0x48484848, No description.               */
    volatile                             U32                bt_ibit_table_4; /*0xbc , RW   , 0xAAAAAAAA, No description.               */
    volatile                             U32      bt_padrv_tmx_gain_table_0; /*0xc0 , RW   , 0x3F3F3F3F, No description.               */
    volatile                             U32      bt_padrv_tmx_gain_table_1; /*0xc4 , RW   , 0x3F3F3F3F, No description.               */
    volatile                             U32              fm_lna_gain_table; /*0xc8 , RW   , 0x00000003, No description.               */
    volatile                             U32            fm_rmx_gain_table_0; /*0xcc , RW   , 0x00000000, No description.               */
    volatile                             U32            fm_rmx_gain_table_1; /*0xd0 , RW   , 0x00000007, No description.               */
    volatile                             U32            fm_rxflt_gain_table; /*0xd4 , RW   , 0x00000003, No description.               */
    volatile                             U32            test_buffer_setting; /*0xd8 , RW   , 0x00000090, No description.               */
    volatile                             U32                   reserved_reg; /*0xdc , RW   , 0xFF00FF00, No description.               */
    volatile                             U32                channel_setting; /*0xe0 , RW   , 0x00001AE4, No description.               */
    volatile                             U32                reserved_in_reg; /*0xe4 , RO   , 0x00000000, No description.               */
    volatile                             U32                    sys_clk_cfg; /*0xe8 , RW   , 0x000003CA, No description.               */
} T_HWP_RF_IF_T;

//revision
#define RF_IF_REVID(n)                 (((n)&0xF)<<0)      
#define RF_IF_REVID_MASK               (0xF<<0)            
#define RF_IF_REVID_SHIFT              (0)                 

//sys_control
#define RF_IF_SOFT_RESETN              (1<<0)              

#define RF_IF_CHIP_SELF_CAL_ENABLE     (1<<1)              

#define RF_IF_RF_MODE            (1<<2)              
#define RF_IF_RF_MODE_BT              (0<<2)              
#define RF_IF_RF_MODE_FM              (1<<2)              

#define RF_IF_CLK_DIGITAL_ENABLE_REG   (1<<3)              

#define RF_IF_BT_TUNE_DIFF_EN          (1<<4)              

#define RF_IF_BT_HOPPING_EN            (1<<5)              

#define RF_IF_FM_ADCLK_MODE(n)         (((n)&0x3)<<6)      
#define RF_IF_FM_ADCLK_MODE_DIVIDER    (((0)&0x3)<<6)      
#define RF_IF_FM_ADCLK_MODE_AUDIO      (((1)&0x3)<<6)      
#define RF_IF_FM_ADCLK_MODE_ADPLL     (((2)&0x3)<<6)      
#define RF_IF_FM_ADCLK_MODE_MASK       (0x3<<6)            
#define RF_IF_FM_ADCLK_MODE_SHIFT      (6)                 

//bt_control
#define RF_IF_BT_ARFCN(n)              (((n)&0x7F)<<0)     
#define RF_IF_BT_ARFCN_MASK            (0x7F<<0)           
#define RF_IF_BT_ARFCN_SHIFT           (0)                 

#define RF_IF_BT_CH_TYPE               (1<<7)              
#define RF_IF_BT_CH_TYPE_NORMAL       (0<<7)              
#define RF_IF_BT_CH_TYPE_MULTIPLIER    (1<<7)              

//fm_control
#define RF_IF_FM_TUNE                  (1<<0)              

#define RF_IF_FM_CHAN_REG(n)           (((n)&0x7FF)<<1)    
#define RF_IF_FM_CHAN_REG_MASK         (0x7FF<<1)          
#define RF_IF_FM_CHAN_REG_SHIFT        (1)                 

#define RF_IF_FM_FREQ_MODE             (1<<12)             
#define RF_IF_FM_FREQ_MODE_CHANNEL     (0<<12)             
#define RF_IF_FM_FREQ_MODE_DIRECT      (1<<12)             

#define RF_IF_FM_BAND_SEL(n)           (((n)&0x3)<<13)     
#define RF_IF_FM_BAND_SEL_87_108MHZ    (((0)&0x3)<<13)     
#define RF_IF_FM_BAND_SEL_76_91MHZ     (((1)&0x3)<<13)     
#define RF_IF_FM_BAND_SEL_76_108MHZ    (((2)&0x3)<<13)     
#define RF_IF_FM_BAND_SEL_65_76MHZ     (((3)&0x3)<<13)     
#define RF_IF_FM_BAND_SEL_MASK         (0x3<<13)           
#define RF_IF_FM_BAND_SEL_SHIFT        (13)                

#define RF_IF_FM_FREQ_DIRECT(n)        (((n)&0xFFFF)<<16)  
#define RF_IF_FM_FREQ_DIRECT_MASK      (0xFFFF<<16)        
#define RF_IF_FM_FREQ_DIRECT_SHIFT     (16)                

//inter_freq _setting
#define RF_IF_BT_IF(n)                 (((n)&0x7FF)<<0)    
#define RF_IF_BT_IF_MASK               (0x7FF<<0)          
#define RF_IF_BT_IF_SHIFT              (0)                 

#define RF_IF_BT_IMGREJ                (1<<11)             
#define RF_IF_BT_IMGREJ_POSITIVE       (0<<11)             
#define RF_IF_BT_IMGREJ_NEGTIVE        (1<<11)             

#define RF_IF_BT_ZIF                   (1<<12)             
#define RF_IF_BT_ZIF_USE_0HZ               (1<<12)             
#define RF_IF_BT_ZIF_USE_BT_FREQ               (0<<12)             

#define RF_IF_FM_IF(n)                 (((n)&0x7FF)<<16)   
#define RF_IF_FM_IF_MASK               (0x7FF<<16)         
#define RF_IF_FM_IF_SHIFT              (16)                

#define RF_IF_FM_IMGREJ                (1<<27)             
#define RF_IF_FM_IMGREJ_POSITIVE       (0<<27)             
#define RF_IF_FM_IMGREJ_NEGTIVE        (1<<27)             

//ldo_setting
#define RF_IF_RF_IVREF_AVDD_BIT        (1<<0)              

//bt_lna_rmx_setting
#define RF_IF_BT_RMX_REG_BYPASS        (1<<0)              

#define RF_IF_BT_RMX_REG_BIT(n)        (((n)&0x7)<<1)      
#define RF_IF_BT_RMX_REG_BIT_MASK      (0x7<<1)            
#define RF_IF_BT_RMX_REG_BIT_SHIFT     (1)                 

#define RF_IF_BT_RMX_LO_IFVCOM_BIT(n)  (((n)&0xF)<<6)      
#define RF_IF_BT_RMX_LO_IFVCOM_BIT_MASK (0xF<<6)            
#define RF_IF_BT_RMX_LO_IFVCOM_BIT_SHIFT (6)                 

#define RF_IF_BT_RMX_LO_IFVCOM_SEL     (1<<10)             

#define RF_IF_BT_LNA_SELFBIAS_EN       (1<<16)             

#define RF_IF_BT_LNA_VCAS_BIT(n)       (((n)&0x3)<<17)     
#define RF_IF_BT_LNA_VCAS_BIT_MASK     (0x3<<17)           
#define RF_IF_BT_LNA_VCAS_BIT_SHIFT    (17)                

#define RF_IF_BT_LNA_REG_BYPASS        (1<<22)             

#define RF_IF_BT_LNA_REG_BIT(n)        (((n)&0x7)<<23)     
#define RF_IF_BT_LNA_REG_BIT_MASK      (0x7<<23)           
#define RF_IF_BT_LNA_REG_BIT_SHIFT     (23)                

#define RF_IF_BT_BALUN_CAP_BIT_TX(n)   (((n)&0x7)<<26)     
#define RF_IF_BT_BALUN_CAP_BIT_TX_MASK (0x7<<26)           
#define RF_IF_BT_BALUN_CAP_BIT_TX_SHIFT (26)                

#define RF_IF_BT_BALUN_CAP_BIT_RX(n)   (((n)&0x7)<<29)     
#define RF_IF_BT_BALUN_CAP_BIT_RX_MASK (0x7<<29)           
#define RF_IF_BT_BALUN_CAP_BIT_RX_SHIFT (29)                

//fm_lna_rmx_rxflt_setting
#define RF_IF_FM_RXFLT_OP_IBIT(n)      (((n)&0x3)<<0)      
#define RF_IF_FM_RXFLT_OP_IBIT_MASK    (0x3<<0)            
#define RF_IF_FM_RXFLT_OP_IBIT_SHIFT   (0)                 

#define RF_IF_FM_RMX_LOBIAS_BIT(n)     (((n)&0x3)<<2)      
#define RF_IF_FM_RMX_LOBIAS_BIT_MASK   (0x3<<2)            
#define RF_IF_FM_RMX_LOBIAS_BIT_SHIFT  (2)                 

#define RF_IF_FM_RMX_HARM_REJ_EN       (1<<4)              

#define RF_IF_FM_LNA_IBIT(n)           (((n)&0x7)<<5)      
#define RF_IF_FM_LNA_IBIT_MASK         (0x7<<5)            
#define RF_IF_FM_LNA_IBIT_SHIFT        (5)                 

//rxflt_adc_setting
#define RF_IF_ADC_SKIP                 (1<<0)              

#define RF_IF_ADC_VREF_VBIT(n)         (((n)&0x3)<<1)      
#define RF_IF_ADC_VREF_VBIT_MASK       (0x3<<1)            
#define RF_IF_ADC_VREF_VBIT_SHIFT      (1)                 

#define RF_IF_ADC_VREF_RBIT(n)         (((n)&0x3)<<3)      
#define RF_IF_ADC_VREF_RBIT_MASK       (0x3<<3)            
#define RF_IF_ADC_VREF_RBIT_SHIFT      (3)                 

#define RF_IF_ADC_DELAY_BIT(n)         (((n)&0xF)<<5)      
#define RF_IF_ADC_DELAY_BIT_MASK       (0xF<<5)            
#define RF_IF_ADC_DELAY_BIT_SHIFT      (5)                 

#define RF_IF_ADC_CLK_DIV2             (1<<9)              

#define RF_IF_ADC_CLK_EDGE_SEL         (1<<10)             

#define RF_IF_ADC_CLK_SEL_REG(n)       (((n)&0x3)<<11)     
#define RF_IF_ADC_CLK_SEL_REG_MASK     (0x3<<11)           
#define RF_IF_ADC_CLK_SEL_REG_SHIFT    (11)                

#define RF_IF_ADC_CLK_SEL_DR           (1<<13)             

#define RF_IF_ADC_CLK_XTAL_EN_REG      (1<<14)             

#define RF_IF_ADC_CLK_XTAL_EN_DR       (1<<15)             

#define RF_IF_RXFLT_IQSWAP             (1<<16)             

#define RF_IF_RXFLT_OP_DRIVE_BIT(n)    (((n)&0x7)<<17)     
#define RF_IF_RXFLT_OP_DRIVE_BIT_MASK  (0x7<<17)           
#define RF_IF_RXFLT_OP_DRIVE_BIT_SHIFT (17)                

#define RF_IF_RXFLT_CAP_BIT(n)         (((n)&0xF)<<20)     
#define RF_IF_RXFLT_CAP_BIT_MASK       (0xF<<20)           
#define RF_IF_RXFLT_CAP_BIT_SHIFT      (20)                

#define RF_IF_RXFLT_FM_BP_MODE(n)      (((n)&0x3)<<24)     
#define RF_IF_RXFLT_FM_BP_MODE_MASK    (0x3<<24)           
#define RF_IF_RXFLT_FM_BP_MODE_SHIFT   (24)                

#define RF_IF_RXFLT_BT_BP_MODE(n)      (((n)&0x3)<<26)     
#define RF_IF_RXFLT_BT_BP_MODE_MASK    (0x3<<26)           
#define RF_IF_RXFLT_BT_BP_MODE_SHIFT   (26)                

#define RF_IF_RXFLT_FM_MODE_REG        (1<<28)             

#define RF_IF_RXFLT_FM_MODE_DR         (1<<29)             

#define RF_IF_RXFLT_RSTN_REG           (1<<30)             

#define RF_IF_RXFLT_RSTN_DR            (1<<31)             

//bt_bbdac_setting
#define RF_IF_BT_BBDAC_VTR_SEL         (1<<0)              

#define RF_IF_BT_BBDAC_CLK_EDGE_SEL    (1<<1)              

#define RF_IF_BT_BBDAC_VLOW_BIT(n)     (((n)&0x7)<<2)      
#define RF_IF_BT_BBDAC_VLOW_BIT_MASK   (0x7<<2)            
#define RF_IF_BT_BBDAC_VLOW_BIT_SHIFT  (2)                 

//bt_padrv_tmx_setting
#define RF_IF_BT_TMX_REG_BIT(n)        (((n)&0x7)<<0)      
#define RF_IF_BT_TMX_REG_BIT_MASK      (0x7<<0)            
#define RF_IF_BT_TMX_REG_BIT_SHIFT     (0)                 

#define RF_IF_BT_TMX_BBTEST_EN         (1<<3)              

#define RF_IF_BT_TMX_PLLTEST_EN        (1<<4)              

#define RF_IF_BT_TMX_IBIT(n)           (((n)&0x3)<<9)      
#define RF_IF_BT_TMX_IBIT_MASK         (0x3<<9)            
#define RF_IF_BT_TMX_IBIT_SHIFT        (9)                 

#define RF_IF_BT_PADRV_IBIT(n)         (((n)&0x3F)<<16)    
#define RF_IF_BT_PADRV_IBIT_MASK       (0x3F<<16)          
#define RF_IF_BT_PADRV_IBIT_SHIFT      (16)                

#define RF_IF_BT_DELAY_PADRV(n)        (((n)&0xFF)<<22)    
#define RF_IF_BT_DELAY_PADRV_MASK      (0xFF<<22)          
#define RF_IF_BT_DELAY_PADRV_SHIFT     (22)                

//fm_dsp_setting
#define RF_IF_FM_DSP_RESETN_REG        (1<<0)              

#define RF_IF_FM_DSP_RESETN_DR         (1<<1)              

#define RF_IF_FM_DSP_RESETN_DELAY(n)   (((n)&0x3)<<2)      
#define RF_IF_FM_DSP_RESETN_DELAY_MASK (0x3<<2)            
#define RF_IF_FM_DSP_RESETN_DELAY_SHIFT (2)                 

//vco_setting
#define RF_IF_VCO_DIV2_BIAS_BIT(n)     (((n)&0x7)<<0)      
#define RF_IF_VCO_DIV2_BIAS_BIT_MASK   (0x7<<0)            
#define RF_IF_VCO_DIV2_BIAS_BIT_SHIFT  (0)                 

#define RF_IF_VCO_BUF_BIAS_BIT(n)      (((n)&0x3)<<3)      
#define RF_IF_VCO_BUF_BIAS_BIT_MASK    (0x3<<3)            
#define RF_IF_VCO_BUF_BIAS_BIT_SHIFT   (3)                 

#define RF_IF_VCO_BUF_IBIT(n)          (((n)&0xF)<<5)      
#define RF_IF_VCO_BUF_IBIT_MASK        (0xF<<5)            
#define RF_IF_VCO_BUF_IBIT_SHIFT       (5)                 

#define RF_IF_VCO_REG_BYPASS           (1<<9)              

//rfpll_setting0
#define RF_IF_RFPLL_DIV_FM_ADCLK_REG(n) (((n)&0x1F)<<0)     
#define RF_IF_RFPLL_DIV_FM_ADCLK_REG_MASK (0x1F<<0)           
#define RF_IF_RFPLL_DIV_FM_ADCLK_REG_SHIFT (0)                 

#define RF_IF_RFPLL_DIV_FM_ADCLK_DR    (1<<5)              

#define RF_IF_RFPLL_DIV_FM_REG(n)      (((n)&0xF)<<6)      
#define RF_IF_RFPLL_DIV_FM_REG_MASK    (0xF<<6)            
#define RF_IF_RFPLL_DIV_FM_REG_SHIFT   (6)                 

#define RF_IF_RFPLL_DIV_FM_DR          (1<<10)             

#define RF_IF_RFPLL_DVDD_R_BIT(n)      (((n)&0xF)<<13)     
#define RF_IF_RFPLL_DVDD_R_BIT_MASK    (0xF<<13)           
#define RF_IF_RFPLL_DVDD_R_BIT_SHIFT   (13)                

#define RF_IF_RFPLL_BYPASS_NOTCH       (1<<17)             

#define RF_IF_RFPLL_PRESC_REG_BIT(n)   (((n)&0xF)<<18)     
#define RF_IF_RFPLL_PRESC_REG_BIT_MASK (0xF<<18)           
#define RF_IF_RFPLL_PRESC_REG_BIT_SHIFT (18)                

#define RF_IF_RFPLL_REFMULTI2_EN       (1<<22)             

#define RF_IF_RESET_RFPLL_LOCK_DELAY(n) (((n)&0x3)<<23)     
#define RF_IF_RESET_RFPLL_LOCK_DELAY_MASK (0x3<<23)           
#define RF_IF_RESET_RFPLL_LOCK_DELAY_SHIFT (23)                

#define RF_IF_RFPLL_CP_R_BIT_RX(n)     (((n)&0x3)<<25)     
#define RF_IF_RFPLL_CP_R_BIT_RX_MASK   (0x3<<25)           
#define RF_IF_RFPLL_CP_R_BIT_RX_SHIFT  (25)                

#define RF_IF_RFPLL_CP_R_BIT_TX(n)     (((n)&0x3)<<27)     
#define RF_IF_RFPLL_CP_R_BIT_TX_MASK   (0x3<<27)           
#define RF_IF_RFPLL_CP_R_BIT_TX_SHIFT  (27)                

//rfpll_setting1
#define RF_IF_RFPLL_CP_BIT_TX(n)       (((n)&0x3F)<<0)     
#define RF_IF_RFPLL_CP_BIT_TX_MASK     (0x3F<<0)           
#define RF_IF_RFPLL_CP_BIT_TX_SHIFT    (0)                 

#define RF_IF_RFPLL_GAIN_BIT_TX(n)     (((n)&0x7)<<6)      
#define RF_IF_RFPLL_GAIN_BIT_TX_MASK   (0x7<<6)            
#define RF_IF_RFPLL_GAIN_BIT_TX_SHIFT  (6)                 

#define RF_IF_MDLL_DIV_TX(n)           (((n)&0xF)<<12)     
#define RF_IF_MDLL_DIV_TX_MASK         (0xF<<12)           
#define RF_IF_MDLL_DIV_TX_SHIFT        (12)                

#define RF_IF_RFPLL_CP_BIT_RX(n)       (((n)&0x3F)<<16)    
#define RF_IF_RFPLL_CP_BIT_RX_MASK     (0x3F<<16)          
#define RF_IF_RFPLL_CP_BIT_RX_SHIFT    (16)                

#define RF_IF_RFPLL_GAIN_BIT_RX(n)     (((n)&0x7)<<22)     
#define RF_IF_RFPLL_GAIN_BIT_RX_MASK   (0x7<<22)           
#define RF_IF_RFPLL_GAIN_BIT_RX_SHIFT  (22)                

#define RF_IF_RFPLL_PRESC_REG_RC(n)    (((n)&0x7)<<25)     
#define RF_IF_RFPLL_PRESC_REG_RC_MASK  (0x7<<25)           
#define RF_IF_RFPLL_PRESC_REG_RC_SHIFT (25)                

#define RF_IF_MDLL_DIV_RX(n)           (((n)&0xF)<<28)     
#define RF_IF_MDLL_DIV_RX_MASK         (0xF<<28)           
#define RF_IF_MDLL_DIV_RX_SHIFT        (28)                

//rfpll_setting2
#define RF_IF_RFPLL_PFD_RES_BIT_TX(n)  (((n)&0x3F)<<0)     
#define RF_IF_RFPLL_PFD_RES_BIT_TX_MASK (0x3F<<0)           
#define RF_IF_RFPLL_PFD_RES_BIT_TX_SHIFT (0)                 

#define RF_IF_RFPLL_LPF_GAIN_BIT_TX(n) (((n)&0x1F)<<6)     
#define RF_IF_RFPLL_LPF_GAIN_BIT_TX_MASK (0x1F<<6)           
#define RF_IF_RFPLL_LPF_GAIN_BIT_TX_SHIFT (6)                 

#define RF_IF_RFPLL_R_BIT_TX(n)        (((n)&0x1F)<<11)    
#define RF_IF_RFPLL_R_BIT_TX_MASK      (0x1F<<11)          
#define RF_IF_RFPLL_R_BIT_TX_SHIFT     (11)                

#define RF_IF_RFPLL_PFD_RES_BIT_RX(n)  (((n)&0x3F)<<16)    
#define RF_IF_RFPLL_PFD_RES_BIT_RX_MASK (0x3F<<16)          
#define RF_IF_RFPLL_PFD_RES_BIT_RX_SHIFT (16)                

#define RF_IF_RFPLL_LPF_GAIN_BIT_RX(n) (((n)&0x1F)<<22)    
#define RF_IF_RFPLL_LPF_GAIN_BIT_RX_MASK (0x1F<<22)          
#define RF_IF_RFPLL_LPF_GAIN_BIT_RX_SHIFT (22)                

#define RF_IF_RFPLL_R_BIT_RX(n)        (((n)&0x1F)<<27)    
#define RF_IF_RFPLL_R_BIT_RX_MASK      (0x1F<<27)          
#define RF_IF_RFPLL_R_BIT_RX_SHIFT     (27)                

//rfpll_status
#define RF_IF_RFPLL_LOCK_DET           (1<<0)              

#define RF_IF_RFPLL_LOCK_FLAG          (1<<1)              

//adpll_setting0
#define RF_IF_ADPLL_CLK_TEST_EN        (1<<0)              

#define RF_IF_ADPLL_SDM_CLK_TEST_EN    (1<<1)              

#define RF_IF_ADPLL_PCON_MODE          (1<<2)              

#define RF_IF_ADPLL_REFMULTI2_EN       (1<<3)              

#define RF_IF_ADPLL_CP_R2_BIT(n)       (((n)&0x7)<<4)      
#define RF_IF_ADPLL_CP_R2_BIT_MASK     (0x7<<4)            
#define RF_IF_ADPLL_CP_R2_BIT_SHIFT    (4)                 

#define RF_IF_ADPLL_CP_C2_BIT(n)       (((n)&0x7)<<7)      
#define RF_IF_ADPLL_CP_C2_BIT_MASK     (0x7<<7)            
#define RF_IF_ADPLL_CP_C2_BIT_SHIFT    (7)                 

#define RF_IF_ADPLL_CP_BIAS_BIT(n)     (((n)&0x7)<<10)     
#define RF_IF_ADPLL_CP_BIAS_BIT_MASK   (0x7<<10)           
#define RF_IF_ADPLL_CP_BIAS_BIT_SHIFT  (10)                

#define RF_IF_ADPLL_DIGI_REG_ROUT_BIT(n) (((n)&0xF)<<13)     
#define RF_IF_ADPLL_DIGI_REG_ROUT_BIT_MASK (0xF<<13)           
#define RF_IF_ADPLL_DIGI_REG_ROUT_BIT_SHIFT (13)                

#define RF_IF_ADPLL_DIGI_REG_RES_BIT(n) (((n)&0x7)<<17)     
#define RF_IF_ADPLL_DIGI_REG_RES_BIT_MASK (0x7<<17)           
#define RF_IF_ADPLL_DIGI_REG_RES_BIT_SHIFT (17)                

#define RF_IF_ADPLL_DIGI_REG_RANGE_BIT(n) (((n)&0xF)<<20)     
#define RF_IF_ADPLL_DIGI_REG_RANGE_BIT_MASK (0xF<<20)           
#define RF_IF_ADPLL_DIGI_REG_RANGE_BIT_SHIFT (20)                

#define RF_IF_ADPLL_VREG_BIT(n)        (((n)&0xF)<<24)     
#define RF_IF_ADPLL_VREG_BIT_MASK      (0xF<<24)           
#define RF_IF_ADPLL_VREG_BIT_SHIFT     (24)                

#define RF_IF_ADPLL_RSTN_REG           (1<<28)             

#define RF_IF_ADPLL_RSTN_DR            (1<<29)             

#define RF_IF_PU_ADPLL_REG             (1<<30)             

#define RF_IF_PU_ADPLL_DR              (1<<31)             

//adpll_setting1
#define RF_IF_RESET_ADPLL_LOCK_DELAY(n) (((n)&0x3)<<0)      
#define RF_IF_RESET_ADPLL_LOCK_DELAY_MASK (0x3<<0)            
#define RF_IF_RESET_ADPLL_LOCK_DELAY_SHIFT (0)                 

#define RF_IF_ADPLL_VCO_LOW_TEST       (1<<2)              

#define RF_IF_ADPLL_VCO_HIGH_TEST      (1<<3)              

#define RF_IF_ADPLL_FM_SEL             (1<<4)              

#define RF_IF_ADPLL_CPU_SEL            (1<<5)              

#define RF_IF_ADPLL_BT_SEL             (1<<6)              

#define RF_IF_ADPLL_CLK_FM_EN          (1<<7)              

#define RF_IF_ADPLL_CLK_CPU_EN         (1<<8)              

#define RF_IF_ADPLL_CLK_BT_EN          (1<<9)              

#define RF_IF_USBC_PHY_CLK_DIV(n)      (((n)&0x3)<<16)     
#define RF_IF_USBC_PHY_CLK_DIV_DIV_1   (((0)&0x3)<<16)     
#define RF_IF_USBC_PHY_CLK_DIV_DIV_2   (((1)&0x3)<<16)     
#define RF_IF_USBC_PHY_CLK_DIV_DIV_3   (((2)&0x3)<<16)     
#define RF_IF_USBC_PHY_CLK_DIV_DIV_4   (((3)&0x3)<<16)     
#define RF_IF_USBC_PHY_CLK_DIV_MASK    (0x3<<16)           
#define RF_IF_USBC_PHY_CLK_DIV_SHIFT   (16)                

#define RF_IF_USBC_PHY_CLK_LD_CFG      (1<<18)             

#define RF_IF_SYS_CLK_SEL_FAST         (1<<19)             
#define RF_IF_SYS_CLK_SEL_FAST_SLOW    (1<<19)             
#define RF_IF_SYS_CLK_SEL_FAST_FAST    (1<<19)             

#define RF_IF_SYS_FAST_CLK_SEL(n)      (((n)&0x3)<<20)     
#define RF_IF_SYS_FAST_CLK_SEL_XTAL_26M (((0)&0x3)<<20)     
#define RF_IF_SYS_FAST_CLK_SEL_XTAL_39M (((1)&0x3)<<20)     
#define RF_IF_SYS_FAST_CLK_SEL_XTAL_52M (((2)&0x3)<<20)     
#define RF_IF_SYS_FAST_CLK_SEL_SYS_PLL_DIV_CLK (((3)&0x3)<<20)     
#define RF_IF_SYS_FAST_CLK_SEL_MASK    (0x3<<20)           
#define RF_IF_SYS_FAST_CLK_SEL_SHIFT   (20)                

#define RF_IF_SYS_PLL_CLK_DIV(n)       (((n)&0xF)<<22)     
#define RF_IF_SYS_PLL_CLK_DIV_MASK     (0xF<<22)           
#define RF_IF_SYS_PLL_CLK_DIV_SHIFT    (22)                

#define RF_IF_SYS_PLL_CLK_LD_CFG       (1<<26)             

#define RF_IF_HCLK_PCLK_DIV(n)         (((n)&0x7)<<27)     
#define RF_IF_HCLK_PCLK_DIV_DIV_1      (((0)&0x7)<<27)     
#define RF_IF_HCLK_PCLK_DIV_DIV_2      (((1)&0x7)<<27)     
#define RF_IF_HCLK_PCLK_DIV_DIV_4      (((2)&0x7)<<27)     
#define RF_IF_HCLK_PCLK_DIV_DIV_8      (((3)&0x7)<<27)     
#define RF_IF_HCLK_PCLK_DIV_DIV_16     (((4)&0x7)<<27)     
#define RF_IF_HCLK_PCLK_DIV_MASK       (0x7<<27)           
#define RF_IF_HCLK_PCLK_DIV_SHIFT      (27)                

#define RF_IF_HCLK_PCLK_LD_CFG         (1<<30)             

#define RF_IF_SYS_PLL_CLK_SRC_SEL      (1<<31)             
#define RF_IF_SYS_PLL_CLK_SRC_SEL_ADPLL (1<<31)             
#define RF_IF_SYS_PLL_CLK_SRC_SEL_AUPLL (1<<31)             


//adpll_status
#define RF_IF_ADPLL_LOCK_DET           (1<<0)              

#define RF_IF_ADPLL_LOCK_FLAG          (1<<1)              

//rfpll_sdm_setting0
#define RF_IF_RFPLL_SDM_DELAY_SEL(n)   (((n)&0xF)<<0)      
#define RF_IF_RFPLL_SDM_DELAY_SEL_MASK (0xF<<0)            
#define RF_IF_RFPLL_SDM_DELAY_SEL_SHIFT (0)                 

#define RF_IF_RFPLL_SDM_DITHER_BYPASS  (1<<4)              

#define RF_IF_RFPLL_SDM_INT_DEC_SEL(n) (((n)&0x3)<<5)      
#define RF_IF_RFPLL_SDM_INT_DEC_SEL_MASK (0x3<<5)            
#define RF_IF_RFPLL_SDM_INT_DEC_SEL_SHIFT (5)                 

#define RF_IF_RFPLL_SDM_CLK_EDGE       (1<<7)              

#define RF_IF_RFPLL_SDM_RESETN_REG     (1<<8)              

#define RF_IF_RFPLL_SDM_RESETN_DR      (1<<9)              

#define RF_IF_RESET_RFPLL_SDM_DELAY(n) (((n)&0x3)<<10)     
#define RF_IF_RESET_RFPLL_SDM_DELAY_MASK (0x3<<10)           
#define RF_IF_RESET_RFPLL_SDM_DELAY_SHIFT (10)                

#define RF_IF_RFPLL_SDM_CLK_SEL_1      (1<<12)             

#define RF_IF_RFPLL_SDM_CLK_SEL_0      (1<<13)             

#define RF_IF_RFPLL_DIV_DR             (1<<14)             

//rfpll_sdm_setting1
#define RF_IF_RFPLL_DIV_REG(n)         (((n)&0x7FFFFFFF)<<0)
#define RF_IF_RFPLL_DIV_REG_MASK       (0x7FFFFFFF<<0)     
#define RF_IF_RFPLL_DIV_REG_SHIFT      (0)                 

//adpll_sdm_setting0
#define RF_IF_ADPLL_SDM_REFDIV2_EN     (1<<0)              

#define RF_IF_ADPLL_SDM_DITHER_BYPASS  (1<<1)              

#define RF_IF_ADPLL_SDM_INT_DEC_SEL(n) (((n)&0x7)<<2)      
#define RF_IF_ADPLL_SDM_INT_DEC_SEL_MASK (0x7<<2)            
#define RF_IF_ADPLL_SDM_INT_DEC_SEL_SHIFT (2)                 

#define RF_IF_ADPLL_SDM_CLK_FBC_INV    (1<<5)              

#define RF_IF_ADPLL_SDM_RESETN_REG     (1<<6)              

#define RF_IF_ADPLL_SDM_RESETN_DR      (1<<7)              

#define RF_IF_RESET_ADPLL_SDM_DELAY(n) (((n)&0x3)<<8)      
#define RF_IF_RESET_ADPLL_SDM_DELAY_1US (((0)&0x3)<<8)      
#define RF_IF_RESET_ADPLL_SDM_DELAY_2US (((1)&0x3)<<8)      
#define RF_IF_RESET_ADPLL_SDM_DELAY_8US (((2)&0x3)<<8)      
#define RF_IF_RESET_ADPLL_SDM_DELAY_16US (((3)&0x3)<<8)      
#define RF_IF_RESET_ADPLL_SDM_DELAY_MASK (0x3<<8)            
#define RF_IF_RESET_ADPLL_SDM_DELAY_SHIFT (8)                 

#define RF_IF_ADPLL_SDM_CLK_SEL_1      (1<<10)             

#define RF_IF_ADPLL_SDM_CLK_SEL_0      (1<<11)             

#define RF_IF_ADPLL_SDM_FREQ_DR        (1<<12)             

//adpll_sdm_setting1
#define RF_IF_ADPLL_SDM_FREQ_REG(n)    (((n)&0xFFFFFFFF)<<0)
#define RF_IF_ADPLL_SDM_FREQ_REG_MASK  (0xFFFFFFFF<<0)     
#define RF_IF_ADPLL_SDM_FREQ_REG_SHIFT (0)                 

//dc_cal_setting0
#define RF_IF_DC_OFFSET_INIT_DELAY(n)  (((n)&0x3)<<0)      
#define RF_IF_DC_OFFSET_INIT_DELAY_MASK (0x3<<0)            
#define RF_IF_DC_OFFSET_INIT_DELAY_SHIFT (0)                 

#define RF_IF_DC_CAL_CNT(n)            (((n)&0xF)<<2)      
#define RF_IF_DC_CAL_CNT_MASK          (0xF<<2)            
#define RF_IF_DC_CAL_CNT_SHIFT         (2)                 

#define RF_IF_DC_CAL_IQSWAP            (1<<6)              

#define RF_IF_DC_CAL_POLARITY          (1<<7)              

#define RF_IF_DC_CAL_MODE(n)           (((n)&0x3)<<8)      
#define RF_IF_DC_CAL_MODE_MASK         (0x3<<8)            
#define RF_IF_DC_CAL_MODE_SHIFT        (8)                 

#define RF_IF_DC_CAL_CLK_EDGE          (1<<10)             

#define RF_IF_FM_DC_TABLE_FULL_MODE    (1<<11)             

#define RF_IF_BT_DC_TABLE_FULL_MODE    (1<<12)             

#define RF_IF_RXFLT_CALCLK_EDGE_SEL    (1<<13)             

#define RF_IF_RXFLT_CAL_MODE           (1<<14)             

#define RF_IF_RXFLT_OFFSET_RANGE_BIT(n) (((n)&0x7)<<15)     
#define RF_IF_RXFLT_OFFSET_RANGE_BIT_MASK (0x7<<15)           
#define RF_IF_RXFLT_OFFSET_RANGE_BIT_SHIFT (15)                

#define RF_IF_RXFLT_OFFSET_BIT_DR      (1<<18)             

//dc_cal_setting1
#define RF_IF_RXFLT_OFFSET_Q_BIT_REG(n) (((n)&0xFF)<<0)     
#define RF_IF_RXFLT_OFFSET_Q_BIT_REG_MASK (0xFF<<0)           
#define RF_IF_RXFLT_OFFSET_Q_BIT_REG_SHIFT (0)                 

#define RF_IF_RXFLT_OFFSET_I_BIT_REG(n) (((n)&0xFF)<<8)     
#define RF_IF_RXFLT_OFFSET_I_BIT_REG_MASK (0xFF<<8)           
#define RF_IF_RXFLT_OFFSET_I_BIT_REG_SHIFT (8)                 

//dc_cal_status
#define RF_IF_RXFLT_OFFSET_Q_BIT(n)    (((n)&0xFF)<<0)     
#define RF_IF_RXFLT_OFFSET_Q_BIT_MASK  (0xFF<<0)           
#define RF_IF_RXFLT_OFFSET_Q_BIT_SHIFT (0)                 

#define RF_IF_RXFLT_OFFSET_I_BIT(n)    (((n)&0xFF)<<8)     
#define RF_IF_RXFLT_OFFSET_I_BIT_MASK  (0xFF<<8)           
#define RF_IF_RXFLT_OFFSET_I_BIT_SHIFT (8)                 

//vco_cal_setting
#define RF_IF_VCO_CAL_POLARITY         (1<<0)              

#define RF_IF_VCO_CAL_INIT_DELAY(n)    (((n)&0x3)<<1)      
#define RF_IF_VCO_CAL_INIT_DELAY_MASK  (0x3<<1)            
#define RF_IF_VCO_CAL_INIT_DELAY_SHIFT (1)                 

#define RF_IF_VCO_CAL_CNT(n)           (((n)&0x3)<<3)      
#define RF_IF_VCO_CAL_CNT_MASK         (0x3<<3)            
#define RF_IF_VCO_CAL_CNT_SHIFT        (3)                 

#define RF_IF_VCO_CAL_MODE             (1<<5)              

#define RF_IF_VCO_CAL_CLK_EDGE         (1<<6)              

#define RF_IF_VCO_PKD_CLK_EDGE_SEL     (1<<7)              

#define RF_IF_VCO_PKD_REF_BIT(n)       (((n)&0x7)<<8)      
#define RF_IF_VCO_PKD_REF_BIT_MASK     (0x7<<8)            
#define RF_IF_VCO_PKD_REF_BIT_SHIFT    (8)                 

#define RF_IF_VCO_IBIT_REG(n)          (((n)&0xF)<<11)     
#define RF_IF_VCO_IBIT_REG_MASK        (0xF<<11)           
#define RF_IF_VCO_IBIT_REG_SHIFT       (11)                

#define RF_IF_VCO_IBIT_DR              (1<<15)             

//rfpll_cal_setting0
#define RF_IF_RFPLL_INIT_DELAY(n)      (((n)&0x7)<<0)      
#define RF_IF_RFPLL_INIT_DELAY_INIT_DELAY_LOOP_0 (((0)&0x7)<<0)      
#define RF_IF_RFPLL_INIT_DELAY_INIT_DELAY_LOOP_1 (((1)&0x7)<<0)      
#define RF_IF_RFPLL_INIT_DELAY_INIT_DELAY_LOOP_2 (((2)&0x7)<<0)      
#define RF_IF_RFPLL_INIT_DELAY_INIT_DELAY_LOOP_3 (((3)&0x7)<<0)      
#define RF_IF_RFPLL_INIT_DELAY_INIT_DELAY_LOOP_4 (((4)&0x7)<<0)      
#define RF_IF_RFPLL_INIT_DELAY_INIT_DELAY_LOOP_5 (((5)&0x7)<<0)      
#define RF_IF_RFPLL_INIT_DELAY_INIT_DELAY_LOOP_6 (((6)&0x7)<<0)      
#define RF_IF_RFPLL_INIT_DELAY_INIT_DELAY_LOOP_7 (((7)&0x7)<<0)      
#define RF_IF_RFPLL_INIT_DELAY_MASK    (0x7<<0)            
#define RF_IF_RFPLL_INIT_DELAY_SHIFT   (0)                 

#define RF_IF_RFPLL_CAL_CNT_SEL(n)     (((n)&0x7)<<3)      
#define RF_IF_RFPLL_CAL_CNT_SEL_EACH_CNT_TIME_0 (((0)&0x7)<<3)      
#define RF_IF_RFPLL_CAL_CNT_SEL_EACH_CNT_TIME_1 (((1)&0x7)<<3)      
#define RF_IF_RFPLL_CAL_CNT_SEL_EACH_CNT_TIME_2 (((2)&0x7)<<3)      
#define RF_IF_RFPLL_CAL_CNT_SEL_EACH_CNT_TIME_3 (((3)&0x7)<<3)      
#define RF_IF_RFPLL_CAL_CNT_SEL_EACH_CNT_TIME_4 (((4)&0x7)<<3)      
#define RF_IF_RFPLL_CAL_CNT_SEL_MASK   (0x7<<3)            
#define RF_IF_RFPLL_CAL_CNT_SEL_SHIFT  (3)                 

#define RF_IF_RFPLL_CAL_OPT            (1<<6)              

#define RF_IF_RFPLL_VCO_BIT_HOLD_TIME(n) (((n)&0x7)<<7)      
#define RF_IF_RFPLL_VCO_BIT_HOLD_TIME_VCO_BIT_HOLD_TIME_0 (((0)&0x7)<<7)      
#define RF_IF_RFPLL_VCO_BIT_HOLD_TIME_VCO_BIT_HOLD_TIME_1 (((1)&0x7)<<7)      
#define RF_IF_RFPLL_VCO_BIT_HOLD_TIME_VCO_BIT_HOLD_TIME_2 (((2)&0x7)<<7)      
#define RF_IF_RFPLL_VCO_BIT_HOLD_TIME_VCO_BIT_HOLD_TIME_3 (((3)&0x7)<<7)      
#define RF_IF_RFPLL_VCO_BIT_HOLD_TIME_VCO_BIT_HOLD_TIME_4 (((4)&0x7)<<7)      
#define RF_IF_RFPLL_VCO_BIT_HOLD_TIME_VCO_BIT_HOLD_TIME_5 (((5)&0x7)<<7)      
#define RF_IF_RFPLL_VCO_BIT_HOLD_TIME_VCO_BIT_HOLD_TIME_6 (((6)&0x7)<<7)      
#define RF_IF_RFPLL_VCO_BIT_HOLD_TIME_VCO_BIT_HOLD_TIME_7 (((7)&0x7)<<7)      
#define RF_IF_RFPLL_VCO_BIT_HOLD_TIME_MASK (0x7<<7)            
#define RF_IF_RFPLL_VCO_BIT_HOLD_TIME_SHIFT (7)                 

#define RF_IF_RFPLL_CNT_ENABLE_POLARITY (1<<10)             

#define RF_IF_RFPLL_CAL_FREQ_DR        (1<<11)             

#define RF_IF_VCO_BAND_REG(n)          (((n)&0x3FF)<<12)   
#define RF_IF_VCO_BAND_REG_MASK        (0x3FF<<12)         
#define RF_IF_VCO_BAND_REG_SHIFT       (12)                

#define RF_IF_VCO_BAND_DR              (1<<22)             

#define RF_IF_RFPLL_OPEN_EN            (1<<23)             

#define RF_IF_RFPLL_CAL_BIT(n)         (((n)&0x3)<<24)     
#define RF_IF_RFPLL_CAL_BIT_LOWEST     (((00)&0x3)<<24)    
#define RF_IF_RFPLL_CAL_BIT_MEDIAL_01     (((01)&0x3)<<24)    
#define RF_IF_RFPLL_CAL_BIT_MEDIAL_10     (((10)&0x3)<<24)    
#define RF_IF_RFPLL_CAL_BIT_HIGHEST    (((11)&0x3)<<24)    
#define RF_IF_RFPLL_CAL_BIT_MASK       (0x3<<24)           
#define RF_IF_RFPLL_CAL_BIT_SHIFT      (24)                

#define RF_IF_RFPLL_CAL_CLK_SEL        (1<<26)             

//rfpll_cal_setting1
#define RF_IF_RFPLL_CAL_FREQ_REG(n)    (((n)&0xFFFF)<<0)   
#define RF_IF_RFPLL_CAL_FREQ_REG_MASK  (0xFFFF<<0)         
#define RF_IF_RFPLL_CAL_FREQ_REG_SHIFT (0)                 

//cal_dr_setting
#define RF_IF_SELF_CAL_READY_REG       (1<<0)              

#define RF_IF_SELF_CAL_READY_DR        (1<<1)              

#define RF_IF_RFPLL_CAL_RESETN_REG     (1<<2)              

#define RF_IF_RFPLL_CAL_RESETN_DR      (1<<3)              

#define RF_IF_VCO_CAL_RESETN_REG       (1<<4)              

#define RF_IF_VCO_CAL_RESETN_DR        (1<<5)              

#define RF_IF_BT_DC_CAL_FSM_RESETN_REG (1<<6)              

#define RF_IF_BT_DC_CAL_FSM_RESETN_DR  (1<<7)              

#define RF_IF_FM_DC_CAL_FSM_RESETN_REG (1<<8)              

#define RF_IF_FM_DC_CAL_FSM_RESETN_DR  (1<<9)              

//cal_status
#define RF_IF_BT_SELF_CAL_READY        (1<<0)              

#define RF_IF_FM_SELF_CAL_READY        (1<<1)              

#define RF_IF_DC_CAL_READY             (1<<2)              

#define RF_IF_RFPLL_CAL_READY          (1<<3)              

#define RF_IF_VCO_CAL_READY            (1<<4)              

#define RF_IF_BT_DC_CAL_FSM_READY      (1<<5)              

#define RF_IF_FM_DC_CAL_FSM_READY      (1<<6)              

//power_dr
#define RF_IF_PU_RFPLL_FM_ADCLK_DR     (1<<1)              

#define RF_IF_PU_RFPLL_FMCLK_DR        (1<<2)              

#define RF_IF_PU_RFPLL_PRESC_DR        (1<<3)              

#define RF_IF_PU_RFPLL_DIGI_DR         (1<<4)              

#define RF_IF_PU_VCO_PKD_DR            (1<<5)              

#define RF_IF_PU_LO_RX_DR              (1<<6)              

#define RF_IF_PU_LO_TX_DR              (1<<7)              

#define RF_IF_PU_VCO_DR                (1<<8)              

#define RF_IF_PU_BT_TMX_DR             (1<<9)              

#define RF_IF_PU_BT_PADRV_DR           (1<<10)             

#define RF_IF_PU_BT_BBDAC_DR           (1<<11)             

#define RF_IF_PU_ADC_DR                (1<<12)             

#define RF_IF_PU_RXFLT_DR              (1<<13)             

#define RF_IF_PU_BT_RMX_DR             (1<<14)             

#define RF_IF_PU_BT_LNA_DR             (1<<15)             

#define RF_IF_PU_FM_RMX_DR             (1<<16)             

#define RF_IF_PU_FM_LNA_DR             (1<<17)             

#define RF_IF_PU_RF_IVREF_DR           (1<<18)             

//power_reg
#define RF_IF_PU_RFPLL_FM_ADCLK_REG    (1<<1)              

#define RF_IF_PU_RFPLL_FMCLK_REG       (1<<2)              

#define RF_IF_PU_RFPLL_PRESC_REG       (1<<3)              

#define RF_IF_PU_RFPLL_DIGI_REG        (1<<4)              

#define RF_IF_PU_VCO_PKD_REG           (1<<5)              

#define RF_IF_PU_LO_RX_REG             (1<<6)              

#define RF_IF_PU_LO_TX_REG             (1<<7)              

#define RF_IF_PU_VCO_REG               (1<<8)              

#define RF_IF_PU_BT_TMX_REG            (1<<9)              

#define RF_IF_PU_BT_PADRV_REG          (1<<10)             

#define RF_IF_PU_BT_BBDAC_REG          (1<<11)             

#define RF_IF_PU_ADC_REG               (1<<12)             

#define RF_IF_PU_RXFLT_REG             (1<<13)             

#define RF_IF_PU_BT_RMX_REG            (1<<14)             

#define RF_IF_PU_BT_LNA_REG            (1<<15)             

#define RF_IF_PU_FM_RMX_REG            (1<<16)             

#define RF_IF_PU_FM_LNA_REG            (1<<17)             

#define RF_IF_PU_RF_IVREF_REG          (1<<18)             

#define RF_IF_PU_TBUF_REG              (1<<19)             

#define RF_IF_PU_RF_IOBUF_REG          (1<<20)             

//power_status
#define RF_IF_PU_ADPLL                 (1<<0)              

#define RF_IF_PU_RFPLL_FM_ADCLK        (1<<1)              

#define RF_IF_PU_RFPLL_FMCLK           (1<<2)              

#define RF_IF_PU_RFPLL_PRESC           (1<<3)              

#define RF_IF_PU_RFPLL_DIGI            (1<<4)              

#define RF_IF_PU_VCO_PKD               (1<<5)              

#define RF_IF_PU_LO_RX                 (1<<6)              

#define RF_IF_PU_LO_TX                 (1<<7)              

#define RF_IF_PU_VCO                   (1<<8)              

#define RF_IF_PU_BT_TMX                (1<<9)              

#define RF_IF_PU_BT_PADRV              (1<<10)             

#define RF_IF_PU_BT_BBDAC              (1<<11)             

#define RF_IF_PU_ADC                   (1<<12)             

#define RF_IF_PU_RXFLT                 (1<<13)             

#define RF_IF_PU_BT_RMX                (1<<14)             

#define RF_IF_PU_BT_LNA                (1<<15)             

#define RF_IF_PU_FM_RMX                (1<<16)             

#define RF_IF_PU_FM_LNA                (1<<17)             

#define RF_IF_PU_RF_IVREF              (1<<18)             

#define RF_IF_PU_TBUF                  (1<<19)             

#define RF_IF_PU_RF_IOBUF              (1<<20)             

//bt_gain_table_0
#define RF_IF_BT_RXFLT_GAIN2_1(n)      (((n)&0x3)<<0)      
#define RF_IF_BT_RXFLT_GAIN2_1_MASK    (0x3<<0)            
#define RF_IF_BT_RXFLT_GAIN2_1_SHIFT   (0)                 

#define RF_IF_BT_RXFLT_GAIN1_1(n)      (((n)&0x3)<<2)      
#define RF_IF_BT_RXFLT_GAIN1_1_MASK    (0x3<<2)            
#define RF_IF_BT_RXFLT_GAIN1_1_SHIFT   (2)                 

#define RF_IF_BT_RMX_GAIN_1(n)         (((n)&0xF)<<4)      
#define RF_IF_BT_RMX_GAIN_1_MASK       (0xF<<4)            
#define RF_IF_BT_RMX_GAIN_1_SHIFT      (4)                 

#define RF_IF_BT_LNA_GAIN2_1(n)        (((n)&0x3)<<8)      
#define RF_IF_BT_LNA_GAIN2_1_MASK      (0x3<<8)            
#define RF_IF_BT_LNA_GAIN2_1_SHIFT     (8)                 

#define RF_IF_BT_LNA_GAIN1_1(n)        (((n)&0xF)<<10)     
#define RF_IF_BT_LNA_GAIN1_1_MASK      (0xF<<10)           
#define RF_IF_BT_LNA_GAIN1_1_SHIFT     (10)                

#define RF_IF_BT_RXFLT_GAIN2_0(n)      (((n)&0x3)<<16)     
#define RF_IF_BT_RXFLT_GAIN2_0_MASK    (0x3<<16)           
#define RF_IF_BT_RXFLT_GAIN2_0_SHIFT   (16)                

#define RF_IF_BT_RXFLT_GAIN1_0(n)      (((n)&0x3)<<18)     
#define RF_IF_BT_RXFLT_GAIN1_0_MASK    (0x3<<18)           
#define RF_IF_BT_RXFLT_GAIN1_0_SHIFT   (18)                

#define RF_IF_BT_RMX_GAIN_0(n)         (((n)&0xF)<<20)     
#define RF_IF_BT_RMX_GAIN_0_MASK       (0xF<<20)           
#define RF_IF_BT_RMX_GAIN_0_SHIFT      (20)                

#define RF_IF_BT_LNA_GAIN2_0(n)        (((n)&0x3)<<24)     
#define RF_IF_BT_LNA_GAIN2_0_MASK      (0x3<<24)           
#define RF_IF_BT_LNA_GAIN2_0_SHIFT     (24)                

#define RF_IF_BT_LNA_GAIN1_0(n)        (((n)&0xF)<<26)     
#define RF_IF_BT_LNA_GAIN1_0_MASK      (0xF<<26)           
#define RF_IF_BT_LNA_GAIN1_0_SHIFT     (26)                

#define RF_IF_BT_AGC_GAIN_DR           (1<<30)             

//bt_gain_table_1
#define RF_IF_BT_RXFLT_GAIN2_3(n)      (((n)&0x3)<<0)      
#define RF_IF_BT_RXFLT_GAIN2_3_MASK    (0x3<<0)            
#define RF_IF_BT_RXFLT_GAIN2_3_SHIFT   (0)                 

#define RF_IF_BT_RXFLT_GAIN1_3(n)      (((n)&0x3)<<2)      
#define RF_IF_BT_RXFLT_GAIN1_3_MASK    (0x3<<2)            
#define RF_IF_BT_RXFLT_GAIN1_3_SHIFT   (2)                 

#define RF_IF_BT_RMX_GAIN_3(n)         (((n)&0xF)<<4)      
#define RF_IF_BT_RMX_GAIN_3_MASK       (0xF<<4)            
#define RF_IF_BT_RMX_GAIN_3_SHIFT      (4)                 

#define RF_IF_BT_LNA_GAIN2_3(n)        (((n)&0x3)<<8)      
#define RF_IF_BT_LNA_GAIN2_3_MASK      (0x3<<8)            
#define RF_IF_BT_LNA_GAIN2_3_SHIFT     (8)                 

#define RF_IF_BT_LNA_GAIN1_3(n)        (((n)&0xF)<<10)     
#define RF_IF_BT_LNA_GAIN1_3_MASK      (0xF<<10)           
#define RF_IF_BT_LNA_GAIN1_3_SHIFT     (10)                

#define RF_IF_BT_RXFLT_GAIN2_2(n)      (((n)&0x3)<<16)     
#define RF_IF_BT_RXFLT_GAIN2_2_MASK    (0x3<<16)           
#define RF_IF_BT_RXFLT_GAIN2_2_SHIFT   (16)                

#define RF_IF_BT_RXFLT_GAIN1_2(n)      (((n)&0x3)<<18)     
#define RF_IF_BT_RXFLT_GAIN1_2_MASK    (0x3<<18)           
#define RF_IF_BT_RXFLT_GAIN1_2_SHIFT   (18)                

#define RF_IF_BT_RMX_GAIN_2(n)         (((n)&0xF)<<20)     
#define RF_IF_BT_RMX_GAIN_2_MASK       (0xF<<20)           
#define RF_IF_BT_RMX_GAIN_2_SHIFT      (20)                

#define RF_IF_BT_LNA_GAIN2_2(n)        (((n)&0x3)<<24)     
#define RF_IF_BT_LNA_GAIN2_2_MASK      (0x3<<24)           
#define RF_IF_BT_LNA_GAIN2_2_SHIFT     (24)                

#define RF_IF_BT_LNA_GAIN1_2(n)        (((n)&0xF)<<26)     
#define RF_IF_BT_LNA_GAIN1_2_MASK      (0xF<<26)           
#define RF_IF_BT_LNA_GAIN1_2_SHIFT     (26)                

//bt_gain_table_2
#define RF_IF_BT_RXFLT_GAIN2_5(n)      (((n)&0x3)<<0)      
#define RF_IF_BT_RXFLT_GAIN2_5_MASK    (0x3<<0)            
#define RF_IF_BT_RXFLT_GAIN2_5_SHIFT   (0)                 

#define RF_IF_BT_RXFLT_GAIN1_5(n)      (((n)&0x3)<<2)      
#define RF_IF_BT_RXFLT_GAIN1_5_MASK    (0x3<<2)            
#define RF_IF_BT_RXFLT_GAIN1_5_SHIFT   (2)                 

#define RF_IF_BT_RMX_GAIN_5(n)         (((n)&0xF)<<4)      
#define RF_IF_BT_RMX_GAIN_5_MASK       (0xF<<4)            
#define RF_IF_BT_RMX_GAIN_5_SHIFT      (4)                 

#define RF_IF_BT_LNA_GAIN2_5(n)        (((n)&0x3)<<8)      
#define RF_IF_BT_LNA_GAIN2_5_MASK      (0x3<<8)            
#define RF_IF_BT_LNA_GAIN2_5_SHIFT     (8)                 

#define RF_IF_BT_LNA_GAIN1_5(n)        (((n)&0xF)<<10)     
#define RF_IF_BT_LNA_GAIN1_5_MASK      (0xF<<10)           
#define RF_IF_BT_LNA_GAIN1_5_SHIFT     (10)                

#define RF_IF_BT_RXFLT_GAIN2_4(n)      (((n)&0x3)<<16)     
#define RF_IF_BT_RXFLT_GAIN2_4_MASK    (0x3<<16)           
#define RF_IF_BT_RXFLT_GAIN2_4_SHIFT   (16)                

#define RF_IF_BT_RXFLT_GAIN1_4(n)      (((n)&0x3)<<18)     
#define RF_IF_BT_RXFLT_GAIN1_4_MASK    (0x3<<18)           
#define RF_IF_BT_RXFLT_GAIN1_4_SHIFT   (18)                

#define RF_IF_BT_RMX_GAIN_4(n)         (((n)&0xF)<<20)     
#define RF_IF_BT_RMX_GAIN_4_MASK       (0xF<<20)           
#define RF_IF_BT_RMX_GAIN_4_SHIFT      (20)                

#define RF_IF_BT_LNA_GAIN2_4(n)        (((n)&0x3)<<24)     
#define RF_IF_BT_LNA_GAIN2_4_MASK      (0x3<<24)           
#define RF_IF_BT_LNA_GAIN2_4_SHIFT     (24)                

#define RF_IF_BT_LNA_GAIN1_4(n)        (((n)&0xF)<<26)     
#define RF_IF_BT_LNA_GAIN1_4_MASK      (0xF<<26)           
#define RF_IF_BT_LNA_GAIN1_4_SHIFT     (26)                

//bt_gain_table_3
#define RF_IF_BT_RXFLT_GAIN2_7(n)      (((n)&0x3)<<0)      
#define RF_IF_BT_RXFLT_GAIN2_7_MASK    (0x3<<0)            
#define RF_IF_BT_RXFLT_GAIN2_7_SHIFT   (0)                 

#define RF_IF_BT_RXFLT_GAIN1_7(n)      (((n)&0x3)<<2)      
#define RF_IF_BT_RXFLT_GAIN1_7_MASK    (0x3<<2)            
#define RF_IF_BT_RXFLT_GAIN1_7_SHIFT   (2)                 

#define RF_IF_BT_RMX_GAIN_7(n)         (((n)&0xF)<<4)      
#define RF_IF_BT_RMX_GAIN_7_MASK       (0xF<<4)            
#define RF_IF_BT_RMX_GAIN_7_SHIFT      (4)                 

#define RF_IF_BT_LNA_GAIN2_7(n)        (((n)&0x3)<<8)      
#define RF_IF_BT_LNA_GAIN2_7_MASK      (0x3<<8)            
#define RF_IF_BT_LNA_GAIN2_7_SHIFT     (8)                 

#define RF_IF_BT_LNA_GAIN1_7(n)        (((n)&0xF)<<10)     
#define RF_IF_BT_LNA_GAIN1_7_MASK      (0xF<<10)           
#define RF_IF_BT_LNA_GAIN1_7_SHIFT     (10)                

#define RF_IF_BT_RXFLT_GAIN2_6(n)      (((n)&0x3)<<16)     
#define RF_IF_BT_RXFLT_GAIN2_6_MASK    (0x3<<16)           
#define RF_IF_BT_RXFLT_GAIN2_6_SHIFT   (16)                

#define RF_IF_BT_RXFLT_GAIN1_6(n)      (((n)&0x3)<<18)     
#define RF_IF_BT_RXFLT_GAIN1_6_MASK    (0x3<<18)           
#define RF_IF_BT_RXFLT_GAIN1_6_SHIFT   (18)                

#define RF_IF_BT_RMX_GAIN_6(n)         (((n)&0xF)<<20)     
#define RF_IF_BT_RMX_GAIN_6_MASK       (0xF<<20)           
#define RF_IF_BT_RMX_GAIN_6_SHIFT      (20)                

#define RF_IF_BT_LNA_GAIN2_6(n)        (((n)&0x3)<<24)     
#define RF_IF_BT_LNA_GAIN2_6_MASK      (0x3<<24)           
#define RF_IF_BT_LNA_GAIN2_6_SHIFT     (24)                

#define RF_IF_BT_LNA_GAIN1_6(n)        (((n)&0xF)<<26)     
#define RF_IF_BT_LNA_GAIN1_6_MASK      (0xF<<26)           
#define RF_IF_BT_LNA_GAIN1_6_SHIFT     (26)                

//bt_gain_table_4
#define RF_IF_BT_RXFLT_GAIN2_9(n)      (((n)&0x3)<<0)      
#define RF_IF_BT_RXFLT_GAIN2_9_MASK    (0x3<<0)            
#define RF_IF_BT_RXFLT_GAIN2_9_SHIFT   (0)                 

#define RF_IF_BT_RXFLT_GAIN1_9(n)      (((n)&0x3)<<2)      
#define RF_IF_BT_RXFLT_GAIN1_9_MASK    (0x3<<2)            
#define RF_IF_BT_RXFLT_GAIN1_9_SHIFT   (2)                 

#define RF_IF_BT_RMX_GAIN_9(n)         (((n)&0xF)<<4)      
#define RF_IF_BT_RMX_GAIN_9_MASK       (0xF<<4)            
#define RF_IF_BT_RMX_GAIN_9_SHIFT      (4)                 

#define RF_IF_BT_LNA_GAIN2_9(n)        (((n)&0x3)<<8)      
#define RF_IF_BT_LNA_GAIN2_9_MASK      (0x3<<8)            
#define RF_IF_BT_LNA_GAIN2_9_SHIFT     (8)                 

#define RF_IF_BT_LNA_GAIN1_9(n)        (((n)&0xF)<<10)     
#define RF_IF_BT_LNA_GAIN1_9_MASK      (0xF<<10)           
#define RF_IF_BT_LNA_GAIN1_9_SHIFT     (10)                

#define RF_IF_BT_RXFLT_GAIN2_8(n)      (((n)&0x3)<<16)     
#define RF_IF_BT_RXFLT_GAIN2_8_MASK    (0x3<<16)           
#define RF_IF_BT_RXFLT_GAIN2_8_SHIFT   (16)                

#define RF_IF_BT_RXFLT_GAIN1_8(n)      (((n)&0x3)<<18)     
#define RF_IF_BT_RXFLT_GAIN1_8_MASK    (0x3<<18)           
#define RF_IF_BT_RXFLT_GAIN1_8_SHIFT   (18)                

#define RF_IF_BT_RMX_GAIN_8(n)         (((n)&0xF)<<20)     
#define RF_IF_BT_RMX_GAIN_8_MASK       (0xF<<20)           
#define RF_IF_BT_RMX_GAIN_8_SHIFT      (20)                

#define RF_IF_BT_LNA_GAIN2_8(n)        (((n)&0x3)<<24)     
#define RF_IF_BT_LNA_GAIN2_8_MASK      (0x3<<24)           
#define RF_IF_BT_LNA_GAIN2_8_SHIFT     (24)                

#define RF_IF_BT_LNA_GAIN1_8(n)        (((n)&0xF)<<26)     
#define RF_IF_BT_LNA_GAIN1_8_MASK      (0xF<<26)           
#define RF_IF_BT_LNA_GAIN1_8_SHIFT     (26)                

//bt_gain_table_5
#define RF_IF_BT_RXFLT_GAIN2_B(n)      (((n)&0x3)<<0)      
#define RF_IF_BT_RXFLT_GAIN2_B_MASK    (0x3<<0)            
#define RF_IF_BT_RXFLT_GAIN2_B_SHIFT   (0)                 

#define RF_IF_BT_RXFLT_GAIN1_B(n)      (((n)&0x3)<<2)      
#define RF_IF_BT_RXFLT_GAIN1_B_MASK    (0x3<<2)            
#define RF_IF_BT_RXFLT_GAIN1_B_SHIFT   (2)                 

#define RF_IF_BT_RMX_GAIN_B(n)         (((n)&0xF)<<4)      
#define RF_IF_BT_RMX_GAIN_B_MASK       (0xF<<4)            
#define RF_IF_BT_RMX_GAIN_B_SHIFT      (4)                 

#define RF_IF_BT_LNA_GAIN2_B(n)        (((n)&0x3)<<8)      
#define RF_IF_BT_LNA_GAIN2_B_MASK      (0x3<<8)            
#define RF_IF_BT_LNA_GAIN2_B_SHIFT     (8)                 

#define RF_IF_BT_LNA_GAIN1_B(n)        (((n)&0xF)<<10)     
#define RF_IF_BT_LNA_GAIN1_B_MASK      (0xF<<10)           
#define RF_IF_BT_LNA_GAIN1_B_SHIFT     (10)                

#define RF_IF_BT_RXFLT_GAIN2_A(n)      (((n)&0x3)<<16)     
#define RF_IF_BT_RXFLT_GAIN2_A_MASK    (0x3<<16)           
#define RF_IF_BT_RXFLT_GAIN2_A_SHIFT   (16)                

#define RF_IF_BT_RXFLT_GAIN1_A(n)      (((n)&0x3)<<18)     
#define RF_IF_BT_RXFLT_GAIN1_A_MASK    (0x3<<18)           
#define RF_IF_BT_RXFLT_GAIN1_A_SHIFT   (18)                

#define RF_IF_BT_RMX_GAIN_A(n)         (((n)&0xF)<<20)     
#define RF_IF_BT_RMX_GAIN_A_MASK       (0xF<<20)           
#define RF_IF_BT_RMX_GAIN_A_SHIFT      (20)                

#define RF_IF_BT_LNA_GAIN2_A(n)        (((n)&0x3)<<24)     
#define RF_IF_BT_LNA_GAIN2_A_MASK      (0x3<<24)           
#define RF_IF_BT_LNA_GAIN2_A_SHIFT     (24)                

#define RF_IF_BT_LNA_GAIN1_A(n)        (((n)&0xF)<<26)     
#define RF_IF_BT_LNA_GAIN1_A_MASK      (0xF<<26)           
#define RF_IF_BT_LNA_GAIN1_A_SHIFT     (26)                

//bt_gain_table_6
#define RF_IF_BT_RXFLT_GAIN2_D(n)      (((n)&0x3)<<0)      
#define RF_IF_BT_RXFLT_GAIN2_D_MASK    (0x3<<0)            
#define RF_IF_BT_RXFLT_GAIN2_D_SHIFT   (0)                 

#define RF_IF_BT_RXFLT_GAIN1_D(n)      (((n)&0x3)<<2)      
#define RF_IF_BT_RXFLT_GAIN1_D_MASK    (0x3<<2)            
#define RF_IF_BT_RXFLT_GAIN1_D_SHIFT   (2)                 

#define RF_IF_BT_RMX_GAIN_D(n)         (((n)&0xF)<<4)      
#define RF_IF_BT_RMX_GAIN_D_MASK       (0xF<<4)            
#define RF_IF_BT_RMX_GAIN_D_SHIFT      (4)                 

#define RF_IF_BT_LNA_GAIN2_D(n)        (((n)&0x3)<<8)      
#define RF_IF_BT_LNA_GAIN2_D_MASK      (0x3<<8)            
#define RF_IF_BT_LNA_GAIN2_D_SHIFT     (8)                 

#define RF_IF_BT_LNA_GAIN1_D(n)        (((n)&0xF)<<10)     
#define RF_IF_BT_LNA_GAIN1_D_MASK      (0xF<<10)           
#define RF_IF_BT_LNA_GAIN1_D_SHIFT     (10)                

#define RF_IF_BT_RXFLT_GAIN2_C(n)      (((n)&0x3)<<16)     
#define RF_IF_BT_RXFLT_GAIN2_C_MASK    (0x3<<16)           
#define RF_IF_BT_RXFLT_GAIN2_C_SHIFT   (16)                

#define RF_IF_BT_RXFLT_GAIN1_C(n)      (((n)&0x3)<<18)     
#define RF_IF_BT_RXFLT_GAIN1_C_MASK    (0x3<<18)           
#define RF_IF_BT_RXFLT_GAIN1_C_SHIFT   (18)                

#define RF_IF_BT_RMX_GAIN_C(n)         (((n)&0xF)<<20)     
#define RF_IF_BT_RMX_GAIN_C_MASK       (0xF<<20)           
#define RF_IF_BT_RMX_GAIN_C_SHIFT      (20)                

#define RF_IF_BT_LNA_GAIN2_C(n)        (((n)&0x3)<<24)     
#define RF_IF_BT_LNA_GAIN2_C_MASK      (0x3<<24)           
#define RF_IF_BT_LNA_GAIN2_C_SHIFT     (24)                

#define RF_IF_BT_LNA_GAIN1_C(n)        (((n)&0xF)<<26)     
#define RF_IF_BT_LNA_GAIN1_C_MASK      (0xF<<26)           
#define RF_IF_BT_LNA_GAIN1_C_SHIFT     (26)                

//bt_gain_table_7
#define RF_IF_BT_RXFLT_GAIN2_F(n)      (((n)&0x3)<<0)      
#define RF_IF_BT_RXFLT_GAIN2_F_MASK    (0x3<<0)            
#define RF_IF_BT_RXFLT_GAIN2_F_SHIFT   (0)                 

#define RF_IF_BT_RXFLT_GAIN1_F(n)      (((n)&0x3)<<2)      
#define RF_IF_BT_RXFLT_GAIN1_F_MASK    (0x3<<2)            
#define RF_IF_BT_RXFLT_GAIN1_F_SHIFT   (2)                 

#define RF_IF_BT_RMX_GAIN_F(n)         (((n)&0xF)<<4)      
#define RF_IF_BT_RMX_GAIN_F_MASK       (0xF<<4)            
#define RF_IF_BT_RMX_GAIN_F_SHIFT      (4)                 

#define RF_IF_BT_LNA_GAIN2_F(n)        (((n)&0x3)<<8)      
#define RF_IF_BT_LNA_GAIN2_F_MASK      (0x3<<8)            
#define RF_IF_BT_LNA_GAIN2_F_SHIFT     (8)                 

#define RF_IF_BT_LNA_GAIN1_F(n)        (((n)&0xF)<<10)     
#define RF_IF_BT_LNA_GAIN1_F_MASK      (0xF<<10)           
#define RF_IF_BT_LNA_GAIN1_F_SHIFT     (10)                

#define RF_IF_BT_RXFLT_GAIN2_E(n)      (((n)&0x3)<<16)     
#define RF_IF_BT_RXFLT_GAIN2_E_MASK    (0x3<<16)           
#define RF_IF_BT_RXFLT_GAIN2_E_SHIFT   (16)                

#define RF_IF_BT_RXFLT_GAIN1_E(n)      (((n)&0x3)<<18)     
#define RF_IF_BT_RXFLT_GAIN1_E_MASK    (0x3<<18)           
#define RF_IF_BT_RXFLT_GAIN1_E_SHIFT   (18)                

#define RF_IF_BT_RMX_GAIN_E(n)         (((n)&0xF)<<20)     
#define RF_IF_BT_RMX_GAIN_E_MASK       (0xF<<20)           
#define RF_IF_BT_RMX_GAIN_E_SHIFT      (20)                

#define RF_IF_BT_LNA_GAIN2_E(n)        (((n)&0x3)<<24)     
#define RF_IF_BT_LNA_GAIN2_E_MASK      (0x3<<24)           
#define RF_IF_BT_LNA_GAIN2_E_SHIFT     (24)                

#define RF_IF_BT_LNA_GAIN1_E(n)        (((n)&0xF)<<26)     
#define RF_IF_BT_LNA_GAIN1_E_MASK      (0xF<<26)           
#define RF_IF_BT_LNA_GAIN1_E_SHIFT     (26)                

//bt_ibit_table_0
#define RF_IF_BT_LNA_IBIT2_3(n)        (((n)&0xF)<<0)      
#define RF_IF_BT_LNA_IBIT2_3_MASK      (0xF<<0)            
#define RF_IF_BT_LNA_IBIT2_3_SHIFT     (0)                 

#define RF_IF_BT_LNA_IBIT1_3(n)        (((n)&0x7)<<4)      
#define RF_IF_BT_LNA_IBIT1_3_MASK      (0x7<<4)            
#define RF_IF_BT_LNA_IBIT1_3_SHIFT     (4)                 

#define RF_IF_BT_LNA_IBIT2_2(n)        (((n)&0xF)<<8)      
#define RF_IF_BT_LNA_IBIT2_2_MASK      (0xF<<8)            
#define RF_IF_BT_LNA_IBIT2_2_SHIFT     (8)                 

#define RF_IF_BT_LNA_IBIT1_2(n)        (((n)&0x7)<<12)     
#define RF_IF_BT_LNA_IBIT1_2_MASK      (0x7<<12)           
#define RF_IF_BT_LNA_IBIT1_2_SHIFT     (12)                

#define RF_IF_BT_LNA_IBIT2_1(n)        (((n)&0xF)<<16)     
#define RF_IF_BT_LNA_IBIT2_1_MASK      (0xF<<16)           
#define RF_IF_BT_LNA_IBIT2_1_SHIFT     (16)                

#define RF_IF_BT_LNA_IBIT1_1(n)        (((n)&0x7)<<20)     
#define RF_IF_BT_LNA_IBIT1_1_MASK      (0x7<<20)           
#define RF_IF_BT_LNA_IBIT1_1_SHIFT     (20)                

#define RF_IF_BT_LNA_IBIT2_0(n)        (((n)&0xF)<<24)     
#define RF_IF_BT_LNA_IBIT2_0_MASK      (0xF<<24)           
#define RF_IF_BT_LNA_IBIT2_0_SHIFT     (24)                

#define RF_IF_BT_LNA_IBIT1_0(n)        (((n)&0x7)<<28)     
#define RF_IF_BT_LNA_IBIT1_0_MASK      (0x7<<28)           
#define RF_IF_BT_LNA_IBIT1_0_SHIFT     (28)                

//bt_ibit_table_1
#define RF_IF_BT_LNA_IBIT2_7(n)        (((n)&0xF)<<0)      
#define RF_IF_BT_LNA_IBIT2_7_MASK      (0xF<<0)            
#define RF_IF_BT_LNA_IBIT2_7_SHIFT     (0)                 

#define RF_IF_BT_LNA_IBIT1_7(n)        (((n)&0x7)<<4)      
#define RF_IF_BT_LNA_IBIT1_7_MASK      (0x7<<4)            
#define RF_IF_BT_LNA_IBIT1_7_SHIFT     (4)                 

#define RF_IF_BT_LNA_IBIT2_6(n)        (((n)&0xF)<<8)      
#define RF_IF_BT_LNA_IBIT2_6_MASK      (0xF<<8)            
#define RF_IF_BT_LNA_IBIT2_6_SHIFT     (8)                 

#define RF_IF_BT_LNA_IBIT1_6(n)        (((n)&0x7)<<12)     
#define RF_IF_BT_LNA_IBIT1_6_MASK      (0x7<<12)           
#define RF_IF_BT_LNA_IBIT1_6_SHIFT     (12)                

#define RF_IF_BT_LNA_IBIT2_5(n)        (((n)&0xF)<<16)     
#define RF_IF_BT_LNA_IBIT2_5_MASK      (0xF<<16)           
#define RF_IF_BT_LNA_IBIT2_5_SHIFT     (16)                

#define RF_IF_BT_LNA_IBIT1_5(n)        (((n)&0x7)<<20)     
#define RF_IF_BT_LNA_IBIT1_5_MASK      (0x7<<20)           
#define RF_IF_BT_LNA_IBIT1_5_SHIFT     (20)                

#define RF_IF_BT_LNA_IBIT2_4(n)        (((n)&0xF)<<24)     
#define RF_IF_BT_LNA_IBIT2_4_MASK      (0xF<<24)           
#define RF_IF_BT_LNA_IBIT2_4_SHIFT     (24)                

#define RF_IF_BT_LNA_IBIT1_4(n)        (((n)&0x7)<<28)     
#define RF_IF_BT_LNA_IBIT1_4_MASK      (0x7<<28)           
#define RF_IF_BT_LNA_IBIT1_4_SHIFT     (28)                

//bt_ibit_table_2
#define RF_IF_BT_LNA_IBIT2_B(n)        (((n)&0xF)<<0)      
#define RF_IF_BT_LNA_IBIT2_B_MASK      (0xF<<0)            
#define RF_IF_BT_LNA_IBIT2_B_SHIFT     (0)                 

#define RF_IF_BT_LNA_IBIT1_B(n)        (((n)&0x7)<<4)      
#define RF_IF_BT_LNA_IBIT1_B_MASK      (0x7<<4)            
#define RF_IF_BT_LNA_IBIT1_B_SHIFT     (4)                 

#define RF_IF_BT_LNA_IBIT2_A(n)        (((n)&0xF)<<8)      
#define RF_IF_BT_LNA_IBIT2_A_MASK      (0xF<<8)            
#define RF_IF_BT_LNA_IBIT2_A_SHIFT     (8)                 

#define RF_IF_BT_LNA_IBIT1_A(n)        (((n)&0x7)<<12)     
#define RF_IF_BT_LNA_IBIT1_A_MASK      (0x7<<12)           
#define RF_IF_BT_LNA_IBIT1_A_SHIFT     (12)                

#define RF_IF_BT_LNA_IBIT2_9(n)        (((n)&0xF)<<16)     
#define RF_IF_BT_LNA_IBIT2_9_MASK      (0xF<<16)           
#define RF_IF_BT_LNA_IBIT2_9_SHIFT     (16)                

#define RF_IF_BT_LNA_IBIT1_9(n)        (((n)&0x7)<<20)     
#define RF_IF_BT_LNA_IBIT1_9_MASK      (0x7<<20)           
#define RF_IF_BT_LNA_IBIT1_9_SHIFT     (20)                

#define RF_IF_BT_LNA_IBIT2_8(n)        (((n)&0xF)<<24)     
#define RF_IF_BT_LNA_IBIT2_8_MASK      (0xF<<24)           
#define RF_IF_BT_LNA_IBIT2_8_SHIFT     (24)                

#define RF_IF_BT_LNA_IBIT1_8(n)        (((n)&0x7)<<28)     
#define RF_IF_BT_LNA_IBIT1_8_MASK      (0x7<<28)           
#define RF_IF_BT_LNA_IBIT1_8_SHIFT     (28)                

//bt_ibit_table_3
#define RF_IF_BT_LNA_IBIT2_F(n)        (((n)&0xF)<<0)      
#define RF_IF_BT_LNA_IBIT2_F_MASK      (0xF<<0)            
#define RF_IF_BT_LNA_IBIT2_F_SHIFT     (0)                 

#define RF_IF_BT_LNA_IBIT1_F(n)        (((n)&0x7)<<4)      
#define RF_IF_BT_LNA_IBIT1_F_MASK      (0x7<<4)            
#define RF_IF_BT_LNA_IBIT1_F_SHIFT     (4)                 

#define RF_IF_BT_LNA_IBIT2_E(n)        (((n)&0xF)<<8)      
#define RF_IF_BT_LNA_IBIT2_E_MASK      (0xF<<8)            
#define RF_IF_BT_LNA_IBIT2_E_SHIFT     (8)                 

#define RF_IF_BT_LNA_IBIT1_E(n)        (((n)&0x7)<<12)     
#define RF_IF_BT_LNA_IBIT1_E_MASK      (0x7<<12)           
#define RF_IF_BT_LNA_IBIT1_E_SHIFT     (12)                

#define RF_IF_BT_LNA_IBIT2_D(n)        (((n)&0xF)<<16)     
#define RF_IF_BT_LNA_IBIT2_D_MASK      (0xF<<16)           
#define RF_IF_BT_LNA_IBIT2_D_SHIFT     (16)                

#define RF_IF_BT_LNA_IBIT1_D(n)        (((n)&0x7)<<20)     
#define RF_IF_BT_LNA_IBIT1_D_MASK      (0x7<<20)           
#define RF_IF_BT_LNA_IBIT1_D_SHIFT     (20)                

#define RF_IF_BT_LNA_IBIT2_C(n)        (((n)&0xF)<<24)     
#define RF_IF_BT_LNA_IBIT2_C_MASK      (0xF<<24)           
#define RF_IF_BT_LNA_IBIT2_C_SHIFT     (24)                

#define RF_IF_BT_LNA_IBIT1_C(n)        (((n)&0x7)<<28)     
#define RF_IF_BT_LNA_IBIT1_C_MASK      (0x7<<28)           
#define RF_IF_BT_LNA_IBIT1_C_SHIFT     (28)                

//bt_ibit_table_4
#define RF_IF_BT_RXFLT_OP_IBIT_F(n)    (((n)&0x3)<<0)      
#define RF_IF_BT_RXFLT_OP_IBIT_F_MASK  (0x3<<0)            
#define RF_IF_BT_RXFLT_OP_IBIT_F_SHIFT (0)                 

#define RF_IF_BT_RXFLT_OP_IBIT_E(n)    (((n)&0x3)<<2)      
#define RF_IF_BT_RXFLT_OP_IBIT_E_MASK  (0x3<<2)            
#define RF_IF_BT_RXFLT_OP_IBIT_E_SHIFT (2)                 

#define RF_IF_BT_RXFLT_OP_IBIT_D(n)    (((n)&0x3)<<4)      
#define RF_IF_BT_RXFLT_OP_IBIT_D_MASK  (0x3<<4)            
#define RF_IF_BT_RXFLT_OP_IBIT_D_SHIFT (4)                 

#define RF_IF_BT_RXFLT_OP_IBIT_C(n)    (((n)&0x3)<<6)      
#define RF_IF_BT_RXFLT_OP_IBIT_C_MASK  (0x3<<6)            
#define RF_IF_BT_RXFLT_OP_IBIT_C_SHIFT (6)                 

#define RF_IF_BT_RXFLT_OP_IBIT_B(n)    (((n)&0x3)<<8)      
#define RF_IF_BT_RXFLT_OP_IBIT_B_MASK  (0x3<<8)            
#define RF_IF_BT_RXFLT_OP_IBIT_B_SHIFT (8)                 

#define RF_IF_BT_RXFLT_OP_IBIT_A(n)    (((n)&0x3)<<10)     
#define RF_IF_BT_RXFLT_OP_IBIT_A_MASK  (0x3<<10)           
#define RF_IF_BT_RXFLT_OP_IBIT_A_SHIFT (10)                

#define RF_IF_BT_RXFLT_OP_IBIT_9(n)    (((n)&0x3)<<12)     
#define RF_IF_BT_RXFLT_OP_IBIT_9_MASK  (0x3<<12)           
#define RF_IF_BT_RXFLT_OP_IBIT_9_SHIFT (12)                

#define RF_IF_BT_RXFLT_OP_IBIT_8(n)    (((n)&0x3)<<14)     
#define RF_IF_BT_RXFLT_OP_IBIT_8_MASK  (0x3<<14)           
#define RF_IF_BT_RXFLT_OP_IBIT_8_SHIFT (14)                

#define RF_IF_BT_RXFLT_OP_IBIT_7(n)    (((n)&0x3)<<16)     
#define RF_IF_BT_RXFLT_OP_IBIT_7_MASK  (0x3<<16)           
#define RF_IF_BT_RXFLT_OP_IBIT_7_SHIFT (16)                

#define RF_IF_BT_RXFLT_OP_IBIT_6(n)    (((n)&0x3)<<18)     
#define RF_IF_BT_RXFLT_OP_IBIT_6_MASK  (0x3<<18)           
#define RF_IF_BT_RXFLT_OP_IBIT_6_SHIFT (18)                

#define RF_IF_BT_RXFLT_OP_IBIT_5(n)    (((n)&0x3)<<20)     
#define RF_IF_BT_RXFLT_OP_IBIT_5_MASK  (0x3<<20)           
#define RF_IF_BT_RXFLT_OP_IBIT_5_SHIFT (20)                

#define RF_IF_BT_RXFLT_OP_IBIT_4(n)    (((n)&0x3)<<22)     
#define RF_IF_BT_RXFLT_OP_IBIT_4_MASK  (0x3<<22)           
#define RF_IF_BT_RXFLT_OP_IBIT_4_SHIFT (22)                

#define RF_IF_BT_RXFLT_OP_IBIT_3(n)    (((n)&0x3)<<24)     
#define RF_IF_BT_RXFLT_OP_IBIT_3_MASK  (0x3<<24)           
#define RF_IF_BT_RXFLT_OP_IBIT_3_SHIFT (24)                

#define RF_IF_BT_RXFLT_OP_IBIT_2(n)    (((n)&0x3)<<26)     
#define RF_IF_BT_RXFLT_OP_IBIT_2_MASK  (0x3<<26)           
#define RF_IF_BT_RXFLT_OP_IBIT_2_SHIFT (26)                

#define RF_IF_BT_RXFLT_OP_IBIT_1(n)    (((n)&0x3)<<28)     
#define RF_IF_BT_RXFLT_OP_IBIT_1_MASK  (0x3<<28)           
#define RF_IF_BT_RXFLT_OP_IBIT_1_SHIFT (28)                

#define RF_IF_BT_RXFLT_OP_IBIT_0(n)    (((n)&0x3)<<30)     
#define RF_IF_BT_RXFLT_OP_IBIT_0_MASK  (0x3<<30)           
#define RF_IF_BT_RXFLT_OP_IBIT_0_SHIFT (30)                

//bt_padrv_tmx_gain_table_0
#define RF_IF_BT_PADRV_GAIN_3(n)       (((n)&0x7)<<0)      
#define RF_IF_BT_PADRV_GAIN_3_MASK     (0x7<<0)            
#define RF_IF_BT_PADRV_GAIN_3_SHIFT    (0)                 

#define RF_IF_BT_TMX_GAIN_3(n)         (((n)&0x7)<<3)      
#define RF_IF_BT_TMX_GAIN_3_MASK       (0x7<<3)            
#define RF_IF_BT_TMX_GAIN_3_SHIFT      (3)                 

#define RF_IF_BT_PADRV_GAIN_2(n)       (((n)&0x7)<<8)      
#define RF_IF_BT_PADRV_GAIN_2_MASK     (0x7<<8)            
#define RF_IF_BT_PADRV_GAIN_2_SHIFT    (8)                 

#define RF_IF_BT_TMX_GAIN_2(n)         (((n)&0x7)<<11)     
#define RF_IF_BT_TMX_GAIN_2_MASK       (0x7<<11)           
#define RF_IF_BT_TMX_GAIN_2_SHIFT      (11)                

#define RF_IF_BT_PADRV_GAIN_1(n)       (((n)&0x7)<<16)     
#define RF_IF_BT_PADRV_GAIN_1_MASK     (0x7<<16)           
#define RF_IF_BT_PADRV_GAIN_1_SHIFT    (16)                

#define RF_IF_BT_TMX_GAIN_1(n)         (((n)&0x7)<<19)     
#define RF_IF_BT_TMX_GAIN_1_MASK       (0x7<<19)           
#define RF_IF_BT_TMX_GAIN_1_SHIFT      (19)                

#define RF_IF_BT_PADRV_GAIN_0(n)       (((n)&0x7)<<24)     
#define RF_IF_BT_PADRV_GAIN_0_MASK     (0x7<<24)           
#define RF_IF_BT_PADRV_GAIN_0_SHIFT    (24)                

#define RF_IF_BT_TMX_GAIN_0(n)         (((n)&0x7)<<27)     
#define RF_IF_BT_TMX_GAIN_0_MASK       (0x7<<27)           
#define RF_IF_BT_TMX_GAIN_0_SHIFT      (27)                

//bt_padrv_tmx_gain_table_1
#define RF_IF_BT_PADRV_GAIN_7(n)       (((n)&0x7)<<0)      
#define RF_IF_BT_PADRV_GAIN_7_MASK     (0x7<<0)            
#define RF_IF_BT_PADRV_GAIN_7_SHIFT    (0)                 

#define RF_IF_BT_TMX_GAIN_7(n)         (((n)&0x7)<<3)      
#define RF_IF_BT_TMX_GAIN_7_MASK       (0x7<<3)            
#define RF_IF_BT_TMX_GAIN_7_SHIFT      (3)                 

#define RF_IF_BT_PADRV_GAIN_6(n)       (((n)&0x7)<<8)      
#define RF_IF_BT_PADRV_GAIN_6_MASK     (0x7<<8)            
#define RF_IF_BT_PADRV_GAIN_6_SHIFT    (8)                 

#define RF_IF_BT_TMX_GAIN_6(n)         (((n)&0x7)<<11)     
#define RF_IF_BT_TMX_GAIN_6_MASK       (0x7<<11)           
#define RF_IF_BT_TMX_GAIN_6_SHIFT      (11)                

#define RF_IF_BT_PADRV_GAIN_5(n)       (((n)&0x7)<<16)     
#define RF_IF_BT_PADRV_GAIN_5_MASK     (0x7<<16)           
#define RF_IF_BT_PADRV_GAIN_5_SHIFT    (16)                

#define RF_IF_BT_TMX_GAIN_5(n)         (((n)&0x7)<<19)     
#define RF_IF_BT_TMX_GAIN_5_MASK       (0x7<<19)           
#define RF_IF_BT_TMX_GAIN_5_SHIFT      (19)                

#define RF_IF_BT_PADRV_GAIN_4(n)       (((n)&0x7)<<24)     
#define RF_IF_BT_PADRV_GAIN_4_MASK     (0x7<<24)           
#define RF_IF_BT_PADRV_GAIN_4_SHIFT    (24)                

#define RF_IF_BT_TMX_GAIN_4(n)         (((n)&0x7)<<27)     
#define RF_IF_BT_TMX_GAIN_4_MASK       (0x7<<27)           
#define RF_IF_BT_TMX_GAIN_4_SHIFT      (27)                

//fm_lna_gain_table
#define RF_IF_FM_LNA_GAIN_BIT_F(n)     (((n)&0x3)<<0)      
#define RF_IF_FM_LNA_GAIN_BIT_F_MASK   (0x3<<0)            
#define RF_IF_FM_LNA_GAIN_BIT_F_SHIFT  (0)                 

#define RF_IF_FM_LNA_GAIN_BIT_E(n)     (((n)&0x3)<<2)      
#define RF_IF_FM_LNA_GAIN_BIT_E_MASK   (0x3<<2)            
#define RF_IF_FM_LNA_GAIN_BIT_E_SHIFT  (2)                 

#define RF_IF_FM_LNA_GAIN_BIT_D(n)     (((n)&0x3)<<4)      
#define RF_IF_FM_LNA_GAIN_BIT_D_MASK   (0x3<<4)            
#define RF_IF_FM_LNA_GAIN_BIT_D_SHIFT  (4)                 

#define RF_IF_FM_LNA_GAIN_BIT_C(n)     (((n)&0x3)<<6)      
#define RF_IF_FM_LNA_GAIN_BIT_C_MASK   (0x3<<6)            
#define RF_IF_FM_LNA_GAIN_BIT_C_SHIFT  (6)                 

#define RF_IF_FM_LNA_GAIN_BIT_B(n)     (((n)&0x3)<<8)      
#define RF_IF_FM_LNA_GAIN_BIT_B_MASK   (0x3<<8)            
#define RF_IF_FM_LNA_GAIN_BIT_B_SHIFT  (8)                 

#define RF_IF_FM_LNA_GAIN_BIT_A(n)     (((n)&0x3)<<10)     
#define RF_IF_FM_LNA_GAIN_BIT_A_MASK   (0x3<<10)           
#define RF_IF_FM_LNA_GAIN_BIT_A_SHIFT  (10)                

#define RF_IF_FM_LNA_GAIN_BIT_9(n)     (((n)&0x3)<<12)     
#define RF_IF_FM_LNA_GAIN_BIT_9_MASK   (0x3<<12)           
#define RF_IF_FM_LNA_GAIN_BIT_9_SHIFT  (12)                

#define RF_IF_FM_LNA_GAIN_BIT_8(n)     (((n)&0x3)<<14)     
#define RF_IF_FM_LNA_GAIN_BIT_8_MASK   (0x3<<14)           
#define RF_IF_FM_LNA_GAIN_BIT_8_SHIFT  (14)                

#define RF_IF_FM_LNA_GAIN_BIT_7(n)     (((n)&0x3)<<16)     
#define RF_IF_FM_LNA_GAIN_BIT_7_MASK   (0x3<<16)           
#define RF_IF_FM_LNA_GAIN_BIT_7_SHIFT  (16)                

#define RF_IF_FM_LNA_GAIN_BIT_6(n)     (((n)&0x3)<<18)     
#define RF_IF_FM_LNA_GAIN_BIT_6_MASK   (0x3<<18)           
#define RF_IF_FM_LNA_GAIN_BIT_6_SHIFT  (18)                

#define RF_IF_FM_LNA_GAIN_BIT_5(n)     (((n)&0x3)<<20)     
#define RF_IF_FM_LNA_GAIN_BIT_5_MASK   (0x3<<20)           
#define RF_IF_FM_LNA_GAIN_BIT_5_SHIFT  (20)                

#define RF_IF_FM_LNA_GAIN_BIT_4(n)     (((n)&0x3)<<22)     
#define RF_IF_FM_LNA_GAIN_BIT_4_MASK   (0x3<<22)           
#define RF_IF_FM_LNA_GAIN_BIT_4_SHIFT  (22)                

#define RF_IF_FM_LNA_GAIN_BIT_3(n)     (((n)&0x3)<<24)     
#define RF_IF_FM_LNA_GAIN_BIT_3_MASK   (0x3<<24)           
#define RF_IF_FM_LNA_GAIN_BIT_3_SHIFT  (24)                

#define RF_IF_FM_LNA_GAIN_BIT_2(n)     (((n)&0x3)<<26)     
#define RF_IF_FM_LNA_GAIN_BIT_2_MASK   (0x3<<26)           
#define RF_IF_FM_LNA_GAIN_BIT_2_SHIFT  (26)                

#define RF_IF_FM_LNA_GAIN_BIT_1(n)     (((n)&0x3)<<28)     
#define RF_IF_FM_LNA_GAIN_BIT_1_MASK   (0x3<<28)           
#define RF_IF_FM_LNA_GAIN_BIT_1_SHIFT  (28)                

#define RF_IF_FM_LNA_GAIN_BIT_0(n)     (((n)&0x3)<<30)     
#define RF_IF_FM_LNA_GAIN_BIT_0_MASK   (0x3<<30)           
#define RF_IF_FM_LNA_GAIN_BIT_0_SHIFT  (30)                

//fm_rmx_gain_table_0
#define RF_IF_FM_RMX_GAIN_BIT_7(n)     (((n)&0x7)<<0)      
#define RF_IF_FM_RMX_GAIN_BIT_7_MASK   (0x7<<0)            
#define RF_IF_FM_RMX_GAIN_BIT_7_SHIFT  (0)                 

#define RF_IF_FM_RMX_GAIN_BIT_6(n)     (((n)&0x7)<<4)      
#define RF_IF_FM_RMX_GAIN_BIT_6_MASK   (0x7<<4)            
#define RF_IF_FM_RMX_GAIN_BIT_6_SHIFT  (4)                 

#define RF_IF_FM_RMX_GAIN_BIT_5(n)     (((n)&0x7)<<8)      
#define RF_IF_FM_RMX_GAIN_BIT_5_MASK   (0x7<<8)            
#define RF_IF_FM_RMX_GAIN_BIT_5_SHIFT  (8)                 

#define RF_IF_FM_RMX_GAIN_BIT_4(n)     (((n)&0x7)<<12)     
#define RF_IF_FM_RMX_GAIN_BIT_4_MASK   (0x7<<12)           
#define RF_IF_FM_RMX_GAIN_BIT_4_SHIFT  (12)                

#define RF_IF_FM_RMX_GAIN_BIT_3(n)     (((n)&0x7)<<16)     
#define RF_IF_FM_RMX_GAIN_BIT_3_MASK   (0x7<<16)           
#define RF_IF_FM_RMX_GAIN_BIT_3_SHIFT  (16)                

#define RF_IF_FM_RMX_GAIN_BIT_2(n)     (((n)&0x7)<<20)     
#define RF_IF_FM_RMX_GAIN_BIT_2_MASK   (0x7<<20)           
#define RF_IF_FM_RMX_GAIN_BIT_2_SHIFT  (20)                

#define RF_IF_FM_RMX_GAIN_BIT_1(n)     (((n)&0x7)<<24)     
#define RF_IF_FM_RMX_GAIN_BIT_1_MASK   (0x7<<24)           
#define RF_IF_FM_RMX_GAIN_BIT_1_SHIFT  (24)                

#define RF_IF_FM_RMX_GAIN_BIT_0(n)     (((n)&0x7)<<28)     
#define RF_IF_FM_RMX_GAIN_BIT_0_MASK   (0x7<<28)           
#define RF_IF_FM_RMX_GAIN_BIT_0_SHIFT  (28)                

#define RF_IF_FM_AGC_GAIN_DR           (1<<31)             

//fm_rmx_gain_table_1
#define RF_IF_FM_RMX_GAIN_BIT_F(n)     (((n)&0x7)<<0)      
#define RF_IF_FM_RMX_GAIN_BIT_F_MASK   (0x7<<0)            
#define RF_IF_FM_RMX_GAIN_BIT_F_SHIFT  (0)                 

#define RF_IF_FM_RMX_GAIN_BIT_E(n)     (((n)&0x7)<<4)      
#define RF_IF_FM_RMX_GAIN_BIT_E_MASK   (0x7<<4)            
#define RF_IF_FM_RMX_GAIN_BIT_E_SHIFT  (4)                 

#define RF_IF_FM_RMX_GAIN_BIT_D(n)     (((n)&0x7)<<8)      
#define RF_IF_FM_RMX_GAIN_BIT_D_MASK   (0x7<<8)            
#define RF_IF_FM_RMX_GAIN_BIT_D_SHIFT  (8)                 

#define RF_IF_FM_RMX_GAIN_BIT_C(n)     (((n)&0x7)<<12)     
#define RF_IF_FM_RMX_GAIN_BIT_C_MASK   (0x7<<12)           
#define RF_IF_FM_RMX_GAIN_BIT_C_SHIFT  (12)                

#define RF_IF_FM_RMX_GAIN_BIT_B(n)     (((n)&0x7)<<16)     
#define RF_IF_FM_RMX_GAIN_BIT_B_MASK   (0x7<<16)           
#define RF_IF_FM_RMX_GAIN_BIT_B_SHIFT  (16)                

#define RF_IF_FM_RMX_GAIN_BIT_A(n)     (((n)&0x7)<<20)     
#define RF_IF_FM_RMX_GAIN_BIT_A_MASK   (0x7<<20)           
#define RF_IF_FM_RMX_GAIN_BIT_A_SHIFT  (20)                

#define RF_IF_FM_RMX_GAIN_BIT_9(n)     (((n)&0x7)<<24)     
#define RF_IF_FM_RMX_GAIN_BIT_9_MASK   (0x7<<24)           
#define RF_IF_FM_RMX_GAIN_BIT_9_SHIFT  (24)                

#define RF_IF_FM_RMX_GAIN_BIT_8(n)     (((n)&0x7)<<28)     
#define RF_IF_FM_RMX_GAIN_BIT_8_MASK   (0x7<<28)           
#define RF_IF_FM_RMX_GAIN_BIT_8_SHIFT  (28)                

//fm_rxflt_gain_table
#define RF_IF_FM_RXFLT_GAIN_BIT_F(n)   (((n)&0x3)<<0)      
#define RF_IF_FM_RXFLT_GAIN_BIT_F_MASK (0x3<<0)            
#define RF_IF_FM_RXFLT_GAIN_BIT_F_SHIFT (0)                 

#define RF_IF_FM_RXFLT_GAIN_BIT_E(n)   (((n)&0x3)<<2)      
#define RF_IF_FM_RXFLT_GAIN_BIT_E_MASK (0x3<<2)            
#define RF_IF_FM_RXFLT_GAIN_BIT_E_SHIFT (2)                 

#define RF_IF_FM_RXFLT_GAIN_BIT_D(n)   (((n)&0x3)<<4)      
#define RF_IF_FM_RXFLT_GAIN_BIT_D_MASK (0x3<<4)            
#define RF_IF_FM_RXFLT_GAIN_BIT_D_SHIFT (4)                 

#define RF_IF_FM_RXFLT_GAIN_BIT_C(n)   (((n)&0x3)<<6)      
#define RF_IF_FM_RXFLT_GAIN_BIT_C_MASK (0x3<<6)            
#define RF_IF_FM_RXFLT_GAIN_BIT_C_SHIFT (6)                 

#define RF_IF_FM_RXFLT_GAIN_BIT_B(n)   (((n)&0x3)<<8)      
#define RF_IF_FM_RXFLT_GAIN_BIT_B_MASK (0x3<<8)            
#define RF_IF_FM_RXFLT_GAIN_BIT_B_SHIFT (8)                 

#define RF_IF_FM_RXFLT_GAIN_BIT_A(n)   (((n)&0x3)<<10)     
#define RF_IF_FM_RXFLT_GAIN_BIT_A_MASK (0x3<<10)           
#define RF_IF_FM_RXFLT_GAIN_BIT_A_SHIFT (10)                

#define RF_IF_FM_RXFLT_GAIN_BIT_9(n)   (((n)&0x3)<<12)     
#define RF_IF_FM_RXFLT_GAIN_BIT_9_MASK (0x3<<12)           
#define RF_IF_FM_RXFLT_GAIN_BIT_9_SHIFT (12)                

#define RF_IF_FM_RXFLT_GAIN_BIT_8(n)   (((n)&0x3)<<14)     
#define RF_IF_FM_RXFLT_GAIN_BIT_8_MASK (0x3<<14)           
#define RF_IF_FM_RXFLT_GAIN_BIT_8_SHIFT (14)                

#define RF_IF_FM_RXFLT_GAIN_BIT_7(n)   (((n)&0x3)<<16)     
#define RF_IF_FM_RXFLT_GAIN_BIT_7_MASK (0x3<<16)           
#define RF_IF_FM_RXFLT_GAIN_BIT_7_SHIFT (16)                

#define RF_IF_FM_RXFLT_GAIN_BIT_6(n)   (((n)&0x3)<<18)     
#define RF_IF_FM_RXFLT_GAIN_BIT_6_MASK (0x3<<18)           
#define RF_IF_FM_RXFLT_GAIN_BIT_6_SHIFT (18)                

#define RF_IF_FM_RXFLT_GAIN_BIT_5(n)   (((n)&0x3)<<20)     
#define RF_IF_FM_RXFLT_GAIN_BIT_5_MASK (0x3<<20)           
#define RF_IF_FM_RXFLT_GAIN_BIT_5_SHIFT (20)                

#define RF_IF_FM_RXFLT_GAIN_BIT_4(n)   (((n)&0x3)<<22)     
#define RF_IF_FM_RXFLT_GAIN_BIT_4_MASK (0x3<<22)           
#define RF_IF_FM_RXFLT_GAIN_BIT_4_SHIFT (22)                

#define RF_IF_FM_RXFLT_GAIN_BIT_3(n)   (((n)&0x3)<<24)     
#define RF_IF_FM_RXFLT_GAIN_BIT_3_MASK (0x3<<24)           
#define RF_IF_FM_RXFLT_GAIN_BIT_3_SHIFT (24)                

#define RF_IF_FM_RXFLT_GAIN_BIT_2(n)   (((n)&0x3)<<26)     
#define RF_IF_FM_RXFLT_GAIN_BIT_2_MASK (0x3<<26)           
#define RF_IF_FM_RXFLT_GAIN_BIT_2_SHIFT (26)                

#define RF_IF_FM_RXFLT_GAIN_BIT_1(n)   (((n)&0x3)<<28)     
#define RF_IF_FM_RXFLT_GAIN_BIT_1_MASK (0x3<<28)           
#define RF_IF_FM_RXFLT_GAIN_BIT_1_SHIFT (28)                

#define RF_IF_FM_RXFLT_GAIN_BIT_0(n)   (((n)&0x3)<<30)     
#define RF_IF_FM_RXFLT_GAIN_BIT_0_MASK (0x3<<30)           
#define RF_IF_FM_RXFLT_GAIN_BIT_0_SHIFT (30)                

//test_buffer_setting
#define RF_IF_AUX_OUT_MODE             (1<<0)              

#define RF_IF_AUX_FLT_EN               (1<<1)              

#define RF_IF_TBUF_VTR_SEL             (1<<2)              

#define RF_IF_TBUF_OP_IBIT(n)          (((n)&0x3)<<3)      
#define RF_IF_TBUF_OP_IBIT_MASK        (0x3<<3)            
#define RF_IF_TBUF_OP_IBIT_SHIFT       (3)                 

#define RF_IF_TBUF_MUX_EN(n)           (((n)&0x3)<<5)      
#define RF_IF_TBUF_MUX_EN_MASK         (0x3<<5)            
#define RF_IF_TBUF_MUX_EN_SHIFT        (5)                 

#define RF_IF_TBUF_RANGE_BIT(n)        (((n)&0x3)<<7)      
#define RF_IF_TBUF_RANGE_BIT_MASK      (0x3<<7)            
#define RF_IF_TBUF_RANGE_BIT_SHIFT     (7)                 

#define RF_IF_TBUF_CM_BIT(n)           (((n)&0x3)<<9)      
#define RF_IF_TBUF_CM_BIT_MASK         (0x3<<9)            
#define RF_IF_TBUF_CM_BIT_SHIFT        (9)                 

#define RF_IF_TBUF_RSTN_REG            (1<<11)             

#define RF_IF_TBUF_RSTN_DR             (1<<12)             

//reserved_reg
#define RF_IF_ANA_RSVD(n)              (((n)&0xFFFF)<<0)   
#define RF_IF_ANA_RSVD_MASK            (0xFFFF<<0)         
#define RF_IF_ANA_RSVD_SHIFT           (0)                 

#define RF_IF_DIG_RSVD(n)              (((n)&0xFFFF)<<16)  
#define RF_IF_DIG_RSVD_MASK            (0xFFFF<<16)        
#define RF_IF_DIG_RSVD_SHIFT           (16)                

//channel_setting
#define RF_IF_BT_TMX_LOBIAS(n)         (((n)&0x1F)<<0)     
#define RF_IF_BT_TMX_LOBIAS_MASK       (0x1F<<0)           
#define RF_IF_BT_TMX_LOBIAS_SHIFT      (0)                 

#define RF_IF_BT_TMX_CAP_BIT(n)        (((n)&0xF)<<5)      
#define RF_IF_BT_TMX_CAP_BIT_MASK      (0xF<<5)            
#define RF_IF_BT_TMX_CAP_BIT_SHIFT     (5)                 

#define RF_IF_BT_RMX_LO_VCOM_BIT(n)    (((n)&0x3)<<9)      
#define RF_IF_BT_RMX_LO_VCOM_BIT_MASK  (0x3<<9)            
#define RF_IF_BT_RMX_LO_VCOM_BIT_SHIFT (9)                 

#define RF_IF_BT_LNA_CLOAD_BIT(n)      (((n)&0x7)<<11)     
#define RF_IF_BT_LNA_CLOAD_BIT_MASK    (0x7<<11)           
#define RF_IF_BT_LNA_CLOAD_BIT_SHIFT   (11)                

//reserved_in_reg
#define RF_IF_RF_RSVD_IN(n)            (((n)&0xFFFF)<<0)   
#define RF_IF_RF_RSVD_IN_MASK          (0xFFFF<<0)         
#define RF_IF_RF_RSVD_IN_SHIFT         (0)                 

//sys_clk_cfg
#define RF_IF_DIG_RSVD_2(n)            (((n)&0xFFFF)<<0)   
#define RF_IF_DIG_RSVD_2_MASK          (0xFFFF<<0)         
#define RF_IF_DIG_RSVD_2_SHIFT         (0)                 


#endif

#endif

