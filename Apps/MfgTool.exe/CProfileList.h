
/*
 * Copyright (C) 2010, Freescale Semiconductor, Inc. All Rights Reserved.
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 *
 */
#pragma once

typedef struct
{
	PVOID			pNext;
	PVOID			pPrev;
//	e_PROFILESTATE	state;
	CPlayerProfile *pProfile;
} PROFILELISTITEM, *PPROFILELISTITEM;

class CProfileList
{
public:
	CProfileList(void);
	~CProfileList(void);

//	typedef enum _tag_e_PROFILESTATE {UPDATE_PROFILE = 0, REMOVE_PROFILE} e_PROFILESTATE;

	void				Add(CPlayerProfile *_pProfile);
	void				Remove(int _index);
	void				RemoveAll();
	CPlayerProfile		*Find(CString _csProfileName);
	CPlayerProfile		*Get(int _index);
	int					GetCount();

protected:
	PPROFILELISTITEM	m_ListHead;
	PPROFILELISTITEM	m_ListTail;
	int					m_Count;
};
