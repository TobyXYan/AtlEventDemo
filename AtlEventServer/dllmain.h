// dllmain.h : Declaration of module class.

class CAtlEventServerModule : public ATL::CAtlDllModuleT< CAtlEventServerModule >
{
public :
	DECLARE_LIBID(LIBID_AtlEventServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLEVENTSERVER, "{716ee8ad-4faa-4848-bf84-96aaf8a415bf}")
};

extern class CAtlEventServerModule _AtlModule;
