/*
 * Copyright (C) 2010, Freescale Semiconductor, Inc. All Rights Reserved.
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 *
 */

#define CFG_SYSTEM_DRIVE_PADDING_PERCENTAGE 15

#define DEF_CFG_COMPANY_ICON    "../../customization/company.ico"
#define DEF_CFG_COMPANY_BMP     "../../resources/freescale_logo.bmp"
#define DEF_CFG_CUSTOM_COMPANY_BMP "../../resources/freescale_logo.bmp"
#define DEF_CFG_UPDATER_ICON    "updater_8.ico"

#define DEF_CFG_BASE_SDK		L"SDK5.00\0"

#define DEF_CFG_VERSION			1
#define DEF_CFG_COMPANY_NAME	L"Freescale Semiconductor, Inc.                                   \0"
#define DEF_CFG_PRODUCT_DESC	L"SDK Example Firmware Updater                                    \0"
#define DEF_CFG_PRODUCT_NAME	L"SDK Example Firmware Updater                                    \0"
#define DEF_CFG_COPYRIGHT		L"Copyright (c) 2008 Freescale Semiconductor, Inc. All Rights Reserved.                                                          \0"
#define DEF_CFG_COMMENTS		L"SDK Example Firmware Updater                                                                                                   \0"
#define DEF_CFG_APP_TITLE		L"Firmware Update\0"
#define DEF_CFG_SCSIMFG			L"SigmaTel\0"
#define DEF_CFG_SCSIPROD		L"SDK Device\0"
#define DEF_CFG_MTPMFG			L"SigmaTel\0"
#define DEF_CFG_MTPPROD			L"SDK Device\0"
#define DEF_CFG_USB_VENDOR		0x066F
#define DEF_CFG_USB_PROD		0xA010
#define DEF_CFG_USB_PROD_SECONDARY 0x8000
#define DEF_CFG_AUTO_RECOVERY	TRUE
#define DEF_CFG_FORCE_RECOVERY	TRUE
#define DEF_CFG_USE_LOCAL_RES	TRUE
#define DEF_CFG_WINCE			FALSE
#define DEF_CFG_DLG_TYPE		3L
#define DEF_CFG_ABOUT_BMP		TRUE

#define DEF_CFG_FORMAT_DATA		FALSE
#define DEF_CFG_ERASE_MEDIA		FALSE
#define DEF_CFG_DEFAULT_FAT		2
#define DEF_CFG_DEFAULT_LABEL	L"\0"
#define DEF_CFG_REBOOT_MSG		FALSE
#define DEF_CFG_LOW_NAND_SOLUTION FALSE
#define DEF_CFG_AUTOSTART		FALSE
#define DEF_CFG_AUTOCLOSE		FALSE
#define DEF_CFG_MINDLG_FMT_MSG	FALSE

#define DEF_CFG_DRVARRAY_NUM_DRIVES		6
#define DEF_CFG_DRVARRAY_ONE			L",Data,0,0x0A,0\0"
#define DEF_CFG_DRVARRAY_TWO			L",Janus Drive,2,0x0B,0\0"
#define DEF_CFG_DRVARRAY_THREE			L",Hidden 2,2,0x0C,0\0"
#define DEF_CFG_DRVARRAY_FOUR			L"firmware.sb,Firmware Img 1,1,0x50,0\0"
#define DEF_CFG_DRVARRAY_FIVE			L"firmware.sb,Firmware Img 2,1,0x60,0\0"
#define DEF_CFG_DRVARRAY_SIX			L"firmware.sb,Firmware Img 3,1,0x70,0\0"
#define DEF_CFG_DRVARRAY_SEVEN			L"\0"
#define DEF_CFG_DRVARRAY_EIGHT			L"\0"
#define DEF_CFG_DRVARRAY_NINE			L"\0"
#define DEF_CFG_DRVARRAY_TEN			L"\0"
#define DEF_CFG_DRVARRAY_ELEVEN			L"\0"
#define DEF_CFG_DRVARRAY_TWELVE			L"\0"

#define DEF_15_CHAR_RESERVE		L"               "
#define DEF_64_CHAR_RESERVE		L"                                                                \0"
#define DEF_128_CHAR_RESERVE	L"                                                                                                                                \0"
