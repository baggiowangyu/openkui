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

#ifndef KSCSYS_INC_
#define KSCSYS_INC_

//////////////////////////////////////////////////////////////////////////

#include "kscbase.h"

//////////////////////////////////////////////////////////////////////////

typedef enum tagWinVersion {
	WINVERSION_PRE_2000 = 0,
	WINVERSION_2000 = 1,
	WINVERSION_XP = 2,
	WINVERSION_SERVER_2003 = 3,
	WINVERSION_VISTA = 4,
	WINVERSION_2008 = 5,
	WINVERSION_WIN7 = 6,
} WinVersion;

// ��ò���ϵͳ�汾
WinVersion KGetWinVersion();

// ���ServicePack�İ汾
void KGetServicePackLevel(int* major, int* minor);

// ���CPU�ĸ���
int KNumberOfProcessors();

// ��������ڴ������
__int64 KAmountOfPhysicalMemory();

// ��ô��̿��е�����
__int64 KAmountOfFreeDiskSpace(const std::wstring& path);

// ��ò���ϵͳ�İ汾��
void KGetOsVersion(unsigned int *major, unsigned int *minor);

// �����ʾ���ĸ���
int KGetDisplayCount();

// �ж���64λ����ϵͳ
BOOL IsX64System();

//////////////////////////////////////////////////////////////////////////

#endif	// KSCSYS_INC_
