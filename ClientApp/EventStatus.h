#pragma once
#include "stdafx.h"


_ATL_FUNC_INFO OnEventProgressInfo =
{ CC_STDCALL, VT_EMPTY, 2, {VT_I4, VT_I4} };
_ATL_FUNC_INFO OnEventStatusInfo =
{ CC_STDCALL, VT_EMPTY, 1, {VT_BSTR} };


class CEventStatus:public IDispEventSimpleImpl<1, CEventStatus,&DIID__ICaculatorEvents>
{
private:
    ICaculatorPtr m_pCaculator;
public:
    CEventStatus(ICaculatorPtr pCal)
    {
        m_pCaculator = pCal;
        DispEventAdvise((IUnknown*)m_pCaculator);
    }

    ~CEventStatus()
    {
        DispEventUnadvise((IUnknown*)m_pCaculator);
    }

    void __stdcall OnEventProgress(LONG idx, LONG val)
    {
        std::cout << "Index: " << idx << " , value" << val << std::endl;
    }

    void __stdcall OnEventStatus(BSTR msg)
    {
        std::wcout << "Status: " << msg << std::endl;
        SysFreeString(msg);
    }
    //sink map
	BEGIN_SINK_MAP(CEventStatus)
        //Interface id, DIID, DispatchID, func, funcinfo
        SINK_ENTRY_INFO(1, DIID__ICaculatorEvents, 1, OnEventStatus,  &OnEventStatusInfo)
        SINK_ENTRY_INFO(1, DIID__ICaculatorEvents, 2, OnEventProgress,&OnEventProgressInfo)
	END_SINK_MAP()
};

