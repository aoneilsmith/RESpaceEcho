//-----------------------------------------------------------------------------
// RackAFXDLL.h
//
// Interface definitions
//-----------------------------------------------------------------------------
#include "windows.h"
#include "RESpaceEcho.h" // ***

#define DllExport extern "C" __declspec(dllexport)

DllExport CPlugIn* createObject();
DllExport UINT getAPIVersion();

