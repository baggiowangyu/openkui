// Copyright (c) 2010 Kingsoft Corporation. All rights reserved.
// Copyright (c) 2010 The KSafe Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "../../Include/kscbase/kscsys.h"


//////////////////////////////////////////////////////////////////////////

WinVersion KGetWinVersion() 
{
	static bool checked_version = false;
	static WinVersion win_version = WINVERSION_PRE_2000;

	if (!checked_version) 
	{
		OSVERSIONINFOEX version_info;
		version_info.dwOSVersionInfoSize = sizeof version_info;
		GetVersionEx(reinterpret_cast<OSVERSIONINFO*>(&version_info));
		if (version_info.dwMajorVersion == 5) 
		{
			switch (version_info.dwMinorVersion) 
			{
			case 0:
				win_version = WINVERSION_2000;
				break;
			case 1:
				win_version = WINVERSION_XP;
				break;
			case 2:
			default:
				win_version = WINVERSION_SERVER_2003;
				break;
			}
		} 
		else if (version_info.dwMajorVersion == 6) 
		{
			if (version_info.wProductType != VER_NT_WORKSTATION) 
			{
				// 2008 is 6.0, and 2008 R2 is 6.1.
				win_version = WINVERSION_2008;
			} 
			else 
			{
				if (version_info.dwMinorVersion == 0) 
				{
					win_version = WINVERSION_VISTA;
				} 
				else 
				{
					win_version = WINVERSION_WIN7;
				}
			}
		} 
		else if (version_info.dwMajorVersion > 6) 
		{
			win_version = WINVERSION_WIN7;
		}
		checked_version = true;
	}

	return win_version;
}

//////////////////////////////////////////////////////////////////////////

void KGetServicePackLevel(int* major, int* minor) 
{
	static bool checked_version = false;
	static int service_pack_major = -1;
	static int service_pack_minor = -1;

	if (!major || !minor)
		return;

	if (!checked_version) 
	{
		OSVERSIONINFOEX version_info = {0};
		version_info.dwOSVersionInfoSize = sizeof(version_info);
		GetVersionEx(reinterpret_cast<OSVERSIONINFOW*>(&version_info));
		service_pack_major = version_info.wServicePackMajor;
		service_pack_minor = version_info.wServicePackMinor;
		checked_version = true;
	}

	*major = service_pack_major;
	*minor = service_pack_minor;
}

//////////////////////////////////////////////////////////////////////////

int NumberOfProcessors() 
{
	SYSTEM_INFO info;
	GetSystemInfo(&info);
	return static_cast<int>(info.dwNumberOfProcessors);
}

//////////////////////////////////////////////////////////////////////////

__int64 KAmountOfPhysicalMemory() 
{
	MEMORYSTATUSEX memory_info;
	memory_info.dwLength = sizeof(memory_info);
	if (!GlobalMemoryStatusEx(&memory_info)) 
	{
		return 0;
	}

	__int64 rv = static_cast<__int64>(memory_info.ullTotalPhys);
	if (rv < 0)
		rv = 0x7FFFFFFFFFFFFFFF;
	return rv;
}

//////////////////////////////////////////////////////////////////////////

__int64 KAmountOfFreeDiskSpace(const std::wstring& path) 
{
	ULARGE_INTEGER available, total, free;
	if (!GetDiskFreeSpaceExW(path.c_str(), &available, &total, &free)) 
	{
		return -1;
	}
	__int64 rv = static_cast<__int64>(available.QuadPart);
	if (rv < 0)
		rv = 0x7FFFFFFFFFFFFFFF;
	return rv;
}

//////////////////////////////////////////////////////////////////////////

void KGetOsVersion(
	unsigned int *major_version,
	unsigned int *minor_version
	)
{
	OSVERSIONINFO info = {0};
	info.dwOSVersionInfoSize = sizeof(info);
	GetVersionEx(&info);

	if (major_version)
		*major_version = info.dwMajorVersion;

	if (minor_version)
		*minor_version = info.dwMinorVersion;
}

//////////////////////////////////////////////////////////////////////////

int KGetDisplayCount() 
{
	return GetSystemMetrics(SM_CMONITORS);
}

//////////////////////////////////////////////////////////////////////////

typedef BOOL (WINAPI *LPFN_ISWOW64PROCESS) (HANDLE, PBOOL);

BOOL IsX64System()
{
#ifndef _AMD64_
    BOOL retval = FALSE;
    BOOL bIsWow64 = FALSE;
    BOOL fRetCode;
    LPFN_ISWOW64PROCESS fnIsWow64Process = NULL;

    fnIsWow64Process = (LPFN_ISWOW64PROCESS)GetProcAddress(
        GetModuleHandle(TEXT("kernel32")), "IsWow64Process");
    if (!fnIsWow64Process)
        goto clean0;

    fRetCode = fnIsWow64Process(GetCurrentProcess(), &bIsWow64);
    if (!fRetCode)
        goto clean0;

    retval = bIsWow64;

clean0:
    return retval;
#else
    return TRUE;
#endif
}
