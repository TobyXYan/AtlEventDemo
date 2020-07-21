// Caculator.cpp : Implementation of CCaculator

#include "pch.h"
#include "Caculator.h"


// CCaculator

STDMETHODIMP CCaculator::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ICaculator
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CCaculator::Add(LONG a, LONG b, LONG* ret)
{
	// TODO: Add your implementation code here
	OLECHAR msg[256];
	wsprintf(msg, L"Sum from %ld to %ld requested...",a,b);
	Fire_EventStatus(msg);

	*ret = 0;
	for (LONG i = a; i < b; i++)
	{
		*ret += i;
		wsprintf(msg, L"Sum from %ld to %ld requested...");
		Fire_EventProgress(i, *ret);
	}
	Fire_EventStatus(L"Sum is computed");
	return S_OK;
}


STDMETHODIMP CCaculator::Div(LONG a, LONG b, LONG* ret)
{
	// TODO: Add your implementation code here
	OLECHAR msg[256];
	wsprintf(msg, L"Operation %ld / %ld requested...", a, b);
	Fire_EventStatus(msg);
	if (b == 0)
	{
		Error(L"Error - Dicision by Zero!");
		return E_FAIL;
	}

	*ret = a / b;
	wsprintf(msg, L"Operation %ld / %ld successful", a, b);
	Fire_EventStatus(msg);

	return S_OK;
}
