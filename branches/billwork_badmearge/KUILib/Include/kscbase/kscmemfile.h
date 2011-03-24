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

#ifndef KSCFILE_INC_
#define KSCFILE_INC_
#include <atlcoll.h>
//////////////////////////////////////////////////////////////////////////
//template class KUILIB_API _Tree<_Tmap_traits<_Kty, _Ty, _Pr, _Alloc, false> >;
//template class KUILIB_API CAtlArray<BYTE>;

class CMemFile
{
public:
    CMemFile()
    {
    }

    CMemFile(PVOID lpBuffer, DWORD dwLength)
        : m_dwCurrentPos(0)
    {
        m_buffer.SetCount(dwLength);
        memcpy(m_buffer.GetData(), lpBuffer, dwLength);
    }

    ~CMemFile()
    {
    }

    void SetData(PVOID lpBuffer, DWORD dwLength)
    {
        m_buffer.SetCount(dwLength);
        memcpy(m_buffer.GetData(), lpBuffer, dwLength);
    }

    BOOL ReadFile(LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead)
    {
        BOOL retval = FALSE;
        DWORD dwReaded;

        if (!lpBuffer || !nNumberOfBytesToRead)
            goto clean0;

        if (m_dwCurrentPos + nNumberOfBytesToRead <= m_buffer.GetCount())
        {
            dwReaded = nNumberOfBytesToRead;
        }
        else
        {
            dwReaded = (DWORD)m_buffer.GetCount() - m_dwCurrentPos;
        }

        if (0 == dwReaded)
            goto clean0;

        memcpy(lpBuffer, m_buffer.GetData() + m_dwCurrentPos, dwReaded);
        m_dwCurrentPos += dwReaded;

        if (lpNumberOfBytesRead)
            *lpNumberOfBytesRead = dwReaded;

        retval = TRUE;

clean0:
        return retval;
    }

    BOOL WriteFile(LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten)
    {
        BOOL retval = FALSE;
        DWORD dwWritten = nNumberOfBytesToWrite;

        if (!lpBuffer || !nNumberOfBytesToWrite)
            goto clean0;

        if (m_dwCurrentPos + nNumberOfBytesToWrite > m_buffer.GetCount())
        {
            m_buffer.SetCount(m_dwCurrentPos + nNumberOfBytesToWrite);
        }

        memcpy(m_buffer.GetData() + m_dwCurrentPos, lpBuffer, dwWritten);
        m_dwCurrentPos += dwWritten;

        if (lpNumberOfBytesWritten)
            *lpNumberOfBytesWritten = dwWritten;

        retval = TRUE;

clean0:
        return retval;
    }

    DWORD SetFilePointer(
        ULONG lDistanceToMove,
        PLONG lpDistanceToMoveHigh,
        DWORD dwMoveMethod
        )
    {
        DWORD retval = INVALID_SET_FILE_POINTER;

        if (FILE_CURRENT == dwMoveMethod)
        {
            if (lDistanceToMove > 0)
            {
                if (m_dwCurrentPos + lDistanceToMove < m_buffer.GetCount())
                {
                    m_dwCurrentPos += lDistanceToMove;
                }
                else
                {
                    goto clean0;
                }
            }
            else
            {
                if (m_dwCurrentPos >= lDistanceToMove)
                {
                    m_dwCurrentPos += lDistanceToMove;
                }
                else
                {
                    goto clean0;
                }
            }
        }
        else if (FILE_END == dwMoveMethod)
        {
            if (lDistanceToMove > 0)
                goto clean0;

            if (m_buffer.GetCount() + lDistanceToMove < 0)
                goto clean0;

            m_dwCurrentPos = (DWORD)m_buffer.GetCount() + lDistanceToMove;
        }
        else if (FILE_BEGIN == dwMoveMethod)
        {
            if (lDistanceToMove < 0)
                goto clean0;

            if (lDistanceToMove >= m_buffer.GetCount())
                goto clean0;

            m_dwCurrentPos = lDistanceToMove;
        }

clean0:
        return m_dwCurrentPos;
    }

    BOOL CloseHandle()
    {
        return TRUE;
    }

private:
    CAtlArray<BYTE> m_buffer;
    DWORD m_dwCurrentPos;
};

//////////////////////////////////////////////////////////////////////////

#endif  // KSCFILE_INC_
