
// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // �� Windows ͷ���ų�����ʹ�õ�����
#endif

#define _CRT_SECURE_NO_WARNINGS
#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

// �ر� MFC ��ĳЩ�����������ɷ��ĺ��Եľ�����Ϣ������
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <afxext.h>         // MFC ��չ


#include <afxdisp.h>        // MFC �Զ�����



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �����ؼ���֧��
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC �� Windows �����ؼ���֧��
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // �������Ϳؼ����� MFC ֧��

#include <iostream>
using namespace std;

#pragma warning(disable:4800)
#pragma warning(disable:4018)

#define MAXPATHLEN 10000

#include <IAgoraRtcEngine.h>
#include <IAgoraMediaEngine.h>
#include <IAgoraRtcEngine2.h>
#pragma comment(lib, "agora_rtc_sdk.lib")
#pragma comment(lib,"libcrypto.lib")
using namespace agora::util;
using namespace agora::rtc;
using namespace agora::media;

#include "agora_sig.h"
#pragma comment(lib,"agora_sig_sdk.lib")
using namespace agora_sdk_win;

#include "AgoraObject.h"

#include "FileIO.h"
extern CConfigHQ gHQConfig; 
extern CFileIO gFileApp;

typedef struct tagQuestionAnswer
{
	int questionId;
	std::string strQuestion;
	std::vector<std::string> vecQuestionAnswers;
};

typedef struct tagQuestionStatics
{
	int ncorrectNum;
	int nTotal;
	int nresult;
	int nsid;
	std::map<std::string, int> mapSpread;
};

typedef struct tagListOfWinners
{
	int nPlayerId;
	std::string strPlayerName;
	float fPlayerBonus;
};

#include <curl.h>
#ifdef DEBUG
    #pragma comment(lib, "libcurl_imp.lib")
#else
    #pragma comment(lib, "libcurl_imp.lib")
#endif

//OBS for ExtCapture
#include <string>
#include <algorithm>
#include <vector>
#include <memory>
#include <iomanip>
#include <map>
#include <mutex>
#include <sstream>
#include <functional>

#include <util/bmem.h>
#include <util/dstr.h>
#include <util/platform.h>
#include <util/profiler.hpp>
#include <obs-config.h>
#include <obs.hpp>
#include <obs-data.h>
#include <obs.h>
#include <util/util.hpp>
#include <util/windows/win-version.h>
#include <util/threading.h>
#pragma comment(lib, "obs.lib")

#define WM_CREATE_PREVIEW     WM_USER + 1001
#define WM_DISPLAY_PREVIEW    WM_USER + 1002
#define WM_INVALIDATE_PREVIEW WM_USER + 1003
#define WM_OBS_SOURCE_DELETE  WM_USER + 1004
#define WM_OBS_SOURCE_MOVEUP  WM_USER + 1005
#define WM_OBS_SOURCE_MOVEDOWN  WM_USER + 1006
#define WM_OBS_SOURCE_MOVETOP  WM_USER + 1007
#define WM_OBS_SOURCE_MOVEBOTTOM  WM_USER + 1008
#define WM_OBS_SOURCE_FILTERS WM_USER + 1009
#define IDC_BASEWND_VIDEO               20000
//OBS end


#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif

