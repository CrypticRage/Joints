#pragma once

#include <windows.h>

#include <stdio.h>
#include <tchar.h>

#ifdef _DEBUG
#define XTRACE XTrace
#else
#define XTRACE
#endif

void XTrace0(LPCTSTR lpszText);

void XTrace(LPCTSTR lpszFormat, ...);
