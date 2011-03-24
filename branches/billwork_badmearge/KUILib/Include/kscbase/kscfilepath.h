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

/********************************************************************
	created:	2010/03/06
	created:	6:3:2010   10:28
	filename: 	kscfilepath.h
	author:		Jiang Fengbing
	
	purpose:	
*********************************************************************/

#ifndef KSCFILEPATH_INC_
#define KSCFILEPATH_INC_

//////////////////////////////////////////////////////////////////////////

#include "kscbase.h"

//////////////////////////////////////////////////////////////////////////

// TODO: ��ʱ���ṩ
// typedef enum tagKPathType {
// 	FILE_EXE,			// ��ǰ���̵�exe��·��
// 	FILE_MODULE,		// ���ָ��ģ���·��
// 	DIR_WINDOWS,		// ���Windows��·����ͨ��Ϊ"c:\windows"
// 	DIR_SYSTEM,			// ���system��·����ͨ��Ϊ"c:\windows\system32"
// 	DIR_PROGRAM_FILES,	// ���Program��·����ͨ��Ϊ"c:\program files"
// 	DIR_APP_DATA,		// ���˵�Application DataĿ¼
// } KPathType;

//////////////////////////////////////////////////////////////////////////

class KFilePath 
{
public:
	KFilePath() {}
	KFilePath(const KFilePath& path) : m_strPath(path.m_strPath) {}
	explicit KFilePath(const std::wstring& strPath) : m_strPath(strPath) {}

	KFilePath& operator=(const KFilePath& path) 
	{
		m_strPath = path.m_strPath;
		return *this;
	}

	KFilePath& operator=(const std::wstring& strPath) 
	{
		m_strPath = strPath;
		return *this;
	}

	static const wchar_t m_cSeparators[];
	static const wchar_t m_cCurrentDirectory[];
	static const wchar_t m_cParentDirectory[];
	static const wchar_t m_cExtensionSeparator;

	// ���WindowsĿ¼
	static KFilePath GetWindowsPath();

	// ���System32Ŀ¼
	static KFilePath GetSystemPath();

	// ���ָ����ϵͳĿ¼
	static KFilePath GetFolderPath(int nFolder);

	// �ַ����Ƚ� ==
	bool operator==(const KFilePath& path) const;

	// �ַ����Ƚ� !=
	bool operator!=(const KFilePath& path) const;

	// ΪSTL����׼����less
	bool operator<(const KFilePath& path) const;

	// ���·���ַ���
	const std::wstring& value() const;

	// ���·���ַ�����hashֵ
	size_t hash_value() const;

	// ���·���ַ�����
	operator const wchar_t* () const;

	// �Ƿ�Ϊ��
	bool empty() const;

	// �ָ�·��
	void GetComponents(std::vector<std::wstring>& vComponents) const;

	
	bool IsParent(const KFilePath& child) const;

	// ���Ŀ¼��·��
	KFilePath DirName() const;

	// ����ļ�����·��
	KFilePath BaseName() const;

	// �����չ��(����.)
	std::wstring GetExtension() const;

	// �����չ��
	void AddExtension(const std::wstring& strExtension);

	// �Ƴ���չ��
	void RemoveExtension();

	// �滻��չ��
	void ReplaceExtension(const std::wstring& extension);

	// ��չ���Ƿ�һ��(����.)
	bool MatchesExtension(const std::wstring& extension) const;

	// �Ƿ�ΪĿ¼
	bool IsDirectory() const;

	// ׷���ַ���
	void Append(const std::wstring& strComponent);
	// ׷��·��
	void Append(const KFilePath& component);

	// �Ƴ��ļ���
	void RemoveFileSpec();

	// �ж��Ƿ����
	bool FileExists();

	// �Ƿ�Ϊ����Ŀ¼
	bool IsAbsolute() const;

	// ��β����ӷ�б��
	void AddBackslash();

	// ��β��ɾ����б��
	void RemoveBackslash();

	// ɾ��ͷ����б��
	void RemoveHeadBackslash();

	// ȥ������
	void RemoveQuotes();

	void Attach(std::wstring strFileName);
	std::wstring Detach();

	// ��HMODULE���·��
	static KFilePath GetFilePath(HMODULE hModule);

	
	static bool IsSeparator(wchar_t character);
	static bool IsDot(wchar_t character);

	KFilePath StripTrailingSeparators() const;

private:
	void StripTrailingSeparatorsInternal();

	std::wstring m_strPath;
};

//////////////////////////////////////////////////////////////////////////
// Ϊ�˿��԰�FilePath�ŵ���ϣ������

namespace stdext 
{
	inline size_t hash_value(const KFilePath& f) 
	{
		return f.hash_value();
	}

}  // namespace stdext

//////////////////////////////////////////////////////////////////////////

#endif	// KSCFILEPATH_INC_
