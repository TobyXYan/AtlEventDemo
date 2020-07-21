// Caculator.h : Declaration of the CCaculator

#pragma once
#include "resource.h"       // main symbols



#include "AtlEventServer_i.h"
#include "_ICaculatorEvents_CP.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CCaculator

class ATL_NO_VTABLE CCaculator :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCaculator, &CLSID_Caculator>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CCaculator>,
	public CProxy_ICaculatorEvents<CCaculator>,
	public IDispatchImpl<ICaculator, &IID_ICaculator, &LIBID_AtlEventServerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCaculator()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CCaculator)
	COM_INTERFACE_ENTRY(ICaculator)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CCaculator)
	CONNECTION_POINT_ENTRY(__uuidof(_ICaculatorEvents))
END_CONNECTION_POINT_MAP()
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(Add)(LONG a, LONG b, LONG* ret);
	STDMETHOD(Div)(LONG a, LONG b, LONG* ret);
};

OBJECT_ENTRY_AUTO(__uuidof(Caculator), CCaculator)
