#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<UnityEngine.EventSystems.BaseEventData>
struct Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.GameObject>
struct Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C;
// System.Action`1<QFramework.IPanel>
struct Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<QFramework.UIPanelTesterInfo>
struct Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B;
// System.Action`1<System.UInt16>
struct Action_1_t2DE95E477A86F144593CC7965E86728C71D0E75D;
// System.Action`2<System.Int32,System.Object[]>
struct Action_2_t7E120AA4A73FA24ADC69BF237235F662C75EC1A6;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Action`2<System.Int32,System.Object>
struct Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>
struct Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44;
// System.Collections.Generic.Dictionary`2<System.Int32,QFramework.IEasyEvent>
struct Dictionary_2_t960645CB0C30F58E63CEE480E200579E9685C9A3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<QFramework.IPanel>>
struct Dictionary_2_t3E050F4CEEB15D846DA61173737D21843561844F;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<QFramework.IPanel>>
struct Dictionary_2_t2BFC21CE6FC9720287E25022BC010F4FEB7851E7;
// System.Collections.Generic.Dictionary`2<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>
struct Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550;
// System.Func`1<QFramework.EnumEventSystem>
struct Func_1_t0535C0A8BE107E0782417FB2319D0062C1493860;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<QFramework.QMgrBehaviour>
struct Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t10FDFF9EE1C80F76FB5C31BA1D127F21CF49F9DA;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<QFramework.IPanel>>,System.Collections.Generic.IEnumerable`1<QFramework.IPanel>>
struct Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346;
// System.Func`2<QFramework.IPanel,System.Boolean>
struct Func_2_t5610A48963408652A7113BB2878D7128E24434E0;
// System.Func`2<QFramework.IPanel,System.String>
struct Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51;
// System.Func`2<QFramework.IPanel,System.Type>
struct Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct IDictionary_2_t41CB3D1D136FBB31AE979C184FA38FBB56AC815C;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.List`1<QFramework.IPanel>>
struct IDictionary_2_tA1EA32BCC32DF09626CFCDA9385E629677238070;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<QFramework.IPanel>>>
struct IEnumerable_1_tBC206E01ED676FCC855F7D8FC5B74A79DC21DBE6;
// System.Collections.Generic.IEnumerable`1<QFramework.IPanel>
struct IEnumerable_1_t05C4BAE51E8495617D72C607C73D5AB05A4BA62D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<QFramework.IPanel>
struct IEnumerator_1_t771BBB6FBA53E816F8E55A4D905D973FC4B42A16;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<QFramework.CollisionTriggerListener/EventName>
struct IEqualityComparer_1_t0256A4378B3ADD5935E37BAA96DD4E69A656BA0C;
// QFramework.IObjectFactory`1<QFramework.PanelInfo>
struct IObjectFactory_1_tBEA4ADEEE7DB0819912FAD25484FB453A9A07678;
// QFramework.IObjectFactory`1<QFramework.PanelSearchKeys>
struct IObjectFactory_1_tC56D5D9BD59346EB6436AC5F488C2899C6ABC16A;
// QFramework.IObjectFactory`1<QFramework.QMsg>
struct IObjectFactory_1_t0B2B11C501E591BAAB6B6148B7764D78EE726F6C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>
struct KeyCollection_tEAC5EBA6BF6B771F1862084D843BC2273F5C9472;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.List`1<System.Object>>
struct KeyCollection_tEACE8F2615D283A94FE4279152C1C1857A5CD594;
// System.Collections.Generic.Dictionary`2/KeyCollection<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>
struct KeyCollection_t74023E52AF2A355F56880A32CBDCFF2173FA3E63;
// System.Lazy`1<QFramework.EnumEventSystem>
struct Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998;
// System.Lazy`1<System.Object>
struct Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<QFramework.IPanel>
struct List_1_tEF9FCF20FCD8D8268719B28DA438E9DA2A6CE5C7;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16;
// System.Collections.Generic.List`1<QFramework.UIPanelTesterInfo>
struct List_1_t257F64E122FC6FE6D34458BCBBFEACBB7547F38B;
// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t44EF1B9C71532303037AAC259AD8D405401724D8;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_tA70D786D375D198C77EBB594AE632A6DFC82A440;
// QFramework.SafeObjectPool`1<System.Object>
struct SafeObjectPool_1_t73BF818AB38FF94B7DEB8D5A485D353870E066B5;
// QFramework.SafeObjectPool`1<QFramework.PanelInfo>
struct SafeObjectPool_1_t7330D19A20C0FCCDE59BD6E33BE623AA19C1A269;
// QFramework.SafeObjectPool`1<QFramework.PanelSearchKeys>
struct SafeObjectPool_1_t34350C9253C850D7F0788228F3FD5538086145C9;
// QFramework.SafeObjectPool`1<QFramework.QMsg>
struct SafeObjectPool_1_t1C0D372E01192C783B05AA86B17137498EF8EC0A;
// System.Collections.Generic.Stack`1<QFramework.IPanelLoader>
struct Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Stack`1<QFramework.PanelInfo>
struct Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659;
// System.Collections.Generic.Stack`1<QFramework.PanelSearchKeys>
struct Stack_1_tCE29F24A100928F8242B108523369CB0D152254E;
// System.Collections.Generic.Stack`1<QFramework.QMsg>
struct Stack_1_tD954276812CCCFE69D928A1193CE6CE09ABA6BEE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// QFramework.UIKitTableIndex`2<System.Object,System.Object>
struct UIKitTableIndex_2_t81BD4D9B827B346BE00E36D598EB1F47413446E3;
// QFramework.UIKitTableIndex`2<System.String,QFramework.IPanel>
struct UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA;
// QFramework.UIKitTableIndex`2<System.Type,QFramework.IPanel>
struct UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2;
// QFramework.UIKitTable`1<QFramework.IPanel>
struct UIKitTable_1_tA37264156B6380B50EDDB9A605962F93E84BC26C;
// QFramework.UIKitTable`1<System.Object>
struct UIKitTable_1_t5CA8EC2EA1241D835F91AAD16C6D00E912A470C3;
// UnityEngine.Events.UnityAction`1<UnityEngine.Collider>
struct UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D;
// UnityEngine.Events.UnityAction`1<UnityEngine.Collider2D>
struct UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94;
// UnityEngine.Events.UnityAction`1<UnityEngine.Collision>
struct UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717;
// UnityEngine.Events.UnityAction`1<UnityEngine.Collision2D>
struct UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.PointerEventData>
struct UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10;
// UnityEngine.Events.UnityAction`2<System.Int32,System.Int32>
struct UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5;
// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>
struct UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>
struct ValueCollection_t83F5697D8C04F521898C0476F440DF82AA1F8F2A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Object>
struct ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.List`1<System.Object>>
struct ValueCollection_t0E753798189D869CDC4CEBE3697A16DC15B323E8;
// System.Collections.Generic.Dictionary`2/ValueCollection<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>
struct ValueCollection_tD9193AF6E54CA4EDED2BB28ACE644773E9C5A6EC;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>[]
struct EntryU5BU5D_t80F7C9915C434E63895C5BFBE7CCA7B0548F0650;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Collections.Generic.List`1<System.Object>>[]
struct EntryU5BU5D_tF5C7725AC5610BAAE7F6CC3B047760CD1EBCBC14;
// System.Collections.Generic.Dictionary`2/Entry<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>[]
struct EntryU5BU5D_t1D6AF290EA2533D7B824136C57C72D935C54D912;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// QFramework.IPanel[]
struct IPanelU5BU5D_t46E9E56BE0677710769CFBA8F18BF3083FC4564E;
// QFramework.IPanelLoader[]
struct IPanelLoaderU5BU5D_t9D9AF80C91947FF1C9162EF83E7E4054ED52D202;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// QFramework.PanelInfo[]
struct PanelInfoU5BU5D_tCB7F12947D185A41BD4A856A7D8C52A8D18C03B0;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// QFramework.UIPanelTesterInfo[]
struct UIPanelTesterInfoU5BU5D_tA7FB6C8D84BFC06C9DCDDEB7FBF9714490B787C2;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// QFramework.AbstractPanelLoaderPool
struct AbstractPanelLoaderPool_tCADA5105A3D1C016C1350D284840109286DF109E;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// QFramework.Bind
struct Bind_t947EE9A19F6EA255E71344FE6CF8BB895C48FE5E;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// QFramework.CollisionTriggerListener
struct CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// QFramework.DefaultPanelLoaderPool
struct DefaultPanelLoaderPool_tD915239A668ACA79D706C8BF2C8EC5F898394D64;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// QFramework.DontDestroyOnLoad
struct DontDestroyOnLoad_t278FC7E476B71320A492482109AD26C71AA09135;
// QFramework.Empty4Raycast
struct Empty4Raycast_t0920D6E8EAEDB9B05A365D52F3329432DEA41461;
// QFramework.EnumEventSystem
struct EnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_tAEBFB7A16CA99343EA87722F78884BF8646BAE1B;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B;
// QFramework.Hide
struct Hide_tD028ED8ECE24F37F86A1FCAEE4255E30B26FEB6A;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// QFramework.IManager
struct IManager_tA0A5258A8D6B73E886DC29D58DFF032E1B558DAB;
// QFramework.IMsg
struct IMsg_t82FC7BC03416D36155554E333FB166670BDD4F86;
// QFramework.IPanel
struct IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20;
// QFramework.IPanelLoader
struct IPanelLoader_tDBEC6A515F5E7C24734604D4C6D6E69BEEF1C208;
// QFramework.IPanelLoaderPool
struct IPanelLoaderPool_t483EF63329244CC7926D75F10F2232F4DFF25640;
// QFramework.IUIData
struct IUIData_tA4A33FFF4BD8D1C55581CBA52DEED8004CF5F415;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// QFramework.InputFieldEnterSubmitTrigger
struct InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.LazyHelper
struct LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// QFramework.PanelInfo
struct PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94;
// QFramework.PanelSearchKeys
struct PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// QFramework.QMgrBehaviour
struct QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571;
// QFramework.QMgrID
struct QMgrID_t66037E7A3C353C851D08B93265A97A1E038D4CA9;
// QFramework.QMonoBehaviour
struct QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE;
// QFramework.QMsg
struct QMsg_t41F187494E15464B020988A12616F24ACA4605C3;
// QFramework.QMsgCenter
struct QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604;
// QFramework.QMsgSpan
struct QMsgSpan_t321987FAA09C97F02A65BD6D4304762FD301FA35;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.ResourceRequest
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// QFramework.UIComponent
struct UIComponent_tD71F161B7797022816ACB048A5B1BDF9BCA8CF52;
// QFramework.UIDefaultPanel
struct UIDefaultPanel_tE158BCCC507134C0EFFC242D14CF15046B9A5EE3;
// QFramework.UIEffectHelper
struct UIEffectHelper_tC23238CA19EAC6D1152C19B679588D619AA7985C;
// QFramework.UIElement
struct UIElement_tAC0710DF9804BF65C117D16DB98DA328983C2DDA;
// QFramework.UIElementList
struct UIElementList_t17FB3B0FDC6DB642C89908091BA0C5B17942A5F7;
// QFramework.UIEventListener
struct UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50;
// QFramework.UIKit
struct UIKit_t677A94304C21F268561FFE09EF41745F3802B048;
// QFramework.UIKitConfig
struct UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960;
// QFramework.UIManager
struct UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6;
// QFramework.UIMark
struct UIMark_t0FE387637E9A739E091ED288404447699A835217;
// QFramework.UIPanel
struct UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20;
// QFramework.UIPanelData
struct UIPanelData_tCA999A7ACF74BA46E578B43B74B5DB2C22660199;
// QFramework.UIPanelStack
struct UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54;
// QFramework.UIPanelTable
struct UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427;
// QFramework.UIPanelTester
struct UIPanelTester_tE4DD8B776060AF8D1752CA10C960BA50BDA5B968;
// QFramework.UIPanelTesterInfo
struct UIPanelTesterInfo_tC8D4797135F1C9FF6264C28E3BDE5DB4E0D75A54;
// QFramework.UIPointerDownEventListener
struct UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7;
// QFramework.UIPointerUpEventListener
struct UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B;
// QFramework.UIRoot
struct UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B;
// QFramework.UIScrollPage
struct UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338;
// QFramework.UIScrollPageChangeEvent
struct UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E;
// QFramework.UIScrollPageMark
struct UIScrollPageMark_t16503C11D9E31C26B5196596E06A6F5EB0E5AA1C;
// QFramework.UISpriteAnimation
struct UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// QFramework.DefaultPanelLoaderPool/DefaultPanelLoader
struct DefaultPanelLoader_tFB0893D574A52EDA4E47C6E3BA7D76664939BA44;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// QFramework.UIKitConfig/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558;
// QFramework.UIManager/<>c
struct U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636;
// QFramework.UIManager/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD;
// QFramework.UIManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6;
// QFramework.UIManager/<>c__DisplayClass5_1
struct U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4;
// QFramework.UIPanelTable/<>c
struct U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7;
// QFramework.UIPanelTable/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B;
// QFramework.UIPanelTester/<>c
struct U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B;
// QFramework.UIPanelTester/<Start>d__4
struct U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D;
// QFramework.DefaultPanelLoaderPool/DefaultPanelLoader/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2DE95E477A86F144593CC7965E86728C71D0E75D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t7E120AA4A73FA24ADC69BF237235F662C75EC1A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultPanelLoaderPool_tD915239A668ACA79D706C8BF2C8EC5F898394D64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultPanelLoader_tFB0893D574A52EDA4E47C6E3BA7D76664939BA44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t0535C0A8BE107E0782417FB2319D0062C1493860_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5610A48963408652A7113BB2878D7128E24434E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t05C4BAE51E8495617D72C607C73D5AB05A4BA62D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t771BBB6FBA53E816F8E55A4D905D973FC4B42A16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IManager_tA0A5258A8D6B73E886DC29D58DFF032E1B558DAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMsg_t82FC7BC03416D36155554E333FB166670BDD4F86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPanelLoaderPool_t483EF63329244CC7926D75F10F2232F4DFF25640_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPanelLoader_tDBEC6A515F5E7C24734604D4C6D6E69BEEF1C208_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t44EF1B9C71532303037AAC259AD8D405401724D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QMsg_t41F187494E15464B020988A12616F24ACA4605C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemStringExtension_t140E009031543A94BA19660BFC844BE3B5BD89D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UILevel_t844760F75096E0AF2E50BCF3DF4818B876F09EED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2E07C3C72F4E6CB52AE2B85F131585C13556397D;
IL2CPP_EXTERN_C String_t* _stringLiteral47B6A5DBC781D27E4BAFAC4727ED31B6CAB86140;
IL2CPP_EXTERN_C String_t* _stringLiteral7DA896927A9C79A0C136B7032424E73EC467C8A8;
IL2CPP_EXTERN_C const RuntimeMethod* CollisionTriggerListener_Dispatch_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mF2F3C59196FC21255999B881489543252013CE88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollisionTriggerListener_Dispatch_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m3BE5B446E5DB17763FB4CCC2EE9A45846D967BF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollisionTriggerListener_Dispatch_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mC601E72ADC091D508F6853D490125BF22A519289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollisionTriggerListener_Dispatch_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m6045B81B8E0A196D93A85D945EBA50E4263270A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollisionTriggerListener_Register_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC0D4C46C9D65455198B44B14E0FC4145537AB07D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollisionTriggerListener_Register_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m8304081506004D907B9C350ADD3E06FDC094BFEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollisionTriggerListener_Register_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mDB924C149ED9323DC345D65B4428F24FA251D7C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollisionTriggerListener_Register_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m3220E4A72CA71B5A2CD31776B9EF11AAB6883890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollisionTriggerListener_UnRegister_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m58515342A58D3CCBFE0561A07F0FB262F814FEE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollisionTriggerListener_UnRegister_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mF2DEA29114FFA48088CB1517E58F161B5164F443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollisionTriggerListener_UnRegister_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_m30E0E7330AA1E8012BE506BACBCE461AD2E797B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollisionTriggerListener_UnRegister_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_mE6C780A444D8C8BD9BA20921E4173CF34AEE3436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552_m3F89193E0E421E828163AF39C42F6BE7E2591A31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDC99BE3343755ECA60A0846AF9920A98CCEEB7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mDF46F8E2424C9D5EF4AFB151F76D4FB6EABA11B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mFDE898D83DF18FD6C2BDD4248F3E32FD535BC827_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mEE88B377594F2609D60DB4B66E65AEF0468C78D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mFCD04F48DD9F8D4E302DD777D042CCA7348A17AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAFD9C420258AD4896AD7BD6960832FF91D5AB2E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC807DD2857460344BDACA1CE5A1E69965A74655B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m77B86DA239FD5CD8A2D4D76C0CA54D3EC0E6484E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m8A649503D3671D0F4021C84E0FBFB8438580EAB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumEventSystem_Send_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC012FAEFA78C74FE727A5652E48CFDBE295E34C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Empty_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m7781CC6D24D412BF72531604769BE38B6AE5B8AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_LastOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_mAD4458B5818241C93A31F3E99C3560ECE93F5A81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisKeyValuePair_2_t53514AC605F6DBC7C9AE4C73131A69D3B2C3E538_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m352B21F669CBEB61998759D650AE07DD7972DBA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_mEACA5FAB212B8869F301F3A310847BA99061C2FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0CD18C6BAF1E81DD0B34963070DE26E6ADE53722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8F8CAD94EFD69041C25FEB6FD5A27E98E23A2924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m448E364F39C5DA82725EE5C15C634F865888C72C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF2AA4A969634078FE292FFD9E75F39DC6958080E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6C638E7A68184951B08C75959F91D218F4E75D5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m85F3393197BC02165A603C57FD5C3491904D0AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3_mF52E24653F52A8AE10C82C655D4851034F305E09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisInputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552_mB9FB7602F2F75379967B6FFEFFA5F41887D6A44B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50_m0FEF1F79EE8BF3F3F72413FCBF388F7174696980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7_m4AE84BC76390946A9EDBDD9184A81C0B96F977C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B_m0F78E39793658B0DADB0012F148ED55280CB78E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3_m21AB41049A7726A0C5D2FE9F2BE300ED837BEB1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50_m6D4FC124D7209D11B4D915E421E0ECC2D98FE50D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_mA0E0EA84B26436CB2A8597D4B5755C4ACC8523DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7_mFDD5D7E8BCF6EEB585D913DF256B71B9B68CF821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B_m17E432CC9714FE8F652AE061E6BF5266DFB45886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB17EF84B788D0B2A40AC0A670404F8967B5384E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IManager_UnRegisterEvent_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8FAA9187FC5C26B0E1B80CB8B1861E3AC5C23AB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFieldEnterSubmitTrigger_CheckForEnter_mA3650AC90EE6BAFA082EB6D33EDCAECCD0F09F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m36668E3F5E7FF80AC32BDD6002616161E05A2F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m36665587332ECC9FA9F5F358555C0956C05A7FE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6758D87F67F37E431CD3066B70E0558F43F3D51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_m0B6D7E66550414F48F366EA753C2554C8FDF4562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_IsValueCreated_m547A7678C332A282E98E32E8DC354DB4BC32C7D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_mC97F5801CD71E7AFED7507D6BF4A5D9B15F63A89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0B0674E845F360FA8837AEA0100C3500E3E4FE47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m18C64358B46891D5D938600939E6DD5961FEEF7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m3E6E77F8A3F2619EA60ACEDAE139A4FEBF4A5F3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m5C6866E1EB26B4EE88B075D305895349483BBA07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4551F4DE4ED2A15E985982AD4322456CE52C5E2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA6AAE251F341EFE027F981417F43A88B5ADFA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingletonProperty_1_Dispose_mDB0AB6CB568B253645CACFACF260E0F628C53A5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingletonProperty_1_get_Instance_m44E26FB2C813506C6F45B857203A3F2419F22EE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingletonProperty_1_get_Instance_m4ED39FC46BA5323F207DD100E71B74E6523F48D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingletonProperty_1_get_Instance_mEEA008E114B920B46059D7B8916F6E6FBE3867D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectFactory_CreateNonPublicConstructorObject_TisEnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3_m51AA651950EEB440967400759A710C163115123F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisUIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_m6C1F0CA0280BAFB40C69930BDC4F42EFB13A5D51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m15557773C5C7B03FA319A668FB60FD7A945F5A16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QMonoBehaviour_Process_m56EA7C201022216768BE96043062EB0CEEF52729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QMonoBehaviour_U3CUnRegisterAllEventU3Eb__12_0_mEB5F68719776898D1D35F44570232B8A6AB50005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_LoadAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2235D878C31C30D37971FD62EEA7DA3B5B53C869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeObjectPool_1_get_Instance_m36054853A74F1D20AA4E4C2C2DFC79998CF15743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeObjectPool_1_get_Instance_m7248FA12FFC885F38065F9078023C64C52B0F0BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeObjectPool_1_get_Instance_mE469BADACFE5FF3B7B6ABBBA245623E997667B8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m3F526394D19C8DF4C4AD7EB8BDA97257D6A2B8F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mFA7236CEFAC61A9DCDD5C4736E47FE5073C7D53B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m22E818D1BA967E4DC3F28DEA104AD2687BA84EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mDC03DE0D5BF8EDF9499DBE9AD5098251B65821B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m8E9EF37C9368817F4A0D2B351E2E53554BE4128E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mF27A160348E3A4A218F450611E922C73282CDB8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mB8827A8A8C5DB7347B36BF5481A7FEC3FC6FD7F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_mDC38EED0887A359775E0802EF0D4AC11707E0521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetEnumeratorU3Eb__6_0_m7A5B57A33F17AE3B2004B48675BBA4FC2BCC0E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterMsgCenterU3Eb__0_0_m83B43FA8C64108554819699044ED252586C8DA87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__4_0_m06F601A91D1138BA118F94376B02A4A261200305_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__8_0_mF5C624A3DD9AD67122BFBC8DA9DB7C05BF2F3EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__8_1_m3577FEFB2EF720FDA6442C65043C9AB385B2E7B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CCreateUIAsyncU3Eb__0_mF69C4FEFF13B9A2C74175DC2A542DE3DE43CC75E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetPanelsByPanelSearchKeysU3Eb__0_m59F87103B4B71982B5F3679C25766130CF302629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetPanelsByPanelSearchKeysU3Eb__1_mFAFEB5C8DEB9328877E8755FD35B629BA558C760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CLoadPanelPrefabAsyncU3Eb__0_m3A0F6EC97021A66ADCE8A8485DF7F7292445221A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CLoadPanelAsyncU3Eb__0_m656054762AE3C5443FB693370EC7EAEEA9A660B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COpenUIAsyncU3Eb__0_mC00BEF1D9A24FBB70C01062C5CD17F418AC9421D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_1_U3COpenUIAsyncU3Eb__1_m2E42F37CB8F34FA9721258CE286EBC6C482FDB47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTableIndex_2_Add_m0BB75C2BB99E8F80EA27F30E6EF5E9DCDA587EC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTableIndex_2_Add_mC8D4CB5B609BCCDEE7185729C243A2C8A7354693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTableIndex_2_Clear_m4C599EC4706428B46AE2DC67C98F01CC2F957C3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTableIndex_2_Clear_m84A1D71CDC67295222EF6C6CA56F5F00E0D83162_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTableIndex_2_Dispose_m3C102AFF8A8A61AA710C3527780684C4E3E9CC3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTableIndex_2_Dispose_m6C907A8A88C67DDECA94FBC625322F001D7BD0C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTableIndex_2_Get_mC6F212DEAAA5631FECDF2F3554F5F9BA65E9FA2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTableIndex_2_Get_mD866DA017B783442A6893CCF814D820E7AD98294_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTableIndex_2_Remove_mA9985CA1CE2E63F5517A704F9AC56C0493D45E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTableIndex_2_Remove_mBC2CDDA7399164B02638A0BDA1BFA95AC1D058DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTableIndex_2__ctor_m168EB74F87B8A13FDB30D1E6940AAF5D51B8A670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTableIndex_2__ctor_mABE5A1EFAADAC2E7574A852386F4F5EE476E8220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTableIndex_2_get_Dictionary_mFA6197584922387FA66F0E469D0139E77CAA8941_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTable_1_Add_m918C68CFCC29AEB06D94959B39AF3A1C6D960B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTable_1_Clear_mF8155C73457DFE7EBEF805F4A8383DDC52C38947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTable_1_Remove_m87C1D9DBBC892ED7ED7B97F8EB7DC0E57D52314E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIKitTable_1__ctor_m5928DBC345A2D2550E3FDAACB3F07960ABE6B8B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIScrollPageMark_OnScrollPageChanged_m0C4A82A9551F7AC85456C3CB5E2ED416DC3BDB15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_mFFB42BB41504A2CA6E5800FA7D844C42B042A8E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_RemoveListener_mD34E9515F48CC77780900CC01E54AA9099CB5FFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m19CBBBAD5AC28C2C5125AD43BE7174CABFB005A8_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t206DEA78F94BADBB018B41BC86200C9CD911F91E 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>
struct Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t80F7C9915C434E63895C5BFBE7CCA7B0548F0650* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tEAC5EBA6BF6B771F1862084D843BC2273F5C9472* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t83F5697D8C04F521898C0476F440DF82AA1F8F2A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF5C7725AC5610BAAE7F6CC3B047760CD1EBCBC14* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tEACE8F2615D283A94FE4279152C1C1857A5CD594* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0E753798189D869CDC4CEBE3697A16DC15B323E8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>
struct Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1D6AF290EA2533D7B824136C57C72D935C54D912* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t74023E52AF2A355F56880A32CBDCFF2173FA3E63* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD9193AF6E54CA4EDED2BB28ACE644773E9C5A6EC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Linq.EmptyEnumerable`1<System.Object>
struct EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E  : public RuntimeObject
{
};

struct EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E_StaticFields
{
	// TElement[] System.Linq.EmptyEnumerable`1::Instance
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Instance_0;
};

// System.Lazy`1<QFramework.EnumEventSystem>
struct Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998  : public RuntimeObject
{
	// System.LazyHelper modreq(System.Runtime.CompilerServices.IsVolatile) System.Lazy`1::_state
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ____state_0;
	// System.Func`1<T> System.Lazy`1::_factory
	Func_1_t0535C0A8BE107E0782417FB2319D0062C1493860* ____factory_1;
	// T System.Lazy`1::_value
	EnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3* ____value_2;
};

// System.Collections.Generic.List`1<QFramework.IPanel>
struct List_1_tEF9FCF20FCD8D8268719B28DA438E9DA2A6CE5C7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IPanelU5BU5D_t46E9E56BE0677710769CFBA8F18BF3083FC4564E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEF9FCF20FCD8D8268719B28DA438E9DA2A6CE5C7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IPanelU5BU5D_t46E9E56BE0677710769CFBA8F18BF3083FC4564E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<QFramework.UIPanelTesterInfo>
struct List_1_t257F64E122FC6FE6D34458BCBBFEACBB7547F38B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UIPanelTesterInfoU5BU5D_tA7FB6C8D84BFC06C9DCDDEB7FBF9714490B787C2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t257F64E122FC6FE6D34458BCBBFEACBB7547F38B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UIPanelTesterInfoU5BU5D_tA7FB6C8D84BFC06C9DCDDEB7FBF9714490B787C2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t44EF1B9C71532303037AAC259AD8D405401724D8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t44EF1B9C71532303037AAC259AD8D405401724D8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___s_emptyArray_5;
};

// QFramework.Pool`1<QFramework.PanelInfo>
struct Pool_1_tDDA94A54E2031A0778953BB54413901105FD8916  : public RuntimeObject
{
	// QFramework.IObjectFactory`1<T> QFramework.Pool`1::mFactory
	RuntimeObject* ___mFactory_0;
	// System.Collections.Generic.Stack`1<T> QFramework.Pool`1::mCacheStack
	Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659* ___mCacheStack_1;
	// System.Int32 QFramework.Pool`1::mMaxCount
	int32_t ___mMaxCount_2;
};

// QFramework.Pool`1<QFramework.PanelSearchKeys>
struct Pool_1_t1B98576C9AD53AA87CF953C8F2D4E2A68B0E1914  : public RuntimeObject
{
	// QFramework.IObjectFactory`1<T> QFramework.Pool`1::mFactory
	RuntimeObject* ___mFactory_0;
	// System.Collections.Generic.Stack`1<T> QFramework.Pool`1::mCacheStack
	Stack_1_tCE29F24A100928F8242B108523369CB0D152254E* ___mCacheStack_1;
	// System.Int32 QFramework.Pool`1::mMaxCount
	int32_t ___mMaxCount_2;
};

// QFramework.Pool`1<QFramework.QMsg>
struct Pool_1_t16A84CFACDAB35048FB44CADCECB5F8549CB8F7A  : public RuntimeObject
{
	// QFramework.IObjectFactory`1<T> QFramework.Pool`1::mFactory
	RuntimeObject* ___mFactory_0;
	// System.Collections.Generic.Stack`1<T> QFramework.Pool`1::mCacheStack
	Stack_1_tD954276812CCCFE69D928A1193CE6CE09ABA6BEE* ___mCacheStack_1;
	// System.Int32 QFramework.Pool`1::mMaxCount
	int32_t ___mMaxCount_2;
};

// System.Collections.Generic.Stack`1<QFramework.IPanelLoader>
struct Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	IPanelLoaderU5BU5D_t9D9AF80C91947FF1C9162EF83E7E4054ED52D202* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<QFramework.PanelInfo>
struct Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	PanelInfoU5BU5D_tCB7F12947D185A41BD4A856A7D8C52A8D18C03B0* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// QFramework.UIKitTableIndex`2<System.Object,System.Object>
struct UIKitTableIndex_2_t81BD4D9B827B346BE00E36D598EB1F47413446E3  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKeyType,System.Collections.Generic.List`1<TDataItem>> QFramework.UIKitTableIndex`2::mIndex
	Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A* ___mIndex_0;
	// System.Func`2<TDataItem,TKeyType> QFramework.UIKitTableIndex`2::mGetKeyByDataItem
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___mGetKeyByDataItem_1;
};

// QFramework.UIKitTableIndex`2<System.String,QFramework.IPanel>
struct UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKeyType,System.Collections.Generic.List`1<TDataItem>> QFramework.UIKitTableIndex`2::mIndex
	Dictionary_2_t3E050F4CEEB15D846DA61173737D21843561844F* ___mIndex_0;
	// System.Func`2<TDataItem,TKeyType> QFramework.UIKitTableIndex`2::mGetKeyByDataItem
	Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51* ___mGetKeyByDataItem_1;
};

// QFramework.UIKitTableIndex`2<System.Type,QFramework.IPanel>
struct UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKeyType,System.Collections.Generic.List`1<TDataItem>> QFramework.UIKitTableIndex`2::mIndex
	Dictionary_2_t2BFC21CE6FC9720287E25022BC010F4FEB7851E7* ___mIndex_0;
	// System.Func`2<TDataItem,TKeyType> QFramework.UIKitTableIndex`2::mGetKeyByDataItem
	Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169* ___mGetKeyByDataItem_1;
};

// QFramework.UIKitTable`1<QFramework.IPanel>
struct UIKitTable_1_tA37264156B6380B50EDDB9A605962F93E84BC26C  : public RuntimeObject
{
};

// System.Collections.Generic.Dictionary`2/ValueCollection<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>
struct ValueCollection_tD9193AF6E54CA4EDED2BB28ACE644773E9C5A6EC  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550* ____dictionary_0;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// QFramework.AbstractPanelLoaderPool
struct AbstractPanelLoaderPool_tCADA5105A3D1C016C1350D284840109286DF109E  : public RuntimeObject
{
	// System.Collections.Generic.Stack`1<QFramework.IPanelLoader> QFramework.AbstractPanelLoaderPool::mPool
	Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B* ___mPool_0;
};
struct Il2CppArrayBounds;

// QFramework.EnumEventSystem
struct EnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,QFramework.IEasyEvent> QFramework.EnumEventSystem::mEvents
	Dictionary_2_t960645CB0C30F58E63CEE480E200579E9685C9A3* ___mEvents_1;
};

struct EnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3_StaticFields
{
	// QFramework.EnumEventSystem QFramework.EnumEventSystem::Global
	EnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3* ___Global_0;
};

// QFramework.InputFieldEnterSubmitExtensions
struct InputFieldEnterSubmitExtensions_tAB4580E4DCC440676430D5E6641B49A1F3D8F333  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// QFramework.ObjectFactory
struct ObjectFactory_t39D3B8BAA8D50B2C661DF734AD6C025B5A12D548  : public RuntimeObject
{
};

// QFramework.PanelInfo
struct PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94  : public RuntimeObject
{
	// QFramework.IUIData QFramework.PanelInfo::UIData
	RuntimeObject* ___UIData_0;
	// QFramework.UILevel QFramework.PanelInfo::Level
	int32_t ___Level_1;
	// System.String QFramework.PanelInfo::AssetBundleName
	String_t* ___AssetBundleName_2;
	// System.String QFramework.PanelInfo::GameObjName
	String_t* ___GameObjName_3;
	// System.Type QFramework.PanelInfo::PanelType
	Type_t* ___PanelType_4;
	// System.Boolean QFramework.PanelInfo::<IsRecycled>k__BackingField
	bool ___U3CIsRecycledU3Ek__BackingField_5;
};

// QFramework.PanelSearchKeys
struct PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6  : public RuntimeObject
{
	// System.Type QFramework.PanelSearchKeys::PanelType
	Type_t* ___PanelType_0;
	// System.String QFramework.PanelSearchKeys::AssetBundleName
	String_t* ___AssetBundleName_1;
	// System.String QFramework.PanelSearchKeys::GameObjName
	String_t* ___GameObjName_2;
	// QFramework.UILevel QFramework.PanelSearchKeys::Level
	int32_t ___Level_3;
	// QFramework.IUIData QFramework.PanelSearchKeys::UIData
	RuntimeObject* ___UIData_4;
	// QFramework.IPanel QFramework.PanelSearchKeys::Panel
	RuntimeObject* ___Panel_5;
	// QFramework.PanelOpenType QFramework.PanelSearchKeys::OpenType
	int32_t ___OpenType_6;
	// System.Boolean QFramework.PanelSearchKeys::<IsRecycled>k__BackingField
	bool ___U3CIsRecycledU3Ek__BackingField_7;
};

// QFramework.QMgrID
struct QMgrID_t66037E7A3C353C851D08B93265A97A1E038D4CA9  : public RuntimeObject
{
};

// QFramework.QMsg
struct QMsg_t41F187494E15464B020988A12616F24ACA4605C3  : public RuntimeObject
{
	// System.Int32 QFramework.QMsg::<EventID>k__BackingField
	int32_t ___U3CEventIDU3Ek__BackingField_0;
	// System.Boolean QFramework.QMsg::<Processed>k__BackingField
	bool ___U3CProcessedU3Ek__BackingField_1;
	// System.Boolean QFramework.QMsg::<ReuseAble>k__BackingField
	bool ___U3CReuseAbleU3Ek__BackingField_2;
	// System.Boolean QFramework.QMsg::<QFramework.IPoolable.IsRecycled>k__BackingField
	bool ___U3CQFramework_IPoolable_IsRecycledU3Ek__BackingField_3;
};

// QFramework.QMsgSpan
struct QMsgSpan_t321987FAA09C97F02A65BD6D4304762FD301FA35  : public RuntimeObject
{
};

// QFramework.QUICameraUtil
struct QUICameraUtil_tEF71183CF2E7A2DB4DFDF37CF6041F766776DF2B  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// QFramework.UIEffectHelper
struct UIEffectHelper_tC23238CA19EAC6D1152C19B679588D619AA7985C  : public RuntimeObject
{
};

// QFramework.UIKit
struct UIKit_t677A94304C21F268561FFE09EF41745F3802B048  : public RuntimeObject
{
};

struct UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields
{
	// QFramework.UIKitConfig QFramework.UIKit::Config
	UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* ___Config_0;
	// QFramework.UIPanelTable QFramework.UIKit::<Table>k__BackingField
	UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* ___U3CTableU3Ek__BackingField_1;
	// UnityEngine.WaitForEndOfFrame QFramework.UIKit::mWaitForEndOfFrame
	WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* ___mWaitForEndOfFrame_2;
	// QFramework.UIPanelStack QFramework.UIKit::<Stack>k__BackingField
	UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* ___U3CStackU3Ek__BackingField_3;
};

// QFramework.UIKitConfig
struct UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960  : public RuntimeObject
{
	// QFramework.IPanelLoaderPool QFramework.UIKitConfig::PanelLoaderPool
	RuntimeObject* ___PanelLoaderPool_0;
};

// QFramework.UIPanelData
struct UIPanelData_tCA999A7ACF74BA46E578B43B74B5DB2C22660199  : public RuntimeObject
{
};

// QFramework.UIPanelStack
struct UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54  : public RuntimeObject
{
	// System.Collections.Generic.Stack`1<QFramework.PanelInfo> QFramework.UIPanelStack::mUIStack
	Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659* ___mUIStack_0;
};

// QFramework.UIPanelTesterInfo
struct UIPanelTesterInfo_tC8D4797135F1C9FF6264C28E3BDE5DB4E0D75A54  : public RuntimeObject
{
	// System.String QFramework.UIPanelTesterInfo::PanelName
	String_t* ___PanelName_0;
	// QFramework.UILevel QFramework.UIPanelTesterInfo::Level
	int32_t ___Level_1;
};

// QFramework.UIRectTransformExtension
struct UIRectTransformExtension_tD812F9B53A92943E5F3BE9F6E23CE6E7AD247019  : public RuntimeObject
{
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// QFramework.DefaultPanelLoaderPool/DefaultPanelLoader
struct DefaultPanelLoader_tFB0893D574A52EDA4E47C6E3BA7D76664939BA44  : public RuntimeObject
{
	// UnityEngine.GameObject QFramework.DefaultPanelLoaderPool/DefaultPanelLoader::mPanelPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mPanelPrefab_0;
};

// QFramework.UIKitConfig/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558  : public RuntimeObject
{
	// QFramework.IPanelLoader QFramework.UIKitConfig/<>c__DisplayClass3_0::panelLoader
	RuntimeObject* ___panelLoader_0;
	// System.Action`1<QFramework.IPanel> QFramework.UIKitConfig/<>c__DisplayClass3_0::onPanelLoad
	Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* ___onPanelLoad_1;
};

// QFramework.UIManager/<>c
struct U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636  : public RuntimeObject
{
};

struct U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_StaticFields
{
	// QFramework.UIManager/<>c QFramework.UIManager/<>c::<>9
	U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636* ___U3CU3E9_0;
	// System.Func`1<QFramework.QMgrBehaviour> QFramework.UIManager/<>c::<>9__0_0
	Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* ___U3CU3E9__0_0_1;
};

// QFramework.UIManager/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD  : public RuntimeObject
{
	// QFramework.PanelSearchKeys QFramework.UIManager/<>c__DisplayClass17_0::panelSearchKeys
	PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys_0;
	// System.Action`1<QFramework.IPanel> QFramework.UIManager/<>c__DisplayClass17_0::onPanelCreate
	Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* ___onPanelCreate_1;
};

// QFramework.UIManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6  : public RuntimeObject
{
	// QFramework.PanelSearchKeys QFramework.UIManager/<>c__DisplayClass5_0::panelSearchKeys
	PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys_0;
	// System.Action`1<QFramework.IPanel> QFramework.UIManager/<>c__DisplayClass5_0::onLoad
	Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* ___onLoad_1;
};

// QFramework.UIManager/<>c__DisplayClass5_1
struct U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4  : public RuntimeObject
{
	// QFramework.IPanel QFramework.UIManager/<>c__DisplayClass5_1::retPanel
	RuntimeObject* ___retPanel_0;
	// QFramework.UIManager/<>c__DisplayClass5_0 QFramework.UIManager/<>c__DisplayClass5_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* ___CSU24U3CU3E8__locals1_1;
};

// QFramework.UIPanelTable/<>c
struct U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7  : public RuntimeObject
{
};

struct U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields
{
	// QFramework.UIPanelTable/<>c QFramework.UIPanelTable/<>c::<>9
	U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<QFramework.IPanel>>,System.Collections.Generic.IEnumerable`1<QFramework.IPanel>> QFramework.UIPanelTable/<>c::<>9__6_0
	Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346* ___U3CU3E9__6_0_1;
	// System.Func`2<QFramework.IPanel,System.String> QFramework.UIPanelTable/<>c::<>9__8_0
	Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51* ___U3CU3E9__8_0_2;
	// System.Func`2<QFramework.IPanel,System.Type> QFramework.UIPanelTable/<>c::<>9__8_1
	Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169* ___U3CU3E9__8_1_3;
};

// QFramework.UIPanelTable/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B  : public RuntimeObject
{
	// QFramework.PanelSearchKeys QFramework.UIPanelTable/<>c__DisplayClass2_0::panelSearchKeys
	PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys_0;
};

// QFramework.UIPanelTester/<>c
struct U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B  : public RuntimeObject
{
};

struct U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_StaticFields
{
	// QFramework.UIPanelTester/<>c QFramework.UIPanelTester/<>c::<>9
	U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B* ___U3CU3E9_0;
	// System.Action`1<QFramework.UIPanelTesterInfo> QFramework.UIPanelTester/<>c::<>9__4_0
	Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B* ___U3CU3E9__4_0_1;
};

// QFramework.UIPanelTester/<Start>d__4
struct U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D  : public RuntimeObject
{
	// System.Int32 QFramework.UIPanelTester/<Start>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QFramework.UIPanelTester/<Start>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// QFramework.UIPanelTester QFramework.UIPanelTester/<Start>d__4::<>4__this
	UIPanelTester_tE4DD8B776060AF8D1752CA10C960BA50BDA5B968* ___U3CU3E4__this_2;
};

// QFramework.DefaultPanelLoaderPool/DefaultPanelLoader/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030  : public RuntimeObject
{
	// System.Action`1<UnityEngine.GameObject> QFramework.DefaultPanelLoaderPool/DefaultPanelLoader/<>c__DisplayClass2_0::onPanelLoad
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___onPanelLoad_0;
	// UnityEngine.ResourceRequest QFramework.DefaultPanelLoaderPool/DefaultPanelLoader/<>c__DisplayClass2_0::request
	ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* ___request_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>
struct Enumerator_tF9B1C7464F1BFE1675CFE608CC62D4507968CF08 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>
struct Enumerator_tD5BEB5A5644C1BE5F86C5E0D44AF0A2FC7586EA2 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* ____currentValue_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>
struct KeyValuePair_2_t2C2CD31AF0D4AD6CDED20D546227A4FDE94CDB71 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<QFramework.IPanel>>
struct KeyValuePair_2_t53514AC605F6DBC7C9AE4C73131A69D3B2C3E538 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tEF9FCF20FCD8D8268719B28DA438E9DA2A6CE5C7* ___value_1;
};

// QFramework.SafeObjectPool`1<QFramework.PanelInfo>
struct SafeObjectPool_1_t7330D19A20C0FCCDE59BD6E33BE623AA19C1A269  : public Pool_1_tDDA94A54E2031A0778953BB54413901105FD8916
{
};

// QFramework.SafeObjectPool`1<QFramework.PanelSearchKeys>
struct SafeObjectPool_1_t34350C9253C850D7F0788228F3FD5538086145C9  : public Pool_1_t1B98576C9AD53AA87CF953C8F2D4E2A68B0E1914
{
};

// QFramework.SafeObjectPool`1<QFramework.QMsg>
struct SafeObjectPool_1_t1C0D372E01192C783B05AA86B17137498EF8EC0A  : public Pool_1_t16A84CFACDAB35048FB44CADCECB5F8549CB8F7A
{
};

// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>
struct UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// QFramework.DefaultPanelLoaderPool
struct DefaultPanelLoaderPool_tD915239A668ACA79D706C8BF2C8EC5F898394D64  : public AbstractPanelLoaderPool_tCADA5105A3D1C016C1350D284840109286DF109E
{
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// QFramework.UIPanelTable
struct UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427  : public UIKitTable_1_tA37264156B6380B50EDDB9A605962F93E84BC26C
{
	// QFramework.UIKitTableIndex`2<System.String,QFramework.IPanel> QFramework.UIPanelTable::GameObjectNameIndex
	UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* ___GameObjectNameIndex_0;
	// QFramework.UIKitTableIndex`2<System.Type,QFramework.IPanel> QFramework.UIPanelTable::TypeIndex
	UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* ___TypeIndex_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>
struct Enumerator_t8E2DE327BE7C62D7A44BE1A8BA940C7C71339248 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t2C2CD31AF0D4AD6CDED20D546227A4FDE94CDB71 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// QFramework.UIScrollPageChangeEvent
struct UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E  : public UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73
{
};

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ResourceRequest
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t* ___m_Type_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t* ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t* ___m_Type_3;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.EventSystems.BaseEventData>
struct Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48  : public MulticastDelegate_t
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.GameObject>
struct Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C  : public MulticastDelegate_t
{
};

// System.Action`1<QFramework.IPanel>
struct Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<QFramework.UIPanelTesterInfo>
struct Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B  : public MulticastDelegate_t
{
};

// System.Action`1<System.UInt16>
struct Action_1_t2DE95E477A86F144593CC7965E86728C71D0E75D  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32,System.Object[]>
struct Action_2_t7E120AA4A73FA24ADC69BF237235F662C75EC1A6  : public MulticastDelegate_t
{
};

// System.Func`1<QFramework.EnumEventSystem>
struct Func_1_t0535C0A8BE107E0782417FB2319D0062C1493860  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`1<QFramework.QMgrBehaviour>
struct Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<QFramework.IPanel>>,System.Collections.Generic.IEnumerable`1<QFramework.IPanel>>
struct Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346  : public MulticastDelegate_t
{
};

// System.Func`2<QFramework.IPanel,System.Boolean>
struct Func_2_t5610A48963408652A7113BB2878D7128E24434E0  : public MulticastDelegate_t
{
};

// System.Func`2<QFramework.IPanel,System.String>
struct Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51  : public MulticastDelegate_t
{
};

// System.Func`2<QFramework.IPanel,System.Type>
struct Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.Collider>
struct UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.Collider2D>
struct UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.Collision>
struct UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.Collision2D>
struct UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.PointerEventData>
struct UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<System.Int32,System.Int32>
struct UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// QFramework.AbstractBind
struct AbstractBind_tF8CC7B2188CD4A3A99FF0BF55711A3015708A09C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// QFramework.BindType QFramework.AbstractBind::MarkType
	int32_t ___MarkType_4;
	// System.String QFramework.AbstractBind::CustomComponentName
	String_t* ___CustomComponentName_5;
	// System.String QFramework.AbstractBind::CustomComment
	String_t* ___CustomComment_6;
	// System.String QFramework.AbstractBind::mComponentName
	String_t* ___mComponentName_7;
};

// QFramework.CollisionTriggerListener
struct CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Dictionary`2<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase> QFramework.CollisionTriggerListener::mEvents
	Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550* ___mEvents_4;
};

// QFramework.DontDestroyOnLoad
struct DontDestroyOnLoad_t278FC7E476B71320A492482109AD26C71AA09135  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_tAEBFB7A16CA99343EA87722F78884BF8646BAE1B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::m_Delegates
	List_1_tA70D786D375D198C77EBB594AE632A6DFC82A440* ___m_Delegates_4;
};

// QFramework.Hide
struct Hide_tD028ED8ECE24F37F86A1FCAEE4255E30B26FEB6A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// QFramework.InputFieldEnterSubmitTrigger
struct InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField QFramework.InputFieldEnterSubmitTrigger::mInputField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___mInputField_4;
	// UnityEngine.Events.UnityEvent QFramework.InputFieldEnterSubmitTrigger::OnEnterSubmit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnEnterSubmit_5;
};

// QFramework.QMonoBehaviour
struct QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean QFramework.QMonoBehaviour::mReceiveMsgOnlyObjActive
	bool ___mReceiveMsgOnlyObjActive_4;
	// System.Collections.Generic.List`1<System.UInt16> QFramework.QMonoBehaviour::mPrivateEventIds
	List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* ___mPrivateEventIds_5;
};

// QFramework.QMsgCenter
struct QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Func`1<QFramework.QMgrBehaviour>> QFramework.QMsgCenter::mRegisteredManagers
	Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* ___mRegisteredManagers_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// QFramework.UIPanelTester
struct UIPanelTester_tE4DD8B776060AF8D1752CA10C960BA50BDA5B968  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String QFramework.UIPanelTester::PanelName
	String_t* ___PanelName_4;
	// QFramework.UILevel QFramework.UIPanelTester::Level
	int32_t ___Level_5;
	// System.Collections.Generic.List`1<QFramework.UIPanelTesterInfo> QFramework.UIPanelTester::mOtherPanels
	List_1_t257F64E122FC6FE6D34458BCBBFEACBB7547F38B* ___mOtherPanels_6;
};

// QFramework.UIPointerDownEventListener
struct UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.PointerEventData> QFramework.UIPointerDownEventListener::OnPointerDownEvent
	UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10* ___OnPointerDownEvent_4;
};

// QFramework.UIPointerUpEventListener
struct UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.PointerEventData> QFramework.UIPointerUpEventListener::OnPointerUpEvent
	UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10* ___OnPointerUpEvent_4;
};

// QFramework.UIRoot
struct UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera QFramework.UIRoot::UICamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___UICamera_4;
	// UnityEngine.Canvas QFramework.UIRoot::Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___Canvas_5;
	// UnityEngine.UI.CanvasScaler QFramework.UIRoot::CanvasScaler
	CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* ___CanvasScaler_6;
	// UnityEngine.UI.GraphicRaycaster QFramework.UIRoot::GraphicRaycaster
	GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* ___GraphicRaycaster_7;
	// UnityEngine.RectTransform QFramework.UIRoot::Bg
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___Bg_8;
	// UnityEngine.RectTransform QFramework.UIRoot::Common
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___Common_9;
	// UnityEngine.RectTransform QFramework.UIRoot::PopUI
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___PopUI_10;
	// UnityEngine.RectTransform QFramework.UIRoot::CanvasPanel
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___CanvasPanel_11;
};

struct UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_StaticFields
{
	// QFramework.UIRoot QFramework.UIRoot::mInstance
	UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* ___mInstance_12;
};

// QFramework.UIScrollPage
struct UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.ScrollRect QFramework.UIScrollPage::rect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___rect_4;
	// System.Collections.Generic.List`1<System.Single> QFramework.UIScrollPage::pages
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___pages_5;
	// System.Int32 QFramework.UIScrollPage::currentPageIndex
	int32_t ___currentPageIndex_6;
	// System.Single QFramework.UIScrollPage::smooting
	float ___smooting_7;
	// System.Single QFramework.UIScrollPage::targethorizontal
	float ___targethorizontal_8;
	// System.Boolean QFramework.UIScrollPage::isDrag
	bool ___isDrag_9;
	// QFramework.UIScrollPageChangeEvent QFramework.UIScrollPage::mOnPageChanged
	UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E* ___mOnPageChanged_10;
	// System.Single QFramework.UIScrollPage::startime
	float ___startime_11;
	// System.Single QFramework.UIScrollPage::delay
	float ___delay_12;
};

// QFramework.UIScrollPageMark
struct UIScrollPageMark_t16503C11D9E31C26B5196596E06A6F5EB0E5AA1C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// QFramework.UIScrollPage QFramework.UIScrollPageMark::scrollPage
	UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* ___scrollPage_4;
	// UnityEngine.UI.ToggleGroup QFramework.UIScrollPageMark::toggleGroup
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___toggleGroup_5;
	// UnityEngine.UI.Toggle QFramework.UIScrollPageMark::togglePrefab
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___togglePrefab_6;
	// UnityEngine.Vector2 QFramework.UIScrollPageMark::centerPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___centerPos_7;
	// UnityEngine.Vector2 QFramework.UIScrollPageMark::interval
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___interval_8;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> QFramework.UIScrollPageMark::toggleList
	List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* ___toggleList_9;
};

// QFramework.UISpriteAnimation
struct UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image QFramework.UISpriteAnimation::mImageSource
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___mImageSource_4;
	// System.Int32 QFramework.UISpriteAnimation::mCurFrame
	int32_t ___mCurFrame_5;
	// System.Single QFramework.UISpriteAnimation::mDelta
	float ___mDelta_6;
	// System.Single QFramework.UISpriteAnimation::FPS
	float ___FPS_7;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> QFramework.UISpriteAnimation::SpriteFrames
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ___SpriteFrames_8;
	// System.Boolean QFramework.UISpriteAnimation::IsPlaying
	bool ___IsPlaying_9;
	// System.Boolean QFramework.UISpriteAnimation::Forward
	bool ___Forward_10;
	// System.Boolean QFramework.UISpriteAnimation::AutoPlay
	bool ___AutoPlay_11;
	// System.Boolean QFramework.UISpriteAnimation::Loop
	bool ___Loop_12;
};

// QFramework.Bind
struct Bind_t947EE9A19F6EA255E71344FE6CF8BB895C48FE5E  : public AbstractBind_tF8CC7B2188CD4A3A99FF0BF55711A3015708A09C
{
};

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;
	// System.Boolean UnityEngine.UI.CanvasScaler::m_PresetInfoIsWorld
	bool ___m_PresetInfoIsWorld_18;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// QFramework.QMgrBehaviour
struct QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571  : public QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE
{
	// System.Lazy`1<QFramework.EnumEventSystem> QFramework.QMgrBehaviour::mEventSystem
	Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998* ___mEventSystem_6;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.ToggleGroup::m_AllowSwitchOff
	bool ___m_AllowSwitchOff_4;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::m_Toggles
	List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* ___m_Toggles_5;
};

// QFramework.UIElement
struct UIElement_tAC0710DF9804BF65C117D16DB98DA328983C2DDA  : public QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE
{
};

// QFramework.UIEventListener
struct UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50  : public EventTrigger_tAEBFB7A16CA99343EA87722F78884BF8646BAE1B
{
	// System.Action QFramework.UIEventListener::onClick
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onClick_5;
	// System.Action`1<UnityEngine.GameObject> QFramework.UIEventListener::onSelect
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___onSelect_6;
	// System.Action`1<UnityEngine.GameObject> QFramework.UIEventListener::onUpdateSelect
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___onUpdateSelect_7;
	// System.Action`1<UnityEngine.EventSystems.BaseEventData> QFramework.UIEventListener::onPointerDown
	Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* ___onPointerDown_8;
	// System.Action`1<UnityEngine.EventSystems.BaseEventData> QFramework.UIEventListener::onPointerEnter
	Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* ___onPointerEnter_9;
	// System.Action`1<UnityEngine.EventSystems.BaseEventData> QFramework.UIEventListener::onPointerExit
	Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* ___onPointerExit_10;
	// System.Action`1<UnityEngine.EventSystems.BaseEventData> QFramework.UIEventListener::onPointerUp
	Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* ___onPointerUp_11;
	// System.Action`1<UnityEngine.EventSystems.BaseEventData> QFramework.UIEventListener::onBeginDrag
	Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* ___onBeginDrag_12;
	// System.Action`1<UnityEngine.EventSystems.BaseEventData> QFramework.UIEventListener::onEndDrag
	Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* ___onEndDrag_13;
	// System.Action`1<UnityEngine.EventSystems.BaseEventData> QFramework.UIEventListener::onDrag
	Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* ___onDrag_14;
	// System.Action`1<System.Boolean> QFramework.UIEventListener::onValueChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___onValueChanged_15;
};

// QFramework.UIPanel
struct UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20  : public QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE
{
	// QFramework.IPanelLoader QFramework.UIPanel::<QFramework.IPanel.Loader>k__BackingField
	RuntimeObject* ___U3CQFramework_IPanel_LoaderU3Ek__BackingField_6;
	// QFramework.PanelInfo QFramework.UIPanel::<Info>k__BackingField
	PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* ___U3CInfoU3Ek__BackingField_7;
	// QFramework.PanelState QFramework.UIPanel::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_8;
	// QFramework.IUIData QFramework.UIPanel::mUIData
	RuntimeObject* ___mUIData_9;
	// System.Action QFramework.UIPanel::mOnClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___mOnClosed_10;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_23;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_24;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_25;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_26;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_27;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_28;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_29;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_30;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_31;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_32;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_33;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_34;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_35;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_37;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_38;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_39;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_40;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_41;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_42;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_43;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_46;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_47;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_48;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_49;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_50;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_51;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_52;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_53;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_54;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_55;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_56;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_59;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_60;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_63;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_64;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_65;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_66;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_67;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_68;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_69;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_70;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_73;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// QFramework.UIComponent
struct UIComponent_tD71F161B7797022816ACB048A5B1BDF9BCA8CF52  : public UIElement_tAC0710DF9804BF65C117D16DB98DA328983C2DDA
{
};

// QFramework.UIDefaultPanel
struct UIDefaultPanel_tE158BCCC507134C0EFFC242D14CF15046B9A5EE3  : public UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20
{
};

// QFramework.UIElementList
struct UIElementList_t17FB3B0FDC6DB642C89908091BA0C5B17942A5F7  : public UIElement_tAC0710DF9804BF65C117D16DB98DA328983C2DDA
{
};

// QFramework.UIManager
struct UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6  : public QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571
{
};

struct UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6_StaticFields
{
	// QFramework.UIManager QFramework.UIManager::mInstance
	UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* ___mInstance_7;
};

// QFramework.UIMark
struct UIMark_t0FE387637E9A739E091ED288404447699A835217  : public Bind_t947EE9A19F6EA255E71344FE6CF8BB895C48FE5E
{
};

// QFramework.Empty4Raycast
struct Empty4Raycast_t0920D6E8EAEDB9B05A365D52F3329432DEA41461  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E_gshared (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_gshared (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, int32_t ___arg00, int32_t ___arg11, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_mFFB42BB41504A2CA6E5800FA7D844C42B042A8E5_gshared (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_mD34E9515F48CC77780900CC01E54AA9099CB5FFC_gshared (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_mC2BCDA5864306C7135BD04719230392666619DD7_gshared (UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T QFramework.MonoSingletonProperty`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonoSingletonProperty_1_get_Instance_m46E6AB62A425A76963ADE844460CE84CA339529D_gshared (const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void QFramework.UIKitTable`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKitTable_1_Clear_m7FFEFD0AD281957DBFCE6F1B10CF23A2EE577774_gshared (UIKitTable_1_t5CA8EC2EA1241D835F91AAD16C6D00E912A470C3* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::LastOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_LastOrDefault_TisRuntimeObject_mE231532F99113B070AA9ADE81C5C65C02F32137A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void QFramework.UIKitTable`1<System.Object>::Remove(TDataItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKitTable_1_Remove_m3B42CC9DBBC36E4A860162F196567742ED5AF4C7_gshared (UIKitTable_1_t5CA8EC2EA1241D835F91AAD16C6D00E912A470C3* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void QFramework.UIKitTable`1<System.Object>::Add(TDataItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKitTable_1_Add_mFEDFB5F8C4F4F6E29D4C33BE35A36A0516E7F806_gshared (UIKitTable_1_t5CA8EC2EA1241D835F91AAD16C6D00E912A470C3* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m777839BF9CB9F96B081106B47202D06FB35326CA_gshared_inline (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// QFramework.SafeObjectPool`1<T> QFramework.SafeObjectPool`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeObjectPool_1_t73BF818AB38FF94B7DEB8D5A485D353870E066B5* SafeObjectPool_1_get_Instance_mFAC144819A7125857D80A53F8D654B4326DACA75_gshared (const RuntimeMethod* method) ;
// T System.Lazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lazy_1_get_Value_mC3D475ED3C0FAB4E8BCC96FBF5EF49ED671B86A4_gshared (Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E* __this, const RuntimeMethod* method) ;
// System.Void QFramework.EnumEventSystem::Send<System.Int32>(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumEventSystem_Send_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC012FAEFA78C74FE727A5652E48CFDBE295E34C_gshared (EnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3* __this, int32_t ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Lazy`1<System.Object>::get_IsValueCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lazy_1_get_IsValueCreated_m39248E19CF823CC31D8FFA6F16D811425D04DEBE_gshared (Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E* __this, const RuntimeMethod* method) ;
// System.Void System.Lazy`1<System.Object>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_m4CD0C5ACC0541018DB9BDB090B1EFE67D5A9CEF1_gshared (Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___valueFactory0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.UInt16>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2EAAD0E7DA413138F7E7B4E79A0122FB0580D409_gshared (Action_1_t2DE95E477A86F144593CC7965E86728C71D0E75D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.UInt16>::ForEach(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m18C64358B46891D5D938600939E6DD5961FEEF7A_gshared (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* __this, Action_1_t2DE95E477A86F144593CC7965E86728C71D0E75D* ___action0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDA6AAE251F341EFE027F981417F43A88B5ADFA3B_gshared (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE8DA76229BFE3CE94CA3DEF078C8B6F71B3615BF_gshared (Action_2_tF55503802357CB8A9E95ED4B00CEEEE6BDEC9166* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void QFramework.MonoSingletonProperty`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoSingletonProperty_1_Dispose_mEDC14EE643A8EA61CF593068F915DAA57F322C0C_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m25F8C6095172E75DEE8A43E857889659DFC4DCE9_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// UnityEngine.ResourceRequest UnityEngine.Resources::LoadAsync<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* Resources_LoadAsync_TisRuntimeObject_m5384D8833B760C9FA8EBDCC6692FDEDE2325C542_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TDataItem> QFramework.UIKitTableIndex`2<System.Object,System.Object>::Get(TKeyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIKitTableIndex_2_Get_mD917B535DD175DEC5B67CE6E49C32AC290F82A34_gshared (UIKitTableIndex_2_t81BD4D9B827B346BE00E36D598EB1F47413446E3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_m42BB34F154440C9F0AC402FC3E9BD08C8D678F21_gshared_inline (const RuntimeMethod* method) ;
// System.Void QFramework.UIKitTableIndex`2<System.Object,System.Object>::Add(TDataItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKitTableIndex_2_Add_mD6812A46CFBF2C6B04D41E8D0031A8D904E5DB6D_gshared (UIKitTableIndex_2_t81BD4D9B827B346BE00E36D598EB1F47413446E3* __this, RuntimeObject* ___dataItem0, const RuntimeMethod* method) ;
// System.Void QFramework.UIKitTableIndex`2<System.Object,System.Object>::Remove(TDataItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKitTableIndex_2_Remove_m5B15370DDA53AC681A77C19FB36C809489100A74_gshared (UIKitTableIndex_2_t81BD4D9B827B346BE00E36D598EB1F47413446E3* __this, RuntimeObject* ___dataItem0, const RuntimeMethod* method) ;
// System.Void QFramework.UIKitTableIndex`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKitTableIndex_2_Clear_m26EB2B9BB529F70A8C1FC419BA777B6CB782E7D0_gshared (UIKitTableIndex_2_t81BD4D9B827B346BE00E36D598EB1F47413446E3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<TKeyType,System.Collections.Generic.List`1<TDataItem>> QFramework.UIKitTableIndex`2<System.Object,System.Object>::get_Dictionary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UIKitTableIndex_2_get_Dictionary_mC6E245E79BC07009FC0A47C9E0F07311E951CBB6_gshared_inline (UIKitTableIndex_2_t81BD4D9B827B346BE00E36D598EB1F47413446E3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_mEA140C9E662772A7037DE9BE5B1C74D0CB2088FF_gshared (RuntimeObject* ___source0, Func_2_t10FDFF9EE1C80F76FB5C31BA1D127F21CF49F9DA* ___selector1, const RuntimeMethod* method) ;
// System.Void QFramework.UIKitTableIndex`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKitTableIndex_2_Dispose_mD95CB7BD7734568BE12ABC4C0E3CBD01C2228BC3_gshared (UIKitTableIndex_2_t81BD4D9B827B346BE00E36D598EB1F47413446E3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void QFramework.UIKitTableIndex`2<System.Object,System.Object>::.ctor(System.Func`2<TDataItem,TKeyType>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKitTableIndex_2__ctor_m27EA12DF6D31BAA8BC90EB9BA74B9B595A101378_gshared (UIKitTableIndex_2_t81BD4D9B827B346BE00E36D598EB1F47413446E3* __this, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___keyGetter0, const RuntimeMethod* method) ;
// System.Void QFramework.UIKitTable`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKitTable_1__ctor_m37878435CF1407BED2830110B19C1389E333CCD6_gshared (UIKitTable_1_t5CA8EC2EA1241D835F91AAD16C6D00E912A470C3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D* Dictionary_2_get_Values_m88548D48A871D5B79DB4BAAB82C62D4D61568F64_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF9B1C7464F1BFE1675CFE608CC62D4507968CF08 ValueCollection_GetEnumerator_m412091D90257E6493D8F9404FFC734832E1C5007_gshared (ValueCollection_tB299C06E8B49BF406A8E6B012CEB2F5086FD124D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m51A04B4A4A98EC6004015ECF7C9605316687CBD3_gshared (Enumerator_tF9B1C7464F1BFE1675CFE608CC62D4507968CF08* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m76B0ECD4B03E606A1CE3DF60589D2E97130B02CA_gshared_inline (Enumerator_tF9B1C7464F1BFE1675CFE608CC62D4507968CF08* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32Enum,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m30C883F9DF743472B2102F74D70DA61074694D1E_gshared (Enumerator_tF9B1C7464F1BFE1675CFE608CC62D4507968CF08* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m763AA956A8325F527F831F49E2563FF2871A680E_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void QFramework.CollisionTriggerListener::Register<System.Object>(QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_Register_TisRuntimeObject_m85F30F161933FF62AC6F9535D2F16863D615B9AA_gshared (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___action1, const RuntimeMethod* method) ;
// System.Void QFramework.CollisionTriggerListener::UnRegister<System.Object>(QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_UnRegister_TisRuntimeObject_mDA274528EB9B11B292C972341828FC338C034AF5_gshared (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___action1, const RuntimeMethod* method) ;
// System.Void QFramework.CollisionTriggerListener::Dispatch<System.Object>(QFramework.CollisionTriggerListener/EventName,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_Dispatch_TisRuntimeObject_mB1BA98DB10BE8ED1262B4E182FDDF548B5A2253D_gshared (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m511E687BF2424F8D832EA2EAA459870887FB9540_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method) ;

// System.Void QFramework.UIElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElement__ctor_m396A17C7564709B22FABBB9300CA0FEEA635D954 (UIElement_tAC0710DF9804BF65C117D16DB98DA328983C2DDA* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// QFramework.UIManager QFramework.UIManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922 (const RuntimeMethod* method) ;
// System.Void QFramework.QMonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour__ctor_m0AEFE0C4875C9FAB938D75B8767C4AA972AE72E9 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::.ctor()
inline void UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73*, const RuntimeMethod*))UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.ScrollRect>()
inline ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void QFramework.UIScrollPage::UpdatePages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPage_UpdatePages_mC8A2D3649C9F1E8A7F656A3E2A4BE1C1962AA0EC (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline)(__this, method);
}
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScrollRect_get_horizontalNormalizedPosition_mC2C3A7F67E27AA7470A81042AD2B0AD0B5F1AF93 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_horizontalNormalizedPosition_m9B268C9AE7891FC73623DC7BE6B9900640C029B6 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, int32_t ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73*, int32_t, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_gshared)(__this, ___arg00, ___arg11, method);
}
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___index0, method);
}
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
inline void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___item0, method);
}
// System.Void QFramework.UIScrollPage::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPage_OnEndDrag_m1E091107BA588F82AE47EF83C4E0AA21A0A15B76 (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void QFramework.UIScrollPageChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPageChangeEvent__ctor_m784D1625C386B0E6FDC3FFA6332C2C3D4DB0AEEF (UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_AddListener_mFFB42BB41504A2CA6E5800FA7D844C42B042A8E5 (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73*, UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5*, const RuntimeMethod*))UnityEvent_2_AddListener_mFFB42BB41504A2CA6E5800FA7D844C42B042A8E5_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_RemoveListener_mD34E9515F48CC77780900CC01E54AA9099CB5FFC (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73*, UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5*, const RuntimeMethod*))UnityEvent_2_RemoveListener_mD34E9515F48CC77780900CC01E54AA9099CB5FFC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void QFramework.UIScrollPageMark::AdjustTogglePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPageMark_AdjustTogglePos_m294AE94EB43B2F7E2AEF24A458162DCA69D065AC (UIScrollPageMark_t16503C11D9E31C26B5196596E06A6F5EB0E5AA1C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mC2BCDA5864306C7135BD04719230392666619DD7 (UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_mC2BCDA5864306C7135BD04719230392666619DD7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void QFramework.UIScrollPage::AddPageChangeListener(UnityEngine.Events.UnityAction`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPage_AddPageChangeListener_m96F3FD274266EC4C5791903C78BC21DADE8793E9 (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5* ___listener0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Count()
inline int32_t List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.UI.Toggle QFramework.UIScrollPageMark::CreateToggle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* UIScrollPageMark_CreateToggle_m0B13471006C7704B0B5A6454B8E61DD09C16519A (UIScrollPageMark_t16503C11D9E31C26B5196596E06A6F5EB0E5AA1C* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Add(T)
inline void List_1_Add_m0B0674E845F360FA8837AEA0100C3500E3E4FE47_inline (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Remove(T)
inline bool List_1_Remove_m5C6866E1EB26B4EE88B075D305895349483BBA07 (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.UI.Toggle>(T)
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m15557773C5C7B03FA319A668FB60FD7A945F5A16 (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___original0, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mB3B310D2D0CAE78AFB2AE6A9FD2902DE4B359211_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor()
inline void List_1__ctor_m4551F4DE4ED2A15E985982AD4322456CE52C5E2B (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Func`1<QFramework.QMgrBehaviour>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m484ADE26CBCCAE8C3D51B7C0FFBB02EBFCB14CE3 (Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void QFramework.QMsgCenter::RegisterManagerFactory(System.Int32,System.Func`1<QFramework.QMgrBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsgCenter_RegisterManagerFactory_m9BA8AA3E19E517E746761539981437D5A4D113A6 (int32_t ___mgrId0, Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* ___managerFactory1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// QFramework.UIRoot QFramework.UIRoot::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* UIRoot_get_Instance_m600B5A4DA38A154E2C09DB791A310039D73FF097 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T QFramework.MonoSingletonProperty`1<QFramework.UIManager>::get_Instance()
inline UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* MonoSingletonProperty_1_get_Instance_mEEA008E114B920B46059D7B8916F6E6FBE3867D6 (const RuntimeMethod* method)
{
	return ((  UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* (*) (const RuntimeMethod*))MonoSingletonProperty_1_get_Instance_m46E6AB62A425A76963ADE844460CE84CA339529D_gshared)(method);
}
// System.Void QFramework.UIManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m4C47D5A30DBD5DE03D8FE8BC715F9A0DA7B0D7A4 (U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* __this, const RuntimeMethod* method) ;
// System.Void QFramework.UIManager/<>c__DisplayClass5_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_1__ctor_m8F32AEAEC22DAB8384CB8C1D096D5E5AE912EAB6 (U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* __this, const RuntimeMethod* method) ;
// QFramework.UIPanelTable QFramework.UIKit::get_Table()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<QFramework.IPanel> QFramework.UIPanelTable::GetPanelsByPanelSearchKeys(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIPanelTable_GetPanelsByPanelSearchKeys_m9D881B3CC4765394EADCD559E46A5B30CB646874 (UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<QFramework.IPanel>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared)(___source0, method);
}
// System.Void System.Action`1<QFramework.IPanel>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4975B7FAFBBB51CBF36FF6936FB67334DAE65BC6 (Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void QFramework.UIManager::CreateUIAsync(QFramework.PanelSearchKeys,System.Action`1<QFramework.IPanel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_CreateUIAsync_m161D8CB646367F65257132FB0B83A3F1AC7ED803 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* ___onPanelCreate1, const RuntimeMethod* method) ;
// System.Void System.Action`1<QFramework.IPanel>::Invoke(T)
inline void Action_1_Invoke_m1D681E7EF8E6EAFA970F74982AE00F9EB9097F8A_inline (Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// QFramework.IPanel QFramework.UIManager::CreateUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIManager_CreateUI_mA1E9CB1AB1D6ADFCE457B19619158C6C2CB94786 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) ;
// System.Void QFramework.PanelInfo::Recycle2Cache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelInfo_Recycle2Cache_mF1AA6D25408D398B8FCC6C27E4D4526E6E2F2F19 (PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* __this, const RuntimeMethod* method) ;
// System.Void QFramework.UIKitTable`1<QFramework.IPanel>::Clear()
inline void UIKitTable_1_Clear_mF8155C73457DFE7EBEF805F4A8383DDC52C38947 (UIKitTable_1_tA37264156B6380B50EDDB9A605962F93E84BC26C* __this, const RuntimeMethod* method)
{
	((  void (*) (UIKitTable_1_tA37264156B6380B50EDDB9A605962F93E84BC26C*, const RuntimeMethod*))UIKitTable_1_Clear_m7FFEFD0AD281957DBFCE6F1B10CF23A2EE577774_gshared)(__this, method);
}
// TSource System.Linq.Enumerable::LastOrDefault<QFramework.IPanel>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_LastOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_mAD4458B5818241C93A31F3E99C3560ECE93F5A81 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_LastOrDefault_TisRuntimeObject_mE231532F99113B070AA9ADE81C5C65C02F32137A_gshared)(___source0, method);
}
// System.Void QFramework.UIKitTable`1<QFramework.IPanel>::Remove(TDataItem)
inline void UIKitTable_1_Remove_m87C1D9DBBC892ED7ED7B97F8EB7DC0E57D52314E (UIKitTable_1_tA37264156B6380B50EDDB9A605962F93E84BC26C* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (UIKitTable_1_tA37264156B6380B50EDDB9A605962F93E84BC26C*, RuntimeObject*, const RuntimeMethod*))UIKitTable_1_Remove_m3B42CC9DBBC36E4A860162F196567742ED5AF4C7_gshared)(__this, ___item0, method);
}
// QFramework.UIRoot QFramework.UIKit::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* UIKit_get_Root_mA74A7A274AD69093AC4504C4D792D4744B22309B (const RuntimeMethod* method) ;
// System.Void QFramework.UIRoot::SetLevelOfPanel(QFramework.UILevel,QFramework.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRoot_SetLevelOfPanel_m74415AED6A4052FB4FBC62AB045C47254EB045C7 (UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* __this, int32_t ___level0, RuntimeObject* ___panel1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// QFramework.PanelInfo QFramework.PanelInfo::Allocate(System.String,QFramework.UILevel,QFramework.IUIData,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* PanelInfo_Allocate_m2724CE5A38628FAB9502A1126C787E046AB00A32 (String_t* ___gameObjName0, int32_t ___level1, RuntimeObject* ___uiData2, Type_t* ___panelType3, String_t* ___assetBundleName4, const RuntimeMethod* method) ;
// System.Void QFramework.UIKitTable`1<QFramework.IPanel>::Add(TDataItem)
inline void UIKitTable_1_Add_m918C68CFCC29AEB06D94959B39AF3A1C6D960B80 (UIKitTable_1_tA37264156B6380B50EDDB9A605962F93E84BC26C* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (UIKitTable_1_tA37264156B6380B50EDDB9A605962F93E84BC26C*, RuntimeObject*, const RuntimeMethod*))UIKitTable_1_Add_mFEDFB5F8C4F4F6E29D4C33BE35A36A0516E7F806_gshared)(__this, ___item0, method);
}
// System.Void QFramework.UIManager/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m54962EAAB514FC487B365C9078862B352666B54D (U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD* __this, const RuntimeMethod* method) ;
// System.Void QFramework.QMgrBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMgrBehaviour__ctor_mA895E14A70A02214B13C32EC8EDBC97BC5B44943 (QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571* __this, const RuntimeMethod* method) ;
// System.Void QFramework.UIManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m248FFB92E658F840B28303447BDAEEFBC6C493B2 (U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic__ctor_mD2E256F950AAAE0E2445971361B5C54D2066E4C2 (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::set_useLegacyMeshGeneration(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Graphic_set_useLegacyMeshGeneration_m8069890AE2F389C73D944941BB8462C44EB32EC9_inline (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera QFramework.UIRoot::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* UIRoot_get_Camera_m4C3154E6DEED7FCF3AF11784FB0E3CFB0A746EE1_inline (UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera QFramework.QUICameraUtil::get_UICamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* QUICameraUtil_get_UICamera_m861453C30FAC45743854EE43C8BC44A2B1DEEE84 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.PointerEventData>::Invoke(T0)
inline void UnityAction_1_Invoke_m06791755518396D775050F6FD21EDB9238177870_inline (UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10*, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*, const RuntimeMethod*))UnityAction_1_Invoke_m777839BF9CB9F96B081106B47202D06FB35326CA_gshared_inline)(__this, ___arg00, method);
}
// T UnityEngine.GameObject::GetComponent<QFramework.UIPointerDownEventListener>()
inline UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* GameObject_GetComponent_TisUIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7_mFDD5D7E8BCF6EEB585D913DF256B71B9B68CF821 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<QFramework.UIPointerDownEventListener>()
inline UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* GameObject_AddComponent_TisUIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7_m4AE84BC76390946A9EDBDD9184A81C0B96F977C2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// QFramework.UIPointerDownEventListener QFramework.UIPointerDownEventListener::CheckAndAddListener(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* UIPointerDownEventListener_CheckAndAddListener_mF59EE17B0AA6758FBF83418DA1BB539A66B7A7DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<QFramework.UIPointerUpEventListener>()
inline UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* GameObject_GetComponent_TisUIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B_m17E432CC9714FE8F652AE061E6BF5266DFB45886 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<QFramework.UIPointerUpEventListener>()
inline UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* GameObject_AddComponent_TisUIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B_m0F78E39793658B0DADB0012F148ED55280CB78E3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// QFramework.UIPointerUpEventListener QFramework.UIPointerUpEventListener::CheckAndAddListener(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* UIPointerUpEventListener_CheckAndAddListener_mFA1E7F6D176DEE4B4BB2EE6EF60027D1067CC8F4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_RectangleContainsScreenPoint_mAD33D83F019F2E0C4BCE2D743175A042A233616A (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPoint1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 QFramework.UIRectTransformExtension::ToScreenPoint(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIRectTransformExtension_ToScreenPoint_m4D799A6A4D34052D17CCF1BF68D38FDE0FF34BCE (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___selfRectTrans0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Count()
inline int32_t List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void QFramework.UISpriteAnimation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISpriteAnimation_Play_m7D0850FBBA1245C096DAAE7EAE411E4BD5FFB9CF (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Int32 QFramework.UISpriteAnimation::get_FrameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UISpriteAnimation_get_FrameCount_m452F4E1D70B6F4A3312356AA4DCB7E57B88EDCA9 (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, const RuntimeMethod* method) ;
// System.Void QFramework.UISpriteAnimation::SetSprite(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISpriteAnimation_SetSprite_m519E36DD3644AF4063ED21D82E7873D6EBD41C22 (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, int32_t ___idx0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<QFramework.InputFieldEnterSubmitTrigger>()
inline InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* Component_GetComponent_TisInputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552_m3F89193E0E421E828163AF39C42F6BE7E2591A31 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<QFramework.InputFieldEnterSubmitTrigger>()
inline InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* GameObject_AddComponent_TisInputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552_mB9FB7602F2F75379967B6FFEFFA5F41887D6A44B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.InputField>()
inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.InputField::set_lineType(UnityEngine.UI.InputField/LineType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_lineType_m06BE148366DF8F17E0F91C3CF094628C201B5FD8 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::get_onValidateInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* InputField_get_onValidateInput_m370D93274B6040422092981DD3A34E4B88E96EBC_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField/OnValidateInput::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValidateInput__ctor_mDC0454BF264F87154EF8694821905B5A6A587A29 (OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_onValidateInput(UnityEngine.UI.InputField/OnValidateInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_onValidateInput_m3A3FA74285B9BBA68325A91AA862201AF3A18CE4 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___value0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// QFramework.SafeObjectPool`1<T> QFramework.SafeObjectPool`1<QFramework.QMsg>::get_Instance()
inline SafeObjectPool_1_t1C0D372E01192C783B05AA86B17137498EF8EC0A* SafeObjectPool_1_get_Instance_m7248FA12FFC885F38065F9078023C64C52B0F0BC (const RuntimeMethod* method)
{
	return ((  SafeObjectPool_1_t1C0D372E01192C783B05AA86B17137498EF8EC0A* (*) (const RuntimeMethod*))SafeObjectPool_1_get_Instance_mFAC144819A7125857D80A53F8D654B4326DACA75_gshared)(method);
}
// System.Void QFramework.QMsg::set_Processed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QMsg_set_Processed_mD44149B403063980FEF287A92416B0CA96E892F0_inline (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void QFramework.QMonoBehaviour::Process(System.Int32,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_Process_m56EA7C201022216768BE96043062EB0CEEF52729 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, int32_t ___eventId0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___param1, const RuntimeMethod* method) ;
// QFramework.QMsgCenter QFramework.QMsgCenter::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604* QMsgCenter_get_Instance_mC967B5FB5AAAAED3692D2E7CD7F9910B9CA21DB9 (const RuntimeMethod* method) ;
// System.Void QFramework.QMsgCenter::SendMsg(QFramework.IMsg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsgCenter_SendMsg_m7EC252D53E5739E26750396B4E102DC71020DE25 (QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604* __this, RuntimeObject* ___tmpMsg0, const RuntimeMethod* method) ;
// T System.Lazy`1<QFramework.EnumEventSystem>::get_Value()
inline EnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3* Lazy_1_get_Value_mC97F5801CD71E7AFED7507D6BF4A5D9B15F63A89 (Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998* __this, const RuntimeMethod* method)
{
	return ((  EnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3* (*) (Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998*, const RuntimeMethod*))Lazy_1_get_Value_mC3D475ED3C0FAB4E8BCC96FBF5EF49ED671B86A4_gshared)(__this, method);
}
// System.Void QFramework.EnumEventSystem::Send<System.Int32>(T,System.Object[])
inline void EnumEventSystem_Send_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC012FAEFA78C74FE727A5652E48CFDBE295E34C (EnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3* __this, int32_t ___key0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	((  void (*) (EnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3*, int32_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))EnumEventSystem_Send_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC012FAEFA78C74FE727A5652E48CFDBE295E34C_gshared)(__this, ___key0, ___args1, method);
}
// System.Boolean System.Lazy`1<QFramework.EnumEventSystem>::get_IsValueCreated()
inline bool Lazy_1_get_IsValueCreated_m547A7678C332A282E98E32E8DC354DB4BC32C7D4 (Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998*, const RuntimeMethod*))Lazy_1_get_IsValueCreated_m39248E19CF823CC31D8FFA6F16D811425D04DEBE_gshared)(__this, method);
}
// System.Void QFramework.EnumEventSystem::UnRegisterAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumEventSystem_UnRegisterAll_m557A59D83CC8292DFE34E6705FD80A7A2B4F7491 (EnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<QFramework.EnumEventSystem>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m4EB0ED0C3EF33F804C3D75A52B43CF530343F37C (Func_1_t0535C0A8BE107E0782417FB2319D0062C1493860* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t0535C0A8BE107E0782417FB2319D0062C1493860*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<QFramework.EnumEventSystem>::.ctor(System.Func`1<T>)
inline void Lazy_1__ctor_m0B6D7E66550414F48F366EA753C2554C8FDF4562 (Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998* __this, Func_1_t0535C0A8BE107E0782417FB2319D0062C1493860* ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998*, Func_1_t0535C0A8BE107E0782417FB2319D0062C1493860*, const RuntimeMethod*))Lazy_1__ctor_m4CD0C5ACC0541018DB9BDB090B1EFE67D5A9CEF1_gshared)(__this, ___valueFactory0, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.UInt16>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2EAAD0E7DA413138F7E7B4E79A0122FB0580D409 (Action_1_t2DE95E477A86F144593CC7965E86728C71D0E75D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2DE95E477A86F144593CC7965E86728C71D0E75D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2EAAD0E7DA413138F7E7B4E79A0122FB0580D409_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<System.UInt16>::ForEach(System.Action`1<T>)
inline void List_1_ForEach_m18C64358B46891D5D938600939E6DD5961FEEF7A (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* __this, Action_1_t2DE95E477A86F144593CC7965E86728C71D0E75D* ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*, Action_1_t2DE95E477A86F144593CC7965E86728C71D0E75D*, const RuntimeMethod*))List_1_ForEach_m18C64358B46891D5D938600939E6DD5961FEEF7A_gshared)(__this, ___action0, method);
}
// System.Void System.Collections.Generic.List`1<System.UInt16>::.ctor()
inline void List_1__ctor_mDA6AAE251F341EFE027F981417F43A88B5ADFA3B (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*, const RuntimeMethod*))List_1__ctor_mDA6AAE251F341EFE027F981417F43A88B5ADFA3B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void QFramework.QMonoBehaviour::UnRegisterAllEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_UnRegisterAllEvent_mBBD95932D075818254ADC62E7B552A79CF5C32A0 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.Object[]>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mCE8BC73F30C0984195633C278EB3615C0C07E66D (Action_2_t7E120AA4A73FA24ADC69BF237235F662C75EC1A6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7E120AA4A73FA24ADC69BF237235F662C75EC1A6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mE8DA76229BFE3CE94CA3DEF078C8B6F71B3615BF_gshared)(__this, ___object0, ___method1, method);
}
// T QFramework.MonoSingletonProperty`1<QFramework.QMsgCenter>::get_Instance()
inline QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604* MonoSingletonProperty_1_get_Instance_m4ED39FC46BA5323F207DD100E71B74E6523F48D2 (const RuntimeMethod* method)
{
	return ((  QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604* (*) (const RuntimeMethod*))MonoSingletonProperty_1_get_Instance_m46E6AB62A425A76963ADE844460CE84CA339529D_gshared)(method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>::Clear()
inline void Dictionary_2_Clear_mFDE898D83DF18FD6C2BDD4248F3E32FD535BC827 (Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Void QFramework.MonoSingletonProperty`1<QFramework.QMsgCenter>::Dispose()
inline void MonoSingletonProperty_1_Dispose_mDB0AB6CB568B253645CACFACF260E0F628C53A5C (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))MonoSingletonProperty_1_Dispose_mEDC14EE643A8EA61CF593068F915DAA57F322C0C_gshared)(method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>::GetEnumerator()
inline Enumerator_t8E2DE327BE7C62D7A44BE1A8BA940C7C71339248 Dictionary_2_GetEnumerator_mFCD04F48DD9F8D4E302DD777D042CCA7348A17AA (Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8E2DE327BE7C62D7A44BE1A8BA940C7C71339248 (*) (Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>::Dispose()
inline void Enumerator_Dispose_m0CD18C6BAF1E81DD0B34963070DE26E6ADE53722 (Enumerator_t8E2DE327BE7C62D7A44BE1A8BA940C7C71339248* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8E2DE327BE7C62D7A44BE1A8BA940C7C71339248*, const RuntimeMethod*))Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>::get_Current()
inline KeyValuePair_2_t2C2CD31AF0D4AD6CDED20D546227A4FDE94CDB71 Enumerator_get_Current_m85F3393197BC02165A603C57FD5C3491904D0AE1_inline (Enumerator_t8E2DE327BE7C62D7A44BE1A8BA940C7C71339248* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t2C2CD31AF0D4AD6CDED20D546227A4FDE94CDB71 (*) (Enumerator_t8E2DE327BE7C62D7A44BE1A8BA940C7C71339248*, const RuntimeMethod*))Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m36668E3F5E7FF80AC32BDD6002616161E05A2F64_inline (KeyValuePair_2_t2C2CD31AF0D4AD6CDED20D546227A4FDE94CDB71* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t2C2CD31AF0D4AD6CDED20D546227A4FDE94CDB71*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>::get_Value()
inline Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* KeyValuePair_2_get_Value_mB6758D87F67F37E431CD3066B70E0558F43F3D51_inline (KeyValuePair_2_t2C2CD31AF0D4AD6CDED20D546227A4FDE94CDB71* __this, const RuntimeMethod* method)
{
	return ((  Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* (*) (KeyValuePair_2_t2C2CD31AF0D4AD6CDED20D546227A4FDE94CDB71*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// TResult System.Func`1<QFramework.QMgrBehaviour>::Invoke()
inline QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571* Func_1_Invoke_m17DD7046F33D2A9BAFBA71FEC784D90405E1E1AF_inline (Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* __this, const RuntimeMethod* method)
{
	return ((  QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571* (*) (Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>::MoveNext()
inline bool Enumerator_MoveNext_mF2AA4A969634078FE292FFD9E75F39DC6958080E (Enumerator_t8E2DE327BE7C62D7A44BE1A8BA940C7C71339248* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8E2DE327BE7C62D7A44BE1A8BA940C7C71339248*, const RuntimeMethod*))Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mEE88B377594F2609D60DB4B66E65AEF0468C78D6 (Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m8A649503D3671D0F4021C84E0FBFB8438580EAB1 (Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* __this, int32_t ___key0, Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44*, int32_t, Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mDC99BE3343755ECA60A0846AF9920A98CCEEB7D9 (Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* __this, int32_t ___key0, Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44*, int32_t, Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Func`1<QFramework.QMgrBehaviour>>::.ctor()
inline void Dictionary_2__ctor_mC807DD2857460344BDACA1CE5A1E69965A74655B (Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// QFramework.SafeObjectPool`1<T> QFramework.SafeObjectPool`1<QFramework.PanelInfo>::get_Instance()
inline SafeObjectPool_1_t7330D19A20C0FCCDE59BD6E33BE623AA19C1A269* SafeObjectPool_1_get_Instance_m36054853A74F1D20AA4E4C2C2DFC79998CF15743 (const RuntimeMethod* method)
{
	return ((  SafeObjectPool_1_t7330D19A20C0FCCDE59BD6E33BE623AA19C1A269* (*) (const RuntimeMethod*))SafeObjectPool_1_get_Instance_mFAC144819A7125857D80A53F8D654B4326DACA75_gshared)(method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// QFramework.SafeObjectPool`1<T> QFramework.SafeObjectPool`1<QFramework.PanelSearchKeys>::get_Instance()
inline SafeObjectPool_1_t34350C9253C850D7F0788228F3FD5538086145C9* SafeObjectPool_1_get_Instance_mE469BADACFE5FF3B7B6ABBBA245623E997667B8C (const RuntimeMethod* method)
{
	return ((  SafeObjectPool_1_t34350C9253C850D7F0788228F3FD5538086145C9* (*) (const RuntimeMethod*))SafeObjectPool_1_get_Instance_mFAC144819A7125857D80A53F8D654B4326DACA75_gshared)(method);
}
// System.Void QFramework.UIPanelTester/<Start>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4__ctor_m64FDEF37DAD472A39B2C3B2B8BAB5055FB0BF5C6 (U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void QFramework.UIPanelTester/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m22BC2DCC55706DFA284694862BF2A27B311618A1 (U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B* __this, const RuntimeMethod* method) ;
// QFramework.UIPanel QFramework.UIKit::OpenPanel(System.String,QFramework.UILevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* UIKit_OpenPanel_m91F0EAD13F96D64D0E6762966836DB47CD6E016D (String_t* ___panelName0, int32_t ___level1, String_t* ___assetBundleName2, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.Action`1<QFramework.UIPanelTesterInfo>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7F13465F715BB1122AD3BA03394873BFDA1AD66D (Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<QFramework.UIPanelTesterInfo>::ForEach(System.Action`1<T>)
inline void List_1_ForEach_m3E6E77F8A3F2619EA60ACEDAE139A4FEBF4A5F3D (List_1_t257F64E122FC6FE6D34458BCBBFEACBB7547F38B* __this, Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B* ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257F64E122FC6FE6D34458BCBBFEACBB7547F38B*, Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B*, const RuntimeMethod*))List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared)(__this, ___action0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void QFramework.UIPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel__ctor_m180C81FD4745C164EBA3A7CBF93E52993519636F (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) ;
// System.Void QFramework.UIManager::CloseAllUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_CloseAllUI_m156696A054D3D34F8F185875C408C964DBEB66F5 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, const RuntimeMethod* method) ;
// System.Void QFramework.UIManager::HideAllUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_HideAllUI_mE8ED8B3BF5AAA9CBA0563D73E3868161351EA41E (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, const RuntimeMethod* method) ;
// QFramework.PanelSearchKeys QFramework.PanelSearchKeys::Allocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* PanelSearchKeys_Allocate_m7002D9DE0D0B5E6F2A9972A4E731F5EBCB64281D (const RuntimeMethod* method) ;
// QFramework.UIPanel QFramework.UIManager::GetUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* UIManager_GetUI_mE8674E12C1D3FD09191DBBE5662ECF23EE22F0B4 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) ;
// System.Void QFramework.PanelSearchKeys::Recycle2Cache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSearchKeys_Recycle2Cache_mC65DB1122420D6EFBA5328002601E703F7AFF0E1 (PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* __this, const RuntimeMethod* method) ;
// QFramework.IPanel QFramework.UIManager::OpenUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIManager_OpenUI_m5728CC2670494DEA84610F185C4C54D47B5C5F0F (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) ;
// System.Void QFramework.UIManager::CloseUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_CloseUI_m523D5AE7E1C1DD709B036FE9BF9D64C04C91A408 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) ;
// System.Void QFramework.UIManager::ShowUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowUI_mE23C9DDF0ABAF70DF0DB57AC2AB131ACA0274502 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) ;
// System.Void QFramework.UIManager::HideUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_HideUI_m013B84A7FDFB9D0460041E77EEEC6FEBCE07F1D3 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// QFramework.UIPanelStack QFramework.UIKit::get_Stack()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* UIKit_get_Stack_mAD1EC85D27AEBC5EA8B3F31641B1D4482FEDA26A_inline (const RuntimeMethod* method) ;
// System.Void QFramework.UIPanelStack::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelStack_Pop_mDAEEE5DF88D7BB547DCF2A0FC66DAB330631C14A (UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void QFramework.UIKitConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKitConfig__ctor_mD9859BF88C09F0B082629D3CDCDAB52CF86246C6 (UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* __this, const RuntimeMethod* method) ;
// System.Void QFramework.UIPanelTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelTable__ctor_mA1DE6CBF7FB09B408CE110B283B1F22EF04CB8CD (UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void QFramework.UIPanelStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelStack__ctor_m7F4A30A89607588571F6C730DEFF8AB39F3752BE (UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<QFramework.UIPanel>()
inline UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* GameObject_GetComponent_TisUIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_mA0E0EA84B26436CB2A8597D4B5755C4ACC8523DB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void QFramework.UIKitConfig/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mC8BD593D701B441FF6DBC6E652062DE57FB5E202 (U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3FA37AFA5AAB09F49F9C00A7D5B2A5F3D83CBB01 (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void QFramework.DefaultPanelLoaderPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPanelLoaderPool__ctor_mB9E26F733484CC5CF38FE8524F9800DF81C0384F (DefaultPanelLoaderPool_tD915239A668ACA79D706C8BF2C8EC5F898394D64* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<QFramework.IPanelLoader>::get_Count()
inline int32_t Stack_1_get_Count_mB8827A8A8C5DB7347B36BF5481A7FEC3FC6FD7F3_inline (Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Stack`1<QFramework.IPanelLoader>::Pop()
inline RuntimeObject* Stack_1_Pop_m3F526394D19C8DF4C4AD7EB8BDA97257D6A2B8F1 (Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<QFramework.IPanelLoader>::Push(T)
inline void Stack_1_Push_mDC03DE0D5BF8EDF9499DBE9AD5098251B65821B4 (Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B*, RuntimeObject*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<QFramework.IPanelLoader>::.ctor(System.Int32)
inline void Stack_1__ctor_mF27A160348E3A4A218F450611E922C73282CDB8B (Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B*, int32_t, const RuntimeMethod*))Stack_1__ctor_m25F8C6095172E75DEE8A43E857889659DFC4DCE9_gshared)(__this, ___capacity0, method);
}
// System.Void QFramework.DefaultPanelLoaderPool/DefaultPanelLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPanelLoader__ctor_m875D40A4AD4BB1229C912B83C0C307745AF5804B (DefaultPanelLoader_tFB0893D574A52EDA4E47C6E3BA7D76664939BA44* __this, const RuntimeMethod* method) ;
// System.Void QFramework.AbstractPanelLoaderPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractPanelLoaderPool__ctor_m653952C187CAD192172FF1B3405CBE43E85FAA71 (AbstractPanelLoaderPool_tCADA5105A3D1C016C1350D284840109286DF109E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// System.Void QFramework.DefaultPanelLoaderPool/DefaultPanelLoader/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m87D4587E852D36212163F87E514EF98F1426CC26 (U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceRequest UnityEngine.Resources::LoadAsync<UnityEngine.GameObject>(System.String)
inline ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* Resources_LoadAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2235D878C31C30D37971FD62EEA7DA3B5B53C869 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* (*) (String_t*, const RuntimeMethod*))Resources_LoadAsync_TisRuntimeObject_m5384D8833B760C9FA8EBDCC6692FDEDE2325C542_gshared)(___path0, method);
}
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ResourceRequest_get_asset_m740C394902843D080795A49372A2AB3CE9705087 (ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.GameObject>::Invoke(T)
inline void Action_1_Invoke_mBF1852490A3A2C4508CEF22E3887E57A8E6C6E45_inline (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void QFramework.Bind::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bind__ctor_m9293DC03F53B30940F95749D503D300264500AAA (Bind_t947EE9A19F6EA255E71344FE6CF8BB895C48FE5E* __this, const RuntimeMethod* method) ;
// System.Void QFramework.UIPanel::set_State(QFramework.PanelState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPanel_set_State_mD35D1FB2D0E05CA95C3A1DD324E10928BC0526D1_inline (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void QFramework.QMonoBehaviour::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_Hide_mC24B90847D06548A9DB07A91E7670F5D91137B32 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, const RuntimeMethod* method) ;
// System.Void QFramework.QMonoBehaviour::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_OnDestroy_mB5834C1335A528467E6A5D2295A2D1018E167B59 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, const RuntimeMethod* method) ;
// QFramework.PanelInfo QFramework.UIPanel::get_Info()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* UIPanel_get_Info_m8040629EEAB6AF74D067F477ED6C9AF4BF7904DF_inline (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void QFramework.UIKit::ClosePanel(QFramework.UIPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKit_ClosePanel_mF1958028C14B2558A5196546CC3FA6A5FAF23CE7 (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* ___panel0, const RuntimeMethod* method) ;
// System.Void QFramework.UIKit::Back(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKit_Back_m5D9678429A3EF1FDC3200ABECA6FA263AE8DA064 (String_t* ___currentPanelName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<QFramework.PanelInfo>::Push(T)
inline void Stack_1_Push_m22E818D1BA967E4DC3F28DEA104AD2687BA84EBF (Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659* __this, PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659*, PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Void QFramework.UIManager::RemoveUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_RemoveUI_m0617315F9CD1AD0F36DDBA6A952BFFBAADBB6B59 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<QFramework.PanelInfo>::Pop()
inline PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* Stack_1_Pop_mFA7236CEFAC61A9DCDD5C4736E47FE5073C7D53B (Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659* __this, const RuntimeMethod* method)
{
	return ((  PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* (*) (Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<QFramework.PanelInfo>::.ctor()
inline void Stack_1__ctor_m8E9EF37C9368817F4A0D2B351E2E53554BE4128E (Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void QFramework.UIPanelTable/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m40EE41CA620B66F6E54B785846551B9A67E6C443 (U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TDataItem> QFramework.UIKitTableIndex`2<System.Type,QFramework.IPanel>::Get(TKeyType)
inline RuntimeObject* UIKitTableIndex_2_Get_mD866DA017B783442A6893CCF814D820E7AD98294 (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2*, Type_t*, const RuntimeMethod*))UIKitTableIndex_2_Get_mD917B535DD175DEC5B67CE6E49C32AC290F82A34_gshared)(__this, ___key0, method);
}
// System.Void System.Func`2<QFramework.IPanel,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m982D0A610C0726076CCC8DCEE7B3368D60C92A0E (Func_2_t5610A48963408652A7113BB2878D7128E24434E0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5610A48963408652A7113BB2878D7128E24434E0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<QFramework.IPanel>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_mEACA5FAB212B8869F301F3A310847BA99061C2FF (RuntimeObject* ___source0, Func_2_t5610A48963408652A7113BB2878D7128E24434E0* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5610A48963408652A7113BB2878D7128E24434E0*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.IEnumerable`1<TDataItem> QFramework.UIKitTableIndex`2<System.String,QFramework.IPanel>::Get(TKeyType)
inline RuntimeObject* UIKitTableIndex_2_Get_mC6F212DEAAA5631FECDF2F3554F5F9BA65E9FA2B (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA*, String_t*, const RuntimeMethod*))UIKitTableIndex_2_Get_mD917B535DD175DEC5B67CE6E49C32AC290F82A34_gshared)(__this, ___key0, method);
}
// System.Boolean QFramework.SystemStringExtension::IsNotNullAndEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemStringExtension_IsNotNullAndEmpty_mCDF5A6BB0BFAB184E5C315A6B07CF484FA4A34E3 (String_t* ___selfStr0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<QFramework.IPanel>()
inline RuntimeObject* Enumerable_Empty_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m7781CC6D24D412BF72531604769BE38B6AE5B8AB_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Enumerable_Empty_TisRuntimeObject_m42BB34F154440C9F0AC402FC3E9BD08C8D678F21_gshared_inline)(method);
}
// System.Void QFramework.UIKitTableIndex`2<System.String,QFramework.IPanel>::Add(TDataItem)
inline void UIKitTableIndex_2_Add_mC8D4CB5B609BCCDEE7185729C243A2C8A7354693 (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* __this, RuntimeObject* ___dataItem0, const RuntimeMethod* method)
{
	((  void (*) (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA*, RuntimeObject*, const RuntimeMethod*))UIKitTableIndex_2_Add_mD6812A46CFBF2C6B04D41E8D0031A8D904E5DB6D_gshared)(__this, ___dataItem0, method);
}
// System.Void QFramework.UIKitTableIndex`2<System.Type,QFramework.IPanel>::Add(TDataItem)
inline void UIKitTableIndex_2_Add_m0BB75C2BB99E8F80EA27F30E6EF5E9DCDA587EC0 (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* __this, RuntimeObject* ___dataItem0, const RuntimeMethod* method)
{
	((  void (*) (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2*, RuntimeObject*, const RuntimeMethod*))UIKitTableIndex_2_Add_mD6812A46CFBF2C6B04D41E8D0031A8D904E5DB6D_gshared)(__this, ___dataItem0, method);
}
// System.Void QFramework.UIKitTableIndex`2<System.String,QFramework.IPanel>::Remove(TDataItem)
inline void UIKitTableIndex_2_Remove_mBC2CDDA7399164B02638A0BDA1BFA95AC1D058DC (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* __this, RuntimeObject* ___dataItem0, const RuntimeMethod* method)
{
	((  void (*) (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA*, RuntimeObject*, const RuntimeMethod*))UIKitTableIndex_2_Remove_m5B15370DDA53AC681A77C19FB36C809489100A74_gshared)(__this, ___dataItem0, method);
}
// System.Void QFramework.UIKitTableIndex`2<System.Type,QFramework.IPanel>::Remove(TDataItem)
inline void UIKitTableIndex_2_Remove_mA9985CA1CE2E63F5517A704F9AC56C0493D45E6F (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* __this, RuntimeObject* ___dataItem0, const RuntimeMethod* method)
{
	((  void (*) (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2*, RuntimeObject*, const RuntimeMethod*))UIKitTableIndex_2_Remove_m5B15370DDA53AC681A77C19FB36C809489100A74_gshared)(__this, ___dataItem0, method);
}
// System.Void QFramework.UIKitTableIndex`2<System.String,QFramework.IPanel>::Clear()
inline void UIKitTableIndex_2_Clear_m4C599EC4706428B46AE2DC67C98F01CC2F957C3B (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* __this, const RuntimeMethod* method)
{
	((  void (*) (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA*, const RuntimeMethod*))UIKitTableIndex_2_Clear_m26EB2B9BB529F70A8C1FC419BA777B6CB782E7D0_gshared)(__this, method);
}
// System.Void QFramework.UIKitTableIndex`2<System.Type,QFramework.IPanel>::Clear()
inline void UIKitTableIndex_2_Clear_m84A1D71CDC67295222EF6C6CA56F5F00E0D83162 (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* __this, const RuntimeMethod* method)
{
	((  void (*) (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2*, const RuntimeMethod*))UIKitTableIndex_2_Clear_m26EB2B9BB529F70A8C1FC419BA777B6CB782E7D0_gshared)(__this, method);
}
// System.Collections.Generic.IDictionary`2<TKeyType,System.Collections.Generic.List`1<TDataItem>> QFramework.UIKitTableIndex`2<System.String,QFramework.IPanel>::get_Dictionary()
inline RuntimeObject* UIKitTableIndex_2_get_Dictionary_mFA6197584922387FA66F0E469D0139E77CAA8941_inline (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA*, const RuntimeMethod*))UIKitTableIndex_2_get_Dictionary_mC6E245E79BC07009FC0A47C9E0F07311E951CBB6_gshared_inline)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<QFramework.IPanel>>,System.Collections.Generic.IEnumerable`1<QFramework.IPanel>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE4C2522B2B1E64F02074E96FAB15D18734B63B3B (Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<QFramework.IPanel>>,QFramework.IPanel>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisKeyValuePair_2_t53514AC605F6DBC7C9AE4C73131A69D3B2C3E538_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m352B21F669CBEB61998759D650AE07DD7972DBA8 (RuntimeObject* ___source0, Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346*, const RuntimeMethod*))Enumerable_SelectMany_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_mEA140C9E662772A7037DE9BE5B1C74D0CB2088FF_gshared)(___source0, ___selector1, method);
}
// System.Void QFramework.UIKitTableIndex`2<System.String,QFramework.IPanel>::Dispose()
inline void UIKitTableIndex_2_Dispose_m3C102AFF8A8A61AA710C3527780684C4E3E9CC3A (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* __this, const RuntimeMethod* method)
{
	((  void (*) (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA*, const RuntimeMethod*))UIKitTableIndex_2_Dispose_mD95CB7BD7734568BE12ABC4C0E3CBD01C2228BC3_gshared)(__this, method);
}
// System.Void QFramework.UIKitTableIndex`2<System.Type,QFramework.IPanel>::Dispose()
inline void UIKitTableIndex_2_Dispose_m6C907A8A88C67DDECA94FBC625322F001D7BD0C4 (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* __this, const RuntimeMethod* method)
{
	((  void (*) (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2*, const RuntimeMethod*))UIKitTableIndex_2_Dispose_mD95CB7BD7734568BE12ABC4C0E3CBD01C2228BC3_gshared)(__this, method);
}
// System.Void System.Func`2<QFramework.IPanel,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7445111EC5FC23F9D8CBBD17575723FDEBE6205A (Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void QFramework.UIKitTableIndex`2<System.String,QFramework.IPanel>::.ctor(System.Func`2<TDataItem,TKeyType>)
inline void UIKitTableIndex_2__ctor_m168EB74F87B8A13FDB30D1E6940AAF5D51B8A670 (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* __this, Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51* ___keyGetter0, const RuntimeMethod* method)
{
	((  void (*) (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA*, Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51*, const RuntimeMethod*))UIKitTableIndex_2__ctor_m27EA12DF6D31BAA8BC90EB9BA74B9B595A101378_gshared)(__this, ___keyGetter0, method);
}
// System.Void System.Func`2<QFramework.IPanel,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6111C32E599EEA18F32D6CE57ABB1406C1236753 (Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void QFramework.UIKitTableIndex`2<System.Type,QFramework.IPanel>::.ctor(System.Func`2<TDataItem,TKeyType>)
inline void UIKitTableIndex_2__ctor_mABE5A1EFAADAC2E7574A852386F4F5EE476E8220 (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* __this, Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169* ___keyGetter0, const RuntimeMethod* method)
{
	((  void (*) (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2*, Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169*, const RuntimeMethod*))UIKitTableIndex_2__ctor_m27EA12DF6D31BAA8BC90EB9BA74B9B595A101378_gshared)(__this, ___keyGetter0, method);
}
// System.Void QFramework.UIKitTable`1<QFramework.IPanel>::.ctor()
inline void UIKitTable_1__ctor_m5928DBC345A2D2550E3FDAACB3F07960ABE6B8B7 (UIKitTable_1_tA37264156B6380B50EDDB9A605962F93E84BC26C* __this, const RuntimeMethod* method)
{
	((  void (*) (UIKitTable_1_tA37264156B6380B50EDDB9A605962F93E84BC26C*, const RuntimeMethod*))UIKitTable_1__ctor_m37878435CF1407BED2830110B19C1389E333CCD6_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void QFramework.UIPanelTable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8581F9BAB5C4FE09C82E1AA0E4EA6B2B6352DE09 (U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<QFramework.IPanel>>::get_Value()
inline List_1_tEF9FCF20FCD8D8268719B28DA438E9DA2A6CE5C7* KeyValuePair_2_get_Value_m36665587332ECC9FA9F5F358555C0956C05A7FE4_inline (KeyValuePair_2_t53514AC605F6DBC7C9AE4C73131A69D3B2C3E538* __this, const RuntimeMethod* method)
{
	return ((  List_1_tEF9FCF20FCD8D8268719B28DA438E9DA2A6CE5C7* (*) (KeyValuePair_2_t53514AC605F6DBC7C9AE4C73131A69D3B2C3E538*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<QFramework.UIRoot>()
inline UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* Object_FindObjectOfType_TisUIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_m6C1F0CA0280BAFB40C69930BDC4F42EFB13A5D51 (const RuntimeMethod* method)
{
	return ((  UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T QFramework.MonoSingletonProperty`1<QFramework.UIRoot>::get_Instance()
inline UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* MonoSingletonProperty_1_get_Instance_m44E26FB2C813506C6F45B857203A3F2419F22EE9 (const RuntimeMethod* method)
{
	return ((  UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* (*) (const RuntimeMethod*))MonoSingletonProperty_1_get_Instance_m46E6AB62A425A76963ADE844460CE84CA339529D_gshared)(method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.CanvasScaler::set_referenceResolution(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasScaler_set_referenceResolution_m793679B8505AF9BBF64F45D80AFE39F3F99FAB8D (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.CanvasScaler::set_matchWidthOrHeight(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasScaler_set_matchWidthOrHeight_m44635DC3E4424255C312814C325A48E37E6B6E30_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::get_referenceResolution()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CanvasScaler_get_referenceResolution_m79C03DD8CE6759B045928C5339A3C5E6220276B5_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.CanvasScaler::get_matchWidthOrHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CanvasScaler_get_matchWidthOrHeight_m9C40FBA943172874FD27F3F7B880E2D5D5862C9B_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::set_renderMode(UnityEngine.RenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_renderMode_mD73E953F8A115CF469508448A00D0EDAFAF5AB47 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<QFramework.CollisionTriggerListener>()
inline CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* GameObject_GetComponent_TisCollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3_m21AB41049A7726A0C5D2FE9F2BE300ED837BEB1F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<QFramework.CollisionTriggerListener>()
inline CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* GameObject_AddComponent_TisCollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3_mF52E24653F52A8AE10C82C655D4851034F305E09 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void QFramework.CollisionTriggerListener::RemoveAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RemoveAll_mEC5B64C53B8FABC2BD8113E9304437864EFF4AB1 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>::get_Values()
inline ValueCollection_tD9193AF6E54CA4EDED2BB28ACE644773E9C5A6EC* Dictionary_2_get_Values_m77B86DA239FD5CD8A2D4D76C0CA54D3EC0E6484E (Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tD9193AF6E54CA4EDED2BB28ACE644773E9C5A6EC* (*) (Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550*, const RuntimeMethod*))Dictionary_2_get_Values_m88548D48A871D5B79DB4BAAB82C62D4D61568F64_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>::GetEnumerator()
inline Enumerator_tD5BEB5A5644C1BE5F86C5E0D44AF0A2FC7586EA2 ValueCollection_GetEnumerator_m19CBBBAD5AC28C2C5125AD43BE7174CABFB005A8 (ValueCollection_tD9193AF6E54CA4EDED2BB28ACE644773E9C5A6EC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD5BEB5A5644C1BE5F86C5E0D44AF0A2FC7586EA2 (*) (ValueCollection_tD9193AF6E54CA4EDED2BB28ACE644773E9C5A6EC*, const RuntimeMethod*))ValueCollection_GetEnumerator_m412091D90257E6493D8F9404FFC734832E1C5007_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>::Dispose()
inline void Enumerator_Dispose_m8F8CAD94EFD69041C25FEB6FD5A27E98E23A2924 (Enumerator_tD5BEB5A5644C1BE5F86C5E0D44AF0A2FC7586EA2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD5BEB5A5644C1BE5F86C5E0D44AF0A2FC7586EA2*, const RuntimeMethod*))Enumerator_Dispose_m51A04B4A4A98EC6004015ECF7C9605316687CBD3_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>::get_Current()
inline UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* Enumerator_get_Current_m6C638E7A68184951B08C75959F91D218F4E75D5C_inline (Enumerator_tD5BEB5A5644C1BE5F86C5E0D44AF0A2FC7586EA2* __this, const RuntimeMethod* method)
{
	return ((  UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* (*) (Enumerator_tD5BEB5A5644C1BE5F86C5E0D44AF0A2FC7586EA2*, const RuntimeMethod*))Enumerator_get_Current_m76B0ECD4B03E606A1CE3DF60589D2E97130B02CA_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>::MoveNext()
inline bool Enumerator_MoveNext_m448E364F39C5DA82725EE5C15C634F865888C72C (Enumerator_tD5BEB5A5644C1BE5F86C5E0D44AF0A2FC7586EA2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD5BEB5A5644C1BE5F86C5E0D44AF0A2FC7586EA2*, const RuntimeMethod*))Enumerator_MoveNext_m30C883F9DF743472B2102F74D70DA61074694D1E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>::Clear()
inline void Dictionary_2_Clear_mDF46F8E2424C9D5EF4AFB151F76D4FB6EABA11B9 (Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550*, const RuntimeMethod*))Dictionary_2_Clear_m763AA956A8325F527F831F49E2563FF2871A680E_gshared)(__this, method);
}
// System.Void QFramework.CollisionTriggerListener::Register<UnityEngine.Collision>(QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityAction`1<T>)
inline void CollisionTriggerListener_Register_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m3220E4A72CA71B5A2CD31776B9EF11AAB6883890 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* ___action1, const RuntimeMethod* method)
{
	((  void (*) (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3*, int32_t, UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717*, const RuntimeMethod*))CollisionTriggerListener_Register_TisRuntimeObject_m85F30F161933FF62AC6F9535D2F16863D615B9AA_gshared)(__this, ___eventName0, ___action1, method);
}
// System.Void QFramework.CollisionTriggerListener::UnRegister<UnityEngine.Collision>(QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityAction`1<T>)
inline void CollisionTriggerListener_UnRegister_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_mE6C780A444D8C8BD9BA20921E4173CF34AEE3436 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* ___action1, const RuntimeMethod* method)
{
	((  void (*) (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3*, int32_t, UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717*, const RuntimeMethod*))CollisionTriggerListener_UnRegister_TisRuntimeObject_mDA274528EB9B11B292C972341828FC338C034AF5_gshared)(__this, ___eventName0, ___action1, method);
}
// System.Void QFramework.CollisionTriggerListener::Dispatch<UnityEngine.Collision>(QFramework.CollisionTriggerListener/EventName,T)
inline void CollisionTriggerListener_Dispatch_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m6045B81B8E0A196D93A85D945EBA50E4263270A0 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___value1, const RuntimeMethod* method)
{
	((  void (*) (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3*, int32_t, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0*, const RuntimeMethod*))CollisionTriggerListener_Dispatch_TisRuntimeObject_mB1BA98DB10BE8ED1262B4E182FDDF548B5A2253D_gshared)(__this, ___eventName0, ___value1, method);
}
// System.Void QFramework.CollisionTriggerListener::Register<UnityEngine.Collision2D>(QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityAction`1<T>)
inline void CollisionTriggerListener_Register_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mDB924C149ED9323DC345D65B4428F24FA251D7C8 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* ___action1, const RuntimeMethod* method)
{
	((  void (*) (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3*, int32_t, UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B*, const RuntimeMethod*))CollisionTriggerListener_Register_TisRuntimeObject_m85F30F161933FF62AC6F9535D2F16863D615B9AA_gshared)(__this, ___eventName0, ___action1, method);
}
// System.Void QFramework.CollisionTriggerListener::UnRegister<UnityEngine.Collision2D>(QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityAction`1<T>)
inline void CollisionTriggerListener_UnRegister_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_m30E0E7330AA1E8012BE506BACBCE461AD2E797B0 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* ___action1, const RuntimeMethod* method)
{
	((  void (*) (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3*, int32_t, UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B*, const RuntimeMethod*))CollisionTriggerListener_UnRegister_TisRuntimeObject_mDA274528EB9B11B292C972341828FC338C034AF5_gshared)(__this, ___eventName0, ___action1, method);
}
// System.Void QFramework.CollisionTriggerListener::Dispatch<UnityEngine.Collision2D>(QFramework.CollisionTriggerListener/EventName,T)
inline void CollisionTriggerListener_Dispatch_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mC601E72ADC091D508F6853D490125BF22A519289 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3*, int32_t, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B*, const RuntimeMethod*))CollisionTriggerListener_Dispatch_TisRuntimeObject_mB1BA98DB10BE8ED1262B4E182FDDF548B5A2253D_gshared)(__this, ___eventName0, ___value1, method);
}
// System.Void QFramework.CollisionTriggerListener::Register<UnityEngine.Collider>(QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityAction`1<T>)
inline void CollisionTriggerListener_Register_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m8304081506004D907B9C350ADD3E06FDC094BFEF (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* ___action1, const RuntimeMethod* method)
{
	((  void (*) (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3*, int32_t, UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D*, const RuntimeMethod*))CollisionTriggerListener_Register_TisRuntimeObject_m85F30F161933FF62AC6F9535D2F16863D615B9AA_gshared)(__this, ___eventName0, ___action1, method);
}
// System.Void QFramework.CollisionTriggerListener::UnRegister<UnityEngine.Collider>(QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityAction`1<T>)
inline void CollisionTriggerListener_UnRegister_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mF2DEA29114FFA48088CB1517E58F161B5164F443 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* ___action1, const RuntimeMethod* method)
{
	((  void (*) (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3*, int32_t, UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D*, const RuntimeMethod*))CollisionTriggerListener_UnRegister_TisRuntimeObject_mDA274528EB9B11B292C972341828FC338C034AF5_gshared)(__this, ___eventName0, ___action1, method);
}
// System.Void QFramework.CollisionTriggerListener::Dispatch<UnityEngine.Collider>(QFramework.CollisionTriggerListener/EventName,T)
inline void CollisionTriggerListener_Dispatch_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m3BE5B446E5DB17763FB4CCC2EE9A45846D967BF3 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___value1, const RuntimeMethod* method)
{
	((  void (*) (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3*, int32_t, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*, const RuntimeMethod*))CollisionTriggerListener_Dispatch_TisRuntimeObject_mB1BA98DB10BE8ED1262B4E182FDDF548B5A2253D_gshared)(__this, ___eventName0, ___value1, method);
}
// System.Void QFramework.CollisionTriggerListener::Register<UnityEngine.Collider2D>(QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityAction`1<T>)
inline void CollisionTriggerListener_Register_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC0D4C46C9D65455198B44B14E0FC4145537AB07D (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* ___action1, const RuntimeMethod* method)
{
	((  void (*) (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3*, int32_t, UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94*, const RuntimeMethod*))CollisionTriggerListener_Register_TisRuntimeObject_m85F30F161933FF62AC6F9535D2F16863D615B9AA_gshared)(__this, ___eventName0, ___action1, method);
}
// System.Void QFramework.CollisionTriggerListener::UnRegister<UnityEngine.Collider2D>(QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityAction`1<T>)
inline void CollisionTriggerListener_UnRegister_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m58515342A58D3CCBFE0561A07F0FB262F814FEE2 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* ___action1, const RuntimeMethod* method)
{
	((  void (*) (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3*, int32_t, UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94*, const RuntimeMethod*))CollisionTriggerListener_UnRegister_TisRuntimeObject_mDA274528EB9B11B292C972341828FC338C034AF5_gshared)(__this, ___eventName0, ___action1, method);
}
// System.Void QFramework.CollisionTriggerListener::Dispatch<UnityEngine.Collider2D>(QFramework.CollisionTriggerListener/EventName,T)
inline void CollisionTriggerListener_Dispatch_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mF2F3C59196FC21255999B881489543252013CE88 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, int32_t ___eventName0, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___value1, const RuntimeMethod* method)
{
	((  void (*) (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3*, int32_t, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52*, const RuntimeMethod*))CollisionTriggerListener_Dispatch_TisRuntimeObject_mB1BA98DB10BE8ED1262B4E182FDDF548B5A2253D_gshared)(__this, ___eventName0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<QFramework.CollisionTriggerListener/EventName,UnityEngine.Events.UnityEventBase>::.ctor()
inline void Dictionary_2__ctor_mAFD9C420258AD4896AD7BD6960832FF91D5AB2E8 (Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_sortingOrder_mFA9AC878A11BBEE1716CF7E7DF52E0AAC570C451 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB17EF84B788D0B2A40AC0A670404F8967B5384E2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m511E687BF2424F8D832EA2EAA459870887FB9540_gshared)(__this, ___includeInactive0, method);
}
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<QFramework.UIEventListener>()
inline UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* GameObject_GetComponent_TisUIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50_m6D4FC124D7209D11B4D915E421E0ECC2D98FE50D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<QFramework.UIEventListener>()
inline UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* GameObject_AddComponent_TisUIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50_m0FEF1F79EE8BF3F3F72413FCBF388F7174696980 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// QFramework.UIEventListener QFramework.UIEventListener::CheckAndAddListener(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* UIEventListener_CheckAndAddListener_m85166E045D573C40421A5A45A05E386C4D51216A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T)
inline void Action_1_Invoke_mAA1B475E362ED9D47EBBDE53300D4BB13EBDB07B_inline (Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.EventSystems.EventTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrigger__ctor_m2A471D4099280D37183A1B668FF092B9517BA294 (EventTrigger_tAEBFB7A16CA99343EA87722F78884BF8646BAE1B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QFramework.BindType QFramework.UIComponent::GetBindType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIComponent_GetBindType_mE1FB12970D96E4FE84715F8CFADFA1BA100313E1 (UIComponent_tD71F161B7797022816ACB048A5B1BDF9BCA8CF52* __this, const RuntimeMethod* method) 
{
	{
		// return BindType.Component;
		return (int32_t)(2);
	}
}
// System.Void QFramework.UIComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIComponent__ctor_mC766BC73B0793E7D8D24982C2C3D33D875C90F75 (UIComponent_tD71F161B7797022816ACB048A5B1BDF9BCA8CF52* __this, const RuntimeMethod* method) 
{
	{
		UIElement__ctor_m396A17C7564709B22FABBB9300CA0FEEA635D954(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QFramework.BindType QFramework.UIElement::GetBindType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIElement_GetBindType_m207B9C807D70A140553B25140B66B567DD3A20AB (UIElement_tAC0710DF9804BF65C117D16DB98DA328983C2DDA* __this, const RuntimeMethod* method) 
{
	{
		// return BindType.Element;
		return (int32_t)(1);
	}
}
// System.String QFramework.UIElement::get_TypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UIElement_get_TypeName_m45371A6CB878222E6954C3678D47BA333BDC7490 (UIElement_tAC0710DF9804BF65C117D16DB98DA328983C2DDA* __this, const RuntimeMethod* method) 
{
	{
		// public virtual string TypeName => ComponentName;
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(20 /* System.String QFramework.UIElement::get_ComponentName() */, __this);
		return L_0;
	}
}
// System.String QFramework.UIElement::get_Comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UIElement_get_Comment_m6997C93A73DB25ED5AD54D370B2EF63AFC25ADA7 (UIElement_tAC0710DF9804BF65C117D16DB98DA328983C2DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return string.Empty; }
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_0;
	}
}
// UnityEngine.Transform QFramework.UIElement::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* UIElement_get_Transform_mBC68D8F400154939913AB1678F8442322DE2733F (UIElement_tAC0710DF9804BF65C117D16DB98DA328983C2DDA* __this, const RuntimeMethod* method) 
{
	{
		// get { return transform; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		return L_0;
	}
}
// QFramework.IManager QFramework.UIElement::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIElement_get_Manager_m215535AE14E70F3168FC6F3DB03CBA5E0A5A9AA3 (UIElement_tAC0710DF9804BF65C117D16DB98DA328983C2DDA* __this, const RuntimeMethod* method) 
{
	{
		// get { return UIManager.Instance; }
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_0;
		L_0 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		return L_0;
	}
}
// System.Void QFramework.UIElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElement__ctor_m396A17C7564709B22FABBB9300CA0FEEA635D954 (UIElement_tAC0710DF9804BF65C117D16DB98DA328983C2DDA* __this, const RuntimeMethod* method) 
{
	{
		QMonoBehaviour__ctor_m0AEFE0C4875C9FAB938D75B8767C4AA972AE72E9(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIElementList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementList__ctor_m85C7A8FB4F62B05D0BF19A4723126BD77803B6FC (UIElementList_t17FB3B0FDC6DB642C89908091BA0C5B17942A5F7* __this, const RuntimeMethod* method) 
{
	{
		UIElement__ctor_m396A17C7564709B22FABBB9300CA0FEEA635D954(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIScrollPageChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPageChangeEvent__ctor_m784D1625C386B0E6FDC3FFA6332C2C3D4DB0AEEF (UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E(__this, UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIScrollPage::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPage_Awake_mD4886C4E6F5081C88815C3FA8D0B581C1716F9F8 (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rect = transform.GetComponent<ScrollRect>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1;
		L_1 = Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518(L_0, Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		__this->___rect_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rect_4), (void*)L_1);
		// startime = Time.time;
		float L_2;
		L_2 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___startime_11 = L_2;
		// }
		return;
	}
}
// System.Void QFramework.UIScrollPage::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPage_Update_m2FC27137F4F88AF372FEAF7F49E82AFE6F944580 (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Time.time < startime + delay) return;
		float L_0;
		L_0 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_1 = __this->___startime_11;
		float L_2 = __this->___delay_12;
		if ((!(((float)L_0) < ((float)((float)il2cpp_codegen_add(L_1, L_2))))))
		{
			goto IL_0015;
		}
	}
	{
		// if (Time.time < startime + delay) return;
		return;
	}

IL_0015:
	{
		// UpdatePages();
		UIScrollPage_UpdatePages_mC8A2D3649C9F1E8A7F656A3E2A4BE1C1962AA0EC(__this, NULL);
		// if (!isDrag && pages.Count > 0)
		bool L_3 = __this->___isDrag_9;
		if (L_3)
		{
			goto IL_005e;
		}
	}
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_4 = __this->___pages_5;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_4, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		// rect.horizontalNormalizedPosition = Mathf.Lerp(rect.horizontalNormalizedPosition, targethorizontal, Time.deltaTime * smooting);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_6 = __this->___rect_4;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_7 = __this->___rect_4;
		NullCheck(L_7);
		float L_8;
		L_8 = ScrollRect_get_horizontalNormalizedPosition_mC2C3A7F67E27AA7470A81042AD2B0AD0B5F1AF93(L_7, NULL);
		float L_9 = __this->___targethorizontal_8;
		float L_10;
		L_10 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_11 = __this->___smooting_7;
		float L_12;
		L_12 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_8, L_9, ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		NullCheck(L_6);
		ScrollRect_set_horizontalNormalizedPosition_m9B268C9AE7891FC73623DC7BE6B9900640C029B6(L_6, L_12, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIScrollPage::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPage_OnBeginDrag_m038781EEE18ECA005988D8BADF9216CB4BE02454 (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// isDrag = true;
		__this->___isDrag_9 = (bool)1;
		// }
		return;
	}
}
// System.Void QFramework.UIScrollPage::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPage_OnEndDrag_m1E091107BA588F82AE47EF83C4E0AA21A0A15B76 (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isDrag = false;
		__this->___isDrag_9 = (bool)0;
		// if (eventData != null)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		if (!L_0)
		{
			goto IL_0096;
		}
	}
	{
		// bool bLeft = eventData.position.x < eventData.pressPosition.x;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		float L_3 = L_2.___x_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_4, NULL);
		float L_6 = L_5.___x_0;
		// if (bLeft)
		if (!((((float)L_3) < ((float)L_6))? 1 : 0))
		{
			goto IL_004c;
		}
	}
	{
		// if (currentPageIndex < pages.Count - 1)
		int32_t L_7 = __this->___currentPageIndex_6;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_8 = __this->___pages_5;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_8, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, 1)))))
		{
			goto IL_0063;
		}
	}
	{
		// currentPageIndex++;
		int32_t L_10 = __this->___currentPageIndex_6;
		__this->___currentPageIndex_6 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		goto IL_0063;
	}

IL_004c:
	{
		// if (currentPageIndex > 0)
		int32_t L_11 = __this->___currentPageIndex_6;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		// currentPageIndex--;
		int32_t L_12 = __this->___currentPageIndex_6;
		__this->___currentPageIndex_6 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0063:
	{
		// mOnPageChanged.Invoke(pages.Count, currentPageIndex);
		UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E* L_13 = __this->___mOnPageChanged_10;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_14 = __this->___pages_5;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_14, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		int32_t L_16 = __this->___currentPageIndex_6;
		NullCheck(L_13);
		UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F(L_13, L_15, L_16, UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_RuntimeMethod_var);
		// targethorizontal = pages[currentPageIndex];
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_17 = __this->___pages_5;
		int32_t L_18 = __this->___currentPageIndex_6;
		NullCheck(L_17);
		float L_19;
		L_19 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_17, L_18, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		__this->___targethorizontal_8 = L_19;
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIScrollPage::UpdatePages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPage_UpdatePages_mC8A2D3649C9F1E8A7F656A3E2A4BE1C1962AA0EC (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	{
		// int count = this.rect.content.childCount;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___rect_4;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		V_0 = L_2;
		// int temp = 0;
		V_1 = 0;
		// for (int i = 0; i < count; i++)
		V_2 = 0;
		goto IL_003c;
	}

IL_0017:
	{
		// if (this.rect.content.GetChild(i).gameObject.activeSelf)
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_3 = __this->___rect_4;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_3, NULL);
		int32_t L_5 = V_2;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, L_5, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		// temp++;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003c:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0017;
		}
	}
	{
		// count = temp;
		int32_t L_13 = V_1;
		V_0 = L_13;
		// if (pages.Count != count)
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_14 = __this->___pages_5;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_14, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0092;
		}
	}
	{
		// if (count != 0)
		int32_t L_17 = V_0;
		if (!L_17)
		{
			goto IL_008b;
		}
	}
	{
		// pages.Clear();
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_18 = __this->___pages_5;
		NullCheck(L_18);
		List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_inline(L_18, List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_RuntimeMethod_var);
		// for (int i = 0; i < count; i++)
		V_3 = 0;
		goto IL_0087;
	}

IL_0062:
	{
		// float page = 0;
		V_4 = (0.0f);
		// if (count != 1)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		// page = i / ((float) (count - 1));
		int32_t L_20 = V_3;
		int32_t L_21 = V_0;
		V_4 = ((float)(((float)L_20)/((float)((int32_t)il2cpp_codegen_subtract(L_21, 1)))));
	}

IL_0076:
	{
		// pages.Add(page);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_22 = __this->___pages_5;
		float L_23 = V_4;
		NullCheck(L_22);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_22, L_23, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		// for (int i = 0; i < count; i++)
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0087:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_25 = V_3;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}

IL_008b:
	{
		// OnEndDrag(null);
		UIScrollPage_OnEndDrag_m1E091107BA588F82AE47EF83C4E0AA21A0A15B76(__this, (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)NULL, NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIScrollPage::SetPage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPage_SetPage_mF8BAA351898C5BC590A90F9C8B67234AA24CF83A (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, int32_t ___pageIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isDrag = false;
		__this->___isDrag_9 = (bool)0;
		// UpdatePages();
		UIScrollPage_UpdatePages_mC8A2D3649C9F1E8A7F656A3E2A4BE1C1962AA0EC(__this, NULL);
		// currentPageIndex = Mathf.Clamp(pageIndex, 0, pages.Count - 1);
		int32_t L_0 = ___pageIndex0;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_1 = __this->___pages_5;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_1, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), NULL);
		__this->___currentPageIndex_6 = L_3;
		// mOnPageChanged.Invoke(pages.Count, currentPageIndex);
		UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E* L_4 = __this->___mOnPageChanged_10;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_5 = __this->___pages_5;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_5, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		int32_t L_7 = __this->___currentPageIndex_6;
		NullCheck(L_4);
		UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F(L_4, L_6, L_7, UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_RuntimeMethod_var);
		// targethorizontal = pages[currentPageIndex];
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_8 = __this->___pages_5;
		int32_t L_9 = __this->___currentPageIndex_6;
		NullCheck(L_8);
		float L_10;
		L_10 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_8, L_9, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		__this->___targethorizontal_8 = L_10;
		// rect.horizontalNormalizedPosition = targethorizontal;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_11 = __this->___rect_4;
		float L_12 = __this->___targethorizontal_8;
		NullCheck(L_11);
		ScrollRect_set_horizontalNormalizedPosition_m9B268C9AE7891FC73623DC7BE6B9900640C029B6(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Int32 QFramework.UIScrollPage::GetPageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIScrollPage_GetPageCount_mA5E63E1CE58EE5C897F36C964C0D9ADC8B791940 (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pages.Count;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = __this->___pages_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_0, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 QFramework.UIScrollPage::GetCurrentPageIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIScrollPage_GetCurrentPageIndex_m72E91782A7E185E704780FC5A1DCA16D9AA11084 (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, const RuntimeMethod* method) 
{
	{
		// return currentPageIndex;
		int32_t L_0 = __this->___currentPageIndex_6;
		return L_0;
	}
}
// System.Void QFramework.UIScrollPage::AddPageChangeListener(UnityEngine.Events.UnityAction`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPage_AddPageChangeListener_m96F3FD274266EC4C5791903C78BC21DADE8793E9 (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_mFFB42BB41504A2CA6E5800FA7D844C42B042A8E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mOnPageChanged == null)
		UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E* L_0 = __this->___mOnPageChanged_10;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// mOnPageChanged = new UIScrollPageChangeEvent();
		UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E* L_1 = (UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E*)il2cpp_codegen_object_new(UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UIScrollPageChangeEvent__ctor_m784D1625C386B0E6FDC3FFA6332C2C3D4DB0AEEF(L_1, NULL);
		__this->___mOnPageChanged_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mOnPageChanged_10), (void*)L_1);
	}

IL_0013:
	{
		// mOnPageChanged.AddListener(listener);
		UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E* L_2 = __this->___mOnPageChanged_10;
		UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5* L_3 = ___listener0;
		NullCheck(L_2);
		UnityEvent_2_AddListener_mFFB42BB41504A2CA6E5800FA7D844C42B042A8E5(L_2, L_3, UnityEvent_2_AddListener_mFFB42BB41504A2CA6E5800FA7D844C42B042A8E5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QFramework.UIScrollPage::RemovePageChangeListener(UnityEngine.Events.UnityAction`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPage_RemovePageChangeListener_m3BCF0F603B4D9EE1DB94718B03843FFBFA424957 (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_RemoveListener_mD34E9515F48CC77780900CC01E54AA9099CB5FFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mOnPageChanged == null)
		UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E* L_0 = __this->___mOnPageChanged_10;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// mOnPageChanged.RemoveListener(listener);
		UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E* L_1 = __this->___mOnPageChanged_10;
		UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5* L_2 = ___listener0;
		NullCheck(L_1);
		UnityEvent_2_RemoveListener_mD34E9515F48CC77780900CC01E54AA9099CB5FFC(L_1, L_2, UnityEvent_2_RemoveListener_mD34E9515F48CC77780900CC01E54AA9099CB5FFC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QFramework.UIScrollPage::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPage_OnDestroy_m24E0E75DC64522B548E136482949B3337F856FC9 (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, const RuntimeMethod* method) 
{
	{
		// if (mOnPageChanged != null)
		UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E* L_0 = __this->___mOnPageChanged_10;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// mOnPageChanged.RemoveAllListeners();
		UIScrollPageChangeEvent_t6A0150CDB9CE9A3E403A053AF5DBF82F7E53764E* L_1 = __this->___mOnPageChanged_10;
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIScrollPage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPage__ctor_m36E4FC276A318B40757F490C899388FE97A07B83 (UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<float> pages = new List<float>();
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_0, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		__this->___pages_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pages_5), (void*)L_0);
		// int currentPageIndex = -1;
		__this->___currentPageIndex_6 = (-1);
		// public float smooting = 4;
		__this->___smooting_7 = (4.0f);
		// float delay = 0.1f;
		__this->___delay_12 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIScrollPageMark::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPageMark_Awake_m6E93B3F99F2EE124C8DF985A0951528C7F089E4E (UIScrollPageMark_t16503C11D9E31C26B5196596E06A6F5EB0E5AA1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIScrollPageMark_OnScrollPageChanged_m0C4A82A9551F7AC85456C3CB5E2ED416DC3BDB15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdjustTogglePos();
		UIScrollPageMark_AdjustTogglePos_m294AE94EB43B2F7E2AEF24A458162DCA69D065AC(__this, NULL);
		// scrollPage.AddPageChangeListener(OnScrollPageChanged);
		UIScrollPage_t417B1393A7D3B12A2216705C031CE98D09E1B338* L_0 = __this->___scrollPage_4;
		UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5* L_1 = (UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5*)il2cpp_codegen_object_new(UnityAction_2_t24BA1E63F7E08D590D2087568B4DD297686E87A5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_2__ctor_mC2BCDA5864306C7135BD04719230392666619DD7(L_1, __this, (intptr_t)((void*)UIScrollPageMark_OnScrollPageChanged_m0C4A82A9551F7AC85456C3CB5E2ED416DC3BDB15_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		UIScrollPage_AddPageChangeListener_m96F3FD274266EC4C5791903C78BC21DADE8793E9(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIScrollPageMark::OnScrollPageChanged(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPageMark_OnScrollPageChanged_m0C4A82A9551F7AC85456C3CB5E2ED416DC3BDB15 (UIScrollPageMark_t16503C11D9E31C26B5196596E06A6F5EB0E5AA1C* __this, int32_t ___pageCount0, int32_t ___currentPageIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0B0674E845F360FA8837AEA0100C3500E3E4FE47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m5C6866E1EB26B4EE88B075D305895349483BBA07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (pageCount != toggleList.Count)
		int32_t L_0 = ___pageCount0;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_1 = __this->___toggleList_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline(L_1, List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_00a2;
		}
	}
	{
		// if (pageCount > toggleList.Count)
		int32_t L_3 = ___pageCount0;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_4 = __this->___toggleList_9;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline(L_4, List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)L_5)))
		{
			goto IL_004d;
		}
	}
	{
		// int cc = pageCount - toggleList.Count;
		int32_t L_6 = ___pageCount0;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_7 = __this->___toggleList_9;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline(L_7, List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, L_8));
		// for (int i = 0; i < cc; i++)
		V_1 = 0;
		goto IL_0047;
	}

IL_0031:
	{
		// toggleList.Add(CreateToggle(i));
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_9 = __this->___toggleList_9;
		int32_t L_10 = V_1;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_11;
		L_11 = UIScrollPageMark_CreateToggle_m0B13471006C7704B0B5A6454B8E61DD09C16519A(__this, L_10, NULL);
		NullCheck(L_9);
		List_1_Add_m0B0674E845F360FA8837AEA0100C3500E3E4FE47_inline(L_9, L_11, List_1_Add_m0B0674E845F360FA8837AEA0100C3500E3E4FE47_RuntimeMethod_var);
		// for (int i = 0; i < cc; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0047:
	{
		// for (int i = 0; i < cc; i++)
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_009c;
	}

IL_004d:
	{
		// else if (pageCount < toggleList.Count)
		int32_t L_15 = ___pageCount0;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_16 = __this->___toggleList_9;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline(L_16, List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		if ((((int32_t)L_15) >= ((int32_t)L_17)))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_008e;
	}

IL_005d:
	{
		// Toggle t = toggleList[toggleList.Count - 1];
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_18 = __this->___toggleList_9;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_19 = __this->___toggleList_9;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline(L_19, List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		NullCheck(L_18);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_21;
		L_21 = List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA(L_18, ((int32_t)il2cpp_codegen_subtract(L_20, 1)), List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA_RuntimeMethod_var);
		V_2 = L_21;
		// toggleList.Remove(t);
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_22 = __this->___toggleList_9;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_23 = V_2;
		NullCheck(L_22);
		bool L_24;
		L_24 = List_1_Remove_m5C6866E1EB26B4EE88B075D305895349483BBA07(L_22, L_23, List_1_Remove_m5C6866E1EB26B4EE88B075D305895349483BBA07_RuntimeMethod_var);
		// DestroyImmediate(t.gameObject);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_25 = V_2;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_26, NULL);
	}

IL_008e:
	{
		// while (toggleList.Count > pageCount)
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_27 = __this->___toggleList_9;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline(L_27, List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		int32_t L_29 = ___pageCount0;
		if ((((int32_t)L_28) > ((int32_t)L_29)))
		{
			goto IL_005d;
		}
	}

IL_009c:
	{
		// AdjustTogglePos();
		UIScrollPageMark_AdjustTogglePos_m294AE94EB43B2F7E2AEF24A458162DCA69D065AC(__this, NULL);
	}

IL_00a2:
	{
		// toggleGroup.gameObject.SetActive(pageCount > 1);
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_30 = __this->___toggleGroup_5;
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		int32_t L_32 = ___pageCount0;
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)((((int32_t)L_32) > ((int32_t)1))? 1 : 0), NULL);
		// if (currentPageIndex >= 0)
		int32_t L_33 = ___currentPageIndex1;
		if ((((int32_t)L_33) < ((int32_t)0)))
		{
			goto IL_00fa;
		}
	}
	{
		// for (int i = 0; i < toggleList.Count; i++)
		V_3 = 0;
		goto IL_00ec;
	}

IL_00be:
	{
		// if (i == currentPageIndex) toggleList[i].isOn = true;
		int32_t L_34 = V_3;
		int32_t L_35 = ___currentPageIndex1;
		if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
		{
			goto IL_00d6;
		}
	}
	{
		// if (i == currentPageIndex) toggleList[i].isOn = true;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_36 = __this->___toggleList_9;
		int32_t L_37 = V_3;
		NullCheck(L_36);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_38;
		L_38 = List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA(L_36, L_37, List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA_RuntimeMethod_var);
		NullCheck(L_38);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_38, (bool)1, NULL);
		goto IL_00e8;
	}

IL_00d6:
	{
		// else toggleList[i].isOn = false;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_39 = __this->___toggleList_9;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_41;
		L_41 = List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA(L_39, L_40, List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA_RuntimeMethod_var);
		NullCheck(L_41);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_41, (bool)0, NULL);
	}

IL_00e8:
	{
		// for (int i = 0; i < toggleList.Count; i++)
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00ec:
	{
		// for (int i = 0; i < toggleList.Count; i++)
		int32_t L_43 = V_3;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_44 = __this->___toggleList_9;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline(L_44, List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_00be;
		}
	}

IL_00fa:
	{
		// }
		return;
	}
}
// UnityEngine.UI.Toggle QFramework.UIScrollPageMark::CreateToggle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* UIScrollPageMark_CreateToggle_m0B13471006C7704B0B5A6454B8E61DD09C16519A (UIScrollPageMark_t16503C11D9E31C26B5196596E06A6F5EB0E5AA1C* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m15557773C5C7B03FA319A668FB60FD7A945F5A16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Toggle t = GameObject.Instantiate<Toggle>(togglePrefab);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___togglePrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1;
		L_1 = Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m15557773C5C7B03FA319A668FB60FD7A945F5A16(L_0, Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m15557773C5C7B03FA319A668FB60FD7A945F5A16_RuntimeMethod_var);
		// t.gameObject.SetActive(true);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = L_1;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// t.transform.SetParent(toggleGroup.transform);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = L_2;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_6 = __this->___toggleGroup_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_5);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_5, L_7, NULL);
		// t.transform.localScale = Vector3.one;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_8 = L_4;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_10, NULL);
		// t.transform.localPosition = Vector3.zero;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_11 = L_8;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_12);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_13, NULL);
		// return t;
		return L_11;
	}
}
// System.Void QFramework.UIScrollPageMark::AdjustTogglePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPageMark_AdjustTogglePos_m294AE94EB43B2F7E2AEF24A458162DCA69D065AC (UIScrollPageMark_t16503C11D9E31C26B5196596E06A6F5EB0E5AA1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// UnityEngine.Vector2 startPos = centerPos - 0.5f * (toggleList.Count - 1) * interval;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___centerPos_7;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_1 = __this->___toggleList_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline(L_1, List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___interval_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Multiply_mB3B310D2D0CAE78AFB2AE6A9FD2902DE4B359211_inline(((float)il2cpp_codegen_multiply((0.5f), ((float)((int32_t)il2cpp_codegen_subtract(L_2, 1))))), L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_0, L_4, NULL);
		V_0 = L_5;
		// for (int i = 0; i < toggleList.Count; i++)
		V_1 = 0;
		goto IL_005c;
	}

IL_002f:
	{
		// toggleList[i].GetComponent<RectTransform>().anchoredPosition = startPos + i * interval;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_6 = __this->___toggleList_9;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_8;
		L_8 = List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA(L_6, L_7, List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA_RuntimeMethod_var);
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_8, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		int32_t L_11 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = __this->___interval_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Multiply_mB3B310D2D0CAE78AFB2AE6A9FD2902DE4B359211_inline(((float)L_11), L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_10, L_13, NULL);
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_9, L_14, NULL);
		// for (int i = 0; i < toggleList.Count; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005c:
	{
		// for (int i = 0; i < toggleList.Count; i++)
		int32_t L_16 = V_1;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_17 = __this->___toggleList_9;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline(L_17, List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_002f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void QFramework.UIScrollPageMark::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIScrollPageMark__ctor_m8FCA1D09E99E31653B6D1E1BB0AD5BCFF8F99FD2 (UIScrollPageMark_t16503C11D9E31C26B5196596E06A6F5EB0E5AA1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4551F4DE4ED2A15E985982AD4322456CE52C5E2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Toggle> toggleList = new List<Toggle>();
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_0 = (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16*)il2cpp_codegen_object_new(List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4551F4DE4ED2A15E985982AD4322456CE52C5E2B(L_0, List_1__ctor_m4551F4DE4ED2A15E985982AD4322456CE52C5E2B_RuntimeMethod_var);
		__this->___toggleList_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggleList_9), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIManager::RegisterMsgCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_RegisterMsgCenter_m7BDB3E731F454642A70E9FC559D14CE6378D2503 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterMsgCenterU3Eb__0_0_m83B43FA8C64108554819699044ED252586C8DA87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	{
		// QMsgCenter.RegisterManagerFactory(QMgrID.UI, () => Instance);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_il2cpp_TypeInfo_var);
		Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* L_0 = ((U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = ((int32_t)3000);
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = ((int32_t)3000);
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_il2cpp_TypeInfo_var);
		U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636* L_2 = ((U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* L_3 = (Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51*)il2cpp_codegen_object_new(Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_m484ADE26CBCCAE8C3D51B7C0FFBB02EBFCB14CE3(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CRegisterMsgCenterU3Eb__0_0_m83B43FA8C64108554819699044ED252586C8DA87_RuntimeMethod_var), NULL);
		Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* L_4 = L_3;
		((U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var);
		QMsgCenter_RegisterManagerFactory_m9BA8AA3E19E517E746761539981437D5A4D113A6(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIManager::QFramework.ISingleton.OnSingletonInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_QFramework_ISingleton_OnSingletonInit_m5D233749360518236668B18ABF895EB72FA389E7 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// QFramework.UIManager QFramework.UIManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingletonProperty_1_get_Instance_mEEA008E114B920B46059D7B8916F6E6FBE3867D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E07C3C72F4E6CB52AE2B85F131585C13556397D);
		s_Il2CppMethodInitialized = true;
	}
	UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* V_0 = NULL;
	UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	{
		// if (!mInstance)
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_0 = ((UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6_il2cpp_TypeInfo_var))->___mInstance_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		// var uiRoot = UIRoot.Instance;
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_2;
		L_2 = UIRoot_get_Instance_m600B5A4DA38A154E2C09DB791A310039D73FF097(NULL);
		V_0 = L_2;
		// Debug.Log("currentUIRoot:" + uiRoot);
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_3 = V_0;
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_4 = L_3;
		G_B2_0 = L_4;
		G_B2_1 = _stringLiteral2E07C3C72F4E6CB52AE2B85F131585C13556397D;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = _stringLiteral2E07C3C72F4E6CB52AE2B85F131585C13556397D;
			goto IL_001f;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_0024;
	}

IL_001f:
	{
		NullCheck(G_B3_0);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_1;
	}

IL_0024:
	{
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B4_1, G_B4_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// mInstance = MonoSingletonProperty<UIManager>.Instance;
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_7;
		L_7 = MonoSingletonProperty_1_get_Instance_mEEA008E114B920B46059D7B8916F6E6FBE3867D6(MonoSingletonProperty_1_get_Instance_mEEA008E114B920B46059D7B8916F6E6FBE3867D6_RuntimeMethod_var);
		((UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6_il2cpp_TypeInfo_var))->___mInstance_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6_il2cpp_TypeInfo_var))->___mInstance_7), (void*)L_7);
	}

IL_0038:
	{
		// return mInstance;
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_8 = ((UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6_il2cpp_TypeInfo_var))->___mInstance_7;
		return L_8;
	}
}
// System.Void QFramework.UIManager::OpenUIAsync(QFramework.PanelSearchKeys,System.Action`1<QFramework.IPanel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OpenUIAsync_mE91FEC8C84F490D1DE9707F025A75B606A10B51A (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* ___onLoad1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COpenUIAsyncU3Eb__0_mC00BEF1D9A24FBB70C01062C5CD17F418AC9421D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_1_U3COpenUIAsyncU3Eb__1_m2E42F37CB8F34FA9721258CE286EBC6C482FDB47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* V_0 = NULL;
	U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* V_1 = NULL;
	Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* G_B5_0 = NULL;
	Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* G_B4_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* L_0 = (U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m4C47D5A30DBD5DE03D8FE8BC715F9A0DA7B0D7A4(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* L_1 = V_0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_2 = ___panelSearchKeys0;
		NullCheck(L_1);
		L_1->___panelSearchKeys_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___panelSearchKeys_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* L_3 = V_0;
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_4 = ___onLoad1;
		NullCheck(L_3);
		L_3->___onLoad_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onLoad_1), (void*)L_4);
		// if (panelSearchKeys.OpenType == PanelOpenType.Single)
		U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* L_5 = V_0;
		NullCheck(L_5);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_6 = L_5->___panelSearchKeys_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___OpenType_6;
		if (L_7)
		{
			goto IL_00b9;
		}
	}
	{
		U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* L_8 = (U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		U3CU3Ec__DisplayClass5_1__ctor_m8F32AEAEC22DAB8384CB8C1D096D5E5AE912EAB6(L_8, NULL);
		V_1 = L_8;
		U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* L_9 = V_1;
		U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* L_10 = V_0;
		NullCheck(L_9);
		L_9->___CSU24U3CU3E8__locals1_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___CSU24U3CU3E8__locals1_1), (void*)L_10);
		// var retPanel = UIKit.Table.GetPanelsByPanelSearchKeys(panelSearchKeys).FirstOrDefault();
		U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_12;
		L_12 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* L_13 = V_1;
		NullCheck(L_13);
		U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* L_14 = L_13->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_14);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_15 = L_14->___panelSearchKeys_0;
		NullCheck(L_12);
		RuntimeObject* L_16;
		L_16 = UIPanelTable_GetPanelsByPanelSearchKeys_m9D881B3CC4765394EADCD559E46A5B30CB646874(L_12, L_15, NULL);
		RuntimeObject* L_17;
		L_17 = Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0(L_16, Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___retPanel_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___retPanel_0), (void*)L_17);
		// if (retPanel == null)
		U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* L_18 = V_1;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___retPanel_0;
		if (L_19)
		{
			goto IL_0077;
		}
	}
	{
		// CreateUIAsync(panelSearchKeys, (panel) =>
		// {
		//     retPanel = panel;
		//     retPanel.Open(panelSearchKeys.UIData);
		//     retPanel.Show();
		//     onLoad?.Invoke(retPanel);
		// });
		U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* L_20 = V_1;
		NullCheck(L_20);
		U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* L_21 = L_20->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_21);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_22 = L_21->___panelSearchKeys_0;
		U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* L_23 = V_1;
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_24 = (Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40*)il2cpp_codegen_object_new(Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_1__ctor_m4975B7FAFBBB51CBF36FF6936FB67334DAE65BC6(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass5_1_U3COpenUIAsyncU3Eb__1_m2E42F37CB8F34FA9721258CE286EBC6C482FDB47_RuntimeMethod_var), NULL);
		UIManager_CreateUIAsync_m161D8CB646367F65257132FB0B83A3F1AC7ED803(__this, L_22, L_24, NULL);
		return;
	}

IL_0077:
	{
		// retPanel.Open(panelSearchKeys.UIData);
		U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* L_25 = V_1;
		NullCheck(L_25);
		RuntimeObject* L_26 = L_25->___retPanel_0;
		U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* L_27 = V_1;
		NullCheck(L_27);
		U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* L_28 = L_27->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_28);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_29 = L_28->___panelSearchKeys_0;
		NullCheck(L_29);
		RuntimeObject* L_30 = L_29->___UIData_4;
		NullCheck(L_26);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void QFramework.IPanel::Open(QFramework.IUIData) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_26, L_30);
		// retPanel.Show();
		U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* L_31 = V_1;
		NullCheck(L_31);
		RuntimeObject* L_32 = L_31->___retPanel_0;
		NullCheck(L_32);
		InterfaceActionInvoker0::Invoke(9 /* System.Void QFramework.IPanel::Show() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_32);
		// onLoad?.Invoke(retPanel);
		U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* L_33 = V_1;
		NullCheck(L_33);
		U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* L_34 = L_33->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_34);
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_35 = L_34->___onLoad_1;
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_36 = L_35;
		G_B4_0 = L_36;
		if (L_36)
		{
			G_B5_0 = L_36;
			goto IL_00ad;
		}
	}
	{
		return;
	}

IL_00ad:
	{
		U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* L_37 = V_1;
		NullCheck(L_37);
		RuntimeObject* L_38 = L_37->___retPanel_0;
		NullCheck(G_B5_0);
		Action_1_Invoke_m1D681E7EF8E6EAFA970F74982AE00F9EB9097F8A_inline(G_B5_0, L_38, NULL);
		return;
	}

IL_00b9:
	{
		// CreateUIAsync(panelSearchKeys, (panel) =>
		// {
		//     panel.Open(panelSearchKeys.UIData);
		//     panel.Show();
		//     onLoad?.Invoke(panel);
		// });
		U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* L_39 = V_0;
		NullCheck(L_39);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_40 = L_39->___panelSearchKeys_0;
		U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* L_41 = V_0;
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_42 = (Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40*)il2cpp_codegen_object_new(Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Action_1__ctor_m4975B7FAFBBB51CBF36FF6936FB67334DAE65BC6(L_42, L_41, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3COpenUIAsyncU3Eb__0_mC00BEF1D9A24FBB70C01062C5CD17F418AC9421D_RuntimeMethod_var), NULL);
		UIManager_CreateUIAsync_m161D8CB646367F65257132FB0B83A3F1AC7ED803(__this, L_40, L_42, NULL);
		// }
		return;
	}
}
// QFramework.IPanel QFramework.UIManager::OpenUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIManager_OpenUI_m5728CC2670494DEA84610F185C4C54D47B5C5F0F (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (panelSearchKeys.OpenType == PanelOpenType.Single)
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_0 = ___panelSearchKeys0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___OpenType_6;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		// var retPanel = UIKit.Table.GetPanelsByPanelSearchKeys(panelSearchKeys).FirstOrDefault();
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_2;
		L_2 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_3 = ___panelSearchKeys0;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = UIPanelTable_GetPanelsByPanelSearchKeys_m9D881B3CC4765394EADCD559E46A5B30CB646874(L_2, L_3, NULL);
		RuntimeObject* L_5;
		L_5 = Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0(L_4, Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0_RuntimeMethod_var);
		V_0 = L_5;
		// if (retPanel == null)
		RuntimeObject* L_6 = V_0;
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		// retPanel = CreateUI(panelSearchKeys);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_7 = ___panelSearchKeys0;
		RuntimeObject* L_8;
		L_8 = UIManager_CreateUI_mA1E9CB1AB1D6ADFCE457B19619158C6C2CB94786(__this, L_7, NULL);
		V_0 = L_8;
	}

IL_0024:
	{
		// retPanel.Open(panelSearchKeys.UIData);
		RuntimeObject* L_9 = V_0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_10 = ___panelSearchKeys0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___UIData_4;
		NullCheck(L_9);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void QFramework.IPanel::Open(QFramework.IUIData) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_9, L_11);
		// retPanel.Show();
		RuntimeObject* L_12 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(9 /* System.Void QFramework.IPanel::Show() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_12);
		// return retPanel;
		RuntimeObject* L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		// var retPanel = CreateUI(panelSearchKeys);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_14 = ___panelSearchKeys0;
		RuntimeObject* L_15;
		L_15 = UIManager_CreateUI_mA1E9CB1AB1D6ADFCE457B19619158C6C2CB94786(__this, L_14, NULL);
		// retPanel.Open(panelSearchKeys.UIData);
		RuntimeObject* L_16 = L_15;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_17 = ___panelSearchKeys0;
		NullCheck(L_17);
		RuntimeObject* L_18 = L_17->___UIData_4;
		NullCheck(L_16);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void QFramework.IPanel::Open(QFramework.IUIData) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_16, L_18);
		// retPanel.Show();
		RuntimeObject* L_19 = L_16;
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(9 /* System.Void QFramework.IPanel::Show() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_19);
		// return retPanel;
		return L_19;
	}
}
// System.Void QFramework.UIManager::ShowUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowUI_mE23C9DDF0ABAF70DF0DB57AC2AB131ACA0274502 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var retPanel = UIKit.Table.GetPanelsByPanelSearchKeys(panelSearchKeys).FirstOrDefault();
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_0;
		L_0 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = ___panelSearchKeys0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UIPanelTable_GetPanelsByPanelSearchKeys_m9D881B3CC4765394EADCD559E46A5B30CB646874(L_0, L_1, NULL);
		RuntimeObject* L_3;
		L_3 = Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0(L_2, Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0_RuntimeMethod_var);
		V_0 = L_3;
		// if (retPanel != null)
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// retPanel.Show();
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(9 /* System.Void QFramework.IPanel::Show() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_5);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIManager::HideUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_HideUI_m013B84A7FDFB9D0460041E77EEEC6FEBCE07F1D3 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var retPanel = UIKit.Table.GetPanelsByPanelSearchKeys(panelSearchKeys).FirstOrDefault();
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_0;
		L_0 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = ___panelSearchKeys0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UIPanelTable_GetPanelsByPanelSearchKeys_m9D881B3CC4765394EADCD559E46A5B30CB646874(L_0, L_1, NULL);
		RuntimeObject* L_3;
		L_3 = Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0(L_2, Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0_RuntimeMethod_var);
		V_0 = L_3;
		// if (retPanel != null)
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// retPanel.Hide();
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(10 /* System.Void QFramework.IPanel::Hide() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_5);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIManager::CloseAllUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_CloseAllUI_m156696A054D3D34F8F185875C408C964DBEB66F5 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t771BBB6FBA53E816F8E55A4D905D973FC4B42A16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTable_1_Clear_mF8155C73457DFE7EBEF805F4A8383DDC52C38947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// foreach (var layer in UIKit.Table)
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_0;
		L_0 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.Generic.IEnumerator`1<TDataItem> QFramework.UIKitTable`1<QFramework.IPanel>::GetEnumerator() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_003e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_003e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002b_1;
			}

IL_000d_1:
			{
				// foreach (var layer in UIKit.Table)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<QFramework.IPanel>::get_Current() */, IEnumerator_1_t771BBB6FBA53E816F8E55A4D905D973FC4B42A16_il2cpp_TypeInfo_var, L_4);
				// layer.Close();
				RuntimeObject* L_6 = L_5;
				NullCheck(L_6);
				InterfaceActionInvoker1< bool >::Invoke(11 /* System.Void QFramework.IPanel::Close(System.Boolean) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_6, (bool)1);
				// layer.Info.Recycle2Cache();
				RuntimeObject* L_7 = L_6;
				NullCheck(L_7);
				PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_8;
				L_8 = InterfaceFuncInvoker0< PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* >::Invoke(3 /* QFramework.PanelInfo QFramework.IPanel::get_Info() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_7);
				NullCheck(L_8);
				PanelInfo_Recycle2Cache_mF1AA6D25408D398B8FCC6C27E4D4526E6E2F2F19(L_8, NULL);
				// layer.Info = null;
				NullCheck(L_7);
				InterfaceActionInvoker1< PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* >::Invoke(4 /* System.Void QFramework.IPanel::set_Info(QFramework.PanelInfo) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_7, (PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94*)NULL);
			}

IL_002b_1:
			{
				// foreach (var layer in UIKit.Table)
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// UIKit.Table.Clear();
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_11;
		L_11 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		NullCheck(L_11);
		UIKitTable_1_Clear_mF8155C73457DFE7EBEF805F4A8383DDC52C38947(L_11, UIKitTable_1_Clear_mF8155C73457DFE7EBEF805F4A8383DDC52C38947_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QFramework.UIManager::HideAllUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_HideAllUI_mE8ED8B3BF5AAA9CBA0563D73E3868161351EA41E (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t771BBB6FBA53E816F8E55A4D905D973FC4B42A16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// foreach (var panel in UIKit.Table)
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_0;
		L_0 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.Generic.IEnumerator`1<TDataItem> QFramework.UIKitTable`1<QFramework.IPanel>::GetEnumerator() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002b;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0018_1;
			}

IL_000d_1:
			{
				// foreach (var panel in UIKit.Table)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<QFramework.IPanel>::get_Current() */, IEnumerator_1_t771BBB6FBA53E816F8E55A4D905D973FC4B42A16_il2cpp_TypeInfo_var, L_4);
				// panel.Hide();
				NullCheck(L_5);
				InterfaceActionInvoker0::Invoke(10 /* System.Void QFramework.IPanel::Hide() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_5);
			}

IL_0018_1:
			{
				// foreach (var panel in UIKit.Table)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				if (L_7)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_002c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIManager::CloseUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_CloseUI_m523D5AE7E1C1DD709B036FE9BF9D64C04C91A408 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_LastOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_mAD4458B5818241C93A31F3E99C3560ECE93F5A81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTable_1_Remove_m87C1D9DBBC892ED7ED7B97F8EB7DC0E57D52314E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var panel = UIKit.Table.GetPanelsByPanelSearchKeys(panelSearchKeys).LastOrDefault();
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_0;
		L_0 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = ___panelSearchKeys0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UIPanelTable_GetPanelsByPanelSearchKeys_m9D881B3CC4765394EADCD559E46A5B30CB646874(L_0, L_1, NULL);
		RuntimeObject* L_3;
		L_3 = Enumerable_LastOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_mAD4458B5818241C93A31F3E99C3560ECE93F5A81(L_2, Enumerable_LastOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_mAD4458B5818241C93A31F3E99C3560ECE93F5A81_RuntimeMethod_var);
		V_0 = L_3;
		// if (panel as UIPanel)
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(((UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20*)IsInstClass((RuntimeObject*)L_4, UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_il2cpp_TypeInfo_var)), NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// panel.Close();
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker1< bool >::Invoke(11 /* System.Void QFramework.IPanel::Close(System.Boolean) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_6, (bool)1);
		// UIKit.Table.Remove(panel);
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_7;
		L_7 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		RuntimeObject* L_8 = V_0;
		NullCheck(L_7);
		UIKitTable_1_Remove_m87C1D9DBBC892ED7ED7B97F8EB7DC0E57D52314E(L_7, L_8, UIKitTable_1_Remove_m87C1D9DBBC892ED7ED7B97F8EB7DC0E57D52314E_RuntimeMethod_var);
		// panel.Info.Recycle2Cache();
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_10;
		L_10 = InterfaceFuncInvoker0< PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* >::Invoke(3 /* QFramework.PanelInfo QFramework.IPanel::get_Info() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		PanelInfo_Recycle2Cache_mF1AA6D25408D398B8FCC6C27E4D4526E6E2F2F19(L_10, NULL);
		// panel.Info = null;
		RuntimeObject* L_11 = V_0;
		NullCheck(L_11);
		InterfaceActionInvoker1< PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* >::Invoke(4 /* System.Void QFramework.IPanel::set_Info(QFramework.PanelInfo) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_11, (PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94*)NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIManager::RemoveUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_RemoveUI_m0617315F9CD1AD0F36DDBA6A952BFFBAADBB6B59 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTable_1_Remove_m87C1D9DBBC892ED7ED7B97F8EB7DC0E57D52314E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var panel = UIKit.Table.GetPanelsByPanelSearchKeys(panelSearchKeys).FirstOrDefault();
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_0;
		L_0 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = ___panelSearchKeys0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UIPanelTable_GetPanelsByPanelSearchKeys_m9D881B3CC4765394EADCD559E46A5B30CB646874(L_0, L_1, NULL);
		RuntimeObject* L_3;
		L_3 = Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0(L_2, Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0_RuntimeMethod_var);
		V_0 = L_3;
		// if (panel != null)
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// UIKit.Table.Remove(panel);
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_5;
		L_5 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		RuntimeObject* L_6 = V_0;
		NullCheck(L_5);
		UIKitTable_1_Remove_m87C1D9DBBC892ED7ED7B97F8EB7DC0E57D52314E(L_5, L_6, UIKitTable_1_Remove_m87C1D9DBBC892ED7ED7B97F8EB7DC0E57D52314E_RuntimeMethod_var);
	}

IL_001f:
	{
		// }
		return;
	}
}
// QFramework.UIPanel QFramework.UIManager::GetUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* UIManager_GetUI_mE8674E12C1D3FD09191DBBE5662ECF23EE22F0B4 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UIKit.Table.GetPanelsByPanelSearchKeys(panelSearchKeys).FirstOrDefault() as UIPanel;
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_0;
		L_0 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = ___panelSearchKeys0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UIPanelTable_GetPanelsByPanelSearchKeys_m9D881B3CC4765394EADCD559E46A5B30CB646874(L_0, L_1, NULL);
		RuntimeObject* L_3;
		L_3 = Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0(L_2, Enumerable_FirstOrDefault_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m373FB2AB44F3DB0B36A040D5E4BB792BA16D97F0_RuntimeMethod_var);
		return ((UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20*)IsInstClass((RuntimeObject*)L_3, UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_il2cpp_TypeInfo_var));
	}
}
// System.Int32 QFramework.UIManager::get_ManagerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIManager_get_ManagerId_m942F61E33AFAF1FEC255BE5EC4CFFBE5BD6DC9F9 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, const RuntimeMethod* method) 
{
	{
		// get { return QMgrID.UI; }
		return ((int32_t)3000);
	}
}
// QFramework.IPanel QFramework.UIManager::CreateUI(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIManager_CreateUI_mA1E9CB1AB1D6ADFCE457B19619158C6C2CB94786 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTable_1_Add_m918C68CFCC29AEB06D94959B39AF3A1C6D960B80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_1 = NULL;
	{
		// var panel = UIKit.Config.LoadPanel(panelSearchKeys);
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* L_0 = ((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___Config_0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = ___panelSearchKeys0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* >::Invoke(5 /* QFramework.IPanel QFramework.UIKitConfig::LoadPanel(QFramework.PanelSearchKeys) */, L_0, L_1);
		V_0 = L_2;
		// UIKit.Root.SetLevelOfPanel(panelSearchKeys.Level, panel);
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_3;
		L_3 = UIKit_get_Root_mA74A7A274AD69093AC4504C4D792D4744B22309B(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_4 = ___panelSearchKeys0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Level_3;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_3);
		UIRoot_SetLevelOfPanel_m74415AED6A4052FB4FBC62AB045C47254EB045C7(L_3, L_5, L_6, NULL);
		// UIKit.Config.SetDefaultSizeOfPanel(panel);
		UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* L_7 = ((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___Config_0;
		RuntimeObject* L_8 = V_0;
		NullCheck(L_7);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void QFramework.UIKitConfig::SetDefaultSizeOfPanel(QFramework.IPanel) */, L_7, L_8);
		// panel.Transform.gameObject.name = panelSearchKeys.GameObjName ?? panelSearchKeys.PanelType.Name;
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QFramework.IPanel::get_Transform() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_12 = ___panelSearchKeys0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___GameObjName_2;
		String_t* L_14 = L_13;
		G_B1_0 = L_14;
		G_B1_1 = L_11;
		if (L_14)
		{
			G_B2_0 = L_14;
			G_B2_1 = L_11;
			goto IL_0048;
		}
	}
	{
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_15 = ___panelSearchKeys0;
		NullCheck(L_15);
		Type_t* L_16 = L_15->___PanelType_0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		G_B2_0 = L_17;
		G_B2_1 = G_B1_1;
	}

IL_0048:
	{
		NullCheck(G_B2_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(G_B2_1, G_B2_0, NULL);
		// panel.Info = PanelInfo.Allocate(panelSearchKeys.GameObjName, panelSearchKeys.Level, panelSearchKeys.UIData,
		//     panelSearchKeys.PanelType, panelSearchKeys.AssetBundleName);
		RuntimeObject* L_18 = V_0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_19 = ___panelSearchKeys0;
		NullCheck(L_19);
		String_t* L_20 = L_19->___GameObjName_2;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_21 = ___panelSearchKeys0;
		NullCheck(L_21);
		int32_t L_22 = L_21->___Level_3;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_23 = ___panelSearchKeys0;
		NullCheck(L_23);
		RuntimeObject* L_24 = L_23->___UIData_4;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_25 = ___panelSearchKeys0;
		NullCheck(L_25);
		Type_t* L_26 = L_25->___PanelType_0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_27 = ___panelSearchKeys0;
		NullCheck(L_27);
		String_t* L_28 = L_27->___AssetBundleName_1;
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_29;
		L_29 = PanelInfo_Allocate_m2724CE5A38628FAB9502A1126C787E046AB00A32(L_20, L_22, L_24, L_26, L_28, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* >::Invoke(4 /* System.Void QFramework.IPanel::set_Info(QFramework.PanelInfo) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_18, L_29);
		// UIKit.Table.Add(panel);
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_30;
		L_30 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		RuntimeObject* L_31 = V_0;
		NullCheck(L_30);
		UIKitTable_1_Add_m918C68CFCC29AEB06D94959B39AF3A1C6D960B80(L_30, L_31, UIKitTable_1_Add_m918C68CFCC29AEB06D94959B39AF3A1C6D960B80_RuntimeMethod_var);
		// panel.Init(panelSearchKeys.UIData);
		RuntimeObject* L_32 = V_0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_33 = ___panelSearchKeys0;
		NullCheck(L_33);
		RuntimeObject* L_34 = L_33->___UIData_4;
		NullCheck(L_32);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void QFramework.IPanel::Init(QFramework.IUIData) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_32, L_34);
		// return panel;
		RuntimeObject* L_35 = V_0;
		return L_35;
	}
}
// System.Void QFramework.UIManager::CreateUIAsync(QFramework.PanelSearchKeys,System.Action`1<QFramework.IPanel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_CreateUIAsync_m161D8CB646367F65257132FB0B83A3F1AC7ED803 (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* ___onPanelCreate1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CCreateUIAsyncU3Eb__0_mF69C4FEFF13B9A2C74175DC2A542DE3DE43CC75E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD* L_0 = (U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass17_0__ctor_m54962EAAB514FC487B365C9078862B352666B54D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD* L_1 = V_0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_2 = ___panelSearchKeys0;
		NullCheck(L_1);
		L_1->___panelSearchKeys_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___panelSearchKeys_0), (void*)L_2);
		U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD* L_3 = V_0;
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_4 = ___onPanelCreate1;
		NullCheck(L_3);
		L_3->___onPanelCreate_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onPanelCreate_1), (void*)L_4);
		// UIKit.Config.LoadPanelAsync(panelSearchKeys, panel =>
		// {
		//     UIKit.Root.SetLevelOfPanel(panelSearchKeys.Level, panel);
		// 
		//     UIKit.Config.SetDefaultSizeOfPanel(panel);
		// 
		//     panel.Transform.gameObject.name = panelSearchKeys.GameObjName ?? panelSearchKeys.PanelType.Name;
		// 
		//     panel.Info = PanelInfo.Allocate(panelSearchKeys.GameObjName, panelSearchKeys.Level,
		//         panelSearchKeys.UIData,
		//         panelSearchKeys.PanelType, panelSearchKeys.AssetBundleName);
		// 
		//     UIKit.Table.Add(panel);
		// 
		//     panel.Init(panelSearchKeys.UIData);
		// 
		//     onPanelCreate(panel);
		// });
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* L_5 = ((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___Config_0;
		U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD* L_6 = V_0;
		NullCheck(L_6);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_7 = L_6->___panelSearchKeys_0;
		U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD* L_8 = V_0;
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_9 = (Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40*)il2cpp_codegen_object_new(Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_m4975B7FAFBBB51CBF36FF6936FB67334DAE65BC6(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3CCreateUIAsyncU3Eb__0_mF69C4FEFF13B9A2C74175DC2A542DE3DE43CC75E_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		VirtualActionInvoker2< PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6*, Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* >::Invoke(6 /* System.Void QFramework.UIKitConfig::LoadPanelAsync(QFramework.PanelSearchKeys,System.Action`1<QFramework.IPanel>) */, L_5, L_7, L_9);
		// }
		return;
	}
}
// System.Void QFramework.UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_m9AFC68DC87251FCFAD242C275EEFB844D52730BA (UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* __this, const RuntimeMethod* method) 
{
	{
		QMgrBehaviour__ctor_mA895E14A70A02214B13C32EC8EDBC97BC5B44943(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m74774B4E262D193E412F25AAEE2007E841662470 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636* L_0 = (U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636*)il2cpp_codegen_object_new(U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m248FFB92E658F840B28303447BDAEEFBC6C493B2(L_0, NULL);
		((U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void QFramework.UIManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m248FFB92E658F840B28303447BDAEEFBC6C493B2 (U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// QFramework.QMgrBehaviour QFramework.UIManager/<>c::<RegisterMsgCenter>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571* U3CU3Ec_U3CRegisterMsgCenterU3Eb__0_0_m83B43FA8C64108554819699044ED252586C8DA87 (U3CU3Ec_t20194025A771323F1FE4B8CCCCF93385DC968636* __this, const RuntimeMethod* method) 
{
	{
		// QMsgCenter.RegisterManagerFactory(QMgrID.UI, () => Instance);
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_0;
		L_0 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m4C47D5A30DBD5DE03D8FE8BC715F9A0DA7B0D7A4 (U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void QFramework.UIManager/<>c__DisplayClass5_0::<OpenUIAsync>b__0(QFramework.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COpenUIAsyncU3Eb__0_mC00BEF1D9A24FBB70C01062C5CD17F418AC9421D (U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* __this, RuntimeObject* ___panel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* G_B2_0 = NULL;
	Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* G_B1_0 = NULL;
	{
		// panel.Open(panelSearchKeys.UIData);
		RuntimeObject* L_0 = ___panel0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = __this->___panelSearchKeys_0;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___UIData_4;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void QFramework.IPanel::Open(QFramework.IUIData) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_0, L_2);
		// panel.Show();
		RuntimeObject* L_3 = ___panel0;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(9 /* System.Void QFramework.IPanel::Show() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_3);
		// onLoad?.Invoke(panel);
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_4 = __this->___onLoad_1;
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		RuntimeObject* L_6 = ___panel0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m1D681E7EF8E6EAFA970F74982AE00F9EB9097F8A_inline(G_B2_0, L_6, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIManager/<>c__DisplayClass5_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_1__ctor_m8F32AEAEC22DAB8384CB8C1D096D5E5AE912EAB6 (U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void QFramework.UIManager/<>c__DisplayClass5_1::<OpenUIAsync>b__1(QFramework.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_1_U3COpenUIAsyncU3Eb__1_m2E42F37CB8F34FA9721258CE286EBC6C482FDB47 (U3CU3Ec__DisplayClass5_1_t116F00EC54A4AF0D4680379CAC4688FDC2FBA2E4* __this, RuntimeObject* ___panel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* G_B2_0 = NULL;
	Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* G_B1_0 = NULL;
	{
		// retPanel = panel;
		RuntimeObject* L_0 = ___panel0;
		__this->___retPanel_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___retPanel_0), (void*)L_0);
		// retPanel.Open(panelSearchKeys.UIData);
		RuntimeObject* L_1 = __this->___retPanel_0;
		U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* L_2 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_2);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_3 = L_2->___panelSearchKeys_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___UIData_4;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void QFramework.IPanel::Open(QFramework.IUIData) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_1, L_4);
		// retPanel.Show();
		RuntimeObject* L_5 = __this->___retPanel_0;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(9 /* System.Void QFramework.IPanel::Show() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_5);
		// onLoad?.Invoke(retPanel);
		U3CU3Ec__DisplayClass5_0_t233877B36EDFC39727B60D104A40FB469196FCF6* L_6 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_6);
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_7 = L_6->___onLoad_1;
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_8 = L_7;
		G_B1_0 = L_8;
		if (L_8)
		{
			G_B2_0 = L_8;
			goto IL_003d;
		}
	}
	{
		return;
	}

IL_003d:
	{
		RuntimeObject* L_9 = __this->___retPanel_0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m1D681E7EF8E6EAFA970F74982AE00F9EB9097F8A_inline(G_B2_0, L_9, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIManager/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m54962EAAB514FC487B365C9078862B352666B54D (U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void QFramework.UIManager/<>c__DisplayClass17_0::<CreateUIAsync>b__0(QFramework.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CCreateUIAsyncU3Eb__0_mF69C4FEFF13B9A2C74175DC2A542DE3DE43CC75E (U3CU3Ec__DisplayClass17_0_t8022001B4ED497B02311B05C1776B999FD365BCD* __this, RuntimeObject* ___panel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTable_1_Add_m918C68CFCC29AEB06D94959B39AF3A1C6D960B80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_1 = NULL;
	{
		// UIKit.Root.SetLevelOfPanel(panelSearchKeys.Level, panel);
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_0;
		L_0 = UIKit_get_Root_mA74A7A274AD69093AC4504C4D792D4744B22309B(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = __this->___panelSearchKeys_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Level_3;
		RuntimeObject* L_3 = ___panel0;
		NullCheck(L_0);
		UIRoot_SetLevelOfPanel_m74415AED6A4052FB4FBC62AB045C47254EB045C7(L_0, L_2, L_3, NULL);
		// UIKit.Config.SetDefaultSizeOfPanel(panel);
		UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* L_4 = ((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___Config_0;
		RuntimeObject* L_5 = ___panel0;
		NullCheck(L_4);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void QFramework.UIKitConfig::SetDefaultSizeOfPanel(QFramework.IPanel) */, L_4, L_5);
		// panel.Transform.gameObject.name = panelSearchKeys.GameObjName ?? panelSearchKeys.PanelType.Name;
		RuntimeObject* L_6 = ___panel0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QFramework.IPanel::get_Transform() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_9 = __this->___panelSearchKeys_0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___GameObjName_2;
		String_t* L_11 = L_10;
		G_B1_0 = L_11;
		G_B1_1 = L_8;
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_8;
			goto IL_004b;
		}
	}
	{
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_12 = __this->___panelSearchKeys_0;
		NullCheck(L_12);
		Type_t* L_13 = L_12->___PanelType_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		G_B2_0 = L_14;
		G_B2_1 = G_B1_1;
	}

IL_004b:
	{
		NullCheck(G_B2_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(G_B2_1, G_B2_0, NULL);
		// panel.Info = PanelInfo.Allocate(panelSearchKeys.GameObjName, panelSearchKeys.Level,
		//     panelSearchKeys.UIData,
		//     panelSearchKeys.PanelType, panelSearchKeys.AssetBundleName);
		RuntimeObject* L_15 = ___panel0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_16 = __this->___panelSearchKeys_0;
		NullCheck(L_16);
		String_t* L_17 = L_16->___GameObjName_2;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_18 = __this->___panelSearchKeys_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___Level_3;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_20 = __this->___panelSearchKeys_0;
		NullCheck(L_20);
		RuntimeObject* L_21 = L_20->___UIData_4;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_22 = __this->___panelSearchKeys_0;
		NullCheck(L_22);
		Type_t* L_23 = L_22->___PanelType_0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_24 = __this->___panelSearchKeys_0;
		NullCheck(L_24);
		String_t* L_25 = L_24->___AssetBundleName_1;
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_26;
		L_26 = PanelInfo_Allocate_m2724CE5A38628FAB9502A1126C787E046AB00A32(L_17, L_19, L_21, L_23, L_25, NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* >::Invoke(4 /* System.Void QFramework.IPanel::set_Info(QFramework.PanelInfo) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_15, L_26);
		// UIKit.Table.Add(panel);
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_27;
		L_27 = UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline(NULL);
		RuntimeObject* L_28 = ___panel0;
		NullCheck(L_27);
		UIKitTable_1_Add_m918C68CFCC29AEB06D94959B39AF3A1C6D960B80(L_27, L_28, UIKitTable_1_Add_m918C68CFCC29AEB06D94959B39AF3A1C6D960B80_RuntimeMethod_var);
		// panel.Init(panelSearchKeys.UIData);
		RuntimeObject* L_29 = ___panel0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_30 = __this->___panelSearchKeys_0;
		NullCheck(L_30);
		RuntimeObject* L_31 = L_30->___UIData_4;
		NullCheck(L_29);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void QFramework.IPanel::Init(QFramework.IUIData) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_29, L_31);
		// onPanelCreate(panel);
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_32 = __this->___onPanelCreate_1;
		RuntimeObject* L_33 = ___panel0;
		NullCheck(L_32);
		Action_1_Invoke_m1D681E7EF8E6EAFA970F74982AE00F9EB9097F8A_inline(L_32, L_33, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.DontDestroyOnLoad::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DontDestroyOnLoad_Awake_m7653779FEED947EFC8FDF4D5A2C67FC38C9AE2BE (DontDestroyOnLoad_t278FC7E476B71320A492482109AD26C71AA09135* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad (this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(__this, NULL);
		// }
		return;
	}
}
// System.Void QFramework.DontDestroyOnLoad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DontDestroyOnLoad__ctor_mE6E40E0EC08D9CDFBB7E7E833388EE4EAD24F701 (DontDestroyOnLoad_t278FC7E476B71320A492482109AD26C71AA09135* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.Empty4Raycast::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Empty4Raycast__ctor_m2A3048780E867908A45B1BE446C2876D904C2252 (Empty4Raycast_t0920D6E8EAEDB9B05A365D52F3329432DEA41461* __this, const RuntimeMethod* method) 
{
	{
		// protected Empty4Raycast()
		MaskableGraphic__ctor_mD2E256F950AAAE0E2445971361B5C54D2066E4C2(__this, NULL);
		// useLegacyMeshGeneration = false;
		Graphic_set_useLegacyMeshGeneration_m8069890AE2F389C73D944941BB8462C44EB32EC9_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void QFramework.Empty4Raycast::OnPopulateMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Empty4Raycast_OnPopulateMesh_mA2FE1AD34FFEA5C6D3CB61D97794B917E996406F (Empty4Raycast_t0920D6E8EAEDB9B05A365D52F3329432DEA41461* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	{
		// toFill.Clear();
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		NullCheck(L_0);
		VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5(L_0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Camera QFramework.QUICameraUtil::get_UICamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* QUICameraUtil_get_UICamera_m861453C30FAC45743854EE43C8BC44A2B1DEEE84 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return UIKit.Root.Camera; }
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_0;
		L_0 = UIKit_get_Root_mA74A7A274AD69093AC4504C4D792D4744B22309B(NULL);
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = UIRoot_get_Camera_m4C3154E6DEED7FCF3AF11784FB0E3CFB0A746EE1_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void QFramework.QUICameraUtil::SetPerspectiveMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QUICameraUtil_SetPerspectiveMode_m8A33DC3101AD3590C2AD53EA45DD4A3ED6C1F07B (const RuntimeMethod* method) 
{
	{
		// UICamera.orthographic = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = QUICameraUtil_get_UICamera_m861453C30FAC45743854EE43C8BC44A2B1DEEE84(NULL);
		NullCheck(L_0);
		Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void QFramework.QUICameraUtil::SetOrthographicMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QUICameraUtil_SetOrthographicMode_m9D4E6C88A5308D2DC24CCB9F531C2A7FEB8E1BC6 (const RuntimeMethod* method) 
{
	{
		// UICamera.orthographic = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = QUICameraUtil_get_UICamera_m861453C30FAC45743854EE43C8BC44A2B1DEEE84(NULL);
		NullCheck(L_0);
		Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// UnityEngine.Texture2D QFramework.QUICameraUtil::CaptureCamera(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* QUICameraUtil_CaptureCamera_m5AB25D05E0216734314B09EFB384BF0819859F87 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	{
		// var camera = UICamera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = QUICameraUtil_get_UICamera_m861453C30FAC45743854EE43C8BC44A2B1DEEE84(NULL);
		V_0 = L_0;
		// RenderTexture rt = new RenderTexture(Screen.width,Screen.height,0);
		int32_t L_1;
		L_1 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RenderTexture__ctor_m45EACC89DDF408948889586516B3CA7AA8B73BFA(L_3, L_1, L_2, 0, NULL);
		V_1 = L_3;
		// camera.targetTexture = rt;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = V_1;
		NullCheck(L_4);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_4, L_5, NULL);
		// camera.Render();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = V_0;
		NullCheck(L_6);
		Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509(L_6, NULL);
		// RenderTexture.active = rt;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = V_1;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_7, NULL);
		// Texture2D screenShot = new Texture2D((int) rect.width, (int) rect.height, TextureFormat.RGB24, false);
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_10, il2cpp_codegen_cast_double_to_int<int32_t>(L_8), il2cpp_codegen_cast_double_to_int<int32_t>(L_9), 3, (bool)0, NULL);
		// screenShot.ReadPixels(rect,0,0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = L_10;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12 = ___rect0;
		NullCheck(L_11);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_11, L_12, 0, 0, NULL);
		// screenShot.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = L_11;
		NullCheck(L_13);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_13, NULL);
		// camera.targetTexture = null;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = V_0;
		NullCheck(L_14);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_14, (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		// RenderTexture.active = null;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		// rt.Release();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = V_1;
		NullCheck(L_15);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_15, NULL);
		// Object.Destroy(rt);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_16, NULL);
		// return screenShot;
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIPointerDownEventListener::UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPointerDownEventListener_UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown_mA434FAF8EEF83304123629F6EE470E12AB8904E4 (UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (OnPointerDownEvent != null) OnPointerDownEvent(eventData);
		UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10* L_0 = __this->___OnPointerDownEvent_4;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (OnPointerDownEvent != null) OnPointerDownEvent(eventData);
		UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10* L_1 = __this->___OnPointerDownEvent_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		UnityAction_1_Invoke_m06791755518396D775050F6FD21EDB9238177870_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// QFramework.UIPointerDownEventListener QFramework.UIPointerDownEventListener::CheckAndAddListener(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* UIPointerDownEventListener_CheckAndAddListener_mF59EE17B0AA6758FBF83418DA1BB539A66B7A7DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7_m4AE84BC76390946A9EDBDD9184A81C0B96F977C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7_mFDD5D7E8BCF6EEB585D913DF256B71B9B68CF821_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* V_0 = NULL;
	{
		// UIPointerDownEventListener listener = obj.GetComponent<UIPointerDownEventListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		NullCheck(L_0);
		UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* L_1;
		L_1 = GameObject_GetComponent_TisUIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7_mFDD5D7E8BCF6EEB585D913DF256B71B9B68CF821(L_0, GameObject_GetComponent_TisUIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7_mFDD5D7E8BCF6EEB585D913DF256B71B9B68CF821_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) listener = obj.AddComponent<UIPointerDownEventListener>();
		UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// if (listener == null) listener = obj.AddComponent<UIPointerDownEventListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___obj0;
		NullCheck(L_4);
		UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* L_5;
		L_5 = GameObject_AddComponent_TisUIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7_m4AE84BC76390946A9EDBDD9184A81C0B96F977C2(L_4, GameObject_AddComponent_TisUIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7_m4AE84BC76390946A9EDBDD9184A81C0B96F977C2_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_0017:
	{
		// return listener;
		UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* L_6 = V_0;
		return L_6;
	}
}
// QFramework.UIPointerDownEventListener QFramework.UIPointerDownEventListener::Get(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* UIPointerDownEventListener_Get_m504DBB616A6A60CEB009149E41AE113735DB51F2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	{
		// return CheckAndAddListener (obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* L_1;
		L_1 = UIPointerDownEventListener_CheckAndAddListener_mF59EE17B0AA6758FBF83418DA1BB539A66B7A7DC(L_0, NULL);
		return L_1;
	}
}
// System.Void QFramework.UIPointerDownEventListener::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPointerDownEventListener_OnDestroy_m522B4554E6FB8D4C6BF971D05A3443A220E10ED2 (UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* __this, const RuntimeMethod* method) 
{
	{
		// OnPointerDownEvent = null;
		__this->___OnPointerDownEvent_4 = (UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnPointerDownEvent_4), (void*)(UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10*)NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIPointerDownEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPointerDownEventListener__ctor_m9016C82BEDF3273CA734107D68DD02F396608894 (UIPointerDownEventListener_tFCB2668B44BF4846187AEA553B283528EEED57B7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIPointerUpEventListener::UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPointerUpEventListener_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_mB170AB3AC48426B0F912C72C51B8FEE870014116 (UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (OnPointerUpEvent != null) OnPointerUpEvent(eventData);
		UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10* L_0 = __this->___OnPointerUpEvent_4;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (OnPointerUpEvent != null) OnPointerUpEvent(eventData);
		UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10* L_1 = __this->___OnPointerUpEvent_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		UnityAction_1_Invoke_m06791755518396D775050F6FD21EDB9238177870_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// QFramework.UIPointerUpEventListener QFramework.UIPointerUpEventListener::CheckAndAddListener(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* UIPointerUpEventListener_CheckAndAddListener_mFA1E7F6D176DEE4B4BB2EE6EF60027D1067CC8F4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B_m0F78E39793658B0DADB0012F148ED55280CB78E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B_m17E432CC9714FE8F652AE061E6BF5266DFB45886_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* V_0 = NULL;
	{
		// UIPointerUpEventListener listener = obj.GetComponent<UIPointerUpEventListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		NullCheck(L_0);
		UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* L_1;
		L_1 = GameObject_GetComponent_TisUIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B_m17E432CC9714FE8F652AE061E6BF5266DFB45886(L_0, GameObject_GetComponent_TisUIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B_m17E432CC9714FE8F652AE061E6BF5266DFB45886_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) listener = obj.AddComponent<UIPointerUpEventListener>();
		UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// if (listener == null) listener = obj.AddComponent<UIPointerUpEventListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___obj0;
		NullCheck(L_4);
		UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* L_5;
		L_5 = GameObject_AddComponent_TisUIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B_m0F78E39793658B0DADB0012F148ED55280CB78E3(L_4, GameObject_AddComponent_TisUIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B_m0F78E39793658B0DADB0012F148ED55280CB78E3_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_0017:
	{
		// return listener;
		UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* L_6 = V_0;
		return L_6;
	}
}
// QFramework.UIPointerUpEventListener QFramework.UIPointerUpEventListener::Get(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* UIPointerUpEventListener_Get_m9DFE5B9334C0693049970EC8768F16017D7CDA26 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	{
		// return CheckAndAddListener(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* L_1;
		L_1 = UIPointerUpEventListener_CheckAndAddListener_mFA1E7F6D176DEE4B4BB2EE6EF60027D1067CC8F4(L_0, NULL);
		return L_1;
	}
}
// System.Void QFramework.UIPointerUpEventListener::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPointerUpEventListener_OnDestroy_mFB53D2569115C4E68047E022405C79EFAFD42766 (UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* __this, const RuntimeMethod* method) 
{
	{
		// OnPointerUpEvent = null;
		__this->___OnPointerUpEvent_4 = (UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnPointerUpEvent_4), (void*)(UnityAction_1_t334A0BBC36CEA685DB7348F3E628AEF8C9930D10*)NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIPointerUpEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPointerUpEventListener__ctor_m96012EB86E973382DCA68820B23C5B02D05443FB (UIPointerUpEventListener_tEF5D507787F45EAF359C4E1F627B782BD8BBF24B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 QFramework.UIRectTransformExtension::GetLocalPosInRect(UnityEngine.RectTransform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIRectTransformExtension_GetLocalPosInRect_m77C403709AB3375C18A774AED24594F90A23F0DA (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___selfRectTrans0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(selfRectTrans, Input.mousePosition,
		//     camera, out retLocalPos);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___selfRectTrans0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_1, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___camera1;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_0, L_2, L_3, (&V_0), NULL);
		// return retLocalPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
// System.Boolean QFramework.UIRectTransformExtension::InRect(UnityEngine.RectTransform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIRectTransformExtension_InRect_mD2A362B22523D1DA6DAA1F645659235F737C681C (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___selfRectTrans0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == camera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// camera = UIKit.Root.Canvas.worldCamera;
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_2;
		L_2 = UIKit_get_Root_mA74A7A274AD69093AC4504C4D792D4744B22309B(NULL);
		NullCheck(L_2);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = L_2->___Canvas_5;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_3, NULL);
		___camera1 = L_4;
	}

IL_001a:
	{
		// return RectTransformUtility.RectangleContainsScreenPoint(selfRectTrans, Input.mousePosition, camera);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___selfRectTrans0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = ___camera1;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = RectTransformUtility_RectangleContainsScreenPoint_mAD33D83F019F2E0C4BCE2D743175A042A233616A(L_5, L_7, L_8, NULL);
		return L_9;
	}
}
// UnityEngine.Vector2 QFramework.UIRectTransformExtension::ToScreenPoint(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIRectTransformExtension_ToScreenPoint_m4D799A6A4D34052D17CCF1BF68D38FDE0FF34BCE (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___selfRectTrans0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return RectTransformUtility.WorldToScreenPoint(UIKit.Root.Canvas.worldCamera, selfRectTrans.position);
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_0;
		L_0 = UIKit_get_Root_mA74A7A274AD69093AC4504C4D792D4744B22309B(NULL);
		NullCheck(L_0);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1 = L_0->___Canvas_5;
		NullCheck(L_1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_1, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ___selfRectTrans0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB(L_2, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 QFramework.UIRectTransformExtension::ToScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIRectTransformExtension_ToScreenPoint_m660D1F313554A56C9A5E8E5D282A7F1F10CEA53C (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___selfRectTrans0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___worldPos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return RectTransformUtility.WorldToScreenPoint(UIKit.Root.Canvas.worldCamera, worldPos);
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_0;
		L_0 = UIKit_get_Root_mA74A7A274AD69093AC4504C4D792D4744B22309B(NULL);
		NullCheck(L_0);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1 = L_0->___Canvas_5;
		NullCheck(L_1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___worldPos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB(L_2, L_4, NULL);
		return L_5;
	}
}
// System.Boolean QFramework.UIRectTransformExtension::InRootTransRect(UnityEngine.RectTransform,UnityEngine.RectTransform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIRectTransformExtension_InRootTransRect_m8EF111DB2ED8995A668BE457124B765F204D6648 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___selfRectTrans0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rootTrans1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == camera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// camera = UIKit.Root.Canvas.worldCamera;
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_2;
		L_2 = UIKit_get_Root_mA74A7A274AD69093AC4504C4D792D4744B22309B(NULL);
		NullCheck(L_2);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = L_2->___Canvas_5;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_3, NULL);
		___camera2 = L_4;
	}

IL_001a:
	{
		// return RectTransformUtility.RectangleContainsScreenPoint(rootTrans, selfRectTrans.ToScreenPoint(), camera);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___rootTrans1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ___selfRectTrans0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = UIRectTransformExtension_ToScreenPoint_m4D799A6A4D34052D17CCF1BF68D38FDE0FF34BCE(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = ___camera2;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = RectTransformUtility_RectangleContainsScreenPoint_mAD33D83F019F2E0C4BCE2D743175A042A233616A(L_5, L_7, L_8, NULL);
		return L_9;
	}
}
// UnityEngine.Vector2 QFramework.UIRectTransformExtension::ConvertWorldPosToLocalPosInSelf(UnityEngine.RectTransform,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIRectTransformExtension_ConvertWorldPosToLocalPosInSelf_m5D540BA060987189469DFE4A65F4ABF70EE4771F (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___selfRectTrans0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___worldPos1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var screenPos = RectTransformUtility.WorldToScreenPoint(QUICameraUtil.UICamera, worldPos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = QUICameraUtil_get_UICamera_m861453C30FAC45743854EE43C8BC44A2B1DEEE84(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___worldPos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB(L_0, L_2, NULL);
		V_0 = L_3;
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(selfRectTrans, screenPos, QUICameraUtil.UICamera,
		//     out retLocalPos);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___selfRectTrans0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = QUICameraUtil_get_UICamera_m861453C30FAC45743854EE43C8BC44A2B1DEEE84(NULL);
		bool L_7;
		L_7 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_4, L_5, L_6, (&V_1), NULL);
		// return retLocalPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_1;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 QFramework.UISpriteAnimation::get_FrameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UISpriteAnimation_get_FrameCount_m452F4E1D70B6F4A3312356AA4DCB7E57B88EDCA9 (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return SpriteFrames.Count; }
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = __this->___SpriteFrames_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_0, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void QFramework.UISpriteAnimation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISpriteAnimation_Awake_m1856F10B9DCD486E82CD5313937A80DB6EA76B6F (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mImageSource = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___mImageSource_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mImageSource_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void QFramework.UISpriteAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISpriteAnimation_Start_m1D2C5B80F108B0C30159CA1354C8D763EC4B9988 (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, const RuntimeMethod* method) 
{
	{
		// if (AutoPlay)
		bool L_0 = __this->___AutoPlay_11;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Play();
		UISpriteAnimation_Play_m7D0850FBBA1245C096DAAE7EAE411E4BD5FFB9CF(__this, NULL);
		return;
	}

IL_000f:
	{
		// IsPlaying = false;
		__this->___IsPlaying_9 = (bool)0;
		// }
		return;
	}
}
// System.Void QFramework.UISpriteAnimation::SetSprite(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISpriteAnimation_SetSprite_m519E36DD3644AF4063ED21D82E7873D6EBD41C22 (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mImageSource.sprite = SpriteFrames[idx];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___mImageSource_4;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_1 = __this->___SpriteFrames_8;
		int32_t L_2 = ___idx0;
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3;
		L_3 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_1, L_2, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_3, NULL);
		// mImageSource.SetNativeSize();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___mImageSource_4;
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(45 /* System.Void UnityEngine.UI.Graphic::SetNativeSize() */, L_4);
		// }
		return;
	}
}
// System.Void QFramework.UISpriteAnimation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISpriteAnimation_Play_m7D0850FBBA1245C096DAAE7EAE411E4BD5FFB9CF (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, const RuntimeMethod* method) 
{
	{
		// IsPlaying = true;
		__this->___IsPlaying_9 = (bool)1;
		// Forward = true;
		__this->___Forward_10 = (bool)1;
		// }
		return;
	}
}
// System.Void QFramework.UISpriteAnimation::PlayReverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISpriteAnimation_PlayReverse_m743645DAD512D91ECE630CBC914A21FD21F5B839 (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, const RuntimeMethod* method) 
{
	{
		// IsPlaying = true;
		__this->___IsPlaying_9 = (bool)1;
		// Forward = false;
		__this->___Forward_10 = (bool)0;
		// }
		return;
	}
}
// System.Void QFramework.UISpriteAnimation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISpriteAnimation_Update_mD0AAC38C8304CB996B25E1E78E4C4504F32EB297 (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, const RuntimeMethod* method) 
{
	{
		// if (!IsPlaying || 0 == FrameCount)
		bool L_0 = __this->___IsPlaying_9;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = UISpriteAnimation_get_FrameCount_m452F4E1D70B6F4A3312356AA4DCB7E57B88EDCA9(__this, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// mDelta += Time.deltaTime;
		float L_2 = __this->___mDelta_6;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___mDelta_6 = ((float)il2cpp_codegen_add(L_2, L_3));
		// if (mDelta > 1 / FPS)
		float L_4 = __this->___mDelta_6;
		float L_5 = __this->___FPS_7;
		if ((!(((float)L_4) > ((float)((float)((1.0f)/L_5))))))
		{
			goto IL_00c7;
		}
	}
	{
		// mDelta = 0;
		__this->___mDelta_6 = (0.0f);
		// if (Forward)
		bool L_6 = __this->___Forward_10;
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		// mCurFrame++;
		int32_t L_7 = __this->___mCurFrame_5;
		__this->___mCurFrame_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		goto IL_006b;
	}

IL_005d:
	{
		// mCurFrame--;
		int32_t L_8 = __this->___mCurFrame_5;
		__this->___mCurFrame_5 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_006b:
	{
		// if (mCurFrame >= FrameCount)
		int32_t L_9 = __this->___mCurFrame_5;
		int32_t L_10;
		L_10 = UISpriteAnimation_get_FrameCount_m452F4E1D70B6F4A3312356AA4DCB7E57B88EDCA9(__this, NULL);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0092;
		}
	}
	{
		// if (Loop)
		bool L_11 = __this->___Loop_12;
		if (!L_11)
		{
			goto IL_008a;
		}
	}
	{
		// mCurFrame = 0;
		__this->___mCurFrame_5 = 0;
		goto IL_00bb;
	}

IL_008a:
	{
		// IsPlaying = false;
		__this->___IsPlaying_9 = (bool)0;
		// return;
		return;
	}

IL_0092:
	{
		// else if (mCurFrame < 0)
		int32_t L_12 = __this->___mCurFrame_5;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}
	{
		// if (Loop)
		bool L_13 = __this->___Loop_12;
		if (!L_13)
		{
			goto IL_00b3;
		}
	}
	{
		// mCurFrame = FrameCount - 1;
		int32_t L_14;
		L_14 = UISpriteAnimation_get_FrameCount_m452F4E1D70B6F4A3312356AA4DCB7E57B88EDCA9(__this, NULL);
		__this->___mCurFrame_5 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_00bb;
	}

IL_00b3:
	{
		// IsPlaying = false;
		__this->___IsPlaying_9 = (bool)0;
		// return;
		return;
	}

IL_00bb:
	{
		// SetSprite(mCurFrame);
		int32_t L_15 = __this->___mCurFrame_5;
		UISpriteAnimation_SetSprite_m519E36DD3644AF4063ED21D82E7873D6EBD41C22(__this, L_15, NULL);
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void QFramework.UISpriteAnimation::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISpriteAnimation_Pause_m9EE54F965803C1991F0A1A1880A2768023FDF609 (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, const RuntimeMethod* method) 
{
	{
		// IsPlaying = false;
		__this->___IsPlaying_9 = (bool)0;
		// }
		return;
	}
}
// System.Void QFramework.UISpriteAnimation::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISpriteAnimation_Resume_m01BEAC2237F030EAEC40B2A9343771C62A6352E2 (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, const RuntimeMethod* method) 
{
	{
		// if (!IsPlaying)
		bool L_0 = __this->___IsPlaying_9;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// IsPlaying = true;
		__this->___IsPlaying_9 = (bool)1;
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void QFramework.UISpriteAnimation::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISpriteAnimation_Stop_m4C1AAF3AC2B22B8B337337F5378F7A4B4AD3F98A (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, const RuntimeMethod* method) 
{
	{
		// mCurFrame = 0;
		__this->___mCurFrame_5 = 0;
		// SetSprite(mCurFrame);
		int32_t L_0 = __this->___mCurFrame_5;
		UISpriteAnimation_SetSprite_m519E36DD3644AF4063ED21D82E7873D6EBD41C22(__this, L_0, NULL);
		// IsPlaying = false;
		__this->___IsPlaying_9 = (bool)0;
		// }
		return;
	}
}
// System.Void QFramework.UISpriteAnimation::Rewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISpriteAnimation_Rewind_m59878B2EEC71E9FA740949086D67A95A9E4CEB91 (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, const RuntimeMethod* method) 
{
	{
		// mCurFrame = 0;
		__this->___mCurFrame_5 = 0;
		// SetSprite(mCurFrame);
		int32_t L_0 = __this->___mCurFrame_5;
		UISpriteAnimation_SetSprite_m519E36DD3644AF4063ED21D82E7873D6EBD41C22(__this, L_0, NULL);
		// Play();
		UISpriteAnimation_Play_m7D0850FBBA1245C096DAAE7EAE411E4BD5FFB9CF(__this, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UISpriteAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISpriteAnimation__ctor_m8D8785A44B1EB4FEA1AA502ED5D39429265A07DE (UISpriteAnimation_t800A44D3B4FB6A11CFE190F9E1754793584B611A* __this, const RuntimeMethod* method) 
{
	{
		// public float FPS = 5;
		__this->___FPS_7 = (5.0f);
		// public bool Forward = true;
		__this->___Forward_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.InputFieldEnterSubmitExtensions::OnEnterSubmit(UnityEngine.UI.InputField,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldEnterSubmitExtensions_OnEnterSubmit_m0B15386316AA3363B069692225E433D8AC0DA073 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___inputField0, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552_m3F89193E0E421E828163AF39C42F6BE7E2591A31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisInputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552_mB9FB7602F2F75379967B6FFEFFA5F41887D6A44B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* V_0 = NULL;
	{
		// var trigger = inputField.GetComponent<InputFieldEnterSubmitTrigger>();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = ___inputField0;
		NullCheck(L_0);
		InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* L_1;
		L_1 = Component_GetComponent_TisInputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552_m3F89193E0E421E828163AF39C42F6BE7E2591A31(L_0, Component_GetComponent_TisInputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552_m3F89193E0E421E828163AF39C42F6BE7E2591A31_RuntimeMethod_var);
		V_0 = L_1;
		// if (!trigger)
		InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		// trigger = inputField.gameObject.AddComponent<InputFieldEnterSubmitTrigger>();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_4 = ___inputField0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* L_6;
		L_6 = GameObject_AddComponent_TisInputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552_mB9FB7602F2F75379967B6FFEFFA5F41887D6A44B(L_5, GameObject_AddComponent_TisInputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552_mB9FB7602F2F75379967B6FFEFFA5F41887D6A44B_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_001b:
	{
		// trigger.OnEnterSubmit.AddListener(action);
		InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* L_7 = V_0;
		NullCheck(L_7);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8 = L_7->___OnEnterSubmit_5;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = ___action1;
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.InputFieldEnterSubmitTrigger::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldEnterSubmitTrigger_OnDestroy_m18708B14540BD144900BAC8DF1E3AA8962C9084A (InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* __this, const RuntimeMethod* method) 
{
	{
		// OnEnterSubmit.RemoveAllListeners();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnEnterSubmit_5;
		NullCheck(L_0);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_0, NULL);
		// }
		return;
	}
}
// System.Void QFramework.InputFieldEnterSubmitTrigger::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldEnterSubmitTrigger_Awake_m0C287378B20F9F1D0A45671FBC105C13C16310C6 (InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mInputField = GetComponent<InputField>();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0;
		L_0 = Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896(__this, Component_GetComponent_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m08978F3683B8CCF83910BA8BB0A4F786A6361896_RuntimeMethod_var);
		__this->___mInputField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInputField_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void QFramework.InputFieldEnterSubmitTrigger::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldEnterSubmitTrigger_OnEnable_mBE8B9D007BFD276ECC74B2ABE79C36DBE5AC7C8C (InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFieldEnterSubmitTrigger_CheckForEnter_mA3650AC90EE6BAFA082EB6D33EDCAECCD0F09F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mInputField.lineType = UnityEngine.UI.InputField.LineType.MultiLineNewline;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___mInputField_4;
		NullCheck(L_0);
		InputField_set_lineType_m06BE148366DF8F17E0F91C3CF094628C201B5FD8(L_0, 2, NULL);
		// mInputField.onValidateInput += CheckForEnter;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = __this->___mInputField_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = L_1;
		NullCheck(L_2);
		OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* L_3;
		L_3 = InputField_get_onValidateInput_m370D93274B6040422092981DD3A34E4B88E96EBC_inline(L_2, NULL);
		OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* L_4 = (OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B*)il2cpp_codegen_object_new(OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OnValidateInput__ctor_mDC0454BF264F87154EF8694821905B5A6A587A29(L_4, __this, (intptr_t)((void*)InputFieldEnterSubmitTrigger_CheckForEnter_mA3650AC90EE6BAFA082EB6D33EDCAECCD0F09F41_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		NullCheck(L_2);
		InputField_set_onValidateInput_m3A3FA74285B9BBA68325A91AA862201AF3A18CE4(L_2, ((OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B*)CastclassSealed((RuntimeObject*)L_5, OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void QFramework.InputFieldEnterSubmitTrigger::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldEnterSubmitTrigger_OnDisable_m99991171DC5235B121D8AEC446052BF6C8D5363E (InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFieldEnterSubmitTrigger_CheckForEnter_mA3650AC90EE6BAFA082EB6D33EDCAECCD0F09F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mInputField.onValidateInput -= CheckForEnter;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___mInputField_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_1 = L_0;
		NullCheck(L_1);
		OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* L_2;
		L_2 = InputField_get_onValidateInput_m370D93274B6040422092981DD3A34E4B88E96EBC_inline(L_1, NULL);
		OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* L_3 = (OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B*)il2cpp_codegen_object_new(OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OnValidateInput__ctor_mDC0454BF264F87154EF8694821905B5A6A587A29(L_3, __this, (intptr_t)((void*)InputFieldEnterSubmitTrigger_CheckForEnter_mA3650AC90EE6BAFA082EB6D33EDCAECCD0F09F41_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		NullCheck(L_1);
		InputField_set_onValidateInput_m3A3FA74285B9BBA68325A91AA862201AF3A18CE4(L_1, ((OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B*)CastclassSealed((RuntimeObject*)L_4, OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Char QFramework.InputFieldEnterSubmitTrigger::CheckForEnter(System.String,System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar InputFieldEnterSubmitTrigger_CheckForEnter_mA3650AC90EE6BAFA082EB6D33EDCAECCD0F09F41 (InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, const RuntimeMethod* method) 
{
	{
		// if (addedChar == '\n')
		Il2CppChar L_0 = ___addedChar2;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0012;
		}
	}
	{
		// OnEnterSubmit.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___OnEnterSubmit_5;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		// return '\0';
		return 0;
	}

IL_0012:
	{
		// return addedChar;
		Il2CppChar L_2 = ___addedChar2;
		return L_2;
	}
}
// System.Void QFramework.InputFieldEnterSubmitTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFieldEnterSubmitTrigger__ctor_m09010D7039EE9CB0DD370327D98F904EF9ADB377 (InputFieldEnterSubmitTrigger_t12FBB29E39C014528D69A5BDFF47F48385543552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly UnityEvent OnEnterSubmit = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___OnEnterSubmit_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnEnterSubmit_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.Hide::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hide_Awake_m6EFF3106C907C47D980A20E4C96CF2B5ED3B1B2C (Hide_tD028ED8ECE24F37F86A1FCAEE4255E30B26FEB6A* __this, const RuntimeMethod* method) 
{
	{
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void QFramework.Hide::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hide__ctor_mD5E75FB86B1620141D60C2F54787D9B7A2A13178 (Hide_tD028ED8ECE24F37F86A1FCAEE4255E30B26FEB6A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 QFramework.QMsg::get_EventID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QMsg_get_EventID_mD27219A7BED98A97FB39229FA8D79858AAC4ED51 (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, const RuntimeMethod* method) 
{
	{
		// public virtual int EventID { get; set; }
		int32_t L_0 = __this->___U3CEventIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void QFramework.QMsg::set_EventID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsg_set_EventID_m970A126E30C2811CDE7B95ECDE9B09592560426E (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public virtual int EventID { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CEventIDU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean QFramework.QMsg::get_Processed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QMsg_get_Processed_m5A1FC22F0BF2E89F309684A83DEF38A6339F72A8 (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, const RuntimeMethod* method) 
{
	{
		// public bool Processed { get; set; }
		bool L_0 = __this->___U3CProcessedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void QFramework.QMsg::set_Processed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsg_set_Processed_mD44149B403063980FEF287A92416B0CA96E892F0 (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Processed { get; set; }
		bool L_0 = ___value0;
		__this->___U3CProcessedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean QFramework.QMsg::get_ReuseAble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QMsg_get_ReuseAble_m139F07A4FE675C14DCED1190021FE318B334A9CC (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, const RuntimeMethod* method) 
{
	{
		// public bool ReuseAble { get; set; }
		bool L_0 = __this->___U3CReuseAbleU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void QFramework.QMsg::set_ReuseAble(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsg_set_ReuseAble_m9DDD2891332E03C7085C1A506BB6284262914C18 (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ReuseAble { get; set; }
		bool L_0 = ___value0;
		__this->___U3CReuseAbleU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 QFramework.QMsg::get_ManagerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QMsg_get_ManagerID_m56262E668836565632AC145177F56DF5EC0A6BBF (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, const RuntimeMethod* method) 
{
	{
		// get { return EventID / QMsgSpan.Count * QMsgSpan.Count; }
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 QFramework.QMsg::get_EventID() */, __this);
		return ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_0/((int32_t)3000))), ((int32_t)3000)));
	}
}
// System.Void QFramework.QMsg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsg__ctor_m2513BD66890F2706FB22AE4718A95A3071723BA7 (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, const RuntimeMethod* method) 
{
	{
		// public QMsg()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void QFramework.QMsg::Recycle2Cache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsg_Recycle2Cache_m455DB3E3187703676A3C64D7627544FA2DA80F39 (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeObjectPool_1_get_Instance_m7248FA12FFC885F38065F9078023C64C52B0F0BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SafeObjectPool<QMsg>.Instance.Recycle(this);
		SafeObjectPool_1_t1C0D372E01192C783B05AA86B17137498EF8EC0A* L_0;
		L_0 = SafeObjectPool_1_get_Instance_m7248FA12FFC885F38065F9078023C64C52B0F0BC(SafeObjectPool_1_get_Instance_m7248FA12FFC885F38065F9078023C64C52B0F0BC_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, QMsg_t41F187494E15464B020988A12616F24ACA4605C3* >::Invoke(7 /* System.Boolean QFramework.Pool`1<QFramework.QMsg>::Recycle(T) */, L_0, __this);
		// }
		return;
	}
}
// System.Void QFramework.QMsg::QFramework.IPoolable.OnRecycled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsg_QFramework_IPoolable_OnRecycled_m6543DE0996A06B8428E38028DCE2D1E8011F161D (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, const RuntimeMethod* method) 
{
	{
		// Processed = false;
		QMsg_set_Processed_mD44149B403063980FEF287A92416B0CA96E892F0_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Boolean QFramework.QMsg::QFramework.IPoolable.get_IsRecycled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QMsg_QFramework_IPoolable_get_IsRecycled_mD65D1C19E748D25FA5A8C432DF987B09F61F29E6 (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, const RuntimeMethod* method) 
{
	{
		// bool IPoolable.IsRecycled { get; set; }
		bool L_0 = __this->___U3CQFramework_IPoolable_IsRecycledU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void QFramework.QMsg::QFramework.IPoolable.set_IsRecycled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsg_QFramework_IPoolable_set_IsRecycled_mE7D229C60D6103BF9AF51FC40834CDA6EA97E17D (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// bool IPoolable.IsRecycled { get; set; }
		bool L_0 = ___value0;
		__this->___U3CQFramework_IPoolable_IsRecycledU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void QFramework.QMsg::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsg__ctor_m99B0F002840C89EEB35675CC2236EE6DD5995C29 (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, int32_t ___eventID0, const RuntimeMethod* method) 
{
	{
		// public QMsg(int eventID)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// EventID = eventID;
		int32_t L_0 = ___eventID0;
		VirtualActionInvoker1< int32_t >::Invoke(17 /* System.Void QFramework.QMsg::set_EventID(System.Int32) */, __this, L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.QMsgSpan::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsgSpan__ctor_m0B5C97373B1AFD9508DC3D24EBC2480F6E02A4EC (QMsgSpan_t321987FAA09C97F02A65BD6D4304762FD301FA35* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.QMgrBehaviour::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMgrBehaviour_Init_m5C9FC861B11E3DE6F3C2ABC3F6F746FADA8169ED (QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// QFramework.IManager QFramework.QMgrBehaviour::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QMgrBehaviour_get_Manager_m843183A9A9ACC4A028B1AEC10C41D9DDE3F992FA (QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571* __this, const RuntimeMethod* method) 
{
	{
		// get { return this; }
		return __this;
	}
}
// System.Void QFramework.QMgrBehaviour::SendMsg(QFramework.IMsg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMgrBehaviour_SendMsg_m6D9503EF4A7E82F42FC50E363CAA1763244C0E86 (QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571* __this, RuntimeObject* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMsg_t82FC7BC03416D36155554E333FB166670BDD4F86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (msg.ManagerID == ManagerId)
		RuntimeObject* L_0 = ___msg0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 QFramework.IMsg::get_ManagerID() */, IMsg_t82FC7BC03416D36155554E333FB166670BDD4F86_il2cpp_TypeInfo_var, L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 QFramework.QMgrBehaviour::get_ManagerId() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		// Process(msg.EventID, msg);
		RuntimeObject* L_3 = ___msg0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 QFramework.IMsg::get_EventID() */, IMsg_t82FC7BC03416D36155554E333FB166670BDD4F86_il2cpp_TypeInfo_var, L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		RuntimeObject* L_7 = ___msg0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		QMonoBehaviour_Process_m56EA7C201022216768BE96043062EB0CEEF52729(__this, L_4, L_6, NULL);
		return;
	}

IL_0025:
	{
		// QMsgCenter.Instance.SendMsg(msg);
		il2cpp_codegen_runtime_class_init_inline(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var);
		QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604* L_8;
		L_8 = QMsgCenter_get_Instance_mC967B5FB5AAAAED3692D2E7CD7F9910B9CA21DB9(NULL);
		RuntimeObject* L_9 = ___msg0;
		NullCheck(L_8);
		QMsgCenter_SendMsg_m7EC252D53E5739E26750396B4E102DC71020DE25(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void QFramework.QMgrBehaviour::ProcessMsg(System.Int32,QFramework.QMsg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMgrBehaviour_ProcessMsg_mC9FA952D75C3ABC7964FDCFF08EE805C6FE00935 (QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571* __this, int32_t ___eventId0, QMsg_t41F187494E15464B020988A12616F24ACA4605C3* ___msg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumEventSystem_Send_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC012FAEFA78C74FE727A5652E48CFDBE295E34C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_mC97F5801CD71E7AFED7507D6BF4A5D9B15F63A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mEventSystem.Value.Send(msg.EventID, msg);
		Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998* L_0 = __this->___mEventSystem_6;
		NullCheck(L_0);
		EnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3* L_1;
		L_1 = Lazy_1_get_Value_mC97F5801CD71E7AFED7507D6BF4A5D9B15F63A89(L_0, Lazy_1_get_Value_mC97F5801CD71E7AFED7507D6BF4A5D9B15F63A89_RuntimeMethod_var);
		QMsg_t41F187494E15464B020988A12616F24ACA4605C3* L_2 = ___msg1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 QFramework.QMsg::get_EventID() */, L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		QMsg_t41F187494E15464B020988A12616F24ACA4605C3* L_6 = ___msg1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_1);
		EnumEventSystem_Send_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC012FAEFA78C74FE727A5652E48CFDBE295E34C(L_1, L_3, L_5, EnumEventSystem_Send_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBC012FAEFA78C74FE727A5652E48CFDBE295E34C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QFramework.QMgrBehaviour::OnBeforeDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMgrBehaviour_OnBeforeDestroy_m0AD6AE5D45ABD5B69A508CBD6CCD48DD86CBD276 (QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_IsValueCreated_m547A7678C332A282E98E32E8DC354DB4BC32C7D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_mC97F5801CD71E7AFED7507D6BF4A5D9B15F63A89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mEventSystem.IsValueCreated)
		Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998* L_0 = __this->___mEventSystem_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = Lazy_1_get_IsValueCreated_m547A7678C332A282E98E32E8DC354DB4BC32C7D4(L_0, Lazy_1_get_IsValueCreated_m547A7678C332A282E98E32E8DC354DB4BC32C7D4_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// mEventSystem.Value.UnRegisterAll();
		Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998* L_2 = __this->___mEventSystem_6;
		NullCheck(L_2);
		EnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3* L_3;
		L_3 = Lazy_1_get_Value_mC97F5801CD71E7AFED7507D6BF4A5D9B15F63A89(L_2, Lazy_1_get_Value_mC97F5801CD71E7AFED7507D6BF4A5D9B15F63A89_RuntimeMethod_var);
		NullCheck(L_3);
		EnumEventSystem_UnRegisterAll_m557A59D83CC8292DFE34E6705FD80A7A2B4F7491(L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void QFramework.QMgrBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMgrBehaviour__ctor_mA895E14A70A02214B13C32EC8EDBC97BC5B44943 (QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t0535C0A8BE107E0782417FB2319D0062C1493860_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_m0B6D7E66550414F48F366EA753C2554C8FDF4562_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectFactory_CreateNonPublicConstructorObject_TisEnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3_m51AA651950EEB440967400759A710C163115123F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Lazy<EnumEventSystem> mEventSystem =
		//     new Lazy<EnumEventSystem>(ObjectFactory.CreateNonPublicConstructorObject<EnumEventSystem>);
		Func_1_t0535C0A8BE107E0782417FB2319D0062C1493860* L_0 = (Func_1_t0535C0A8BE107E0782417FB2319D0062C1493860*)il2cpp_codegen_object_new(Func_1_t0535C0A8BE107E0782417FB2319D0062C1493860_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_1__ctor_m4EB0ED0C3EF33F804C3D75A52B43CF530343F37C(L_0, NULL, (intptr_t)((void*)ObjectFactory_CreateNonPublicConstructorObject_TisEnumEventSystem_tEFFC2827CF5F242F1ED1C931E90DD42F314771E3_m51AA651950EEB440967400759A710C163115123F_RuntimeMethod_var), NULL);
		Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998* L_1 = (Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998*)il2cpp_codegen_object_new(Lazy_1_tCC54A83148701AB46FEA5CA9CB8679319600D998_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Lazy_1__ctor_m0B6D7E66550414F48F366EA753C2554C8FDF4562(L_1, L_0, Lazy_1__ctor_m0B6D7E66550414F48F366EA753C2554C8FDF4562_RuntimeMethod_var);
		__this->___mEventSystem_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mEventSystem_6), (void*)L_1);
		QMonoBehaviour__ctor_m0AEFE0C4875C9FAB938D75B8767C4AA972AE72E9(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.QMgrID::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMgrID__ctor_m961B0FD8A02E71A69F8278CF73EBA34DAA159C24 (QMgrID_t66037E7A3C353C851D08B93265A97A1E038D4CA9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.QMonoBehaviour::Process(System.Int32,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_Process_m56EA7C201022216768BE96043062EB0CEEF52729 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, int32_t ___eventId0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___param1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMsg_t82FC7BC03416D36155554E333FB166670BDD4F86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QMsg_t41F187494E15464B020988A12616F24ACA4605C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (mReceiveMsgOnlyObjActive && gameObject.activeInHierarchy || !mReceiveMsgOnlyObjActive)
		bool L_0 = __this->___mReceiveMsgOnlyObjActive_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_1, NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}

IL_0015:
	{
		bool L_3 = __this->___mReceiveMsgOnlyObjActive_4;
		if (L_3)
		{
			goto IL_0048;
		}
	}

IL_001d:
	{
		// var msg = param[0] as IMsg;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___param1;
		NullCheck(L_4);
		int32_t L_5 = 0;
		RuntimeObject* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IMsg_t82FC7BC03416D36155554E333FB166670BDD4F86_il2cpp_TypeInfo_var));
		// ProcessMsg(eventId, msg as QMsg);
		int32_t L_7 = ___eventId0;
		RuntimeObject* L_8 = V_0;
		VirtualActionInvoker2< int32_t, QMsg_t41F187494E15464B020988A12616F24ACA4605C3* >::Invoke(4 /* System.Void QFramework.QMonoBehaviour::ProcessMsg(System.Int32,QFramework.QMsg) */, __this, L_7, ((QMsg_t41F187494E15464B020988A12616F24ACA4605C3*)IsInstClass((RuntimeObject*)L_8, QMsg_t41F187494E15464B020988A12616F24ACA4605C3_il2cpp_TypeInfo_var)));
		// msg.Processed = true;
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void QFramework.IMsg::set_Processed(System.Boolean) */, IMsg_t82FC7BC03416D36155554E333FB166670BDD4F86_il2cpp_TypeInfo_var, L_9, (bool)1);
		// if (msg.ReuseAble)
		RuntimeObject* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean QFramework.IMsg::get_ReuseAble() */, IMsg_t82FC7BC03416D36155554E333FB166670BDD4F86_il2cpp_TypeInfo_var, L_10);
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		// msg.Recycle2Cache();
		RuntimeObject* L_12 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(7 /* System.Void QFramework.IMsg::Recycle2Cache() */, IMsg_t82FC7BC03416D36155554E333FB166670BDD4F86_il2cpp_TypeInfo_var, L_12);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void QFramework.QMonoBehaviour::ProcessMsg(System.Int32,QFramework.QMsg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_ProcessMsg_mA816B973245EA58D755791DDEAF819AA1D941C39 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, int32_t ___eventId0, QMsg_t41F187494E15464B020988A12616F24ACA4605C3* ___msg1, const RuntimeMethod* method) 
{
	{
		// protected virtual void ProcessMsg (int eventId,QMsg msg) {}
		return;
	}
}
// System.Void QFramework.QMonoBehaviour::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_Show_mB31B675C9C6D465A4F9680F02FCF199C6DD41D83 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// OnShow ();
		VirtualActionInvoker0::Invoke(7 /* System.Void QFramework.QMonoBehaviour::OnShow() */, __this);
		// }
		return;
	}
}
// System.Void QFramework.QMonoBehaviour::OnShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_OnShow_mDEF4D99BE3FB41E47F4882546EAC30B8DFBA60A5 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnShow() {}
		return;
	}
}
// System.Void QFramework.QMonoBehaviour::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_Hide_mC24B90847D06548A9DB07A91E7670F5D91137B32 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, const RuntimeMethod* method) 
{
	{
		// OnHide ();
		VirtualActionInvoker0::Invoke(9 /* System.Void QFramework.QMonoBehaviour::OnHide() */, __this);
		// gameObject.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void QFramework.QMonoBehaviour::OnHide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_OnHide_mCA24D4F041260388295908676DAD28F838DAB149 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnHide() {}
		return;
	}
}
// System.Void QFramework.QMonoBehaviour::UnRegisterAllEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_UnRegisterAllEvent_mBBD95932D075818254ADC62E7B552A79CF5C32A0 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2DE95E477A86F144593CC7965E86728C71D0E75D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m18C64358B46891D5D938600939E6DD5961FEEF7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QMonoBehaviour_U3CUnRegisterAllEventU3Eb__12_0_mEB5F68719776898D1D35F44570232B8A6AB50005_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null != mPrivateEventIds)
		List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_0 = __this->___mPrivateEventIds_5;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// mPrivateEventIds.ForEach(id => Manager.UnRegisterEvent(id,Process));
		List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_1 = __this->___mPrivateEventIds_5;
		Action_1_t2DE95E477A86F144593CC7965E86728C71D0E75D* L_2 = (Action_1_t2DE95E477A86F144593CC7965E86728C71D0E75D*)il2cpp_codegen_object_new(Action_1_t2DE95E477A86F144593CC7965E86728C71D0E75D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m2EAAD0E7DA413138F7E7B4E79A0122FB0580D409(L_2, __this, (intptr_t)((void*)QMonoBehaviour_U3CUnRegisterAllEventU3Eb__12_0_mEB5F68719776898D1D35F44570232B8A6AB50005_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		List_1_ForEach_m18C64358B46891D5D938600939E6DD5961FEEF7A(L_1, L_2, List_1_ForEach_m18C64358B46891D5D938600939E6DD5961FEEF7A_RuntimeMethod_var);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void QFramework.QMonoBehaviour::SendMsg(QFramework.IMsg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_SendMsg_m9096CBC5524E71267CD5E65FF2711DDCB7AE4AFA (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, RuntimeObject* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IManager_tA0A5258A8D6B73E886DC29D58DFF032E1B558DAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Manager.SendMsg(msg);
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* QFramework.IManager QFramework.QMonoBehaviour::get_Manager() */, __this);
		RuntimeObject* L_1 = ___msg0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void QFramework.IManager::SendMsg(QFramework.IMsg) */, IManager_tA0A5258A8D6B73E886DC29D58DFF032E1B558DAB_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.UInt16> QFramework.QMonoBehaviour::get_mCachedEventIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* QMonoBehaviour_get_mCachedEventIds_m3F61CBBF603F7E33426FF9979F7A0571B50A2AE4 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDA6AAE251F341EFE027F981417F43A88B5ADFA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t44EF1B9C71532303037AAC259AD8D405401724D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* V_0 = NULL;
	List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* G_B2_0 = NULL;
	List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* G_B1_0 = NULL;
	{
		// get { return mPrivateEventIds ?? (mPrivateEventIds = new List<ushort>()); }
		List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_0 = __this->___mPrivateEventIds_5;
		List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_2 = (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*)il2cpp_codegen_object_new(List_1_t44EF1B9C71532303037AAC259AD8D405401724D8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mDA6AAE251F341EFE027F981417F43A88B5ADFA3B(L_2, List_1__ctor_mDA6AAE251F341EFE027F981417F43A88B5ADFA3B_RuntimeMethod_var);
		List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_3 = L_2;
		V_0 = L_3;
		__this->___mPrivateEventIds_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPrivateEventIds_5), (void*)L_3);
		List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void QFramework.QMonoBehaviour::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_OnDestroy_mB5834C1335A528467E6A5D2295A2D1018E167B59 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// OnBeforeDestroy();
		VirtualActionInvoker0::Invoke(13 /* System.Void QFramework.QMonoBehaviour::OnBeforeDestroy() */, __this);
		// UnRegisterAllEvent();
		QMonoBehaviour_UnRegisterAllEvent_mBBD95932D075818254ADC62E7B552A79CF5C32A0(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void QFramework.QMonoBehaviour::OnBeforeDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_OnBeforeDestroy_mB72C5E1FCDE6F89AA16DF1ABE3F5581594EB20D1 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual void OnBeforeDestroy(){}
		return;
	}
}
// System.Void QFramework.QMonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour__ctor_m0AEFE0C4875C9FAB938D75B8767C4AA972AE72E9 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, const RuntimeMethod* method) 
{
	{
		// protected bool mReceiveMsgOnlyObjActive = true;
		__this->___mReceiveMsgOnlyObjActive_4 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void QFramework.QMonoBehaviour::<UnRegisterAllEvent>b__12_0(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMonoBehaviour_U3CUnRegisterAllEventU3Eb__12_0_mEB5F68719776898D1D35F44570232B8A6AB50005 (QMonoBehaviour_t17F2FEC567BF69CE708B93942E12FC2E2BA100BE* __this, uint16_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t7E120AA4A73FA24ADC69BF237235F662C75EC1A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IManager_UnRegisterEvent_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8FAA9187FC5C26B0E1B80CB8B1861E3AC5C23AB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QMonoBehaviour_Process_m56EA7C201022216768BE96043062EB0CEEF52729_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mPrivateEventIds.ForEach(id => Manager.UnRegisterEvent(id,Process));
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* QFramework.IManager QFramework.QMonoBehaviour::get_Manager() */, __this);
		uint16_t L_1 = ___id0;
		Action_2_t7E120AA4A73FA24ADC69BF237235F662C75EC1A6* L_2 = (Action_2_t7E120AA4A73FA24ADC69BF237235F662C75EC1A6*)il2cpp_codegen_object_new(Action_2_t7E120AA4A73FA24ADC69BF237235F662C75EC1A6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_2__ctor_mCE8BC73F30C0984195633C278EB3615C0C07E66D(L_2, __this, (intptr_t)((void*)QMonoBehaviour_Process_m56EA7C201022216768BE96043062EB0CEEF52729_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< uint16_t, Action_2_t7E120AA4A73FA24ADC69BF237235F662C75EC1A6* >::Invoke(IManager_UnRegisterEvent_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8FAA9187FC5C26B0E1B80CB8B1861E3AC5C23AB7_RuntimeMethod_var, L_0, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QFramework.QMsgCenter QFramework.QMsgCenter::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604* QMsgCenter_get_Instance_mC967B5FB5AAAAED3692D2E7CD7F9910B9CA21DB9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingletonProperty_1_get_Instance_m4ED39FC46BA5323F207DD100E71B74E6523F48D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return MonoSingletonProperty<QMsgCenter>.Instance; }
		QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604* L_0;
		L_0 = MonoSingletonProperty_1_get_Instance_m4ED39FC46BA5323F207DD100E71B74E6523F48D2(MonoSingletonProperty_1_get_Instance_m4ED39FC46BA5323F207DD100E71B74E6523F48D2_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void QFramework.QMsgCenter::OnSingletonInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsgCenter_OnSingletonInit_mB9D8DCC168144A91A7458D17EAFF83A2235EAF59 (QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void QFramework.QMsgCenter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsgCenter_Dispose_m5E7F416CDA071BC7B7D59EC133E2DC3EFF821B74 (QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mFDE898D83DF18FD6C2BDD4248F3E32FD535BC827_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingletonProperty_1_Dispose_mDB0AB6CB568B253645CACFACF260E0F628C53A5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mRegisteredManagers.Clear();
		il2cpp_codegen_runtime_class_init_inline(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var);
		Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* L_0 = ((QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_StaticFields*)il2cpp_codegen_static_fields_for(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var))->___mRegisteredManagers_4;
		NullCheck(L_0);
		Dictionary_2_Clear_mFDE898D83DF18FD6C2BDD4248F3E32FD535BC827(L_0, Dictionary_2_Clear_mFDE898D83DF18FD6C2BDD4248F3E32FD535BC827_RuntimeMethod_var);
		// MonoSingletonProperty<QMsgCenter>.Dispose();
		MonoSingletonProperty_1_Dispose_mDB0AB6CB568B253645CACFACF260E0F628C53A5C(MonoSingletonProperty_1_Dispose_mDB0AB6CB568B253645CACFACF260E0F628C53A5C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QFramework.QMsgCenter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsgCenter_Awake_m93C4FBB94585379F31D163257DD71988B38B2289 (QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(__this, NULL);
		// }
		return;
	}
}
// System.Void QFramework.QMsgCenter::SendMsg(QFramework.IMsg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsgCenter_SendMsg_m7EC252D53E5739E26750396B4E102DC71020DE25 (QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604* __this, RuntimeObject* ___tmpMsg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mFCD04F48DD9F8D4E302DD777D042CCA7348A17AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0CD18C6BAF1E81DD0B34963070DE26E6ADE53722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF2AA4A969634078FE292FFD9E75F39DC6958080E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m85F3393197BC02165A603C57FD5C3491904D0AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMsg_t82FC7BC03416D36155554E333FB166670BDD4F86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m36668E3F5E7FF80AC32BDD6002616161E05A2F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6758D87F67F37E431CD3066B70E0558F43F3D51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8E2DE327BE7C62D7A44BE1A8BA940C7C71339248 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t2C2CD31AF0D4AD6CDED20D546227A4FDE94CDB71 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// foreach (var manager in mRegisteredManagers)
		il2cpp_codegen_runtime_class_init_inline(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var);
		Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* L_0 = ((QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_StaticFields*)il2cpp_codegen_static_fields_for(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var))->___mRegisteredManagers_4;
		NullCheck(L_0);
		Enumerator_t8E2DE327BE7C62D7A44BE1A8BA940C7C71339248 L_1;
		L_1 = Dictionary_2_GetEnumerator_mFCD04F48DD9F8D4E302DD777D042CCA7348A17AA(L_0, Dictionary_2_GetEnumerator_mFCD04F48DD9F8D4E302DD777D042CCA7348A17AA_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0CD18C6BAF1E81DD0B34963070DE26E6ADE53722((&V_0), Enumerator_Dispose_m0CD18C6BAF1E81DD0B34963070DE26E6ADE53722_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0038_1;
			}

IL_000d_1:
			{
				// foreach (var manager in mRegisteredManagers)
				KeyValuePair_2_t2C2CD31AF0D4AD6CDED20D546227A4FDE94CDB71 L_2;
				L_2 = Enumerator_get_Current_m85F3393197BC02165A603C57FD5C3491904D0AE1_inline((&V_0), Enumerator_get_Current_m85F3393197BC02165A603C57FD5C3491904D0AE1_RuntimeMethod_var);
				V_1 = L_2;
				// if (manager.Key == tmpMsg.ManagerID)
				int32_t L_3;
				L_3 = KeyValuePair_2_get_Key_m36668E3F5E7FF80AC32BDD6002616161E05A2F64_inline((&V_1), KeyValuePair_2_get_Key_m36668E3F5E7FF80AC32BDD6002616161E05A2F64_RuntimeMethod_var);
				RuntimeObject* L_4 = ___tmpMsg0;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 QFramework.IMsg::get_ManagerID() */, IMsg_t82FC7BC03416D36155554E333FB166670BDD4F86_il2cpp_TypeInfo_var, L_4);
				if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
				{
					goto IL_0038_1;
				}
			}
			{
				// manager.Value().SendMsg(tmpMsg);
				Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* L_6;
				L_6 = KeyValuePair_2_get_Value_mB6758D87F67F37E431CD3066B70E0558F43F3D51_inline((&V_1), KeyValuePair_2_get_Value_mB6758D87F67F37E431CD3066B70E0558F43F3D51_RuntimeMethod_var);
				NullCheck(L_6);
				QMgrBehaviour_t3A39B040EA75A6CD2624BEBE69BFDDA18F14A571* L_7;
				L_7 = Func_1_Invoke_m17DD7046F33D2A9BAFBA71FEC784D90405E1E1AF_inline(L_6, NULL);
				RuntimeObject* L_8 = ___tmpMsg0;
				NullCheck(L_7);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(10 /* System.Void QFramework.QMonoBehaviour::SendMsg(QFramework.IMsg) */, L_7, L_8);
				// return;
				goto IL_0051;
			}

IL_0038_1:
			{
				// foreach (var manager in mRegisteredManagers)
				bool L_9;
				L_9 = Enumerator_MoveNext_mF2AA4A969634078FE292FFD9E75F39DC6958080E((&V_0), Enumerator_MoveNext_mF2AA4A969634078FE292FFD9E75F39DC6958080E_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void QFramework.QMsgCenter::RegisterManagerFactory(System.Int32,System.Func`1<QFramework.QMgrBehaviour>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsgCenter_RegisterManagerFactory_m9BA8AA3E19E517E746761539981437D5A4D113A6 (int32_t ___mgrId0, Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* ___managerFactory1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDC99BE3343755ECA60A0846AF9920A98CCEEB7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mEE88B377594F2609D60DB4B66E65AEF0468C78D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m8A649503D3671D0F4021C84E0FBFB8438580EAB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mRegisteredManagers.ContainsKey(mgrId))
		il2cpp_codegen_runtime_class_init_inline(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var);
		Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* L_0 = ((QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_StaticFields*)il2cpp_codegen_static_fields_for(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var))->___mRegisteredManagers_4;
		int32_t L_1 = ___mgrId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mEE88B377594F2609D60DB4B66E65AEF0468C78D6(L_0, L_1, Dictionary_2_ContainsKey_mEE88B377594F2609D60DB4B66E65AEF0468C78D6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// mRegisteredManagers[mgrId] = managerFactory;
		il2cpp_codegen_runtime_class_init_inline(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var);
		Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* L_3 = ((QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_StaticFields*)il2cpp_codegen_static_fields_for(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var))->___mRegisteredManagers_4;
		int32_t L_4 = ___mgrId0;
		Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* L_5 = ___managerFactory1;
		NullCheck(L_3);
		Dictionary_2_set_Item_m8A649503D3671D0F4021C84E0FBFB8438580EAB1(L_3, L_4, L_5, Dictionary_2_set_Item_m8A649503D3671D0F4021C84E0FBFB8438580EAB1_RuntimeMethod_var);
		return;
	}

IL_001a:
	{
		// mRegisteredManagers.Add(mgrId, managerFactory);
		il2cpp_codegen_runtime_class_init_inline(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var);
		Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* L_6 = ((QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_StaticFields*)il2cpp_codegen_static_fields_for(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var))->___mRegisteredManagers_4;
		int32_t L_7 = ___mgrId0;
		Func_1_t65FB6E8A1C96D2E918F165A9DAA01CEF6E136D51* L_8 = ___managerFactory1;
		NullCheck(L_6);
		Dictionary_2_Add_mDC99BE3343755ECA60A0846AF9920A98CCEEB7D9(L_6, L_7, L_8, Dictionary_2_Add_mDC99BE3343755ECA60A0846AF9920A98CCEEB7D9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QFramework.QMsgCenter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsgCenter__ctor_mE9EDC78EDA20CD1F426FE4201F65913C5AE7B5DF (QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void QFramework.QMsgCenter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QMsgCenter__cctor_mABFE2753ECA13775DA419C3D37F46EE634395DBA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC807DD2857460344BDACA1CE5A1E69965A74655B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<int, Func<QMgrBehaviour>> mRegisteredManagers =
		//     new Dictionary<int, Func<QMgrBehaviour>>();
		Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44* L_0 = (Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44*)il2cpp_codegen_object_new(Dictionary_2_t8B3F9E15C986845A8B5834F076744AF5592D8F44_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC807DD2857460344BDACA1CE5A1E69965A74655B(L_0, Dictionary_2__ctor_mC807DD2857460344BDACA1CE5A1E69965A74655B_RuntimeMethod_var);
		((QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_StaticFields*)il2cpp_codegen_static_fields_for(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var))->___mRegisteredManagers_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_StaticFields*)il2cpp_codegen_static_fields_for(QMsgCenter_t9F21CF63B125836540DEA1FE21646DE94A748604_il2cpp_TypeInfo_var))->___mRegisteredManagers_4), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QFramework.PanelInfo QFramework.PanelInfo::Allocate(System.String,QFramework.UILevel,QFramework.IUIData,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* PanelInfo_Allocate_m2724CE5A38628FAB9502A1126C787E046AB00A32 (String_t* ___gameObjName0, int32_t ___level1, RuntimeObject* ___uiData2, Type_t* ___panelType3, String_t* ___assetBundleName4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeObjectPool_1_get_Instance_m36054853A74F1D20AA4E4C2C2DFC79998CF15743_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var panelInfo = SafeObjectPool<PanelInfo>.Instance.Allocate();
		SafeObjectPool_1_t7330D19A20C0FCCDE59BD6E33BE623AA19C1A269* L_0;
		L_0 = SafeObjectPool_1_get_Instance_m36054853A74F1D20AA4E4C2C2DFC79998CF15743(SafeObjectPool_1_get_Instance_m36054853A74F1D20AA4E4C2C2DFC79998CF15743_RuntimeMethod_var);
		NullCheck(L_0);
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_1;
		L_1 = VirtualFuncInvoker0< PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* >::Invoke(6 /* T QFramework.Pool`1<QFramework.PanelInfo>::Allocate() */, L_0);
		// panelInfo.GameObjName = gameObjName;
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_2 = L_1;
		String_t* L_3 = ___gameObjName0;
		NullCheck(L_2);
		L_2->___GameObjName_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___GameObjName_3), (void*)L_3);
		// panelInfo.Level = level;
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_4 = L_2;
		int32_t L_5 = ___level1;
		NullCheck(L_4);
		L_4->___Level_1 = L_5;
		// panelInfo.UIData = uiData;
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_6 = L_4;
		RuntimeObject* L_7 = ___uiData2;
		NullCheck(L_6);
		L_6->___UIData_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___UIData_0), (void*)L_7);
		// panelInfo.PanelType = panelType;
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_8 = L_6;
		Type_t* L_9 = ___panelType3;
		NullCheck(L_8);
		L_8->___PanelType_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___PanelType_4), (void*)L_9);
		// panelInfo.AssetBundleName = assetBundleName;
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_10 = L_8;
		String_t* L_11 = ___assetBundleName4;
		NullCheck(L_10);
		L_10->___AssetBundleName_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___AssetBundleName_2), (void*)L_11);
		// return panelInfo;
		return L_10;
	}
}
// System.Void QFramework.PanelInfo::Recycle2Cache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelInfo_Recycle2Cache_mF1AA6D25408D398B8FCC6C27E4D4526E6E2F2F19 (PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeObjectPool_1_get_Instance_m36054853A74F1D20AA4E4C2C2DFC79998CF15743_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SafeObjectPool<PanelInfo>.Instance.Recycle(this);
		SafeObjectPool_1_t7330D19A20C0FCCDE59BD6E33BE623AA19C1A269* L_0;
		L_0 = SafeObjectPool_1_get_Instance_m36054853A74F1D20AA4E4C2C2DFC79998CF15743(SafeObjectPool_1_get_Instance_m36054853A74F1D20AA4E4C2C2DFC79998CF15743_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* >::Invoke(7 /* System.Boolean QFramework.Pool`1<QFramework.PanelInfo>::Recycle(T) */, L_0, __this);
		// }
		return;
	}
}
// System.Void QFramework.PanelInfo::OnRecycled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelInfo_OnRecycled_m143336A26ECCFAFDCDB0EA4CD535B2BBBFE97616 (PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* __this, const RuntimeMethod* method) 
{
	{
		// UIData = null;
		__this->___UIData_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UIData_0), (void*)(RuntimeObject*)NULL);
		// AssetBundleName = null;
		__this->___AssetBundleName_2 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AssetBundleName_2), (void*)(String_t*)NULL);
		// GameObjName = null;
		__this->___GameObjName_3 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GameObjName_3), (void*)(String_t*)NULL);
		// PanelType = null;
		__this->___PanelType_4 = (Type_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PanelType_4), (void*)(Type_t*)NULL);
		// }
		return;
	}
}
// System.Boolean QFramework.PanelInfo::get_IsRecycled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PanelInfo_get_IsRecycled_mE8AAA1F64277059C692560400FDA375FFF0FB328 (PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRecycled { get; set; }
		bool L_0 = __this->___U3CIsRecycledU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void QFramework.PanelInfo::set_IsRecycled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelInfo_set_IsRecycled_mE390AAA3913147F40C531583F510B5A6CEF857A1 (PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsRecycled { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsRecycledU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void QFramework.PanelInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelInfo__ctor_m5DB1779A7BE78754D543041B178FFAEB7136F488 (PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.PanelSearchKeys::OnRecycled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSearchKeys_OnRecycled_m43FD46867173C7E0F1065A62AABAF436C29032CB (PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* __this, const RuntimeMethod* method) 
{
	{
		// PanelType = null;
		__this->___PanelType_0 = (Type_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PanelType_0), (void*)(Type_t*)NULL);
		// AssetBundleName = null;
		__this->___AssetBundleName_1 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AssetBundleName_1), (void*)(String_t*)NULL);
		// GameObjName = null;
		__this->___GameObjName_2 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GameObjName_2), (void*)(String_t*)NULL);
		// UIData = null;
		__this->___UIData_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UIData_4), (void*)(RuntimeObject*)NULL);
		// Panel = null;
		__this->___Panel_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Panel_5), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Boolean QFramework.PanelSearchKeys::get_IsRecycled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PanelSearchKeys_get_IsRecycled_mC845A4AD8D2EB6F34503146424DCA639A3925BCE (PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsRecycled { get; set; }
		bool L_0 = __this->___U3CIsRecycledU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void QFramework.PanelSearchKeys::set_IsRecycled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSearchKeys_set_IsRecycled_m20E0B3618AA2409EB182D6E49AB314FE144906AD (PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsRecycled { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsRecycledU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String QFramework.PanelSearchKeys::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PanelSearchKeys_ToString_m94CDA26D25C8611870CD440F2C7A3E3A61ECF10A (PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UILevel_t844760F75096E0AF2E50BCF3DF4818B876F09EED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47B6A5DBC781D27E4BAFAC4727ED31B6CAB86140);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     $"PanelSearchKeys PanelType:{PanelType} AssetBundleName:{AssetBundleName} GameObjName:{GameObjName} Level:{Level} UIData:{UIData}";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		Type_t* L_2 = __this->___PanelType_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = __this->___AssetBundleName_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = __this->___GameObjName_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		int32_t L_8 = __this->___Level_3;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(UILevel_t844760F75096E0AF2E50BCF3DF4818B876F09EED_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		RuntimeObject* L_12 = __this->___UIData_4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral47B6A5DBC781D27E4BAFAC4727ED31B6CAB86140, L_11, NULL);
		return L_13;
	}
}
// QFramework.PanelSearchKeys QFramework.PanelSearchKeys::Allocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* PanelSearchKeys_Allocate_m7002D9DE0D0B5E6F2A9972A4E731F5EBCB64281D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeObjectPool_1_get_Instance_mE469BADACFE5FF3B7B6ABBBA245623E997667B8C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SafeObjectPool<PanelSearchKeys>.Instance.Allocate();
		SafeObjectPool_1_t34350C9253C850D7F0788228F3FD5538086145C9* L_0;
		L_0 = SafeObjectPool_1_get_Instance_mE469BADACFE5FF3B7B6ABBBA245623E997667B8C(SafeObjectPool_1_get_Instance_mE469BADACFE5FF3B7B6ABBBA245623E997667B8C_RuntimeMethod_var);
		NullCheck(L_0);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1;
		L_1 = VirtualFuncInvoker0< PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* >::Invoke(6 /* T QFramework.Pool`1<QFramework.PanelSearchKeys>::Allocate() */, L_0);
		return L_1;
	}
}
// System.Void QFramework.PanelSearchKeys::Recycle2Cache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSearchKeys_Recycle2Cache_mC65DB1122420D6EFBA5328002601E703F7AFF0E1 (PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeObjectPool_1_get_Instance_mE469BADACFE5FF3B7B6ABBBA245623E997667B8C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SafeObjectPool<PanelSearchKeys>.Instance.Recycle(this);
		SafeObjectPool_1_t34350C9253C850D7F0788228F3FD5538086145C9* L_0;
		L_0 = SafeObjectPool_1_get_Instance_mE469BADACFE5FF3B7B6ABBBA245623E997667B8C(SafeObjectPool_1_get_Instance_mE469BADACFE5FF3B7B6ABBBA245623E997667B8C_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* >::Invoke(7 /* System.Boolean QFramework.Pool`1<QFramework.PanelSearchKeys>::Recycle(T) */, L_0, __this);
		// }
		return;
	}
}
// System.Void QFramework.PanelSearchKeys::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSearchKeys__ctor_mAE8DF682773BD13A37ACC37C73A5AA752BECE1A8 (PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIPanelTesterInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelTesterInfo__ctor_mDA49A0E503B6278A7765947D2436CD8613EDEEB1 (UIPanelTesterInfo_tC8D4797135F1C9FF6264C28E3BDE5DB4E0D75A54* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIPanelTester::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelTester_Awake_mCC90056BE41E7BE4A59E36A1E69A5AE99AB4391A (UIPanelTester_tE4DD8B776060AF8D1752CA10C960BA50BDA5B968* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator QFramework.UIPanelTester::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIPanelTester_Start_mFC5222FD8BEB46C577631B4D4F133CEC6E29E8E1 (UIPanelTester_tE4DD8B776060AF8D1752CA10C960BA50BDA5B968* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D* L_0 = (U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D*)il2cpp_codegen_object_new(U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__4__ctor_m64FDEF37DAD472A39B2C3B2B8BAB5055FB0BF5C6(L_0, 0, NULL);
		U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void QFramework.UIPanelTester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelTester__ctor_mA8E593DD40FA4AFC3867807B67DD35783B259BA6 (UIPanelTester_tE4DD8B776060AF8D1752CA10C960BA50BDA5B968* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIPanelTester/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBDBB390630C0E7071AF58E25D77F7A89B7909D76 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B* L_0 = (U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B*)il2cpp_codegen_object_new(U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m22BC2DCC55706DFA284694862BF2A27B311618A1(L_0, NULL);
		((U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void QFramework.UIPanelTester/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m22BC2DCC55706DFA284694862BF2A27B311618A1 (U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void QFramework.UIPanelTester/<>c::<Start>b__4_0(QFramework.UIPanelTesterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__4_0_m06F601A91D1138BA118F94376B02A4A261200305 (U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B* __this, UIPanelTesterInfo_tC8D4797135F1C9FF6264C28E3BDE5DB4E0D75A54* ___panelTesterInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mOtherPanels.ForEach(panelTesterInfo => { UIKit.OpenPanel(panelTesterInfo.PanelName, panelTesterInfo.Level); });
		UIPanelTesterInfo_tC8D4797135F1C9FF6264C28E3BDE5DB4E0D75A54* L_0 = ___panelTesterInfo0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___PanelName_0;
		UIPanelTesterInfo_tC8D4797135F1C9FF6264C28E3BDE5DB4E0D75A54* L_2 = ___panelTesterInfo0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Level_1;
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* L_4;
		L_4 = UIKit_OpenPanel_m91F0EAD13F96D64D0E6762966836DB47CD6E016D(L_1, L_3, (String_t*)NULL, NULL);
		// mOtherPanels.ForEach(panelTesterInfo => { UIKit.OpenPanel(panelTesterInfo.PanelName, panelTesterInfo.Level); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIPanelTester/<Start>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4__ctor_m64FDEF37DAD472A39B2C3B2B8BAB5055FB0BF5C6 (U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void QFramework.UIPanelTester/<Start>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_System_IDisposable_Dispose_mB16B6F681C65722F8E6F3FEF4D4C72B61B0A896B (U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean QFramework.UIPanelTester/<Start>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__4_MoveNext_m2EC1D8F50A87DEFB15280C8E2EADCA81AC570F9C (U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m3E6E77F8A3F2619EA60ACEDAE139A4FEBF4A5F3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__4_0_m06F601A91D1138BA118F94376B02A4A261200305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIPanelTester_tE4DD8B776060AF8D1752CA10C960BA50BDA5B968* V_1 = NULL;
	Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B* G_B6_0 = NULL;
	List_1_t257F64E122FC6FE6D34458BCBBFEACBB7547F38B* G_B6_1 = NULL;
	Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B* G_B5_0 = NULL;
	List_1_t257F64E122FC6FE6D34458BCBBFEACBB7547F38B* G_B5_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UIPanelTester_tE4DD8B776060AF8D1752CA10C960BA50BDA5B968* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UIKit.OpenPanel(PanelName, Level);
		UIPanelTester_tE4DD8B776060AF8D1752CA10C960BA50BDA5B968* L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = L_5->___PanelName_4;
		UIPanelTester_tE4DD8B776060AF8D1752CA10C960BA50BDA5B968* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Level_5;
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* L_9;
		L_9 = UIKit_OpenPanel_m91F0EAD13F96D64D0E6762966836DB47CD6E016D(L_6, L_8, (String_t*)NULL, NULL);
		// mOtherPanels.ForEach(panelTesterInfo => { UIKit.OpenPanel(panelTesterInfo.PanelName, panelTesterInfo.Level); });
		UIPanelTester_tE4DD8B776060AF8D1752CA10C960BA50BDA5B968* L_10 = V_1;
		NullCheck(L_10);
		List_1_t257F64E122FC6FE6D34458BCBBFEACBB7547F38B* L_11 = L_10->___mOtherPanels_6;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_il2cpp_TypeInfo_var);
		Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B* L_12 = ((U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1;
		Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B* L_13 = L_12;
		G_B5_0 = L_13;
		G_B5_1 = L_11;
		if (L_13)
		{
			G_B6_0 = L_13;
			G_B6_1 = L_11;
			goto IL_0076;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B* L_14 = ((U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B* L_15 = (Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B*)il2cpp_codegen_object_new(Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_1__ctor_m7F13465F715BB1122AD3BA03394873BFDA1AD66D(L_15, L_14, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__4_0_m06F601A91D1138BA118F94376B02A4A261200305_RuntimeMethod_var), NULL);
		Action_1_t32BFCDB0F8555AFEB01C2B92FE8C234CDA862F3B* L_16 = L_15;
		((U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3792471B37613E5337465755C21CC38BF6CC3E9B_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1), (void*)L_16);
		G_B6_0 = L_16;
		G_B6_1 = G_B5_1;
	}

IL_0076:
	{
		NullCheck(G_B6_1);
		List_1_ForEach_m3E6E77F8A3F2619EA60ACEDAE139A4FEBF4A5F3D(G_B6_1, G_B6_0, List_1_ForEach_m3E6E77F8A3F2619EA60ACEDAE139A4FEBF4A5F3D_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object QFramework.UIPanelTester/<Start>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0488CDE2D6C9D2019EDA2EEF0FD616578CE18DEA (U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void QFramework.UIPanelTester/<Start>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_mDC38EED0887A359775E0802EF0D4AC11707E0521 (U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__4_System_Collections_IEnumerator_Reset_mDC38EED0887A359775E0802EF0D4AC11707E0521_RuntimeMethod_var)));
	}
}
// System.Object QFramework.UIPanelTester/<Start>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__4_System_Collections_IEnumerator_get_Current_mA17EEA841C4B55B406423AA30FB35A85C8DE3064 (U3CStartU3Ed__4_tC5279EF9BA174E62B827B780C0C6FD4C833A927D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIDefaultPanel::OnInit(QFramework.IUIData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDefaultPanel_OnInit_m4001976AFEBDC690534179688225B4897300C08A (UIDefaultPanel_tE158BCCC507134C0EFFC242D14CF15046B9A5EE3* __this, RuntimeObject* ___uiData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void QFramework.UIDefaultPanel::OnClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDefaultPanel_OnClose_m4BF4358284268465F185350A84E2B497C48788BC (UIDefaultPanel_tE158BCCC507134C0EFFC242D14CF15046B9A5EE3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void QFramework.UIDefaultPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDefaultPanel__ctor_m0E885F668EA88E340AA675C359934E940A20C241 (UIDefaultPanel_tE158BCCC507134C0EFFC242D14CF15046B9A5EE3* __this, const RuntimeMethod* method) 
{
	{
		UIPanel__ctor_m180C81FD4745C164EBA3A7CBF93E52993519636F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QFramework.UIPanelTable QFramework.UIKit::get_Table()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UIPanelTable Table { get; } = new UIPanelTable();
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_0 = ((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___U3CTableU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void QFramework.UIKit::CloseAllPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKit_CloseAllPanel_mCE63107EA5F443AF8D5B2DC15C48AD0978FD6AFA (const RuntimeMethod* method) 
{
	{
		// UIManager.Instance.CloseAllUI();
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_0;
		L_0 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		NullCheck(L_0);
		UIManager_CloseAllUI_m156696A054D3D34F8F185875C408C964DBEB66F5(L_0, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIKit::HideAllPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKit_HideAllPanel_m49A619ECB452405126E27B597B045B80BF65E23E (const RuntimeMethod* method) 
{
	{
		// UIManager.Instance.HideAllUI();
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_0;
		L_0 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		NullCheck(L_0);
		UIManager_HideAllUI_mE8ED8B3BF5AAA9CBA0563D73E3868161351EA41E(L_0, NULL);
		// }
		return;
	}
}
// QFramework.UIPanel QFramework.UIKit::GetPanel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* UIKit_GetPanel_m06E7C6FF4C6E8511A86BAA545BA82CC476233B69 (String_t* ___panelName0, const RuntimeMethod* method) 
{
	PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* V_0 = NULL;
	{
		// var panelSearchKeys = PanelSearchKeys.Allocate();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_0;
		L_0 = PanelSearchKeys_Allocate_m7002D9DE0D0B5E6F2A9972A4E731F5EBCB64281D(NULL);
		V_0 = L_0;
		// panelSearchKeys.GameObjName = panelName;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = V_0;
		String_t* L_2 = ___panelName0;
		NullCheck(L_1);
		L_1->___GameObjName_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___GameObjName_2), (void*)L_2);
		// var retPanel = UIManager.Instance.GetUI(panelSearchKeys);
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_3;
		L_3 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_4 = V_0;
		NullCheck(L_3);
		UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* L_5;
		L_5 = UIManager_GetUI_mE8674E12C1D3FD09191DBBE5662ECF23EE22F0B4(L_3, L_4, NULL);
		// panelSearchKeys.Recycle2Cache();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_6 = V_0;
		NullCheck(L_6);
		PanelSearchKeys_Recycle2Cache_mC65DB1122420D6EFBA5328002601E703F7AFF0E1(L_6, NULL);
		// return retPanel;
		return L_5;
	}
}
// QFramework.UIPanel QFramework.UIKit::OpenPanel(System.String,QFramework.UILevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* UIKit_OpenPanel_m91F0EAD13F96D64D0E6762966836DB47CD6E016D (String_t* ___panelName0, int32_t ___level1, String_t* ___assetBundleName2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* V_0 = NULL;
	{
		// var panelSearchKeys = PanelSearchKeys.Allocate();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_0;
		L_0 = PanelSearchKeys_Allocate_m7002D9DE0D0B5E6F2A9972A4E731F5EBCB64281D(NULL);
		V_0 = L_0;
		// panelSearchKeys.Level = level;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = V_0;
		int32_t L_2 = ___level1;
		NullCheck(L_1);
		L_1->___Level_3 = L_2;
		// panelSearchKeys.AssetBundleName = assetBundleName;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_3 = V_0;
		String_t* L_4 = ___assetBundleName2;
		NullCheck(L_3);
		L_3->___AssetBundleName_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___AssetBundleName_1), (void*)L_4);
		// panelSearchKeys.GameObjName = panelName;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_5 = V_0;
		String_t* L_6 = ___panelName0;
		NullCheck(L_5);
		L_5->___GameObjName_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___GameObjName_2), (void*)L_6);
		// var retPanel = UIManager.Instance.OpenUI(panelSearchKeys);
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_7;
		L_7 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_8 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = UIManager_OpenUI_m5728CC2670494DEA84610F185C4C54D47B5C5F0F(L_7, L_8, NULL);
		// panelSearchKeys.Recycle2Cache();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_10 = V_0;
		NullCheck(L_10);
		PanelSearchKeys_Recycle2Cache_mC65DB1122420D6EFBA5328002601E703F7AFF0E1(L_10, NULL);
		// return retPanel as UIPanel;
		return ((UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20*)IsInstClass((RuntimeObject*)L_9, UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_il2cpp_TypeInfo_var));
	}
}
// System.Void QFramework.UIKit::ClosePanel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKit_ClosePanel_m5CF409985197CEF489E78683CC08D7729EC74EFA (String_t* ___panelName0, const RuntimeMethod* method) 
{
	PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* V_0 = NULL;
	{
		// var panelSearchKeys = PanelSearchKeys.Allocate();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_0;
		L_0 = PanelSearchKeys_Allocate_m7002D9DE0D0B5E6F2A9972A4E731F5EBCB64281D(NULL);
		V_0 = L_0;
		// panelSearchKeys.GameObjName = panelName;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = V_0;
		String_t* L_2 = ___panelName0;
		NullCheck(L_1);
		L_1->___GameObjName_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___GameObjName_2), (void*)L_2);
		// UIManager.Instance.CloseUI(panelSearchKeys);
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_3;
		L_3 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_4 = V_0;
		NullCheck(L_3);
		UIManager_CloseUI_m523D5AE7E1C1DD709B036FE9BF9D64C04C91A408(L_3, L_4, NULL);
		// panelSearchKeys.Recycle2Cache();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_5 = V_0;
		NullCheck(L_5);
		PanelSearchKeys_Recycle2Cache_mC65DB1122420D6EFBA5328002601E703F7AFF0E1(L_5, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIKit::ClosePanel(QFramework.UIPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKit_ClosePanel_mF1958028C14B2558A5196546CC3FA6A5FAF23CE7 (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* ___panel0, const RuntimeMethod* method) 
{
	PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* V_0 = NULL;
	{
		// var panelSearchKeys = PanelSearchKeys.Allocate();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_0;
		L_0 = PanelSearchKeys_Allocate_m7002D9DE0D0B5E6F2A9972A4E731F5EBCB64281D(NULL);
		V_0 = L_0;
		// panelSearchKeys.Panel = panel;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = V_0;
		UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* L_2 = ___panel0;
		NullCheck(L_1);
		L_1->___Panel_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Panel_5), (void*)L_2);
		// UIManager.Instance.CloseUI(panelSearchKeys);
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_3;
		L_3 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_4 = V_0;
		NullCheck(L_3);
		UIManager_CloseUI_m523D5AE7E1C1DD709B036FE9BF9D64C04C91A408(L_3, L_4, NULL);
		// panelSearchKeys.Recycle2Cache();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_5 = V_0;
		NullCheck(L_5);
		PanelSearchKeys_Recycle2Cache_mC65DB1122420D6EFBA5328002601E703F7AFF0E1(L_5, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIKit::ShowPanel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKit_ShowPanel_mDDADDB4540D8BEFB88EC5250E0D3E29D9E32FFFD (String_t* ___panelName0, const RuntimeMethod* method) 
{
	PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* V_0 = NULL;
	{
		// var panelSearchKeys = PanelSearchKeys.Allocate();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_0;
		L_0 = PanelSearchKeys_Allocate_m7002D9DE0D0B5E6F2A9972A4E731F5EBCB64281D(NULL);
		V_0 = L_0;
		// panelSearchKeys.GameObjName = panelName;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = V_0;
		String_t* L_2 = ___panelName0;
		NullCheck(L_1);
		L_1->___GameObjName_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___GameObjName_2), (void*)L_2);
		// UIManager.Instance.ShowUI(panelSearchKeys);
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_3;
		L_3 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_4 = V_0;
		NullCheck(L_3);
		UIManager_ShowUI_mE23C9DDF0ABAF70DF0DB57AC2AB131ACA0274502(L_3, L_4, NULL);
		// panelSearchKeys.Recycle2Cache();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_5 = V_0;
		NullCheck(L_5);
		PanelSearchKeys_Recycle2Cache_mC65DB1122420D6EFBA5328002601E703F7AFF0E1(L_5, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIKit::HidePanel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKit_HidePanel_mE04F6705D408B3DD4AD573991017CBB530E2687B (String_t* ___panelName0, const RuntimeMethod* method) 
{
	PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* V_0 = NULL;
	{
		// var panelSearchKeys = PanelSearchKeys.Allocate();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_0;
		L_0 = PanelSearchKeys_Allocate_m7002D9DE0D0B5E6F2A9972A4E731F5EBCB64281D(NULL);
		V_0 = L_0;
		// panelSearchKeys.GameObjName = panelName;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = V_0;
		String_t* L_2 = ___panelName0;
		NullCheck(L_1);
		L_1->___GameObjName_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___GameObjName_2), (void*)L_2);
		// UIManager.Instance.HideUI(panelSearchKeys);
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_3;
		L_3 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_4 = V_0;
		NullCheck(L_3);
		UIManager_HideUI_m013B84A7FDFB9D0460041E77EEEC6FEBCE07F1D3(L_3, L_4, NULL);
		// panelSearchKeys.Recycle2Cache();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_5 = V_0;
		NullCheck(L_5);
		PanelSearchKeys_Recycle2Cache_mC65DB1122420D6EFBA5328002601E703F7AFF0E1(L_5, NULL);
		// }
		return;
	}
}
// QFramework.UIRoot QFramework.UIKit::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* UIKit_get_Root_mA74A7A274AD69093AC4504C4D792D4744B22309B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UIRoot Root => Config.Root;
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* L_0 = ((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___Config_0;
		NullCheck(L_0);
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_1;
		L_1 = VirtualFuncInvoker0< UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* >::Invoke(4 /* QFramework.UIRoot QFramework.UIKitConfig::get_Root() */, L_0);
		return L_1;
	}
}
// QFramework.UIPanelStack QFramework.UIKit::get_Stack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* UIKit_get_Stack_mAD1EC85D27AEBC5EA8B3F31641B1D4482FEDA26A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UIPanelStack Stack { get; } = new UIPanelStack();
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* L_0 = ((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___U3CStackU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void QFramework.UIKit::Back(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKit_Back_m5D9678429A3EF1FDC3200ABECA6FA263AE8DA064 (String_t* ___currentPanelName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* V_0 = NULL;
	{
		// if (!string.IsNullOrEmpty(currentPanelName))
		String_t* L_0 = ___currentPanelName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		// var panelSearchKeys = PanelSearchKeys.Allocate();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_2;
		L_2 = PanelSearchKeys_Allocate_m7002D9DE0D0B5E6F2A9972A4E731F5EBCB64281D(NULL);
		V_0 = L_2;
		// panelSearchKeys.GameObjName = currentPanelName;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_3 = V_0;
		String_t* L_4 = ___currentPanelName0;
		NullCheck(L_3);
		L_3->___GameObjName_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___GameObjName_2), (void*)L_4);
		// UIManager.Instance.CloseUI(panelSearchKeys);
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_5;
		L_5 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_6 = V_0;
		NullCheck(L_5);
		UIManager_CloseUI_m523D5AE7E1C1DD709B036FE9BF9D64C04C91A408(L_5, L_6, NULL);
		// panelSearchKeys.Recycle2Cache();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_7 = V_0;
		NullCheck(L_7);
		PanelSearchKeys_Recycle2Cache_mC65DB1122420D6EFBA5328002601E703F7AFF0E1(L_7, NULL);
	}

IL_0026:
	{
		// Stack.Pop();
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* L_8;
		L_8 = UIKit_get_Stack_mAD1EC85D27AEBC5EA8B3F31641B1D4482FEDA26A_inline(NULL);
		NullCheck(L_8);
		UIPanelStack_Pop_mDAEEE5DF88D7BB547DCF2A0FC66DAB330631C14A(L_8, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIKit::Back(QFramework.UIPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKit_Back_mCD25D1BE999844C7D9376EEC7DFC012548779A0B (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* ___currentPanel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* V_0 = NULL;
	{
		// if (currentPanel != null)
		UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* L_0 = ___currentPanel0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// var panelSearchKeys = PanelSearchKeys.Allocate();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_2;
		L_2 = PanelSearchKeys_Allocate_m7002D9DE0D0B5E6F2A9972A4E731F5EBCB64281D(NULL);
		V_0 = L_2;
		// panelSearchKeys.GameObjName = currentPanel.name;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_3 = V_0;
		UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* L_4 = ___currentPanel0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_3);
		L_3->___GameObjName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___GameObjName_2), (void*)L_5);
		// UIManager.Instance.CloseUI(panelSearchKeys);
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_6;
		L_6 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_7 = V_0;
		NullCheck(L_6);
		UIManager_CloseUI_m523D5AE7E1C1DD709B036FE9BF9D64C04C91A408(L_6, L_7, NULL);
		// panelSearchKeys.Recycle2Cache();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_8 = V_0;
		NullCheck(L_8);
		PanelSearchKeys_Recycle2Cache_mC65DB1122420D6EFBA5328002601E703F7AFF0E1(L_8, NULL);
	}

IL_002c:
	{
		// Stack.Pop();
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* L_9;
		L_9 = UIKit_get_Stack_mAD1EC85D27AEBC5EA8B3F31641B1D4482FEDA26A_inline(NULL);
		NullCheck(L_9);
		UIPanelStack_Pop_mDAEEE5DF88D7BB547DCF2A0FC66DAB330631C14A(L_9, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIKit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKit__ctor_m3408063CC9423D4FD94DE26D8DCA4B6A21E6246A (UIKit_t677A94304C21F268561FFE09EF41745F3802B048* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void QFramework.UIKit::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKit__cctor_m6CA6B99FC119E5FC0105E1F33B92073930FCBD67 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UIKitConfig Config = new UIKitConfig();
		UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* L_0 = (UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960*)il2cpp_codegen_object_new(UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UIKitConfig__ctor_mD9859BF88C09F0B082629D3CDCDAB52CF86246C6(L_0, NULL);
		((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___Config_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___Config_0), (void*)L_0);
		// public static UIPanelTable Table { get; } = new UIPanelTable();
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_1 = (UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427*)il2cpp_codegen_object_new(UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UIPanelTable__ctor_mA1DE6CBF7FB09B408CE110B283B1F22EF04CB8CD(L_1, NULL);
		((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___U3CTableU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___U3CTableU3Ek__BackingField_1), (void*)L_1);
		// private static WaitForEndOfFrame mWaitForEndOfFrame = new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_2 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_2, NULL);
		((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___mWaitForEndOfFrame_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___mWaitForEndOfFrame_2), (void*)L_2);
		// public static UIPanelStack Stack { get; } = new UIPanelStack();
		UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* L_3 = (UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54*)il2cpp_codegen_object_new(UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UIPanelStack__ctor_m7F4A30A89607588571F6C730DEFF8AB39F3752BE(L_3, NULL);
		((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___U3CStackU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___U3CStackU3Ek__BackingField_3), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QFramework.UIRoot QFramework.UIKitConfig::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* UIKitConfig_get_Root_mDF45B404BC3FC779EB2184C598832A2FB2F3577A (UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* __this, const RuntimeMethod* method) 
{
	{
		// get { return UIRoot.Instance; }
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_0;
		L_0 = UIRoot_get_Instance_m600B5A4DA38A154E2C09DB791A310039D73FF097(NULL);
		return L_0;
	}
}
// QFramework.IPanel QFramework.UIKitConfig::LoadPanel(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIKitConfig_LoadPanel_m66BDEEA5FFD468D4F8A8B8317380A3FE33123CD0 (UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_mA0E0EA84B26436CB2A8597D4B5755C4ACC8523DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanelLoaderPool_t483EF63329244CC7926D75F10F2232F4DFF25640_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanelLoader_tDBEC6A515F5E7C24734604D4C6D6E69BEEF1C208_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var panelLoader = PanelLoaderPool.AllocateLoader();
		RuntimeObject* L_0 = __this->___PanelLoaderPool_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* QFramework.IPanelLoader QFramework.IPanelLoaderPool::AllocateLoader() */, IPanelLoaderPool_t483EF63329244CC7926D75F10F2232F4DFF25640_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// panelLoader.LoadPanelPrefab(panelSearchKeys);
		RuntimeObject* L_2 = V_0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_3 = ___panelSearchKeys0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = InterfaceFuncInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* >::Invoke(0 /* UnityEngine.GameObject QFramework.IPanelLoader::LoadPanelPrefab(QFramework.PanelSearchKeys) */, IPanelLoader_tDBEC6A515F5E7C24734604D4C6D6E69BEEF1C208_il2cpp_TypeInfo_var, L_2, L_3);
		// var panelPrefab = panelLoader.LoadPanelPrefab(panelSearchKeys);
		RuntimeObject* L_5 = V_0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_6 = ___panelSearchKeys0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = InterfaceFuncInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* >::Invoke(0 /* UnityEngine.GameObject QFramework.IPanelLoader::LoadPanelPrefab(QFramework.PanelSearchKeys) */, IPanelLoader_tDBEC6A515F5E7C24734604D4C6D6E69BEEF1C208_il2cpp_TypeInfo_var, L_5, L_6);
		// var obj = Object.Instantiate(panelPrefab);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// var retScript = obj.GetComponent<UIPanel>();
		NullCheck(L_8);
		UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* L_9;
		L_9 = GameObject_GetComponent_TisUIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_mA0E0EA84B26436CB2A8597D4B5755C4ACC8523DB(L_8, GameObject_GetComponent_TisUIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_mA0E0EA84B26436CB2A8597D4B5755C4ACC8523DB_RuntimeMethod_var);
		// var panelInterface = retScript as IPanel;
		UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* L_10 = L_9;
		// panelInterface.Loader = panelLoader;
		RuntimeObject* L_11 = V_0;
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void QFramework.IPanel::set_Loader(QFramework.IPanelLoader) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_10, L_11);
		// return retScript;
		return L_10;
	}
}
// System.Void QFramework.UIKitConfig::LoadPanelAsync(QFramework.PanelSearchKeys,System.Action`1<QFramework.IPanel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKitConfig_LoadPanelAsync_m74A94603F10A23F4F93DE6B150B9A2F0B89F1410 (UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* ___onPanelLoad1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanelLoaderPool_t483EF63329244CC7926D75F10F2232F4DFF25640_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanelLoader_tDBEC6A515F5E7C24734604D4C6D6E69BEEF1C208_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CLoadPanelAsyncU3Eb__0_m656054762AE3C5443FB693370EC7EAEEA9A660B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558* L_0 = (U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_mC8BD593D701B441FF6DBC6E652062DE57FB5E202(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558* L_1 = V_0;
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_2 = ___onPanelLoad1;
		NullCheck(L_1);
		L_1->___onPanelLoad_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onPanelLoad_1), (void*)L_2);
		// var panelLoader = PanelLoaderPool.AllocateLoader();
		U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558* L_3 = V_0;
		RuntimeObject* L_4 = __this->___PanelLoaderPool_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* QFramework.IPanelLoader QFramework.IPanelLoaderPool::AllocateLoader() */, IPanelLoaderPool_t483EF63329244CC7926D75F10F2232F4DFF25640_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_3);
		L_3->___panelLoader_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___panelLoader_0), (void*)L_5);
		// panelLoader.LoadPanelPrefabAsync(panelSearchKeys, (panelPrefab) =>
		// {
		//     var obj = Object.Instantiate(panelPrefab);
		// 
		//     var retScript = obj.GetComponent<UIPanel>();
		// 
		//     var panelInterface = retScript as IPanel;
		//     panelInterface.Loader = panelLoader;
		// 
		//     onPanelLoad?.Invoke(retScript);
		// });
		U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___panelLoader_0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_8 = ___panelSearchKeys0;
		U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558* L_9 = V_0;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_10 = (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)il2cpp_codegen_object_new(Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m3FA37AFA5AAB09F49F9C00A7D5B2A5F3D83CBB01(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CLoadPanelAsyncU3Eb__0_m656054762AE3C5443FB693370EC7EAEEA9A660B6_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2< PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6*, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* >::Invoke(1 /* System.Void QFramework.IPanelLoader::LoadPanelPrefabAsync(QFramework.PanelSearchKeys,System.Action`1<UnityEngine.GameObject>) */, IPanelLoader_tDBEC6A515F5E7C24734604D4C6D6E69BEEF1C208_il2cpp_TypeInfo_var, L_7, L_8, L_10);
		// }
		return;
	}
}
// System.Void QFramework.UIKitConfig::SetDefaultSizeOfPanel(QFramework.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKitConfig_SetDefaultSizeOfPanel_m0BA2C6BBA7A7F30E0B44327BCD7A2A17B9F75E3C (UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* __this, RuntimeObject* ___panel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var panelRectTrans = panel.Transform as RectTransform;
		RuntimeObject* L_0 = ___panel0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QFramework.IPanel::get_Transform() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_0);
		// panelRectTrans.offsetMin = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_1, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_2);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_2, L_3, NULL);
		// panelRectTrans.offsetMax = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_4);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_4, L_5, NULL);
		// panelRectTrans.anchoredPosition3D = Vector3.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_6);
		RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4(L_6, L_7, NULL);
		// panelRectTrans.anchorMin = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_8);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_8, L_9, NULL);
		// panelRectTrans.anchorMax = Vector2.one;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		NullCheck(L_10);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_10, L_11, NULL);
		// panelRectTrans.localScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_12, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIKitConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIKitConfig__ctor_mD9859BF88C09F0B082629D3CDCDAB52CF86246C6 (UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPanelLoaderPool_tD915239A668ACA79D706C8BF2C8EC5F898394D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IPanelLoaderPool PanelLoaderPool = new DefaultPanelLoaderPool();
		DefaultPanelLoaderPool_tD915239A668ACA79D706C8BF2C8EC5F898394D64* L_0 = (DefaultPanelLoaderPool_tD915239A668ACA79D706C8BF2C8EC5F898394D64*)il2cpp_codegen_object_new(DefaultPanelLoaderPool_tD915239A668ACA79D706C8BF2C8EC5F898394D64_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultPanelLoaderPool__ctor_mB9E26F733484CC5CF38FE8524F9800DF81C0384F(L_0, NULL);
		__this->___PanelLoaderPool_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PanelLoaderPool_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIKitConfig/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mC8BD593D701B441FF6DBC6E652062DE57FB5E202 (U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void QFramework.UIKitConfig/<>c__DisplayClass3_0::<LoadPanelAsync>b__0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CLoadPanelAsyncU3Eb__0_m656054762AE3C5443FB693370EC7EAEEA9A660B6 (U3CU3Ec__DisplayClass3_0_t087421D8136B5DBCF67EE434DE1A72238DAAE558* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panelPrefab0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_mA0E0EA84B26436CB2A8597D4B5755C4ACC8523DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* V_0 = NULL;
	Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* G_B2_0 = NULL;
	Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* G_B1_0 = NULL;
	{
		// var obj = Object.Instantiate(panelPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___panelPrefab0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// var retScript = obj.GetComponent<UIPanel>();
		NullCheck(L_1);
		UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* L_2;
		L_2 = GameObject_GetComponent_TisUIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_mA0E0EA84B26436CB2A8597D4B5755C4ACC8523DB(L_1, GameObject_GetComponent_TisUIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20_mA0E0EA84B26436CB2A8597D4B5755C4ACC8523DB_RuntimeMethod_var);
		V_0 = L_2;
		// var panelInterface = retScript as IPanel;
		UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* L_3 = V_0;
		// panelInterface.Loader = panelLoader;
		RuntimeObject* L_4 = __this->___panelLoader_0;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void QFramework.IPanel::set_Loader(QFramework.IPanelLoader) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_3, L_4);
		// onPanelLoad?.Invoke(retScript);
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_5 = __this->___onPanelLoad_1;
		Action_1_t20E25849394DE4D6B6392A044FE9343B1D900E40* L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* L_7 = V_0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m1D681E7EF8E6EAFA970F74982AE00F9EB9097F8A_inline(G_B2_0, L_7, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QFramework.IPanelLoader QFramework.AbstractPanelLoaderPool::AllocateLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AbstractPanelLoaderPool_AllocateLoader_m2A4FEFE4DC495A410BEE37C8FCA1C74CB29CDA87 (AbstractPanelLoaderPool_tCADA5105A3D1C016C1350D284840109286DF109E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m3F526394D19C8DF4C4AD7EB8BDA97257D6A2B8F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mB8827A8A8C5DB7347B36BF5481A7FEC3FC6FD7F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return mPool.Count > 0 ? mPool.Pop() : CreatePanelLoader();
		Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B* L_0 = __this->___mPool_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Stack_1_get_Count_mB8827A8A8C5DB7347B36BF5481A7FEC3FC6FD7F3_inline(L_0, Stack_1_get_Count_mB8827A8A8C5DB7347B36BF5481A7FEC3FC6FD7F3_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* QFramework.IPanelLoader QFramework.AbstractPanelLoaderPool::CreatePanelLoader() */, __this);
		return L_2;
	}

IL_0015:
	{
		Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B* L_3 = __this->___mPool_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Stack_1_Pop_m3F526394D19C8DF4C4AD7EB8BDA97257D6A2B8F1(L_3, Stack_1_Pop_m3F526394D19C8DF4C4AD7EB8BDA97257D6A2B8F1_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void QFramework.AbstractPanelLoaderPool::RecycleLoader(QFramework.IPanelLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractPanelLoaderPool_RecycleLoader_mE9EF37C6C7F36A2F877C8B7E7D90D64BD49AE86F (AbstractPanelLoaderPool_tCADA5105A3D1C016C1350D284840109286DF109E* __this, RuntimeObject* ___panelLoader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mDC03DE0D5BF8EDF9499DBE9AD5098251B65821B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mPool.Push(panelLoader);
		Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B* L_0 = __this->___mPool_0;
		RuntimeObject* L_1 = ___panelLoader0;
		NullCheck(L_0);
		Stack_1_Push_mDC03DE0D5BF8EDF9499DBE9AD5098251B65821B4(L_0, L_1, Stack_1_Push_mDC03DE0D5BF8EDF9499DBE9AD5098251B65821B4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QFramework.AbstractPanelLoaderPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractPanelLoaderPool__ctor_m653952C187CAD192172FF1B3405CBE43E85FAA71 (AbstractPanelLoaderPool_tCADA5105A3D1C016C1350D284840109286DF109E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mF27A160348E3A4A218F450611E922C73282CDB8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Stack<IPanelLoader> mPool = new Stack<IPanelLoader>(16);
		Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B* L_0 = (Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B*)il2cpp_codegen_object_new(Stack_1_tBD3E86CAC208F7A81D8BBB4400032268A693922B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_mF27A160348E3A4A218F450611E922C73282CDB8B(L_0, ((int32_t)16), Stack_1__ctor_mF27A160348E3A4A218F450611E922C73282CDB8B_RuntimeMethod_var);
		__this->___mPool_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPool_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QFramework.IPanelLoader QFramework.DefaultPanelLoaderPool::CreatePanelLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultPanelLoaderPool_CreatePanelLoader_mBE0F34FB62F383F33859D4317C680C4779D2D007 (DefaultPanelLoaderPool_tD915239A668ACA79D706C8BF2C8EC5F898394D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPanelLoader_tFB0893D574A52EDA4E47C6E3BA7D76664939BA44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new DefaultPanelLoader();
		DefaultPanelLoader_tFB0893D574A52EDA4E47C6E3BA7D76664939BA44* L_0 = (DefaultPanelLoader_tFB0893D574A52EDA4E47C6E3BA7D76664939BA44*)il2cpp_codegen_object_new(DefaultPanelLoader_tFB0893D574A52EDA4E47C6E3BA7D76664939BA44_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultPanelLoader__ctor_m875D40A4AD4BB1229C912B83C0C307745AF5804B(L_0, NULL);
		return L_0;
	}
}
// System.Void QFramework.DefaultPanelLoaderPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPanelLoaderPool__ctor_mB9E26F733484CC5CF38FE8524F9800DF81C0384F (DefaultPanelLoaderPool_tD915239A668ACA79D706C8BF2C8EC5F898394D64* __this, const RuntimeMethod* method) 
{
	{
		AbstractPanelLoaderPool__ctor_m653952C187CAD192172FF1B3405CBE43E85FAA71(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject QFramework.DefaultPanelLoaderPool/DefaultPanelLoader::LoadPanelPrefab(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* DefaultPanelLoader_LoadPanelPrefab_m8D58D76DF6DB5C027F0DDAC55355EBA5DB01F408 (DefaultPanelLoader_tFB0893D574A52EDA4E47C6E3BA7D76664939BA44* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mPanelPrefab = Resources.Load<GameObject>(panelSearchKeys.GameObjName);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_0 = ___panelSearchKeys0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___GameObjName_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(L_1, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		__this->___mPanelPrefab_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPanelPrefab_0), (void*)L_2);
		// return mPanelPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___mPanelPrefab_0;
		return L_3;
	}
}
// System.Void QFramework.DefaultPanelLoaderPool/DefaultPanelLoader::LoadPanelPrefabAsync(QFramework.PanelSearchKeys,System.Action`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPanelLoader_LoadPanelPrefabAsync_mC98F07EAA36149DE76EB2687FBD401CC052354F6 (DefaultPanelLoader_tFB0893D574A52EDA4E47C6E3BA7D76664939BA44* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___onPanelLoad1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_LoadAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2235D878C31C30D37971FD62EEA7DA3B5B53C869_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CLoadPanelPrefabAsyncU3Eb__0_m3A0F6EC97021A66ADCE8A8485DF7F7292445221A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030* L_0 = (U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m87D4587E852D36212163F87E514EF98F1426CC26(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030* L_1 = V_0;
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_2 = ___onPanelLoad1;
		NullCheck(L_1);
		L_1->___onPanelLoad_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onPanelLoad_0), (void*)L_2);
		// var request = Resources.LoadAsync<GameObject>(panelSearchKeys.GameObjName);
		U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030* L_3 = V_0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_4 = ___panelSearchKeys0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___GameObjName_2;
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_6;
		L_6 = Resources_LoadAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2235D878C31C30D37971FD62EEA7DA3B5B53C869(L_5, Resources_LoadAsync_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2235D878C31C30D37971FD62EEA7DA3B5B53C869_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___request_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___request_1), (void*)L_6);
		// request.completed += operation => { onPanelLoad(request.asset as GameObject); };
		U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030* L_7 = V_0;
		NullCheck(L_7);
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_8 = L_7->___request_1;
		U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030* L_9 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_10 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CLoadPanelPrefabAsyncU3Eb__0_m3A0F6EC97021A66ADCE8A8485DF7F7292445221A_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void QFramework.DefaultPanelLoaderPool/DefaultPanelLoader::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPanelLoader_Unload_mC7C1BA85D1258AEE046DAB0CBA2396DA4FCF4681 (DefaultPanelLoader_tFB0893D574A52EDA4E47C6E3BA7D76664939BA44* __this, const RuntimeMethod* method) 
{
	{
		// mPanelPrefab = null;
		__this->___mPanelPrefab_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPanelPrefab_0), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Void QFramework.DefaultPanelLoaderPool/DefaultPanelLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPanelLoader__ctor_m875D40A4AD4BB1229C912B83C0C307745AF5804B (DefaultPanelLoader_tFB0893D574A52EDA4E47C6E3BA7D76664939BA44* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.DefaultPanelLoaderPool/DefaultPanelLoader/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m87D4587E852D36212163F87E514EF98F1426CC26 (U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void QFramework.DefaultPanelLoaderPool/DefaultPanelLoader/<>c__DisplayClass2_0::<LoadPanelPrefabAsync>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CLoadPanelPrefabAsyncU3Eb__0_m3A0F6EC97021A66ADCE8A8485DF7F7292445221A (U3CU3Ec__DisplayClass2_0_t731DDE7DE82F1066421D840469CB39B990678030* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___operation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// request.completed += operation => { onPanelLoad(request.asset as GameObject); };
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_0 = __this->___onPanelLoad_0;
		ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868* L_1 = __this->___request_1;
		NullCheck(L_1);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = ResourceRequest_get_asset_m740C394902843D080795A49372A2AB3CE9705087(L_1, NULL);
		NullCheck(L_0);
		Action_1_Invoke_mBF1852490A3A2C4508CEF22E3887E57A8E6C6E45_inline(L_0, ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), NULL);
		// request.completed += operation => { onPanelLoad(request.asset as GameObject); };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIMark::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMark__ctor_m40E1D59A72F6FA4E8FD756824337BA923F5EEAE7 (UIMark_t0FE387637E9A739E091ED288404447699A835217* __this, const RuntimeMethod* method) 
{
	{
		Bind__ctor_m9293DC03F53B30940F95749D503D300264500AAA(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIPanelData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelData__ctor_m986714F520D865DF5AB8083DFB9ED42B7CFF3624 (UIPanelData_tCA999A7ACF74BA46E578B43B74B5DB2C22660199* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform QFramework.UIPanel::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* UIPanel_get_Transform_mE16A6752114AB862C2E6F42F8625D25710396E4E (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Transform => transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		return L_0;
	}
}
// QFramework.IPanelLoader QFramework.UIPanel::QFramework.IPanel.get_Loader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIPanel_QFramework_IPanel_get_Loader_m366D262E06467149AA06905F56CBA27716DB11FF (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) 
{
	{
		// IPanelLoader IPanel.Loader { get; set; }
		RuntimeObject* L_0 = __this->___U3CQFramework_IPanel_LoaderU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void QFramework.UIPanel::QFramework.IPanel.set_Loader(QFramework.IPanelLoader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_QFramework_IPanel_set_Loader_mAB6959D7170DD42ECB3B0006BDCCF8E5A8BF8F51 (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// IPanelLoader IPanel.Loader { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CQFramework_IPanel_LoaderU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQFramework_IPanel_LoaderU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// QFramework.PanelInfo QFramework.UIPanel::get_Info()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* UIPanel_get_Info_m8040629EEAB6AF74D067F477ED6C9AF4BF7904DF (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) 
{
	{
		// public PanelInfo Info { get; set; }
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_0 = __this->___U3CInfoU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void QFramework.UIPanel::set_Info(QFramework.PanelInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_set_Info_m1C44D17AD6418F6F021DE13017966633A8662425 (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* ___value0, const RuntimeMethod* method) 
{
	{
		// public PanelInfo Info { get; set; }
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_0 = ___value0;
		__this->___U3CInfoU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInfoU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// QFramework.PanelState QFramework.UIPanel::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIPanel_get_State_m3158F057798D994C63B459D5C85DBE7C999FDC4E (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) 
{
	{
		// public PanelState State { get; set; }
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void QFramework.UIPanel::set_State(QFramework.PanelState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_set_State_mD35D1FB2D0E05CA95C3A1DD324E10928BC0526D1 (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public PanelState State { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_8 = L_0;
		return;
	}
}
// QFramework.IManager QFramework.UIPanel::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIPanel_get_Manager_m8EFA37C3BEAE133AC43F479115103F04F948E008 (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) 
{
	{
		// public override IManager Manager => UIManager.Instance;
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_0;
		L_0 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		return L_0;
	}
}
// System.Void QFramework.UIPanel::OnBeforeDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_OnBeforeDestroy_m191D384B146B7A38D121C2BF444F3AD50B8E9EFF (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) 
{
	{
		// ClearUIComponents();
		VirtualActionInvoker0::Invoke(26 /* System.Void QFramework.UIPanel::ClearUIComponents() */, __this);
		// }
		return;
	}
}
// System.Void QFramework.UIPanel::ClearUIComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_ClearUIComponents_m78DAA208C253DC34BF4B5AAEABA4B49C1D325B0D (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void QFramework.UIPanel::Init(QFramework.IUIData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Init_mC3800AE381A0B3BCD1BCBB9983FA7B1D8F0D8AF3 (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, RuntimeObject* ___uiData0, const RuntimeMethod* method) 
{
	{
		// mUIData = uiData;
		RuntimeObject* L_0 = ___uiData0;
		__this->___mUIData_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUIData_9), (void*)L_0);
		// OnInit(uiData);
		RuntimeObject* L_1 = ___uiData0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(27 /* System.Void QFramework.UIPanel::OnInit(QFramework.IUIData) */, __this, L_1);
		// }
		return;
	}
}
// System.Void QFramework.UIPanel::Open(QFramework.IUIData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Open_mEAB4057B7F579E63F0F9BE8E68800F8F65449F46 (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, RuntimeObject* ___uiData0, const RuntimeMethod* method) 
{
	{
		// State = PanelState.Opening;
		UIPanel_set_State_mD35D1FB2D0E05CA95C3A1DD324E10928BC0526D1_inline(__this, 0, NULL);
		// OnOpen(uiData);
		RuntimeObject* L_0 = ___uiData0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(28 /* System.Void QFramework.UIPanel::OnOpen(QFramework.IUIData) */, __this, L_0);
		// }
		return;
	}
}
// System.Void QFramework.UIPanel::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Hide_m64375EF2BB04C108250AFFF32C9AFDC849BE4CDE (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) 
{
	{
		// State = PanelState.Hide;
		UIPanel_set_State_mD35D1FB2D0E05CA95C3A1DD324E10928BC0526D1_inline(__this, 1, NULL);
		// base.Hide();
		QMonoBehaviour_Hide_mC24B90847D06548A9DB07A91E7670F5D91137B32(__this, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIPanel::OnInit(QFramework.IUIData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_OnInit_m416FA1FD122299B010B1296959F86985BAF33C65 (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, RuntimeObject* ___uiData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void QFramework.UIPanel::OnOpen(QFramework.IUIData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_OnOpen_m28C0620685929B4D5C691D6E4118AC9EDFB29A4D (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, RuntimeObject* ___uiData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void QFramework.UIPanel::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_OnDestroy_m7238F1F3C4553C492B3D01BBA58573958C92C7DC (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) 
{
	{
		// base.OnDestroy();
		QMonoBehaviour_OnDestroy_mB5834C1335A528467E6A5D2295A2D1018E167B59(__this, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIPanel::QFramework.IPanel.Close(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_QFramework_IPanel_Close_m0D7E2EDA9632EDAB9C730BAF327F399C7C4C7273 (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, bool ___destroyed0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanelLoaderPool_t483EF63329244CC7926D75F10F2232F4DFF25640_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanelLoader_tDBEC6A515F5E7C24734604D4C6D6E69BEEF1C208_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// Info.UIData = mUIData;
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_0;
		L_0 = UIPanel_get_Info_m8040629EEAB6AF74D067F477ED6C9AF4BF7904DF_inline(__this, NULL);
		RuntimeObject* L_1 = __this->___mUIData_9;
		NullCheck(L_0);
		L_0->___UIData_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___UIData_0), (void*)L_1);
		// mOnClosed?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___mOnClosed_10;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001d;
		}
	}
	{
		goto IL_0022;
	}

IL_001d:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0022:
	{
		// mOnClosed = null;
		__this->___mOnClosed_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mOnClosed_10), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		// Hide();
		VirtualActionInvoker0::Invoke(8 /* System.Void QFramework.QMonoBehaviour::Hide() */, __this);
		// State = PanelState.Closed;
		UIPanel_set_State_mD35D1FB2D0E05CA95C3A1DD324E10928BC0526D1_inline(__this, 2, NULL);
		// OnClose();
		VirtualActionInvoker0::Invoke(29 /* System.Void QFramework.UIPanel::OnClose() */, __this);
		// if (destroyed)
		bool L_4 = ___destroyed0;
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
	}

IL_004a:
	{
		// var panelInterface = this as IPanel;
		V_0 = __this;
		// panelInterface.Loader.Unload();
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* QFramework.IPanelLoader QFramework.IPanel::get_Loader() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(2 /* System.Void QFramework.IPanelLoader::Unload() */, IPanelLoader_tDBEC6A515F5E7C24734604D4C6D6E69BEEF1C208_il2cpp_TypeInfo_var, L_7);
		// UIKit.Config.PanelLoaderPool.RecycleLoader(panelInterface.Loader);
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIKitConfig_t5C9A8D9D365DB0756EFC2AC8215920EE89E72960* L_8 = ((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___Config_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___PanelLoaderPool_0;
		RuntimeObject* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* QFramework.IPanelLoader QFramework.IPanel::get_Loader() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_9);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void QFramework.IPanelLoaderPool::RecycleLoader(QFramework.IPanelLoader) */, IPanelLoaderPool_t483EF63329244CC7926D75F10F2232F4DFF25640_il2cpp_TypeInfo_var, L_9, L_11);
		// panelInterface.Loader = null;
		RuntimeObject* L_12 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void QFramework.IPanel::set_Loader(QFramework.IPanelLoader) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_12, (RuntimeObject*)NULL);
		// mUIData = null;
		__this->___mUIData_9 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUIData_9), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIPanel::CloseSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_CloseSelf_mAD6F2243B588E4A52316277C370534F0B15033CB (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UIKit.ClosePanel(this);
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIKit_ClosePanel_mF1958028C14B2558A5196546CC3FA6A5FAF23CE7(__this, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIPanel::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Back_m6D1DE37BB4CBFC9C11F988ECE2307631C2EE18B1 (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UIKit.Back(name);
		String_t* L_0;
		L_0 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIKit_Back_m5D9678429A3EF1FDC3200ABECA6FA263AE8DA064(L_0, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIPanel::OnClosed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_OnClosed_m602CE8C2C884F425EC285C8601CE1AA5EF999AD2 (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onPanelClosed0, const RuntimeMethod* method) 
{
	{
		// mOnClosed = onPanelClosed;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___onPanelClosed0;
		__this->___mOnClosed_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mOnClosed_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void QFramework.UIPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel__ctor_m180C81FD4745C164EBA3A7CBF93E52993519636F (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) 
{
	{
		QMonoBehaviour__ctor_m0AEFE0C4875C9FAB938D75B8767C4AA972AE72E9(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIPanelStack::Push(QFramework.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelStack_Push_mF137698AF1035BA1FD2E9FB1061FD54348F3D0D5 (UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* __this, RuntimeObject* ___view0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m22E818D1BA967E4DC3F28DEA104AD2687BA84EBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* V_0 = NULL;
	{
		// if (view != null)
		RuntimeObject* L_0 = ___view0;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// mUIStack.Push(view.Info);
		Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659* L_1 = __this->___mUIStack_0;
		RuntimeObject* L_2 = ___view0;
		NullCheck(L_2);
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_3;
		L_3 = InterfaceFuncInvoker0< PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* >::Invoke(3 /* QFramework.PanelInfo QFramework.IPanel::get_Info() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		Stack_1_Push_m22E818D1BA967E4DC3F28DEA104AD2687BA84EBF(L_1, L_3, Stack_1_Push_m22E818D1BA967E4DC3F28DEA104AD2687BA84EBF_RuntimeMethod_var);
		// view.Close();
		RuntimeObject* L_4 = ___view0;
		NullCheck(L_4);
		InterfaceActionInvoker1< bool >::Invoke(11 /* System.Void QFramework.IPanel::Close(System.Boolean) */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_4, (bool)1);
		// var panelSearchKeys = PanelSearchKeys.Allocate();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_5;
		L_5 = PanelSearchKeys_Allocate_m7002D9DE0D0B5E6F2A9972A4E731F5EBCB64281D(NULL);
		V_0 = L_5;
		// panelSearchKeys.GameObjName = view.Transform.name;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_6 = V_0;
		RuntimeObject* L_7 = ___view0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QFramework.IPanel::get_Transform() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		NullCheck(L_6);
		L_6->___GameObjName_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___GameObjName_2), (void*)L_9);
		// UIManager.Instance.RemoveUI(panelSearchKeys);
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_10;
		L_10 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_11 = V_0;
		NullCheck(L_10);
		UIManager_RemoveUI_m0617315F9CD1AD0F36DDBA6A952BFFBAADBB6B59(L_10, L_11, NULL);
		// panelSearchKeys.Recycle2Cache();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_12 = V_0;
		NullCheck(L_12);
		PanelSearchKeys_Recycle2Cache_mC65DB1122420D6EFBA5328002601E703F7AFF0E1(L_12, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIPanelStack::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelStack_Pop_mDAEEE5DF88D7BB547DCF2A0FC66DAB330631C14A (UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mFA7236CEFAC61A9DCDD5C4736E47FE5073C7D53B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* V_0 = NULL;
	PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* V_1 = NULL;
	{
		// var previousPanelInfo = mUIStack.Pop();
		Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659* L_0 = __this->___mUIStack_0;
		NullCheck(L_0);
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_1;
		L_1 = Stack_1_Pop_mFA7236CEFAC61A9DCDD5C4736E47FE5073C7D53B(L_0, Stack_1_Pop_mFA7236CEFAC61A9DCDD5C4736E47FE5073C7D53B_RuntimeMethod_var);
		V_0 = L_1;
		// var panelSearchKeys = PanelSearchKeys.Allocate();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_2;
		L_2 = PanelSearchKeys_Allocate_m7002D9DE0D0B5E6F2A9972A4E731F5EBCB64281D(NULL);
		V_1 = L_2;
		// panelSearchKeys.GameObjName = previousPanelInfo.GameObjName;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_3 = V_1;
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___GameObjName_3;
		NullCheck(L_3);
		L_3->___GameObjName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___GameObjName_2), (void*)L_5);
		// panelSearchKeys.Level = previousPanelInfo.Level;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_6 = V_1;
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Level_1;
		NullCheck(L_6);
		L_6->___Level_3 = L_8;
		// panelSearchKeys.UIData = previousPanelInfo.UIData;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_9 = V_1;
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___UIData_0;
		NullCheck(L_9);
		L_9->___UIData_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___UIData_4), (void*)L_11);
		// panelSearchKeys.AssetBundleName = previousPanelInfo.AssetBundleName;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_12 = V_1;
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = L_13->___AssetBundleName_2;
		NullCheck(L_12);
		L_12->___AssetBundleName_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___AssetBundleName_1), (void*)L_14);
		// panelSearchKeys.PanelType = previousPanelInfo.PanelType;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_15 = V_1;
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_16 = V_0;
		NullCheck(L_16);
		Type_t* L_17 = L_16->___PanelType_4;
		NullCheck(L_15);
		L_15->___PanelType_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___PanelType_0), (void*)L_17);
		// UIManager.Instance.OpenUI(panelSearchKeys);
		UIManager_tF1AA7B8B3133F016BDDEA4A967841CC506A4B6C6* L_18;
		L_18 = UIManager_get_Instance_mB9E981BB653ECD08DFD81A6AA4C6BA8508EF4922(NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_19 = V_1;
		NullCheck(L_18);
		RuntimeObject* L_20;
		L_20 = UIManager_OpenUI_m5728CC2670494DEA84610F185C4C54D47B5C5F0F(L_18, L_19, NULL);
		// panelSearchKeys.Recycle2Cache();
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_21 = V_1;
		NullCheck(L_21);
		PanelSearchKeys_Recycle2Cache_mC65DB1122420D6EFBA5328002601E703F7AFF0E1(L_21, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIPanelStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelStack__ctor_m7F4A30A89607588571F6C730DEFF8AB39F3752BE (UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m8E9EF37C9368817F4A0D2B351E2E53554BE4128E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Stack<PanelInfo> mUIStack = new Stack<PanelInfo>();
		Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659* L_0 = (Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659*)il2cpp_codegen_object_new(Stack_1_tD287CCC9D7E12F41D5A9D6D7C1B01C610A4E3659_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_m8E9EF37C9368817F4A0D2B351E2E53554BE4128E(L_0, Stack_1__ctor_m8E9EF37C9368817F4A0D2B351E2E53554BE4128E_RuntimeMethod_var);
		__this->___mUIStack_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUIStack_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IEnumerable`1<QFramework.IPanel> QFramework.UIPanelTable::GetPanelsByPanelSearchKeys(QFramework.PanelSearchKeys)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIPanelTable_GetPanelsByPanelSearchKeys_m9D881B3CC4765394EADCD559E46A5B30CB646874 (UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* __this, PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* ___panelSearchKeys0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m7781CC6D24D412BF72531604769BE38B6AE5B8AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_mEACA5FAB212B8869F301F3A310847BA99061C2FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5610A48963408652A7113BB2878D7128E24434E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemStringExtension_t140E009031543A94BA19660BFC844BE3B5BD89D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetPanelsByPanelSearchKeysU3Eb__0_m59F87103B4B71982B5F3679C25766130CF302629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetPanelsByPanelSearchKeysU3Eb__1_mFAFEB5C8DEB9328877E8755FD35B629BA558C760_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2_Get_mC6F212DEAAA5631FECDF2F3554F5F9BA65E9FA2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2_Get_mD866DA017B783442A6893CCF814D820E7AD98294_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_0 = (U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m40EE41CA620B66F6E54B785846551B9A67E6C443(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_1 = V_0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_2 = ___panelSearchKeys0;
		NullCheck(L_1);
		L_1->___panelSearchKeys_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___panelSearchKeys_0), (void*)L_2);
		// if (panelSearchKeys.PanelType != null && (!string.IsNullOrEmpty(panelSearchKeys.GameObjName) || panelSearchKeys.Panel != null ))
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_3 = V_0;
		NullCheck(L_3);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_4 = L_3->___panelSearchKeys_0;
		NullCheck(L_4);
		Type_t* L_5 = L_4->___PanelType_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_5, (Type_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0067;
		}
	}
	{
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_7 = V_0;
		NullCheck(L_7);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_8 = L_7->___panelSearchKeys_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___GameObjName_2;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_9, NULL);
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_11 = V_0;
		NullCheck(L_11);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_12 = L_11->___panelSearchKeys_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = L_12->___Panel_5;
		if (!L_13)
		{
			goto IL_0067;
		}
	}

IL_003f:
	{
		// return TypeIndex.Get(panelSearchKeys.PanelType)
		//     .Where(p => p.Transform.name == panelSearchKeys.GameObjName || p == panelSearchKeys.Panel);
		UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* L_14 = __this->___TypeIndex_1;
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_15 = V_0;
		NullCheck(L_15);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_16 = L_15->___panelSearchKeys_0;
		NullCheck(L_16);
		Type_t* L_17 = L_16->___PanelType_0;
		NullCheck(L_14);
		RuntimeObject* L_18;
		L_18 = UIKitTableIndex_2_Get_mD866DA017B783442A6893CCF814D820E7AD98294(L_14, L_17, UIKitTableIndex_2_Get_mD866DA017B783442A6893CCF814D820E7AD98294_RuntimeMethod_var);
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_19 = V_0;
		Func_2_t5610A48963408652A7113BB2878D7128E24434E0* L_20 = (Func_2_t5610A48963408652A7113BB2878D7128E24434E0*)il2cpp_codegen_object_new(Func_2_t5610A48963408652A7113BB2878D7128E24434E0_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Func_2__ctor_m982D0A610C0726076CCC8DCEE7B3368D60C92A0E(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetPanelsByPanelSearchKeysU3Eb__0_m59F87103B4B71982B5F3679C25766130CF302629_RuntimeMethod_var), NULL);
		RuntimeObject* L_21;
		L_21 = Enumerable_Where_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_mEACA5FAB212B8869F301F3A310847BA99061C2FF(L_18, L_20, Enumerable_Where_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_mEACA5FAB212B8869F301F3A310847BA99061C2FF_RuntimeMethod_var);
		return L_21;
	}

IL_0067:
	{
		// if (panelSearchKeys.PanelType != null)
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_22 = V_0;
		NullCheck(L_22);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_23 = L_22->___panelSearchKeys_0;
		NullCheck(L_23);
		Type_t* L_24 = L_23->___PanelType_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_24, (Type_t*)NULL, NULL);
		if (!L_25)
		{
			goto IL_0091;
		}
	}
	{
		// return TypeIndex.Get(panelSearchKeys.PanelType);
		UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* L_26 = __this->___TypeIndex_1;
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_27 = V_0;
		NullCheck(L_27);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_28 = L_27->___panelSearchKeys_0;
		NullCheck(L_28);
		Type_t* L_29 = L_28->___PanelType_0;
		NullCheck(L_26);
		RuntimeObject* L_30;
		L_30 = UIKitTableIndex_2_Get_mD866DA017B783442A6893CCF814D820E7AD98294(L_26, L_29, UIKitTableIndex_2_Get_mD866DA017B783442A6893CCF814D820E7AD98294_RuntimeMethod_var);
		return L_30;
	}

IL_0091:
	{
		// if (panelSearchKeys.Panel != null)
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_31 = V_0;
		NullCheck(L_31);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_32 = L_31->___panelSearchKeys_0;
		NullCheck(L_32);
		RuntimeObject* L_33 = L_32->___Panel_5;
		if (!L_33)
		{
			goto IL_00d5;
		}
	}
	{
		// return GameObjectNameIndex.Get(panelSearchKeys.Panel.Transform.gameObject.name).Where(p => p == panelSearchKeys.Panel);
		UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* L_34 = __this->___GameObjectNameIndex_0;
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_35 = V_0;
		NullCheck(L_35);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_36 = L_35->___panelSearchKeys_0;
		NullCheck(L_36);
		RuntimeObject* L_37 = L_36->___Panel_5;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QFramework.IPanel::get_Transform() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_37);
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_38, NULL);
		NullCheck(L_39);
		String_t* L_40;
		L_40 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_39, NULL);
		NullCheck(L_34);
		RuntimeObject* L_41;
		L_41 = UIKitTableIndex_2_Get_mC6F212DEAAA5631FECDF2F3554F5F9BA65E9FA2B(L_34, L_40, UIKitTableIndex_2_Get_mC6F212DEAAA5631FECDF2F3554F5F9BA65E9FA2B_RuntimeMethod_var);
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_42 = V_0;
		Func_2_t5610A48963408652A7113BB2878D7128E24434E0* L_43 = (Func_2_t5610A48963408652A7113BB2878D7128E24434E0*)il2cpp_codegen_object_new(Func_2_t5610A48963408652A7113BB2878D7128E24434E0_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Func_2__ctor_m982D0A610C0726076CCC8DCEE7B3368D60C92A0E(L_43, L_42, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetPanelsByPanelSearchKeysU3Eb__1_mFAFEB5C8DEB9328877E8755FD35B629BA558C760_RuntimeMethod_var), NULL);
		RuntimeObject* L_44;
		L_44 = Enumerable_Where_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_mEACA5FAB212B8869F301F3A310847BA99061C2FF(L_41, L_43, Enumerable_Where_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_mEACA5FAB212B8869F301F3A310847BA99061C2FF_RuntimeMethod_var);
		return L_44;
	}

IL_00d5:
	{
		// if (panelSearchKeys.GameObjName.IsNotNullAndEmpty())
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_45 = V_0;
		NullCheck(L_45);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_46 = L_45->___panelSearchKeys_0;
		NullCheck(L_46);
		String_t* L_47 = L_46->___GameObjName_2;
		il2cpp_codegen_runtime_class_init_inline(SystemStringExtension_t140E009031543A94BA19660BFC844BE3B5BD89D1_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = SystemStringExtension_IsNotNullAndEmpty_mCDF5A6BB0BFAB184E5C315A6B07CF484FA4A34E3(L_47, NULL);
		if (!L_48)
		{
			goto IL_00fe;
		}
	}
	{
		// return GameObjectNameIndex.Get(panelSearchKeys.GameObjName);
		UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* L_49 = __this->___GameObjectNameIndex_0;
		U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* L_50 = V_0;
		NullCheck(L_50);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_51 = L_50->___panelSearchKeys_0;
		NullCheck(L_51);
		String_t* L_52 = L_51->___GameObjName_2;
		NullCheck(L_49);
		RuntimeObject* L_53;
		L_53 = UIKitTableIndex_2_Get_mC6F212DEAAA5631FECDF2F3554F5F9BA65E9FA2B(L_49, L_52, UIKitTableIndex_2_Get_mC6F212DEAAA5631FECDF2F3554F5F9BA65E9FA2B_RuntimeMethod_var);
		return L_53;
	}

IL_00fe:
	{
		// return Enumerable.Empty<IPanel>();
		RuntimeObject* L_54;
		L_54 = Enumerable_Empty_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m7781CC6D24D412BF72531604769BE38B6AE5B8AB_inline(Enumerable_Empty_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m7781CC6D24D412BF72531604769BE38B6AE5B8AB_RuntimeMethod_var);
		return L_54;
	}
}
// System.Void QFramework.UIPanelTable::OnAdd(QFramework.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelTable_OnAdd_m60A839D96436110B8AF7F82E8B0B01087E26D084 (UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2_Add_m0BB75C2BB99E8F80EA27F30E6EF5E9DCDA587EC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2_Add_mC8D4CB5B609BCCDEE7185729C243A2C8A7354693_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObjectNameIndex.Add(item);
		UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* L_0 = __this->___GameObjectNameIndex_0;
		RuntimeObject* L_1 = ___item0;
		NullCheck(L_0);
		UIKitTableIndex_2_Add_mC8D4CB5B609BCCDEE7185729C243A2C8A7354693(L_0, L_1, UIKitTableIndex_2_Add_mC8D4CB5B609BCCDEE7185729C243A2C8A7354693_RuntimeMethod_var);
		// TypeIndex.Add(item);
		UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* L_2 = __this->___TypeIndex_1;
		RuntimeObject* L_3 = ___item0;
		NullCheck(L_2);
		UIKitTableIndex_2_Add_m0BB75C2BB99E8F80EA27F30E6EF5E9DCDA587EC0(L_2, L_3, UIKitTableIndex_2_Add_m0BB75C2BB99E8F80EA27F30E6EF5E9DCDA587EC0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QFramework.UIPanelTable::OnRemove(QFramework.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelTable_OnRemove_m09DF18C673DC5C1C1DC90C53E591423CC7F95A24 (UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2_Remove_mA9985CA1CE2E63F5517A704F9AC56C0493D45E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2_Remove_mBC2CDDA7399164B02638A0BDA1BFA95AC1D058DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObjectNameIndex.Remove(item);
		UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* L_0 = __this->___GameObjectNameIndex_0;
		RuntimeObject* L_1 = ___item0;
		NullCheck(L_0);
		UIKitTableIndex_2_Remove_mBC2CDDA7399164B02638A0BDA1BFA95AC1D058DC(L_0, L_1, UIKitTableIndex_2_Remove_mBC2CDDA7399164B02638A0BDA1BFA95AC1D058DC_RuntimeMethod_var);
		// TypeIndex.Remove(item);
		UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* L_2 = __this->___TypeIndex_1;
		RuntimeObject* L_3 = ___item0;
		NullCheck(L_2);
		UIKitTableIndex_2_Remove_mA9985CA1CE2E63F5517A704F9AC56C0493D45E6F(L_2, L_3, UIKitTableIndex_2_Remove_mA9985CA1CE2E63F5517A704F9AC56C0493D45E6F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QFramework.UIPanelTable::OnClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelTable_OnClear_m634E3675DA128E0FF9254E3641C021C9CD979D6E (UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2_Clear_m4C599EC4706428B46AE2DC67C98F01CC2F957C3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2_Clear_m84A1D71CDC67295222EF6C6CA56F5F00E0D83162_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObjectNameIndex.Clear();
		UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* L_0 = __this->___GameObjectNameIndex_0;
		NullCheck(L_0);
		UIKitTableIndex_2_Clear_m4C599EC4706428B46AE2DC67C98F01CC2F957C3B(L_0, UIKitTableIndex_2_Clear_m4C599EC4706428B46AE2DC67C98F01CC2F957C3B_RuntimeMethod_var);
		// TypeIndex.Clear();
		UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* L_1 = __this->___TypeIndex_1;
		NullCheck(L_1);
		UIKitTableIndex_2_Clear_m84A1D71CDC67295222EF6C6CA56F5F00E0D83162(L_1, UIKitTableIndex_2_Clear_m84A1D71CDC67295222EF6C6CA56F5F00E0D83162_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<QFramework.IPanel> QFramework.UIPanelTable::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIPanelTable_GetEnumerator_mCF5652E0B1FBD892164DF1E1B2357C8DDD07FBB6 (UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisKeyValuePair_2_t53514AC605F6DBC7C9AE4C73131A69D3B2C3E538_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m352B21F669CBEB61998759D650AE07DD7972DBA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t05C4BAE51E8495617D72C607C73D5AB05A4BA62D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetEnumeratorU3Eb__6_0_m7A5B57A33F17AE3B2004B48675BBA4FC2BCC0E25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2_get_Dictionary_mFA6197584922387FA66F0E469D0139E77CAA8941_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		// return GameObjectNameIndex.Dictionary.SelectMany(kv => kv.Value).GetEnumerator();
		UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* L_0 = __this->___GameObjectNameIndex_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = UIKitTableIndex_2_get_Dictionary_mFA6197584922387FA66F0E469D0139E77CAA8941_inline(L_0, UIKitTableIndex_2_get_Dictionary_mFA6197584922387FA66F0E469D0139E77CAA8941_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var);
		Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346* L_2 = ((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var);
		U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7* L_4 = ((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346* L_5 = (Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346*)il2cpp_codegen_object_new(Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mE4C2522B2B1E64F02074E96FAB15D18734B63B3B(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CGetEnumeratorU3Eb__6_0_m7A5B57A33F17AE3B2004B48675BBA4FC2BCC0E25_RuntimeMethod_var), NULL);
		Func_2_t6409EF8934B5CD30D3EFE1F2D4398B625CB7A346* L_6 = L_5;
		((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_SelectMany_TisKeyValuePair_2_t53514AC605F6DBC7C9AE4C73131A69D3B2C3E538_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m352B21F669CBEB61998759D650AE07DD7972DBA8(G_B2_1, G_B2_0, Enumerable_SelectMany_TisKeyValuePair_2_t53514AC605F6DBC7C9AE4C73131A69D3B2C3E538_TisIPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_m352B21F669CBEB61998759D650AE07DD7972DBA8_RuntimeMethod_var);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<QFramework.IPanel>::GetEnumerator() */, IEnumerable_1_t05C4BAE51E8495617D72C607C73D5AB05A4BA62D_il2cpp_TypeInfo_var, L_7);
		return L_8;
	}
}
// System.Void QFramework.UIPanelTable::OnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelTable_OnDispose_m4BEDFF8C8CEA464CEE56FC5C704ADF606C11140B (UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2_Dispose_m3C102AFF8A8A61AA710C3527780684C4E3E9CC3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2_Dispose_m6C907A8A88C67DDECA94FBC625322F001D7BD0C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObjectNameIndex.Dispose();
		UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* L_0 = __this->___GameObjectNameIndex_0;
		NullCheck(L_0);
		UIKitTableIndex_2_Dispose_m3C102AFF8A8A61AA710C3527780684C4E3E9CC3A(L_0, UIKitTableIndex_2_Dispose_m3C102AFF8A8A61AA710C3527780684C4E3E9CC3A_RuntimeMethod_var);
		// TypeIndex.Dispose();
		UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* L_1 = __this->___TypeIndex_1;
		NullCheck(L_1);
		UIKitTableIndex_2_Dispose_m6C907A8A88C67DDECA94FBC625322F001D7BD0C4(L_1, UIKitTableIndex_2_Dispose_m6C907A8A88C67DDECA94FBC625322F001D7BD0C4_RuntimeMethod_var);
		// GameObjectNameIndex = null;
		__this->___GameObjectNameIndex_0 = (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GameObjectNameIndex_0), (void*)(UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA*)NULL);
		// TypeIndex = null;
		__this->___TypeIndex_1 = (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeIndex_1), (void*)(UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2*)NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIPanelTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanelTable__ctor_mA1DE6CBF7FB09B408CE110B283B1F22EF04CB8CD (UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__8_0_mF5C624A3DD9AD67122BFBC8DA9DB7C05BF2F3EBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__8_1_m3577FEFB2EF720FDA6442C65043C9AB385B2E7B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2__ctor_m168EB74F87B8A13FDB30D1E6940AAF5D51B8A670_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2__ctor_mABE5A1EFAADAC2E7574A852386F4F5EE476E8220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKitTable_1__ctor_m5928DBC345A2D2550E3FDAACB3F07960ABE6B8B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51* G_B2_0 = NULL;
	UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* G_B2_1 = NULL;
	Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51* G_B1_0 = NULL;
	UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* G_B1_1 = NULL;
	Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169* G_B4_0 = NULL;
	UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* G_B4_1 = NULL;
	Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169* G_B3_0 = NULL;
	UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* G_B3_1 = NULL;
	{
		// public UIKitTableIndex<string, IPanel> GameObjectNameIndex =
		//     new UIKitTableIndex<string, IPanel>(panel => panel.Transform.name);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var);
		Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51* L_0 = ((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2;
		Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var);
		U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7* L_2 = ((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51* L_3 = (Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51*)il2cpp_codegen_object_new(Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_m7445111EC5FC23F9D8CBBD17575723FDEBE6205A(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__8_0_mF5C624A3DD9AD67122BFBC8DA9DB7C05BF2F3EBE_RuntimeMethod_var), NULL);
		Func_2_t0A05F895FA38CB0E3647230A8F6D3F8B27617B51* L_4 = L_3;
		((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_2), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA* L_5 = (UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA*)il2cpp_codegen_object_new(UIKitTableIndex_2_tB16F96188A477214C73F5A9687CFBCC749D210EA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UIKitTableIndex_2__ctor_m168EB74F87B8A13FDB30D1E6940AAF5D51B8A670(L_5, G_B2_0, UIKitTableIndex_2__ctor_m168EB74F87B8A13FDB30D1E6940AAF5D51B8A670_RuntimeMethod_var);
		NullCheck(G_B2_1);
		G_B2_1->___GameObjectNameIndex_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___GameObjectNameIndex_0), (void*)L_5);
		// public UIKitTableIndex<Type, IPanel> TypeIndex = new UIKitTableIndex<Type, IPanel>(panel => panel.GetType());
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var);
		Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169* L_6 = ((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_3;
		Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = __this;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = __this;
			goto IL_004a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var);
		U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7* L_8 = ((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169* L_9 = (Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169*)il2cpp_codegen_object_new(Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m6111C32E599EEA18F32D6CE57ABB1406C1236753(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__8_1_m3577FEFB2EF720FDA6442C65043C9AB385B2E7B9_RuntimeMethod_var), NULL);
		Func_2_t2EFE3B9A01EF74D57F5DF706923453BDF78D0169* L_10 = L_9;
		((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_3), (void*)L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_004a:
	{
		UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2* L_11 = (UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2*)il2cpp_codegen_object_new(UIKitTableIndex_2_t8D6201A4F907BC8CFF7B778E2B6F0110BF0AF2A2_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UIKitTableIndex_2__ctor_mABE5A1EFAADAC2E7574A852386F4F5EE476E8220(L_11, G_B4_0, UIKitTableIndex_2__ctor_mABE5A1EFAADAC2E7574A852386F4F5EE476E8220_RuntimeMethod_var);
		NullCheck(G_B4_1);
		G_B4_1->___TypeIndex_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___TypeIndex_1), (void*)L_11);
		UIKitTable_1__ctor_m5928DBC345A2D2550E3FDAACB3F07960ABE6B8B7(__this, UIKitTable_1__ctor_m5928DBC345A2D2550E3FDAACB3F07960ABE6B8B7_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIPanelTable/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m40EE41CA620B66F6E54B785846551B9A67E6C443 (U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean QFramework.UIPanelTable/<>c__DisplayClass2_0::<GetPanelsByPanelSearchKeys>b__0(QFramework.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CGetPanelsByPanelSearchKeysU3Eb__0_m59F87103B4B71982B5F3679C25766130CF302629 (U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* __this, RuntimeObject* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(p => p.Transform.name == panelSearchKeys.GameObjName || p == panelSearchKeys.Panel);
		RuntimeObject* L_0 = ___p0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QFramework.IPanel::get_Transform() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_3 = __this->___panelSearchKeys_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___GameObjName_2;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___p0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_7 = __this->___panelSearchKeys_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___Panel_5;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(RuntimeObject*)L_8))? 1 : 0);
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Boolean QFramework.UIPanelTable/<>c__DisplayClass2_0::<GetPanelsByPanelSearchKeys>b__1(QFramework.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CGetPanelsByPanelSearchKeysU3Eb__1_mFAFEB5C8DEB9328877E8755FD35B629BA558C760 (U3CU3Ec__DisplayClass2_0_t9864A4DB9946681B8420EEF68B5D582AA36DFC0B* __this, RuntimeObject* ___p0, const RuntimeMethod* method) 
{
	{
		// return GameObjectNameIndex.Get(panelSearchKeys.Panel.Transform.gameObject.name).Where(p => p == panelSearchKeys.Panel);
		RuntimeObject* L_0 = ___p0;
		PanelSearchKeys_t1DD683336A2545A4CCCDA3285A0294AC72C8EAA6* L_1 = __this->___panelSearchKeys_0;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___Panel_5;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIPanelTable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE9B3DE70D01270F5111B39E05EF2067A284B9328 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7* L_0 = (U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7*)il2cpp_codegen_object_new(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m8581F9BAB5C4FE09C82E1AA0E4EA6B2B6352DE09(L_0, NULL);
		((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void QFramework.UIPanelTable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8581F9BAB5C4FE09C82E1AA0E4EA6B2B6352DE09 (U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<QFramework.IPanel> QFramework.UIPanelTable/<>c::<GetEnumerator>b__6_0(System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<QFramework.IPanel>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetEnumeratorU3Eb__6_0_m7A5B57A33F17AE3B2004B48675BBA4FC2BCC0E25 (U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7* __this, KeyValuePair_2_t53514AC605F6DBC7C9AE4C73131A69D3B2C3E538 ___kv0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m36665587332ECC9FA9F5F358555C0956C05A7FE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GameObjectNameIndex.Dictionary.SelectMany(kv => kv.Value).GetEnumerator();
		List_1_tEF9FCF20FCD8D8268719B28DA438E9DA2A6CE5C7* L_0;
		L_0 = KeyValuePair_2_get_Value_m36665587332ECC9FA9F5F358555C0956C05A7FE4_inline((&___kv0), KeyValuePair_2_get_Value_m36665587332ECC9FA9F5F358555C0956C05A7FE4_RuntimeMethod_var);
		return L_0;
	}
}
// System.String QFramework.UIPanelTable/<>c::<.ctor>b__8_0(QFramework.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__8_0_mF5C624A3DD9AD67122BFBC8DA9DB7C05BF2F3EBE (U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7* __this, RuntimeObject* ___panel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new UIKitTableIndex<string, IPanel>(panel => panel.Transform.name);
		RuntimeObject* L_0 = ___panel0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QFramework.IPanel::get_Transform() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		return L_2;
	}
}
// System.Type QFramework.UIPanelTable/<>c::<.ctor>b__8_1(QFramework.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CU3Ec_U3C_ctorU3Eb__8_1_m3577FEFB2EF720FDA6442C65043C9AB385B2E7B9 (U3CU3Ec_t17E25249381D83E087D907D0514F47F7F4B05AB7* __this, RuntimeObject* ___panel0, const RuntimeMethod* method) 
{
	{
		// public UIKitTableIndex<Type, IPanel> TypeIndex = new UIKitTableIndex<Type, IPanel>(panel => panel.GetType());
		RuntimeObject* L_0 = ___panel0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QFramework.UIRoot QFramework.UIRoot::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* UIRoot_get_Instance_m600B5A4DA38A154E2C09DB791A310039D73FF097 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingletonProperty_1_get_Instance_m44E26FB2C813506C6F45B857203A3F2419F22EE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisUIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_m6C1F0CA0280BAFB40C69930BDC4F42EFB13A5D51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DA896927A9C79A0C136B7032424E73EC467C8A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!mInstance)
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_0 = ((UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_StaticFields*)il2cpp_codegen_static_fields_for(UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_il2cpp_TypeInfo_var))->___mInstance_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// mInstance = FindObjectOfType<UIRoot>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_2;
		L_2 = Object_FindObjectOfType_TisUIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_m6C1F0CA0280BAFB40C69930BDC4F42EFB13A5D51(Object_FindObjectOfType_TisUIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_m6C1F0CA0280BAFB40C69930BDC4F42EFB13A5D51_RuntimeMethod_var);
		((UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_StaticFields*)il2cpp_codegen_static_fields_for(UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_il2cpp_TypeInfo_var))->___mInstance_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_StaticFields*)il2cpp_codegen_static_fields_for(UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_il2cpp_TypeInfo_var))->___mInstance_12), (void*)L_2);
	}

IL_0016:
	{
		// if (!mInstance)
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_3 = ((UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_StaticFields*)il2cpp_codegen_static_fields_for(UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_il2cpp_TypeInfo_var))->___mInstance_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		// Instantiate(Resources.Load<GameObject>("UIRoot"));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteral7DA896927A9C79A0C136B7032424E73EC467C8A8, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// mInstance = MonoSingletonProperty<UIRoot>.Instance;
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_7;
		L_7 = MonoSingletonProperty_1_get_Instance_m44E26FB2C813506C6F45B857203A3F2419F22EE9(MonoSingletonProperty_1_get_Instance_m44E26FB2C813506C6F45B857203A3F2419F22EE9_RuntimeMethod_var);
		((UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_StaticFields*)il2cpp_codegen_static_fields_for(UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_il2cpp_TypeInfo_var))->___mInstance_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_StaticFields*)il2cpp_codegen_static_fields_for(UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_il2cpp_TypeInfo_var))->___mInstance_12), (void*)L_7);
		// mInstance.name = "UIRoot";
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_8 = ((UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_StaticFields*)il2cpp_codegen_static_fields_for(UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_il2cpp_TypeInfo_var))->___mInstance_12;
		NullCheck(L_8);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_8, _stringLiteral7DA896927A9C79A0C136B7032424E73EC467C8A8, NULL);
		// DontDestroyOnLoad(mInstance);
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_9 = ((UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_StaticFields*)il2cpp_codegen_static_fields_for(UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_il2cpp_TypeInfo_var))->___mInstance_12;
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_9, NULL);
	}

IL_0055:
	{
		// return mInstance;
		UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* L_10 = ((UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_StaticFields*)il2cpp_codegen_static_fields_for(UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B_il2cpp_TypeInfo_var))->___mInstance_12;
		return L_10;
	}
}
// UnityEngine.Camera QFramework.UIRoot::get_Camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* UIRoot_get_Camera_m4C3154E6DEED7FCF3AF11784FB0E3CFB0A746EE1 (UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* __this, const RuntimeMethod* method) 
{
	{
		// get { return UICamera; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___UICamera_4;
		return L_0;
	}
}
// System.Void QFramework.UIRoot::SetResolution(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRoot_SetResolution_m08E4A6F4693A6F0E1737DB592B6EC847882232E1 (UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* __this, int32_t ___width0, int32_t ___height1, float ___matchOnWidthOrHeight2, const RuntimeMethod* method) 
{
	{
		// CanvasScaler.referenceResolution = new Vector2(width, height);
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_0 = __this->___CanvasScaler_6;
		int32_t L_1 = ___width0;
		int32_t L_2 = ___height1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), ((float)L_1), ((float)L_2), /*hidden argument*/NULL);
		NullCheck(L_0);
		CanvasScaler_set_referenceResolution_m793679B8505AF9BBF64F45D80AFE39F3F99FAB8D(L_0, L_3, NULL);
		// CanvasScaler.matchWidthOrHeight = matchOnWidthOrHeight;
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_4 = __this->___CanvasScaler_6;
		float L_5 = ___matchOnWidthOrHeight2;
		NullCheck(L_4);
		CanvasScaler_set_matchWidthOrHeight_m44635DC3E4424255C312814C325A48E37E6B6E30_inline(L_4, L_5, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 QFramework.UIRoot::GetResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UIRoot_GetResolution_mBD28F8531BCC04E61B8C12904CB68BCB885B9338 (UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* __this, const RuntimeMethod* method) 
{
	{
		// return CanvasScaler.referenceResolution;
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_0 = __this->___CanvasScaler_6;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = CanvasScaler_get_referenceResolution_m79C03DD8CE6759B045928C5339A3C5E6220276B5_inline(L_0, NULL);
		return L_1;
	}
}
// System.Single QFramework.UIRoot::GetMatchOrWidthOrHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIRoot_GetMatchOrWidthOrHeight_m2AE1C6104A704F33FCF5286FACC1690B67CBBBCC (UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* __this, const RuntimeMethod* method) 
{
	{
		// return CanvasScaler.matchWidthOrHeight;
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_0 = __this->___CanvasScaler_6;
		NullCheck(L_0);
		float L_1;
		L_1 = CanvasScaler_get_matchWidthOrHeight_m9C40FBA943172874FD27F3F7B880E2D5D5862C9B_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void QFramework.UIRoot::ScreenSpaceOverlayRenderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRoot_ScreenSpaceOverlayRenderMode_m3B738E6CD22A9C1E42D0CEB8D610C5B5CAC6689A (UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* __this, const RuntimeMethod* method) 
{
	{
		// Canvas.renderMode = UnityEngine.RenderMode.ScreenSpaceOverlay;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___Canvas_5;
		NullCheck(L_0);
		Canvas_set_renderMode_mD73E953F8A115CF469508448A00D0EDAFAF5AB47(L_0, 0, NULL);
		// UICamera.gameObject.SetActive(false);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___UICamera_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIRoot::ScreenSpaceCameraRenderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRoot_ScreenSpaceCameraRenderMode_m9951F66C4310224D201CA8DDE353F74DFCB86CF1 (UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* __this, const RuntimeMethod* method) 
{
	{
		// Canvas.renderMode = RenderMode.ScreenSpaceCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___Canvas_5;
		NullCheck(L_0);
		Canvas_set_renderMode_mD73E953F8A115CF469508448A00D0EDAFAF5AB47(L_0, 1, NULL);
		// UICamera.gameObject.SetActive(true);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___UICamera_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// Canvas.worldCamera = UICamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___Canvas_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___UICamera_4;
		NullCheck(L_3);
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIRoot::SetLevelOfPanel(QFramework.UILevel,QFramework.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRoot_SetLevelOfPanel_m74415AED6A4052FB4FBC62AB045C47254EB045C7 (UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* __this, int32_t ___level0, RuntimeObject* ___panel1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var canvas = panel.Transform.GetComponent<Canvas>();
		RuntimeObject* L_0 = ___panel1;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QFramework.IPanel::get_Transform() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2;
		L_2 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(L_1, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		// if (canvas)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// panel.Transform.SetParent(CanvasPanel);
		RuntimeObject* L_4 = ___panel1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QFramework.IPanel::get_Transform() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___CanvasPanel_11;
		NullCheck(L_5);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_5, L_6, NULL);
		return;
	}

IL_0024:
	{
		int32_t L_7 = ___level0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)-2))))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_0054;
			}
			case 3:
			{
				goto IL_0077;
			}
			case 4:
			{
				goto IL_0066;
			}
		}
	}
	{
		return;
	}

IL_0042:
	{
		// panel.Transform.SetParent(Bg);
		RuntimeObject* L_8 = ___panel1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QFramework.IPanel::get_Transform() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___Bg_8;
		NullCheck(L_9);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_9, L_10, NULL);
		// break;
		return;
	}

IL_0054:
	{
		// panel.Transform.SetParent(Common);
		RuntimeObject* L_11 = ___panel1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QFramework.IPanel::get_Transform() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_11);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___Common_9;
		NullCheck(L_12);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_12, L_13, NULL);
		// break;
		return;
	}

IL_0066:
	{
		// panel.Transform.SetParent(PopUI);
		RuntimeObject* L_14 = ___panel1;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QFramework.IPanel::get_Transform() */, IPanel_tBEF3ACACB36D95152831D69FBEC1875F9257DE20_il2cpp_TypeInfo_var, L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___PopUI_10;
		NullCheck(L_15);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_15, L_16, NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIRoot::OnSingletonInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRoot_OnSingletonInit_m47CA99C16EB7F10E25C3DA7589DE1ABAC490F575 (UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void QFramework.UIRoot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRoot__ctor_m046F352A5304E246189414B5DC647FFA8C6E769B (UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QFramework.CollisionTriggerListener QFramework.CollisionTriggerListener::Get(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* CollisionTriggerListener_Get_mF782A710FC5138FE75DA03FBB4F0C808278A5653 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3_mF52E24653F52A8AE10C82C655D4851034F305E09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3_m21AB41049A7726A0C5D2FE9F2BE300ED837BEB1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* V_0 = NULL;
	{
		// var listener = go.GetComponent<CollisionTriggerListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		NullCheck(L_0);
		CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* L_1;
		L_1 = GameObject_GetComponent_TisCollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3_m21AB41049A7726A0C5D2FE9F2BE300ED837BEB1F(L_0, GameObject_GetComponent_TisCollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3_m21AB41049A7726A0C5D2FE9F2BE300ED837BEB1F_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) listener = go.AddComponent<CollisionTriggerListener>();
		CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// if (listener == null) listener = go.AddComponent<CollisionTriggerListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___go0;
		NullCheck(L_4);
		CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* L_5;
		L_5 = GameObject_AddComponent_TisCollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3_mF52E24653F52A8AE10C82C655D4851034F305E09(L_4, GameObject_AddComponent_TisCollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3_mF52E24653F52A8AE10C82C655D4851034F305E09_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_0017:
	{
		// return listener;
		CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* L_6 = V_0;
		return L_6;
	}
}
// System.Void QFramework.CollisionTriggerListener::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_OnDestroy_mEB563ADBA99B6D3DB743576BE109E6E01B97BFB0 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, const RuntimeMethod* method) 
{
	{
		// RemoveAll();
		CollisionTriggerListener_RemoveAll_mEC5B64C53B8FABC2BD8113E9304437864EFF4AB1(__this, NULL);
		// }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::RemoveAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RemoveAll_mEC5B64C53B8FABC2BD8113E9304437864EFF4AB1 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mDF46F8E2424C9D5EF4AFB151F76D4FB6EABA11B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m77B86DA239FD5CD8A2D4D76C0CA54D3EC0E6484E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8F8CAD94EFD69041C25FEB6FD5A27E98E23A2924_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m448E364F39C5DA82725EE5C15C634F865888C72C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6C638E7A68184951B08C75959F91D218F4E75D5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m19CBBBAD5AC28C2C5125AD43BE7174CABFB005A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD5BEB5A5644C1BE5F86C5E0D44AF0A2FC7586EA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var e in mEvents.Values)
		Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550* L_0 = __this->___mEvents_4;
		NullCheck(L_0);
		ValueCollection_tD9193AF6E54CA4EDED2BB28ACE644773E9C5A6EC* L_1;
		L_1 = Dictionary_2_get_Values_m77B86DA239FD5CD8A2D4D76C0CA54D3EC0E6484E(L_0, Dictionary_2_get_Values_m77B86DA239FD5CD8A2D4D76C0CA54D3EC0E6484E_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_tD5BEB5A5644C1BE5F86C5E0D44AF0A2FC7586EA2 L_2;
		L_2 = ValueCollection_GetEnumerator_m19CBBBAD5AC28C2C5125AD43BE7174CABFB005A8(L_1, ValueCollection_GetEnumerator_m19CBBBAD5AC28C2C5125AD43BE7174CABFB005A8_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8F8CAD94EFD69041C25FEB6FD5A27E98E23A2924((&V_0), Enumerator_Dispose_m8F8CAD94EFD69041C25FEB6FD5A27E98E23A2924_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_0013_1:
			{
				// foreach (var e in mEvents.Values)
				UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* L_3;
				L_3 = Enumerator_get_Current_m6C638E7A68184951B08C75959F91D218F4E75D5C_inline((&V_0), Enumerator_get_Current_m6C638E7A68184951B08C75959F91D218F4E75D5C_RuntimeMethod_var);
				// e.RemoveAllListeners();
				NullCheck(L_3);
				UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_3, NULL);
			}

IL_001f_1:
			{
				// foreach (var e in mEvents.Values)
				bool L_4;
				L_4 = Enumerator_MoveNext_m448E364F39C5DA82725EE5C15C634F865888C72C((&V_0), Enumerator_MoveNext_m448E364F39C5DA82725EE5C15C634F865888C72C_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// mEvents.Clear();
		Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550* L_5 = __this->___mEvents_4;
		NullCheck(L_5);
		Dictionary_2_Clear_mDF46F8E2424C9D5EF4AFB151F76D4FB6EABA11B9(L_5, Dictionary_2_Clear_mDF46F8E2424C9D5EF4AFB151F76D4FB6EABA11B9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::RegisterCollisionEnter(UnityEngine.Events.UnityAction`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RegisterCollisionEnter_m612D94968D28AE485D5DD4425E5B7892515C7AEC (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Register_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m3220E4A72CA71B5A2CD31776B9EF11AAB6883890_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RegisterCollisionEnter(UnityAction<Collision> action) { Register(EventName.CollisionEnter, action); }
		UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* L_0 = ___action0;
		CollisionTriggerListener_Register_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m3220E4A72CA71B5A2CD31776B9EF11AAB6883890(__this, 0, L_0, CollisionTriggerListener_Register_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m3220E4A72CA71B5A2CD31776B9EF11AAB6883890_RuntimeMethod_var);
		// public void RegisterCollisionEnter(UnityAction<Collision> action) { Register(EventName.CollisionEnter, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::UnRegisterCollisionEnter(UnityEngine.Events.UnityAction`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_UnRegisterCollisionEnter_m50F80FA5E7401C4B2F2CCCFD3AA66EEC7A46D220 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_UnRegister_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_mE6C780A444D8C8BD9BA20921E4173CF34AEE3436_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnRegisterCollisionEnter(UnityAction<Collision> action) { UnRegister(EventName.CollisionEnter, action); }
		UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* L_0 = ___action0;
		CollisionTriggerListener_UnRegister_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_mE6C780A444D8C8BD9BA20921E4173CF34AEE3436(__this, 0, L_0, CollisionTriggerListener_UnRegister_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_mE6C780A444D8C8BD9BA20921E4173CF34AEE3436_RuntimeMethod_var);
		// public void UnRegisterCollisionEnter(UnityAction<Collision> action) { UnRegister(EventName.CollisionEnter, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_OnCollisionEnter_m3C9D3DB555DBB992CA4AE507254173DA9A2CFF93 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Dispatch_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m6045B81B8E0A196D93A85D945EBA50E4263270A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnCollisionEnter(Collision collision) { Dispatch(EventName.CollisionEnter, collision); }
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		CollisionTriggerListener_Dispatch_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m6045B81B8E0A196D93A85D945EBA50E4263270A0(__this, 0, L_0, CollisionTriggerListener_Dispatch_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m6045B81B8E0A196D93A85D945EBA50E4263270A0_RuntimeMethod_var);
		// private void OnCollisionEnter(Collision collision) { Dispatch(EventName.CollisionEnter, collision); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::RegisterCollisionExit(UnityEngine.Events.UnityAction`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RegisterCollisionExit_m2B873260DD04D0DFC5FE3ED3052B458EF8BE43F3 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Register_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m3220E4A72CA71B5A2CD31776B9EF11AAB6883890_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RegisterCollisionExit(UnityAction<Collision> action) { Register(EventName.CollisionExit, action); }
		UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* L_0 = ___action0;
		CollisionTriggerListener_Register_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m3220E4A72CA71B5A2CD31776B9EF11AAB6883890(__this, 1, L_0, CollisionTriggerListener_Register_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m3220E4A72CA71B5A2CD31776B9EF11AAB6883890_RuntimeMethod_var);
		// public void RegisterCollisionExit(UnityAction<Collision> action) { Register(EventName.CollisionExit, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::UnRegisterCollisionExit(UnityEngine.Events.UnityAction`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_UnRegisterCollisionExit_m250E8B055107A44FA42CFFD7E2A2B92331309F61 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_UnRegister_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_mE6C780A444D8C8BD9BA20921E4173CF34AEE3436_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnRegisterCollisionExit(UnityAction<Collision> action) { UnRegister(EventName.CollisionExit, action); }
		UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* L_0 = ___action0;
		CollisionTriggerListener_UnRegister_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_mE6C780A444D8C8BD9BA20921E4173CF34AEE3436(__this, 1, L_0, CollisionTriggerListener_UnRegister_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_mE6C780A444D8C8BD9BA20921E4173CF34AEE3436_RuntimeMethod_var);
		// public void UnRegisterCollisionExit(UnityAction<Collision> action) { UnRegister(EventName.CollisionExit, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_OnCollisionExit_mA0B0BBE140BBF50187D4565F942C9F5A855769DF (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Dispatch_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m6045B81B8E0A196D93A85D945EBA50E4263270A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnCollisionExit(Collision collision) { Dispatch(EventName.CollisionExit, collision); }
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		CollisionTriggerListener_Dispatch_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m6045B81B8E0A196D93A85D945EBA50E4263270A0(__this, 1, L_0, CollisionTriggerListener_Dispatch_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m6045B81B8E0A196D93A85D945EBA50E4263270A0_RuntimeMethod_var);
		// private void OnCollisionExit(Collision collision) { Dispatch(EventName.CollisionExit, collision); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::RegisterCollisionStay(UnityEngine.Events.UnityAction`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RegisterCollisionStay_mDF3228ED5583FA5DDA39EDE71590233BB7C5AA93 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Register_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m3220E4A72CA71B5A2CD31776B9EF11AAB6883890_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RegisterCollisionStay(UnityAction<Collision> action) { Register(EventName.CollisionStay, action); }
		UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* L_0 = ___action0;
		CollisionTriggerListener_Register_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m3220E4A72CA71B5A2CD31776B9EF11AAB6883890(__this, 2, L_0, CollisionTriggerListener_Register_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m3220E4A72CA71B5A2CD31776B9EF11AAB6883890_RuntimeMethod_var);
		// public void RegisterCollisionStay(UnityAction<Collision> action) { Register(EventName.CollisionStay, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::UnRegisterCollisionStay(UnityEngine.Events.UnityAction`1<UnityEngine.Collision>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_UnRegisterCollisionStay_mBEBED3C7DC18414FB381EAD706D60665CDCEF212 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_UnRegister_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_mE6C780A444D8C8BD9BA20921E4173CF34AEE3436_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnRegisterCollisionStay(UnityAction<Collision> action) { UnRegister(EventName.CollisionStay, action); }
		UnityAction_1_t1DF4F3AE410E92EAC6542371372F9F1BE147F717* L_0 = ___action0;
		CollisionTriggerListener_UnRegister_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_mE6C780A444D8C8BD9BA20921E4173CF34AEE3436(__this, 2, L_0, CollisionTriggerListener_UnRegister_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_mE6C780A444D8C8BD9BA20921E4173CF34AEE3436_RuntimeMethod_var);
		// public void UnRegisterCollisionStay(UnityAction<Collision> action) { UnRegister(EventName.CollisionStay, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::CollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_CollisionStay_mA0FC80B9DA3A67396509B6B5496ABBC126B33DCA (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Dispatch_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m6045B81B8E0A196D93A85D945EBA50E4263270A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void CollisionStay(Collision collision) { Dispatch(EventName.CollisionStay, collision); }
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		CollisionTriggerListener_Dispatch_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m6045B81B8E0A196D93A85D945EBA50E4263270A0(__this, 2, L_0, CollisionTriggerListener_Dispatch_TisCollision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_m6045B81B8E0A196D93A85D945EBA50E4263270A0_RuntimeMethod_var);
		// private void CollisionStay(Collision collision) { Dispatch(EventName.CollisionStay, collision); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::RegisterCollisionEnter2D(UnityEngine.Events.UnityAction`1<UnityEngine.Collision2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RegisterCollisionEnter2D_m5A821018767B700CAB894B7A7AC5C87AB6C5E496 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Register_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mDB924C149ED9323DC345D65B4428F24FA251D7C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RegisterCollisionEnter2D(UnityAction<Collision2D> action) { Register(EventName.CollisionEnter2D, action); }
		UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* L_0 = ___action0;
		CollisionTriggerListener_Register_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mDB924C149ED9323DC345D65B4428F24FA251D7C8(__this, 3, L_0, CollisionTriggerListener_Register_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mDB924C149ED9323DC345D65B4428F24FA251D7C8_RuntimeMethod_var);
		// public void RegisterCollisionEnter2D(UnityAction<Collision2D> action) { Register(EventName.CollisionEnter2D, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::UnRegisterCollisionEnter2D(UnityEngine.Events.UnityAction`1<UnityEngine.Collision2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_UnRegisterCollisionEnter2D_m0CDFC204EA217628F5E75FDF85EC44C9CD26E9FC (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_UnRegister_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_m30E0E7330AA1E8012BE506BACBCE461AD2E797B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnRegisterCollisionEnter2D(UnityAction<Collision2D> action) { UnRegister(EventName.CollisionEnter2D, action); }
		UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* L_0 = ___action0;
		CollisionTriggerListener_UnRegister_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_m30E0E7330AA1E8012BE506BACBCE461AD2E797B0(__this, 3, L_0, CollisionTriggerListener_UnRegister_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_m30E0E7330AA1E8012BE506BACBCE461AD2E797B0_RuntimeMethod_var);
		// public void UnRegisterCollisionEnter2D(UnityAction<Collision2D> action) { UnRegister(EventName.CollisionEnter2D, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_OnCollisionEnter2D_m8A3151B2E781AA3E7B678DB0F0B9022CB4943272 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Dispatch_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mC601E72ADC091D508F6853D490125BF22A519289_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnCollisionEnter2D(Collision2D collision) { Dispatch(EventName.CollisionEnter2D, collision); }
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		CollisionTriggerListener_Dispatch_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mC601E72ADC091D508F6853D490125BF22A519289(__this, 3, L_0, CollisionTriggerListener_Dispatch_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mC601E72ADC091D508F6853D490125BF22A519289_RuntimeMethod_var);
		// private void OnCollisionEnter2D(Collision2D collision) { Dispatch(EventName.CollisionEnter2D, collision); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::RegisterCollisionExit2D(UnityEngine.Events.UnityAction`1<UnityEngine.Collision2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RegisterCollisionExit2D_mFBC76C30AC033A244607D81D7FCC4B36BF18877D (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Register_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mDB924C149ED9323DC345D65B4428F24FA251D7C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RegisterCollisionExit2D(UnityAction<Collision2D> action) { Register(EventName.CollisionExit2D, action); }
		UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* L_0 = ___action0;
		CollisionTriggerListener_Register_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mDB924C149ED9323DC345D65B4428F24FA251D7C8(__this, 4, L_0, CollisionTriggerListener_Register_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mDB924C149ED9323DC345D65B4428F24FA251D7C8_RuntimeMethod_var);
		// public void RegisterCollisionExit2D(UnityAction<Collision2D> action) { Register(EventName.CollisionExit2D, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::UnRegisterCollisionExit2D(UnityEngine.Events.UnityAction`1<UnityEngine.Collision2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_UnRegisterCollisionExit2D_m649EBD2649FAB8E456D1C2AC5AAAD1B5CA4D5306 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_UnRegister_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_m30E0E7330AA1E8012BE506BACBCE461AD2E797B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnRegisterCollisionExit2D(UnityAction<Collision2D> action) { UnRegister(EventName.CollisionExit2D, action); }
		UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* L_0 = ___action0;
		CollisionTriggerListener_UnRegister_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_m30E0E7330AA1E8012BE506BACBCE461AD2E797B0(__this, 4, L_0, CollisionTriggerListener_UnRegister_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_m30E0E7330AA1E8012BE506BACBCE461AD2E797B0_RuntimeMethod_var);
		// public void UnRegisterCollisionExit2D(UnityAction<Collision2D> action) { UnRegister(EventName.CollisionExit2D, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_OnCollisionExit2D_mD2347CF3A850D9A4E12E8CCCFF3919E704D8BF74 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Dispatch_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mC601E72ADC091D508F6853D490125BF22A519289_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnCollisionExit2D(Collision2D collision) { Dispatch(EventName.CollisionExit2D, collision); }
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		CollisionTriggerListener_Dispatch_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mC601E72ADC091D508F6853D490125BF22A519289(__this, 4, L_0, CollisionTriggerListener_Dispatch_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mC601E72ADC091D508F6853D490125BF22A519289_RuntimeMethod_var);
		// private void OnCollisionExit2D(Collision2D collision) { Dispatch(EventName.CollisionExit2D, collision); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::RegisterCollisionStay2D(UnityEngine.Events.UnityAction`1<UnityEngine.Collision2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RegisterCollisionStay2D_mC5A6135D25A7EB55988117019865DF63C2C67C8C (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Register_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mDB924C149ED9323DC345D65B4428F24FA251D7C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RegisterCollisionStay2D(UnityAction<Collision2D> action) { Register(EventName.CollisionStay2D, action); }
		UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* L_0 = ___action0;
		CollisionTriggerListener_Register_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mDB924C149ED9323DC345D65B4428F24FA251D7C8(__this, 5, L_0, CollisionTriggerListener_Register_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mDB924C149ED9323DC345D65B4428F24FA251D7C8_RuntimeMethod_var);
		// public void RegisterCollisionStay2D(UnityAction<Collision2D> action) { Register(EventName.CollisionStay2D, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::UnRegisterCollisionStay2D(UnityEngine.Events.UnityAction`1<UnityEngine.Collision2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_UnRegisterCollisionStay2D_m8986E60990C3913DD8DCC91B3F0EF50E5791121B (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_UnRegister_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_m30E0E7330AA1E8012BE506BACBCE461AD2E797B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnRegisterCollisionStay2D(UnityAction<Collision2D> action) { UnRegister(EventName.CollisionStay2D, action); }
		UnityAction_1_t4449B5011DC5DC3DCDF42711172663513FE0AD5B* L_0 = ___action0;
		CollisionTriggerListener_UnRegister_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_m30E0E7330AA1E8012BE506BACBCE461AD2E797B0(__this, 5, L_0, CollisionTriggerListener_UnRegister_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_m30E0E7330AA1E8012BE506BACBCE461AD2E797B0_RuntimeMethod_var);
		// public void UnRegisterCollisionStay2D(UnityAction<Collision2D> action) { UnRegister(EventName.CollisionStay2D, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::CollisionStay2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_CollisionStay2D_m8F46101BE6F535688906020B933F1D5A18A474AF (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Dispatch_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mC601E72ADC091D508F6853D490125BF22A519289_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void CollisionStay2D(Collision2D collision) { Dispatch(EventName.CollisionStay2D, collision); }
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		CollisionTriggerListener_Dispatch_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mC601E72ADC091D508F6853D490125BF22A519289(__this, 5, L_0, CollisionTriggerListener_Dispatch_TisCollision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_mC601E72ADC091D508F6853D490125BF22A519289_RuntimeMethod_var);
		// private void CollisionStay2D(Collision2D collision) { Dispatch(EventName.CollisionStay2D, collision); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::RegisterTriggerEnter(UnityEngine.Events.UnityAction`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RegisterTriggerEnter_mDEE17DFB266C4AEEA3157F7C55FB9A6BFAAEFDFF (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Register_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m8304081506004D907B9C350ADD3E06FDC094BFEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RegisterTriggerEnter(UnityAction<Collider> action) { Register(EventName.TriggerEnter, action); }
		UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* L_0 = ___action0;
		CollisionTriggerListener_Register_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m8304081506004D907B9C350ADD3E06FDC094BFEF(__this, 6, L_0, CollisionTriggerListener_Register_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m8304081506004D907B9C350ADD3E06FDC094BFEF_RuntimeMethod_var);
		// public void RegisterTriggerEnter(UnityAction<Collider> action) { Register(EventName.TriggerEnter, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::UnRegisterTriggerEnter(UnityEngine.Events.UnityAction`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_UnRegisterTriggerEnter_mD1CA7E2B3A0215C7014D7BF751EDC3189B77A462 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_UnRegister_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mF2DEA29114FFA48088CB1517E58F161B5164F443_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnRegisterTriggerEnter(UnityAction<Collider> action) { UnRegister(EventName.TriggerEnter, action); }
		UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* L_0 = ___action0;
		CollisionTriggerListener_UnRegister_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mF2DEA29114FFA48088CB1517E58F161B5164F443(__this, 6, L_0, CollisionTriggerListener_UnRegister_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mF2DEA29114FFA48088CB1517E58F161B5164F443_RuntimeMethod_var);
		// public void UnRegisterTriggerEnter(UnityAction<Collider> action) { UnRegister(EventName.TriggerEnter, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_OnTriggerEnter_m8CC912056784415419CB0920B3E0AF127879D7B2 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Dispatch_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m3BE5B446E5DB17763FB4CCC2EE9A45846D967BF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnTriggerEnter(Collider collider) { Dispatch(EventName.TriggerEnter, collider); }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collider0;
		CollisionTriggerListener_Dispatch_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m3BE5B446E5DB17763FB4CCC2EE9A45846D967BF3(__this, 6, L_0, CollisionTriggerListener_Dispatch_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m3BE5B446E5DB17763FB4CCC2EE9A45846D967BF3_RuntimeMethod_var);
		// private void OnTriggerEnter(Collider collider) { Dispatch(EventName.TriggerEnter, collider); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::RegisterTriggerExit(UnityEngine.Events.UnityAction`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RegisterTriggerExit_mE07B3B1381A4E6806E0E5F8D5161CC68E48AF7D2 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Register_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m8304081506004D907B9C350ADD3E06FDC094BFEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RegisterTriggerExit(UnityAction<Collider> action) { Register(EventName.TriggerExit, action); }
		UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* L_0 = ___action0;
		CollisionTriggerListener_Register_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m8304081506004D907B9C350ADD3E06FDC094BFEF(__this, 7, L_0, CollisionTriggerListener_Register_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m8304081506004D907B9C350ADD3E06FDC094BFEF_RuntimeMethod_var);
		// public void RegisterTriggerExit(UnityAction<Collider> action) { Register(EventName.TriggerExit, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::UnRegisterTriggerExit(UnityEngine.Events.UnityAction`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_UnRegisterTriggerExit_m37F074B244E336A672736FD335C78A0C00CE60EE (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_UnRegister_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mF2DEA29114FFA48088CB1517E58F161B5164F443_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnRegisterTriggerExit(UnityAction<Collider> action) { UnRegister(EventName.TriggerExit, action); }
		UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* L_0 = ___action0;
		CollisionTriggerListener_UnRegister_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mF2DEA29114FFA48088CB1517E58F161B5164F443(__this, 7, L_0, CollisionTriggerListener_UnRegister_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mF2DEA29114FFA48088CB1517E58F161B5164F443_RuntimeMethod_var);
		// public void UnRegisterTriggerExit(UnityAction<Collider> action) { UnRegister(EventName.TriggerExit, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_OnTriggerExit_mE99E18CE4A39F30DAC37FDDCFD93553277E19E40 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Dispatch_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m3BE5B446E5DB17763FB4CCC2EE9A45846D967BF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnTriggerExit(Collider collider) { Dispatch(EventName.TriggerExit, collider); }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collider0;
		CollisionTriggerListener_Dispatch_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m3BE5B446E5DB17763FB4CCC2EE9A45846D967BF3(__this, 7, L_0, CollisionTriggerListener_Dispatch_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m3BE5B446E5DB17763FB4CCC2EE9A45846D967BF3_RuntimeMethod_var);
		// private void OnTriggerExit(Collider collider) { Dispatch(EventName.TriggerExit, collider); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::RegisterTriggerStay(UnityEngine.Events.UnityAction`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RegisterTriggerStay_mB5B01678183C746A3BB74B2922573D1CF1C8C916 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Register_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m8304081506004D907B9C350ADD3E06FDC094BFEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RegisterTriggerStay(UnityAction<Collider> action) { Register(EventName.TriggerStay, action); }
		UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* L_0 = ___action0;
		CollisionTriggerListener_Register_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m8304081506004D907B9C350ADD3E06FDC094BFEF(__this, 8, L_0, CollisionTriggerListener_Register_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m8304081506004D907B9C350ADD3E06FDC094BFEF_RuntimeMethod_var);
		// public void RegisterTriggerStay(UnityAction<Collider> action) { Register(EventName.TriggerStay, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::UnRegisterTriggerStay(UnityEngine.Events.UnityAction`1<UnityEngine.Collider>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_UnRegisterTriggerStay_m505087B4B3DFED9808F62865FC9737FF943F4325 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_UnRegister_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mF2DEA29114FFA48088CB1517E58F161B5164F443_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnRegisterTriggerStay(UnityAction<Collider> action) { UnRegister(EventName.TriggerStay, action); }
		UnityAction_1_t7A7B83CEC25AB27A83B91C029988A862AF0AE66D* L_0 = ___action0;
		CollisionTriggerListener_UnRegister_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mF2DEA29114FFA48088CB1517E58F161B5164F443(__this, 8, L_0, CollisionTriggerListener_UnRegister_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_mF2DEA29114FFA48088CB1517E58F161B5164F443_RuntimeMethod_var);
		// public void UnRegisterTriggerStay(UnityAction<Collider> action) { UnRegister(EventName.TriggerStay, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_OnTriggerStay_m9CCC15FEF38A1F78469B7C900510638E3D64D042 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Dispatch_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m3BE5B446E5DB17763FB4CCC2EE9A45846D967BF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnTriggerStay(Collider collider) { Dispatch(EventName.TriggerStay, collider); }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___collider0;
		CollisionTriggerListener_Dispatch_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m3BE5B446E5DB17763FB4CCC2EE9A45846D967BF3(__this, 8, L_0, CollisionTriggerListener_Dispatch_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m3BE5B446E5DB17763FB4CCC2EE9A45846D967BF3_RuntimeMethod_var);
		// private void OnTriggerStay(Collider collider) { Dispatch(EventName.TriggerStay, collider); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::RegisterTriggerEnter2D(UnityEngine.Events.UnityAction`1<UnityEngine.Collider2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RegisterTriggerEnter2D_mC599C6A4EF56D7B5296F6BD19233DFC9FCE5728E (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Register_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC0D4C46C9D65455198B44B14E0FC4145537AB07D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RegisterTriggerEnter2D(UnityAction<Collider2D> action) { Register(EventName.TriggerEnter2D, action); }
		UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* L_0 = ___action0;
		CollisionTriggerListener_Register_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC0D4C46C9D65455198B44B14E0FC4145537AB07D(__this, ((int32_t)9), L_0, CollisionTriggerListener_Register_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC0D4C46C9D65455198B44B14E0FC4145537AB07D_RuntimeMethod_var);
		// public void RegisterTriggerEnter2D(UnityAction<Collider2D> action) { Register(EventName.TriggerEnter2D, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::UnRegisterTriggerEnter2D(UnityEngine.Events.UnityAction`1<UnityEngine.Collider2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_UnRegisterTriggerEnter2D_m25AC658875FABC51C693CDC91A978E03D9AB4742 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_UnRegister_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m58515342A58D3CCBFE0561A07F0FB262F814FEE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnRegisterTriggerEnter2D(UnityAction<Collider2D> action) { UnRegister(EventName.TriggerEnter2D, action); }
		UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* L_0 = ___action0;
		CollisionTriggerListener_UnRegister_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m58515342A58D3CCBFE0561A07F0FB262F814FEE2(__this, ((int32_t)9), L_0, CollisionTriggerListener_UnRegister_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m58515342A58D3CCBFE0561A07F0FB262F814FEE2_RuntimeMethod_var);
		// public void UnRegisterTriggerEnter2D(UnityAction<Collider2D> action) { UnRegister(EventName.TriggerEnter2D, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_OnTriggerEnter2D_m761C0E1911EA30DED840ED9BDCB579139D818ABD (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Dispatch_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mF2F3C59196FC21255999B881489543252013CE88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnTriggerEnter2D(Collider2D collider) { Dispatch(EventName.TriggerEnter2D, collider); }
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		CollisionTriggerListener_Dispatch_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mF2F3C59196FC21255999B881489543252013CE88(__this, ((int32_t)9), L_0, CollisionTriggerListener_Dispatch_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mF2F3C59196FC21255999B881489543252013CE88_RuntimeMethod_var);
		// private void OnTriggerEnter2D(Collider2D collider) { Dispatch(EventName.TriggerEnter2D, collider); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::RegisterTriggerExit2D(UnityEngine.Events.UnityAction`1<UnityEngine.Collider2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RegisterTriggerExit2D_mE3BC060F31D1FD841886E68248FA0314AF22E530 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Register_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC0D4C46C9D65455198B44B14E0FC4145537AB07D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RegisterTriggerExit2D(UnityAction<Collider2D> action) { Register(EventName.TriggerExit2D, action); }
		UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* L_0 = ___action0;
		CollisionTriggerListener_Register_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC0D4C46C9D65455198B44B14E0FC4145537AB07D(__this, ((int32_t)10), L_0, CollisionTriggerListener_Register_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC0D4C46C9D65455198B44B14E0FC4145537AB07D_RuntimeMethod_var);
		// public void RegisterTriggerExit2D(UnityAction<Collider2D> action) { Register(EventName.TriggerExit2D, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::UnRegisterTriggerExit2D(UnityEngine.Events.UnityAction`1<UnityEngine.Collider2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_UnRegisterTriggerExit2D_m809933B3BCBE9C00221916E291DCFBFE55EE092F (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_UnRegister_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m58515342A58D3CCBFE0561A07F0FB262F814FEE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnRegisterTriggerExit2D(UnityAction<Collider2D> action) { UnRegister(EventName.TriggerExit2D, action); }
		UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* L_0 = ___action0;
		CollisionTriggerListener_UnRegister_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m58515342A58D3CCBFE0561A07F0FB262F814FEE2(__this, ((int32_t)10), L_0, CollisionTriggerListener_UnRegister_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m58515342A58D3CCBFE0561A07F0FB262F814FEE2_RuntimeMethod_var);
		// public void UnRegisterTriggerExit2D(UnityAction<Collider2D> action) { UnRegister(EventName.TriggerExit2D, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_OnTriggerExit2D_m1F00999B66A92DFE9ECED77A43E1F940AF8D8F95 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Dispatch_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mF2F3C59196FC21255999B881489543252013CE88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnTriggerExit2D(Collider2D collider) { Dispatch(EventName.TriggerExit2D, collider); }
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		CollisionTriggerListener_Dispatch_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mF2F3C59196FC21255999B881489543252013CE88(__this, ((int32_t)10), L_0, CollisionTriggerListener_Dispatch_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mF2F3C59196FC21255999B881489543252013CE88_RuntimeMethod_var);
		// private void OnTriggerExit2D(Collider2D collider) { Dispatch(EventName.TriggerExit2D, collider); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::RegisterTriggerStay2D(UnityEngine.Events.UnityAction`1<UnityEngine.Collider2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_RegisterTriggerStay2D_mB00948C5FFFDAB23954261C59FCDDC82F53C6D7C (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Register_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC0D4C46C9D65455198B44B14E0FC4145537AB07D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RegisterTriggerStay2D(UnityAction<Collider2D> action) { Register(EventName.TriggerStay2D, action); }
		UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* L_0 = ___action0;
		CollisionTriggerListener_Register_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC0D4C46C9D65455198B44B14E0FC4145537AB07D(__this, ((int32_t)11), L_0, CollisionTriggerListener_Register_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC0D4C46C9D65455198B44B14E0FC4145537AB07D_RuntimeMethod_var);
		// public void RegisterTriggerStay2D(UnityAction<Collider2D> action) { Register(EventName.TriggerStay2D, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::UnRegisterTriggerStay2D(UnityEngine.Events.UnityAction`1<UnityEngine.Collider2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_UnRegisterTriggerStay2D_mE56CE2C9762007B8246BB465D2692AEF49D49876 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_UnRegister_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m58515342A58D3CCBFE0561A07F0FB262F814FEE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnRegisterTriggerStay2D(UnityAction<Collider2D> action) { UnRegister(EventName.TriggerStay2D, action); }
		UnityAction_1_tDD256DFE7A38694F7B2580E0921BBDBCD02A3F94* L_0 = ___action0;
		CollisionTriggerListener_UnRegister_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m58515342A58D3CCBFE0561A07F0FB262F814FEE2(__this, ((int32_t)11), L_0, CollisionTriggerListener_UnRegister_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m58515342A58D3CCBFE0561A07F0FB262F814FEE2_RuntimeMethod_var);
		// public void UnRegisterTriggerStay2D(UnityAction<Collider2D> action) { UnRegister(EventName.TriggerStay2D, action); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener_OnTriggerStay2D_m4BE38D53645F3578CC24B2C7DE88FB96097096F7 (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollisionTriggerListener_Dispatch_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mF2F3C59196FC21255999B881489543252013CE88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnTriggerStay2D(Collider2D collider) { Dispatch(EventName.TriggerStay2D, collider); }
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collider0;
		CollisionTriggerListener_Dispatch_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mF2F3C59196FC21255999B881489543252013CE88(__this, ((int32_t)11), L_0, CollisionTriggerListener_Dispatch_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mF2F3C59196FC21255999B881489543252013CE88_RuntimeMethod_var);
		// private void OnTriggerStay2D(Collider2D collider) { Dispatch(EventName.TriggerStay2D, collider); }
		return;
	}
}
// System.Void QFramework.CollisionTriggerListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionTriggerListener__ctor_m91A9D68F215E3D8E3E7588BCBAADE60AD30CFB2F (CollisionTriggerListener_t44109E46829FC2DB492D2CDD0EE300A668F1CAA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAFD9C420258AD4896AD7BD6960832FF91D5AB2E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<EventName, UnityEventBase> mEvents = new Dictionary<EventName, UnityEventBase>();
		Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550* L_0 = (Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550*)il2cpp_codegen_object_new(Dictionary_2_t905985ACEF9D464737AC283B86F8F4D0F2479550_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mAFD9C420258AD4896AD7BD6960832FF91D5AB2E8(L_0, Dictionary_2__ctor_mAFD9C420258AD4896AD7BD6960832FF91D5AB2E8_RuntimeMethod_var);
		__this->___mEvents_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mEvents_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QFramework.UIEffectHelper::AddUIEffect(UnityEngine.Transform,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEffectHelper_AddUIEffect_m6569737A75CD63DA550317C8B3A7A27846CA6929 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___effectRoot1, int32_t ___offsetOrder2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB17EF84B788D0B2A40AC0A670404F8967B5384E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_1 = NULL;
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (parent == null || effectRoot == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___parent0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___effectRoot1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0013;
		}
	}

IL_0012:
	{
		// return;
		return;
	}

IL_0013:
	{
		// int sortingOrder = offsetOrder;
		int32_t L_4 = ___offsetOrder2;
		V_0 = L_4;
		// Canvas parentCanvas = parent.GetComponentInParent<Canvas>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___parent0;
		NullCheck(L_5);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6;
		L_6 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(L_5, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		V_1 = L_6;
		// if (parentCanvas != null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		// sortingOrder += parentCanvas.sortingOrder;
		int32_t L_9 = V_0;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Canvas_get_sortingOrder_mFA9AC878A11BBEE1716CF7E7DF52E0AAC570C451(L_10, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, L_11));
	}

IL_002e:
	{
		// effectRoot.transform.SetParent(parent, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___effectRoot1;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___parent0;
		NullCheck(L_13);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_13, L_14, (bool)1, NULL);
		// Renderer[] childs = effectRoot.GetComponentsInChildren<Renderer>(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___effectRoot1;
		NullCheck(L_15);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_16;
		L_16 = GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB17EF84B788D0B2A40AC0A670404F8967B5384E2(L_15, (bool)1, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mB17EF84B788D0B2A40AC0A670404F8967B5384E2_RuntimeMethod_var);
		V_2 = L_16;
		// if (childs != null)
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_17 = V_2;
		if (!L_17)
		{
			goto IL_005d;
		}
	}
	{
		// for (int i = 0; i < childs.Length; ++i)
		V_3 = 0;
		goto IL_0057;
	}

IL_004a:
	{
		// childs[i].sortingOrder = sortingOrder;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_18 = V_2;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		int32_t L_22 = V_0;
		NullCheck(L_21);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_21, L_22, NULL);
		// for (int i = 0; i < childs.Length; ++i)
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < childs.Length; ++i)
		int32_t L_24 = V_3;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_004a;
		}
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Int32 QFramework.UIEffectHelper::GetLayerOffset(UnityEngine.Transform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIEffectHelper_GetLayerOffset_m27B153A7D60020FB8DACFD83079378E0B9933599 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, int32_t ___offsetOrder1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_1 = NULL;
	{
		// if (parent == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___parent0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return offsetOrder;
		int32_t L_2 = ___offsetOrder1;
		return L_2;
	}

IL_000b:
	{
		// int sortingOrder = offsetOrder;
		int32_t L_3 = ___offsetOrder1;
		V_0 = L_3;
		// Canvas parentCanvas = parent.GetComponentInParent<Canvas>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___parent0;
		NullCheck(L_4);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5;
		L_5 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(L_4, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		V_1 = L_5;
		// if (parentCanvas != null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		// sortingOrder += parentCanvas.sortingOrder;
		int32_t L_8 = V_0;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Canvas_get_sortingOrder_mFA9AC878A11BBEE1716CF7E7DF52E0AAC570C451(L_9, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, L_10));
	}

IL_0026:
	{
		// return sortingOrder;
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Void QFramework.UIEffectHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEffectHelper__ctor_m1330EDA262944ED0C18F1025EE8F3F013DB2F274 (UIEffectHelper_tC23238CA19EAC6D1152C19B679588D619AA7985C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QFramework.UIEventListener QFramework.UIEventListener::CheckAndAddListener(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* UIEventListener_CheckAndAddListener_m85166E045D573C40421A5A45A05E386C4D51216A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50_m0FEF1F79EE8BF3F3F72413FCBF388F7174696980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50_m6D4FC124D7209D11B4D915E421E0ECC2D98FE50D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* V_0 = NULL;
	{
		// UIEventListener listener = go.GetComponent<UIEventListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		NullCheck(L_0);
		UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* L_1;
		L_1 = GameObject_GetComponent_TisUIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50_m6D4FC124D7209D11B4D915E421E0ECC2D98FE50D(L_0, GameObject_GetComponent_TisUIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50_m6D4FC124D7209D11B4D915E421E0ECC2D98FE50D_RuntimeMethod_var);
		V_0 = L_1;
		// if (listener == null) listener = go.AddComponent<UIEventListener>();
		UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// if (listener == null) listener = go.AddComponent<UIEventListener>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___go0;
		NullCheck(L_4);
		UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* L_5;
		L_5 = GameObject_AddComponent_TisUIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50_m0FEF1F79EE8BF3F3F72413FCBF388F7174696980(L_4, GameObject_AddComponent_TisUIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50_m0FEF1F79EE8BF3F3F72413FCBF388F7174696980_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_0017:
	{
		// return listener;
		UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* L_6 = V_0;
		return L_6;
	}
}
// QFramework.UIEventListener QFramework.UIEventListener::Get(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* UIEventListener_Get_m02FE0133D2DF382C23A25E802C22FC55C483F55F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	{
		// return CheckAndAddListener (go);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* L_1;
		L_1 = UIEventListener_CheckAndAddListener_m85166E045D573C40421A5A45A05E386C4D51216A(L_0, NULL);
		return L_1;
	}
}
// System.Void QFramework.UIEventListener::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventListener_OnPointerClick_m561E433167AC26EF546F3885D6928BA179F2F2B9 (UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (onClick != null) onClick();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onClick_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (onClick != null) onClick();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___onClick_5;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIEventListener::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventListener_OnPointerDown_m66A6D312777945E28357BE034B335BA7F1BF2DC1 (UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (onPointerDown != null) onPointerDown(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_0 = __this->___onPointerDown_8;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (onPointerDown != null) onPointerDown(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_1 = __this->___onPointerDown_8;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		Action_1_Invoke_mAA1B475E362ED9D47EBBDE53300D4BB13EBDB07B_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIEventListener::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventListener_OnPointerEnter_m82ECD7D2FFCF922B45398DD8F63D4218CA67EE5C (UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (onPointerEnter != null) onPointerEnter(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_0 = __this->___onPointerEnter_9;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (onPointerEnter != null) onPointerEnter(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_1 = __this->___onPointerEnter_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		Action_1_Invoke_mAA1B475E362ED9D47EBBDE53300D4BB13EBDB07B_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIEventListener::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventListener_OnPointerExit_m210E75E008263CF8F73A918416182C636A0192A9 (UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (onPointerExit != null) onPointerExit(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_0 = __this->___onPointerExit_10;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (onPointerExit != null) onPointerExit(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_1 = __this->___onPointerExit_10;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		Action_1_Invoke_mAA1B475E362ED9D47EBBDE53300D4BB13EBDB07B_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIEventListener::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventListener_OnPointerUp_mB996F7F21E8DDBFD144B1AFF2E6B6F7114018FBE (UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (onPointerUp != null) onPointerUp(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_0 = __this->___onPointerUp_11;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (onPointerUp != null) onPointerUp(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_1 = __this->___onPointerUp_11;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		Action_1_Invoke_mAA1B475E362ED9D47EBBDE53300D4BB13EBDB07B_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIEventListener::OnSelect(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventListener_OnSelect_m8C5BE0823087E0B7B8E458F4D1704B49243E8D78 (UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (onSelect != null) onSelect(gameObject);
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_0 = __this->___onSelect_6;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// if (onSelect != null) onSelect(gameObject);
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_1 = __this->___onSelect_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		Action_1_Invoke_mBF1852490A3A2C4508CEF22E3887E57A8E6C6E45_inline(L_1, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIEventListener::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventListener_OnUpdateSelected_mE0A6C839B0675DF16F75B6B2CC64C9F9A0900916 (UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (onUpdateSelect != null) onUpdateSelect(gameObject);
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_0 = __this->___onUpdateSelect_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// if (onUpdateSelect != null) onUpdateSelect(gameObject);
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_1 = __this->___onUpdateSelect_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		Action_1_Invoke_mBF1852490A3A2C4508CEF22E3887E57A8E6C6E45_inline(L_1, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIEventListener::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventListener_OnBeginDrag_mC5B343D55E77EDA7E3A00557A5A0FAF6BA4E7D51 (UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (onBeginDrag != null) onBeginDrag(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_0 = __this->___onBeginDrag_12;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (onBeginDrag != null) onBeginDrag(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_1 = __this->___onBeginDrag_12;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		Action_1_Invoke_mAA1B475E362ED9D47EBBDE53300D4BB13EBDB07B_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIEventListener::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventListener_OnEndDrag_m75DCFCEAED6049FCB7FCA822704139B957DE1371 (UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (onEndDrag != null) onEndDrag(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_0 = __this->___onEndDrag_13;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (onEndDrag != null) onEndDrag(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_1 = __this->___onEndDrag_13;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		Action_1_Invoke_mAA1B475E362ED9D47EBBDE53300D4BB13EBDB07B_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIEventListener::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventListener_OnDrag_mDAAC5B717C412AD6AAB63A4D04212262D29DDFAE (UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (onDrag != null) onDrag(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_0 = __this->___onDrag_14;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (onDrag != null) onDrag(eventData);
		Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48* L_1 = __this->___onDrag_14;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		Action_1_Invoke_mAA1B475E362ED9D47EBBDE53300D4BB13EBDB07B_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void QFramework.UIEventListener::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventListener_OnDestroy_mFA83DEB10FA4E0677AB46DAB3C3078374F3757EA (UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* __this, const RuntimeMethod* method) 
{
	{
		// onClick = null;
		__this->___onClick_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onClick_5), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		// onSelect = null;
		__this->___onSelect_6 = (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onSelect_6), (void*)(Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)NULL);
		// onUpdateSelect = null;
		__this->___onUpdateSelect_7 = (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onUpdateSelect_7), (void*)(Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)NULL);
		// onPointerDown = null;
		__this->___onPointerDown_8 = (Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPointerDown_8), (void*)(Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL);
		// onPointerEnter = null;
		__this->___onPointerEnter_9 = (Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPointerEnter_9), (void*)(Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL);
		// onPointerExit = null;
		__this->___onPointerExit_10 = (Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPointerExit_10), (void*)(Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL);
		// onPointerUp = null;
		__this->___onPointerUp_11 = (Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPointerUp_11), (void*)(Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL);
		// onBeginDrag = null;
		__this->___onBeginDrag_12 = (Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onBeginDrag_12), (void*)(Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL);
		// onEndDrag = null;
		__this->___onEndDrag_13 = (Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onEndDrag_13), (void*)(Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL);
		// onDrag = null;
		__this->___onDrag_14 = (Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onDrag_14), (void*)(Action_1_t839049FF29C5FD30AFB3D4B2F6E2A56B981F8E48*)NULL);
		// onValueChanged = null;
		__this->___onValueChanged_15 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onValueChanged_15), (void*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)NULL);
		// }
		return;
	}
}
// System.Void QFramework.UIEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEventListener__ctor_m29BE39F474FE9683C7B912274A590ED989D0F4EF (UIEventListener_tD921A6844866A3F3DC170291E288B9BF82827C50* __this, const RuntimeMethod* method) 
{
	{
		EventTrigger__ctor_m2A471D4099280D37183A1B668FF092B9517BA294(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpressPositionU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform content { get { return m_Content; } set { m_Content = value; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_Content_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mB3B310D2D0CAE78AFB2AE6A9FD2902DE4B359211_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a1;
		float L_1 = L_0.___x_0;
		float L_2 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a1;
		float L_4 = L_3.___y_1;
		float L_5 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* UIKit_get_Table_mEDC599016CE8165A43AF0842A8EB5C1ABC3EBBE0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UIPanelTable Table { get; } = new UIPanelTable();
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelTable_tD1BE67166071B09C6B2E5B47433B3D0A9E164427* L_0 = ((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___U3CTableU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Graphic_set_useLegacyMeshGeneration_m8069890AE2F389C73D944941BB8462C44EB32EC9_inline (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// protected bool useLegacyMeshGeneration { get; set; }
		bool L_0 = ___value0;
		__this->___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* UIRoot_get_Camera_m4C3154E6DEED7FCF3AF11784FB0E3CFB0A746EE1_inline (UIRoot_t20FBBB2EE9FCAE6A039C2FEAF3A642E60FC4976B* __this, const RuntimeMethod* method) 
{
	{
		// get { return UICamera; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___UICamera_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* InputField_get_onValidateInput_m370D93274B6040422092981DD3A34E4B88E96EBC_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// public OnValidateInput onValidateInput { get { return m_OnValidateInput; } set { SetPropertyUtility.SetClass(ref m_OnValidateInput, value); } }
		OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* L_0 = __this->___m_OnValidateInput_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QMsg_set_Processed_mD44149B403063980FEF287A92416B0CA96E892F0_inline (QMsg_t41F187494E15464B020988A12616F24ACA4605C3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Processed { get; set; }
		bool L_0 = ___value0;
		__this->___U3CProcessedU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* UIKit_get_Stack_mAD1EC85D27AEBC5EA8B3F31641B1D4482FEDA26A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UIPanelStack Stack { get; } = new UIPanelStack();
		il2cpp_codegen_runtime_class_init_inline(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var);
		UIPanelStack_tF8CC80291028327DCC6DF6172160ADA98287AE54* L_0 = ((UIKit_t677A94304C21F268561FFE09EF41745F3802B048_StaticFields*)il2cpp_codegen_static_fields_for(UIKit_t677A94304C21F268561FFE09EF41745F3802B048_il2cpp_TypeInfo_var))->___U3CStackU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPanel_set_State_mD35D1FB2D0E05CA95C3A1DD324E10928BC0526D1_inline (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public PanelState State { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* UIPanel_get_Info_m8040629EEAB6AF74D067F477ED6C9AF4BF7904DF_inline (UIPanel_tE99922A68C6578180426C5D60569653CEB2FEA20* __this, const RuntimeMethod* method) 
{
	{
		// public PanelInfo Info { get; set; }
		PanelInfo_t65702B4610913CC19CE8C4B193C607D788C6CD94* L_0 = __this->___U3CInfoU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasScaler_set_matchWidthOrHeight_m44635DC3E4424255C312814C325A48E37E6B6E30_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float matchWidthOrHeight { get { return m_MatchWidthOrHeight; } set { m_MatchWidthOrHeight = value; } }
		float L_0 = ___value0;
		__this->___m_MatchWidthOrHeight_9 = L_0;
		// public float matchWidthOrHeight { get { return m_MatchWidthOrHeight; } set { m_MatchWidthOrHeight = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CanvasScaler_get_referenceResolution_m79C03DD8CE6759B045928C5339A3C5E6220276B5_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) 
{
	{
		// return m_ReferenceResolution;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_ReferenceResolution_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CanvasScaler_get_matchWidthOrHeight_m9C40FBA943172874FD27F3F7B880E2D5D5862C9B_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) 
{
	{
		// public float matchWidthOrHeight { get { return m_MatchWidthOrHeight; } set { m_MatchWidthOrHeight = value; } }
		float L_0 = __this->___m_MatchWidthOrHeight_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6CD2E5AAE6552A27AECCC57936767B4DCFC902B1_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___item0;
		((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m777839BF9CB9F96B081106B47202D06FB35326CA_gshared_inline (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg00, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_0 = (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF0E6A8A455FA71BC8EA94E39C8848FB35A836841_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_m42BB34F154440C9F0AC402FC3E9BD08C8D678F21_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UIKitTableIndex_2_get_Dictionary_mC6E245E79BC07009FC0A47C9E0F07311E951CBB6_gshared_inline (UIKitTableIndex_2_t81BD4D9B827B346BE00E36D598EB1F47413446E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return mIndex; }
		Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A* L_0 = (Dictionary_2_t07F043B93235170E47B40DB71B2E46256D11FD3A*)__this->___mIndex_0;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m76B0ECD4B03E606A1CE3DF60589D2E97130B02CA_gshared_inline (Enumerator_tF9B1C7464F1BFE1675CFE608CC62D4507968CF08* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
