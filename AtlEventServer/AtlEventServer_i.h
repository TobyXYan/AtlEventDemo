

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for AtlEventServer.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __AtlEventServer_i_h__
#define __AtlEventServer_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICaculator_FWD_DEFINED__
#define __ICaculator_FWD_DEFINED__
typedef interface ICaculator ICaculator;

#endif 	/* __ICaculator_FWD_DEFINED__ */


#ifndef ___ICaculatorEvents_FWD_DEFINED__
#define ___ICaculatorEvents_FWD_DEFINED__
typedef interface _ICaculatorEvents _ICaculatorEvents;

#endif 	/* ___ICaculatorEvents_FWD_DEFINED__ */


#ifndef __Caculator_FWD_DEFINED__
#define __Caculator_FWD_DEFINED__

#ifdef __cplusplus
typedef class Caculator Caculator;
#else
typedef struct Caculator Caculator;
#endif /* __cplusplus */

#endif 	/* __Caculator_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ICaculator_INTERFACE_DEFINED__
#define __ICaculator_INTERFACE_DEFINED__

/* interface ICaculator */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICaculator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("62dc260c-c4ab-43b1-bd52-2bd3a047bdbc")
    ICaculator : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ LONG a,
            /* [in] */ LONG b,
            /* [retval][out] */ LONG *ret) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Div( 
            /* [in] */ LONG a,
            /* [in] */ LONG b,
            /* [retval][out] */ LONG *ret) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICaculatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICaculator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICaculator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICaculator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICaculator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICaculator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICaculator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICaculator * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICaculator * This,
            /* [in] */ LONG a,
            /* [in] */ LONG b,
            /* [retval][out] */ LONG *ret);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Div )( 
            ICaculator * This,
            /* [in] */ LONG a,
            /* [in] */ LONG b,
            /* [retval][out] */ LONG *ret);
        
        END_INTERFACE
    } ICaculatorVtbl;

    interface ICaculator
    {
        CONST_VTBL struct ICaculatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICaculator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICaculator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICaculator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICaculator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICaculator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICaculator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICaculator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICaculator_Add(This,a,b,ret)	\
    ( (This)->lpVtbl -> Add(This,a,b,ret) ) 

#define ICaculator_Div(This,a,b,ret)	\
    ( (This)->lpVtbl -> Div(This,a,b,ret) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICaculator_INTERFACE_DEFINED__ */



#ifndef __AtlEventServerLib_LIBRARY_DEFINED__
#define __AtlEventServerLib_LIBRARY_DEFINED__

/* library AtlEventServerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_AtlEventServerLib;

#ifndef ___ICaculatorEvents_DISPINTERFACE_DEFINED__
#define ___ICaculatorEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ICaculatorEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__ICaculatorEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("5c4c5286-1f3f-48c6-8b47-42fc5bb2865d")
    _ICaculatorEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ICaculatorEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ICaculatorEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ICaculatorEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ICaculatorEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ICaculatorEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ICaculatorEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ICaculatorEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ICaculatorEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _ICaculatorEventsVtbl;

    interface _ICaculatorEvents
    {
        CONST_VTBL struct _ICaculatorEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ICaculatorEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ICaculatorEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ICaculatorEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ICaculatorEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ICaculatorEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ICaculatorEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ICaculatorEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ICaculatorEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Caculator;

#ifdef __cplusplus

class DECLSPEC_UUID("7c4b051b-54cf-4e68-8416-31483e7932d6")
Caculator;
#endif
#endif /* __AtlEventServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


