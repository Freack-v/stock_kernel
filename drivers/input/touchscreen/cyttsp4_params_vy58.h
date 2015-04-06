//*****************************************************************************
//*****************************************************************************
//  FILENAME: Driver.h
//  TrueTouch Host Emulator Version Information: 3.2.9, b3407
//  TrueTouch Firmware Version Information: @Gen44xFW@
//
//  DESCRIPTION: This file contains configuration values.
//-----------------------------------------------------------------------------
//  Copyright (c) Cypress Semiconductor 2012. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
//-----------------------------------------------------------------------------
/* Touchscreen Version Information */
static u8 ttconfig_fw_ver_vy58[] = {
	0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x11, 0xF2, 0x02, 0x3D, 0x14, 0x91, 0x00, 0x00
};

/* Touchscreen Parameters */
static const uint8_t cyttsp4_param_regs_vy58[] = {
/*	Value	Name	*/
	0x20, 0x04,  /* CONFIG_DATA_SIZE */
	0x20, 0x04,  /* CONFIG_DATA_MAX_SIZE */
	0x39, 0x00, 0x00, 0x00,  /* SDK_CTRL_CFG_SIZE */
	0x00, 0x0A,  /* CONFIG_VER */
	0x03,  /* PANEL_ID_CONFIG */
	0x01,  /* PIP_REPORTING_DISABLE */
	0x38, 0x18,  /* X_LEN_PHY */
	0x30, 0x2A,  /* Y_LEN_PHY */
	0x14,  /* HST_MODE0 */
	0x05,  /* ACT_DIST0 */
	0x00,  /* SCAN_TYP0 */
	0x08,  /* ACT_INTRVL0 */
	0x03, 0x00,  /* ACT_LFT_INTRVL0 */
	0x00,  /* Reserved22 */
	0x00,  /* LOW_POWER_ENABLE */
	0x14, 0x00,  /* LP_INTRVL0 */
	0xE8, 0x03,  /* TCH_TMOUT0 */
	0x01,  /* PWR_CFG */
	0x0C,  /* Reserved29 */
	0x64,  /* INT_PULSE_DATA */
	0x08,  /* OPMODE_CFG */
	0xF4, 0x01,  /* HANDSHAKE_TIMEOUT */
	0x1E,  /* TIMER_CAL_INTERVAL */
	0x00,  /* CHARGER_STATUS */
	0x88, 0x13,  /* ILEAK_MAX */
	0x03,  /* PWCOPEN_LOW */
	0x3C,  /* PWCOPEN_HIGH */
	0x14,  /* PWCOPEN_BUTTON_LOW */
	0x3C,  /* PWCOPEN_BUTTON_HIGH */
	0x00,  /* POST_CFG */
	0x02,  /* ACT_DIST2 */
	0x00,  /* EXT_SYNC */
	0x00,  /* Reserved45 */
	0x00, 0x00,  /* INTERRUPT_PIN_OVERRIDE */
	0x00, 0x00,  /* FIRMWARE_DEBUG1 */
	0x00, 0x00,  /* FIRMWARE_DEBUG2 */
	0x02,  /* ACT_DIST_TOUCHDOWN */
	0x00,  /* ACT_DIST_LIFTOFF */
	0x00,  /* ACT_DIST_COUNTER */
	0x05,  /* ACT_DIST_Z_THRESHOLD */
	0x01,  /* FIRST_TOUCH_SUPPRESSION */
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00,  /* Reserved57 */
	0x00, 0x00,  /* GRIP_XEDG_A */
	0x00, 0x00,  /* GRIP_XEDG_B */
	0x00, 0x00,  /* GRIP_XEXC_A */
	0x00, 0x00,  /* GRIP_XEXC_B */
	0x00, 0x00,  /* GRIP_YEDG_A */
	0x00, 0x00,  /* GRIP_YEDG_B */
	0x00, 0x00,  /* GRIP_YEXC_A */
	0x00, 0x00,  /* GRIP_YEXC_B */
	0x01,  /* GRIP_FIRST_EXC */
	0x00,  /* GRIP_EXC_EDGE_ORIGIN */
	0x00,  /* GRIP_ENABLE */
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00,  /* Reserved83 */
	0x64, 0x00, 0x00, 0x00,  /* MAX_SELF_SCAN_INTERVAL */
	0x64, 0x00, 0x00, 0x00,  /* MAX_MUTUAL_SCAN_INTERVAL */
	0x64, 0x00, 0x00, 0x00,  /* MAX_BALANCED_SCAN_INTERVAL */
	0x32, 0x00, 0x00, 0x00,  /* SELF_Z_THRSH */
	0x01, 0x00, 0x00, 0x00,  /* SELF_Z_MODE */
	0x01, 0x00, 0x00, 0x00,  /* ACT_LFT_EN */
	0x00, 0x00, 0x00, 0x00,  /* T_COMP_ENABLE */
	0xD0, 0x07, 0x00, 0x00,  /* T_COMP_INTERVAL */
	0x32, 0x00, 0x00, 0x00,  /* T_COMP_RECAL_MUTUAL_SENSOR_LIMIT */
	0x2C, 0x01, 0x00, 0x00,  /* T_COMP_RECAL_MUTUAL_HIGH */
	0xD4, 0xFE, 0xFF, 0xFF,  /* T_COMP_RECAL_MUTUAL_LOW */
	0x0A, 0x00, 0x00, 0x00,  /* T_COMP_RECAL_SELF_SENSOR_LIMIT */
	0x90, 0x01, 0x00, 0x00,  /* T_COMP_RECAL_SELF_HIGH */
	0x9C, 0xFF, 0xFF, 0xFF,  /* T_COMP_RECAL_SELF_LOW */
	0xA0, 0x00,  /* T_COMP_BUTTON_MUTUAL_HIGH */
	0xC4, 0xFF,  /* T_COMP_BUTTON_MUTUAL_LOW */
	0xA0, 0x00,  /* T_COMP_BUTTON_SELF_HIGH */
	0xC4, 0xFF,  /* T_COMP_BUTTON_SELF_LOW */
	0x00, 0x00,  /* CA_HOST_CONTROLLED_CHARGER */
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00,  /* Reserved162 */
	0x00,  /* CHARGER_ARMOR_ENABLE */
	0x00,  /* AFH_ENABLE */
	0x06,  /* AFH_LISTENING_SCAN_COUNT */
	0x06,  /* AFH_LISTEN_SCAN_CYCLE_REPEATS */
	0xB4, 0x00,  /* CA_INJTCH_MAGNITUDE */
	0x5A, 0x00,  /* CA_INJTCH_FINGER_THOLD */
	0xE8, 0x03, 0x00, 0x00,  /* CA_DEFAULT_REVERT_TIME */
	0x00, 0x00,  /* CA_SMART_H2O_REJECT */
	0x7F,  /* CA_BASE_TX_PULSES_NUM_MUTUAL */
	0x00,  /* CA_WIDEBAND_SATURATION_HYSTERESIS */
	0x2D, 0x00,  /* CA_WIDEBAND_TX_PERIOD */
	0x01,  /* CA_WIDEBAND_TX_PERIOD_DITHER */
	0x60,  /* CA_WB_NMX_THOLD */
	0x30, 0x00,  /* CA_HOP0_TX_PERIOD_MUTUAL */
	0x90, 0x01,  /* CA_HOP0_SCALING_MUTUAL */
	0x00,  /* CA_HOP0_RX_ATTENUATOR */
	0x7F,  /* CA_HOP0_TX_PULSES_NUM_MUTUAL */
	0x04,  /* CA_HOP0_TX_VOLTAGE_MUTUAL */
	0x00,  /* CA_HOP0_TX_VOLTAGE_PUMPMODE */
	0x1F,  /* CA_HOP0_INT_CAP */
	0x02,  /* CA_HOP0_TX_PULSES_NUM_WINDOWING */
	0x00, 0x00,  /* Reserved206 */
	0x38, 0x00,  /* CA_HOP1_TX_PERIOD_MUTUAL */
	0x90, 0x01,  /* CA_HOP1_SCALING_MUTUAL */
	0x00,  /* CA_HOP1_RX_ATTENUATOR */
	0x7F,  /* CA_HOP1_TX_PULSES_NUM_MUTUAL */
	0x04,  /* CA_HOP1_TX_VOLTAGE_MUTUAL */
	0x00,  /* CA_HOP1_TX_VOLTAGE_PUMPMODE */
	0x1F,  /* CA_HOP1_INT_CAP */
	0x02,  /* CA_HOP1_TX_PULSES_NUM_WINDOWING */
	0x00, 0x00,  /* Reserved218 */
	0x3C, 0x00,  /* CA_HOP2_TX_PERIOD_MUTUAL */
	0x90, 0x01,  /* CA_HOP2_SCALING_MUTUAL */
	0x00,  /* CA_HOP2_RX_ATTENUATOR */
	0x7F,  /* CA_HOP2_TX_PULSES_NUM_MUTUAL */
	0x04,  /* CA_HOP2_TX_VOLTAGE_MUTUAL */
	0x00,  /* CA_HOP2_TX_VOLTAGE_PUMPMODE */
	0x1F,  /* CA_HOP2_INT_CAP */
	0x02,  /* CA_HOP2_TX_PULSES_NUM_WINDOWING */
	0x00, 0x00,  /* Reserved230 */
	0x3F, 0x00,  /* CA_HOP3_TX_PERIOD_MUTUAL */
	0x90, 0x01,  /* CA_HOP3_SCALING_MUTUAL */
	0x00,  /* CA_HOP3_RX_ATTENUATOR */
	0x7F,  /* CA_HOP3_TX_PULSES_NUM_MUTUAL */
	0x04,  /* CA_HOP3_TX_VOLTAGE_MUTUAL */
	0x00,  /* CA_HOP3_TX_VOLTAGE_PUMPMODE */
	0x1F,  /* CA_HOP3_INT_CAP */
	0x02,  /* CA_HOP3_TX_PULSES_NUM_WINDOWING */
	0x00, 0x00,  /* Reserved242 */
	0x4B, 0x00,  /* CA_HOP4_TX_PERIOD_MUTUAL */
	0x90, 0x01,  /* CA_HOP4_SCALING_MUTUAL */
	0x00,  /* CA_HOP4_RX_ATTENUATOR */
	0x7F,  /* CA_HOP4_TX_PULSES_NUM_MUTUAL */
	0x04,  /* CA_HOP4_TX_VOLTAGE_MUTUAL */
	0x00,  /* CA_HOP4_TX_VOLTAGE_PUMPMODE */
	0x1F,  /* CA_HOP4_INT_CAP */
	0x02,  /* CA_HOP4_TX_PULSES_NUM_WINDOWING */
	0x00, 0x00,  /* Reserved254 */
	0x3C, 0x00, 0x00, 0x00,  /* XY_FILT_CFG_SIZE */
	0xF0, 0x00, 0x00, 0x00,  /* XY_FILTER_MASK */
	0x02, 0x00, 0x00, 0x00,  /* XY_FILT_IIR_COEFF */
	0x02, 0x00, 0x00, 0x00,  /* XY_FILT_Z_IIR_COEFF */
	0x40,  /* XY_FILT_XY_FAST_THR */
	0x36,  /* XY_FILT_XY_SLOW_THR */
	0x01,  /* XY_FILT_IIR_FAST_COEFF */
	0x00,  /* Reserved275 */
	0xF0, 0x00, 0x00, 0x00,  /* XY_FILTER_MASK_CA */
	0x02, 0x00, 0x00, 0x00,  /* XY_FILT_IIR_COEFF_CA */
	0x02, 0x00, 0x00, 0x00,  /* XY_FILT_Z_IIR_COEFF_CA */
	0xFF,  /* XY_FILT_XY_FAST_THR_CA */
	0xFF,  /* XY_FILT_XY_SLOW_THR_CA */
	0x01,  /* XY_FILT_IIR_FAST_COEFF_CA */
	0x00,  /* Reserved291 */
	0xF0, 0x00, 0x00, 0x00,  /* STYL_XY_FILTER_MASK */
	0x02, 0x00, 0x00, 0x00,  /* STYL_XY_FILT_IIR_COEFF */
	0x01, 0x00, 0x00, 0x00,  /* STYL_XY_FILT_Z_IIR_COEFF */
	0xFF,  /* STYL_XY_FILT_XY_FAST_THR */
	0xFF,  /* STYL_XY_FILT_XY_SLOW_THR */
	0x01,  /* STYL_XY_FILT_IIR_FAST_COEFF */
	0x00,  /* Reserved307 */
	0x00,  /* XY_FILT_ADAPTIVE_IIR_FILTER */
	0x0C,  /* XY_FILT_ADAPTIVE_IIR_FILTER_DISTANCE */
	0x00,  /* XY_FILT_TOUCH_SIZE_IIR_COEFF */
	0x00,  /* XY_FILT_TOUCH_SIZE_HYST */
	0x00,  /* XY_FILT_TOUCH_ORIENTATION_IIR_COEFF */
	0x00,  /* XY_FILT_TOUCH_ORIENTATION_HYST */
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00,  /* Reserved314 */
	0x10, 0x00, 0x00, 0x00,  /* FINGER_ID_CFG_SIZE */
	0x00, 0x00, 0x00, 0x00,  /* Reserved324 */
	0x50, 0x46, 0x00, 0x00,  /* FINGER_ID_MAX_FINGER_VELOCITY2 */
	0x01,  /* LIFTOFF_DEBOUNCE */
	0x00, 0x00, 0x00,  /* Reserved333 */
	0x24, 0x00, 0x00, 0x00,  /* TOUCHLOCATOR_CFG_SIZE */
	0x1C, 0x02, 0x00, 0x00,  /* X_RESOLUTION */
	0xC0, 0x03, 0x00, 0x00,  /* Y_RESOLUTION */
	0x01, 0x00, 0x00, 0x00,  /* SENSOR_ASSIGNMENT */
	0x80, 0x00, 0x00, 0x00,  /* Z_SCALING */
	0x28, 0x00,  /* FINGER_THRESH_SELF */
	0x34,  /* FINGER_THRESH_MUTUAL */
	0x01,  /* RX_LINE_FILTER */
	0x04,  /* FINGER_THR_MUT_HYST */
	0x01,  /* MULTI_TOUCH_DEBOUNCE */
	0x38,  /* CA_FINGER_THRESHOLD_MUTUAL */
	0x03,  /* SIZE_ORIENTATION_ENABLE */
	0x02,  /* RX_LINE_FILTER_DEBOUNCE */
	0x00,  /* CLIPPING_X_LOW */
	0x00,  /* CLIPPING_X_HIGH */
	0x00,  /* CLIPPING_Y_LOW */
	0x00,  /* CLIPPING_Y_HIGH */
	0x58,  /* RX_LINE_FILTER_THRESHOLD */
	0x01,  /* NOISE_REJECTION_3x3_FILTER_SCALE */
	0x02,  /* NOISE_REJECTION_3x3_FILTER_SCALE_CA */
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00,  /* Reserved372 */
	0x20, 0x00, 0x00, 0x00,  /* CENTROID_CFG_SIZE */
	0x01,  /* INNER_EDGE_GAIN */
	0x0E,  /* OUTER_EDGE_GAIN */
	0x02, 0x00,  /* CALC_THRESHOLD */
	0x05, 0x00,  /* OFFSET_S1 */
	0x02, 0x00,  /* OFFSET_S2 */
	0x4A, 0x01,  /* Z1_SUM_8MM */
	0x82, 0x00,  /* Z2_SUM_4MM */
	0x78, 0x00,  /* LOW_PIVOT */
	0xB4, 0x00,  /* HIGH_PIVOT */
	0x00,  /* BR2_ALWAYS_ON_FLAG */
	0x03,  /* EDGE_DEBOUNCE_COUNT */
	0x32, 0x00,  /* EDGE_DEBOUNCE_COUNT_THRESHOLD */
	0x78, 0x00,  /* CENTER_MAGNITUDE_SCALE */
	0x03,  /* CENTROID_CORNER_NUMER */
	0x04,  /* CENTROID_CORNER_DENOM */
	0x03,  /* CENTROID_FINGER_MAX_JUMP */
	0x00, 0x00, 0x00,  /* Reserved413 */
	0x02,  /* LRG_OBJ_CFG */
	0x1E,  /* MAX_FAT_FINGER_SIZE */
	0x09,  /* MIN_FAT_FINGER_SIZE */
	0x03,  /* MAX_FAT_FINGER_SIZE_HYST */
	0x02,  /* MIN_FAT_FINGER_SIZE_HYST */
	0x0F,  /* BYPASS_THRESHOLD_GAIN */
	0x09,  /* BYPASS_THRESHOLD_EDGE_GAIN */
	0x1C,  /* FAT_FINGER_THRESHOLD_COEFF */
	0x09,  /* CA_MIN_FAT_FINGER_SIZE */
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00,  /* Reserved425 */
	0x50,  /* BTN_THRSH_MUT */
	0x50,  /* BTN_THRSH_MUT_1 */
	0x50,  /* BTN_THRSH_MUT_2 */
	0x50,  /* BTN_THRSH_MUT_3 */
	0x41,  /* BTN_THRSH_SELF */
	0x41,  /* BTN_THRSH_SELF_1 */
	0x41,  /* BTN_THRSH_SELF_2 */
	0x41,  /* BTN_THRSH_SELF_3 */
	0x0A,  /* BTN_HYST_SELF */
	0x14,  /* BTN_HYST_MUT */
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00,  /* Reserved442 */
	0x3C, 0x00, 0x00, 0x00,  /* RAW_PROC_CFG_SIZE */
	0x07, 0x00,  /* FILT_FILTER_MASK */
	0x00,  /* FILT_IIR_COEFF_MUT */
	0x0A,  /* FILT_IIR_THRESHOLD_MUT */
	0x01,  /* FILT_IIR_COEFF_SELF */
	0x0A,  /* FILT_IIR_THRESHOLD_SELF */
	0x00,  /* FILT_IIR_COEFF_BAL */
	0x14,  /* FILT_IIR_THRESHOLD_BAL */
	0x01,  /* FILT_IIR_COEFF_BUT */
	0x14,  /* FILT_IIR_THRESHOLD_BUT */
	0x28,  /* FILT_CMF_THRESHOLD_MUT */
	0x00,  /* Reserved463 */
	0x77, 0x70,  /* CAFILT_FILTER_MASK */
	0x01,  /* CAFILT_IIR_COEFF_MUT */
	0x14,  /* CAFILT_IIR_THRESHOLD_MUT */
	0x01,  /* CAFILT_IIR_COEFF_SELF */
	0x14,  /* CAFILT_IIR_THRESHOLD_SELF */
	0x01,  /* CAFILT_IIR_COEFF_BAL */
	0x14,  /* CAFILT_IIR_THRESHOLD_BAL */
	0x01,  /* CAFILT_IIR_COEFF_BUT */
	0x14,  /* CAFILT_IIR_THRESHOLD_BUT */
	0x3C,  /* CAFILT_CMF_THRESHOLD_MUT */
	0x00,  /* Reserved475 */
	0x00, 0x00,  /* Reserved476 */
	0x00,  /* Reserved478 */
	0x00,  /* Reserved479 */
	0x00,  /* Reserved480 */
	0x00,  /* Reserved481 */
	0x00,  /* Reserved482 */
	0x00,  /* Reserved483 */
	0x00,  /* Reserved484 */
	0x00,  /* Reserved485 */
	0x00,  /* Reserved486 */
	0x00,  /* Reserved487 */
	0x05,  /* BL_DELAY_MUT */
	0x05,  /* BL_DELAY_SELF */
	0x14,  /* BL_DELAY_BAL */
	0x03,  /* BL_DELAY_BTN */
	0x0F,  /* MUT_SIG_THRESH */
	0x1E,  /* SELF_SIG_THRESH */
	0x0A,  /* BAL_SIG_THRESH */
	0x0A,  /* BUTTON_SIG_THRESH_MUT */
	0x0A,  /* BUTTON_SIG_THRESH_SELF */
	0x05,  /* CA_MUT_SIG_THRESHOLD */
	0x50,  /* BL_FILT_MUT */
	0x50,  /* BL_FILT_SELF */
	0x50,  /* BL_FILT_BAL */
	0x50,  /* BL_FILT_BTN_MUT */
	0x50,  /* BL_FILT_BTN_SELF */
	0x78,  /* CMF_THR_SELF */
	0x0C,  /* CMF_THR_BAL */
	0x0C,  /* CMF_THR_BTN_MUT */
	0x0C,  /* CMF_THR_BTN_SELF */
	0x00, 0x00, 0x00, 0x00, 
	0x00,  /* Reserved507 */
	0x08, 0x00, 0x00, 0x00,  /* H2OREJECTION_SIZE */
	0x01,  /* BL_H20_RJCT */
	0x00,  /* H2O_REJECTION_SNS_WIDTH */
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00,  /* Reserved518 */
	0x0C, 0x01, 0x01, 0x01,  /* EXT_CTRL */
	0x00, 0x00, 0x00, 0x00,  /* EXT_CTRL2 */
	0xFF, 0x0F, 0x00, 0x00,  /* EXT_CTRL3 */
	0x0A, 0x01, 0x00, 0x00,  /* INT_CTRL */
	0x00, 0x00, 0x00, 0x00,  /* INT_CTRL2 */
	0xFF, 0x0F, 0x00, 0x00,  /* INT_CTRL3 */
	0x01, 0x00, 0x00, 0x00,  /* INT_CTRL4 */
	0x00, 0x00, 0x00, 0x80,  /* LX_CTRL */
	0x1F, 0x10, 0x20, 0x20,  /* LX_CTRL2 */
	0x00, 0xB1, 0x15, 0x70,  /* TX_CTRL */
	0xEE, 0xAA, 0x00, 0x00,  /* TX_CTRL2 */
	0x03, 0x0A, 0x20, 0x01,  /* PROC_CTRL */
	0x00, 0x00, 0x00, 0x00,  /* PROC_WEIGHTS */
	0x00, 0x04, 0x00, 0x00,  /* REJ_CTRL */
	0x00, 0xFF, 0x00, 0x00,  /* AL_CTRL */
	0x1F, 0xDF, 0x00, 0x00,  /* NOISE_CTRL */
	0x00, 0x19, 0x00, 0x80,  /* RX_CTRL */
	0x00, 0x0A, 0x03, 0xC0,  /* INFRA_CTRL */
	0x90, 0x01,  /* SCALING_FACTOR_MUTUAL */
	0xF4, 0x01,  /* SCALING_FACTOR_SELF */
	0x64, 0x00,  /* SCALING_FACTOR_BALANCED */
	0x2C, 0x01,  /* SCALING_FACTOR_BUTTON */
	0x0C,  /* TX_NUM */
	0x15,  /* RX_NUM */
	0x21,  /* SENS_NUM */
	0x00,  /* BUTTON_NUM */
	0xFC, 0x00,  /* CROSS_NUM */
	0x02,  /* SLOTS_MUT */
	0x02,  /* SLOTS_SELF_RX */
	0x02,  /* SLOTS_SELF_TX */
	0x04,  /* SLOTS_SELF */
	0x04,  /* TX_VOLTAGE_MUTUAL */
	0x04,  /* TX_VOLTAGE_BALANCED */
	0x04,  /* TX_VOLTAGE_BUTTON */
	0x32,  /* TX_PULSES_NUM_MUTUAL */
	0x32,  /* TX_PULSES_NUM_SELF */
	0x08,  /* TX_PULSES_NUM_BALANCED */
	0x32,  /* TX_PULSES_NUM_BUTTON_MUTUAL */
	0x20,  /* TX_PULSES_NUM_BUTTON_SELF */
	0x3F,  /* GLOBAL_IDAC_MUTUAL */
	0x55,  /* GLOBAL_IDAC_SELF_RX */
	0x55,  /* GLOBAL_IDAC_SELF_TX */
	0x7F,  /* GLOBAL_IDAC_BALANCED */
	0x64,  /* GLOBAL_IDAC_BUTTON_MUTUAL */
	0x7F,  /* GLOBAL_IDAC_BUTTON_SELF */
	0x03,  /* GLOBAL_IDAC_GAIN_MUTUAL */
	0x03,  /* GLOBAL_IDAC_GAIN_SELF */
	0x03,  /* GLOBAL_IDAC_GAIN_BALANCED */
	0x01,  /* GLOBAL_IDAC_GAIN_BUTTON_MUTUAL */
	0x03,  /* GLOBAL_IDAC_GAIN_BUTTON_SELF */
	0x00,  /* CDC_TX_FREQ_METHOD */
	0x8C, 0x00,  /* TX_PERIOD_MUTUAL */
	0xA0, 0x00,  /* TX_PERIOD_SELF */
	0x3D, 0x00,  /* TX_PERIOD_BTN_MUTUAL */
	0xA0, 0x00,  /* TX_PERIOD_BTN_SELF */
	0x0B,  /* INTEGRATOR_RESET_MUTUAL */
	0x1F,  /* INTEGRATOR_RESET_SELF */
	0x00,  /* CA_PROC_CTL_THRESHOLD */
	0x01,  /* SCANNING_MODE_MUTUAL */
	0x03,  /* SCANNING_MODE_BUTTON */
	0x00,  /* RX_ATTENUATOR */
	0x3C, 0x00,  /* DETECT_CHARGER_THRESHOLD */
	0x0F, 0x00,  /* NM_INJ_TCH_THRESHOLD */
	0x7F,  /* WB_SATURATION_THRESHOLD */
	0x14,  /* NMX_THOLD_PERCENT */
	0x00,  /* ATT_RESISTOR_ENABLE */
	0x00,  /* TX_PULSES_NUM_WINDOWING */
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00,  /* Reserved660 */
	0xFE, 0x0F, 0x00, 0xFF, 
	0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0xF0, 0xFF, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0xFE, 0xFF, 0xFF, 0xFF, 
	0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00,  /* CDC_SENSOR_MASKS */
	0x01, 0x02, 0x03, 0x04, 
	0x05, 0x06, 0x07, 0x08, 
	0x09, 0x0A, 0x0B, 0x18, 
	0x19, 0x1A, 0x1B, 0x1C, 
	0x1D, 0x1E, 0x1F, 0x20, 
	0x21, 0x0C, 0x0D, 0x0E, 
	0x0F, 0x10, 0x11, 0x12, 
	0x13, 0x14, 0x15, 0x16, 
	0x17, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00,  /* CDC_PIN_INDEX_TABLE */
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00,  /* Reserved785 */
	0x3C, 0x08, 0x00, 0x1F, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0xFF, 0x07, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x01, 0x0B, 0x00, 0x02, 
	0x03, 0x04, 0x0A, 0x01, 
	0x0F, 0x0B, 0x0C, 0x0D, 
	0x0E, 0x00, 0x00, 0x00, 
	0xC0, 0x07, 0x00, 0xE0, 
	0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0xFE, 0x07, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0xFF, 0x0A, 0x00, 0x07, 
	0x08, 0x09, 0x05, 0x06, 
	0x14, 0x10, 0x11, 0x12, 
	0x13, 0x00, 0x00, 0x00, 
	0x00, 0xF0, 0x7D, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0xFE, 0x07, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0xFF, 0x0A, 0x00, 0x16, 
	0x17, 0x18, 0x19, 0x15, 
	0x1B, 0x1C, 0x1D, 0x1E, 
	0x1F, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x82, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x60, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0xFF, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x1A, 
	0x20, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0xFF, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00,  /* CDC_SLOT_TABLE */
	0x00, 0x00, 0x00, 0x00,  /* TARGET_LEVEL_MUTUAL */
	0x00, 0x00, 0x00, 0x00,  /* TARGET_LEVEL_SELF */
	0x00, 0x00, 0x00, 0x00,  /* TARGET_LEVEL_BALANCED */
	0x00, 0x00, 0x00, 0x00,  /* TARGET_LEVEL_BUTTON */
	0xF9, 0xA8,  /* CONFIG_CRC */
};

/* Touchscreen Parameters Field Sizes (Writable: 0:Readonly; 1:Writable) */
static const uint16_t cyttsp4_param_size_vy58[] = {
/*	Size	Name	*/
	2, /* CONFIG_DATA_SIZE */
	2, /* CONFIG_DATA_MAX_SIZE */
	4, /* SDK_CTRL_CFG_SIZE */
	2, /* CONFIG_VER */
	1, /* PANEL_ID_CONFIG */
	1, /* PIP_REPORTING_DISABLE */
	2, /* X_LEN_PHY */
	2, /* Y_LEN_PHY */
	1, /* HST_MODE0 */
	1, /* ACT_DIST0 */
	1, /* SCAN_TYP0 */
	1, /* ACT_INTRVL0 */
	2, /* ACT_LFT_INTRVL0 */
	1, /* Reserved22 */
	1, /* LOW_POWER_ENABLE */
	2, /* LP_INTRVL0 */
	2, /* TCH_TMOUT0 */
	1, /* PWR_CFG */
	1, /* Reserved29 */
	1, /* INT_PULSE_DATA */
	1, /* OPMODE_CFG */
	2, /* HANDSHAKE_TIMEOUT */
	1, /* TIMER_CAL_INTERVAL */
	1, /* CHARGER_STATUS */
	2, /* ILEAK_MAX */
	1, /* PWCOPEN_LOW */
	1, /* PWCOPEN_HIGH */
	1, /* PWCOPEN_BUTTON_LOW */
	1, /* PWCOPEN_BUTTON_HIGH */
	1, /* POST_CFG */
	1, /* ACT_DIST2 */
	1, /* EXT_SYNC */
	1, /* Reserved45 */
	2, /* INTERRUPT_PIN_OVERRIDE */
	2, /* FIRMWARE_DEBUG1 */
	2, /* FIRMWARE_DEBUG2 */
	1, /* ACT_DIST_TOUCHDOWN */
	1, /* ACT_DIST_LIFTOFF */
	1, /* ACT_DIST_COUNTER */
	1, /* ACT_DIST_Z_THRESHOLD */
	1, /* FIRST_TOUCH_SUPPRESSION */
	7, /* Reserved57 */
	2, /* GRIP_XEDG_A */
	2, /* GRIP_XEDG_B */
	2, /* GRIP_XEXC_A */
	2, /* GRIP_XEXC_B */
	2, /* GRIP_YEDG_A */
	2, /* GRIP_YEDG_B */
	2, /* GRIP_YEXC_A */
	2, /* GRIP_YEXC_B */
	1, /* GRIP_FIRST_EXC */
	1, /* GRIP_EXC_EDGE_ORIGIN */
	1, /* GRIP_ENABLE */
	13, /* Reserved83 */
	4, /* MAX_SELF_SCAN_INTERVAL */
	4, /* MAX_MUTUAL_SCAN_INTERVAL */
	4, /* MAX_BALANCED_SCAN_INTERVAL */
	4, /* SELF_Z_THRSH */
	4, /* SELF_Z_MODE */
	4, /* ACT_LFT_EN */
	4, /* T_COMP_ENABLE */
	4, /* T_COMP_INTERVAL */
	4, /* T_COMP_RECAL_MUTUAL_SENSOR_LIMIT */
	4, /* T_COMP_RECAL_MUTUAL_HIGH */
	4, /* T_COMP_RECAL_MUTUAL_LOW */
	4, /* T_COMP_RECAL_SELF_SENSOR_LIMIT */
	4, /* T_COMP_RECAL_SELF_HIGH */
	4, /* T_COMP_RECAL_SELF_LOW */
	2, /* T_COMP_BUTTON_MUTUAL_HIGH */
	2, /* T_COMP_BUTTON_MUTUAL_LOW */
	2, /* T_COMP_BUTTON_SELF_HIGH */
	2, /* T_COMP_BUTTON_SELF_LOW */
	2, /* CA_HOST_CONTROLLED_CHARGER */
	14, /* Reserved162 */
	1, /* CHARGER_ARMOR_ENABLE */
	1, /* AFH_ENABLE */
	1, /* AFH_LISTENING_SCAN_COUNT */
	1, /* AFH_LISTEN_SCAN_CYCLE_REPEATS */
	2, /* CA_INJTCH_MAGNITUDE */
	2, /* CA_INJTCH_FINGER_THOLD */
	4, /* CA_DEFAULT_REVERT_TIME */
	2, /* CA_SMART_H2O_REJECT */
	1, /* CA_BASE_TX_PULSES_NUM_MUTUAL */
	1, /* CA_WIDEBAND_SATURATION_HYSTERESIS */
	2, /* CA_WIDEBAND_TX_PERIOD */
	1, /* CA_WIDEBAND_TX_PERIOD_DITHER */
	1, /* CA_WB_NMX_THOLD */
	2, /* CA_HOP0_TX_PERIOD_MUTUAL */
	2, /* CA_HOP0_SCALING_MUTUAL */
	1, /* CA_HOP0_RX_ATTENUATOR */
	1, /* CA_HOP0_TX_PULSES_NUM_MUTUAL */
	1, /* CA_HOP0_TX_VOLTAGE_MUTUAL */
	1, /* CA_HOP0_TX_VOLTAGE_PUMPMODE */
	1, /* CA_HOP0_INT_CAP */
	1, /* CA_HOP0_TX_PULSES_NUM_WINDOWING */
	2, /* Reserved206 */
	2, /* CA_HOP1_TX_PERIOD_MUTUAL */
	2, /* CA_HOP1_SCALING_MUTUAL */
	1, /* CA_HOP1_RX_ATTENUATOR */
	1, /* CA_HOP1_TX_PULSES_NUM_MUTUAL */
	1, /* CA_HOP1_TX_VOLTAGE_MUTUAL */
	1, /* CA_HOP1_TX_VOLTAGE_PUMPMODE */
	1, /* CA_HOP1_INT_CAP */
	1, /* CA_HOP1_TX_PULSES_NUM_WINDOWING */
	2, /* Reserved218 */
	2, /* CA_HOP2_TX_PERIOD_MUTUAL */
	2, /* CA_HOP2_SCALING_MUTUAL */
	1, /* CA_HOP2_RX_ATTENUATOR */
	1, /* CA_HOP2_TX_PULSES_NUM_MUTUAL */
	1, /* CA_HOP2_TX_VOLTAGE_MUTUAL */
	1, /* CA_HOP2_TX_VOLTAGE_PUMPMODE */
	1, /* CA_HOP2_INT_CAP */
	1, /* CA_HOP2_TX_PULSES_NUM_WINDOWING */
	2, /* Reserved230 */
	2, /* CA_HOP3_TX_PERIOD_MUTUAL */
	2, /* CA_HOP3_SCALING_MUTUAL */
	1, /* CA_HOP3_RX_ATTENUATOR */
	1, /* CA_HOP3_TX_PULSES_NUM_MUTUAL */
	1, /* CA_HOP3_TX_VOLTAGE_MUTUAL */
	1, /* CA_HOP3_TX_VOLTAGE_PUMPMODE */
	1, /* CA_HOP3_INT_CAP */
	1, /* CA_HOP3_TX_PULSES_NUM_WINDOWING */
	2, /* Reserved242 */
	2, /* CA_HOP4_TX_PERIOD_MUTUAL */
	2, /* CA_HOP4_SCALING_MUTUAL */
	1, /* CA_HOP4_RX_ATTENUATOR */
	1, /* CA_HOP4_TX_PULSES_NUM_MUTUAL */
	1, /* CA_HOP4_TX_VOLTAGE_MUTUAL */
	1, /* CA_HOP4_TX_VOLTAGE_PUMPMODE */
	1, /* CA_HOP4_INT_CAP */
	1, /* CA_HOP4_TX_PULSES_NUM_WINDOWING */
	2, /* Reserved254 */
	4, /* XY_FILT_CFG_SIZE */
	4, /* XY_FILTER_MASK */
	4, /* XY_FILT_IIR_COEFF */
	4, /* XY_FILT_Z_IIR_COEFF */
	1, /* XY_FILT_XY_FAST_THR */
	1, /* XY_FILT_XY_SLOW_THR */
	1, /* XY_FILT_IIR_FAST_COEFF */
	1, /* Reserved275 */
	4, /* XY_FILTER_MASK_CA */
	4, /* XY_FILT_IIR_COEFF_CA */
	4, /* XY_FILT_Z_IIR_COEFF_CA */
	1, /* XY_FILT_XY_FAST_THR_CA */
	1, /* XY_FILT_XY_SLOW_THR_CA */
	1, /* XY_FILT_IIR_FAST_COEFF_CA */
	1, /* Reserved291 */
	4, /* STYL_XY_FILTER_MASK */
	4, /* STYL_XY_FILT_IIR_COEFF */
	4, /* STYL_XY_FILT_Z_IIR_COEFF */
	1, /* STYL_XY_FILT_XY_FAST_THR */
	1, /* STYL_XY_FILT_XY_SLOW_THR */
	1, /* STYL_XY_FILT_IIR_FAST_COEFF */
	1, /* Reserved307 */
	1, /* XY_FILT_ADAPTIVE_IIR_FILTER */
	1, /* XY_FILT_ADAPTIVE_IIR_FILTER_DISTANCE */
	1, /* XY_FILT_TOUCH_SIZE_IIR_COEFF */
	1, /* XY_FILT_TOUCH_SIZE_HYST */
	1, /* XY_FILT_TOUCH_ORIENTATION_IIR_COEFF */
	1, /* XY_FILT_TOUCH_ORIENTATION_HYST */
	6, /* Reserved314 */
	4, /* FINGER_ID_CFG_SIZE */
	4, /* Reserved324 */
	4, /* FINGER_ID_MAX_FINGER_VELOCITY2 */
	1, /* LIFTOFF_DEBOUNCE */
	3, /* Reserved333 */
	4, /* TOUCHLOCATOR_CFG_SIZE */
	4, /* X_RESOLUTION */
	4, /* Y_RESOLUTION */
	4, /* SENSOR_ASSIGNMENT */
	4, /* Z_SCALING */
	2, /* FINGER_THRESH_SELF */
	1, /* FINGER_THRESH_MUTUAL */
	1, /* RX_LINE_FILTER */
	1, /* FINGER_THR_MUT_HYST */
	1, /* MULTI_TOUCH_DEBOUNCE */
	1, /* CA_FINGER_THRESHOLD_MUTUAL */
	1, /* SIZE_ORIENTATION_ENABLE */
	1, /* RX_LINE_FILTER_DEBOUNCE */
	1, /* CLIPPING_X_LOW */
	1, /* CLIPPING_X_HIGH */
	1, /* CLIPPING_Y_LOW */
	1, /* CLIPPING_Y_HIGH */
	1, /* RX_LINE_FILTER_THRESHOLD */
	1, /* NOISE_REJECTION_3x3_FILTER_SCALE */
	1, /* NOISE_REJECTION_3x3_FILTER_SCALE_CA */
	12, /* Reserved372 */
	4, /* CENTROID_CFG_SIZE */
	1, /* INNER_EDGE_GAIN */
	1, /* OUTER_EDGE_GAIN */
	2, /* CALC_THRESHOLD */
	2, /* OFFSET_S1 */
	2, /* OFFSET_S2 */
	2, /* Z1_SUM_8MM */
	2, /* Z2_SUM_4MM */
	2, /* LOW_PIVOT */
	2, /* HIGH_PIVOT */
	1, /* BR2_ALWAYS_ON_FLAG */
	1, /* EDGE_DEBOUNCE_COUNT */
	2, /* EDGE_DEBOUNCE_COUNT_THRESHOLD */
	2, /* CENTER_MAGNITUDE_SCALE */
	1, /* CENTROID_CORNER_NUMER */
	1, /* CENTROID_CORNER_DENOM */
	1, /* CENTROID_FINGER_MAX_JUMP */
	3, /* Reserved413 */
	1, /* LRG_OBJ_CFG */
	1, /* MAX_FAT_FINGER_SIZE */
	1, /* MIN_FAT_FINGER_SIZE */
	1, /* MAX_FAT_FINGER_SIZE_HYST */
	1, /* MIN_FAT_FINGER_SIZE_HYST */
	1, /* BYPASS_THRESHOLD_GAIN */
	1, /* BYPASS_THRESHOLD_EDGE_GAIN */
	1, /* FAT_FINGER_THRESHOLD_COEFF */
	1, /* CA_MIN_FAT_FINGER_SIZE */
	7, /* Reserved425 */
	1, /* BTN_THRSH_MUT */
	1, /* BTN_THRSH_MUT_1 */
	1, /* BTN_THRSH_MUT_2 */
	1, /* BTN_THRSH_MUT_3 */
	1, /* BTN_THRSH_SELF */
	1, /* BTN_THRSH_SELF_1 */
	1, /* BTN_THRSH_SELF_2 */
	1, /* BTN_THRSH_SELF_3 */
	1, /* BTN_HYST_SELF */
	1, /* BTN_HYST_MUT */
	6, /* Reserved442 */
	4, /* RAW_PROC_CFG_SIZE */
	2, /* FILT_FILTER_MASK */
	1, /* FILT_IIR_COEFF_MUT */
	1, /* FILT_IIR_THRESHOLD_MUT */
	1, /* FILT_IIR_COEFF_SELF */
	1, /* FILT_IIR_THRESHOLD_SELF */
	1, /* FILT_IIR_COEFF_BAL */
	1, /* FILT_IIR_THRESHOLD_BAL */
	1, /* FILT_IIR_COEFF_BUT */
	1, /* FILT_IIR_THRESHOLD_BUT */
	1, /* FILT_CMF_THRESHOLD_MUT */
	1, /* Reserved463 */
	2, /* CAFILT_FILTER_MASK */
	1, /* CAFILT_IIR_COEFF_MUT */
	1, /* CAFILT_IIR_THRESHOLD_MUT */
	1, /* CAFILT_IIR_COEFF_SELF */
	1, /* CAFILT_IIR_THRESHOLD_SELF */
	1, /* CAFILT_IIR_COEFF_BAL */
	1, /* CAFILT_IIR_THRESHOLD_BAL */
	1, /* CAFILT_IIR_COEFF_BUT */
	1, /* CAFILT_IIR_THRESHOLD_BUT */
	1, /* CAFILT_CMF_THRESHOLD_MUT */
	1, /* Reserved475 */
	2, /* Reserved476 */
	1, /* Reserved478 */
	1, /* Reserved479 */
	1, /* Reserved480 */
	1, /* Reserved481 */
	1, /* Reserved482 */
	1, /* Reserved483 */
	1, /* Reserved484 */
	1, /* Reserved485 */
	1, /* Reserved486 */
	1, /* Reserved487 */
	1, /* BL_DELAY_MUT */
	1, /* BL_DELAY_SELF */
	1, /* BL_DELAY_BAL */
	1, /* BL_DELAY_BTN */
	1, /* MUT_SIG_THRESH */
	1, /* SELF_SIG_THRESH */
	1, /* BAL_SIG_THRESH */
	1, /* BUTTON_SIG_THRESH_MUT */
	1, /* BUTTON_SIG_THRESH_SELF */
	1, /* CA_MUT_SIG_THRESHOLD */
	1, /* BL_FILT_MUT */
	1, /* BL_FILT_SELF */
	1, /* BL_FILT_BAL */
	1, /* BL_FILT_BTN_MUT */
	1, /* BL_FILT_BTN_SELF */
	1, /* CMF_THR_SELF */
	1, /* CMF_THR_BAL */
	1, /* CMF_THR_BTN_MUT */
	1, /* CMF_THR_BTN_SELF */
	5, /* Reserved507 */
	4, /* H2OREJECTION_SIZE */
	1, /* BL_H20_RJCT */
	1, /* H2O_REJECTION_SNS_WIDTH */
	10, /* Reserved518 */
	4, /* EXT_CTRL */
	4, /* EXT_CTRL2 */
	4, /* EXT_CTRL3 */
	4, /* INT_CTRL */
	4, /* INT_CTRL2 */
	4, /* INT_CTRL3 */
	4, /* INT_CTRL4 */
	4, /* LX_CTRL */
	4, /* LX_CTRL2 */
	4, /* TX_CTRL */
	4, /* TX_CTRL2 */
	4, /* PROC_CTRL */
	4, /* PROC_WEIGHTS */
	4, /* REJ_CTRL */
	4, /* AL_CTRL */
	4, /* NOISE_CTRL */
	4, /* RX_CTRL */
	4, /* INFRA_CTRL */
	2, /* SCALING_FACTOR_MUTUAL */
	2, /* SCALING_FACTOR_SELF */
	2, /* SCALING_FACTOR_BALANCED */
	2, /* SCALING_FACTOR_BUTTON */
	1, /* TX_NUM */
	1, /* RX_NUM */
	1, /* SENS_NUM */
	1, /* BUTTON_NUM */
	2, /* CROSS_NUM */
	1, /* SLOTS_MUT */
	1, /* SLOTS_SELF_RX */
	1, /* SLOTS_SELF_TX */
	1, /* SLOTS_SELF */
	1, /* TX_VOLTAGE_MUTUAL */
	1, /* TX_VOLTAGE_BALANCED */
	1, /* TX_VOLTAGE_BUTTON */
	1, /* TX_PULSES_NUM_MUTUAL */
	1, /* TX_PULSES_NUM_SELF */
	1, /* TX_PULSES_NUM_BALANCED */
	1, /* TX_PULSES_NUM_BUTTON_MUTUAL */
	1, /* TX_PULSES_NUM_BUTTON_SELF */
	1, /* GLOBAL_IDAC_MUTUAL */
	1, /* GLOBAL_IDAC_SELF_RX */
	1, /* GLOBAL_IDAC_SELF_TX */
	1, /* GLOBAL_IDAC_BALANCED */
	1, /* GLOBAL_IDAC_BUTTON_MUTUAL */
	1, /* GLOBAL_IDAC_BUTTON_SELF */
	1, /* GLOBAL_IDAC_GAIN_MUTUAL */
	1, /* GLOBAL_IDAC_GAIN_SELF */
	1, /* GLOBAL_IDAC_GAIN_BALANCED */
	1, /* GLOBAL_IDAC_GAIN_BUTTON_MUTUAL */
	1, /* GLOBAL_IDAC_GAIN_BUTTON_SELF */
	1, /* CDC_TX_FREQ_METHOD */
	2, /* TX_PERIOD_MUTUAL */
	2, /* TX_PERIOD_SELF */
	2, /* TX_PERIOD_BTN_MUTUAL */
	2, /* TX_PERIOD_BTN_SELF */
	1, /* INTEGRATOR_RESET_MUTUAL */
	1, /* INTEGRATOR_RESET_SELF */
	1, /* CA_PROC_CTL_THRESHOLD */
	1, /* SCANNING_MODE_MUTUAL */
	1, /* SCANNING_MODE_BUTTON */
	1, /* RX_ATTENUATOR */
	2, /* DETECT_CHARGER_THRESHOLD */
	2, /* NM_INJ_TCH_THRESHOLD */
	1, /* WB_SATURATION_THRESHOLD */
	1, /* NMX_THOLD_PERCENT */
	1, /* ATT_RESISTOR_ENABLE */
	1, /* TX_PULSES_NUM_WINDOWING */
	12, /* Reserved660 */
	48, /* CDC_SENSOR_MASKS */
	65, /* CDC_PIN_INDEX_TABLE */
	15, /* Reserved785 */
	240, /* CDC_SLOT_TABLE */
	4, /* TARGET_LEVEL_MUTUAL */
	4, /* TARGET_LEVEL_SELF */
	4, /* TARGET_LEVEL_BALANCED */
	4, /* TARGET_LEVEL_BUTTON */
	2, /* CONFIG_CRC */
};

