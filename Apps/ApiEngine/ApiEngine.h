/*
 * Copyright (C) 2010, Freescale Semiconductor, Inc. All Rights Reserved.
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 *
 */
#pragma once

#include "resource.h"

#include "Libs/DevSupport/Device.h"

#define SAFE_DELETE(p) if(p){delete p; p=NULL;}

/////////////////////////////////////////////////////////////////////////////
// DECLARE_CONSOLEAPP - enables MFC-like console app

#ifdef _CONSOLE
   #define DECLARE_CONSOLEAPP \
      extern int AFXAPI AfxWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPTSTR lpCmdLine, int nCmdShow);\
      extern "C" int _tmain( int /*argc*/, TCHAR** /*argv*/, TCHAR** /*envp*/)\
      {\
         return AfxWinMain(GetModuleHandle(NULL), NULL, GetCommandLine(), SW_SHOW);\
      }
      // remember to instantiate app class
#endif // _CONSOLE

/////////////////////////////////////////////////////////////////////////////
// Interface of some application class
const TCHAR* SEQUENCE_SECTION(_T("CommandSequence"));
const TCHAR* NAME_KEY(_T("Name"));
const TCHAR* PARAMETER_KEY(_T("Parameter"));
const TCHAR* RESULT_KEY(_T("ExpectedResult"));
const TCHAR* STATUS_KEY(_T("ExpectedStatus"));
const TCHAR* FIND_DEVICE_VALUE(_T("FindDevice"));

class CApiEngineApp : public CWinApp
{
// Construction
public:
	CApiEngineApp(void);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyApp)
	public:
	virtual BOOL InitInstance();
	virtual int Run();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CApiEngineApp(void);
private:
	int CheckFileName();
	int ProcessCommandFile();
	INT_PTR GetCommandSections(CStringArray* sections);
	int ProcessCommandSection(LPCTSTR sectionName);

// Attributes
private:
    int	_errorLevel;
	CString _appRoot;
	CString _cmdFile;
	Device* _pDevice;
};
