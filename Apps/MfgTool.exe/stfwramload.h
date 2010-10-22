/*
 * Copyright (C) 2010, Freescale Semiconductor, Inc. All Rights Reserved.
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 *
 */
#pragma once
#include "../../Libs/mscdevlib.stmfgtool/stfwcomponent.h"

#define STATIC_ID_FW_FILENAME    L"stmfgmsc"
#define STATIC_ID_FW_EXTENSION   L".sb"

class CStFwRamLoad :
	public CStFwComponent
{
public:
	CStFwRamLoad(   CStUpdater *_p_updater, const char * _profile_path, USHORT _part, int panel_num);
	~CStFwRamLoad(void);
private:
	ST_ERROR ExtractVersionInformation(void);
	ST_ERROR ExtractVersionFromHeader(void);
	ST_ERROR PrepareData(void);
	string m_filename;
};
