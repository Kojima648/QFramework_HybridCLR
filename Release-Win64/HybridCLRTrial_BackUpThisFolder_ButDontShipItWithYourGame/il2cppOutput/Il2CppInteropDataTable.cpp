#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Runtime.InteropServices.ComTypes.IConnectionPoint[]
struct IConnectionPointU5BU5D_t98AB5049ED069BB1E85F5846E4DE21C9214CE603;
// System.Runtime.InteropServices.ComTypes.IMoniker[]
struct IMonikerU5BU5D_t9F39E3FDF536EEA8485D3253CC8DA08C03F7AB8E;
// System.Runtime.InteropServices.ComTypes.ITypeInfo[]
struct ITypeInfoU5BU5D_tE76CE706DFB1FD35A702349379CF0F6EDD8CA650;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct BINDPTR_t1E38E991E19B30BE988047A745F3A48C7384BE28;
struct BIND_OPTS_t44692400788732A6A814078D7693BFA9275696DB;
struct CONNECTDATA_tAB05C4CA0971BBD2F240B4F3DFDBE3EC172AF07E_marshaled_com;
struct DISPPARAMS_t8D9BD9CB3BBDF2A63F5022556C3D4F88FE937510;
struct FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805;
struct FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF;
struct Guid_t;
struct IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3;
struct IBindCtx_t5A851DDA04E33B0462BA818962ED68DCBE29782D;
struct IConnectionPointContainer_t29C2EF9A4358A5AC8D82F13C6A62AB6C0369A3BF;
struct IConnectionPoint_t1845B9B3FE83010AA93BABDE61C7548CEB210B9E;
struct IEnumConnectionPoints_t2559BF800C90D85F6C2D97825198691B5A880462;
struct IEnumConnections_t1DD00593B035913F07597F2E6DA1248A0AE0049F;
struct IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C;
struct IEnumMoniker_t7A355BC26E2383D488B655071D4ABAAD0C4A23E4;
struct IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7;
struct IEnumString_t747F70560F8E1C353FC12CB3935C0C937CA7B418;
struct IEnumVARIANT_t436A6FE96D5B88563A908C364EAB75FB63FC0D4F;
struct IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8;
struct IRunningObjectTable_tE4EC21AF9F8D2A5F448A427C8E1253A9C659A52E;
struct IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8;
struct ITypeComp_t9239FE881260744399D7472262B8593BE359013E;
struct ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D;
struct ITypeLib_tA8FAEFF0E1D6536320C8A709ABDF6A694651D5FE;
struct STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshaled_com;
struct STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com;
struct STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshaled_com;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.InteropServices.WindowsRuntime.IActivationFactory
struct NOVTABLE IActivationFactory_tE0701BB63326AE9DC14E446AE8E4043E0417DFF7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IActivationFactory_ActivateInstance_m5D4D47AEF01A9AA68E33B6BDD179DC16DB30C45E(Il2CppIInspectable** comReturnValue) = 0;
};
// System.Runtime.InteropServices.ComTypes.IAdviseSink
struct NOVTABLE IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual void STDCALL IAdviseSink_OnClose_m70409CF5A8652B9F9E90D509519F3BDB16AF2CD1() = 0;
	virtual void STDCALL IAdviseSink_OnDataChange_mE78969ED47C9BD7FCB9F255D2DD6CEF3942E51A4(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___format0, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshaled_com* ___stgmedium1) = 0;
	virtual void STDCALL IAdviseSink_OnRename_m1F028CEE5CA21748497880307AE063B4B48DB83D(IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___moniker0) = 0;
	virtual void STDCALL IAdviseSink_OnSave_m4F59C308C3DA30BACC651EC050BD6E1813D95682() = 0;
	virtual void STDCALL IAdviseSink_OnViewChange_m98E952EAC789D8795C49E0C99C78C375EEF0C595(int32_t ___aspect0, int32_t ___index1) = 0;
};
// System.Runtime.InteropServices.ComTypes.IBindCtx
struct NOVTABLE IBindCtx_t5A851DDA04E33B0462BA818962ED68DCBE29782D : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindCtx_RegisterObjectBound_mEA05E2F8BBAFC911C9528A75A3A38CF0FBE529F6(Il2CppIUnknown* ___punk0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_RevokeObjectBound_mB091AF9973D297122DF0EF20120516BBCE5CF13D(Il2CppIUnknown* ___punk0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_ReleaseBoundObjects_mB66008667DFDC683801A80E489021E26529765EB() = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_SetBindOptions_mF7BE4F732FE429DB8003B547FE9F7DCF352E1080(BIND_OPTS_t44692400788732A6A814078D7693BFA9275696DB* ___pbindopts0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_GetBindOptions_m878B7712B0033B6F77A59CC76CC9D3A180E6E194(BIND_OPTS_t44692400788732A6A814078D7693BFA9275696DB* ___pbindopts0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_GetRunningObjectTable_mD9A4F8742303E64752BE1851366271CA16911ABA(IRunningObjectTable_tE4EC21AF9F8D2A5F448A427C8E1253A9C659A52E** ___pprot0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_RegisterObjectParam_m1AA3FB0BC1265E5C6EC95F6774D4BC855DA4BC38(Il2CppChar* ___pszKey0, Il2CppIUnknown* ___punk1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_GetObjectParam_mEE9F871D44BE9522B2EA7175CE4686D09A9C65F9(Il2CppChar* ___pszKey0, Il2CppIUnknown** ___ppunk1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindCtx_EnumObjectParam_m3C31A0964FC2DBCDE2377E5594B51D410AB9007C(IEnumString_t747F70560F8E1C353FC12CB3935C0C937CA7B418** ___ppenum0) = 0;
	virtual int32_t STDCALL IBindCtx_RevokeObjectParam_mC7D93BEE777AAF4B7C717B1D779460332C4CDAED(Il2CppChar* ___pszKey0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IConnectionPoint
struct NOVTABLE IConnectionPoint_t1845B9B3FE83010AA93BABDE61C7548CEB210B9E : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IConnectionPoint_GetConnectionInterface_m76FB0F8E9B901D947097C6665CC3B5CBB1450541(Guid_t* ___pIID0) = 0;
	virtual il2cpp_hresult_t STDCALL IConnectionPoint_GetConnectionPointContainer_m0D537F5E7E84D8582DD5C99A4BE45D43267C1182(IConnectionPointContainer_t29C2EF9A4358A5AC8D82F13C6A62AB6C0369A3BF** ___ppCPC0) = 0;
	virtual il2cpp_hresult_t STDCALL IConnectionPoint_Advise_m4B2C49C3B9905789C819249BD754E12BBDEC7023(Il2CppIUnknown* ___pUnkSink0, int32_t* ___pdwCookie1) = 0;
	virtual il2cpp_hresult_t STDCALL IConnectionPoint_Unadvise_mA3FED2D853A739C7AB637027A94D4722A13E7A95(int32_t ___dwCookie0) = 0;
	virtual il2cpp_hresult_t STDCALL IConnectionPoint_EnumConnections_m1A386579B1791FEBED8E52E83E4D87A4C423AA44(IEnumConnections_t1DD00593B035913F07597F2E6DA1248A0AE0049F** ___ppEnum0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IConnectionPointContainer
struct NOVTABLE IConnectionPointContainer_t29C2EF9A4358A5AC8D82F13C6A62AB6C0369A3BF : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IConnectionPointContainer_EnumConnectionPoints_mB2088B1ED5C9AD35661D7277A31F02835048AB0F(IEnumConnectionPoints_t2559BF800C90D85F6C2D97825198691B5A880462** ___ppEnum0) = 0;
	virtual il2cpp_hresult_t STDCALL IConnectionPointContainer_FindConnectionPoint_m524835681E7609C875F97E23B8C9C7A8D4286435(Guid_t* ___riid0, IConnectionPoint_t1845B9B3FE83010AA93BABDE61C7548CEB210B9E** ___ppCP1) = 0;
};
// System.Runtime.InteropServices.ComTypes.IDataObject
struct NOVTABLE IDataObject_t47F2CDDF556578DD1CA1DD50B64223DE02046725 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IDataObject_DAdvise_mCAAAEF214024E8DD0B1D3717B3B0A2F1134DD0C8(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___pFormatetc0, int32_t ___advf1, IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3* ___adviseSink2, int32_t* ___connection3) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_DUnadvise_mD9EF6E3B4AFF2A0BDCD3170BE265CCCD22F555C7(int32_t ___connection0) = 0;
	virtual int32_t STDCALL IDataObject_EnumDAdvise_mDE7305FE0CE1B6B6347D4B4F727586816EF692D6(IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7** ___enumAdvise0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_EnumFormatEtc_mD49699F50464BDAD7C332E962C84DAEC10E8DCBB(int32_t ___direction0, IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C** comReturnValue) = 0;
	virtual int32_t STDCALL IDataObject_GetCanonicalFormatEtc_m52FDD4AA04C3F17598EF29F770CEF6BD3E31757C(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___formatIn0, FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___formatOut1) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_GetData_mE6EC9CB3087F4D991BF84012C6993FD29768E4D1(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___format0, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshaled_com* ___medium1) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_GetDataHere_m35CDE17F3593BF1C9F04BF25B3EF4570F222C910(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___format0, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshaled_com* ___medium1) = 0;
	virtual int32_t STDCALL IDataObject_QueryGetData_mF5FE51C51AA3D7B21B546D70A05E62B20A4C7F0B(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___format0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataObject_SetData_mBE666B5A54856B71B7F2982DE3D6A5D685213DF8(FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___formatIn0, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshaled_com* ___medium1, int32_t ___release2) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumFORMATETC
struct NOVTABLE IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumFORMATETC_Clone_mB4B8C3EEB64916CC3140C08EADCAF3BDEA3434FA(IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C** ___newEnum0) = 0;
	virtual int32_t STDCALL IEnumFORMATETC_Next_mECB23807C82DB2A79F2DE328F9457DF35DF8496E(int32_t ___celt0, FORMATETC_tF79DA891CDFF66CD92A30B1BEE21487CBD0A19AF* ___rgelt1, int32_t* ___pceltFetched2) = 0;
	virtual int32_t STDCALL IEnumFORMATETC_Reset_mFD53767BEA1DFCFA0A723140D4726A58A9F1A8AC() = 0;
	virtual int32_t STDCALL IEnumFORMATETC_Skip_m65473009B7661891B533A9321954EED7513F642A(int32_t ___celt0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumSTATDATA
struct NOVTABLE IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEnumSTATDATA_Clone_mA575C8AB14E6EDF3BE968275B6FA10490211DD3F(IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7** ___newEnum0) = 0;
	virtual int32_t STDCALL IEnumSTATDATA_Next_m4113E1F41A012CF7C39526A46C76EC1032EC8070(int32_t ___celt0, STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshaled_com* ___rgelt1, int32_t* ___pceltFetched2) = 0;
	virtual int32_t STDCALL IEnumSTATDATA_Reset_m9ABF2C5C0F8E8014E47C9C016906EABFA7B8A289() = 0;
	virtual int32_t STDCALL IEnumSTATDATA_Skip_m8E0A9ED88D8297E9AFA8D3597D200EF343954D9C(int32_t ___celt0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IMoniker
struct NOVTABLE IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMoniker_GetClassID_mE57C74F4A783A2B094289C30F5822EA262C84D5A(Guid_t* ___pClassID0) = 0;
	virtual int32_t STDCALL IMoniker_IsDirty_mFB243EF5FD7A2B2A258E756BB93F19171BC7CA93() = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_Load_mEE7415E4B1E27E2AB2A38E04B48F8B0B7DA58DA4(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___pStm0) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_Save_m627B0173C4616B93600295933380AAE701A7CE9C(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___pStm0, int32_t ___fClearDirty1) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_GetSizeMax_m62DA3988993BC8B7264E37BA9F66CB6B48F1432E(int64_t* ___pcbSize0) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_BindToObject_mB731FB520ECE5B8DD659EAFD330F4E232EEEEF21(IBindCtx_t5A851DDA04E33B0462BA818962ED68DCBE29782D* ___pbc0, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkToLeft1, Guid_t* ___riidResult2, Il2CppIUnknown** ___ppvResult3) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_BindToStorage_mA9E6A8E6C87A08E70B215CE4B8C0A099F5EA1D58(IBindCtx_t5A851DDA04E33B0462BA818962ED68DCBE29782D* ___pbc0, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkToLeft1, Guid_t* ___riid2, Il2CppIUnknown** ___ppvObj3) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_Reduce_mF11AA699C69E6795C5C986A6A4B3E7ACDE61C520(IBindCtx_t5A851DDA04E33B0462BA818962ED68DCBE29782D* ___pbc0, int32_t ___dwReduceHowFar1, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8** ___ppmkToLeft2, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8** ___ppmkReduced3) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_ComposeWith_mCAB28464EBE8537BB2959C9C0134BA8E1CD0C7A8(IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkRight0, int32_t ___fOnlyIfNotGeneric1, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8** ___ppmkComposite2) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_Enum_m01E22FCFE09F2914794CDA9064BC568628EF8995(int32_t ___fForward0, IEnumMoniker_t7A355BC26E2383D488B655071D4ABAAD0C4A23E4** ___ppenumMoniker1) = 0;
	virtual int32_t STDCALL IMoniker_IsEqual_mF4CDC378C784CB48F56997913DC65975B64DF503(IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkOtherMoniker0) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_Hash_m49A5185169C30ECEE681B7DBC331060E1E43FE70(int32_t* ___pdwHash0) = 0;
	virtual int32_t STDCALL IMoniker_IsRunning_m151D07668AE084ECE3BE53C5CCAFDED1835605D3(IBindCtx_t5A851DDA04E33B0462BA818962ED68DCBE29782D* ___pbc0, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkToLeft1, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkNewlyRunning2) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_GetTimeOfLastChange_m84E34D9B0C7B81DF7C1D7EFBE1681C58B5AEF0F8(IBindCtx_t5A851DDA04E33B0462BA818962ED68DCBE29782D* ___pbc0, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkToLeft1, FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805* ___pFileTime2) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_Inverse_m90B7748005A9CE054964A3BE9A5AA61E1E112DDC(IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8** ___ppmk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_CommonPrefixWith_m0531DD8973BB0B2D8D0ACFA3BCD828564080C136(IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkOther0, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8** ___ppmkPrefix1) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_RelativePathTo_mD2287F24636AAD71C38A02594920EB1DFB605FF3(IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkOther0, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8** ___ppmkRelPath1) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_GetDisplayName_m20CA0AAC1F6D2B7D4406365D1FAE47A61E63A54C(IBindCtx_t5A851DDA04E33B0462BA818962ED68DCBE29782D* ___pbc0, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkToLeft1, Il2CppChar** ___ppszDisplayName2) = 0;
	virtual il2cpp_hresult_t STDCALL IMoniker_ParseDisplayName_mA927A5678B84038F7BF49D3324CD047678D4E1A3(IBindCtx_t5A851DDA04E33B0462BA818962ED68DCBE29782D* ___pbc0, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkToLeft1, Il2CppChar* ___pszDisplayName2, int32_t* ___pchEaten3, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8** ___ppmkOut4) = 0;
	virtual int32_t STDCALL IMoniker_IsSystemMoniker_mA79FA81F1FC4ADBDEF46B361DEF0BB662B242907(int32_t* ___pdwMksys0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IPersistFile
struct NOVTABLE IPersistFile_t0904887F33EA8B6D57A5F44E039BD71002616EE6 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPersistFile_GetClassID_m7BC9FA37EDD5E2C7777DFCB2423905693CF446E3(Guid_t* ___pClassID0) = 0;
	virtual int32_t STDCALL IPersistFile_IsDirty_mEED55CFA9EA1AF85164861CC6B1AD381F9F62E5F() = 0;
	virtual il2cpp_hresult_t STDCALL IPersistFile_Load_mD44DEC2BF12136EBC1FFC13EE8243717DC91B3F2(Il2CppChar* ___pszFileName0, int32_t ___dwMode1) = 0;
	virtual il2cpp_hresult_t STDCALL IPersistFile_Save_m3260E29340221855B2D2E0991E4731282D3E0869(Il2CppChar* ___pszFileName0, int32_t ___fRemember1) = 0;
	virtual il2cpp_hresult_t STDCALL IPersistFile_SaveCompleted_m34375DB6CC88DC489CF9F86A78459A18854D415A(Il2CppChar* ___pszFileName0) = 0;
	virtual il2cpp_hresult_t STDCALL IPersistFile_GetCurFile_mA46F871FA303233FDCA3233E81E01A97AC15870B(Il2CppChar** ___ppszFileName0) = 0;
};
// System.Runtime.InteropServices.WindowsRuntime.IRestrictedErrorInfo
struct NOVTABLE IRestrictedErrorInfo_tC6B9BF4F49654260223FA77AB4415C965370423D : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRestrictedErrorInfo_GetErrorDetails_m93D804D70CEA1B6FCD13B8A3E7ECD582D5A6A2D4(Il2CppChar** ___description0, int32_t* ___error1, Il2CppChar** ___restrictedDescription2, Il2CppChar** ___capabilitySid3) = 0;
	virtual il2cpp_hresult_t STDCALL IRestrictedErrorInfo_GetReference_m389358DCD780CF8B252C99580A141449A03CCF36(Il2CppChar** ___reference0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IRunningObjectTable
struct NOVTABLE IRunningObjectTable_tE4EC21AF9F8D2A5F448A427C8E1253A9C659A52E : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRunningObjectTable_Register_m949A312464D8E35406AB99B461D3B9CF364D1B6D(int32_t ___grfFlags0, Il2CppIUnknown* ___punkObject1, IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkObjectName2, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRunningObjectTable_Revoke_m7BC5E8B7ABE43E6D39A03B34DF711C8D35034263(int32_t ___dwRegister0) = 0;
	virtual int32_t STDCALL IRunningObjectTable_IsRunning_m4BFEEAC8A3DA1821189E8F0093E279350EF881A5(IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkObjectName0) = 0;
	virtual int32_t STDCALL IRunningObjectTable_GetObject_m1B8ED8F0A2FE8E453AB5E17C0E4D71F7370111BE(IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkObjectName0, Il2CppIUnknown** ___ppunkObject1) = 0;
	virtual il2cpp_hresult_t STDCALL IRunningObjectTable_NoteChangeTime_mB4FFBD9C239389D0B6E5B01E3286FD908542FA97(int32_t ___dwRegister0, FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805* ___pfiletime1) = 0;
	virtual int32_t STDCALL IRunningObjectTable_GetTimeOfLastChange_m2EBDDDE9B68DB3DAEC6E9B34970D3DBD0AC2208E(IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8* ___pmkObjectName0, FILETIME_t92E78BA7EF91CA3453C080B551E3C610CE97F805* ___pfiletime1) = 0;
	virtual il2cpp_hresult_t STDCALL IRunningObjectTable_EnumRunning_mE20BBDC0DE58E435FD5EC117B58233AFC0428DDA(IEnumMoniker_t7A355BC26E2383D488B655071D4ABAAD0C4A23E4** ___ppenumMoniker0) = 0;
};
// System.Runtime.InteropServices.ComTypes.ITypeComp
struct NOVTABLE ITypeComp_t9239FE881260744399D7472262B8593BE359013E : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITypeComp_Bind_mA282AC88F8ECFDEF5D867397A0C0030C779E69D2(Il2CppChar* ___szName0, int32_t ___lHashVal1, int16_t ___wFlags2, ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D** ___ppTInfo3, int32_t* ___pDescKind4, BINDPTR_t1E38E991E19B30BE988047A745F3A48C7384BE28* ___pBindPtr5) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeComp_BindType_m433C39589F8A0E5CF13ECC0B24C97E52701C0D67(Il2CppChar* ___szName0, int32_t ___lHashVal1, ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D** ___ppTInfo2, ITypeComp_t9239FE881260744399D7472262B8593BE359013E** ___ppTComp3) = 0;
};

// System.Diagnostics.PerformanceCounterManager
struct PerformanceCounterManager_t0BF17759AF043AB149940CFB1D6A1A90EE791E6F  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

};

// System.Runtime.InteropServices.RegistrationServices
struct RegistrationServices_tADB40F4906A07C56AD5199519662509DAC8EC8A1  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

};

// System.Runtime.InteropServices.TypeLibConverter
struct TypeLibConverter_t8F69A7316AC99DA4B93CF4886E17363EBA2F71BF  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};
// System.Runtime.InteropServices.ComTypes.IEnumConnectionPoints
struct NOVTABLE IEnumConnectionPoints_t2559BF800C90D85F6C2D97825198691B5A880462 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IEnumConnectionPoints_Next_m423879D9E534CD429DD843B351BAA90C21F9921C(int32_t ___celt0, IConnectionPointU5BU5D_t98AB5049ED069BB1E85F5846E4DE21C9214CE603* ___rgelt1, intptr_t ___pceltFetched2) = 0;
	virtual int32_t STDCALL IEnumConnectionPoints_Skip_m9CEDE11F63E84F58D45B2BC64C7D489D75C444D5(int32_t ___celt0) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumConnectionPoints_Reset_mB4B179427B08C3B6B5DFCBA08F80A608372D78FF() = 0;
	virtual il2cpp_hresult_t STDCALL IEnumConnectionPoints_Clone_m4901964927EADB2E35B6967ABCEAE2833973310C(IEnumConnectionPoints_t2559BF800C90D85F6C2D97825198691B5A880462** ___ppenum0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumConnections
struct NOVTABLE IEnumConnections_t1DD00593B035913F07597F2E6DA1248A0AE0049F : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IEnumConnections_Next_mDE759A2956E5A32219F0BAE69AB3DEE4B25E97B3(int32_t ___celt0, CONNECTDATA_tAB05C4CA0971BBD2F240B4F3DFDBE3EC172AF07E_marshaled_com* ___rgelt1, intptr_t ___pceltFetched2) = 0;
	virtual int32_t STDCALL IEnumConnections_Skip_m74F17F02C7C4A51EF4A510D42BC7AD1B1050BFB7(int32_t ___celt0) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumConnections_Reset_m0AEC4534A9961ECFA35A7692C995B367F8431CF6() = 0;
	virtual il2cpp_hresult_t STDCALL IEnumConnections_Clone_m78CAF33A46A6CC90752023E09AFD6979EA55F63D(IEnumConnections_t1DD00593B035913F07597F2E6DA1248A0AE0049F** ___ppenum0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumMoniker
struct NOVTABLE IEnumMoniker_t7A355BC26E2383D488B655071D4ABAAD0C4A23E4 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IEnumMoniker_Next_m35E1522FBEB3A8EBC8FFF84B64F13DA714CAB6D9(int32_t ___celt0, IMonikerU5BU5D_t9F39E3FDF536EEA8485D3253CC8DA08C03F7AB8E* ___rgelt1, intptr_t ___pceltFetched2) = 0;
	virtual int32_t STDCALL IEnumMoniker_Skip_mA09016E684907DEA8AE13230133D7C201DE43249(int32_t ___celt0) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumMoniker_Reset_mC9793A19E0CB223353EADC5D191279F82678349E() = 0;
	virtual il2cpp_hresult_t STDCALL IEnumMoniker_Clone_mEBF91CE6CEE73E1C3EC222FC75DA6C426DB213F7(IEnumMoniker_t7A355BC26E2383D488B655071D4ABAAD0C4A23E4** ___ppenum0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumString
struct NOVTABLE IEnumString_t747F70560F8E1C353FC12CB3935C0C937CA7B418 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IEnumString_Next_mA04A47890399FC10DDC7500C02A3CC01874F6F4C(int32_t ___celt0, Il2CppChar** ___rgelt1, intptr_t ___pceltFetched2) = 0;
	virtual int32_t STDCALL IEnumString_Skip_mECE5D4611B8D699F318BCA45F4CFB098C4C6BD79(int32_t ___celt0) = 0;
	virtual il2cpp_hresult_t STDCALL IEnumString_Reset_m0F402B074BC4DE49B55E09C0DAF97EB1CD7DF001() = 0;
	virtual il2cpp_hresult_t STDCALL IEnumString_Clone_mD9A41DAE8E34C11D42EE412ED52E1CC44D9779F7(IEnumString_t747F70560F8E1C353FC12CB3935C0C937CA7B418** ___ppenum0) = 0;
};
// System.Runtime.InteropServices.ComTypes.IEnumVARIANT
struct NOVTABLE IEnumVARIANT_t436A6FE96D5B88563A908C364EAB75FB63FC0D4F : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL IEnumVARIANT_Next_m1D01168D370CB6B90DA6F2D235CAAC9A838CFF9C(int32_t ___celt0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___rgVar1, intptr_t ___pceltFetched2) = 0;
	virtual int32_t STDCALL IEnumVARIANT_Skip_m9EC906A3BFE7C63C543466FE9982C0FF9843AF76(int32_t ___celt0) = 0;
	virtual int32_t STDCALL IEnumVARIANT_Reset_m68DABEEAACA7DD9EF4E3FCFC3D82AC13C804EA19() = 0;
	virtual il2cpp_hresult_t STDCALL IEnumVARIANT_Clone_m72CCB3D06A8269EB7A184942E71FB79808AD3EF4(IEnumVARIANT_t436A6FE96D5B88563A908C364EAB75FB63FC0D4F** comReturnValue) = 0;
};
// System.Runtime.InteropServices.ComTypes.IStream
struct NOVTABLE IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStream_Read_m2C18A70C6ECA31F767BF0CC3477B83523207A900(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbRead2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Write_m670F053D42AA47C653A0EF46F51BE37FB71EDDAB(uint8_t* ___pv0, int32_t ___cb1, intptr_t ___pcbWritten2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Seek_mB2D1B0341C11684803404EA5B7D2E15178A2E8D3(int64_t ___dlibMove0, int32_t ___dwOrigin1, intptr_t ___plibNewPosition2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_SetSize_mE60689A2DEAC6E1CFBA2BCF5B34F40F50AECD623(int64_t ___libNewSize0) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_CopyTo_m4A1FB28F5A8226242BC536D3A1DAD2A0279C3192(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___pstm0, int64_t ___cb1, intptr_t ___pcbRead2, intptr_t ___pcbWritten3) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Commit_m01764D26CFDDBC04417FAB93CC592E79F43D1F7E(int32_t ___grfCommitFlags0) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Revert_m7DF44D9E9F3C73A586132085850395B3F68CA8E6() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_LockRegion_mC30C8770444E0C9F3CB329146F99F0D7FED492B8(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_UnlockRegion_m6F712F969C05F21E6854E72503759EAFA2909C6B(int64_t ___libOffset0, int64_t ___cb1, int32_t ___dwLockType2) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Stat_m1F6AE8FB47EDE4B77CE22F0B1DB2FEE81FB7FB04(STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshaled_com* ___pstatstg0, int32_t ___grfStatFlag1) = 0;
	virtual il2cpp_hresult_t STDCALL IStream_Clone_m75F797905BA25E8CA4DFC63D35DDF5A6670E3A0E(IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8** ___ppstm0) = 0;
};
// System.Runtime.InteropServices.ComTypes.ITypeInfo
struct NOVTABLE ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetTypeAttr_m95FA3FA9D8C43319DE120D867FBE8EF750F30A49(intptr_t* ___ppTypeAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetTypeComp_mFEBD509608D49D62DB04E60F9014EDC5C4D8E4A1(ITypeComp_t9239FE881260744399D7472262B8593BE359013E** ___ppTComp0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetFuncDesc_m409233C5E200A125D7C719C059BD1E8A7E2DBC02(int32_t ___index0, intptr_t* ___ppFuncDesc1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetVarDesc_mB436B67A390708C8931622C29D7FF7AC35C25105(int32_t ___index0, intptr_t* ___ppVarDesc1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetNames_m75103EFDA345FF83588E143BDE308DD885C9C715(int32_t ___memid0, Il2CppChar** ___rgBstrNames1, int32_t ___cMaxNames2, int32_t* ___pcNames3) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetRefTypeOfImplType_m3ABE2C9A3AA02EF85D02FCF825BA62B6E278F7D5(int32_t ___index0, int32_t* ___href1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetImplTypeFlags_m29371BE28C3F180249691F537E14C0EA4954587F(int32_t ___index0, int32_t* ___pImplTypeFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetIDsOfNames_m0938A380AB324DFE35B65755C8FA7268FAFC59F4(Il2CppChar** ___rgszNames0, int32_t ___cNames1, int32_t* ___pMemId2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_Invoke_m677F89C0EFCBECC70A915FAF98E9B330886096FF(Il2CppIUnknown* ___pvInstance0, int32_t ___memid1, int16_t ___wFlags2, DISPPARAMS_t8D9BD9CB3BBDF2A63F5022556C3D4F88FE937510* ___pDispParams3, intptr_t ___pVarResult4, intptr_t ___pExcepInfo5, int32_t* ___puArgErr6) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetDocumentation_mE07F98008648928E98A12998049941EA78093F10(int32_t ___index0, Il2CppChar** ___strName1, Il2CppChar** ___strDocString2, int32_t* ___dwHelpContext3, Il2CppChar** ___strHelpFile4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetDllEntry_m23B571F4C4F4EED72FE32B2AAA33831074124D5F(int32_t ___memid0, int32_t ___invKind1, intptr_t ___pBstrDllName2, intptr_t ___pBstrName3, intptr_t ___pwOrdinal4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetRefTypeInfo_mAB1EE1F3F37602C6B77E910D04BDD7A88BA37427(int32_t ___hRef0, ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D** ___ppTI1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_AddressOfMember_m37EEC319B0B6404A71058C5518627A6FD060E167(int32_t ___memid0, int32_t ___invKind1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_CreateInstance_mD9D3C85D187FE839038B34B8B850BA09B512C015(Il2CppIUnknown* ___pUnkOuter0, Guid_t* ___riid1, Il2CppIUnknown** ___ppvObj2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetMops_m3ADE97F4299D137EE6D2B6BF5CFA88BFC6D54CFB(int32_t ___memid0, Il2CppChar** ___pBstrMops1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo_GetContainingTypeLib_m50CAC4C3E222B0A38F99F2C1DD58F2729067B587(ITypeLib_tA8FAEFF0E1D6536320C8A709ABDF6A694651D5FE** ___ppTLB0, int32_t* ___pIndex1) = 0;
	virtual void STDCALL ITypeInfo_ReleaseTypeAttr_m885E21E6F30280580DB31C2169E2670E412AF9FA(intptr_t ___pTypeAttr0) = 0;
	virtual void STDCALL ITypeInfo_ReleaseFuncDesc_m05C306B447E82AE328FAD1419B0361F6B9454CD9(intptr_t ___pFuncDesc0) = 0;
	virtual void STDCALL ITypeInfo_ReleaseVarDesc_m900A001504CE163588F757FFD86362FDC0557408(intptr_t ___pVarDesc0) = 0;
};
// System.Runtime.InteropServices.ComTypes.ITypeInfo2
struct NOVTABLE ITypeInfo2_tA70FE09087E040396B06F5E73C3091F1BEDF4260 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetTypeAttr_m4E91298F27DCF723756CA179569A788A53A62CE3(intptr_t* ___ppTypeAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetTypeComp_mEF9744A58F33F17A2FDCC34496943756E2620F9A(ITypeComp_t9239FE881260744399D7472262B8593BE359013E** ___ppTComp0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetFuncDesc_m32C9B587A2A4AA9698FA5473C3B3EE5C4019A207(int32_t ___index0, intptr_t* ___ppFuncDesc1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetVarDesc_m12F89DA43CB7F4646788DB95D396049EBE22B452(int32_t ___index0, intptr_t* ___ppVarDesc1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetNames_m73345F3B4FE99A721C4B76F9C3D85454888641DC(int32_t ___memid0, Il2CppChar** ___rgBstrNames1, int32_t ___cMaxNames2, int32_t* ___pcNames3) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetRefTypeOfImplType_m8560661B0B9AF73BCB1F2AE39FFED243ADDA1D6E(int32_t ___index0, int32_t* ___href1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetImplTypeFlags_m803F56B311CE39DF30E1B0393EBD07C0C73E9A2A(int32_t ___index0, int32_t* ___pImplTypeFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetIDsOfNames_m41F9DC6BF5B7EEFD7A46B939969802FA6826C3CF(Il2CppChar** ___rgszNames0, int32_t ___cNames1, int32_t* ___pMemId2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_Invoke_m1F1872E490C79AA5924BE2C865F5272962E1F6F9(Il2CppIUnknown* ___pvInstance0, int32_t ___memid1, int16_t ___wFlags2, DISPPARAMS_t8D9BD9CB3BBDF2A63F5022556C3D4F88FE937510* ___pDispParams3, intptr_t ___pVarResult4, intptr_t ___pExcepInfo5, int32_t* ___puArgErr6) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetDocumentation_m226E1ECC6B993F6CE5B6F5CC1500CF9E1DA7B3E2(int32_t ___index0, Il2CppChar** ___strName1, Il2CppChar** ___strDocString2, int32_t* ___dwHelpContext3, Il2CppChar** ___strHelpFile4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetDllEntry_m6387369D4B0799B1EE6E29BB3C948B517BC5B71D(int32_t ___memid0, int32_t ___invKind1, intptr_t ___pBstrDllName2, intptr_t ___pBstrName3, intptr_t ___pwOrdinal4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetRefTypeInfo_m0A6E293506517992E9C6B016FD7962BC1C840AD1(int32_t ___hRef0, ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D** ___ppTI1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_AddressOfMember_m7FA80EA56E57C038EE90A910F6D4119280714776(int32_t ___memid0, int32_t ___invKind1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_CreateInstance_m6D88A486A7807C777C520D81B4810F3626E3A401(Il2CppIUnknown* ___pUnkOuter0, Guid_t* ___riid1, Il2CppIUnknown** ___ppvObj2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetMops_m176FEF77131598435E63261CB64409791915A4E0(int32_t ___memid0, Il2CppChar** ___pBstrMops1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetContainingTypeLib_mA16BBA67AFAEA27CD4E246210EF3402FC180B505(ITypeLib_tA8FAEFF0E1D6536320C8A709ABDF6A694651D5FE** ___ppTLB0, int32_t* ___pIndex1) = 0;
	virtual void STDCALL ITypeInfo2_ReleaseTypeAttr_m188AC0DE0C269D6E914D79008257BADAB8D5A0CF(intptr_t ___pTypeAttr0) = 0;
	virtual void STDCALL ITypeInfo2_ReleaseFuncDesc_m5DE2A0D843C135CE777C28A430B52A66C1886325(intptr_t ___pFuncDesc0) = 0;
	virtual void STDCALL ITypeInfo2_ReleaseVarDesc_m6FC36E5FE9DC010EA69801ACCD720EE00C70E19D(intptr_t ___pVarDesc0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetTypeKind_mD57494E4C9CBC735650C05E8DB1024B37F51E58A(int32_t* ___pTypeKind0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetTypeFlags_m6F76AD2DFF97BAAEF0E15699E0136BDDE8C81F3E(int32_t* ___pTypeFlags0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetFuncIndexOfMemId_mC30FBCF2AF495277CDFA6F1D90EB3FAA26FA1188(int32_t ___memid0, int32_t ___invKind1, int32_t* ___pFuncIndex2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetVarIndexOfMemId_m4B3E2D709081B2AC4D49936EFCA573BC0AC67368(int32_t ___memid0, int32_t* ___pVarIndex1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetCustData_mDA890EC5C68133605C548B5128ED57081C30F6C1(Guid_t* ___guid0, Il2CppVariant* ___pVarVal1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetFuncCustData_m9125EFDC79C113C9A4BED5520E486EF6D93099B5(int32_t ___index0, Guid_t* ___guid1, Il2CppVariant* ___pVarVal2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetParamCustData_mBC4CE8DF47ED40360A69518EBA24516D06321873(int32_t ___indexFunc0, int32_t ___indexParam1, Guid_t* ___guid2, Il2CppVariant* ___pVarVal3) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetVarCustData_m8AB8D66F9D504B3CB9D44A8996D67F8E7F5DC9EA(int32_t ___index0, Guid_t* ___guid1, Il2CppVariant* ___pVarVal2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetImplTypeCustData_m4BCC3927E0D27E6E17662073518D9174471AA159(int32_t ___index0, Guid_t* ___guid1, Il2CppVariant* ___pVarVal2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetDocumentation2_m8C28738270685E95101FA265F06F08D8F9415575(int32_t ___memid0, Il2CppChar** ___pbstrHelpString1, int32_t* ___pdwHelpStringContext2, Il2CppChar** ___pbstrHelpStringDll3) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetAllCustData_mAB02D5B9947994953245E221DE973C5056723EB6(intptr_t ___pCustData0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetAllFuncCustData_m5D0E2F1552687F226424CDA11B1644CD3945B575(int32_t ___index0, intptr_t ___pCustData1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetAllParamCustData_m11D84DF86B0EF9E194DCE999B92910A1EE0998DE(int32_t ___indexFunc0, int32_t ___indexParam1, intptr_t ___pCustData2) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetAllVarCustData_m0CF8FD5C5C681039592B275BC0585A061F3E7970(int32_t ___index0, intptr_t ___pCustData1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeInfo2_GetAllImplTypeCustData_m943D48C661B74653F80D39193B212CFFD522E3E7(int32_t ___index0, intptr_t ___pCustData1) = 0;
};
// System.Runtime.InteropServices.ComTypes.ITypeLib
struct NOVTABLE ITypeLib_tA8FAEFF0E1D6536320C8A709ABDF6A694651D5FE : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL ITypeLib_GetTypeInfoCount_m9568F70B285491484AA9943FD193EAE721BA107F() = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_GetTypeInfo_m03175AF05763528BD5A5B19E0D5BAAC1A222F3B6(int32_t ___index0, ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D** ___ppTI1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_GetTypeInfoType_m8DFC71D555A4509A3F01F32DF1023D60E3A5FAAF(int32_t ___index0, int32_t* ___pTKind1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_GetTypeInfoOfGuid_m7DCAB41430356905E6161735AE2A9A80C35FA0B1(Guid_t* ___guid0, ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D** ___ppTInfo1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_GetLibAttr_mBDA65482FC8EA96373AA4FF796084CF4201C210B(intptr_t* ___ppTLibAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_GetTypeComp_m22B53DA4238C3F9589B325618CC019D1F46B8FBA(ITypeComp_t9239FE881260744399D7472262B8593BE359013E** ___ppTComp0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_GetDocumentation_mDE705B619DC2B1E8F7B986F92F12924323D56A1C(int32_t ___index0, Il2CppChar** ___strName1, Il2CppChar** ___strDocString2, int32_t* ___dwHelpContext3, Il2CppChar** ___strHelpFile4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_IsName_m7E364E4B47DB52B3E848B16EA4769FD2D5533858(Il2CppChar* ___szNameBuf0, int32_t ___lHashVal1, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib_FindName_m0554DB157F940A957C9FE3F5FB366C1B674707AC(Il2CppChar* ___szNameBuf0, int32_t ___lHashVal1, ITypeInfoU5BU5D_tE76CE706DFB1FD35A702349379CF0F6EDD8CA650* ___ppTInfo2, int32_t* ___rgMemId3, int16_t* ___pcFound4) = 0;
	virtual void STDCALL ITypeLib_ReleaseTLibAttr_m89665A575C3AF909AAED6B95256C946DD79F641E(intptr_t ___pTLibAttr0) = 0;
};
// System.Runtime.InteropServices.ComTypes.ITypeLib2
struct NOVTABLE ITypeLib2_tD652EA1A3767EBD75060689FA815CD8EF790D344 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual int32_t STDCALL ITypeLib2_GetTypeInfoCount_m09B290279BD58636C7CB9266F62BBAE054E29DDD() = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetTypeInfo_mD04FD39241DB287659627392991E21ECCE02BBBC(int32_t ___index0, ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D** ___ppTI1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetTypeInfoType_m34ACD80EE9E8E704521FCDBC6845C0C15F94C318(int32_t ___index0, int32_t* ___pTKind1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetTypeInfoOfGuid_m573A47795C2B9B8397C4898D5F090927E4FA6814(Guid_t* ___guid0, ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D** ___ppTInfo1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetLibAttr_mB662C333253FD8141E882A838DD6C583D00E2C01(intptr_t* ___ppTLibAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetTypeComp_mA8D9FECB74E350ACB985C483E852711C8F412DAE(ITypeComp_t9239FE881260744399D7472262B8593BE359013E** ___ppTComp0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetDocumentation_m4EE8CD4C5CA2E1A7F0D23E5807FE3D7345507937(int32_t ___index0, Il2CppChar** ___strName1, Il2CppChar** ___strDocString2, int32_t* ___dwHelpContext3, Il2CppChar** ___strHelpFile4) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_IsName_m31173CA8A62AD776EDA89F3443A18E8BBCEE67FC(Il2CppChar* ___szNameBuf0, int32_t ___lHashVal1, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_FindName_m4EDAC1349C0F569162F19650E30E6B7365E8624A(Il2CppChar* ___szNameBuf0, int32_t ___lHashVal1, ITypeInfoU5BU5D_tE76CE706DFB1FD35A702349379CF0F6EDD8CA650* ___ppTInfo2, int32_t* ___rgMemId3, int16_t* ___pcFound4) = 0;
	virtual void STDCALL ITypeLib2_ReleaseTLibAttr_m581E3A6BADD8226CCC0EF5A42B7437B2BE9DA2FD(intptr_t ___pTLibAttr0) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetCustData_mB5048674FC3704232CAF8AB31DB127EBA86168DB(Guid_t* ___guid0, Il2CppVariant* ___pVarVal1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetDocumentation2_mDC74FAFFB871F32D75870E27506CA54A449573C8(int32_t ___index0, Il2CppChar** ___pbstrHelpString1, int32_t* ___pdwHelpStringContext2, Il2CppChar** ___pbstrHelpStringDll3) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetLibStatistics_m888165D179EA3B0082F3BCB2462A1B21CE0D1C01(intptr_t ___pcUniqueNames0, int32_t* ___pcchUniqueNames1) = 0;
	virtual il2cpp_hresult_t STDCALL ITypeLib2_GetAllCustData_m6026E39C9E5AAC8557209FB32F067A287BD4F34A(intptr_t ___pCustData0) = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07();
IL2CPP_EXTERN_C_CONST RuntimeType Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0;
IL2CPP_EXTERN_C void Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F();
IL2CPP_EXTERN_C_CONST RuntimeType AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0;
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_0_0_0;
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_0_0_0;
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_0_0_0;
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_0_0_0;
IL2CPP_EXTERN_C void AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AppDomainInitializer_tED36272F704E9A95E8FEFFD67EECA50F089B4D1A();
IL2CPP_EXTERN_C_CONST RuntimeType AppDomainInitializer_tED36272F704E9A95E8FEFFD67EECA50F089B4D1A_0_0_0;
IL2CPP_EXTERN_C void AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_0_0_0;
IL2CPP_EXTERN_C void ArrayWithOffset_t45E53DF36D8D675E689DBF4BEFBCCAD37AED016D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ArrayWithOffset_t45E53DF36D8D675E689DBF4BEFBCCAD37AED016D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ArrayWithOffset_t45E53DF36D8D675E689DBF4BEFBCCAD37AED016D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ArrayWithOffset_t45E53DF36D8D675E689DBF4BEFBCCAD37AED016D_0_0_0;
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Assembly_t_0_0_0;
IL2CPP_EXTERN_C void AssemblyHash_t7D834D541747557EA5DB62E27949A643CBE4DB80_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssemblyHash_t7D834D541747557EA5DB62E27949A643CBE4DB80_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssemblyHash_t7D834D541747557EA5DB62E27949A643CBE4DB80_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssemblyHash_t7D834D541747557EA5DB62E27949A643CBE4DB80_0_0_0;
IL2CPP_EXTERN_C void AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_0_0_0;
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_0_0_0;
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_0_0_0;
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_0_0_0;
IL2CPP_EXTERN_C void AsyncFlowControl_t1BB65380CA8AA973CAE0814179796E762403EF92_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncFlowControl_t1BB65380CA8AA973CAE0814179796E762403EF92_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncFlowControl_t1BB65380CA8AA973CAE0814179796E762403EF92_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncFlowControl_t1BB65380CA8AA973CAE0814179796E762403EF92_0_0_0;
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_0_0_0;
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_0_0_0;
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_0_0_0;
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_0_0_0;
IL2CPP_EXTERN_C void AsyncReadManagerSummaryMetrics_t6966444257D63705ED391CADAEE69D564FBA5AEB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncReadManagerSummaryMetrics_t6966444257D63705ED391CADAEE69D564FBA5AEB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncReadManagerSummaryMetrics_t6966444257D63705ED391CADAEE69D564FBA5AEB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncReadManagerSummaryMetrics_t6966444257D63705ED391CADAEE69D564FBA5AEB_0_0_0;
IL2CPP_EXTERN_C void AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_0_0_0;
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_0_0_0;
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_0_0_0;
IL2CPP_EXTERN_C void Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_0_0_0;
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0;
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_0_0_0;
IL2CPP_EXTERN_C void BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_0_0_0;
IL2CPP_EXTERN_C void CONNECTDATA_tDB40BBD2AC7222D8EDF99075F08E296A31ED8B1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CONNECTDATA_tDB40BBD2AC7222D8EDF99075F08E296A31ED8B1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CONNECTDATA_tDB40BBD2AC7222D8EDF99075F08E296A31ED8B1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CONNECTDATA_tDB40BBD2AC7222D8EDF99075F08E296A31ED8B1F_0_0_0;
IL2CPP_EXTERN_C void CONNECTDATA_tAB05C4CA0971BBD2F240B4F3DFDBE3EC172AF07E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CONNECTDATA_tAB05C4CA0971BBD2F240B4F3DFDBE3EC172AF07E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CONNECTDATA_tAB05C4CA0971BBD2F240B4F3DFDBE3EC172AF07E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CONNECTDATA_tAB05C4CA0971BBD2F240B4F3DFDBE3EC172AF07E_0_0_0;
IL2CPP_EXTERN_C void CacheIndex_tDF5283228F218DFFA9FA2267891D89F9BD39D121_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CacheIndex_tDF5283228F218DFFA9FA2267891D89F9BD39D121_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CacheIndex_tDF5283228F218DFFA9FA2267891D89F9BD39D121_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CacheIndex_tDF5283228F218DFFA9FA2267891D89F9BD39D121_0_0_0;
IL2CPP_EXTERN_C void CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91_0_0_0;
IL2CPP_EXTERN_C void CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_0_0_0;
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_0_0_0;
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_0_0_0;
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_0_0_0;
IL2CPP_EXTERN_C void CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_0_0_0;
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_0_0_0;
IL2CPP_EXTERN_C void CharInfo_t777B426D04AD97A5474E7CCD0EE8F00EF208D165_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CharInfo_t777B426D04AD97A5474E7CCD0EE8F00EF208D165_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CharInfo_t777B426D04AD97A5474E7CCD0EE8F00EF208D165_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CharInfo_t777B426D04AD97A5474E7CCD0EE8F00EF208D165_0_0_0;
IL2CPP_EXTERN_C void CngProperty_tC728CC16FBEF62E59C284C77ED6838204D496544_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CngProperty_tC728CC16FBEF62E59C284C77ED6838204D496544_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CngProperty_tC728CC16FBEF62E59C284C77ED6838204D496544_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CngProperty_tC728CC16FBEF62E59C284C77ED6838204D496544_0_0_0;
IL2CPP_EXTERN_C void Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_0_0_0;
IL2CPP_EXTERN_C void Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_0_0_0;
IL2CPP_EXTERN_C void ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_0_0_0;
IL2CPP_EXTERN_C void ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_0_0_0;
IL2CPP_EXTERN_C void ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_0_0_0;
IL2CPP_EXTERN_C void ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_0_0_0;
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_0_0_0;
IL2CPP_EXTERN_C void ConsoleCursorInfo_tCF20B18747D9272A87D89204136B60D7EC7EA90B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConsoleCursorInfo_tCF20B18747D9272A87D89204136B60D7EC7EA90B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConsoleCursorInfo_tCF20B18747D9272A87D89204136B60D7EC7EA90B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConsoleCursorInfo_tCF20B18747D9272A87D89204136B60D7EC7EA90B_0_0_0;
IL2CPP_EXTERN_C void ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_0_0_0;
IL2CPP_EXTERN_C void ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_0_0_0;
IL2CPP_EXTERN_C void Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_0_0_0;
IL2CPP_EXTERN_C void ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_0_0_0;
IL2CPP_EXTERN_C void Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_0_0_0;
IL2CPP_EXTERN_C void CoveredMethodStats_t1675D561958CF14DFA5EF2092E65FBBAC7E1CC1D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CoveredMethodStats_t1675D561958CF14DFA5EF2092E65FBBAC7E1CC1D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CoveredMethodStats_t1675D561958CF14DFA5EF2092E65FBBAC7E1CC1D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CoveredMethodStats_t1675D561958CF14DFA5EF2092E65FBBAC7E1CC1D_0_0_0;
IL2CPP_EXTERN_C void CoveredSequencePoint_t3DCBD06D689ED6C708ED78715A3B3571FD2A0CBC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CoveredSequencePoint_t3DCBD06D689ED6C708ED78715A3B3571FD2A0CBC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CoveredSequencePoint_t3DCBD06D689ED6C708ED78715A3B3571FD2A0CBC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CoveredSequencePoint_t3DCBD06D689ED6C708ED78715A3B3571FD2A0CBC_0_0_0;
IL2CPP_EXTERN_C void CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CrossAppDomainDelegate_t29EFF0DA1515D3687C38FE6160B57321234313A4();
IL2CPP_EXTERN_C_CONST RuntimeType CrossAppDomainDelegate_t29EFF0DA1515D3687C38FE6160B57321234313A4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3();
IL2CPP_EXTERN_C_CONST RuntimeType CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3_0_0_0;
IL2CPP_EXTERN_C void CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_0_0_0;
IL2CPP_EXTERN_C void CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_0_0_0;
IL2CPP_EXTERN_C void CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_0_0_0;
IL2CPP_EXTERN_C void Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_0_0_0;
IL2CPP_EXTERN_C void CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_0_0_0;
IL2CPP_EXTERN_C void CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED_0_0_0;
IL2CPP_EXTERN_C void CustomUnRegister_t475AB029B2E537861044D0AE8157895E13B65B62_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomUnRegister_t475AB029B2E537861044D0AE8157895E13B65B62_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomUnRegister_t475AB029B2E537861044D0AE8157895E13B65B62_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomUnRegister_t475AB029B2E537861044D0AE8157895E13B65B62_0_0_0;
IL2CPP_EXTERN_C void DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_0_0_0;
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_0_0_0;
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_0_0_0;
IL2CPP_EXTERN_C void DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_0_0_0;
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Delegate_t_0_0_0;
IL2CPP_EXTERN_C void DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_0_0_0;
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_0_0_0;
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_0_0_0;
IL2CPP_EXTERN_C void DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_0_0_0;
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_0_0_0;
IL2CPP_EXTERN_C void DisplayInfo_tF41D127F984E526091EDFBE6289D76024755B473_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DisplayInfo_tF41D127F984E526091EDFBE6289D76024755B473_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DisplayInfo_tF41D127F984E526091EDFBE6289D76024755B473_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DisplayInfo_tF41D127F984E526091EDFBE6289D76024755B473_0_0_0;
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_0_0_0;
IL2CPP_EXTERN_C void DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_0_0_0;
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_0_0_0;
IL2CPP_EXTERN_C void ECCurve_t6813FDB797E2267032BCE0B703C87CF3D500822D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ECCurve_t6813FDB797E2267032BCE0B703C87CF3D500822D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ECCurve_t6813FDB797E2267032BCE0B703C87CF3D500822D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ECCurve_t6813FDB797E2267032BCE0B703C87CF3D500822D_0_0_0;
IL2CPP_EXTERN_C void ECParameters_t004F33CE74EF3D123F2792769285194F12C00F12_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ECParameters_t004F33CE74EF3D123F2792769285194F12C00F12_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ECParameters_t004F33CE74EF3D123F2792769285194F12C00F12_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ECParameters_t004F33CE74EF3D123F2792769285194F12C00F12_0_0_0;
IL2CPP_EXTERN_C void ECPoint_tB72283ABB58FFAE37BF1F60CC1EBBF987AEB7E37_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ECPoint_tB72283ABB58FFAE37BF1F60CC1EBBF987AEB7E37_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ECPoint_tB72283ABB58FFAE37BF1F60CC1EBBF987AEB7E37_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ECPoint_tB72283ABB58FFAE37BF1F60CC1EBBF987AEB7E37_0_0_0;
IL2CPP_EXTERN_C void EXCEPINFO_t17542B900FAFAAB57D94D60CD0F07F5A3B406C81_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EXCEPINFO_t17542B900FAFAAB57D94D60CD0F07F5A3B406C81_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EXCEPINFO_t17542B900FAFAAB57D94D60CD0F07F5A3B406C81_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EXCEPINFO_t17542B900FAFAAB57D94D60CD0F07F5A3B406C81_0_0_0;
IL2CPP_EXTERN_C void EXCEPINFO_t8E50CDB4D0265FD848C27A74D0F058F7537BF2C7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EXCEPINFO_t8E50CDB4D0265FD848C27A74D0F058F7537BF2C7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EXCEPINFO_t8E50CDB4D0265FD848C27A74D0F058F7537BF2C7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EXCEPINFO_t8E50CDB4D0265FD848C27A74D0F058F7537BF2C7_0_0_0;
IL2CPP_EXTERN_C void Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0;
IL2CPP_EXTERN_C void EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_0_0_0;
IL2CPP_EXTERN_C void Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_0_0_0;
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_0_0_0;
IL2CPP_EXTERN_C void EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_0_0_0;
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_0_0_0;
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Exception_t_0_0_0;
IL2CPP_EXTERN_C void ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_0_0_0;
IL2CPP_EXTERN_C void ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_0_0_0;
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0;
IL2CPP_EXTERN_C void FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_0_0_0;
IL2CPP_EXTERN_C void FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_0_0_0;
IL2CPP_EXTERN_C void FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_0_0_0;
IL2CPP_EXTERN_C void FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_0_0_0;
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_0_0_0;
IL2CPP_EXTERN_C void FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_0_0_0;
IL2CPP_EXTERN_C void ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_0_0_0;
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0;
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0;
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0;
IL2CPP_EXTERN_C void GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D_0_0_0;
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0;
IL2CPP_EXTERN_C void Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_0_0_0;
IL2CPP_EXTERN_C void HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_HeaderParser_t9BD3B896027A047C0DA68DC732ABC1B9A660AB67();
IL2CPP_EXTERN_C_CONST RuntimeType HeaderParser_t9BD3B896027A047C0DA68DC732ABC1B9A660AB67_0_0_0;
IL2CPP_EXTERN_C void HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_0_0_0;
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_0_0_0;
const Il2CppGuid IActivationFactory_tE0701BB63326AE9DC14E446AE8E4043E0417DFF7::IID = { 0x35, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IActivationFactory_tE0701BB63326AE9DC14E446AE8E4043E0417DFF7_0_0_0;
const Il2CppGuid IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3::IID = { 0x10f, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3_0_0_0;
const Il2CppGuid IBindCtx_t5A851DDA04E33B0462BA818962ED68DCBE29782D::IID = { 0xe, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IBindCtx_t5A851DDA04E33B0462BA818962ED68DCBE29782D_0_0_0;
const Il2CppGuid IConnectionPoint_t1845B9B3FE83010AA93BABDE61C7548CEB210B9E::IID = { 0xb196b286, 0xbab4, 0x101a, 0xb6, 0x9c, 0x0, 0xaa, 0x0, 0x34, 0x1d, 0x7 };
IL2CPP_EXTERN_C_CONST RuntimeType IConnectionPoint_t1845B9B3FE83010AA93BABDE61C7548CEB210B9E_0_0_0;
const Il2CppGuid IConnectionPointContainer_t29C2EF9A4358A5AC8D82F13C6A62AB6C0369A3BF::IID = { 0xb196b284, 0xbab4, 0x101a, 0xb6, 0x9c, 0x0, 0xaa, 0x0, 0x34, 0x1d, 0x7 };
IL2CPP_EXTERN_C_CONST RuntimeType IConnectionPointContainer_t29C2EF9A4358A5AC8D82F13C6A62AB6C0369A3BF_0_0_0;
const Il2CppGuid IDataObject_t47F2CDDF556578DD1CA1DD50B64223DE02046725::IID = { 0x10e, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IDataObject_t47F2CDDF556578DD1CA1DD50B64223DE02046725_0_0_0;
const Il2CppGuid IEnumConnectionPoints_t2559BF800C90D85F6C2D97825198691B5A880462::IID = { 0xb196b285, 0xbab4, 0x101a, 0xb6, 0x9c, 0x0, 0xaa, 0x0, 0x34, 0x1d, 0x7 };
IL2CPP_EXTERN_C_CONST RuntimeType IEnumConnectionPoints_t2559BF800C90D85F6C2D97825198691B5A880462_0_0_0;
const Il2CppGuid IEnumConnections_t1DD00593B035913F07597F2E6DA1248A0AE0049F::IID = { 0xb196b287, 0xbab4, 0x101a, 0xb6, 0x9c, 0x0, 0xaa, 0x0, 0x34, 0x1d, 0x7 };
IL2CPP_EXTERN_C_CONST RuntimeType IEnumConnections_t1DD00593B035913F07597F2E6DA1248A0AE0049F_0_0_0;
const Il2CppGuid IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C::IID = { 0x103, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C_0_0_0;
const Il2CppGuid IEnumMoniker_t7A355BC26E2383D488B655071D4ABAAD0C4A23E4::IID = { 0x102, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IEnumMoniker_t7A355BC26E2383D488B655071D4ABAAD0C4A23E4_0_0_0;
const Il2CppGuid IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7::IID = { 0x103, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7_0_0_0;
const Il2CppGuid IEnumString_t747F70560F8E1C353FC12CB3935C0C937CA7B418::IID = { 0x101, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IEnumString_t747F70560F8E1C353FC12CB3935C0C937CA7B418_0_0_0;
const Il2CppGuid IEnumVARIANT_t436A6FE96D5B88563A908C364EAB75FB63FC0D4F::IID = { 0x20404, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IEnumVARIANT_t436A6FE96D5B88563A908C364EAB75FB63FC0D4F_0_0_0;
const Il2CppGuid IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8::IID = { 0xf, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8_0_0_0;
IL2CPP_EXTERN_C void IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_IOCompletionCallback_tBEA2FFE9C503FD61B6839C32A2F6253D77381366();
IL2CPP_EXTERN_C_CONST RuntimeType IOCompletionCallback_tBEA2FFE9C503FD61B6839C32A2F6253D77381366_0_0_0;
IL2CPP_EXTERN_C void IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_0_0_0;
IL2CPP_EXTERN_C void IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_0_0_0;
const Il2CppGuid IPersistFile_t0904887F33EA8B6D57A5F44E039BD71002616EE6::IID = { 0x10b, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IPersistFile_t0904887F33EA8B6D57A5F44E039BD71002616EE6_0_0_0;
IL2CPP_EXTERN_C void IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_0_0_0;
const Il2CppGuid IRestrictedErrorInfo_tC6B9BF4F49654260223FA77AB4415C965370423D::IID = { 0x82ba7092, 0x4c88, 0x427d, 0xa7, 0xbc, 0x16, 0xdd, 0x93, 0xfe, 0xb6, 0x7e };
IL2CPP_EXTERN_C_CONST RuntimeType IRestrictedErrorInfo_tC6B9BF4F49654260223FA77AB4415C965370423D_0_0_0;
const Il2CppGuid IRunningObjectTable_tE4EC21AF9F8D2A5F448A427C8E1253A9C659A52E::IID = { 0x10, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IRunningObjectTable_tE4EC21AF9F8D2A5F448A427C8E1253A9C659A52E_0_0_0;
const Il2CppGuid IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID = { 0xc, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_0_0_0;
const Il2CppGuid ITypeComp_t9239FE881260744399D7472262B8593BE359013E::IID = { 0x20403, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType ITypeComp_t9239FE881260744399D7472262B8593BE359013E_0_0_0;
const Il2CppGuid ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D::IID = { 0x20401, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D_0_0_0;
const Il2CppGuid ITypeInfo2_tA70FE09087E040396B06F5E73C3091F1BEDF4260::IID = { 0x20412, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType ITypeInfo2_tA70FE09087E040396B06F5E73C3091F1BEDF4260_0_0_0;
const Il2CppGuid ITypeLib_tA8FAEFF0E1D6536320C8A709ABDF6A694651D5FE::IID = { 0x20402, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType ITypeLib_tA8FAEFF0E1D6536320C8A709ABDF6A694651D5FE_0_0_0;
const Il2CppGuid ITypeLib2_tD652EA1A3767EBD75060689FA815CD8EF790D344::IID = { 0x20411, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType ITypeLib2_tD652EA1A3767EBD75060689FA815CD8EF790D344_0_0_0;
IL2CPP_EXTERN_C void ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_0_0_0;
IL2CPP_EXTERN_C void InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_0_0_0;
IL2CPP_EXTERN_C void InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_0_0_0;
IL2CPP_EXTERN_C void InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_0_0_0;
IL2CPP_EXTERN_C void InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_0_0_0;
IL2CPP_EXTERN_C void InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_0_0_0;
IL2CPP_EXTERN_C void InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_0_0_0;
IL2CPP_EXTERN_C void IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_0_0_0;
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_0_0_0;
IL2CPP_EXTERN_C void InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_0_0_0;
IL2CPP_EXTERN_C void InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_0_0_0;
IL2CPP_EXTERN_C void InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_0_0_0;
IL2CPP_EXTERN_C void Internal_DrawTextureArguments_t90CA68F41AF546B63FA02B9EF8D37F641FA26FFD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Internal_DrawTextureArguments_t90CA68F41AF546B63FA02B9EF8D37F641FA26FFD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Internal_DrawTextureArguments_t90CA68F41AF546B63FA02B9EF8D37F641FA26FFD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Internal_DrawTextureArguments_t90CA68F41AF546B63FA02B9EF8D37F641FA26FFD_0_0_0;
IL2CPP_EXTERN_C void InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_0_0_0;
IL2CPP_EXTERN_C void LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741_0_0_0;
IL2CPP_EXTERN_C void LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_0_0_0;
IL2CPP_EXTERN_C void LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_0_0_0;
IL2CPP_EXTERN_C void LightmapData_t043B36B9B0FF7D245CE561E2400F108F8596A4AA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightmapData_t043B36B9B0FF7D245CE561E2400F108F8596A4AA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightmapData_t043B36B9B0FF7D245CE561E2400F108F8596A4AA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightmapData_t043B36B9B0FF7D245CE561E2400F108F8596A4AA_0_0_0;
IL2CPP_EXTERN_C void LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_0_0_0;
IL2CPP_EXTERN_C void ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_0_0_0;
IL2CPP_EXTERN_C void LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_0_0_0;
IL2CPP_EXTERN_C void LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_0_0_0;
IL2CPP_EXTERN_C void LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_0_0_0;
IL2CPP_EXTERN_C void LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_0_0_0;
IL2CPP_EXTERN_C void LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_0_0_0;
IL2CPP_EXTERN_C void MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_0_0_0;
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_0_0_0;
IL2CPP_EXTERN_C void MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_0_0_0;
IL2CPP_EXTERN_C void MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_0_0_0;
IL2CPP_EXTERN_C void MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_0_0_0;
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_0_0_0;
IL2CPP_EXTERN_C void MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_0_0_0;
IL2CPP_EXTERN_C void MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_0_0_0;
IL2CPP_EXTERN_C void Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_0_0_0;
IL2CPP_EXTERN_C void MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_MonoBtlsSelectCallback_t94D7F9E6194E0CC0F6D20A02709C3991261BEFAE();
IL2CPP_EXTERN_C_CONST RuntimeType MonoBtlsSelectCallback_t94D7F9E6194E0CC0F6D20A02709C3991261BEFAE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_MonoBtlsServerNameCallback_t157678673B6A4D619EE32B5F453ECACF3BE430EA();
IL2CPP_EXTERN_C_CONST RuntimeType MonoBtlsServerNameCallback_t157678673B6A4D619EE32B5F453ECACF3BE430EA_0_0_0;
IL2CPP_EXTERN_C void MonoCQItem_t37270A4113024E114F0FED59D23E612BFF30AD9F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoCQItem_t37270A4113024E114F0FED59D23E612BFF30AD9F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoCQItem_t37270A4113024E114F0FED59D23E612BFF30AD9F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoCQItem_t37270A4113024E114F0FED59D23E612BFF30AD9F_0_0_0;
IL2CPP_EXTERN_C void MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_0_0_0;
IL2CPP_EXTERN_C void MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_0_0_0;
IL2CPP_EXTERN_C void MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_0_0_0;
IL2CPP_EXTERN_C void MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_0_0_0;
IL2CPP_EXTERN_C void MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_0_0_0;
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_0_0_0;
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MulticastDelegate_t_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495();
IL2CPP_EXTERN_C_CONST RuntimeType NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495_0_0_0;
IL2CPP_EXTERN_C void Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_0_0_0;
IL2CPP_EXTERN_C void NumberBuffer_t6F4409C74B004A277E7FC6794097FEFF54FA6770_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NumberBuffer_t6F4409C74B004A277E7FC6794097FEFF54FA6770_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NumberBuffer_t6F4409C74B004A277E7FC6794097FEFF54FA6770_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NumberBuffer_t6F4409C74B004A277E7FC6794097FEFF54FA6770_0_0_0;
IL2CPP_EXTERN_C void OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_0_0_0;
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ObjectCreationDelegate_tF1DD44628812BB360FE9AD277CAAC4944E51CFD3();
IL2CPP_EXTERN_C_CONST RuntimeType ObjectCreationDelegate_tF1DD44628812BB360FE9AD277CAAC4944E51CFD3_0_0_0;
IL2CPP_EXTERN_C void PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_0_0_0;
IL2CPP_EXTERN_C void ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734_0_0_0;
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_0_0_0;
IL2CPP_EXTERN_C void ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_0_0_0;
IL2CPP_EXTERN_C void ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_0_0_0;
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_0_0_0;
const Il2CppGuid PerformanceCounterManager_t0BF17759AF043AB149940CFB1D6A1A90EE791E6F::CLSID = { 0x82840be1, 0xd273, 0x11d2, 0xb9, 0x4a, 0x0, 0x60, 0x8, 0x93, 0xb1, 0x7a };
IL2CPP_EXTERN_C_CONST RuntimeType PerformanceCounterManager_t0BF17759AF043AB149940CFB1D6A1A90EE791E6F_0_0_0;
IL2CPP_EXTERN_C void PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_0_0_0;
IL2CPP_EXTERN_C void PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_0_0_0;
IL2CPP_EXTERN_C void PinAndClear_t8E61D9C6434B848C29B7EE866C2027C332F77FCD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PinAndClear_t8E61D9C6434B848C29B7EE866C2027C332F77FCD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PinAndClear_t8E61D9C6434B848C29B7EE866C2027C332F77FCD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PinAndClear_t8E61D9C6434B848C29B7EE866C2027C332F77FCD_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PipeStreamImpersonationWorker_tE877A9D966BCB75CEDB0E30DBED75E67DBEE3F29();
IL2CPP_EXTERN_C_CONST RuntimeType PipeStreamImpersonationWorker_tE877A9D966BCB75CEDB0E30DBED75E67DBEE3F29_0_0_0;
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_0_0_0;
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PointLight_tD01A1428DC1015D98A527136034187F732433EA7_0_0_0;
IL2CPP_EXTERN_C void Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_0_0_0;
IL2CPP_EXTERN_C void ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_0_0_0;
IL2CPP_EXTERN_C void QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178_0_0_0;
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_0_0_0;
IL2CPP_EXTERN_C void RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_0_0_0;
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_0_0_0;
IL2CPP_EXTERN_C void RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_0_0_0;
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_0_0_0;
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_0_0_0;
IL2CPP_EXTERN_C void ReflectionProbeBlendInfo_t9E258E27B79B396F9D1693B972157A79AFBD9200_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ReflectionProbeBlendInfo_t9E258E27B79B396F9D1693B972157A79AFBD9200_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ReflectionProbeBlendInfo_t9E258E27B79B396F9D1693B972157A79AFBD9200_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ReflectionProbeBlendInfo_t9E258E27B79B396F9D1693B972157A79AFBD9200_0_0_0;
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_0_0_0;
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_0_0_0;
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_0_0_0;
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_0_0_0;
const Il2CppGuid RegistrationServices_tADB40F4906A07C56AD5199519662509DAC8EC8A1::CLSID = { 0x475e398f, 0x8afa, 0x43a7, 0xa3, 0xbe, 0xf4, 0xef, 0x8d, 0x67, 0x87, 0xc9 };
IL2CPP_EXTERN_C_CONST RuntimeType RegistrationServices_tADB40F4906A07C56AD5199519662509DAC8EC8A1_0_0_0;
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_0_0_0;
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_0_0_0;
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_0_0_0;
IL2CPP_EXTERN_C void RenderParams_t2571537494874787A0A0B3013052A03AA0E51CFB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderParams_t2571537494874787A0A0B3013052A03AA0E51CFB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderParams_t2571537494874787A0A0B3013052A03AA0E51CFB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderParams_t2571537494874787A0A0B3013052A03AA0E51CFB_0_0_0;
IL2CPP_EXTERN_C void RenderTargetBinding_tEC52DB3FA58D1D081E992EB6218A4B4355450CF3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderTargetBinding_tEC52DB3FA58D1D081E992EB6218A4B4355450CF3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderTargetBinding_tEC52DB3FA58D1D081E992EB6218A4B4355450CF3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderTargetBinding_tEC52DB3FA58D1D081E992EB6218A4B4355450CF3_0_0_0;
IL2CPP_EXTERN_C void RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_0_0_0;
IL2CPP_EXTERN_C void RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_0_0_0;
IL2CPP_EXTERN_C void RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_0_0_0;
IL2CPP_EXTERN_C void ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_0_0_0;
IL2CPP_EXTERN_C void ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_0_0_0;
IL2CPP_EXTERN_C void Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_0_0_0;
IL2CPP_EXTERN_C void RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_0_0_0;
IL2CPP_EXTERN_C void RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_0_0_0;
IL2CPP_EXTERN_C void RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_0_0_0;
IL2CPP_EXTERN_C void STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_0_0_0;
IL2CPP_EXTERN_C void STATSTG_tDEF47AD42FE2D748BDA391B2FF81E79E8ACC3C5F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void STATSTG_tDEF47AD42FE2D748BDA391B2FF81E79E8ACC3C5F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void STATSTG_tDEF47AD42FE2D748BDA391B2FF81E79E8ACC3C5F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType STATSTG_tDEF47AD42FE2D748BDA391B2FF81E79E8ACC3C5F_0_0_0;
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_0_0_0;
IL2CPP_EXTERN_C void STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_0_0_0;
IL2CPP_EXTERN_C void SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716();
IL2CPP_EXTERN_C_CONST RuntimeType SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716_0_0_0;
IL2CPP_EXTERN_C void ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_0_0_0;
IL2CPP_EXTERN_C void Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_0_0_0;
IL2CPP_EXTERN_C void ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_0_0_0;
IL2CPP_EXTERN_C void ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0;
IL2CPP_EXTERN_C void SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_0_0_0;
IL2CPP_EXTERN_C void SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_0_0_0;
IL2CPP_EXTERN_C void SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_0_0_0;
IL2CPP_EXTERN_C void SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_0_0_0;
IL2CPP_EXTERN_C void SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_0_0_0;
IL2CPP_EXTERN_C void SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_0_0_0;
IL2CPP_EXTERN_C void SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_0_0_0;
IL2CPP_EXTERN_C void SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_0_0_0;
IL2CPP_EXTERN_C void SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_0_0_0;
IL2CPP_EXTERN_C void SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F();
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F_0_0_0;
IL2CPP_EXTERN_C void ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_0_0_0;
IL2CPP_EXTERN_C void ShaderWarmupSetup_tDD44C1E2B2AE13E672A630B3ED1D1BC5BD2187AE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ShaderWarmupSetup_tDD44C1E2B2AE13E672A630B3ED1D1BC5BD2187AE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ShaderWarmupSetup_tDD44C1E2B2AE13E672A630B3ED1D1BC5BD2187AE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ShaderWarmupSetup_tDD44C1E2B2AE13E672A630B3ED1D1BC5BD2187AE_0_0_0;
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_0_0_0;
IL2CPP_EXTERN_C void SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_0_0_0;
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_0_0_0;
IL2CPP_EXTERN_C void SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_0_0_0;
IL2CPP_EXTERN_C void SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_0_0_0;
IL2CPP_EXTERN_C void SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_0_0_0;
IL2CPP_EXTERN_C void SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_0_0_0;
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_0_0_0;
IL2CPP_EXTERN_C void SpotLightBoxShape_tB49C7A4CBC4670936EB8C87C9B2DC2B77793D02B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpotLightBoxShape_tB49C7A4CBC4670936EB8C87C9B2DC2B77793D02B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpotLightBoxShape_tB49C7A4CBC4670936EB8C87C9B2DC2B77793D02B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpotLightBoxShape_tB49C7A4CBC4670936EB8C87C9B2DC2B77793D02B_0_0_0;
IL2CPP_EXTERN_C void SpotLightPyramidShape_tDEF8E6C97D8AC9E53082C2480AF8962EB3E54826_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpotLightPyramidShape_tDEF8E6C97D8AC9E53082C2480AF8962EB3E54826_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpotLightPyramidShape_tDEF8E6C97D8AC9E53082C2480AF8962EB3E54826_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpotLightPyramidShape_tDEF8E6C97D8AC9E53082C2480AF8962EB3E54826_0_0_0;
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_0_0_0;
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_0_0_0;
IL2CPP_EXTERN_C void SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_0_0_0;
IL2CPP_EXTERN_C void SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_0_0_0;
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_0_0_0;
IL2CPP_EXTERN_C void State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType State_tC241510131965D8DE1919EB16A3650E397E5AEAB_0_0_0;
IL2CPP_EXTERN_C void StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_0_0_0;
IL2CPP_EXTERN_C void StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_0_0_0;
IL2CPP_EXTERN_C void StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_0_0_0;
IL2CPP_EXTERN_C void StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_0_0_0;
IL2CPP_EXTERN_C void StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_0_0_0;
IL2CPP_EXTERN_C void StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_0_0_0;
IL2CPP_EXTERN_C void StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_0_0_0;
IL2CPP_EXTERN_C void StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_0_0_0;
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_0_0_0;
IL2CPP_EXTERN_C void StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_0_0_0;
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_0_0_0;
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_0_0_0;
IL2CPP_EXTERN_C void StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_0_0_0;
IL2CPP_EXTERN_C void TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_0_0_0;
IL2CPP_EXTERN_C void TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_0_0_0;
IL2CPP_EXTERN_C void TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_0_0_0;
IL2CPP_EXTERN_C void TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_0_0_0;
IL2CPP_EXTERN_C void TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_0_0_0;
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_0_0_0;
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_0_0_0;
IL2CPP_EXTERN_C void ThreadPoolCallbackWrapper_tE59FED14D500FCC507E2E3E273A701A80CEB4917_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ThreadPoolCallbackWrapper_tE59FED14D500FCC507E2E3E273A701A80CEB4917_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ThreadPoolCallbackWrapper_tE59FED14D500FCC507E2E3E273A701A80CEB4917_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ThreadPoolCallbackWrapper_tE59FED14D500FCC507E2E3E273A701A80CEB4917_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2();
IL2CPP_EXTERN_C_CONST RuntimeType ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_0_0_0;
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B();
IL2CPP_EXTERN_C_CONST RuntimeType TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B_0_0_0;
IL2CPP_EXTERN_C void TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_0_0_0;
IL2CPP_EXTERN_C void TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_0_0_0;
IL2CPP_EXTERN_C void TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_0_0_0;
IL2CPP_EXTERN_C void Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_0_0_0;
IL2CPP_EXTERN_C void TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_0_0_0;
const Il2CppGuid TypeLibConverter_t8F69A7316AC99DA4B93CF4886E17363EBA2F71BF::CLSID = { 0xf1c3bf79, 0xc3e4, 0x11d3, 0x88, 0xe7, 0x0, 0x90, 0x27, 0x54, 0xc4, 0x3a };
IL2CPP_EXTERN_C_CONST RuntimeType TypeLibConverter_t8F69A7316AC99DA4B93CF4886E17363EBA2F71BF_0_0_0;
IL2CPP_EXTERN_C void UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_0_0_0;
IL2CPP_EXTERN_C void UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_0_0_0;
IL2CPP_EXTERN_C void UnSafeCharBuffer_tC64AFEB2576DF69CB671B61471614366C4BF6080_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnSafeCharBuffer_tC64AFEB2576DF69CB671B61471614366C4BF6080_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnSafeCharBuffer_tC64AFEB2576DF69CB671B61471614366C4BF6080_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnSafeCharBuffer_tC64AFEB2576DF69CB671B61471614366C4BF6080_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7();
IL2CPP_EXTERN_C_CONST RuntimeType UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_0_0_0;
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0;
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnlockConnectionDelegate_t453247A451D867BEFEDC7B88ABF6A0638CB5791E();
IL2CPP_EXTERN_C_CONST RuntimeType UnlockConnectionDelegate_t453247A451D867BEFEDC7B88ABF6A0638CB5791E_0_0_0;
IL2CPP_EXTERN_C void UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_0_0_0;
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UserCallBack_t81E6755DCACDEAF4FD737113D39268AA52B3DD94();
IL2CPP_EXTERN_C_CONST RuntimeType UserCallBack_t81E6755DCACDEAF4FD737113D39268AA52B3DD94_0_0_0;
IL2CPP_EXTERN_C void VARDESC_t76C21F0C161C3203974BA196F8D39BE9BB739E60_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VARDESC_t76C21F0C161C3203974BA196F8D39BE9BB739E60_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VARDESC_t76C21F0C161C3203974BA196F8D39BE9BB739E60_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VARDESC_t76C21F0C161C3203974BA196F8D39BE9BB739E60_0_0_0;
IL2CPP_EXTERN_C void VARDESC_tC5592BB06BBF322EC903D45A32080E1AD00A7F95_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VARDESC_tC5592BB06BBF322EC903D45A32080E1AD00A7F95_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VARDESC_tC5592BB06BBF322EC903D45A32080E1AD00A7F95_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VARDESC_tC5592BB06BBF322EC903D45A32080E1AD00A7F95_0_0_0;
IL2CPP_EXTERN_C void VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_0_0_0;
IL2CPP_EXTERN_C void VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_0_0_0;
IL2CPP_EXTERN_C void VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_0_0_0;
IL2CPP_EXTERN_C void VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_0_0_0;
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_0_0_0;
IL2CPP_EXTERN_C void ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_0_0_0;
IL2CPP_EXTERN_C void ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_0_0_0;
IL2CPP_EXTERN_C void ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0;
IL2CPP_EXTERN_C void ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_0_0_0;
IL2CPP_EXTERN_C void VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_0_0_0;
IL2CPP_EXTERN_C void VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_0_0_0;
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_0_0_0;
IL2CPP_EXTERN_C void WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_0_0_0;
IL2CPP_EXTERN_C void WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_0_0_0;
IL2CPP_EXTERN_C void WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_0_0_0;
IL2CPP_EXTERN_C void Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_0_0_0;
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_0_0_0;
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_0_0_0;
IL2CPP_EXTERN_C void Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_0_0_0;
IL2CPP_EXTERN_C void Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_0_0_0;
IL2CPP_EXTERN_C void Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_0_0_0;
IL2CPP_EXTERN_C void Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_0_0_0;
IL2CPP_EXTERN_C void WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_0_0_0;
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_0_0_0;
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_0_0_0;
IL2CPP_EXTERN_C void XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_0_0_0;
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_0_0_0;
IL2CPP_EXTERN_C void XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_0_0_0;
IL2CPP_EXTERN_C void YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_0_0_0;
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_0_0_0;
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_0_0_0;
IL2CPP_EXTERN_C void Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395();
IL2CPP_EXTERN_C_CONST RuntimeType IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C();
IL2CPP_EXTERN_C_CONST RuntimeType SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5();
IL2CPP_EXTERN_C_CONST RuntimeType OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AdvertisingIdentifierCallback_t67404493BC40D4B8AFD6CBA48475774EE1D5FD82();
IL2CPP_EXTERN_C_CONST RuntimeType AdvertisingIdentifierCallback_t67404493BC40D4B8AFD6CBA48475774EE1D5FD82_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413();
IL2CPP_EXTERN_C_CONST RuntimeType LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F();
IL2CPP_EXTERN_C_CONST RuntimeType LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F_0_0_0;
IL2CPP_EXTERN_C void RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_0_0_0;
IL2CPP_EXTERN_C void SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_0_0_0;
IL2CPP_EXTERN_C void SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_0_0_0;
IL2CPP_EXTERN_C void AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E();
IL2CPP_EXTERN_C_CONST RuntimeType PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072();
IL2CPP_EXTERN_C_CONST RuntimeType PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177();
IL2CPP_EXTERN_C_CONST RuntimeType AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_0_0_0;
IL2CPP_EXTERN_C void OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_EventQueueCallback_t67E3577952E782ABDD046F3F003801D5205B9BF9();
IL2CPP_EXTERN_C_CONST RuntimeType EventQueueCallback_t67E3577952E782ABDD046F3F003801D5205B9BF9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CFProxyAutoConfigurationResultCallback_t9CEAA50E7E7B78CE76F69C81ED662783D4FE0C8A();
IL2CPP_EXTERN_C_CONST RuntimeType CFProxyAutoConfigurationResultCallback_t9CEAA50E7E7B78CE76F69C81ED662783D4FE0C8A_0_0_0;
IL2CPP_EXTERN_C void RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC();
IL2CPP_EXTERN_C_CONST RuntimeType WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC_0_0_0;
IL2CPP_EXTERN_C void AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_0_0_0;
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_0_0_0;
IL2CPP_EXTERN_C void RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_0_0_0;
IL2CPP_EXTERN_C void ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F();
IL2CPP_EXTERN_C_CONST RuntimeType StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F_0_0_0;
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A();
IL2CPP_EXTERN_C_CONST RuntimeType OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A_0_0_0;
IL2CPP_EXTERN_C void Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Resources_t959FACC867970114DBF8DC7D4C649240E819940E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6();
IL2CPP_EXTERN_C_CONST RuntimeType ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9();
IL2CPP_EXTERN_C_CONST RuntimeType WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA();
IL2CPP_EXTERN_C_CONST RuntimeType UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DictationCompletedDelegate_t83D7F1A9EC8225F6C405F0936EEEA031F75E93C7();
IL2CPP_EXTERN_C_CONST RuntimeType DictationCompletedDelegate_t83D7F1A9EC8225F6C405F0936EEEA031F75E93C7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DictationErrorHandler_t3B40C491B80EBCEC860A8ABF490B6A13B129AC6D();
IL2CPP_EXTERN_C_CONST RuntimeType DictationErrorHandler_t3B40C491B80EBCEC860A8ABF490B6A13B129AC6D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DictationHypothesisDelegate_t062C7AA1EAEA39F02173D9C05D809EAB1DDBB77A();
IL2CPP_EXTERN_C_CONST RuntimeType DictationHypothesisDelegate_t062C7AA1EAEA39F02173D9C05D809EAB1DDBB77A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DictationResultDelegate_t09DC18A221E33F1C0E26AB3363F4004240FBCFC6();
IL2CPP_EXTERN_C_CONST RuntimeType DictationResultDelegate_t09DC18A221E33F1C0E26AB3363F4004240FBCFC6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68();
IL2CPP_EXTERN_C_CONST RuntimeType DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68_0_0_0;
IL2CPP_EXTERN_C void EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_0_0_0;
IL2CPP_EXTERN_C void DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_0_0_0;
IL2CPP_EXTERN_C void EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_0_0_0;
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_0_0_0;
IL2CPP_EXTERN_C void Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ConfirmOverwriteDelegate_t5F409D8A8AF147302947B4BDBB560299FB58FD81();
IL2CPP_EXTERN_C_CONST RuntimeType ConfirmOverwriteDelegate_t5F409D8A8AF147302947B4BDBB560299FB58FD81_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98();
IL2CPP_EXTERN_C_CONST RuntimeType ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA();
IL2CPP_EXTERN_C_CONST RuntimeType WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA_0_0_0;
IL2CPP_EXTERN_C void FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1();
IL2CPP_EXTERN_C_CONST RuntimeType FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550();
IL2CPP_EXTERN_C_CONST RuntimeType WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_0_0_0;
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98();
IL2CPP_EXTERN_C_CONST RuntimeType SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98_0_0_0;
IL2CPP_EXTERN_C void RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_0_0_0;
IL2CPP_EXTERN_C void GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_0_0_0;
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_0_0_0;
IL2CPP_EXTERN_C void AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_0_0_0;
IL2CPP_EXTERN_C void GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_0_0_0;
IL2CPP_EXTERN_C void Reader_t045934C2968417E35ACF7B30F8A3CE6D116C5D46_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_t045934C2968417E35ACF7B30F8A3CE6D116C5D46_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_t045934C2968417E35ACF7B30F8A3CE6D116C5D46_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_t045934C2968417E35ACF7B30F8A3CE6D116C5D46_0_0_0;
IL2CPP_EXTERN_C void InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B();
IL2CPP_EXTERN_C_CONST RuntimeType OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_0_0_0;
IL2CPP_EXTERN_C void TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_0_0_0;
IL2CPP_EXTERN_C void SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_NativeIoCompletionCallback_tB3AA140221D0C397F8160CEC1A057E0C34468F24();
IL2CPP_EXTERN_C_CONST RuntimeType NativeIoCompletionCallback_tB3AA140221D0C397F8160CEC1A057E0C34468F24_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PanicFunction__t9B5243C52C7988A1D3B5A297CF2D7B4C63CF0E02();
IL2CPP_EXTERN_C_CONST RuntimeType PanicFunction__t9B5243C52C7988A1D3B5A297CF2D7B4C63CF0E02_0_0_0;
IL2CPP_EXTERN_C void DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_0_0_0;
IL2CPP_EXTERN_C void Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_0_0_0;
IL2CPP_EXTERN_C void NodeSet_t4E58B231194EA433FFFB271A7FA4FF83CA4C965D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NodeSet_t4E58B231194EA433FFFB271A7FA4FF83CA4C965D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NodeSet_t4E58B231194EA433FFFB271A7FA4FF83CA4C965D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NodeSet_t4E58B231194EA433FFFB271A7FA4FF83CA4C965D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SCNetworkReachabilityCallback_tB2999B8E8D3F9B2AE93423DFFE710122C60E6F28();
IL2CPP_EXTERN_C_CONST RuntimeType SCNetworkReachabilityCallback_tB2999B8E8D3F9B2AE93423DFFE710122C60E6F28_0_0_0;
IL2CPP_EXTERN_C void HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SecureStringAllocator_t261B9D6083129A0996138F50A608D9F5E4C6DC44();
IL2CPP_EXTERN_C_CONST RuntimeType SecureStringAllocator_t261B9D6083129A0996138F50A608D9F5E4C6DC44_0_0_0;
IL2CPP_EXTERN_C void RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_0_0_0;
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_0_0_0;
IL2CPP_EXTERN_C void BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_0_0_0;
IL2CPP_EXTERN_C void RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_0_0_0;
IL2CPP_EXTERN_C void TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_0_0_0;
IL2CPP_EXTERN_C void MeshContainer_t00B6579DBECD76BF4B51C01B6A1D1DD4ED9C1283_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MeshContainer_t00B6579DBECD76BF4B51C01B6A1D1DD4ED9C1283_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MeshContainer_t00B6579DBECD76BF4B51C01B6A1D1DD4ED9C1283_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MeshContainer_t00B6579DBECD76BF4B51C01B6A1D1DD4ED9C1283_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_BioControlFunc_tA25CF03804268D67A2A2298BA7CF0304908E1164();
IL2CPP_EXTERN_C_CONST RuntimeType BioControlFunc_tA25CF03804268D67A2A2298BA7CF0304908E1164_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_BioReadFunc_t13D991FB24C42BE3A5866565A417A46DAFCE2182();
IL2CPP_EXTERN_C_CONST RuntimeType BioReadFunc_t13D991FB24C42BE3A5866565A417A46DAFCE2182_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_BioWriteFunc_t7F203B8BD307C07BC5C115240617DC2098776716();
IL2CPP_EXTERN_C_CONST RuntimeType BioWriteFunc_t7F203B8BD307C07BC5C115240617DC2098776716_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PrintErrorsCallbackFunc_t269F5AA2AEDE407790495E35615D581F8E57DAF1();
IL2CPP_EXTERN_C_CONST RuntimeType PrintErrorsCallbackFunc_t269F5AA2AEDE407790495E35615D581F8E57DAF1_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_NativeSelectFunc_tB8204D9DD01EEA6E46BA2FDD005653A259AD8FCA();
IL2CPP_EXTERN_C_CONST RuntimeType NativeSelectFunc_tB8204D9DD01EEA6E46BA2FDD005653A259AD8FCA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_NativeServerNameFunc_tD685BC5D92B7FF9953F0BEB205BCF1BF9A2211FA();
IL2CPP_EXTERN_C_CONST RuntimeType NativeServerNameFunc_tD685BC5D92B7FF9953F0BEB205BCF1BF9A2211FA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_NativeVerifyFunc_t90E561336E71A9644B88DCC9CDD6A63CE98667E7();
IL2CPP_EXTERN_C_CONST RuntimeType NativeVerifyFunc_t90E561336E71A9644B88DCC9CDD6A63CE98667E7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_BySubjectFunc_t68E2B6BCEAD254F4C66501F0987E52D5ED8CF8DE();
IL2CPP_EXTERN_C_CONST RuntimeType BySubjectFunc_t68E2B6BCEAD254F4C66501F0987E52D5ED8CF8DE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetSecurityInfoNativeCall_tDD06963B1C1773B84152EBDB0B73BB95D5E29A40();
IL2CPP_EXTERN_C_CONST RuntimeType GetSecurityInfoNativeCall_tDD06963B1C1773B84152EBDB0B73BB95D5E29A40_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SetSecurityInfoNativeCall_t01A2030E2D268FAB3C374416C4AC1CE3E33F5C37();
IL2CPP_EXTERN_C_CONST RuntimeType SetSecurityInfoNativeCall_t01A2030E2D268FAB3C374416C4AC1CE3E33F5C37_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7();
IL2CPP_EXTERN_C_CONST RuntimeType OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7_0_0_0;
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_0_0_0;
IL2CPP_EXTERN_C void NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3();
IL2CPP_EXTERN_C_CONST RuntimeType InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3_0_0_0;
IL2CPP_EXTERN_C void FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_0_0_0;
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnCaptureResourceCreatedCallback_tA8D1E423E6D2EB046CA66BF468199752BA2A882B();
IL2CPP_EXTERN_C_CONST RuntimeType OnCaptureResourceCreatedCallback_tA8D1E423E6D2EB046CA66BF468199752BA2A882B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnCapturedToDiskCallback_t184CFBFA312A113D865AB3348AD2FCC9F2B8C87A();
IL2CPP_EXTERN_C_CONST RuntimeType OnCapturedToDiskCallback_t184CFBFA312A113D865AB3348AD2FCC9F2B8C87A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnPhotoModeStartedCallback_tCC911AAFA0C56D78D8C3AFAB4F10C6D64AFB8F28();
IL2CPP_EXTERN_C_CONST RuntimeType OnPhotoModeStartedCallback_tCC911AAFA0C56D78D8C3AFAB4F10C6D64AFB8F28_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnPhotoModeStoppedCallback_t0FBC7D27E79939CF7FE318FA275FDEE6330BB28B();
IL2CPP_EXTERN_C_CONST RuntimeType OnPhotoModeStoppedCallback_t0FBC7D27E79939CF7FE318FA275FDEE6330BB28B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ErrorDelegate_t0E4D50125D761FB7F662E5A79E9AA8D915BB2246();
IL2CPP_EXTERN_C_CONST RuntimeType ErrorDelegate_t0E4D50125D761FB7F662E5A79E9AA8D915BB2246_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StatusDelegate_t1DAF325F3F4C4209ACB9711E4D9B92956BF9D39D();
IL2CPP_EXTERN_C_CONST RuntimeType StatusDelegate_t1DAF325F3F4C4209ACB9711E4D9B92956BF9D39D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509();
IL2CPP_EXTERN_C_CONST RuntimeType CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4();
IL2CPP_EXTERN_C_CONST RuntimeType UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_0_0_0;
IL2CPP_EXTERN_C void PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_0_0_0;
IL2CPP_EXTERN_C void ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC();
IL2CPP_EXTERN_C_CONST RuntimeType GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A();
IL2CPP_EXTERN_C_CONST RuntimeType RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A_0_0_0;
IL2CPP_EXTERN_C void CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_0_0_0;
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_0_0_0;
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4();
IL2CPP_EXTERN_C_CONST RuntimeType UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4_0_0_0;
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_0_0_0;
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046();
IL2CPP_EXTERN_C_CONST RuntimeType HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046_0_0_0;
IL2CPP_EXTERN_C void HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_0_0_0;
IL2CPP_EXTERN_C void SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_0_0_0;
IL2CPP_EXTERN_C void ShaderVariant_t1CC20A9D8994069AE20C1FCD6D09F23BC74CB0A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ShaderVariant_t1CC20A9D8994069AE20C1FCD6D09F23BC74CB0A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ShaderVariant_t1CC20A9D8994069AE20C1FCD6D09F23BC74CB0A4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ShaderVariant_t1CC20A9D8994069AE20C1FCD6D09F23BC74CB0A4_0_0_0;
IL2CPP_EXTERN_C void Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_0_0_0;
IL2CPP_EXTERN_C void SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SendFileHandler_tFBB94763A61E5EC1AF7F81EC6F05F460B913B902();
IL2CPP_EXTERN_C_CONST RuntimeType SendFileHandler_tFBB94763A61E5EC1AF7F81EC6F05F460B913B902_0_0_0;
IL2CPP_EXTERN_C void ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_0_0_0;
IL2CPP_EXTERN_C void SNIP_t4D35D86E557C50B72DE1EE007B3478ADD582D000_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SNIP_t4D35D86E557C50B72DE1EE007B3478ADD582D000_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SNIP_t4D35D86E557C50B72DE1EE007B3478ADD582D000_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SNIP_t4D35D86E557C50B72DE1EE007B3478ADD582D000_0_0_0;
IL2CPP_EXTERN_C void PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_0_0_0;
IL2CPP_EXTERN_C void ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_0_0_0;
IL2CPP_EXTERN_C void Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_0_0_0;
IL2CPP_EXTERN_C void ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_0_0_0;
IL2CPP_EXTERN_C void ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WaitDelegate_t9B72B4EAAC263F02B0B42BB216EFEBA4BC0C8E60();
IL2CPP_EXTERN_C_CONST RuntimeType WaitDelegate_t9B72B4EAAC263F02B0B42BB216EFEBA4BC0C8E60_0_0_0;
IL2CPP_EXTERN_C void AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnDetectFocusChangeFunction_tB31D458403A6818419AAAFBA0049B72060284326();
IL2CPP_EXTERN_C_CONST RuntimeType OnDetectFocusChangeFunction_tB31D458403A6818419AAAFBA0049B72060284326_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnIndexChangeFunction_t85C95CE0E180FEF496A57F758911AD7D1562043C();
IL2CPP_EXTERN_C_CONST RuntimeType OnIndexChangeFunction_t85C95CE0E180FEF496A57F758911AD7D1562043C_0_0_0;
IL2CPP_EXTERN_C void SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_0_0_0;
IL2CPP_EXTERN_C void FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_0_0_0;
IL2CPP_EXTERN_C void FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_0_0_0;
IL2CPP_EXTERN_C void BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_0_0_0;
IL2CPP_EXTERN_C void TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_0_0_0;
IL2CPP_EXTERN_C void FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_0_0_0;
IL2CPP_EXTERN_C void StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_0_0_0;
IL2CPP_EXTERN_C void TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_0_0_0;
IL2CPP_EXTERN_C void TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_0_0_0;
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_0_0_0;
IL2CPP_EXTERN_C void StringSerializer_t0DDE28F30623811FCF78C58891304CD10419105D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StringSerializer_t0DDE28F30623811FCF78C58891304CD10419105D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StringSerializer_t0DDE28F30623811FCF78C58891304CD10419105D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StringSerializer_t0DDE28F30623811FCF78C58891304CD10419105D_0_0_0;
IL2CPP_EXTERN_C void TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_0_0_0;
IL2CPP_EXTERN_C void TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_0_0_0;
IL2CPP_EXTERN_C void ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_0_0_0;
IL2CPP_EXTERN_C void Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Entry_tB8765CA56422E2C92887314844384843688DCB9F_0_0_0;
IL2CPP_EXTERN_C void AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_0_0_0;
IL2CPP_EXTERN_C void AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_0_0_0;
IL2CPP_EXTERN_C void DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_0_0_0;
IL2CPP_EXTERN_C void EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_0_0_0;
IL2CPP_EXTERN_C void DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_0_0_0;
IL2CPP_EXTERN_C void WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_0_0_0;
IL2CPP_EXTERN_C void unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_0_0_0;
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_tB2FEBFA5D27CFA86544C06451270B36D77F2932C();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_certificate_callback_tB2FEBFA5D27CFA86544C06451270B36D77F2932C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tDBE877327789CABE940C2A724EC9A5D142318851();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_read_callback_tDBE877327789CABE940C2A724EC9A5D142318851_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_tAC1169E423F6EBDA60CDD5D33E1795A8811E0BE6();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_trace_callback_tAC1169E423F6EBDA60CDD5D33E1795A8811E0BE6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_t5D4B64AD846D04E819A49689F7EAA47365636611();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_write_callback_t5D4B64AD846D04E819A49689F7EAA47365636611_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_t3334D904C28324D444B6C26BEEF29B5E07D9D58D();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_x509verify_callback_t3334D904C28324D444B6C26BEEF29B5E07D9D58D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_callback_t1B72B7CF228F76F09A6A75C54C15F2084C01CA09();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_callback_t1B72B7CF228F76F09A6A75C54C15F2084C01CA09_0_0_0;
IL2CPP_EXTERN_C void UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_0_0_0;
IL2CPP_EXTERN_C void TimeSpanSplitter_t3A88A1F29A727E25EEF32409AFED5C7A9025AFF3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanSplitter_t3A88A1F29A727E25EEF32409AFED5C7A9025AFF3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanSplitter_t3A88A1F29A727E25EEF32409AFED5C7A9025AFF3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanSplitter_t3A88A1F29A727E25EEF32409AFED5C7A9025AFF3_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnStartedRecordingVideoCallback_t64E6C26F7ABAB9254AACB9D62C693F8922C1E45C();
IL2CPP_EXTERN_C_CONST RuntimeType OnStartedRecordingVideoCallback_t64E6C26F7ABAB9254AACB9D62C693F8922C1E45C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnStoppedRecordingVideoCallback_tC089900DD6C16C42C782522C257740BB222C1437();
IL2CPP_EXTERN_C_CONST RuntimeType OnStoppedRecordingVideoCallback_tC089900DD6C16C42C782522C257740BB222C1437_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnVideoCaptureResourceCreatedCallback_t5652A803A57C7FEA9BEAAA7250D14204C9AA114C();
IL2CPP_EXTERN_C_CONST RuntimeType OnVideoCaptureResourceCreatedCallback_t5652A803A57C7FEA9BEAAA7250D14204C9AA114C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnVideoModeStartedCallback_t7BFBEBA2CDDBFA58023D8BA206E0D90920819C1F();
IL2CPP_EXTERN_C_CONST RuntimeType OnVideoModeStartedCallback_t7BFBEBA2CDDBFA58023D8BA206E0D90920819C1F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnVideoModeStoppedCallback_tA29659F86D8702608589583F3F415ABF57F6A054();
IL2CPP_EXTERN_C_CONST RuntimeType OnVideoModeStoppedCallback_tA29659F86D8702608589583F3F415ABF57F6A054_0_0_0;
IL2CPP_EXTERN_C void Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0;
IL2CPP_EXTERN_C void SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_0_0_0;
IL2CPP_EXTERN_C void SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_0_0_0;
IL2CPP_EXTERN_C void UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_0_0_0;
IL2CPP_EXTERN_C void VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_0_0_0;
IL2CPP_EXTERN_C void VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_0_0_0;
IL2CPP_EXTERN_C void Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_0_0_0;
IL2CPP_EXTERN_C void Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_0_0_0;
IL2CPP_EXTERN_C void EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C_0_0_0;
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_0_0_0;
IL2CPP_EXTERN_C void XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_0_0_0;
IL2CPP_EXTERN_C void Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_0_0_0;
IL2CPP_EXTERN_C void SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_0_0_0;
IL2CPP_EXTERN_C void NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA();
IL2CPP_EXTERN_C_CONST RuntimeType HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA_0_0_0;
IL2CPP_EXTERN_C void ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_0_0_0;
IL2CPP_EXTERN_C void Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_0_0_0;
IL2CPP_EXTERN_C void TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_0_0_0;
IL2CPP_EXTERN_C void Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadDataHandler_t75DF50D4AD5800AB83554A832D2EF72F02FD2D2E();
IL2CPP_EXTERN_C_CONST RuntimeType ReadDataHandler_t75DF50D4AD5800AB83554A832D2EF72F02FD2D2E_0_0_0;
IL2CPP_EXTERN_C void AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4();
IL2CPP_EXTERN_C_CONST RuntimeType WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4_0_0_0;
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_0_0_0;
IL2CPP_EXTERN_C void InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_0_0_0;
IL2CPP_EXTERN_C void SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_0_0_0;
IL2CPP_EXTERN_C void SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_0_0_0;
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_0_0_0;
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_errorstate_create_t_tE8BB5D6BCA7D232F4981831586B71C39802CF75B();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_errorstate_create_t_tE8BB5D6BCA7D232F4981831586B71C39802CF75B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_t8C20FC78CA5BBEE0248CC09D1C1AF25BCB3835CF();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_errorstate_raise_error_t_t8C20FC78CA5BBEE0248CC09D1C1AF25BCB3835CF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_free_t_tDB8665140BAF30447F3650D323078C193566FF72();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_free_t_tDB8665140BAF30447F3650D323078C193566FF72_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_get_ref_t_t8335968B19449FE0ED92E67AE9B6D95915684209();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_get_ref_t_t8335968B19449FE0ED92E67AE9B6D95915684209_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_parse_der_t_tC218AEF9253FA105762F39041F696A06C52D3F10();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_parse_der_t_tC218AEF9253FA105762F39041F696A06C52D3F10_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_key_parse_pem_t_tE945670C6CB28BBF4670D2E8E904B7D8A2AB277B();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_key_parse_pem_t_tE945670C6CB28BBF4670D2E8E904B7D8A2AB277B_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_t6E7011EF958B0948582F8D1D213B454A5A962569();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_random_generate_bytes_t_t6E7011EF958B0948582F8D1D213B454A5A962569_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_t49D8F69D4152410A346CB3560B121DCC44AAC4EC();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_create_client_t_t49D8F69D4152410A346CB3560B121DCC44AAC4EC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t1068941B319B893D3FFBE53FE061676FF1CC3803();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_create_server_t_t1068941B319B893D3FFBE53FE061676FF1CC3803_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_free_t_tFBF7BB64D2E1C183718FB5809ABF0051395FD8F0();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_free_t_tFBF7BB64D2E1C183718FB5809ABF0051395FD8F0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_t7317543D399259616648B1AA19447C4B63F70EF2();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_get_ciphersuite_t_t7317543D399259616648B1AA19447C4B63F70EF2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_t04E3B73C1D77379F7C7388ED4934189365326F3C();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_get_protocol_t_t04E3B73C1D77379F7C7388ED4934189365326F3C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t717D19846262E3DF5D1A69C5E136912E7A54B253();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_notify_close_t_t717D19846262E3DF5D1A69C5E136912E7A54B253_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_t8D94F5FAD00CD61BF950829866C0C6E29D202606();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_process_handshake_t_t8D94F5FAD00CD61BF950829866C0C6E29D202606_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_read_t_t3E3C711F7A47E704ABDF0DF0B7515E7306EB7C95();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_read_t_t3E3C711F7A47E704ABDF0DF0B7515E7306EB7C95_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t2AC04245D1F40738C5FB87B0DEE80761E243F0BE();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_server_require_client_authentication_t_t2AC04245D1F40738C5FB87B0DEE80761E243F0BE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_t2B54F7228DFC11BF14DCF2201BDD90CF0EF92D41();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_certificate_callback_t_t2B54F7228DFC11BF14DCF2201BDD90CF0EF92D41_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_t007E8706D364DE695F1DBF28358058A1E73DF544();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_supported_ciphersuites_t_t007E8706D364DE695F1DBF28358058A1E73DF544_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_t3C615EACADC2CB1CDA8362B3F775071976E7CF7C();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_trace_callback_t_t3C615EACADC2CB1CDA8362B3F775071976E7CF7C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t032FE980BEDD0D201CAF1EE653ABE303CDBCA7C9();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_set_x509verify_callback_t_t032FE980BEDD0D201CAF1EE653ABE303CDBCA7C9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t976A41600B61F9C8DF022296B67316FFA53EB386();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_tlsctx_write_t_t976A41600B61F9C8DF022296B67316FFA53EB386_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509_export_der_t_tB784597940DE501BB5FEFA3EA528634559A16749();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509_export_der_t_tB784597940DE501BB5FEFA3EA528634559A16749_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_append_der_t_tC45176B25C9B11C509119A1943EFDE133D819951();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_append_der_t_tC45176B25C9B11C509119A1943EFDE133D819951_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_append_pem_t_t8218AF5B5C57C063C070E2450C1969CAEE30AA8D();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_append_pem_t_t8218AF5B5C57C063C070E2450C1969CAEE30AA8D_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_append_t_tC84B9CA7C15F5D1DE98386670A80D5F98559D98E();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_append_t_tC84B9CA7C15F5D1DE98386670A80D5F98559D98E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_create_t_t8873365FFB1556CE6B643700DB0C30E391B758D6();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_create_t_t8873365FFB1556CE6B643700DB0C30E391B758D6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_free_t_t9BD50B09A7919B7891DC529787E93C708FC653A2();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_free_t_t9BD50B09A7919B7891DC529787E93C708FC653A2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_t264CEEF7B8D1F10FD95E1BC78BB48BCA11E305EA();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_get_ref_t_t264CEEF7B8D1F10FD95E1BC78BB48BCA11E305EA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_t428DCD367D50DCDD5ECE6DCFEB8967C5F7C3DFE8();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509list_get_x509_t_t428DCD367D50DCDD5ECE6DCFEB8967C5F7C3DFE8_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_tED88B7ABC8408A22DB51B1F57D5FC65BDD2EC809();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_default_ca_t_tED88B7ABC8408A22DB51B1F57D5FC65BDD2EC809_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t1B3D98BF01F059A3C2ADE87EFDDA03C557A3D08D();
IL2CPP_EXTERN_C_CONST RuntimeType unitytls_x509verify_explicit_ca_t_t1B3D98BF01F059A3C2ADE87EFDDA03C557A3D08D_0_0_0;
IL2CPP_EXTERN_C void EventCacheEntry_t33A36CF96CE45CF31B229C6141C7ECF6A27278E0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventCacheEntry_t33A36CF96CE45CF31B229C6141C7ECF6A27278E0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventCacheEntry_t33A36CF96CE45CF31B229C6141C7ECF6A27278E0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventCacheEntry_t33A36CF96CE45CF31B229C6141C7ECF6A27278E0_0_0_0;
IL2CPP_EXTERN_C void EventCacheKey_t808E4964CFCF655710626DE6089FAF2C53DDECC9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventCacheKey_t808E4964CFCF655710626DE6089FAF2C53DDECC9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventCacheKey_t808E4964CFCF655710626DE6089FAF2C53DDECC9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventCacheKey_t808E4964CFCF655710626DE6089FAF2C53DDECC9_0_0_0;
IL2CPP_EXTERN_C Il2CppInteropData g_Il2CppInteropData[];
Il2CppInteropData g_Il2CppInteropData[580] = 
{
	{ DelegatePInvokeWrapper_Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07, NULL, NULL, NULL, NULL, NULL, &Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0 } /* System.Action */,
	{ NULL, Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke, Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_back, Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_cleanup, NULL, NULL, &Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_0_0_0 } /* UnityEngine.UIElements.UIR.Alloc */,
	{ DelegatePInvokeWrapper_AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F, NULL, NULL, NULL, NULL, NULL, &AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0 } /* UnityEngine.AndroidJavaRunnable */,
	{ NULL, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_back, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ NULL, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_back, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ NULL, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_back, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_0_0_0 } /* UnityEngine.AnimatorControllerParameter */,
	{ NULL, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_back, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ NULL, AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke, AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_back, AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_cleanup, NULL, NULL, &AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_0_0_0 } /* System.AppDomain */,
	{ DelegatePInvokeWrapper_AppDomainInitializer_tED36272F704E9A95E8FEFFD67EECA50F089B4D1A, NULL, NULL, NULL, NULL, NULL, &AppDomainInitializer_tED36272F704E9A95E8FEFFD67EECA50F089B4D1A_0_0_0 } /* System.AppDomainInitializer */,
	{ NULL, AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke, AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_back, AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_cleanup, NULL, NULL, &AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_0_0_0 } /* System.AppDomainSetup */,
	{ NULL, ArrayWithOffset_t45E53DF36D8D675E689DBF4BEFBCCAD37AED016D_marshal_pinvoke, ArrayWithOffset_t45E53DF36D8D675E689DBF4BEFBCCAD37AED016D_marshal_pinvoke_back, ArrayWithOffset_t45E53DF36D8D675E689DBF4BEFBCCAD37AED016D_marshal_pinvoke_cleanup, NULL, NULL, &ArrayWithOffset_t45E53DF36D8D675E689DBF4BEFBCCAD37AED016D_0_0_0 } /* System.Runtime.InteropServices.ArrayWithOffset */,
	{ NULL, Assembly_t_marshal_pinvoke, Assembly_t_marshal_pinvoke_back, Assembly_t_marshal_pinvoke_cleanup, NULL, NULL, &Assembly_t_0_0_0 } /* System.Reflection.Assembly */,
	{ NULL, AssemblyHash_t7D834D541747557EA5DB62E27949A643CBE4DB80_marshal_pinvoke, AssemblyHash_t7D834D541747557EA5DB62E27949A643CBE4DB80_marshal_pinvoke_back, AssemblyHash_t7D834D541747557EA5DB62E27949A643CBE4DB80_marshal_pinvoke_cleanup, NULL, NULL, &AssemblyHash_t7D834D541747557EA5DB62E27949A643CBE4DB80_0_0_0 } /* System.Configuration.Assemblies.AssemblyHash */,
	{ NULL, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_back, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_cleanup, NULL, NULL, &AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_0_0_0 } /* System.Reflection.AssemblyName */,
	{ NULL, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_back, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_0_0_0 } /* UnityEngine.AssetBundleCreateRequest */,
	{ NULL, AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke, AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_back, AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_0_0_0 } /* UnityEngine.AssetBundleRecompressOperation */,
	{ NULL, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_back, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_cleanup, NULL, NULL, &AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_0_0_0 } /* UnityEngine.AssetBundleRequest */,
	{ NULL, AsyncFlowControl_t1BB65380CA8AA973CAE0814179796E762403EF92_marshal_pinvoke, AsyncFlowControl_t1BB65380CA8AA973CAE0814179796E762403EF92_marshal_pinvoke_back, AsyncFlowControl_t1BB65380CA8AA973CAE0814179796E762403EF92_marshal_pinvoke_cleanup, NULL, NULL, &AsyncFlowControl_t1BB65380CA8AA973CAE0814179796E762403EF92_0_0_0 } /* System.Threading.AsyncFlowControl */,
	{ NULL, AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke, AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_back, AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_cleanup, NULL, NULL, &AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_0_0_0 } /* System.Runtime.CompilerServices.AsyncMethodBuilderCore */,
	{ NULL, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_back, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ NULL, AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke, AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_back, AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_cleanup, NULL, NULL, &AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_0_0_0 } /* Unity.IO.LowLevel.Unsafe.AsyncReadManagerMetricsFilters */,
	{ NULL, AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke, AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_back, AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_cleanup, NULL, NULL, &AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_0_0_0 } /* Unity.IO.LowLevel.Unsafe.AsyncReadManagerRequestMetric */,
	{ NULL, AsyncReadManagerSummaryMetrics_t6966444257D63705ED391CADAEE69D564FBA5AEB_marshal_pinvoke, AsyncReadManagerSummaryMetrics_t6966444257D63705ED391CADAEE69D564FBA5AEB_marshal_pinvoke_back, AsyncReadManagerSummaryMetrics_t6966444257D63705ED391CADAEE69D564FBA5AEB_marshal_pinvoke_cleanup, NULL, NULL, &AsyncReadManagerSummaryMetrics_t6966444257D63705ED391CADAEE69D564FBA5AEB_0_0_0 } /* Unity.IO.LowLevel.Unsafe.AsyncReadManagerSummaryMetrics */,
	{ NULL, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_back, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_cleanup, NULL, NULL, &AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_0_0_0 } /* System.Runtime.Remoting.Messaging.AsyncResult */,
	{ NULL, AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke, AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_back, AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_cleanup, NULL, NULL, &AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_0_0_0 } /* System.Runtime.CompilerServices.AsyncTaskMethodBuilder */,
	{ NULL, AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke, AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke_back, AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshal_pinvoke_cleanup, NULL, NULL, &AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_0_0_0 } /* System.Runtime.CompilerServices.AsyncVoidMethodBuilder */,
	{ NULL, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_back, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_cleanup, NULL, NULL, &Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_0_0_0 } /* UnityEngine.UIElements.Background */,
	{ NULL, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_back, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_cleanup, NULL, NULL, &BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0 } /* UnityEngine.Rendering.BatchRendererGroup */,
	{ NULL, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_back, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_cleanup, NULL, NULL, &BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_0_0_0 } /* System.Numerics.BigInteger */,
	{ NULL, BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke, BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_back, BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_cleanup, NULL, NULL, &BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_0_0_0 } /* UnityEngine.UIElements.UIR.BitmapAllocator32 */,
	{ NULL, CONNECTDATA_tDB40BBD2AC7222D8EDF99075F08E296A31ED8B1F_marshal_pinvoke, CONNECTDATA_tDB40BBD2AC7222D8EDF99075F08E296A31ED8B1F_marshal_pinvoke_back, CONNECTDATA_tDB40BBD2AC7222D8EDF99075F08E296A31ED8B1F_marshal_pinvoke_cleanup, NULL, NULL, &CONNECTDATA_tDB40BBD2AC7222D8EDF99075F08E296A31ED8B1F_0_0_0 } /* System.Runtime.InteropServices.CONNECTDATA */,
	{ NULL, CONNECTDATA_tAB05C4CA0971BBD2F240B4F3DFDBE3EC172AF07E_marshal_pinvoke, CONNECTDATA_tAB05C4CA0971BBD2F240B4F3DFDBE3EC172AF07E_marshal_pinvoke_back, CONNECTDATA_tAB05C4CA0971BBD2F240B4F3DFDBE3EC172AF07E_marshal_pinvoke_cleanup, NULL, NULL, &CONNECTDATA_tAB05C4CA0971BBD2F240B4F3DFDBE3EC172AF07E_0_0_0 } /* System.Runtime.InteropServices.ComTypes.CONNECTDATA */,
	{ NULL, CacheIndex_tDF5283228F218DFFA9FA2267891D89F9BD39D121_marshal_pinvoke, CacheIndex_tDF5283228F218DFFA9FA2267891D89F9BD39D121_marshal_pinvoke_back, CacheIndex_tDF5283228F218DFFA9FA2267891D89F9BD39D121_marshal_pinvoke_cleanup, NULL, NULL, &CacheIndex_tDF5283228F218DFFA9FA2267891D89F9BD39D121_0_0_0 } /* UnityEngine.CacheIndex */,
	{ NULL, CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91_marshal_pinvoke, CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91_marshal_pinvoke_back, CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91_marshal_pinvoke_cleanup, NULL, NULL, &CachedAssetBundle_t5C0C1D8D8AAF7DDC3D3CF7D81BBF581A89819E91_0_0_0 } /* UnityEngine.CachedAssetBundle */,
	{ NULL, CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke, CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_back, CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_cleanup, NULL, NULL, &CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_0_0_0 } /* System.Globalization.CalendarData */,
	{ NULL, CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke, CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_back, CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_cleanup, NULL, NULL, &CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_0_0_0 } /* System.Threading.CancellationCallbackCoreWorkArguments */,
	{ NULL, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_back, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_cleanup, NULL, NULL, &CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_0_0_0 } /* System.Threading.CancellationToken */,
	{ NULL, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_back, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_cleanup, NULL, NULL, &CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_0_0_0 } /* System.Threading.CancellationTokenRegistration */,
	{ NULL, CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke, CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke_back, CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshal_pinvoke_cleanup, NULL, NULL, &CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_0_0_0 } /* Internal.Cryptography.Pal.CertificateData */,
	{ NULL, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup, NULL, NULL, &CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_0_0_0 } /* UnityEngine.Networking.CertificateHandler */,
	{ NULL, CharInfo_t777B426D04AD97A5474E7CCD0EE8F00EF208D165_marshal_pinvoke, CharInfo_t777B426D04AD97A5474E7CCD0EE8F00EF208D165_marshal_pinvoke_back, CharInfo_t777B426D04AD97A5474E7CCD0EE8F00EF208D165_marshal_pinvoke_cleanup, NULL, NULL, &CharInfo_t777B426D04AD97A5474E7CCD0EE8F00EF208D165_0_0_0 } /* System.CharInfo */,
	{ NULL, CngProperty_tC728CC16FBEF62E59C284C77ED6838204D496544_marshal_pinvoke, CngProperty_tC728CC16FBEF62E59C284C77ED6838204D496544_marshal_pinvoke_back, CngProperty_tC728CC16FBEF62E59C284C77ED6838204D496544_marshal_pinvoke_cleanup, NULL, NULL, &CngProperty_tC728CC16FBEF62E59C284C77ED6838204D496544_0_0_0 } /* System.Security.Cryptography.CngProperty */,
	{ NULL, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshal_pinvoke, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshal_pinvoke_back, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshal_pinvoke_cleanup, NULL, NULL, &Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_0_0_0 } /* UnityEngine.Collision */,
	{ NULL, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke_back, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshal_pinvoke_cleanup, NULL, NULL, &Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_0_0_0 } /* UnityEngine.Collision2D */,
	{ NULL, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_back, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_cleanup, NULL, NULL, &ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_0_0_0 } /* UnityEngine.UIElements.ColorPage */,
	{ NULL, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_back, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_0_0_0 } /* UnityEngine.UI.CoroutineTween.ColorTween */,
	{ NULL, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_back, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_cleanup, NULL, NULL, &ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_0_0_0 } /* UnityEngine.UIElements.ComputedStyle */,
	{ NULL, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_back, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_cleanup, NULL, NULL, &ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_0_0_0 } /* UnityEngine.UIElements.ComputedTransitionProperty */,
	{ NULL, ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke, ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_back, ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable */,
	{ NULL, ConsoleCursorInfo_tCF20B18747D9272A87D89204136B60D7EC7EA90B_marshal_pinvoke, ConsoleCursorInfo_tCF20B18747D9272A87D89204136B60D7EC7EA90B_marshal_pinvoke_back, ConsoleCursorInfo_tCF20B18747D9272A87D89204136B60D7EC7EA90B_marshal_pinvoke_cleanup, NULL, NULL, &ConsoleCursorInfo_tCF20B18747D9272A87D89204136B60D7EC7EA90B_0_0_0 } /* System.ConsoleCursorInfo */,
	{ NULL, ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke, ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_back, ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_cleanup, NULL, NULL, &ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_0_0_0 } /* System.ConsoleKeyInfo */,
	{ NULL, ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke, ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke_back, ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshal_pinvoke_cleanup, NULL, NULL, &ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_0_0_0 } /* UnityEngine.ContactFilter2D */,
	{ NULL, Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke, Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_back, Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_cleanup, NULL, NULL, &Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_0_0_0 } /* System.Runtime.Remoting.Contexts.Context */,
	{ NULL, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke_back, ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_marshal_pinvoke_cleanup, NULL, NULL, &ControllerColliderHit_tD0B734CBE0E2B089339B14600EB5A80295F6DE92_0_0_0 } /* UnityEngine.ControllerColliderHit */,
	{ NULL, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_back, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_0_0_0 } /* UnityEngine.Coroutine */,
	{ NULL, CoveredMethodStats_t1675D561958CF14DFA5EF2092E65FBBAC7E1CC1D_marshal_pinvoke, CoveredMethodStats_t1675D561958CF14DFA5EF2092E65FBBAC7E1CC1D_marshal_pinvoke_back, CoveredMethodStats_t1675D561958CF14DFA5EF2092E65FBBAC7E1CC1D_marshal_pinvoke_cleanup, NULL, NULL, &CoveredMethodStats_t1675D561958CF14DFA5EF2092E65FBBAC7E1CC1D_0_0_0 } /* UnityEngine.TestTools.CoveredMethodStats */,
	{ NULL, CoveredSequencePoint_t3DCBD06D689ED6C708ED78715A3B3571FD2A0CBC_marshal_pinvoke, CoveredSequencePoint_t3DCBD06D689ED6C708ED78715A3B3571FD2A0CBC_marshal_pinvoke_back, CoveredSequencePoint_t3DCBD06D689ED6C708ED78715A3B3571FD2A0CBC_marshal_pinvoke_cleanup, NULL, NULL, &CoveredSequencePoint_t3DCBD06D689ED6C708ED78715A3B3571FD2A0CBC_0_0_0 } /* UnityEngine.TestTools.CoveredSequencePoint */,
	{ NULL, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_back, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_cleanup, NULL, NULL, &CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_0_0_0 } /* UnityEngine.UIElements.CreationContext */,
	{ DelegatePInvokeWrapper_CrossAppDomainDelegate_t29EFF0DA1515D3687C38FE6160B57321234313A4, NULL, NULL, NULL, NULL, NULL, &CrossAppDomainDelegate_t29EFF0DA1515D3687C38FE6160B57321234313A4_0_0_0 } /* System.CrossAppDomainDelegate */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ NULL, CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke, CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_back, CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_0_0_0 } /* UnityEngine.CullingGroup */,
	{ NULL, CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke, CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_back, CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_cleanup, NULL, NULL, &CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_0_0_0 } /* System.Globalization.CultureData */,
	{ NULL, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_back, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_cleanup, NULL, NULL, &CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_0_0_0 } /* System.Globalization.CultureInfo */,
	{ NULL, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_back, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_cleanup, NULL, NULL, &Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_0_0_0 } /* UnityEngine.UIElements.Cursor */,
	{ NULL, CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke, CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke_back, CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke_cleanup, NULL, NULL, &CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_0_0_0 } /* UnityEngine.UIElements.CursorPositionStylePainterParameters */,
	{ NULL, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_back, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_back, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ NULL, CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED_marshal_pinvoke, CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED_marshal_pinvoke_back, CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED_marshal_pinvoke_cleanup, NULL, NULL, &CustomRenderTextureUpdateZone_t98B3AAB09D6B712F4CCC416CB2DF820C2B6BDCED_0_0_0 } /* UnityEngine.CustomRenderTextureUpdateZone */,
	{ NULL, CustomUnRegister_t475AB029B2E537861044D0AE8157895E13B65B62_marshal_pinvoke, CustomUnRegister_t475AB029B2E537861044D0AE8157895E13B65B62_marshal_pinvoke_back, CustomUnRegister_t475AB029B2E537861044D0AE8157895E13B65B62_marshal_pinvoke_cleanup, NULL, NULL, &CustomUnRegister_t475AB029B2E537861044D0AE8157895E13B65B62_0_0_0 } /* QFramework.CustomUnRegister */,
	{ NULL, DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke, DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_back, DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_cleanup, NULL, NULL, &DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_0_0_0 } /* System.Security.Cryptography.DSAParameters */,
	{ NULL, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_back, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_0_0_0 } /* System.DateTimeRawInfo */,
	{ NULL, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_back, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_0_0_0 } /* System.DateTimeResult */,
	{ NULL, DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke, DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_back, DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_cleanup, NULL, NULL, &DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_0_0_0 } /* System.Globalization.DaylightTimeStruct */,
	{ NULL, Delegate_t_marshal_pinvoke, Delegate_t_marshal_pinvoke_back, Delegate_t_marshal_pinvoke_cleanup, NULL, NULL, &Delegate_t_0_0_0 } /* System.Delegate */,
	{ NULL, DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_marshal_pinvoke, DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_marshal_pinvoke_back, DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_marshal_pinvoke_cleanup, NULL, NULL, &DiagnosticSwitch_tAE0C76FAF862A896635161E04F86BE637513D294_0_0_0 } /* UnityEngine.DiagnosticSwitch */,
	{ NULL, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_back, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup, NULL, NULL, &DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DirectionalLight */,
	{ NULL, DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_marshal_pinvoke, DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_marshal_pinvoke_back, DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_marshal_pinvoke_cleanup, NULL, NULL, &DisableMediaInsertionPrompt_t874258833B73FEAAC32D1DB565E134D1439AB2F7_0_0_0 } /* System.IO.DisableMediaInsertionPrompt */,
	{ NULL, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup, NULL, NULL, &DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DiscLight */,
	{ NULL, DisplayInfo_tF41D127F984E526091EDFBE6289D76024755B473_marshal_pinvoke, DisplayInfo_tF41D127F984E526091EDFBE6289D76024755B473_marshal_pinvoke_back, DisplayInfo_tF41D127F984E526091EDFBE6289D76024755B473_marshal_pinvoke_cleanup, NULL, NULL, &DisplayInfo_tF41D127F984E526091EDFBE6289D76024755B473_0_0_0 } /* UnityEngine.DisplayInfo */,
	{ NULL, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_0_0_0 } /* UnityEngine.Networking.DownloadHandler */,
	{ NULL, DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshal_pinvoke, DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshal_pinvoke_back, DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerAssetBundle_tCD9D8BA067912469251677D16DFCADD13CAD510C_0_0_0 } /* UnityEngine.Networking.DownloadHandlerAssetBundle */,
	{ NULL, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_back, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_0_0_0 } /* UnityEngine.Networking.DownloadHandlerBuffer */,
	{ NULL, ECCurve_t6813FDB797E2267032BCE0B703C87CF3D500822D_marshal_pinvoke, ECCurve_t6813FDB797E2267032BCE0B703C87CF3D500822D_marshal_pinvoke_back, ECCurve_t6813FDB797E2267032BCE0B703C87CF3D500822D_marshal_pinvoke_cleanup, NULL, NULL, &ECCurve_t6813FDB797E2267032BCE0B703C87CF3D500822D_0_0_0 } /* System.Security.Cryptography.ECCurve */,
	{ NULL, ECParameters_t004F33CE74EF3D123F2792769285194F12C00F12_marshal_pinvoke, ECParameters_t004F33CE74EF3D123F2792769285194F12C00F12_marshal_pinvoke_back, ECParameters_t004F33CE74EF3D123F2792769285194F12C00F12_marshal_pinvoke_cleanup, NULL, NULL, &ECParameters_t004F33CE74EF3D123F2792769285194F12C00F12_0_0_0 } /* System.Security.Cryptography.ECParameters */,
	{ NULL, ECPoint_tB72283ABB58FFAE37BF1F60CC1EBBF987AEB7E37_marshal_pinvoke, ECPoint_tB72283ABB58FFAE37BF1F60CC1EBBF987AEB7E37_marshal_pinvoke_back, ECPoint_tB72283ABB58FFAE37BF1F60CC1EBBF987AEB7E37_marshal_pinvoke_cleanup, NULL, NULL, &ECPoint_tB72283ABB58FFAE37BF1F60CC1EBBF987AEB7E37_0_0_0 } /* System.Security.Cryptography.ECPoint */,
	{ NULL, EXCEPINFO_t17542B900FAFAAB57D94D60CD0F07F5A3B406C81_marshal_pinvoke, EXCEPINFO_t17542B900FAFAAB57D94D60CD0F07F5A3B406C81_marshal_pinvoke_back, EXCEPINFO_t17542B900FAFAAB57D94D60CD0F07F5A3B406C81_marshal_pinvoke_cleanup, NULL, NULL, &EXCEPINFO_t17542B900FAFAAB57D94D60CD0F07F5A3B406C81_0_0_0 } /* System.Runtime.InteropServices.EXCEPINFO */,
	{ NULL, EXCEPINFO_t8E50CDB4D0265FD848C27A74D0F058F7537BF2C7_marshal_pinvoke, EXCEPINFO_t8E50CDB4D0265FD848C27A74D0F058F7537BF2C7_marshal_pinvoke_back, EXCEPINFO_t8E50CDB4D0265FD848C27A74D0F058F7537BF2C7_marshal_pinvoke_cleanup, NULL, NULL, &EXCEPINFO_t8E50CDB4D0265FD848C27A74D0F058F7537BF2C7_0_0_0 } /* System.Runtime.InteropServices.ComTypes.EXCEPINFO */,
	{ NULL, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_back, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0 } /* System.Enum */,
	{ NULL, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshal_pinvoke, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshal_pinvoke_back, EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshal_pinvoke_cleanup, NULL, NULL, &EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_0_0_0 } /* UnityEngine.EnumData */,
	{ NULL, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_back, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_cleanup, NULL, NULL, &Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_0_0_0 } /* System.Runtime.CompilerServices.Ephemeron */,
	{ NULL, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_back, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_cleanup, NULL, NULL, &Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_0_0_0 } /* UnityEngine.Event */,
	{ NULL, EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke, EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_back, EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_cleanup, NULL, NULL, &EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_0_0_0 } /* UnityEngine.UIElements.EventDispatcherGate */,
	{ NULL, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_back, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_cleanup, NULL, NULL, &EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_0_0_0 } /* UnityEngine.EventInterests */,
	{ NULL, Exception_t_marshal_pinvoke, Exception_t_marshal_pinvoke_back, Exception_t_marshal_pinvoke_cleanup, NULL, NULL, &Exception_t_0_0_0 } /* System.Exception */,
	{ NULL, ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke, ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_back, ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_cleanup, NULL, NULL, &ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_0_0_0 } /* System.Reflection.ExceptionHandlingClause */,
	{ NULL, ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke, ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_back, ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_cleanup, NULL, NULL, &ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_0_0_0 } /* System.Threading.ExecutionContextSwitcher */,
	{ NULL, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_back, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_cleanup, NULL, NULL, &FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0 } /* UnityEngine.TextCore.FaceInfo */,
	{ NULL, FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke, FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_back, FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ NULL, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_back, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_0_0_0 } /* UnityEngine.UI.CoroutineTween.FloatTween */,
	{ NULL, FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke, FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_back, FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_0_0_0 } /* UnityEngine.TextCore.Text.FontAssetCreationEditorSettings */,
	{ NULL, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_back, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_cleanup, NULL, NULL, &FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_0_0_0 } /* UnityEngine.UIElements.FontDefinition */,
	{ NULL, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_back, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_cleanup, NULL, NULL, &FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_0_0_0 } /* UnityEngine.TextCore.LowLevel.FontReference */,
	{ NULL, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_back, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_cleanup, NULL, NULL, &FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_0_0_0 } /* UnityEngine.TextCore.Text.FontWeightPair */,
	{ NULL, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_back, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_cleanup, NULL, NULL, &ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_0_0_0 } /* System.Threading.Tasks.ForceAsyncAwaiter */,
	{ NULL, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_back, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0 } /* UnityEngine.GUIContent */,
	{ NULL, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ NULL, GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D_marshal_pinvoke, GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D_marshal_pinvoke_back, GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D_marshal_pinvoke_cleanup, NULL, NULL, &GlobalKeyword_tFA029618DA6ADCA20CFA44C1B8AFFF9EA097AE7D_0_0_0 } /* UnityEngine.Rendering.GlobalKeyword */,
	{ NULL, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_back, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_cleanup, NULL, NULL, &Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0 } /* UnityEngine.TextCore.Glyph */,
	{ NULL, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_back, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_0_0_0 } /* UnityEngine.Gradient */,
	{ NULL, HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke, HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke_back, HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshal_pinvoke_cleanup, NULL, NULL, &HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_0_0_0 } /* System.Security.Cryptography.HashAlgorithmName */,
	{ DelegatePInvokeWrapper_HeaderParser_t9BD3B896027A047C0DA68DC732ABC1B9A660AB67, NULL, NULL, NULL, NULL, NULL, &HeaderParser_t9BD3B896027A047C0DA68DC732ABC1B9A660AB67_0_0_0 } /* System.Net.HeaderParser */,
	{ NULL, HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke, HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke_back, HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_marshal_pinvoke_cleanup, NULL, NULL, &HeaderVariantInfo_t99223ED0C557730FBD8AA572065B994254F3386A_0_0_0 } /* System.Net.HeaderVariantInfo */,
	{ NULL, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, NULL, NULL, NULL, NULL, &IActivationFactory_tE0701BB63326AE9DC14E446AE8E4043E0417DFF7::IID, &IActivationFactory_tE0701BB63326AE9DC14E446AE8E4043E0417DFF7_0_0_0 } /* System.Runtime.InteropServices.WindowsRuntime.IActivationFactory */,
	{ NULL, NULL, NULL, NULL, NULL, &IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3::IID, &IAdviseSink_t37C3EC848072ADC38380B8E6792BCFC7FB02F5A3_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IAdviseSink */,
	{ NULL, NULL, NULL, NULL, NULL, &IBindCtx_t5A851DDA04E33B0462BA818962ED68DCBE29782D::IID, &IBindCtx_t5A851DDA04E33B0462BA818962ED68DCBE29782D_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IBindCtx */,
	{ NULL, NULL, NULL, NULL, NULL, &IConnectionPoint_t1845B9B3FE83010AA93BABDE61C7548CEB210B9E::IID, &IConnectionPoint_t1845B9B3FE83010AA93BABDE61C7548CEB210B9E_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IConnectionPoint */,
	{ NULL, NULL, NULL, NULL, NULL, &IConnectionPointContainer_t29C2EF9A4358A5AC8D82F13C6A62AB6C0369A3BF::IID, &IConnectionPointContainer_t29C2EF9A4358A5AC8D82F13C6A62AB6C0369A3BF_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IConnectionPointContainer */,
	{ NULL, NULL, NULL, NULL, NULL, &IDataObject_t47F2CDDF556578DD1CA1DD50B64223DE02046725::IID, &IDataObject_t47F2CDDF556578DD1CA1DD50B64223DE02046725_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IDataObject */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumConnectionPoints_t2559BF800C90D85F6C2D97825198691B5A880462::IID, &IEnumConnectionPoints_t2559BF800C90D85F6C2D97825198691B5A880462_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumConnectionPoints */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumConnections_t1DD00593B035913F07597F2E6DA1248A0AE0049F::IID, &IEnumConnections_t1DD00593B035913F07597F2E6DA1248A0AE0049F_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumConnections */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C::IID, &IEnumFORMATETC_tA2975106C072DA4A2C01123C03B40E4C6A378D2C_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumFORMATETC */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumMoniker_t7A355BC26E2383D488B655071D4ABAAD0C4A23E4::IID, &IEnumMoniker_t7A355BC26E2383D488B655071D4ABAAD0C4A23E4_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumMoniker */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7::IID, &IEnumSTATDATA_t74774EEE6E04C3CCE175B8F433428B4F2DCA23E7_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumSTATDATA */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumString_t747F70560F8E1C353FC12CB3935C0C937CA7B418::IID, &IEnumString_t747F70560F8E1C353FC12CB3935C0C937CA7B418_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumString */,
	{ NULL, NULL, NULL, NULL, NULL, &IEnumVARIANT_t436A6FE96D5B88563A908C364EAB75FB63FC0D4F::IID, &IEnumVARIANT_t436A6FE96D5B88563A908C364EAB75FB63FC0D4F_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IEnumVARIANT */,
	{ NULL, NULL, NULL, NULL, NULL, &IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8::IID, &IMoniker_tEB333F870BCBCEA3BB5D6CBC9C22909B568741A8_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IMoniker */,
	{ NULL, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_back, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_cleanup, NULL, NULL, &IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_0_0_0 } /* System.IOAsyncResult */,
	{ DelegatePInvokeWrapper_IOCompletionCallback_tBEA2FFE9C503FD61B6839C32A2F6253D77381366, NULL, NULL, NULL, NULL, NULL, &IOCompletionCallback_tBEA2FFE9C503FD61B6839C32A2F6253D77381366_0_0_0 } /* System.Threading.IOCompletionCallback */,
	{ NULL, IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke, IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_back, IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_cleanup, NULL, NULL, &IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_0_0_0 } /* System.IOSelectorJob */,
	{ NULL, IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke, IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_back, IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_cleanup, NULL, NULL, &IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_0_0_0 } /* System.Net.Sockets.IPPacketInformation */,
	{ NULL, NULL, NULL, NULL, NULL, &IPersistFile_t0904887F33EA8B6D57A5F44E039BD71002616EE6::IID, &IPersistFile_t0904887F33EA8B6D57A5F44E039BD71002616EE6_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IPersistFile */,
	{ NULL, IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_marshal_pinvoke, IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_marshal_pinvoke_back, IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_marshal_pinvoke_cleanup, NULL, NULL, &IPv6AddressFormatter_t2EA33A2D57555121A5FB9BF403410B6D66233282_0_0_0 } /* System.Net.IPv6AddressFormatter */,
	{ NULL, NULL, NULL, NULL, NULL, &IRestrictedErrorInfo_tC6B9BF4F49654260223FA77AB4415C965370423D::IID, &IRestrictedErrorInfo_tC6B9BF4F49654260223FA77AB4415C965370423D_0_0_0 } /* System.Runtime.InteropServices.WindowsRuntime.IRestrictedErrorInfo */,
	{ NULL, NULL, NULL, NULL, NULL, &IRunningObjectTable_tE4EC21AF9F8D2A5F448A427C8E1253A9C659A52E::IID, &IRunningObjectTable_tE4EC21AF9F8D2A5F448A427C8E1253A9C659A52E_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IRunningObjectTable */,
	{ NULL, NULL, NULL, NULL, NULL, &IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID, &IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IStream */,
	{ NULL, NULL, NULL, NULL, NULL, &ITypeComp_t9239FE881260744399D7472262B8593BE359013E::IID, &ITypeComp_t9239FE881260744399D7472262B8593BE359013E_0_0_0 } /* System.Runtime.InteropServices.ComTypes.ITypeComp */,
	{ NULL, NULL, NULL, NULL, NULL, &ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D::IID, &ITypeInfo_tBA3870009A4E7237BB985D79A38A8A5A2576AA5D_0_0_0 } /* System.Runtime.InteropServices.ComTypes.ITypeInfo */,
	{ NULL, NULL, NULL, NULL, NULL, &ITypeInfo2_tA70FE09087E040396B06F5E73C3091F1BEDF4260::IID, &ITypeInfo2_tA70FE09087E040396B06F5E73C3091F1BEDF4260_0_0_0 } /* System.Runtime.InteropServices.ComTypes.ITypeInfo2 */,
	{ NULL, NULL, NULL, NULL, NULL, &ITypeLib_tA8FAEFF0E1D6536320C8A709ABDF6A694651D5FE::IID, &ITypeLib_tA8FAEFF0E1D6536320C8A709ABDF6A694651D5FE_0_0_0 } /* System.Runtime.InteropServices.ComTypes.ITypeLib */,
	{ NULL, NULL, NULL, NULL, NULL, &ITypeLib2_tD652EA1A3767EBD75060689FA815CD8EF790D344::IID, &ITypeLib2_tD652EA1A3767EBD75060689FA815CD8EF790D344_0_0_0 } /* System.Runtime.InteropServices.ComTypes.ITypeLib2 */,
	{ NULL, ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke, ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_back, ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_cleanup, NULL, NULL, &ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_0_0_0 } /* UnityEngine.UIElements.StyleSheets.ImageSource */,
	{ NULL, InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke, InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_back, InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_cleanup, NULL, NULL, &InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_0_0_0 } /* UnityEngine.UIElements.InheritedData */,
	{ NULL, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke_back, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshal_pinvoke_cleanup, NULL, NULL, &InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_0_0_0 } /* UnityEngine.XR.InputDevice */,
	{ NULL, InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke, InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke_back, InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_marshal_pinvoke_cleanup, NULL, NULL, &InputDevices_t02B79FC19CEA9AC29A9945F5CDA6D790730FBF34_0_0_0 } /* UnityEngine.XR.InputDevices */,
	{ NULL, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke_back, InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_marshal_pinvoke_cleanup, NULL, NULL, &InputFeatureUsage_t1E251DC4F8CD697080F0F5D98388955AF8B87599_0_0_0 } /* UnityEngine.XR.InputFeatureUsage */,
	{ NULL, InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke, InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_back, InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_cleanup, NULL, NULL, &InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_0_0_0 } /* System.InputRecord */,
	{ NULL, InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke, InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke_back, InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_marshal_pinvoke_cleanup, NULL, NULL, &InstructionArray_t462A6779CC45E6F5578352572B16A61954CB8117_0_0_0 } /* System.Linq.Expressions.Interpreter.InstructionArray */,
	{ NULL, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke_back, IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshal_pinvoke_cleanup, NULL, NULL, &IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_0_0_0 } /* UnityEngine.IntegratedSubsystem */,
	{ NULL, IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke, IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke_back, IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshal_pinvoke_cleanup, NULL, NULL, &IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_0_0_0 } /* UnityEngine.IntegratedSubsystemDescriptor */,
	{ NULL, InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke, InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke_back, InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke_cleanup, NULL, NULL, &InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_0_0_0 } /* System.Reflection.InterfaceMapping */,
	{ NULL, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_back, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_cleanup, NULL, NULL, &InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_0_0_0 } /* System.Globalization.InternalCodePageDataItem */,
	{ NULL, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_back, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_cleanup, NULL, NULL, &InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_0_0_0 } /* System.Globalization.InternalEncodingDataItem */,
	{ NULL, Internal_DrawTextureArguments_t90CA68F41AF546B63FA02B9EF8D37F641FA26FFD_marshal_pinvoke, Internal_DrawTextureArguments_t90CA68F41AF546B63FA02B9EF8D37F641FA26FFD_marshal_pinvoke_back, Internal_DrawTextureArguments_t90CA68F41AF546B63FA02B9EF8D37F641FA26FFD_marshal_pinvoke_cleanup, NULL, NULL, &Internal_DrawTextureArguments_t90CA68F41AF546B63FA02B9EF8D37F641FA26FFD_0_0_0 } /* UnityEngine.Internal_DrawTextureArguments */,
	{ NULL, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke_back, InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_marshal_pinvoke_cleanup, NULL, NULL, &InterpretedFrameInfo_tEF62B79D176B8D032C22953AA0D5B581C4076321_0_0_0 } /* System.Linq.Expressions.Interpreter.InterpretedFrameInfo */,
	{ NULL, LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741_marshal_pinvoke, LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741_marshal_pinvoke_back, LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741_marshal_pinvoke_cleanup, NULL, NULL, &LOD_tFCD9DABCBBA65A45D48B82EBDC65162CDC719741_0_0_0 } /* UnityEngine.LOD */,
	{ NULL, LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke, LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_back, LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_cleanup, NULL, NULL, &LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_0_0_0 } /* UnityEngine.LightBakingOutput */,
	{ NULL, LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke, LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_back, LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_cleanup, NULL, NULL, &LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_0_0_0 } /* UnityEngine.LightProbes */,
	{ NULL, LightmapData_t043B36B9B0FF7D245CE561E2400F108F8596A4AA_marshal_pinvoke, LightmapData_t043B36B9B0FF7D245CE561E2400F108F8596A4AA_marshal_pinvoke_back, LightmapData_t043B36B9B0FF7D245CE561E2400F108F8596A4AA_marshal_pinvoke_cleanup, NULL, NULL, &LightmapData_t043B36B9B0FF7D245CE561E2400F108F8596A4AA_0_0_0 } /* UnityEngine.LightmapData */,
	{ NULL, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_back, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_cleanup, NULL, NULL, &LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_0_0_0 } /* UnityEngine.TextCore.Text.LinkInfo */,
	{ NULL, ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke, ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke_back, ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke_cleanup, NULL, NULL, &ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_0_0_0 } /* UnityEngine.UIElements.ListDragAndDropArgs */,
	{ NULL, LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke, LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_back, LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_cleanup, NULL, NULL, &LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_0_0_0 } /* System.Reflection.Emit.LocalBuilder */,
	{ NULL, LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke, LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke_back, LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_marshal_pinvoke_cleanup, NULL, NULL, &LocalDefinition_t7B90DE35AAE919E1C79BA7EAFB99BF70589B1C02_0_0_0 } /* System.Linq.Expressions.Interpreter.LocalDefinition */,
	{ NULL, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshal_pinvoke, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshal_pinvoke_back, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshal_pinvoke_cleanup, NULL, NULL, &LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_0_0_0 } /* UnityEngine.Rendering.LocalKeyword */,
	{ NULL, LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke, LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_back, LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_cleanup, NULL, NULL, &LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_0_0_0 } /* System.Reflection.LocalVariableInfo */,
	{ NULL, LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke, LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_back, LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_cleanup, NULL, NULL, &LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_0_0_0 } /* System.Threading.LockHolder */,
	{ NULL, MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke, MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_back, MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_cleanup, NULL, NULL, &MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_0_0_0 } /* System.MarshalByRefObject */,
	{ NULL, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_back, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_cleanup, NULL, NULL, &MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_0_0_0 } /* UnityEngine.UIElements.StyleSheets.MatchResult */,
	{ NULL, MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke, MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_back, MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_cleanup, NULL, NULL, &MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_0_0_0 } /* UnityEngine.UIElements.StyleSheets.MatchResultInfo */,
	{ NULL, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_back, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_cleanup, NULL, NULL, &MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_0_0_0 } /* UnityEngine.TextCore.Text.MaterialReference */,
	{ NULL, MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_marshal_pinvoke, MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_marshal_pinvoke_back, MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_marshal_pinvoke_cleanup, NULL, NULL, &MemberRelationship_t5A48212AE16D1C0795F070FD38F817F28218CB24_0_0_0 } /* System.ComponentModel.Design.Serialization.MemberRelationship */,
	{ NULL, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_back, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_cleanup, NULL, NULL, &MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_0_0_0 } /* System.Buffers.MemoryHandle */,
	{ NULL, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke_back, MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshal_pinvoke_cleanup, NULL, NULL, &MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_0_0_0 } /* UnityEngine.XR.MeshGenerationResult */,
	{ NULL, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_back, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_cleanup, NULL, NULL, &MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_0_0_0 } /* UnityEngine.TextCore.Text.MeshInfo */,
	{ NULL, Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke, Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_back, Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_cleanup, NULL, NULL, &Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_0_0_0 } /* System.Reflection.Module */,
	{ NULL, MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke, MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_back, MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_cleanup, NULL, NULL, &MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_0_0_0 } /* System.MonoAsyncCall */,
	{ DelegatePInvokeWrapper_MonoBtlsSelectCallback_t94D7F9E6194E0CC0F6D20A02709C3991261BEFAE, NULL, NULL, NULL, NULL, NULL, &MonoBtlsSelectCallback_t94D7F9E6194E0CC0F6D20A02709C3991261BEFAE_0_0_0 } /* Mono.Btls.MonoBtlsSelectCallback */,
	{ DelegatePInvokeWrapper_MonoBtlsServerNameCallback_t157678673B6A4D619EE32B5F453ECACF3BE430EA, NULL, NULL, NULL, NULL, NULL, &MonoBtlsServerNameCallback_t157678673B6A4D619EE32B5F453ECACF3BE430EA_0_0_0 } /* Mono.Btls.MonoBtlsServerNameCallback */,
	{ NULL, MonoCQItem_t37270A4113024E114F0FED59D23E612BFF30AD9F_marshal_pinvoke, MonoCQItem_t37270A4113024E114F0FED59D23E612BFF30AD9F_marshal_pinvoke_back, MonoCQItem_t37270A4113024E114F0FED59D23E612BFF30AD9F_marshal_pinvoke_cleanup, NULL, NULL, &MonoCQItem_t37270A4113024E114F0FED59D23E612BFF30AD9F_0_0_0 } /* System.MonoCQItem */,
	{ NULL, MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke, MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_back, MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke, MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_back, MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke, MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_back, MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_0_0_0 } /* System.Runtime.Remoting.Messaging.MonoMethodMessage */,
	{ NULL, MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke, MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_back, MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke, MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_back, MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_cleanup, NULL, NULL, &MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_0_0_0 } /* System.MonoTypeInfo */,
	{ NULL, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_back, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_cleanup, NULL, NULL, &MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_0_0_0 } /* UnityEngine.Scripting.APIUpdating.MovedFromAttributeData */,
	{ NULL, MulticastDelegate_t_marshal_pinvoke, MulticastDelegate_t_marshal_pinvoke_back, MulticastDelegate_t_marshal_pinvoke_cleanup, NULL, NULL, &MulticastDelegate_t_0_0_0 } /* System.MulticastDelegate */,
	{ DelegatePInvokeWrapper_NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495, NULL, NULL, NULL, NULL, NULL, &NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495_0_0_0 } /* UnityEngineInternal.Input.NativeUpdateCallback */,
	{ NULL, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_back, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_0_0_0 } /* UnityEngine.UI.Navigation */,
	{ NULL, NumberBuffer_t6F4409C74B004A277E7FC6794097FEFF54FA6770_marshal_pinvoke, NumberBuffer_t6F4409C74B004A277E7FC6794097FEFF54FA6770_marshal_pinvoke_back, NumberBuffer_t6F4409C74B004A277E7FC6794097FEFF54FA6770_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_t6F4409C74B004A277E7FC6794097FEFF54FA6770_0_0_0 } /* System.Buffers.Text.NumberBuffer */,
	{ NULL, OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshal_pinvoke, OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshal_pinvoke_back, OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_marshal_pinvoke_cleanup, NULL, NULL, &OSPlatform_t8D6BF4B4756716D5B2694BCA813A49AE0227B9F9_0_0_0 } /* System.Runtime.InteropServices.OSPlatform */,
	{ NULL, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup, NULL, NULL, &Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0 } /* UnityEngine.Object */,
	{ DelegatePInvokeWrapper_ObjectCreationDelegate_tF1DD44628812BB360FE9AD277CAAC4944E51CFD3, NULL, NULL, NULL, NULL, NULL, &ObjectCreationDelegate_tF1DD44628812BB360FE9AD277CAAC4944E51CFD3_0_0_0 } /* System.Runtime.InteropServices.ObjectCreationDelegate */,
	{ NULL, PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke, PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_back, PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_cleanup, NULL, NULL, &PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_0_0_0 } /* UnityEngine.UIElements.PanelClearSettings */,
	{ NULL, ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734_marshal_pinvoke, ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734_marshal_pinvoke_back, ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734_marshal_pinvoke_cleanup, NULL, NULL, &ParallelLoopResult_t9C383DA248DA9082ECBF057DE0879AB99EE6A734_0_0_0 } /* System.Threading.Tasks.ParallelLoopResult */,
	{ NULL, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_back, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_cleanup, NULL, NULL, &ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_0_0_0 } /* System.Reflection.ParameterInfo */,
	{ NULL, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_back, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke, ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_back, ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_cleanup, NULL, NULL, &ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_0_0_0 } /* System.ParamsArray */,
	{ NULL, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_back, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_cleanup, NULL, NULL, &ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_0_0_0 } /* System.ParsingInfo */,
	{ NULL, NULL, NULL, NULL, NULL, &PerformanceCounterManager_t0BF17759AF043AB149940CFB1D6A1A90EE791E6F::CLSID, &PerformanceCounterManager_t0BF17759AF043AB149940CFB1D6A1A90EE791E6F_0_0_0 } /* System.Diagnostics.PerformanceCounterManager */,
	{ NULL, PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_marshal_pinvoke, PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_marshal_pinvoke_back, PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_marshal_pinvoke_cleanup, NULL, NULL, &PhotoCapture_t268971E77CE9FFE83CCCE1F07F8CFE3013A461ED_0_0_0 } /* UnityEngine.Windows.WebCam.PhotoCapture */,
	{ NULL, PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_marshal_pinvoke, PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_marshal_pinvoke_back, PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_marshal_pinvoke_cleanup, NULL, NULL, &PhraseRecognizedEventArgs_t91AA21891352136A6CA60FCF60FCA372D07B18D8_0_0_0 } /* UnityEngine.Windows.Speech.PhraseRecognizedEventArgs */,
	{ NULL, PinAndClear_t8E61D9C6434B848C29B7EE866C2027C332F77FCD_marshal_pinvoke, PinAndClear_t8E61D9C6434B848C29B7EE866C2027C332F77FCD_marshal_pinvoke_back, PinAndClear_t8E61D9C6434B848C29B7EE866C2027C332F77FCD_marshal_pinvoke_cleanup, NULL, NULL, &PinAndClear_t8E61D9C6434B848C29B7EE866C2027C332F77FCD_0_0_0 } /* Internal.Cryptography.PinAndClear */,
	{ DelegatePInvokeWrapper_PipeStreamImpersonationWorker_tE877A9D966BCB75CEDB0E30DBED75E67DBEE3F29, NULL, NULL, NULL, NULL, NULL, &PipeStreamImpersonationWorker_tE877A9D966BCB75CEDB0E30DBED75E67DBEE3F29_0_0_0 } /* System.IO.Pipes.PipeStreamImpersonationWorker */,
	{ NULL, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_back, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ NULL, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem */,
	{ NULL, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_back, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystemInternal */,
	{ NULL, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup, NULL, NULL, &PointLight_tD01A1428DC1015D98A527136034187F732433EA7_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.PointLight */,
	{ NULL, Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_marshal_pinvoke, Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_marshal_pinvoke_back, Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_marshal_pinvoke_cleanup, NULL, NULL, &Position_t700DB8FCCEBD64FCE3AA53E50CFE3088EBB17757_0_0_0 } /* System.Xml.Schema.Position */,
	{ NULL, ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke, ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke_back, ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke_cleanup, NULL, NULL, &ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_0_0_0 } /* System.Diagnostics.ProcessStartInfo */,
	{ NULL, QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178_marshal_pinvoke, QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178_marshal_pinvoke_back, QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178_marshal_pinvoke_cleanup, NULL, NULL, &QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178_0_0_0 } /* System.Linq.Parallel.QuerySettings */,
	{ NULL, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_back, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_cleanup, NULL, NULL, &RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_0_0_0 } /* System.Security.Cryptography.RSAParameters */,
	{ NULL, RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke, RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_back, RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_cleanup, NULL, NULL, &RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_0_0_0 } /* UnityEngine.UIElements.RareData */,
	{ NULL, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_back, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_0_0_0 } /* UnityEngine.EventSystems.RaycastResult */,
	{ NULL, RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke, RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_back, RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_cleanup, NULL, NULL, &RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_0_0_0 } /* System.Runtime.Remoting.Proxies.RealProxy */,
	{ NULL, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_back, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_0_0_0 } /* UnityEngine.RectOffset */,
	{ NULL, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup, NULL, NULL, &RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.RectangleLight */,
	{ NULL, ReflectionProbeBlendInfo_t9E258E27B79B396F9D1693B972157A79AFBD9200_marshal_pinvoke, ReflectionProbeBlendInfo_t9E258E27B79B396F9D1693B972157A79AFBD9200_marshal_pinvoke_back, ReflectionProbeBlendInfo_t9E258E27B79B396F9D1693B972157A79AFBD9200_marshal_pinvoke_cleanup, NULL, NULL, &ReflectionProbeBlendInfo_t9E258E27B79B396F9D1693B972157A79AFBD9200_0_0_0 } /* UnityEngine.Rendering.ReflectionProbeBlendInfo */,
	{ NULL, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_back, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_cleanup, NULL, NULL, &RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_0_0_0 } /* System.Text.RegularExpressions.RegexFCD */,
	{ NULL, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_back, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_cleanup, NULL, NULL, &RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_0_0_0 } /* System.Text.RegularExpressions.RegexPrefix */,
	{ NULL, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_back, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_cleanup, NULL, NULL, &RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_0_0_0 } /* System.Text.RegularExpressions.RegexWriter */,
	{ NULL, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_back, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_cleanup, NULL, NULL, &RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_0_0_0 } /* System.Globalization.RegionInfo */,
	{ NULL, NULL, NULL, NULL, NULL, &RegistrationServices_tADB40F4906A07C56AD5199519662509DAC8EC8A1::CLSID, &RegistrationServices_tADB40F4906A07C56AD5199519662509DAC8EC8A1_0_0_0 } /* System.Runtime.InteropServices.RegistrationServices */,
	{ NULL, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke_back, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke_cleanup, NULL, NULL, &RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_0_0_0 } /* UnityEngine.RemoteConfigSettings */,
	{ NULL, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_back, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_cleanup, NULL, NULL, &RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_0_0_0 } /* UnityEngine.UIElements.UIR.RenderChainTextEntry */,
	{ NULL, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_back, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_cleanup, NULL, NULL, &RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_0_0_0 } /* UnityEngine.UIElements.UIR.RenderChainVEData */,
	{ NULL, RenderParams_t2571537494874787A0A0B3013052A03AA0E51CFB_marshal_pinvoke, RenderParams_t2571537494874787A0A0B3013052A03AA0E51CFB_marshal_pinvoke_back, RenderParams_t2571537494874787A0A0B3013052A03AA0E51CFB_marshal_pinvoke_cleanup, NULL, NULL, &RenderParams_t2571537494874787A0A0B3013052A03AA0E51CFB_0_0_0 } /* UnityEngine.RenderParams */,
	{ NULL, RenderTargetBinding_tEC52DB3FA58D1D081E992EB6218A4B4355450CF3_marshal_pinvoke, RenderTargetBinding_tEC52DB3FA58D1D081E992EB6218A4B4355450CF3_marshal_pinvoke_back, RenderTargetBinding_tEC52DB3FA58D1D081E992EB6218A4B4355450CF3_marshal_pinvoke_cleanup, NULL, NULL, &RenderTargetBinding_tEC52DB3FA58D1D081E992EB6218A4B4355450CF3_0_0_0 } /* UnityEngine.Rendering.RenderTargetBinding */,
	{ NULL, RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_marshal_pinvoke, RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_marshal_pinvoke_back, RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_marshal_pinvoke_cleanup, NULL, NULL, &RenderTargetSetup_tD71CE5727C526D33A6784394E0F9D9E2AB8CA86F_0_0_0 } /* UnityEngine.RenderTargetSetup */,
	{ NULL, RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke, RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke_back, RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_marshal_pinvoke_cleanup, NULL, NULL, &RendererListDesc_t5C51B75B4D539F99345A077545015B8FB99FE78E_0_0_0 } /* UnityEngine.Rendering.RendererUtils.RendererListDesc */,
	{ NULL, RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke, RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke_back, RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_marshal_pinvoke_cleanup, NULL, NULL, &RendererListParams_tD7EA1A56CF9C58D8E31C464A62D1546A8B0E66DC_0_0_0 } /* UnityEngine.Rendering.RendererUtils.RendererListParams */,
	{ NULL, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_back, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_cleanup, NULL, NULL, &ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_0_0_0 } /* System.Resources.ResourceLocator */,
	{ NULL, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_back, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_back, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_cleanup, NULL, NULL, &Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_0_0_0 } /* UnityEngine.UIElements.Rotate */,
	{ NULL, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_back, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_cleanup, NULL, NULL, &RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_0_0_0 } /* UnityEngine.UIElements.RuleMatcher */,
	{ NULL, RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke, RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_back, RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_cleanup, NULL, NULL, &RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_0_0_0 } /* System.Reflection.RuntimeAssembly */,
	{ NULL, RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke, RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_back, RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_cleanup, NULL, NULL, &RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_0_0_0 } /* System.Reflection.RuntimeModule */,
	{ NULL, STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshal_pinvoke, STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshal_pinvoke_back, STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_marshal_pinvoke_cleanup, NULL, NULL, &STATDATA_t2B5067A25347A006153807EAA17839425EFAF66C_0_0_0 } /* System.Runtime.InteropServices.ComTypes.STATDATA */,
	{ NULL, STATSTG_tDEF47AD42FE2D748BDA391B2FF81E79E8ACC3C5F_marshal_pinvoke, STATSTG_tDEF47AD42FE2D748BDA391B2FF81E79E8ACC3C5F_marshal_pinvoke_back, STATSTG_tDEF47AD42FE2D748BDA391B2FF81E79E8ACC3C5F_marshal_pinvoke_cleanup, NULL, NULL, &STATSTG_tDEF47AD42FE2D748BDA391B2FF81E79E8ACC3C5F_0_0_0 } /* System.Runtime.InteropServices.STATSTG */,
	{ NULL, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke_back, STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_marshal_pinvoke_cleanup, NULL, NULL, &STATSTG_t127B1C03A3166EE385CADA145D69700CB2FE20B0_0_0_0 } /* System.Runtime.InteropServices.ComTypes.STATSTG */,
	{ NULL, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshal_pinvoke, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshal_pinvoke_back, STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_marshal_pinvoke_cleanup, NULL, NULL, &STGMEDIUM_t73DA1C6D081B8828B798D5A7FA7B129B1F6E2D3E_0_0_0 } /* System.Runtime.InteropServices.ComTypes.STGMEDIUM */,
	{ NULL, SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke, SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_back, SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_cleanup, NULL, NULL, &SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_0_0_0 } /* Mono.SafeStringMarshal */,
	{ DelegatePInvokeWrapper_SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716, NULL, NULL, NULL, NULL, NULL, &SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716_0_0_0 } /* UnityEngine.UIElements.SavePersistentViewData */,
	{ NULL, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_back, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_cleanup, NULL, NULL, &ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_0_0_0 } /* UnityEngine.UIElements.StyleSheets.ScalableImage */,
	{ NULL, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_back, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_cleanup, NULL, NULL, &Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_0_0_0 } /* UnityEngine.UIElements.Scale */,
	{ NULL, ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshal_pinvoke, ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshal_pinvoke_back, ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_0_0_0 } /* UnityEngine.Rendering.ScriptableCullingParameters */,
	{ NULL, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_back, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_marshal_pinvoke, SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_marshal_pinvoke_back, SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_marshal_pinvoke_cleanup, NULL, NULL, &SecChannelBindings_t312B26406DEA57F70E864E42218D9CDF7D089196_0_0_0 } /* System.Net.SecChannelBindings */,
	{ NULL, SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_marshal_pinvoke, SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_marshal_pinvoke_back, SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_marshal_pinvoke_cleanup, NULL, NULL, &SecPkgContext_ConnectionInfo_tCD633F36513E24DA4BDA0436E14C81972FF60688_0_0_0 } /* System.Net.SecPkgContext_ConnectionInfo */,
	{ NULL, SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_marshal_pinvoke, SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_marshal_pinvoke_back, SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_marshal_pinvoke_cleanup, NULL, NULL, &SecPkgContext_Sizes_t5E35EBB50BE8D8543F95AAB8EDC4FCB0EB0C52EF_0_0_0 } /* System.Net.SecPkgContext_Sizes */,
	{ NULL, SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_marshal_pinvoke, SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_marshal_pinvoke_back, SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_marshal_pinvoke_cleanup, NULL, NULL, &SecPkgContext_StreamSizes_t19EAFCE82EE4A1F95E03CA5425A00E5830390435_0_0_0 } /* System.Net.SecPkgContext_StreamSizes */,
	{ NULL, SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshal_pinvoke, SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshal_pinvoke_back, SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_marshal_pinvoke_cleanup, NULL, NULL, &SecondarySpriteTexture_tAB48BE37F20C61C85B24FB2E38F751082AF1A07B_0_0_0 } /* UnityEngine.SecondarySpriteTexture */,
	{ NULL, SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_marshal_pinvoke, SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_marshal_pinvoke_back, SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_marshal_pinvoke_cleanup, NULL, NULL, &SecurityStatusPal_t6B278DE9D48F48DEA8E0242EBBDAF48F3E96119F_0_0_0 } /* System.Net.SecurityStatusPal */,
	{ NULL, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_back, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_cleanup, NULL, NULL, &SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_0_0_0 } /* UnityEngine.UIElements.StyleSheets.SelectorMatchRecord */,
	{ NULL, SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshal_pinvoke, SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshal_pinvoke_back, SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_marshal_pinvoke_cleanup, NULL, NULL, &SemanticMeaning_tB410A3D7306E8060875DDEFE041CC7FDDEEE6335_0_0_0 } /* UnityEngine.Windows.Speech.SemanticMeaning */,
	{ NULL, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_pinvoke, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_pinvoke_back, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_pinvoke_cleanup, NULL, NULL, &SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_0_0_0 } /* System.SequencePosition */,
	{ NULL, SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke, SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_back, SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ DelegatePInvokeWrapper_SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F, NULL, NULL, NULL, NULL, NULL, &SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F_0_0_0 } /* System.Runtime.Serialization.SerializationEventHandler */,
	{ NULL, ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke, ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke_back, ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_marshal_pinvoke_cleanup, NULL, NULL, &ShaderKeyword_t683126BB2B2337DB41954B0FE0DA7EBAA7028661_0_0_0 } /* UnityEngine.Rendering.ShaderKeyword */,
	{ NULL, ShaderWarmupSetup_tDD44C1E2B2AE13E672A630B3ED1D1BC5BD2187AE_marshal_pinvoke, ShaderWarmupSetup_tDD44C1E2B2AE13E672A630B3ED1D1BC5BD2187AE_marshal_pinvoke_back, ShaderWarmupSetup_tDD44C1E2B2AE13E672A630B3ED1D1BC5BD2187AE_marshal_pinvoke_cleanup, NULL, NULL, &ShaderWarmupSetup_tDD44C1E2B2AE13E672A630B3ED1D1BC5BD2187AE_0_0_0 } /* UnityEngine.Experimental.Rendering.ShaderWarmupSetup */,
	{ NULL, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ NULL, SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshal_pinvoke, SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshal_pinvoke_back, SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_marshal_pinvoke_cleanup, NULL, NULL, &SliderHandler_tA79D905C9C3D505A2257D02EC54396A74F83AA83_0_0_0 } /* UnityEngine.SliderHandler */,
	{ NULL, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_back, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_cleanup, NULL, NULL, &SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_0_0_0 } /* System.Net.Sockets.SocketAsyncResult */,
	{ NULL, SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_marshal_pinvoke, SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_marshal_pinvoke_back, SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_marshal_pinvoke_cleanup, NULL, NULL, &SocketInformation_t9DB498C167BB8ACF9C751042E7174F6B2B96C7EC_0_0_0 } /* System.Net.Sockets.SocketInformation */,
	{ NULL, SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_marshal_pinvoke, SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_marshal_pinvoke_back, SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_marshal_pinvoke_cleanup, NULL, NULL, &SocketReceiveFromResult_t53649672B974DA5C4009A226A234C9F73EF0414B_0_0_0 } /* System.Net.Sockets.SocketReceiveFromResult */,
	{ NULL, SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_marshal_pinvoke, SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_marshal_pinvoke_back, SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_marshal_pinvoke_cleanup, NULL, NULL, &SocketReceiveMessageFromResult_tF9F2E089A06BD89F011D96B685BEDAC7E897BF89_0_0_0 } /* System.Net.Sockets.SocketReceiveMessageFromResult */,
	{ NULL, SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke, SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_back, SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_cleanup, NULL, NULL, &SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_0_0_0 } /* System.Globalization.SortKey */,
	{ NULL, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup, NULL, NULL, &SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.SpotLight */,
	{ NULL, SpotLightBoxShape_tB49C7A4CBC4670936EB8C87C9B2DC2B77793D02B_marshal_pinvoke, SpotLightBoxShape_tB49C7A4CBC4670936EB8C87C9B2DC2B77793D02B_marshal_pinvoke_back, SpotLightBoxShape_tB49C7A4CBC4670936EB8C87C9B2DC2B77793D02B_marshal_pinvoke_cleanup, NULL, NULL, &SpotLightBoxShape_tB49C7A4CBC4670936EB8C87C9B2DC2B77793D02B_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.SpotLightBoxShape */,
	{ NULL, SpotLightPyramidShape_tDEF8E6C97D8AC9E53082C2480AF8962EB3E54826_marshal_pinvoke, SpotLightPyramidShape_tDEF8E6C97D8AC9E53082C2480AF8962EB3E54826_marshal_pinvoke_back, SpotLightPyramidShape_tDEF8E6C97D8AC9E53082C2480AF8962EB3E54826_marshal_pinvoke_cleanup, NULL, NULL, &SpotLightPyramidShape_tDEF8E6C97D8AC9E53082C2480AF8962EB3E54826_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.SpotLightPyramidShape */,
	{ NULL, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_back, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_cleanup, NULL, NULL, &SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_0_0_0 } /* UnityEngine.U2D.SpriteBone */,
	{ NULL, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_back, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_cleanup, NULL, NULL, &SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_0_0_0 } /* UnityEngine.Experimental.U2D.SpriteRendererGroup */,
	{ NULL, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_back, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_0_0_0 } /* UnityEngine.UI.SpriteState */,
	{ NULL, SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_marshal_pinvoke, SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_marshal_pinvoke_back, SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_marshal_pinvoke_cleanup, NULL, NULL, &SslApplicationProtocol_tB40F12F1093EE37CAE5E107A0D0F709B2F689700_0_0_0 } /* System.Net.Security.SslApplicationProtocol */,
	{ NULL, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_back, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_cleanup, NULL, NULL, &StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_0_0_0 } /* System.Diagnostics.StackFrame */,
	{ NULL, State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke, State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_back, State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_cleanup, NULL, NULL, &State_tC241510131965D8DE1919EB16A3650E397E5AEAB_0_0_0 } /* UnityEngine.UIElements.UIR.State */,
	{ NULL, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_back, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_back, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_cleanup, NULL, NULL, &StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_0_0_0 } /* UnityEngine.UIElements.StyleCursor */,
	{ NULL, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_back, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_cleanup, NULL, NULL, &StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_0_0_0 } /* UnityEngine.UIElements.StylePropertyName */,
	{ NULL, StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke, StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_back, StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_cleanup, NULL, NULL, &StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_0_0_0 } /* UnityEngine.UIElements.StylePropertyNameCollection */,
	{ NULL, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_back, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_cleanup, NULL, NULL, &StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_0_0_0 } /* UnityEngine.UIElements.StyleSheets.StylePropertyValue */,
	{ NULL, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_back, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_cleanup, NULL, NULL, &StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_0_0_0 } /* UnityEngine.UIElements.StyleRotate */,
	{ NULL, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_back, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_cleanup, NULL, NULL, &StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_0_0_0 } /* UnityEngine.UIElements.StyleScale */,
	{ NULL, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_back, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_cleanup, NULL, NULL, &StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_0_0_0 } /* UnityEngine.UIElements.StyleSelectorPart */,
	{ NULL, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_back, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_cleanup, NULL, NULL, &StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_0_0_0 } /* UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken */,
	{ NULL, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_back, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_cleanup, NULL, NULL, &StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_0_0_0 } /* UnityEngine.UIElements.StyleTranslate */,
	{ NULL, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_back, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_cleanup, NULL, NULL, &StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_0_0_0 } /* UnityEngine.UIElements.StyleSheets.StyleValueManaged */,
	{ NULL, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_back, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_cleanup, NULL, NULL, &StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_0_0_0 } /* UnityEngine.UIElements.Experimental.StyleValues */,
	{ NULL, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_back, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_cleanup, NULL, NULL, &StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_0_0_0 } /* UnityEngine.UIElements.StyleVariable */,
	{ NULL, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_back, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_cleanup, NULL, NULL, &TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_0_0_0 } /* System.Runtime.CompilerServices.TaskAwaiter */,
	{ NULL, TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke, TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke_back, TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke_cleanup, NULL, NULL, &TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_0_0_0 } /* UnityEngine.UIElements.TextCoreHandle */,
	{ NULL, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_back, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_cleanup, NULL, NULL, &TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_0_0_0 } /* UnityEngine.TextCore.Text.TextElementInfo */,
	{ NULL, TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke, TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_back, TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_0_0_0 } /* UnityEngine.TextGenerationSettings */,
	{ NULL, TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke, TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_back, TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_0_0_0 } /* UnityEngine.TextGenerator */,
	{ NULL, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_back, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_cleanup, NULL, NULL, &TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_0_0_0 } /* UnityEngine.UIElements.TextNativeSettings */,
	{ NULL, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_back, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_cleanup, NULL, NULL, &TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_0_0_0 } /* UnityEngine.UIElements.UIR.TextureEntry */,
	{ NULL, ThreadPoolCallbackWrapper_tE59FED14D500FCC507E2E3E273A701A80CEB4917_marshal_pinvoke, ThreadPoolCallbackWrapper_tE59FED14D500FCC507E2E3E273A701A80CEB4917_marshal_pinvoke_back, ThreadPoolCallbackWrapper_tE59FED14D500FCC507E2E3E273A701A80CEB4917_marshal_pinvoke_cleanup, NULL, NULL, &ThreadPoolCallbackWrapper_tE59FED14D500FCC507E2E3E273A701A80CEB4917_0_0_0 } /* System.Threading.ThreadPoolCallbackWrapper */,
	{ DelegatePInvokeWrapper_ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2, NULL, NULL, NULL, NULL, NULL, &ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_back, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_cleanup, NULL, NULL, &TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_0_0_0 } /* UnityEngine.Tilemaps.TileAnimationData */,
	{ DelegatePInvokeWrapper_TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B, NULL, NULL, NULL, NULL, NULL, &TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B_0_0_0 } /* UnityEngine.UIElements.TimeMsFunction */,
	{ NULL, TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke, TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_back, TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_0_0_0 } /* UnityEngine.TrackedReference */,
	{ NULL, TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke, TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_back, TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_cleanup, NULL, NULL, &TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_0_0_0 } /* UnityEngine.UIElements.TransformData */,
	{ NULL, TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke, TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_back, TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_cleanup, NULL, NULL, &TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_0_0_0 } /* UnityEngine.UIElements.TransitionData */,
	{ NULL, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_back, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_cleanup, NULL, NULL, &Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_0_0_0 } /* UnityEngine.UIElements.Translate */,
	{ NULL, TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke, TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_back, TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_cleanup, NULL, NULL, &TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_0_0_0 } /* System.Runtime.Remoting.Proxies.TransparentProxy */,
	{ NULL, NULL, NULL, NULL, NULL, &TypeLibConverter_t8F69A7316AC99DA4B93CF4886E17363EBA2F71BF::CLSID, &TypeLibConverter_t8F69A7316AC99DA4B93CF4886E17363EBA2F71BF_0_0_0 } /* System.Runtime.InteropServices.TypeLibConverter */,
	{ NULL, UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke, UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_back, UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_cleanup, NULL, NULL, &UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_0_0_0 } /* UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator */,
	{ NULL, UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_marshal_pinvoke, UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_marshal_pinvoke_back, UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_marshal_pinvoke_cleanup, NULL, NULL, &UdpReceiveResult_t9B04AABD71B2DAE00002C0063D6532227A9E243E_0_0_0 } /* System.Net.Sockets.UdpReceiveResult */,
	{ NULL, UnSafeCharBuffer_tC64AFEB2576DF69CB671B61471614366C4BF6080_marshal_pinvoke, UnSafeCharBuffer_tC64AFEB2576DF69CB671B61471614366C4BF6080_marshal_pinvoke_back, UnSafeCharBuffer_tC64AFEB2576DF69CB671B61471614366C4BF6080_marshal_pinvoke_cleanup, NULL, NULL, &UnSafeCharBuffer_tC64AFEB2576DF69CB671B61471614366C4BF6080_0_0_0 } /* System.UnSafeCharBuffer */,
	{ DelegatePInvokeWrapper_UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7, NULL, NULL, NULL, NULL, NULL, &UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_back, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0 } /* UnityEngine.Networking.UnityWebRequest */,
	{ NULL, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_back, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_0_0_0 } /* UnityEngine.Networking.UnityWebRequestAsyncOperation */,
	{ DelegatePInvokeWrapper_UnlockConnectionDelegate_t453247A451D867BEFEDC7B88ABF6A0638CB5791E, NULL, NULL, NULL, NULL, NULL, &UnlockConnectionDelegate_t453247A451D867BEFEDC7B88ABF6A0638CB5791E_0_0_0 } /* System.Net.UnlockConnectionDelegate */,
	{ NULL, UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke, UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_back, UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_cleanup, NULL, NULL, &UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_0_0_0 } /* System.Reflection.Emit.UnmanagedMarshal */,
	{ NULL, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_0_0_0 } /* UnityEngine.Networking.UploadHandler */,
	{ DelegatePInvokeWrapper_UserCallBack_t81E6755DCACDEAF4FD737113D39268AA52B3DD94, NULL, NULL, NULL, NULL, NULL, &UserCallBack_t81E6755DCACDEAF4FD737113D39268AA52B3DD94_0_0_0 } /* System.Diagnostics.UserCallBack */,
	{ NULL, VARDESC_t76C21F0C161C3203974BA196F8D39BE9BB739E60_marshal_pinvoke, VARDESC_t76C21F0C161C3203974BA196F8D39BE9BB739E60_marshal_pinvoke_back, VARDESC_t76C21F0C161C3203974BA196F8D39BE9BB739E60_marshal_pinvoke_cleanup, NULL, NULL, &VARDESC_t76C21F0C161C3203974BA196F8D39BE9BB739E60_0_0_0 } /* System.Runtime.InteropServices.VARDESC */,
	{ NULL, VARDESC_tC5592BB06BBF322EC903D45A32080E1AD00A7F95_marshal_pinvoke, VARDESC_tC5592BB06BBF322EC903D45A32080E1AD00A7F95_marshal_pinvoke_back, VARDESC_tC5592BB06BBF322EC903D45A32080E1AD00A7F95_marshal_pinvoke_cleanup, NULL, NULL, &VARDESC_tC5592BB06BBF322EC903D45A32080E1AD00A7F95_0_0_0 } /* System.Runtime.InteropServices.ComTypes.VARDESC */,
	{ NULL, VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshal_pinvoke, VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshal_pinvoke_back, VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_marshal_pinvoke_cleanup, NULL, NULL, &VFXEventAttribute_tA764A595356174BA39C782A8A64B47B39FB3F518_0_0_0 } /* UnityEngine.VFX.VFXEventAttribute */,
	{ NULL, VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_marshal_pinvoke, VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_marshal_pinvoke_back, VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_marshal_pinvoke_cleanup, NULL, NULL, &VFXExpressionValues_t361C45D33F7B5E9D85F8185EF47AA9ACF43063F5_0_0_0 } /* UnityEngine.VFX.VFXExpressionValues */,
	{ NULL, VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_marshal_pinvoke, VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_marshal_pinvoke_back, VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_marshal_pinvoke_cleanup, NULL, NULL, &VFXOutputEventArgs_tA170E0868F4EFA82F5AF0835B297C4AF9E571A40_0_0_0 } /* UnityEngine.VFX.VFXOutputEventArgs */,
	{ NULL, VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshal_pinvoke, VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshal_pinvoke_back, VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_marshal_pinvoke_cleanup, NULL, NULL, &VFXSpawnerState_tCAF49FEA2C8BB3E0BB1E9C3C3F2649576CB64281_0_0_0 } /* UnityEngine.VFX.VFXSpawnerState */,
	{ NULL, ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke, ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_back, ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_marshal_pinvoke_cleanup, NULL, NULL, &ValueStringBuilder_tEBD54C46E3AF8527BD0D234124F5C1AC14E9E251_0_0_0 } /* System.Text.ValueStringBuilder */,
	{ NULL, ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke, ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_back, ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_cleanup, NULL, NULL, &ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_0_0_0 } /* System.Text.ValueStringBuilder */,
	{ NULL, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_back, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_cleanup, NULL, NULL, &ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_0_0_0 } /* System.Runtime.CompilerServices.ValueTaskAwaiter */,
	{ NULL, ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke, ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_back, ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0 } /* System.ValueType */,
	{ NULL, ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke, ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke_back, ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke_cleanup, NULL, NULL, &ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_0_0_0 } /* System.Text.ValueUtf8Converter */,
	{ NULL, VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshal_pinvoke, VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshal_pinvoke_back, VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_marshal_pinvoke_cleanup, NULL, NULL, &VideoCapture_t4FC0DEDE3146D8313C7CD8B8B9D8EFB868CACD7B_0_0_0 } /* UnityEngine.Windows.WebCam.VideoCapture */,
	{ NULL, VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke, VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_back, VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_cleanup, NULL, NULL, &VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_0_0_0 } /* UnityEngine.UIElements.VisualData */,
	{ NULL, VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke, VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_back, VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_cleanup, NULL, NULL, &VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_0_0_0 } /* UnityEngine.UIElements.VisualElementStyleSheetSet */,
	{ NULL, WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshal_pinvoke, WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshal_pinvoke_back, WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_marshal_pinvoke_cleanup, NULL, NULL, &WaitForChangedResult_t50441171847AF2F3C59CCBFDDB903331F2B18AF2_0_0_0 } /* System.IO.WaitForChangedResult */,
	{ NULL, WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke, WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_back, WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke, WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_back, WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_cleanup, NULL, NULL, &WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_0_0_0 } /* System.Threading.WaitHandle */,
	{ NULL, Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_marshal_pinvoke, Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_marshal_pinvoke_back, Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_marshal_pinvoke_cleanup, NULL, NULL, &Win32_FIXED_INFO_t9D99BDFAAAAC166F7EDAFA26BF309D322F817C5F_0_0_0 } /* System.Net.NetworkInformation.Win32_FIXED_INFO */,
	{ NULL, Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_marshal_pinvoke, Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_marshal_pinvoke_back, Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_ADAPTER_ADDRESSES_t284DFDE6A9909878EC47F01B9A405572EDD09EEE_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES */,
	{ NULL, Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_marshal_pinvoke, Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_marshal_pinvoke_back, Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_ADAPTER_INFO_tB0665C5F6FF46171B39F6B4C164B3013E4065F12_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO */,
	{ NULL, Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_marshal_pinvoke, Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_marshal_pinvoke_back, Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_ADDR_STRING_tB0FA66A644EFD59AFE80E7F55060CC566FF7BEC7_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_ADDR_STRING */,
	{ NULL, Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_marshal_pinvoke, Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_marshal_pinvoke_back, Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IP_PER_ADAPTER_INFO_tA89C4AB997D7CEA885C123A55BEA9F08A186DDE8_0_0_0 } /* System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO */,
	{ NULL, Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_marshal_pinvoke, Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_marshal_pinvoke_back, Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIBICMPSTATS_EX_tDC7D2C7BEC795741A78767683EEFB00960E044D9_0_0_0 } /* System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX */,
	{ NULL, Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_marshal_pinvoke, Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_marshal_pinvoke_back, Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_ICMP_EX_tB24EC96751FAB541B2AAB0F5DFD636FD778E95F0_0_0_0 } /* System.Net.NetworkInformation.Win32_MIB_ICMP_EX */,
	{ NULL, Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_marshal_pinvoke, Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_marshal_pinvoke_back, Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_IFROW_t179E4C942DE065152990382E5BFD758E6C19ED60_0_0_0 } /* System.Net.NetworkInformation.Win32_MIB_IFROW */,
	{ NULL, Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_marshal_pinvoke, Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_marshal_pinvoke_back, Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_marshal_pinvoke_cleanup, NULL, NULL, &Win32_SOCKADDR_t8FFB71AF192B29914F457E80291909E4CCCCC78E_0_0_0 } /* System.Net.NetworkInformation.Win32_SOCKADDR */,
	{ NULL, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_back, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_cleanup, NULL, NULL, &WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_0_0_0 } /* UnityEngine.TextCore.Text.WordWrapState */,
	{ NULL, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_back, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_cleanup, NULL, NULL, &X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_0_0_0 } /* System.Security.Cryptography.X509Certificates.X509ChainStatus */,
	{ NULL, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke_back, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke_cleanup, NULL, NULL, &XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_0_0_0 } /* MS.Internal.Xml.Cache.XPathNode */,
	{ NULL, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke_back, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke_cleanup, NULL, NULL, &XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_0_0_0 } /* MS.Internal.Xml.Cache.XPathNodeRef */,
	{ NULL, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_back, XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshal_pinvoke_cleanup, NULL, NULL, &XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_0_0_0 } /* System.Xml.XmlCharType */,
	{ NULL, XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke, XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke_back, XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke_cleanup, NULL, NULL, &XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_0_0_0 } /* System.Xml.Schema.XsdDateTime */,
	{ NULL, YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke, YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_back, YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ NULL, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_back, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_cleanup, NULL, NULL, &__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_0_0_0 } /* System.__DTString */,
	{ NULL, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_back, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_cleanup, NULL, NULL, &jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_0_0_0 } /* UnityEngine.jvalue */,
	{ NULL, Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke, Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_back, Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_cleanup, NULL, NULL, &Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_0_0_0 } /* UnityEngine.UIElements.UIR.Allocator2D/Alloc2D */,
	{ DelegatePInvokeWrapper_IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395, NULL, NULL, NULL, NULL, NULL, &IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged */,
	{ DelegatePInvokeWrapper_SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C, NULL, NULL, NULL, NULL, NULL, &SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C_0_0_0 } /* UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged */,
	{ DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5, NULL, NULL, NULL, NULL, NULL, &OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5_0_0_0 } /* UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback */,
	{ DelegatePInvokeWrapper_AdvertisingIdentifierCallback_t67404493BC40D4B8AFD6CBA48475774EE1D5FD82, NULL, NULL, NULL, NULL, NULL, &AdvertisingIdentifierCallback_t67404493BC40D4B8AFD6CBA48475774EE1D5FD82_0_0_0 } /* UnityEngine.Application/AdvertisingIdentifierCallback */,
	{ DelegatePInvokeWrapper_LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413, NULL, NULL, NULL, NULL, NULL, &LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke, RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_back, RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_cleanup, NULL, NULL, &RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_0_0_0 } /* System.Array/RawData */,
	{ NULL, SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke, SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_back, SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_cleanup, NULL, NULL, &SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_0_0_0 } /* System.Array/SorterGenericArray */,
	{ NULL, SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke, SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_back, SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_cleanup, NULL, NULL, &SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_0_0_0 } /* System.Array/SorterObjectArray */,
	{ NULL, AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke, AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke_back, AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshal_pinvoke_cleanup, NULL, NULL, &AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_0_0_0 } /* System.ComponentModel.AttributeCollection/AttributeEntry */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ NULL, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_back, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_0_0_0 } /* UnityEngine.BeforeRenderHelper/OrderBlock */,
	{ DelegatePInvokeWrapper_EventQueueCallback_t67E3577952E782ABDD046F3F003801D5205B9BF9, NULL, NULL, NULL, NULL, NULL, &EventQueueCallback_t67E3577952E782ABDD046F3F003801D5205B9BF9_0_0_0 } /* Unity.Baselib.LowLevel.Binding/EventQueueCallback */,
	{ DelegatePInvokeWrapper_CFProxyAutoConfigurationResultCallback_t9CEAA50E7E7B78CE76F69C81ED662783D4FE0C8A, NULL, NULL, NULL, NULL, NULL, &CFProxyAutoConfigurationResultCallback_t9CEAA50E7E7B78CE76F69C81ED662783D4FE0C8A_0_0_0 } /* Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback */,
	{ NULL, RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke, RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke_back, RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke_cleanup, NULL, NULL, &RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_0_0_0 } /* UnityEngine.Camera/RenderRequest */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ NULL, AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke, AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke_back, AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshal_pinvoke_cleanup, NULL, NULL, &AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_0_0_0 } /* Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier */,
	{ NULL, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_back, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter */,
	{ NULL, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke_back, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshal_pinvoke_cleanup, NULL, NULL, &RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_0_0_0 } /* System.Net.CookieTokenizer/RecognizedAttribute */,
	{ NULL, ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke, ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_back, ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_cleanup, NULL, NULL, &ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_0_0_0 } /* System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes */,
	{ DelegatePInvokeWrapper_StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F, NULL, NULL, NULL, NULL, NULL, &StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ NULL, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_back, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_cleanup, NULL, NULL, &Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_0_0_0 } /* System.Globalization.CultureInfo/Data */,
	{ DelegatePInvokeWrapper_OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A, NULL, NULL, NULL, NULL, NULL, &OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A_0_0_0 } /* System.Globalization.CultureInfo/OnCultureInfoChangedDelegate */,
	{ NULL, Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke, Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_back, Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t959FACC867970114DBF8DC7D4C649240E819940E_0_0_0 } /* UnityEngine.UI.DefaultControls/Resources */,
	{ DelegatePInvokeWrapper_ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6, NULL, NULL, NULL, NULL, NULL, &ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_0_0_0 } /* System.IO.Compression.DeflateStream/ReadMethod */,
	{ DelegatePInvokeWrapper_WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9, NULL, NULL, NULL, NULL, NULL, &WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_0_0_0 } /* System.IO.Compression.DeflateStream/WriteMethod */,
	{ DelegatePInvokeWrapper_UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA, NULL, NULL, NULL, NULL, NULL, &UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_0_0_0 } /* System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite */,
	{ DelegatePInvokeWrapper_DictationCompletedDelegate_t83D7F1A9EC8225F6C405F0936EEEA031F75E93C7, NULL, NULL, NULL, NULL, NULL, &DictationCompletedDelegate_t83D7F1A9EC8225F6C405F0936EEEA031F75E93C7_0_0_0 } /* UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate */,
	{ DelegatePInvokeWrapper_DictationErrorHandler_t3B40C491B80EBCEC860A8ABF490B6A13B129AC6D, NULL, NULL, NULL, NULL, NULL, &DictationErrorHandler_t3B40C491B80EBCEC860A8ABF490B6A13B129AC6D_0_0_0 } /* UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler */,
	{ DelegatePInvokeWrapper_DictationHypothesisDelegate_t062C7AA1EAEA39F02173D9C05D809EAB1DDBB77A, NULL, NULL, NULL, NULL, NULL, &DictationHypothesisDelegate_t062C7AA1EAEA39F02173D9C05D809EAB1DDBB77A_0_0_0 } /* UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate */,
	{ DelegatePInvokeWrapper_DictationResultDelegate_t09DC18A221E33F1C0E26AB3363F4004240FBCFC6, NULL, NULL, NULL, NULL, NULL, &DictationResultDelegate_t09DC18A221E33F1C0E26AB3363F4004240FBCFC6_0_0_0 } /* UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ NULL, EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke, EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_back, EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_cleanup, NULL, NULL, &EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_0_0_0 } /* System.Enum/EnumResult */,
	{ NULL, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_back, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_cleanup, NULL, NULL, &DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_0_0_0 } /* UnityEngine.UIElements.EventDispatcher/DispatchContext */,
	{ NULL, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_back, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_cleanup, NULL, NULL, &EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_0_0_0 } /* UnityEngine.UIElements.EventDispatcher/EventRecord */,
	{ NULL, UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke, UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_back, UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_cleanup, NULL, NULL, &UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_0_0_0 } /* UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig */,
	{ NULL, Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke, Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_back, Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_cleanup, NULL, NULL, &Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_0_0_0 } /* System.Threading.ExecutionContext/Reader */,
	{ DelegatePInvokeWrapper_ConfirmOverwriteDelegate_t5F409D8A8AF147302947B4BDBB560299FB58FD81, NULL, NULL, NULL, NULL, NULL, &ConfirmOverwriteDelegate_t5F409D8A8AF147302947B4BDBB560299FB58FD81_0_0_0 } /* ICSharpCode.SharpZipLib.Zip.FastZip/ConfirmOverwriteDelegate */,
	{ DelegatePInvokeWrapper_ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ NULL, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_back, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_cleanup, NULL, NULL, &FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_0_0_0 } /* UnityEngine.UIElements.FocusController/FocusedElement */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ DelegatePInvokeWrapper_WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550, NULL, NULL, NULL, NULL, NULL, &WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ NULL, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_back, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_cleanup, NULL, NULL, &ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_0_0_0 } /* UnityEngine.GUIClip/ParentClipScope */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke, RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_back, RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_cleanup, NULL, NULL, &RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_0_0_0 } /* UnityEngine.UIElements.UIR.GradientSettingsAtlas/RawTexture */,
	{ NULL, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_back, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_cleanup, NULL, NULL, &GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_0_0_0 } /* System.Guid/GuidResult */,
	{ NULL, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_back, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_cleanup, NULL, NULL, &bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_0_0_0 } /* System.Collections.Hashtable/bucket */,
	{ NULL, AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke, AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke_back, AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_marshal_pinvoke_cleanup, NULL, NULL, &AuthorizationState_t79311A9A938E608B506F10F92C0789E46C8FCA32_0_0_0 } /* System.Net.HttpWebRequest/AuthorizationState */,
	{ NULL, GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke, GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_back, GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_cleanup, NULL, NULL, &GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_0_0_0 } /* UnityEngine.UIElements.IMGUIContainer/GUIGlobals */,
	{ NULL, Reader_t045934C2968417E35ACF7B30F8A3CE6D116C5D46_marshal_pinvoke, Reader_t045934C2968417E35ACF7B30F8A3CE6D116C5D46_marshal_pinvoke_back, Reader_t045934C2968417E35ACF7B30F8A3CE6D116C5D46_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t045934C2968417E35ACF7B30F8A3CE6D116C5D46_0_0_0 } /* System.Runtime.Remoting.Messaging.IllogicalCallContext/Reader */,
	{ NULL, InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke, InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_back, InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_cleanup, NULL, NULL, &InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_0_0_0 } /* UnityEngine.UIElements.InlineStyleAccess/InlineRule */,
	{ DelegatePInvokeWrapper_OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_0_0_0 } /* UnityEngine.UI.InputField/OnValidateInput */,
	{ NULL, TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke, TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke_back, TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke_cleanup, NULL, NULL, &TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_0_0_0 } /* UnityEngine.UIElements.InternalTreeView/TreeViewItemWrapper */,
	{ NULL, SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_marshal_pinvoke, SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_marshal_pinvoke_back, SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_marshal_pinvoke_cleanup, NULL, NULL, &SecPkgContext_ApplicationProtocol_t2AC94D86A46680A23E028DEC0F09B3C86B5BCCBD_0_0_0 } /* Interop/SecPkgContext_ApplicationProtocol */,
	{ DelegatePInvokeWrapper_NativeIoCompletionCallback_tB3AA140221D0C397F8160CEC1A057E0C34468F24, NULL, NULL, NULL, NULL, NULL, &NativeIoCompletionCallback_tB3AA140221D0C397F8160CEC1A057E0C34468F24_0_0_0 } /* Interop/NativeIoCompletionCallback */,
	{ DelegatePInvokeWrapper_PanicFunction__t9B5243C52C7988A1D3B5A297CF2D7B4C63CF0E02, NULL, NULL, NULL, NULL, NULL, &PanicFunction__t9B5243C52C7988A1D3B5A297CF2D7B4C63CF0E02_0_0_0 } /* Unity.Jobs.LowLevel.Unsafe.JobsUtility/PanicFunction_ */,
	{ NULL, DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke, DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_back, DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_cleanup, NULL, NULL, &DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_0_0_0 } /* UnityEngine.UIElements.ListViewDragger/DragPosition */,
	{ NULL, Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke, Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_back, Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_0_0_0 } /* System.Runtime.Remoting.Messaging.LogicalCallContext/Reader */,
	{ NULL, NodeSet_t4E58B231194EA433FFFB271A7FA4FF83CA4C965D_marshal_pinvoke, NodeSet_t4E58B231194EA433FFFB271A7FA4FF83CA4C965D_marshal_pinvoke_back, NodeSet_t4E58B231194EA433FFFB271A7FA4FF83CA4C965D_marshal_pinvoke_cleanup, NULL, NULL, &NodeSet_t4E58B231194EA433FFFB271A7FA4FF83CA4C965D_0_0_0 } /* MS.Internal.Xml.XPath.LogicalExpr/NodeSet */,
	{ DelegatePInvokeWrapper_SCNetworkReachabilityCallback_tB2999B8E8D3F9B2AE93423DFFE710122C60E6F28, NULL, NULL, NULL, NULL, NULL, &SCNetworkReachabilityCallback_tB2999B8E8D3F9B2AE93423DFFE710122C60E6F28_0_0_0 } /* System.Net.NetworkInformation.MacNetworkChange/SCNetworkReachabilityCallback */,
	{ NULL, HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_marshal_pinvoke, HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_marshal_pinvoke_back, HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_marshal_pinvoke_cleanup, NULL, NULL, &HeaderInfo_tC25416261914F4C3B4F2C1F4A5B5254C9F7FA918_0_0_0 } /* System.Net.Mail.MailHeaderInfo/HeaderInfo */,
	{ DelegatePInvokeWrapper_SecureStringAllocator_t261B9D6083129A0996138F50A608D9F5E4C6DC44, NULL, NULL, NULL, NULL, NULL, &SecureStringAllocator_t261B9D6083129A0996138F50A608D9F5E4C6DC44_0_0_0 } /* System.Runtime.InteropServices.Marshal/SecureStringAllocator */,
	{ NULL, RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_marshal_pinvoke, RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_marshal_pinvoke_back, RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_marshal_pinvoke_cleanup, NULL, NULL, &RelationshipEntry_tCF2A840F44B0C6DAFA86300F8E9006222AE9A5B9_0_0_0 } /* System.ComponentModel.Design.Serialization.MemberRelationshipService/RelationshipEntry */,
	{ NULL, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_back, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_cleanup, NULL, NULL, &AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_0_0_0 } /* UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData */,
	{ NULL, BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke, BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_back, BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_cleanup, NULL, NULL, &BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_0_0_0 } /* UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams */,
	{ NULL, RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke, RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_back, RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_cleanup, NULL, NULL, &RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_0_0_0 } /* UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams */,
	{ NULL, TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke, TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke_back, TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke_cleanup, NULL, NULL, &TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_0_0_0 } /* UnityEngine.UIElements.MeshGenerationContextUtils/TextParams */,
	{ NULL, MeshContainer_t00B6579DBECD76BF4B51C01B6A1D1DD4ED9C1283_marshal_pinvoke, MeshContainer_t00B6579DBECD76BF4B51C01B6A1D1DD4ED9C1283_marshal_pinvoke_back, MeshContainer_t00B6579DBECD76BF4B51C01B6A1D1DD4ED9C1283_marshal_pinvoke_cleanup, NULL, NULL, &MeshContainer_t00B6579DBECD76BF4B51C01B6A1D1DD4ED9C1283_0_0_0 } /* UnityEngine.MeshSubsetCombineUtility/MeshContainer */,
	{ DelegatePInvokeWrapper_BioControlFunc_tA25CF03804268D67A2A2298BA7CF0304908E1164, NULL, NULL, NULL, NULL, NULL, &BioControlFunc_tA25CF03804268D67A2A2298BA7CF0304908E1164_0_0_0 } /* Mono.Btls.MonoBtlsBioMono/BioControlFunc */,
	{ DelegatePInvokeWrapper_BioReadFunc_t13D991FB24C42BE3A5866565A417A46DAFCE2182, NULL, NULL, NULL, NULL, NULL, &BioReadFunc_t13D991FB24C42BE3A5866565A417A46DAFCE2182_0_0_0 } /* Mono.Btls.MonoBtlsBioMono/BioReadFunc */,
	{ DelegatePInvokeWrapper_BioWriteFunc_t7F203B8BD307C07BC5C115240617DC2098776716, NULL, NULL, NULL, NULL, NULL, &BioWriteFunc_t7F203B8BD307C07BC5C115240617DC2098776716_0_0_0 } /* Mono.Btls.MonoBtlsBioMono/BioWriteFunc */,
	{ DelegatePInvokeWrapper_PrintErrorsCallbackFunc_t269F5AA2AEDE407790495E35615D581F8E57DAF1, NULL, NULL, NULL, NULL, NULL, &PrintErrorsCallbackFunc_t269F5AA2AEDE407790495E35615D581F8E57DAF1_0_0_0 } /* Mono.Btls.MonoBtlsSsl/PrintErrorsCallbackFunc */,
	{ DelegatePInvokeWrapper_NativeSelectFunc_tB8204D9DD01EEA6E46BA2FDD005653A259AD8FCA, NULL, NULL, NULL, NULL, NULL, &NativeSelectFunc_tB8204D9DD01EEA6E46BA2FDD005653A259AD8FCA_0_0_0 } /* Mono.Btls.MonoBtlsSslCtx/NativeSelectFunc */,
	{ DelegatePInvokeWrapper_NativeServerNameFunc_tD685BC5D92B7FF9953F0BEB205BCF1BF9A2211FA, NULL, NULL, NULL, NULL, NULL, &NativeServerNameFunc_tD685BC5D92B7FF9953F0BEB205BCF1BF9A2211FA_0_0_0 } /* Mono.Btls.MonoBtlsSslCtx/NativeServerNameFunc */,
	{ DelegatePInvokeWrapper_NativeVerifyFunc_t90E561336E71A9644B88DCC9CDD6A63CE98667E7, NULL, NULL, NULL, NULL, NULL, &NativeVerifyFunc_t90E561336E71A9644B88DCC9CDD6A63CE98667E7_0_0_0 } /* Mono.Btls.MonoBtlsSslCtx/NativeVerifyFunc */,
	{ DelegatePInvokeWrapper_BySubjectFunc_t68E2B6BCEAD254F4C66501F0987E52D5ED8CF8DE, NULL, NULL, NULL, NULL, NULL, &BySubjectFunc_t68E2B6BCEAD254F4C66501F0987E52D5ED8CF8DE_0_0_0 } /* Mono.Btls.MonoBtlsX509LookupMono/BySubjectFunc */,
	{ DelegatePInvokeWrapper_GetSecurityInfoNativeCall_tDD06963B1C1773B84152EBDB0B73BB95D5E29A40, NULL, NULL, NULL, NULL, NULL, &GetSecurityInfoNativeCall_tDD06963B1C1773B84152EBDB0B73BB95D5E29A40_0_0_0 } /* System.Security.AccessControl.NativeObjectSecurity/GetSecurityInfoNativeCall */,
	{ DelegatePInvokeWrapper_SetSecurityInfoNativeCall_t01A2030E2D268FAB3C374416C4AC1CE3E33F5C37, NULL, NULL, NULL, NULL, NULL, &SetSecurityInfoNativeCall_t01A2030E2D268FAB3C374416C4AC1CE3E33F5C37_0_0_0 } /* System.Security.AccessControl.NativeObjectSecurity/SetSecurityInfoNativeCall */,
	{ DelegatePInvokeWrapper_OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7, NULL, NULL, NULL, NULL, NULL, &OnNavMeshPreUpdate_t332BD19DBCB087D7DE3F4F48C1E8F6A4EAB691C7_0_0_0 } /* UnityEngine.AI.NavMesh/OnNavMeshPreUpdate */,
	{ NULL, FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke, FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_back, FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_cleanup, NULL, NULL, &FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_0_0_0 } /* UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal */,
	{ NULL, NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_marshal_pinvoke, NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_marshal_pinvoke_back, NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_0_0_0 } /* System.Number/NumberBuffer */,
	{ DelegatePInvokeWrapper_InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3, NULL, NULL, NULL, NULL, NULL, &InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3_0_0_0 } /* System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate */,
	{ NULL, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_back, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_cleanup, NULL, NULL, &FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_0_0_0 } /* System.ParameterizedStrings/FormatParam */,
	{ NULL, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_back, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_cleanup, NULL, NULL, &EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_0_0_0 } /* UnityEngine.ParticleSystem/EmitParams */,
	{ DelegatePInvokeWrapper_OnCaptureResourceCreatedCallback_tA8D1E423E6D2EB046CA66BF468199752BA2A882B, NULL, NULL, NULL, NULL, NULL, &OnCaptureResourceCreatedCallback_tA8D1E423E6D2EB046CA66BF468199752BA2A882B_0_0_0 } /* UnityEngine.Windows.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback */,
	{ DelegatePInvokeWrapper_OnCapturedToDiskCallback_t184CFBFA312A113D865AB3348AD2FCC9F2B8C87A, NULL, NULL, NULL, NULL, NULL, &OnCapturedToDiskCallback_t184CFBFA312A113D865AB3348AD2FCC9F2B8C87A_0_0_0 } /* UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToDiskCallback */,
	{ DelegatePInvokeWrapper_OnPhotoModeStartedCallback_tCC911AAFA0C56D78D8C3AFAB4F10C6D64AFB8F28, NULL, NULL, NULL, NULL, NULL, &OnPhotoModeStartedCallback_tCC911AAFA0C56D78D8C3AFAB4F10C6D64AFB8F28_0_0_0 } /* UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStartedCallback */,
	{ DelegatePInvokeWrapper_OnPhotoModeStoppedCallback_t0FBC7D27E79939CF7FE318FA275FDEE6330BB28B, NULL, NULL, NULL, NULL, NULL, &OnPhotoModeStoppedCallback_t0FBC7D27E79939CF7FE318FA275FDEE6330BB28B_0_0_0 } /* UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStoppedCallback */,
	{ DelegatePInvokeWrapper_ErrorDelegate_t0E4D50125D761FB7F662E5A79E9AA8D915BB2246, NULL, NULL, NULL, NULL, NULL, &ErrorDelegate_t0E4D50125D761FB7F662E5A79E9AA8D915BB2246_0_0_0 } /* UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate */,
	{ DelegatePInvokeWrapper_StatusDelegate_t1DAF325F3F4C4209ACB9711E4D9B92956BF9D39D, NULL, NULL, NULL, NULL, NULL, &StatusDelegate_t1DAF325F3F4C4209ACB9711E4D9B92956BF9D39D_0_0_0 } /* UnityEngine.Windows.Speech.PhraseRecognitionSystem/StatusDelegate */,
	{ DelegatePInvokeWrapper_CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509, NULL, NULL, NULL, NULL, NULL, &CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_0_0_0 } /* UnityEngine.Playables.PlayableBinding/CreateOutputMethod */,
	{ DelegatePInvokeWrapper_UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4, NULL, NULL, NULL, NULL, NULL, &UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction */,
	{ NULL, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_back, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_cleanup, NULL, NULL, &PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_0_0_0 } /* UnityEngine.UIElements.PointerDeviceState/PointerLocation */,
	{ NULL, ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke, ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke_back, ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke_cleanup, NULL, NULL, &ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_0_0_0 } /* System.Diagnostics.Process/ProcInfo */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback */,
	{ DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC, NULL, NULL, NULL, NULL, NULL, &GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback */,
	{ DelegatePInvokeWrapper_Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0, NULL, NULL, NULL, NULL, NULL, &Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback */,
	{ DelegatePInvokeWrapper_Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A, NULL, NULL, NULL, NULL, NULL, &Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback */,
	{ DelegatePInvokeWrapper_RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A, NULL, NULL, NULL, NULL, NULL, &RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback */,
	{ NULL, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_back, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_cleanup, NULL, NULL, &CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_0_0_0 } /* System.Text.RegularExpressions.Regex/CachedCodeEntryKey */,
	{ NULL, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_back, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_cleanup, NULL, NULL, &LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_0_0_0 } /* System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping */,
	{ NULL, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_back, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_cleanup, NULL, NULL, &SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_0_0_0 } /* System.Text.RegularExpressions.RegexCharClass/SingleRange */,
	{ DelegatePInvokeWrapper_UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4, NULL, NULL, NULL, NULL, NULL, &UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4_0_0_0 } /* UnityEngine.RemoteSettings/UpdatedEventHandler */,
	{ NULL, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_back, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_cleanup, NULL, NULL, &DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_0_0_0 } /* UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking */,
	{ NULL, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_back, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_cleanup, NULL, NULL, &RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_0_0_0 } /* UnityEngine.UIElements.UIR.RenderChain/RenderNodeData */,
	{ DelegatePInvokeWrapper_HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046, NULL, NULL, NULL, NULL, NULL, &HashCodeOfStringDelegate_t9AB4FF441166EF88D20657805C4FA187C4FF5046_0_0_0 } /* System.Xml.SecureStringHasher/HashCodeOfStringDelegate */,
	{ NULL, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_back, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshal_pinvoke, SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshal_pinvoke_back, SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshal_pinvoke_cleanup, NULL, NULL, &SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_0_0_0 } /* System.Xml.Schema.SequenceNode/SequenceConstructPosContext */,
	{ NULL, ShaderVariant_t1CC20A9D8994069AE20C1FCD6D09F23BC74CB0A4_marshal_pinvoke, ShaderVariant_t1CC20A9D8994069AE20C1FCD6D09F23BC74CB0A4_marshal_pinvoke_back, ShaderVariant_t1CC20A9D8994069AE20C1FCD6D09F23BC74CB0A4_marshal_pinvoke_cleanup, NULL, NULL, &ShaderVariant_t1CC20A9D8994069AE20C1FCD6D09F23BC74CB0A4_0_0_0 } /* UnityEngine.ShaderVariantCollection/ShaderVariant */,
	{ NULL, Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke, Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_back, Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_cleanup, NULL, NULL, &Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_marshal_pinvoke, SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_marshal_pinvoke_back, SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_marshal_pinvoke_cleanup, NULL, NULL, &SmtpResponse_tCD2A8DC7B0BD3208817AA49BDB60BC32BD62C854_0_0_0 } /* System.Net.Mail.SmtpClient/SmtpResponse */,
	{ DelegatePInvokeWrapper_SendFileHandler_tFBB94763A61E5EC1AF7F81EC6F05F460B913B902, NULL, NULL, NULL, NULL, NULL, &SendFileHandler_tFBB94763A61E5EC1AF7F81EC6F05F460B913B902_0_0_0 } /* System.Net.Sockets.Socket/SendFileHandler */,
	{ NULL, ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke, ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_back, ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_cleanup, NULL, NULL, &ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_0_0_0 } /* System.IO.Stream/ReadWriteParameters */,
	{ NULL, SNIP_t4D35D86E557C50B72DE1EE007B3478ADD582D000_marshal_pinvoke, SNIP_t4D35D86E557C50B72DE1EE007B3478ADD582D000_marshal_pinvoke_back, SNIP_t4D35D86E557C50B72DE1EE007B3478ADD582D000_marshal_pinvoke_cleanup, NULL, NULL, &SNIP_t4D35D86E557C50B72DE1EE007B3478ADD582D000_0_0_0 } /* System.Security.Permissions.StrongNameIdentityPermission/SNIP */,
	{ NULL, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_back, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_cleanup, NULL, NULL, &PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_0_0_0 } /* UnityEngine.UIElements.StyleComplexSelector/PseudoStateData */,
	{ NULL, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_back, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_cleanup, NULL, NULL, &ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_0_0_0 } /* UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair */,
	{ NULL, Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke, Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_back, Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_cleanup, NULL, NULL, &Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_0_0_0 } /* UnityEngine.UIElements.StylePropertyNameCollection/Enumerator */,
	{ NULL, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_back, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_cleanup, NULL, NULL, &ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_0_0_0 } /* UnityEngine.UIElements.StyleSheet/ImportStruct */,
	{ NULL, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_back, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_cleanup, NULL, NULL, &ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_0_0_0 } /* UnityEngine.UIElements.StyleVariableResolver/ResolveContext */,
	{ DelegatePInvokeWrapper_WaitDelegate_t9B72B4EAAC263F02B0B42BB216EFEBA4BC0C8E60, NULL, NULL, NULL, NULL, NULL, &WaitDelegate_t9B72B4EAAC263F02B0B42BB216EFEBA4BC0C8E60_0_0_0 } /* System.Threading.SynchronizationContext/WaitDelegate */,
	{ NULL, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_back, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_cleanup, NULL, NULL, &AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_0_0_0 } /* UnityEngine.UIElements.TemplateAsset/AttributeOverride */,
	{ DelegatePInvokeWrapper_OnDetectFocusChangeFunction_tB31D458403A6818419AAAFBA0049B72060284326, NULL, NULL, NULL, NULL, NULL, &OnDetectFocusChangeFunction_tB31D458403A6818419AAAFBA0049B72060284326_0_0_0 } /* UnityEngine.UIElements.TextEditorEngine/OnDetectFocusChangeFunction */,
	{ DelegatePInvokeWrapper_OnIndexChangeFunction_t85C95CE0E180FEF496A57F758911AD7D1562043C, NULL, NULL, NULL, NULL, NULL, &OnIndexChangeFunction_t85C95CE0E180FEF496A57F758911AD7D1562043C_0_0_0 } /* UnityEngine.UIElements.TextEditorEngine/OnIndexChangeFunction */,
	{ NULL, SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke, SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_back, SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_cleanup, NULL, NULL, &SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_0_0_0 } /* UnityEngine.TextCore.Text.TextGenerator/SpecialCharacter */,
	{ NULL, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_back, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_0_0_0 } /* UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef */,
	{ NULL, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_back, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_cleanup, NULL, NULL, &FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_0_0_0 } /* UnityEngine.TextCore.Text.TextSettings/FontReferenceMap */,
	{ NULL, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_back, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_cleanup, NULL, NULL, &BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_0_0_0 } /* UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo */,
	{ NULL, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_back, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_cleanup, NULL, NULL, &TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_0_0_0 } /* UnityEngine.UIElements.TextureRegistry/TextureInfo */,
	{ NULL, FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke, FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_back, FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_cleanup, NULL, NULL, &FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_0_0_0 } /* System.Globalization.TimeSpanFormat/FormatLiterals */,
	{ NULL, StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke, StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke_back, StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke_cleanup, NULL, NULL, &StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_0_0_0 } /* System.Globalization.TimeSpanParse/StringParser */,
	{ NULL, TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke, TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_back, TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanRawInfo */,
	{ NULL, TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke, TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_back, TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanResult */,
	{ NULL, DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_marshal_pinvoke, DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_marshal_pinvoke_back, DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_marshal_pinvoke_cleanup, NULL, NULL, &DYNAMIC_TIME_ZONE_INFORMATION_t5E5AC77C219A3CC0783CECA5AE7CECB2260CC16E_0_0_0 } /* System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION */,
	{ NULL, StringSerializer_t0DDE28F30623811FCF78C58891304CD10419105D_marshal_pinvoke, StringSerializer_t0DDE28F30623811FCF78C58891304CD10419105D_marshal_pinvoke_back, StringSerializer_t0DDE28F30623811FCF78C58891304CD10419105D_marshal_pinvoke_cleanup, NULL, NULL, &StringSerializer_t0DDE28F30623811FCF78C58891304CD10419105D_0_0_0 } /* System.TimeZoneInfo/StringSerializer */,
	{ NULL, TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke, TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_back, TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_cleanup, NULL, NULL, &TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_0_0_0 } /* System.TimeZoneInfo/TransitionTime */,
	{ NULL, TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke, TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke_back, TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke_cleanup, NULL, NULL, &TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_0_0_0 } /* UnityEngine.UIElements.TreeView/TreeViewItemWrapper */,
	{ NULL, ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke, ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_back, ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_cleanup, NULL, NULL, &ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_0_0_0 } /* UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/ClosingInfo */,
	{ NULL, Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke, Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_back, Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_cleanup, NULL, NULL, &Entry_tB8765CA56422E2C92887314844384843688DCB9F_0_0_0 } /* UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry */,
	{ NULL, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_back, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_cleanup, NULL, NULL, &AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_0_0_0 } /* UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree */,
	{ NULL, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_back, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_cleanup, NULL, NULL, &AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_0_0_0 } /* UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate */,
	{ NULL, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_back, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_cleanup, NULL, NULL, &DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_0_0_0 } /* UnityEngine.UIElements.UIR.UIRenderDevice/DeviceToFree */,
	{ NULL, EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke, EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_back, EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_cleanup, NULL, NULL, &EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_0_0_0 } /* UnityEngine.UIElements.UIR.UIRenderDevice/EvaluationState */,
	{ NULL, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_back, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_cleanup, NULL, NULL, &DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_0_0_0 } /* System.Globalization.UmAlQuraCalendar/DateMapping */,
	{ NULL, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_back, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke, unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke_back, unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_interface_struct_tFD4B67EBFBE5D7FF212193507C3517DBA60978ED_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct */,
	{ NULL, unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke, unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke_back, unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_marshal_pinvoke_cleanup, NULL, NULL, &unitytls_tlsctx_callbacks_t348AE3D333ACBB2F17D4D7B8412256357B39B568_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_callbacks */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_certificate_callback_tB2FEBFA5D27CFA86544C06451270B36D77F2932C, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_certificate_callback_tB2FEBFA5D27CFA86544C06451270B36D77F2932C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_callback_tDBE877327789CABE940C2A724EC9A5D142318851, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_callback_tDBE877327789CABE940C2A724EC9A5D142318851_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_read_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_trace_callback_tAC1169E423F6EBDA60CDD5D33E1795A8811E0BE6, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_trace_callback_tAC1169E423F6EBDA60CDD5D33E1795A8811E0BE6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_callback_t5D4B64AD846D04E819A49689F7EAA47365636611, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_callback_t5D4B64AD846D04E819A49689F7EAA47365636611_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_write_callback */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_x509verify_callback_t3334D904C28324D444B6C26BEEF29B5E07D9D58D, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_x509verify_callback_t3334D904C28324D444B6C26BEEF29B5E07D9D58D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_callback_t1B72B7CF228F76F09A6A75C54C15F2084C01CA09, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_callback_t1B72B7CF228F76F09A6A75C54C15F2084C01CA09_0_0_0 } /* Mono.Unity.UnityTls/unitytls_x509verify_callback */,
	{ NULL, UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke, UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke_back, UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke_cleanup, NULL, NULL, &UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_0_0_0 } /* Mono.Security.Uri/UriScheme */,
	{ NULL, TimeSpanSplitter_t3A88A1F29A727E25EEF32409AFED5C7A9025AFF3_marshal_pinvoke, TimeSpanSplitter_t3A88A1F29A727E25EEF32409AFED5C7A9025AFF3_marshal_pinvoke_back, TimeSpanSplitter_t3A88A1F29A727E25EEF32409AFED5C7A9025AFF3_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanSplitter_t3A88A1F29A727E25EEF32409AFED5C7A9025AFF3_0_0_0 } /* System.Buffers.Text.Utf8Parser/TimeSpanSplitter */,
	{ DelegatePInvokeWrapper_OnStartedRecordingVideoCallback_t64E6C26F7ABAB9254AACB9D62C693F8922C1E45C, NULL, NULL, NULL, NULL, NULL, &OnStartedRecordingVideoCallback_t64E6C26F7ABAB9254AACB9D62C693F8922C1E45C_0_0_0 } /* UnityEngine.Windows.WebCam.VideoCapture/OnStartedRecordingVideoCallback */,
	{ DelegatePInvokeWrapper_OnStoppedRecordingVideoCallback_tC089900DD6C16C42C782522C257740BB222C1437, NULL, NULL, NULL, NULL, NULL, &OnStoppedRecordingVideoCallback_tC089900DD6C16C42C782522C257740BB222C1437_0_0_0 } /* UnityEngine.Windows.WebCam.VideoCapture/OnStoppedRecordingVideoCallback */,
	{ DelegatePInvokeWrapper_OnVideoCaptureResourceCreatedCallback_t5652A803A57C7FEA9BEAAA7250D14204C9AA114C, NULL, NULL, NULL, NULL, NULL, &OnVideoCaptureResourceCreatedCallback_t5652A803A57C7FEA9BEAAA7250D14204C9AA114C_0_0_0 } /* UnityEngine.Windows.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback */,
	{ DelegatePInvokeWrapper_OnVideoModeStartedCallback_t7BFBEBA2CDDBFA58023D8BA206E0D90920819C1F, NULL, NULL, NULL, NULL, NULL, &OnVideoModeStartedCallback_t7BFBEBA2CDDBFA58023D8BA206E0D90920819C1F_0_0_0 } /* UnityEngine.Windows.WebCam.VideoCapture/OnVideoModeStartedCallback */,
	{ DelegatePInvokeWrapper_OnVideoModeStoppedCallback_tA29659F86D8702608589583F3F415ABF57F6A054, NULL, NULL, NULL, NULL, NULL, &OnVideoModeStoppedCallback_tA29659F86D8702608589583F3F415ABF57F6A054_0_0_0 } /* UnityEngine.Windows.WebCam.VideoCapture/OnVideoModeStoppedCallback */,
	{ NULL, Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke, Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_back, Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_cleanup, NULL, NULL, &Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0 } /* UnityEngine.UIElements.VisualElement/Hierarchy */,
	{ NULL, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_back, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_cleanup, NULL, NULL, &SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_0_0_0 } /* UnityEngine.UIElements.VisualTreeAsset/SlotDefinition */,
	{ NULL, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_back, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_cleanup, NULL, NULL, &SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_0_0_0 } /* UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry */,
	{ NULL, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_back, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_cleanup, NULL, NULL, &UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_0_0_0 } /* UnityEngine.UIElements.VisualTreeAsset/UsingEntry */,
	{ NULL, VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke, VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke_back, VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshal_pinvoke_cleanup, NULL, NULL, &VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_0_0_0 } /* System.Threading.Volatile/VolatileBoolean */,
	{ NULL, VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke, VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_back, VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_cleanup, NULL, NULL, &VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_0_0_0 } /* System.Threading.Volatile/VolatileObject */,
	{ NULL, Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_marshal_pinvoke, Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_marshal_pinvoke_back, Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_marshal_pinvoke_cleanup, NULL, NULL, &Win32_IN6_ADDR_t9B6CDD60B0E692B4829A9A9F9F6FCB2A3F511363_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR */,
	{ NULL, Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_marshal_pinvoke, Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_marshal_pinvoke_back, Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_TCP6ROW_tA246F0C25601115F6A63AE262E2FF0DD46662562_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW */,
	{ NULL, Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_marshal_pinvoke, Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_marshal_pinvoke_back, Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_TCPROW_tC8F5BC4ED0E21699798F54D80E421130241FA61D_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW */,
	{ NULL, Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_marshal_pinvoke, Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_marshal_pinvoke_back, Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_UDP6ROW_t607C9AF97C1096B1A21AE9B6DAE1562E50617B9A_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW */,
	{ NULL, Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_marshal_pinvoke, Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_marshal_pinvoke_back, Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_marshal_pinvoke_cleanup, NULL, NULL, &Win32_MIB_UDPROW_tC48E61D5CB7A87C28BF1D0963DC0916C28AA8FD1_0_0_0 } /* System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW */,
	{ NULL, EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C_marshal_pinvoke, EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C_marshal_pinvoke_back, EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C_marshal_pinvoke_cleanup, NULL, NULL, &EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C_0_0_0 } /* System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList */,
	{ NULL, XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke, XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke_back, XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_marshal_pinvoke_cleanup, NULL, NULL, &XRMirrorViewBlitDesc_tC913B2856BA2160BC3AD99F0C67293850E2162E0_0_0_0 } /* UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc */,
	{ NULL, XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke, XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke_back, XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_marshal_pinvoke_cleanup, NULL, NULL, &XRRenderPass_t9E8711E8C69E3917AA39A0CA8304B604ED2838E8_0_0_0 } /* UnityEngine.XR.XRDisplaySubsystem/XRRenderPass */,
	{ NULL, Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshal_pinvoke, Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshal_pinvoke_back, Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshal_pinvoke_cleanup, NULL, NULL, &Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_0_0_0 } /* System.Xml.Schema.XmlAtomicValue/Union */,
	{ NULL, SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke, SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke_back, SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_marshal_pinvoke_cleanup, NULL, NULL, &SmallXmlNodeList_tAF536F4BFCA26BF1B0E912818E921A3181D49EF0_0_0_0 } /* System.Xml.XmlNamedNodeMap/SmallXmlNodeList */,
	{ NULL, NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshal_pinvoke, NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshal_pinvoke_back, NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshal_pinvoke_cleanup, NULL, NULL, &NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_0_0_0 } /* System.Xml.XmlNamespaceManager/NamespaceDeclaration */,
	{ DelegatePInvokeWrapper_HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA, NULL, NULL, NULL, NULL, NULL, &HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA_0_0_0 } /* System.Xml.XmlQualifiedName/HashCodeOfStringDelegate */,
	{ NULL, ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshal_pinvoke, ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshal_pinvoke_back, ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshal_pinvoke_cleanup, NULL, NULL, &ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_0_0_0 } /* System.Xml.XmlTextReaderImpl/ParsingState */,
	{ NULL, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke_back, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshal_pinvoke_cleanup, NULL, NULL, &Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_0_0_0 } /* System.Xml.XmlTextWriter/Namespace */,
	{ NULL, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke_back, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshal_pinvoke_cleanup, NULL, NULL, &TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_0_0_0 } /* System.Xml.XmlTextWriter/TagInfo */,
	{ NULL, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke_back, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke_cleanup, NULL, NULL, &Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_0_0_0 } /* System.Xml.Schema.XsdDateTime/Parser */,
	{ DelegatePInvokeWrapper_ReadDataHandler_t75DF50D4AD5800AB83554A832D2EF72F02FD2D2E, NULL, NULL, NULL, NULL, NULL, &ReadDataHandler_t75DF50D4AD5800AB83554A832D2EF72F02FD2D2E_0_0_0 } /* ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler */,
	{ NULL, AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshal_pinvoke, AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshal_pinvoke_back, AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshal_pinvoke_cleanup, NULL, NULL, &AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_0_0_0 } /* System.Dynamic.BindingRestrictions/TestBuilder/AndNode */,
	{ DelegatePInvokeWrapper_WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4, NULL, NULL, NULL, NULL, NULL, &WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4_0_0_0 } /* System.Console/WindowsConsole/WindowsCancelHandler */,
	{ NULL, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_back, NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_t0F9FC9D15F03CFDEBA3B3F4210A2AB3B53305CDA_0_0_0 } /* System.Globalization.FormatProvider/Number/NumberBuffer */,
	{ NULL, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke_back, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshal_pinvoke_cleanup, NULL, NULL, &InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_0_0_0 } /* System.Linq.Expressions.Interpreter.InstructionList/DebugView/InstructionView */,
	{ NULL, SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_marshal_pinvoke, SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_marshal_pinvoke_back, SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_marshal_pinvoke_cleanup, NULL, NULL, &SEC_WINNT_AUTH_IDENTITY_W_t08251E44E7FDFDC9516EF0BE53823BF113DB5963_0_0_0 } /* Interop/SspiCli/SEC_WINNT_AUTH_IDENTITY_W */,
	{ NULL, SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_marshal_pinvoke, SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_marshal_pinvoke_back, SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_marshal_pinvoke_cleanup, NULL, NULL, &SecPkgContext_IssuerListInfoEx_t45BE40232614EEEDFF25054A7699E031188A011B_0_0_0 } /* Interop/SspiCli/SecPkgContext_IssuerListInfoEx */,
	{ NULL, DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke, DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_back, DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_marshal_pinvoke_cleanup, NULL, NULL, &DefaultExtendedTypeDescriptor_tA141AABC2CE8A296CFEBCD528145934014AB06B5_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor */,
	{ NULL, DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke, DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_back, DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_marshal_pinvoke_cleanup, NULL, NULL, &DefaultTypeDescriptor_tE4BFD69B5DCCF4D947034C2740F803F797E1879F_0_0_0 } /* System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor */,
	{ DelegatePInvokeWrapper_unitytls_errorstate_create_t_tE8BB5D6BCA7D232F4981831586B71C39802CF75B, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_create_t_tE8BB5D6BCA7D232F4981831586B71C39802CF75B_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t */,
	{ DelegatePInvokeWrapper_unitytls_errorstate_raise_error_t_t8C20FC78CA5BBEE0248CC09D1C1AF25BCB3835CF, NULL, NULL, NULL, NULL, NULL, &unitytls_errorstate_raise_error_t_t8C20FC78CA5BBEE0248CC09D1C1AF25BCB3835CF_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t */,
	{ DelegatePInvokeWrapper_unitytls_key_free_t_tDB8665140BAF30447F3650D323078C193566FF72, NULL, NULL, NULL, NULL, NULL, &unitytls_key_free_t_tDB8665140BAF30447F3650D323078C193566FF72_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t */,
	{ DelegatePInvokeWrapper_unitytls_key_get_ref_t_t8335968B19449FE0ED92E67AE9B6D95915684209, NULL, NULL, NULL, NULL, NULL, &unitytls_key_get_ref_t_t8335968B19449FE0ED92E67AE9B6D95915684209_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t */,
	{ DelegatePInvokeWrapper_unitytls_key_parse_der_t_tC218AEF9253FA105762F39041F696A06C52D3F10, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_der_t_tC218AEF9253FA105762F39041F696A06C52D3F10_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t */,
	{ DelegatePInvokeWrapper_unitytls_key_parse_pem_t_tE945670C6CB28BBF4670D2E8E904B7D8A2AB277B, NULL, NULL, NULL, NULL, NULL, &unitytls_key_parse_pem_t_tE945670C6CB28BBF4670D2E8E904B7D8A2AB277B_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t */,
	{ DelegatePInvokeWrapper_unitytls_random_generate_bytes_t_t6E7011EF958B0948582F8D1D213B454A5A962569, NULL, NULL, NULL, NULL, NULL, &unitytls_random_generate_bytes_t_t6E7011EF958B0948582F8D1D213B454A5A962569_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_client_t_t49D8F69D4152410A346CB3560B121DCC44AAC4EC, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_client_t_t49D8F69D4152410A346CB3560B121DCC44AAC4EC_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_create_server_t_t1068941B319B893D3FFBE53FE061676FF1CC3803, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_create_server_t_t1068941B319B893D3FFBE53FE061676FF1CC3803_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_free_t_tFBF7BB64D2E1C183718FB5809ABF0051395FD8F0, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_free_t_tFBF7BB64D2E1C183718FB5809ABF0051395FD8F0_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_ciphersuite_t_t7317543D399259616648B1AA19447C4B63F70EF2, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_ciphersuite_t_t7317543D399259616648B1AA19447C4B63F70EF2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_get_protocol_t_t04E3B73C1D77379F7C7388ED4934189365326F3C, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_get_protocol_t_t04E3B73C1D77379F7C7388ED4934189365326F3C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_notify_close_t_t717D19846262E3DF5D1A69C5E136912E7A54B253, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_notify_close_t_t717D19846262E3DF5D1A69C5E136912E7A54B253_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_process_handshake_t_t8D94F5FAD00CD61BF950829866C0C6E29D202606, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_process_handshake_t_t8D94F5FAD00CD61BF950829866C0C6E29D202606_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_read_t_t3E3C711F7A47E704ABDF0DF0B7515E7306EB7C95, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_read_t_t3E3C711F7A47E704ABDF0DF0B7515E7306EB7C95_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_server_require_client_authentication_t_t2AC04245D1F40738C5FB87B0DEE80761E243F0BE, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_server_require_client_authentication_t_t2AC04245D1F40738C5FB87B0DEE80761E243F0BE_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_certificate_callback_t_t2B54F7228DFC11BF14DCF2201BDD90CF0EF92D41, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_certificate_callback_t_t2B54F7228DFC11BF14DCF2201BDD90CF0EF92D41_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_supported_ciphersuites_t_t007E8706D364DE695F1DBF28358058A1E73DF544, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_supported_ciphersuites_t_t007E8706D364DE695F1DBF28358058A1E73DF544_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_trace_callback_t_t3C615EACADC2CB1CDA8362B3F775071976E7CF7C, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_trace_callback_t_t3C615EACADC2CB1CDA8362B3F775071976E7CF7C_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_set_x509verify_callback_t_t032FE980BEDD0D201CAF1EE653ABE303CDBCA7C9, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_set_x509verify_callback_t_t032FE980BEDD0D201CAF1EE653ABE303CDBCA7C9_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t */,
	{ DelegatePInvokeWrapper_unitytls_tlsctx_write_t_t976A41600B61F9C8DF022296B67316FFA53EB386, NULL, NULL, NULL, NULL, NULL, &unitytls_tlsctx_write_t_t976A41600B61F9C8DF022296B67316FFA53EB386_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t */,
	{ DelegatePInvokeWrapper_unitytls_x509_export_der_t_tB784597940DE501BB5FEFA3EA528634559A16749, NULL, NULL, NULL, NULL, NULL, &unitytls_x509_export_der_t_tB784597940DE501BB5FEFA3EA528634559A16749_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_der_t_tC45176B25C9B11C509119A1943EFDE133D819951, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_der_t_tC45176B25C9B11C509119A1943EFDE133D819951_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_pem_t_t8218AF5B5C57C063C070E2450C1969CAEE30AA8D, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_pem_t_t8218AF5B5C57C063C070E2450C1969CAEE30AA8D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_pem_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_append_t_tC84B9CA7C15F5D1DE98386670A80D5F98559D98E, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_append_t_tC84B9CA7C15F5D1DE98386670A80D5F98559D98E_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_create_t_t8873365FFB1556CE6B643700DB0C30E391B758D6, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_create_t_t8873365FFB1556CE6B643700DB0C30E391B758D6_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_free_t_t9BD50B09A7919B7891DC529787E93C708FC653A2, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_free_t_t9BD50B09A7919B7891DC529787E93C708FC653A2_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_get_ref_t_t264CEEF7B8D1F10FD95E1BC78BB48BCA11E305EA, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_ref_t_t264CEEF7B8D1F10FD95E1BC78BB48BCA11E305EA_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t */,
	{ DelegatePInvokeWrapper_unitytls_x509list_get_x509_t_t428DCD367D50DCDD5ECE6DCFEB8967C5F7C3DFE8, NULL, NULL, NULL, NULL, NULL, &unitytls_x509list_get_x509_t_t428DCD367D50DCDD5ECE6DCFEB8967C5F7C3DFE8_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_default_ca_t_tED88B7ABC8408A22DB51B1F57D5FC65BDD2EC809, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_default_ca_t_tED88B7ABC8408A22DB51B1F57D5FC65BDD2EC809_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t */,
	{ DelegatePInvokeWrapper_unitytls_x509verify_explicit_ca_t_t1B3D98BF01F059A3C2ADE87EFDDA03C557A3D08D, NULL, NULL, NULL, NULL, NULL, &unitytls_x509verify_explicit_ca_t_t1B3D98BF01F059A3C2ADE87EFDDA03C557A3D08D_0_0_0 } /* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t */,
	{ NULL, EventCacheEntry_t33A36CF96CE45CF31B229C6141C7ECF6A27278E0_marshal_pinvoke, EventCacheEntry_t33A36CF96CE45CF31B229C6141C7ECF6A27278E0_marshal_pinvoke_back, EventCacheEntry_t33A36CF96CE45CF31B229C6141C7ECF6A27278E0_marshal_pinvoke_cleanup, NULL, NULL, &EventCacheEntry_t33A36CF96CE45CF31B229C6141C7ECF6A27278E0_0_0_0 } /* System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry */,
	{ NULL, EventCacheKey_t808E4964CFCF655710626DE6089FAF2C53DDECC9_marshal_pinvoke, EventCacheKey_t808E4964CFCF655710626DE6089FAF2C53DDECC9_marshal_pinvoke_back, EventCacheKey_t808E4964CFCF655710626DE6089FAF2C53DDECC9_marshal_pinvoke_cleanup, NULL, NULL, &EventCacheKey_t808E4964CFCF655710626DE6089FAF2C53DDECC9_0_0_0 } /* System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey */,
};
