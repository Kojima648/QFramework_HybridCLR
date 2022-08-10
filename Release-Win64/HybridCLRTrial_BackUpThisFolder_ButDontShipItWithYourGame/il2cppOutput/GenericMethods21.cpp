#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>>
struct ConditionalWeakTable_2_t7BC07C7E9D956265D5F6682BC3BB438216D676A1;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>
struct ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct Dictionary_2_tF8C88C2A1FA068ADD1A1529DE03E50399F166007;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
// System.Dynamic.DynamicObject/MetaDynamic/Fallback`1<System.Object>
struct Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE;
// System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>
struct IEnumerable_1_tA70CEDE5B026B417CF78C3146B22E44FB6755120;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_t28EB8E755FDBFBDE88574629581245F2CF1F5FC1;
// System.Collections.Generic.IList`1<System.Linq.Expressions.ParameterExpression>
struct IList_1_t8237764F017214FEC3BDC5BA9D72BD235EAC1402;
// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression>
struct IReadOnlyList_1_tB86476F62FBF3BB3389F17E0FFB65836DD3F2F65;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct KeyCollection_tF759573176BBAED036A214CEA429B149E9F6D744;
// System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct List_1_t10898B3F76B071D9912E09793660EC44AB6BB82C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_tDAE35E503783CF053392CFBB43ACBDCE72C6C996;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6;
// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Object>
struct TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D;
// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct ValueCollection_tD5EF36D68F13438B89570428949A40F358B64456;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>[]
struct EntryU5BU5D_tEED0BB4144E2C359BC0DF42F4CF282FABA950202;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Dynamic.DynamicMetaObject[]
struct DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Dynamic.BindingRestrictions
struct BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424;
// System.Linq.Expressions.BlockExpression
struct BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t4A487FB09E6FEA815F25AADA33335CD658B6A913;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Linq.Expressions.DefaultExpression
struct DefaultExpression_t68E278AD7534F283D174570B240C596979B26533;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Dynamic.DynamicMetaObject
struct DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825;
// System.Dynamic.DynamicObject
struct DynamicObject_tD0DC19F06E5F1E72197D131DB0CE792102F6DD69;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Linq.Expressions.LabelTarget
struct LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E;
// System.Linq.Expressions.NewExpression
struct NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t81E55BA04133E3F10863D4D0CDADAC82AEAB98BF;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Dynamic.DynamicObject/MetaDynamic
struct MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount
struct EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock
struct MyReaderWriterLock_t228D12A218942E675CF1B49D299F795BC96E3970;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount
struct TokenListCount_t52D9E220227BAA2D3E0243CC23EFE1E54ECE5E0C;

IL2CPP_EXTERN_C RuntimeClass* BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManagedEventRegistrationImpl_t715BCEFA6A3ABA66759D33A0DA220EA0D632DB4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1FEB2B080187BD8DC7BC64F8D39BD8910C62CC2E;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteralBCC178D5BE56C6C185E79192131F152693335504;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_m158118C15E69401385EC5814B51876E39CF2F9D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mCBF93A06F5ECA55FFB77D2EA2144B46C64709E1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_m6346F74865E02C6D37564EF494852AA66E953698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m5BA9B1814C76B0F303E1A26665C6D64CCA9271B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mF9BB023431FF9493F2C22433F0B8C7FA48C3E6BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m59C6E5F0047F0C69B43BB4F0214D2088302ECBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>
struct ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEED0BB4144E2C359BC0DF42F4CF282FABA950202* ____entries_1;
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
	KeyCollection_tF759573176BBAED036A214CEA429B149E9F6D744* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD5EF36D68F13438B89570428949A40F358B64456* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
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

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Dynamic.BindingRestrictions
struct BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424  : public RuntimeObject
{
};

struct BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424_StaticFields
{
	// System.Dynamic.BindingRestrictions System.Dynamic.BindingRestrictions::Empty
	BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* ___Empty_0;
};

// System.Runtime.CompilerServices.CallSiteBinder
struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> System.Runtime.CompilerServices.CallSiteBinder::Cache
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___Cache_0;
};

struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_StaticFields
{
	// System.Linq.Expressions.LabelTarget System.Runtime.CompilerServices.CallSiteBinder::<UpdateLabel>k__BackingField
	LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* ___U3CUpdateLabelU3Ek__BackingField_1;
};

// System.Dynamic.DynamicMetaObject
struct DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825  : public RuntimeObject
{
	// System.Object System.Dynamic.DynamicMetaObject::_value
	RuntimeObject* ____value_2;
	// System.Linq.Expressions.Expression System.Dynamic.DynamicMetaObject::<Expression>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CExpressionU3Ek__BackingField_3;
	// System.Dynamic.BindingRestrictions System.Dynamic.DynamicMetaObject::<Restrictions>k__BackingField
	BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* ___U3CRestrictionsU3Ek__BackingField_4;
};

struct DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_StaticFields
{
	// System.Dynamic.DynamicMetaObject[] System.Dynamic.DynamicMetaObject::EmptyMetaObjects
	DynamicMetaObjectU5BU5D_t3DD53865D0D7B6997BD3523C5F828FA40C419E50* ___EmptyMetaObjects_0;
	// System.Object System.Dynamic.DynamicMetaObject::s_noValueSentinel
	RuntimeObject* ___s_noValueSentinel_1;
};

// System.Dynamic.DynamicObject
struct DynamicObject_tD0DC19F06E5F1E72197D131DB0CE792102F6DD69  : public RuntimeObject
{
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Linq.Expressions.Utils
struct Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8  : public RuntimeObject
{
};

struct Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_StaticFields
{
	// System.Object System.Linq.Expressions.Utils::BoxedFalse
	RuntimeObject* ___BoxedFalse_0;
	// System.Object System.Linq.Expressions.Utils::BoxedTrue
	RuntimeObject* ___BoxedTrue_1;
	// System.Object System.Linq.Expressions.Utils::BoxedIntM1
	RuntimeObject* ___BoxedIntM1_2;
	// System.Object System.Linq.Expressions.Utils::BoxedInt0
	RuntimeObject* ___BoxedInt0_3;
	// System.Object System.Linq.Expressions.Utils::BoxedInt1
	RuntimeObject* ___BoxedInt1_4;
	// System.Object System.Linq.Expressions.Utils::BoxedInt2
	RuntimeObject* ___BoxedInt2_5;
	// System.Object System.Linq.Expressions.Utils::BoxedInt3
	RuntimeObject* ___BoxedInt3_6;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultSByte
	RuntimeObject* ___BoxedDefaultSByte_7;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultChar
	RuntimeObject* ___BoxedDefaultChar_8;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultInt16
	RuntimeObject* ___BoxedDefaultInt16_9;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultInt64
	RuntimeObject* ___BoxedDefaultInt64_10;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultByte
	RuntimeObject* ___BoxedDefaultByte_11;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultUInt16
	RuntimeObject* ___BoxedDefaultUInt16_12;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultUInt32
	RuntimeObject* ___BoxedDefaultUInt32_13;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultUInt64
	RuntimeObject* ___BoxedDefaultUInt64_14;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultSingle
	RuntimeObject* ___BoxedDefaultSingle_15;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultDouble
	RuntimeObject* ___BoxedDefaultDouble_16;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultDecimal
	RuntimeObject* ___BoxedDefaultDecimal_17;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultDateTime
	RuntimeObject* ___BoxedDefaultDateTime_18;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_true
	ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* ___s_true_19;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_false
	ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* ___s_false_20;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_m1
	ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* ___s_m1_21;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_0
	ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* ___s_0_22;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_1
	ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* ___s_1_23;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_2
	ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* ___s_2_24;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_3
	ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* ___s_3_25;
	// System.Linq.Expressions.DefaultExpression System.Linq.Expressions.Utils::Empty
	DefaultExpression_t68E278AD7534F283D174570B240C596979B26533* ___Empty_26;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::Null
	ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* ___Null_27;
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

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl
struct ManagedEventRegistrationImpl_t715BCEFA6A3ABA66759D33A0DA220EA0D632DB4B  : public RuntimeObject
{
};

struct ManagedEventRegistrationImpl_t715BCEFA6A3ABA66759D33A0DA220EA0D632DB4B_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl::s_eventRegistrations
	ConditionalWeakTable_2_t7BC07C7E9D956265D5F6682BC3BB438216D676A1* ___s_eventRegistrations_0;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl
struct NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90  : public RuntimeObject
{
};

struct NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry> modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::s_eventRegistrations
	Dictionary_2_tF8C88C2A1FA068ADD1A1529DE03E50399F166007* ___s_eventRegistrations_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::s_eventCacheRWLock
	MyReaderWriterLock_t228D12A218942E675CF1B49D299F795BC96E3970* ___s_eventCacheRWLock_1;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock
struct MyReaderWriterLock_t228D12A218942E675CF1B49D299F795BC96E3970  : public RuntimeObject
{
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::myLock
	int32_t ___myLock_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::owners
	int32_t ___owners_1;
	// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::numWriteWaiters
	uint32_t ___numWriteWaiters_2;
	// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::numReadWaiters
	uint32_t ___numReadWaiters_3;
	// System.Threading.EventWaitHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::writeEvent
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___writeEvent_4;
	// System.Threading.EventWaitHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::readEvent
	EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* ___readEvent_5;
};

// Unity.Collections.NativeArray`1<UnityEngine.Color>
struct NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Color32>
struct NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6  : public ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E
{
};

// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1  : public ReadOnlyCollection_1_tFF3A96CB3B2F8DC59789963B01C8937823675505
{
};

// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Right>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CRightU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Left>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CLeftU3Ek__BackingField_4;
};

// System.Linq.Expressions.BlockExpression
struct BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
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

// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t4A487FB09E6FEA815F25AADA33335CD658B6A913  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::<Test>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CTestU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::<IfTrue>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CIfTrueU3Ek__BackingField_4;
};

// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Object System.Linq.Expressions.ConstantExpression::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_3;
};

// System.Linq.Expressions.DefaultExpression
struct DefaultExpression_t68E278AD7534F283D174570B240C596979B26533  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Type System.Linq.Expressions.DefaultExpression::<Type>k__BackingField
	Type_t* ___U3CTypeU3Ek__BackingField_3;
};

// System.Dynamic.DynamicMetaObjectBinder
struct DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF  : public CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F
{
};

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B 
{
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;
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

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::<Method>k__BackingField
	MethodInfo_t* ___U3CMethodU3Ek__BackingField_3;
};

// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Type System.Linq.Expressions.NewArrayExpression::<Type>k__BackingField
	Type_t* ___U3CTypeU3Ek__BackingField_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewArrayExpression::<Expressions>k__BackingField
	ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* ___U3CExpressionsU3Ek__BackingField_4;
};

// System.Linq.Expressions.NewExpression
struct NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::_arguments
	RuntimeObject* ____arguments_3;
	// System.Reflection.ConstructorInfo System.Linq.Expressions.NewExpression::<Constructor>k__BackingField
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___U3CConstructorU3Ek__BackingField_4;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::<Members>k__BackingField
	ReadOnlyCollection_1_tDAE35E503783CF053392CFBB43ACBDCE72C6C996* ___U3CMembersU3Ek__BackingField_5;
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t81E55BA04133E3F10863D4D0CDADAC82AEAB98BF  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.TypeBinaryExpression::<NodeType>k__BackingField
	int32_t ___U3CNodeTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.TypeBinaryExpression::<Expression>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CExpressionU3Ek__BackingField_4;
	// System.Type System.Linq.Expressions.TypeBinaryExpression::<TypeOperand>k__BackingField
	Type_t* ___U3CTypeOperandU3Ek__BackingField_5;
};

// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Type System.Linq.Expressions.UnaryExpression::<Type>k__BackingField
	Type_t* ___U3CTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.UnaryExpression::<NodeType>k__BackingField
	int32_t ___U3CNodeTypeU3Ek__BackingField_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::<Operand>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3COperandU3Ek__BackingField_5;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::<Method>k__BackingField
	MethodInfo_t* ___U3CMethodU3Ek__BackingField_6;
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

// System.Dynamic.DynamicObject/MetaDynamic
struct MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924  : public DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825
{
};

struct MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_StaticFields
{
	// System.Linq.Expressions.Expression[] System.Dynamic.DynamicObject/MetaDynamic::s_noArgs
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___s_noArgs_5;
};

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
struct EventCacheKey_t808E4964CFCF655710626DE6089FAF2C53DDECC9 
{
	// System.Object System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey::target
	RuntimeObject* ___target_0;
	// System.Reflection.MethodInfo System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey::method
	MethodInfo_t* ___method_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
struct EventCacheKey_t808E4964CFCF655710626DE6089FAF2C53DDECC9_marshaled_pinvoke
{
	Il2CppIUnknown* ___target_0;
	MethodInfo_t* ___method_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
struct EventCacheKey_t808E4964CFCF655710626DE6089FAF2C53DDECC9_marshaled_com
{
	Il2CppIUnknown* ___target_0;
	MethodInfo_t* ___method_1;
};

// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Mesh/MeshData
struct MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC 
{
	// System.IntPtr UnityEngine.Mesh/MeshData::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
struct EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C 
{
	// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::firstToken
	EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___firstToken_0;
	// System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::restTokens
	List_1_t10898B3F76B071D9912E09793660EC44AB6BB82C* ___restTokens_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
struct EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C_marshaled_pinvoke
{
	EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___firstToken_0;
	List_1_t10898B3F76B071D9912E09793660EC44AB6BB82C* ___restTokens_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
struct EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C_marshaled_com
{
	EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___firstToken_0;
	List_1_t10898B3F76B071D9912E09793660EC44AB6BB82C* ___restTokens_1;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount
struct TokenListCount_t52D9E220227BAA2D3E0243CC23EFE1E54ECE5E0C  : public RuntimeObject
{
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::_count
	int32_t ____count_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::_key
	EventCacheKey_t808E4964CFCF655710626DE6089FAF2C53DDECC9 ____key_1;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount
struct EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303  : public RuntimeObject
{
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::_tokenListCount
	TokenListCount_t52D9E220227BAA2D3E0243CC23EFE1E54ECE5E0C* ____tokenListCount_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::_tokenList
	EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C ____tokenList_1;
};

// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722  : public MulticastDelegate_t
{
};

// System.Dynamic.DynamicObject/MetaDynamic/Fallback`1<System.Object>
struct Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F  : public RuntimeArray
{
	ALIGN_FIELD (8) Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* m_Items[1];

	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Object>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF_gshared (TrueReadOnlyCollection_1_t71A2D3FD751848C3E87C90C4EDF1D35A25879C4D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list0, const RuntimeMethod* method) ;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Color32>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mF9BB023431FF9493F2C22433F0B8C7FA48C3E6BD_gshared (Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* __this, RuntimeObject* ___key0, EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m59C6E5F0047F0C69B43BB4F0214D2088302ECBD7_gshared (Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* __this, RuntimeObject* ___key0, EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5BA9B1814C76B0F303E1A26665C6D64CCA9271B1_gshared (Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m45D0A38692AC9D6D49A127721F451779033C800F_gshared_inline (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* __this, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___obj0, const RuntimeMethod* method) ;
// TKey System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::FindEquivalentKeyUnsafe(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConditionalWeakTable_2_FindEquivalentKeyUnsafe_m2A6C83594FE9026A5E0F88CEDFCB70681C798284_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;

// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Dynamic.DynamicObject/MetaDynamic::IsOverridden(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetaDynamic_IsOverridden_m41BBFE158165AFDCB3BA3E11704BEF1280B8EBF1 (MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924* __this, MethodInfo_t* ___method0, const RuntimeMethod* method) ;
// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Expression::Parameter(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* Expression_Parameter_mE65CB09BF5121B5F7079555CED44FEB5B057F318 (Type_t* ___type0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Linq.Expressions.CachedReflectionInfo::get_DynamicObject_TryBinaryOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* CachedReflectionInfo_get_DynamicObject_TryBinaryOperation_m5BE0D91BAE0C551049A2F1F318E501CBA30FB0AD (const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Dynamic.DynamicObject/MetaDynamic::GetConvertedArgs(System.Linq.Expressions.Expression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* MetaDynamic_GetConvertedArgs_m25D845993FFA08DAD206F40DC59353B71B3E6463 (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___args0, const RuntimeMethod* method) ;
// System.Void System.Dynamic.DynamicMetaObject::.ctor(System.Linq.Expressions.Expression,System.Dynamic.BindingRestrictions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMetaObject__ctor_m3A410E35A61623019D223D58673E0A38550EF12A (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* __this, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___expression0, BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* ___restrictions1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression System.Dynamic.DynamicMetaObject::get_Expression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* DynamicMetaObject_get_Expression_mC74F5FF9AC58E0F938C2C15CA0B32CE999EEA7F4_inline (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* __this, const RuntimeMethod* method) ;
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Convert(System.Linq.Expressions.Expression,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* Expression_Convert_mE26A8F02EF729CCAE06E809F30227B4195B3C392 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___expression0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Dynamic.DynamicObject System.Dynamic.DynamicObject/MetaDynamic::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicObject_tD0DC19F06E5F1E72197D131DB0CE792102F6DD69* MetaDynamic_get_Value_m80E92F1935368BEE88E117F59FBED4D23084A34E (MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Linq.Expressions.Strings::DynamicObjectResultNotAssignable(System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Strings_DynamicObjectResultNotAssignable_m7DEF45A2092C7DA0FEDCFB825FBC752A7540A3D3 (RuntimeObject* ___p00, RuntimeObject* ___p11, RuntimeObject* ___p22, RuntimeObject* ___p33, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_m3162A4F48AE683C74A9419644E40C05595BA41E7 (Type_t* ___nullableType0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Linq.Expressions.TypeBinaryExpression System.Linq.Expressions.Expression::TypeIs(System.Linq.Expressions.Expression,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeBinaryExpression_t81E55BA04133E3F10863D4D0CDADAC82AEAB98BF* Expression_TypeIs_mCC9C7E8D3827A5FBD0726634C3ED2B3B3AA1C844 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___expression0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Linq.Expressions.BinaryExpression System.Linq.Expressions.Expression::Equal(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* Expression_Equal_m1E9B2B97E3335E77266BE3D4FCB2C05BB60BEE41 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___left0, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___right1, const RuntimeMethod* method) ;
// System.Linq.Expressions.BinaryExpression System.Linq.Expressions.Expression::OrElse(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* Expression_OrElse_m8EB0FF832015DCA538BBB78A2EFA7928FEB7B789 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___left0, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___right1, const RuntimeMethod* method) ;
// System.Reflection.ConstructorInfo System.Linq.Expressions.CachedReflectionInfo::get_InvalidCastException_Ctor_String()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* CachedReflectionInfo_get_InvalidCastException_Ctor_String_m6C7CFCA05FD8EA1BC1A72C7B710101FBFD94829C (const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Linq.Expressions.CachedReflectionInfo::get_String_Format_String_ObjectArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* CachedReflectionInfo_get_String_Format_String_ObjectArray_mE9DB8323267AE9E819294DFC44928E98EF745CE0 (const RuntimeMethod* method) ;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* Expression_Constant_m5D3728BC22F16A217945079B390E6E622BA5904D (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Linq.Expressions.CachedReflectionInfo::get_Object_GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* CachedReflectionInfo_get_Object_GetType_mB52CBC2C6DFD72ACF4955C94F9276973157C3237 (const RuntimeMethod* method) ;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* Expression_Call_m09FC3088BA390B314F31348D4F07C803EB0DAAA7 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___instance0, MethodInfo_t* ___method1, const RuntimeMethod* method) ;
// System.Linq.Expressions.ConditionalExpression System.Linq.Expressions.Expression::Condition(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Linq.Expressions.Expression,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalExpression_t4A487FB09E6FEA815F25AADA33335CD658B6A913* Expression_Condition_mFE72AAE409FF6E0D371F04F1CEC7BD9C7FEF4552 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___test0, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___ifTrue1, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___ifFalse2, Type_t* ___type3, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>::.ctor(T[])
inline void TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6* __this, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___list0, const RuntimeMethod* method)
{
	((  void (*) (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6*, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*, const RuntimeMethod*))TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF_gshared)(__this, ___list0, method);
}
// System.Linq.Expressions.NewArrayExpression System.Linq.Expressions.Expression::NewArrayInit(System.Type,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E* Expression_NewArrayInit_m80255FF1335D4CC9284F986CE832AEE310F98369 (Type_t* ___type0, RuntimeObject* ___initializers1, const RuntimeMethod* method) ;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Reflection.MethodInfo,System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* Expression_Call_m27DE0B204617F9F1C3EB89C6EA950A544495C8A0 (MethodInfo_t* ___method0, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___arg01, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___arg12, const RuntimeMethod* method) ;
// System.Linq.Expressions.NewExpression System.Linq.Expressions.Expression::New(System.Reflection.ConstructorInfo,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* Expression_New_mD7DF4FCA820F95C0DC57065F89BA89D2BB053D76 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___constructor0, RuntimeObject* ___arguments1, const RuntimeMethod* method) ;
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Throw(System.Linq.Expressions.Expression,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* Expression_Throw_mC0A37F6727C45C57FE663589809CC57A504E1266 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___value0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Dynamic.BindingRestrictions System.Dynamic.DynamicMetaObject::get_Restrictions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* DynamicMetaObject_get_Restrictions_mC56A7B16011CB2E190394A71B37293BDAC8CBF68_inline (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>::.ctor(T[])
inline void TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C (TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* __this, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___list0, const RuntimeMethod* method)
{
	((  void (*) (TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*, const RuntimeMethod*))TrueReadOnlyCollection_1__ctor_m56281B79C66AC6D4AC9B11B8DADB5AD4931B33DF_gshared)(__this, ___list0, method);
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>::get_Item(System.Int32)
inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502 (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared)(__this, ___index0, method);
}
// System.Linq.Expressions.BinaryExpression System.Linq.Expressions.Expression::Assign(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* Expression_Assign_m820F9637D57C3AF6EB96900C7910DF6299823F1F (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___left0, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___right1, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression System.Dynamic.DynamicObject/MetaDynamic::GetLimitedSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* MetaDynamic_GetLimitedSelf_mC6AFC8AD2450A39AAAC06B82980176C3CF497EFC (MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924* __this, const RuntimeMethod* method) ;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Linq.Expressions.Expression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* Expression_Call_m7068D5DDC465BEE280F37CD89F808E8D3A76111D (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___instance0, MethodInfo_t* ___method1, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___arguments2, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression System.Dynamic.DynamicObject/MetaDynamic::ReferenceArgAssign(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* MetaDynamic_ReferenceArgAssign_mADC476A2755E3F318B1694AC6A61607E368D9386 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___callArgs0, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___args1, const RuntimeMethod* method) ;
// System.Linq.Expressions.BlockExpression System.Linq.Expressions.Expression::Block(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* Expression_Block_m89422223D29D4E87B96C9C643D4C3B4F2AB9BF9E (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___arg00, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___arg11, const RuntimeMethod* method) ;
// System.Linq.Expressions.BlockExpression System.Linq.Expressions.Expression::Block(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* Expression_Block_mA2A5F7ECDC2C090F6DBAF19FA118784A90A0D80D (RuntimeObject* ___variables0, RuntimeObject* ___expressions1, const RuntimeMethod* method) ;
// System.Dynamic.BindingRestrictions System.Dynamic.DynamicObject/MetaDynamic::GetRestrictions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* MetaDynamic_GetRestrictions_m09B931B3094B49F6DA2A386B881AA8A3DE1FB60A (MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924* __this, const RuntimeMethod* method) ;
// System.Dynamic.BindingRestrictions System.Dynamic.BindingRestrictions::Merge(System.Dynamic.BindingRestrictions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* BindingRestrictions_Merge_mD2B5746636C9BAD9E88FE2618E18AE0B0C8B3785 (BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* __this, BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* ___restrictions0, const RuntimeMethod* method) ;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* Expression_Constant_m600574E310E474F4D6E62D32B2A01F3DDE56D839 (RuntimeObject* ___value0, Type_t* ___type1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mesh/MeshData::HasVertexAttribute(UnityEngine.Rendering.VertexAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshData_HasVertexAttribute_m915D9CD55110DCEBE56E9DBE654D9CC196FDFE88 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, int32_t ___attr0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh/MeshData::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE (void* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeIntoPtr(System.IntPtr,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeIntoPtr_m9B03920F8423FE175BE40BBCFBEE2CAB88D1C27D (intptr_t ___self0, int32_t ___attr1, int32_t ___format2, int32_t ___dim3, intptr_t ___dst4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
inline void MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method)
{
	((  void (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D, int32_t, int32_t, int32_t, const RuntimeMethod*))MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_gshared)(__this, ___buffer0, ___channel1, ___format2, ___dim3, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Color32>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
inline void MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method)
{
	((  void (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D, int32_t, int32_t, int32_t, const RuntimeMethod*))MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_gshared)(__this, ___buffer0, ___channel1, ___format2, ___dim3, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
inline void MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method)
{
	((  void (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70, int32_t, int32_t, int32_t, const RuntimeMethod*))MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_gshared)(__this, ___buffer0, ___channel1, ___format2, ___dim3, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
inline void MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method)
{
	((  void (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD, int32_t, int32_t, int32_t, const RuntimeMethod*))MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_gshared)(__this, ___buffer0, ___channel1, ___format2, ___dim3, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
inline void MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1 (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method)
{
	((  void (*) (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8, int32_t, int32_t, int32_t, const RuntimeMethod*))MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_gshared)(__this, ___buffer0, ___channel1, ___format2, ___dim3, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(T)
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl::GetEventRegistrationTokenTable(System.Object,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* ManagedEventRegistrationImpl_GetEventRegistrationTokenTable_mCC1C56554BB647EDBD6F7989FD8F0D823DBA8BA8 (RuntimeObject* ___instance0, Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mF9BB023431FF9493F2C22433F0B8C7FA48C3E6BD (Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* __this, RuntimeObject* ___key0, EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4*, RuntimeObject*, EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C*, const RuntimeMethod*))Dictionary_2_TryGetValue_mF9BB023431FF9493F2C22433F0B8C7FA48C3E6BD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::.ctor(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenList__ctor_m37C3271A7EF7FB1C0137995C752318A6FBF1225D (EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C* __this, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m59C6E5F0047F0C69B43BB4F0214D2088302ECBD7 (Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* __this, RuntimeObject* ___key0, EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4*, RuntimeObject*, EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C, const RuntimeMethod*))Dictionary_2_set_Item_m59C6E5F0047F0C69B43BB4F0214D2088302ECBD7_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::Push(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistrationTokenList_Push_m3C14B4F62A1E7AD1D3A9B3014CCBC0C25D2F311F (EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C* __this, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::Pop(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistrationTokenList_Pop_m57CDDD0FE59FA973C283A06A1F73AF4C2E410FE8 (EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C* __this, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B* ___token0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::Remove(TKey)
inline bool Dictionary_2_Remove_m5BA9B1814C76B0F303E1A26665C6D64CCA9271B1 (Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m5BA9B1814C76B0F303E1A26665C6D64CCA9271B1_gshared)(__this, ___key0, method);
}
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::Invoke(T)
inline void Action_1_Invoke_m45D0A38692AC9D6D49A127721F451779033C800F_inline (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* __this, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722*, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B, const RuntimeMethod*))Action_1_Invoke_m45D0A38692AC9D6D49A127721F451779033C800F_gshared_inline)(__this, ___obj0, method);
}
// System.Object System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::GetInstanceKey(System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeOrStaticEventRegistrationImpl_GetInstanceKey_mDDA8C4B81BF9011ED6CC83E1F7CDDCB0B2A9DE04 (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::AcquireReaderLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_AcquireReaderLock_m96E5ECF7E8F7635E7518D8882FE7FA304EC9309D (MyReaderWriterLock_t228D12A218942E675CF1B49D299F795BC96E3970* __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::ReleaseReaderLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ReleaseReaderLock_m00DB66CED452771CBBFED2BCD55730C9767F2ADE (MyReaderWriterLock_t228D12A218942E675CF1B49D299F795BC96E3970* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::GetOrCreateEventRegistrationTokenTable(System.Object,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* NativeOrStaticEventRegistrationImpl_GetOrCreateEventRegistrationTokenTable_mFB70EEB39CDF1042329D797291E38E596C4B6F33 (RuntimeObject* ___instance0, Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod1, TokenListCount_t52D9E220227BAA2D3E0243CC23EFE1E54ECE5E0C** ___tokenListCount2, const RuntimeMethod* method) ;
// TKey System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>::FindEquivalentKeyUnsafe(TKey,TValue&)
inline RuntimeObject* ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mCBF93A06F5ECA55FFB77D2EA2144B46C64709E1E (ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* __this, RuntimeObject* ___key0, EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303** ___value1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F*, RuntimeObject*, EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303**, const RuntimeMethod*))ConditionalWeakTable_2_FindEquivalentKeyUnsafe_m2A6C83594FE9026A5E0F88CEDFCB70681C798284_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::.ctor(System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenListWithCount__ctor_m3B108FCAE33427CA33DC9312896F0B35B48A105C (EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303* __this, TokenListCount_t52D9E220227BAA2D3E0243CC23EFE1E54ECE5E0C* ___tokenListCount0, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>::Add(TKey,TValue)
inline void ConditionalWeakTable_2_Add_m158118C15E69401385EC5814B51876E39CF2F9D9 (ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* __this, RuntimeObject* ___key0, EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303* ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F*, RuntimeObject*, EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::Push(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenListWithCount_Push_mF905EB7AC59B50919AC6D043A23AA95E8B59799E (EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303* __this, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::GetEventRegistrationTokenTableNoCreate(System.Object,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* NativeOrStaticEventRegistrationImpl_GetEventRegistrationTokenTableNoCreate_m0D50B02A53DD9EF9EEBA515347B3CA5992979501 (RuntimeObject* ___instance0, Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod1, TokenListCount_t52D9E220227BAA2D3E0243CC23EFE1E54ECE5E0C** ___tokenListCount2, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::Pop(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistrationTokenListWithCount_Pop_mD9C29E40F98D1A20AAF83702169F1A0CB11E750D (EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303* __this, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B* ___token0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>::Remove(TKey)
inline bool ConditionalWeakTable_2_Remove_m6346F74865E02C6D37564EF494852AA66E953698 (ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___key0, method);
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m749A4CD33AC4CF1D3F2723EBA4D1EEE590DCCD85_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3A5FB0773626670CFB4AAC59E1485231C8EFD649_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m258931EB2BDEDE3D2CED632F6B207CA93F46CAC1_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB5511DCA764C7BB77877C9028AB026AD9EEBD6B8_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m5BC7606ACC6309C3070972F60C8A552BA1D4DA71_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m8D1061D8E0079806BBE251CE5ACAF4262C15EE8E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF017EFBD89137395458CD85A01B48B45892FCE9_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCF75982D40162C5B91D40E003FC6388445B8A9B7_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.Linq.Expressions.Expression[] System.Dynamic.DynamicObject/MetaDynamic::BuildCallArgs<System.Object>(TBinder,System.Linq.Expressions.Expression[],System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* MetaDynamic_BuildCallArgs_TisRuntimeObject_mA4DD4E5A9F8EF2D9115C98A90566BA677C673365_gshared (RuntimeObject* ___binder0, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___parameters1, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___arg02, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___arg13, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_0 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_1 = ((MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_StaticFields*)il2cpp_codegen_static_fields_for(MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var))->___s_noArgs_5;
		if ((((RuntimeObject*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)L_0) == ((RuntimeObject*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)L_1)))
		{
			goto IL_0037;
		}
	}
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_2 = ___arg13;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_3 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)2);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_4 = L_3;
		RuntimeObject* L_5 = ___binder0;
		il2cpp_codegen_runtime_class_init_inline(MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_6;
		L_6 = ((  ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_6);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_7 = L_4;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_8 = ___arg02;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_8);
		return L_7;
	}

IL_001f:
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_9 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)3);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_10 = L_9;
		RuntimeObject* L_11 = ___binder0;
		il2cpp_codegen_runtime_class_init_inline(MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_12;
		L_12 = ((  ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_11, il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_12);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_13 = L_10;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_14 = ___arg02;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_14);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_15 = L_13;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16 = ___arg13;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_16);
		return L_15;
	}

IL_0037:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17 = ___arg13;
		if (L_17)
		{
			goto IL_004a;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_18 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)1);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_19 = L_18;
		RuntimeObject* L_20 = ___binder0;
		il2cpp_codegen_runtime_class_init_inline(MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_21;
		L_21 = ((  ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_21);
		return L_19;
	}

IL_004a:
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_22 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)2);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_23 = L_22;
		RuntimeObject* L_24 = ___binder0;
		il2cpp_codegen_runtime_class_init_inline(MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_25;
		L_25 = ((  ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_24, il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_26 = L_23;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = ___arg13;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_27);
		return L_26;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.DynamicObject/MetaDynamic::BuildCallMethodWithResult<System.Object>(System.Reflection.MethodInfo,TBinder,System.Linq.Expressions.Expression[],System.Dynamic.DynamicMetaObject,System.Dynamic.DynamicObject/MetaDynamic/Fallback`1<TBinder>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* MetaDynamic_BuildCallMethodWithResult_TisRuntimeObject_m05E2E66B54A776498974C6F15E5EB573B9E20C33_gshared (MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924* __this, MethodInfo_t* ___method0, RuntimeObject* ___binder1, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___args2, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* ___fallbackResult3, Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* ___fallbackInvoke4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_0 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_1 = NULL;
	ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* V_2 = NULL;
	DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* V_3 = NULL;
	UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* V_4 = NULL;
	String_t* V_5 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_6 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* G_B5_0 = NULL;
	int32_t G_B15_0 = 0;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* G_B15_1 = NULL;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* G_B15_2 = NULL;
	TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* G_B15_3 = NULL;
	int32_t G_B14_0 = 0;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* G_B14_1 = NULL;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* G_B14_2 = NULL;
	TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* G_B14_3 = NULL;
	BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* G_B16_2 = NULL;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* G_B16_3 = NULL;
	TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* G_B16_4 = NULL;
	MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* G_B18_2 = NULL;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* G_B18_3 = NULL;
	TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* G_B18_4 = NULL;
	MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* G_B17_2 = NULL;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* G_B17_3 = NULL;
	TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* G_B17_4 = NULL;
	DefaultExpression_t68E278AD7534F283D174570B240C596979B26533* G_B19_0 = NULL;
	MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* G_B19_1 = NULL;
	int32_t G_B19_2 = 0;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* G_B19_3 = NULL;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* G_B19_4 = NULL;
	TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* G_B19_5 = NULL;
	{
		MethodInfo_t* L_0 = ___method0;
		bool L_1;
		L_1 = MetaDynamic_IsOverridden_m41BBFE158165AFDCB3BA3E11704BEF1280B8EBF1(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_2 = ___fallbackResult3;
		return L_2;
	}

IL_000c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_5;
		L_5 = Expression_Parameter_mE65CB09BF5121B5F7079555CED44FEB5B057F318(L_4, (String_t*)NULL, NULL);
		V_0 = L_5;
		MethodInfo_t* L_6 = ___method0;
		MethodInfo_t* L_7;
		L_7 = CachedReflectionInfo_get_DynamicObject_TryBinaryOperation_m5BE0D91BAE0C551049A2F1F318E501CBA30FB0AD(NULL);
		bool L_8;
		L_8 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_11;
		L_11 = Expression_Parameter_mE65CB09BF5121B5F7079555CED44FEB5B057F318(L_10, (String_t*)NULL, NULL);
		G_B5_0 = L_11;
		goto IL_004c;
	}

IL_003c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_14;
		L_14 = Expression_Parameter_mE65CB09BF5121B5F7079555CED44FEB5B057F318(L_13, (String_t*)NULL, NULL);
		G_B5_0 = L_14;
	}

IL_004c:
	{
		V_1 = G_B5_0;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_15 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_16;
		L_16 = MetaDynamic_GetConvertedArgs_m25D845993FFA08DAD206F40DC59353B71B3E6463(L_15, NULL);
		V_2 = L_16;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424_il2cpp_TypeInfo_var);
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_18 = ((BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424_StaticFields*)il2cpp_codegen_static_fields_for(BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424_il2cpp_TypeInfo_var))->___Empty_0;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_19 = (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*)il2cpp_codegen_object_new(DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		DynamicMetaObject__ctor_m3A410E35A61623019D223D58673E0A38550EF12A(L_19, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_17, L_18, NULL);
		V_3 = L_19;
		RuntimeObject* L_20 = ___binder1;
		NullCheck((DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_20);
		Type_t* L_21;
		L_21 = VirtualFuncInvoker0< Type_t* >::Invoke(6 /* System.Type System.Dynamic.DynamicMetaObjectBinder::get_ReturnType() */, (DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_20);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_21, L_23, NULL);
		if (!L_24)
		{
			goto IL_01e4;
		}
	}
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_25 = V_3;
		NullCheck(L_25);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_26;
		L_26 = DynamicMetaObject_get_Expression_mC74F5FF9AC58E0F938C2C15CA0B32CE999EEA7F4_inline(L_25, NULL);
		RuntimeObject* L_27 = ___binder1;
		NullCheck((DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_27);
		Type_t* L_28;
		L_28 = VirtualFuncInvoker0< Type_t* >::Invoke(6 /* System.Type System.Dynamic.DynamicMetaObjectBinder::get_ReturnType() */, (DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_27);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_29;
		L_29 = Expression_Convert_mE26A8F02EF729CCAE06E809F30227B4195B3C392(L_26, L_28, NULL);
		V_4 = L_29;
		DynamicObject_tD0DC19F06E5F1E72197D131DB0CE792102F6DD69* L_30;
		L_30 = MetaDynamic_get_Value_m80E92F1935368BEE88E117F59FBED4D23084A34E(__this, NULL);
		NullCheck((RuntimeObject*)L_30);
		Type_t* L_31;
		L_31 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_30, NULL);
		RuntimeObject* L_32 = ___binder1;
		NullCheck(L_32);
		Type_t* L_33;
		L_33 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_32, NULL);
		RuntimeObject* L_34 = ___binder1;
		NullCheck((DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_34);
		Type_t* L_35;
		L_35 = VirtualFuncInvoker0< Type_t* >::Invoke(6 /* System.Type System.Dynamic.DynamicMetaObjectBinder::get_ReturnType() */, (DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_34);
		String_t* L_36;
		L_36 = Strings_DynamicObjectResultNotAssignable_m7DEF45A2092C7DA0FEDCFB825FBC752A7540A3D3((RuntimeObject*)_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, (RuntimeObject*)L_31, (RuntimeObject*)L_33, (RuntimeObject*)L_35, NULL);
		V_5 = L_36;
		RuntimeObject* L_37 = ___binder1;
		NullCheck((DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_37);
		Type_t* L_38;
		L_38 = VirtualFuncInvoker0< Type_t* >::Invoke(6 /* System.Type System.Dynamic.DynamicMetaObjectBinder::get_ReturnType() */, (DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_37);
		NullCheck(L_38);
		bool L_39;
		L_39 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_38, NULL);
		if (!L_39)
		{
			goto IL_0108;
		}
	}
	{
		RuntimeObject* L_40 = ___binder1;
		NullCheck((DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_40);
		Type_t* L_41;
		L_41 = VirtualFuncInvoker0< Type_t* >::Invoke(6 /* System.Type System.Dynamic.DynamicMetaObjectBinder::get_ReturnType() */, (DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_40);
		Type_t* L_42;
		L_42 = Nullable_GetUnderlyingType_m3162A4F48AE683C74A9419644E40C05595BA41E7(L_41, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_42, (Type_t*)NULL, NULL);
		if (!L_43)
		{
			goto IL_0108;
		}
	}
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_44 = V_3;
		NullCheck(L_44);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_45;
		L_45 = DynamicMetaObject_get_Expression_mC74F5FF9AC58E0F938C2C15CA0B32CE999EEA7F4_inline(L_44, NULL);
		RuntimeObject* L_46 = ___binder1;
		NullCheck((DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_46);
		Type_t* L_47;
		L_47 = VirtualFuncInvoker0< Type_t* >::Invoke(6 /* System.Type System.Dynamic.DynamicMetaObjectBinder::get_ReturnType() */, (DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_46);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		TypeBinaryExpression_t81E55BA04133E3F10863D4D0CDADAC82AEAB98BF* L_48;
		L_48 = Expression_TypeIs_mCC9C7E8D3827A5FBD0726634C3ED2B3B3AA1C844(L_45, L_47, NULL);
		V_6 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_48;
		goto IL_0135;
	}

IL_0108:
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_49 = V_3;
		NullCheck(L_49);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_50;
		L_50 = DynamicMetaObject_get_Expression_mC74F5FF9AC58E0F938C2C15CA0B32CE999EEA7F4_inline(L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_il2cpp_TypeInfo_var);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_51 = ((Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_il2cpp_TypeInfo_var))->___Null_27;
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_52;
		L_52 = Expression_Equal_m1E9B2B97E3335E77266BE3D4FCB2C05BB60BEE41(L_50, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_51, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_53 = V_3;
		NullCheck(L_53);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_54;
		L_54 = DynamicMetaObject_get_Expression_mC74F5FF9AC58E0F938C2C15CA0B32CE999EEA7F4_inline(L_53, NULL);
		RuntimeObject* L_55 = ___binder1;
		NullCheck((DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_55);
		Type_t* L_56;
		L_56 = VirtualFuncInvoker0< Type_t* >::Invoke(6 /* System.Type System.Dynamic.DynamicMetaObjectBinder::get_ReturnType() */, (DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_55);
		TypeBinaryExpression_t81E55BA04133E3F10863D4D0CDADAC82AEAB98BF* L_57;
		L_57 = Expression_TypeIs_mCC9C7E8D3827A5FBD0726634C3ED2B3B3AA1C844(L_54, L_56, NULL);
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_58;
		L_58 = Expression_OrElse_m8EB0FF832015DCA538BBB78A2EFA7928FEB7B789((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_52, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_57, NULL);
		V_6 = (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_58;
	}

IL_0135:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_59 = V_6;
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_60 = V_4;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_61;
		L_61 = CachedReflectionInfo_get_InvalidCastException_Ctor_String_m6C7CFCA05FD8EA1BC1A72C7B710101FBFD94829C(NULL);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_62 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)1);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_63 = L_62;
		MethodInfo_t* L_64;
		L_64 = CachedReflectionInfo_get_String_Format_String_ObjectArray_mE9DB8323267AE9E819294DFC44928E98EF745CE0(NULL);
		String_t* L_65 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_66;
		L_66 = Expression_Constant_m5D3728BC22F16A217945079B390E6E622BA5904D((RuntimeObject*)L_65, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_67, NULL);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_69 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)1);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_70 = L_69;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_71 = V_3;
		NullCheck(L_71);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_72;
		L_72 = DynamicMetaObject_get_Expression_mC74F5FF9AC58E0F938C2C15CA0B32CE999EEA7F4_inline(L_71, NULL);
		il2cpp_codegen_runtime_class_init_inline(Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_il2cpp_TypeInfo_var);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_73 = ((Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_il2cpp_TypeInfo_var))->___Null_27;
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_74;
		L_74 = Expression_Equal_m1E9B2B97E3335E77266BE3D4FCB2C05BB60BEE41(L_72, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_73, NULL);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_75;
		L_75 = Expression_Constant_m5D3728BC22F16A217945079B390E6E622BA5904D((RuntimeObject*)_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_76 = V_3;
		NullCheck(L_76);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_77;
		L_77 = DynamicMetaObject_get_Expression_mC74F5FF9AC58E0F938C2C15CA0B32CE999EEA7F4_inline(L_76, NULL);
		MethodInfo_t* L_78;
		L_78 = CachedReflectionInfo_get_Object_GetType_mB52CBC2C6DFD72ACF4955C94F9276973157C3237(NULL);
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_79;
		L_79 = Expression_Call_m09FC3088BA390B314F31348D4F07C803EB0DAAA7(L_77, L_78, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_80, NULL);
		ConditionalExpression_t4A487FB09E6FEA815F25AADA33335CD658B6A913* L_82;
		L_82 = Expression_Condition_mFE72AAE409FF6E0D371F04F1CEC7BD9C7FEF4552((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_74, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_75, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_79, L_81, NULL);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_82);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_82);
		TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6* L_83 = (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6*)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var);
		NullCheck(L_83);
		TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD(L_83, L_70, TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var);
		NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E* L_84;
		L_84 = Expression_NewArrayInit_m80255FF1335D4CC9284F986CE832AEE310F98369(L_68, (RuntimeObject*)L_83, NULL);
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_85;
		L_85 = Expression_Call_m27DE0B204617F9F1C3EB89C6EA950A544495C8A0(L_64, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_66, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_84, NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_85);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_85);
		TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6* L_86 = (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6*)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var);
		NullCheck(L_86);
		TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD(L_86, L_63, TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var);
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_87;
		L_87 = Expression_New_mD7DF4FCA820F95C0DC57065F89BA89D2BB053D76(L_61, (RuntimeObject*)L_86, NULL);
		RuntimeObject* L_88 = ___binder1;
		NullCheck((DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_88);
		Type_t* L_89;
		L_89 = VirtualFuncInvoker0< Type_t* >::Invoke(6 /* System.Type System.Dynamic.DynamicMetaObjectBinder::get_ReturnType() */, (DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_88);
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_90;
		L_90 = Expression_Throw_mC0A37F6727C45C57FE663589809CC57A504E1266((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_87, L_89, NULL);
		RuntimeObject* L_91 = ___binder1;
		NullCheck((DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_91);
		Type_t* L_92;
		L_92 = VirtualFuncInvoker0< Type_t* >::Invoke(6 /* System.Type System.Dynamic.DynamicMetaObjectBinder::get_ReturnType() */, (DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_91);
		ConditionalExpression_t4A487FB09E6FEA815F25AADA33335CD658B6A913* L_93;
		L_93 = Expression_Condition_mFE72AAE409FF6E0D371F04F1CEC7BD9C7FEF4552(L_59, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_60, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_90, L_92, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_94 = V_3;
		NullCheck(L_94);
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_95;
		L_95 = DynamicMetaObject_get_Restrictions_mC56A7B16011CB2E190394A71B37293BDAC8CBF68_inline(L_94, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_96 = (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*)il2cpp_codegen_object_new(DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_il2cpp_TypeInfo_var);
		NullCheck(L_96);
		DynamicMetaObject__ctor_m3A410E35A61623019D223D58673E0A38550EF12A(L_96, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_93, L_95, NULL);
		V_3 = L_96;
	}

IL_01e4:
	{
		Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* L_97 = ___fallbackInvoke4;
		if (!L_97)
		{
			goto IL_01f3;
		}
	}
	{
		Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* L_98 = ___fallbackInvoke4;
		RuntimeObject* L_99 = ___binder1;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_100 = V_3;
		NullCheck(L_98);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_101;
		L_101 = ((  DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* (*) (Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE*, MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924*, RuntimeObject*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_98, __this, L_99, L_100, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_101;
	}

IL_01f3:
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_102 = (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)SZArrayNew(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var, (uint32_t)2);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_103 = L_102;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_104 = V_0;
		NullCheck(L_103);
		ArrayElementTypeCheck (L_103, L_104);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_104);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_105 = L_103;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_106 = V_1;
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, L_106);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(1), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_106);
		TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* L_107 = (TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1*)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1_il2cpp_TypeInfo_var);
		NullCheck(L_107);
		TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C(L_107, L_105, TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C_RuntimeMethod_var);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_108 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)2);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_109 = L_108;
		MethodInfo_t* L_110 = ___method0;
		MethodInfo_t* L_111;
		L_111 = CachedReflectionInfo_get_DynamicObject_TryBinaryOperation_m5BE0D91BAE0C551049A2F1F318E501CBA30FB0AD(NULL);
		bool L_112;
		L_112 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_110, L_111, NULL);
		G_B14_0 = 0;
		G_B14_1 = L_109;
		G_B14_2 = L_109;
		G_B14_3 = L_107;
		if (L_112)
		{
			G_B15_0 = 0;
			G_B15_1 = L_109;
			G_B15_2 = L_109;
			G_B15_3 = L_107;
			goto IL_022a;
		}
	}
	{
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_113 = V_1;
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_114 = V_2;
		NullCheck(L_114);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_115;
		L_115 = ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502(L_114, 0, ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_116;
		L_116 = Expression_Assign_m820F9637D57C3AF6EB96900C7910DF6299823F1F((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_113, L_115, NULL);
		G_B16_0 = L_116;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		G_B16_3 = G_B14_2;
		G_B16_4 = G_B14_3;
		goto IL_0240;
	}

IL_022a:
	{
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_117 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_118, NULL);
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_120 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E* L_121;
		L_121 = Expression_NewArrayInit_m80255FF1335D4CC9284F986CE832AEE310F98369(L_119, (RuntimeObject*)L_120, NULL);
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_122;
		L_122 = Expression_Assign_m820F9637D57C3AF6EB96900C7910DF6299823F1F((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_117, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_121, NULL);
		G_B16_0 = L_122;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
		G_B16_3 = G_B15_2;
		G_B16_4 = G_B15_3;
	}

IL_0240:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)G_B16_0);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_123 = G_B16_3;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_124;
		L_124 = MetaDynamic_GetLimitedSelf_mC6AFC8AD2450A39AAAC06B82980176C3CF497EFC(__this, NULL);
		MethodInfo_t* L_125 = ___method0;
		RuntimeObject* L_126 = ___binder1;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_127 = ___args2;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_128 = V_1;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_129 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_130;
		L_130 = ((  ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* (*) (RuntimeObject*, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_126, L_127, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_128, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_129, il2cpp_rgctx_method(method->rgctx_data, 3));
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_131;
		L_131 = Expression_Call_m7068D5DDC465BEE280F37CD89F808E8D3A76111D(L_124, L_125, L_130, NULL);
		MethodInfo_t* L_132 = ___method0;
		MethodInfo_t* L_133;
		L_133 = CachedReflectionInfo_get_DynamicObject_TryBinaryOperation_m5BE0D91BAE0C551049A2F1F318E501CBA30FB0AD(NULL);
		bool L_134;
		L_134 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_132, L_133, NULL);
		G_B17_0 = L_131;
		G_B17_1 = 1;
		G_B17_2 = L_123;
		G_B17_3 = L_123;
		G_B17_4 = G_B16_4;
		if (L_134)
		{
			G_B18_0 = L_131;
			G_B18_1 = 1;
			G_B18_2 = L_123;
			G_B18_3 = L_123;
			G_B18_4 = G_B16_4;
			goto IL_026c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_il2cpp_TypeInfo_var);
		DefaultExpression_t68E278AD7534F283D174570B240C596979B26533* L_135 = ((Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_il2cpp_TypeInfo_var))->___Empty_26;
		G_B19_0 = L_135;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		G_B19_3 = G_B17_2;
		G_B19_4 = G_B17_3;
		G_B19_5 = G_B17_4;
		goto IL_0273;
	}

IL_026c:
	{
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_136 = V_1;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_137 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_138;
		L_138 = MetaDynamic_ReferenceArgAssign_mADC476A2755E3F318B1694AC6A61607E368D9386((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_136, L_137, NULL);
		G_B19_0 = ((DefaultExpression_t68E278AD7534F283D174570B240C596979B26533*)(L_138));
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
		G_B19_3 = G_B18_2;
		G_B19_4 = G_B18_3;
		G_B19_5 = G_B18_4;
	}

IL_0273:
	{
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_139 = V_3;
		NullCheck(L_139);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_140;
		L_140 = DynamicMetaObject_get_Expression_mC74F5FF9AC58E0F938C2C15CA0B32CE999EEA7F4_inline(L_139, NULL);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* L_141;
		L_141 = Expression_Block_m89422223D29D4E87B96C9C643D4C3B4F2AB9BF9E((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)G_B19_0, L_140, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_142 = ___fallbackResult3;
		NullCheck(L_142);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_143;
		L_143 = DynamicMetaObject_get_Expression_mC74F5FF9AC58E0F938C2C15CA0B32CE999EEA7F4_inline(L_142, NULL);
		RuntimeObject* L_144 = ___binder1;
		NullCheck((DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_144);
		Type_t* L_145;
		L_145 = VirtualFuncInvoker0< Type_t* >::Invoke(6 /* System.Type System.Dynamic.DynamicMetaObjectBinder::get_ReturnType() */, (DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF*)L_144);
		ConditionalExpression_t4A487FB09E6FEA815F25AADA33335CD658B6A913* L_146;
		L_146 = Expression_Condition_mFE72AAE409FF6E0D371F04F1CEC7BD9C7FEF4552((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)G_B19_1, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_141, L_143, L_145, NULL);
		NullCheck(G_B19_3);
		ArrayElementTypeCheck (G_B19_3, L_146);
		(G_B19_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B19_2), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_146);
		TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6* L_147 = (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6*)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var);
		NullCheck(L_147);
		TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD(L_147, G_B19_4, TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var);
		BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* L_148;
		L_148 = Expression_Block_mA2A5F7ECDC2C090F6DBAF19FA118784A90A0D80D((RuntimeObject*)G_B19_5, (RuntimeObject*)L_147, NULL);
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_149;
		L_149 = MetaDynamic_GetRestrictions_m09B931B3094B49F6DA2A386B881AA8A3DE1FB60A(__this, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_150 = V_3;
		NullCheck(L_150);
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_151;
		L_151 = DynamicMetaObject_get_Restrictions_mC56A7B16011CB2E190394A71B37293BDAC8CBF68_inline(L_150, NULL);
		NullCheck(L_149);
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_152;
		L_152 = BindingRestrictions_Merge_mD2B5746636C9BAD9E88FE2618E18AE0B0C8B3785(L_149, L_151, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_153 = ___fallbackResult3;
		NullCheck(L_153);
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_154;
		L_154 = DynamicMetaObject_get_Restrictions_mC56A7B16011CB2E190394A71B37293BDAC8CBF68_inline(L_153, NULL);
		NullCheck(L_152);
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_155;
		L_155 = BindingRestrictions_Merge_mD2B5746636C9BAD9E88FE2618E18AE0B0C8B3785(L_152, L_154, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_156 = (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*)il2cpp_codegen_object_new(DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_il2cpp_TypeInfo_var);
		NullCheck(L_156);
		DynamicMetaObject__ctor_m3A410E35A61623019D223D58673E0A38550EF12A(L_156, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_148, L_155, NULL);
		return L_156;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.DynamicObject/MetaDynamic::CallMethodNoResult<System.Object>(System.Reflection.MethodInfo,TBinder,System.Linq.Expressions.Expression[],System.Dynamic.DynamicObject/MetaDynamic/Fallback`1<TBinder>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* MetaDynamic_CallMethodNoResult_TisRuntimeObject_m72371633D569739E5D30D5458FD08F2CF4B3421C_gshared (MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924* __this, MethodInfo_t* ___method0, RuntimeObject* ___binder1, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___args2, Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* ___fallback3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* V_0 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_1 = NULL;
	ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* V_2 = NULL;
	DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* V_3 = NULL;
	{
		Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* L_0 = ___fallback3;
		RuntimeObject* L_1 = ___binder1;
		NullCheck(L_0);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_2;
		L_2 = ((  DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* (*) (Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE*, MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924*, RuntimeObject*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, __this, L_1, (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_5;
		L_5 = Expression_Parameter_mE65CB09BF5121B5F7079555CED44FEB5B057F318(L_4, (String_t*)NULL, NULL);
		V_1 = L_5;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_6 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_7;
		L_7 = MetaDynamic_GetConvertedArgs_m25D845993FFA08DAD206F40DC59353B71B3E6463(L_6, NULL);
		V_2 = L_7;
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_8 = (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)SZArrayNew(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var, (uint32_t)1);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_9 = L_8;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_10 = V_1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_10);
		TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* L_11 = (TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1*)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C(L_11, L_9, TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C_RuntimeMethod_var);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_12 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)2);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_13 = L_12;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_14 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_17 = V_2;
		NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E* L_18;
		L_18 = Expression_NewArrayInit_m80255FF1335D4CC9284F986CE832AEE310F98369(L_16, (RuntimeObject*)L_17, NULL);
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_19;
		L_19 = Expression_Assign_m820F9637D57C3AF6EB96900C7910DF6299823F1F((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_14, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_19);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_19);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_20 = L_13;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_21;
		L_21 = MetaDynamic_GetLimitedSelf_mC6AFC8AD2450A39AAAC06B82980176C3CF497EFC(__this, NULL);
		MethodInfo_t* L_22 = ___method0;
		RuntimeObject* L_23 = ___binder1;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_24 = ___args2;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_25 = V_1;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_26;
		L_26 = ((  ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* (*) (RuntimeObject*, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_23, L_24, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)NULL, il2cpp_rgctx_method(method->rgctx_data, 2));
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_27;
		L_27 = Expression_Call_m7068D5DDC465BEE280F37CD89F808E8D3A76111D(L_21, L_22, L_26, NULL);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_28 = V_1;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_29 = ___args2;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_30;
		L_30 = MetaDynamic_ReferenceArgAssign_mADC476A2755E3F318B1694AC6A61607E368D9386((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28, L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_il2cpp_TypeInfo_var);
		DefaultExpression_t68E278AD7534F283D174570B240C596979B26533* L_31 = ((Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_StaticFields*)il2cpp_codegen_static_fields_for(Utils_tC98EE4BDA92045C3F3A73050A1648C0CD74220F8_il2cpp_TypeInfo_var))->___Empty_26;
		BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* L_32;
		L_32 = Expression_Block_m89422223D29D4E87B96C9C643D4C3B4F2AB9BF9E(L_30, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_31, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_33 = V_0;
		NullCheck(L_33);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_34;
		L_34 = DynamicMetaObject_get_Expression_mC74F5FF9AC58E0F938C2C15CA0B32CE999EEA7F4_inline(L_33, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_35, NULL);
		ConditionalExpression_t4A487FB09E6FEA815F25AADA33335CD658B6A913* L_37;
		L_37 = Expression_Condition_mFE72AAE409FF6E0D371F04F1CEC7BD9C7FEF4552((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_27, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_32, L_34, L_36, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_37);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_37);
		TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6* L_38 = (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6*)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD(L_38, L_20, TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var);
		BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* L_39;
		L_39 = Expression_Block_mA2A5F7ECDC2C090F6DBAF19FA118784A90A0D80D((RuntimeObject*)L_11, (RuntimeObject*)L_38, NULL);
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_40;
		L_40 = MetaDynamic_GetRestrictions_m09B931B3094B49F6DA2A386B881AA8A3DE1FB60A(__this, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_41 = V_0;
		NullCheck(L_41);
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_42;
		L_42 = DynamicMetaObject_get_Restrictions_mC56A7B16011CB2E190394A71B37293BDAC8CBF68_inline(L_41, NULL);
		NullCheck(L_40);
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_43;
		L_43 = BindingRestrictions_Merge_mD2B5746636C9BAD9E88FE2618E18AE0B0C8B3785(L_40, L_42, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_44 = (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*)il2cpp_codegen_object_new(DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		DynamicMetaObject__ctor_m3A410E35A61623019D223D58673E0A38550EF12A(L_44, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_39, L_43, NULL);
		V_3 = L_44;
		Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* L_45 = ___fallback3;
		RuntimeObject* L_46 = ___binder1;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_47 = V_3;
		NullCheck(L_45);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_48;
		L_48 = ((  DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* (*) (Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE*, MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924*, RuntimeObject*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_45, __this, L_46, L_47, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_48;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.DynamicObject/MetaDynamic::CallMethodReturnLast<System.Object>(System.Reflection.MethodInfo,TBinder,System.Linq.Expressions.Expression[],System.Linq.Expressions.Expression,System.Dynamic.DynamicObject/MetaDynamic/Fallback`1<TBinder>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* MetaDynamic_CallMethodReturnLast_TisRuntimeObject_mF1C90B6BB15CF61F1021A2DB89E9B9F7C7E1CCE3_gshared (MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924* __this, MethodInfo_t* ___method0, RuntimeObject* ___binder1, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___args2, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___value3, Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* ___fallback4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* V_0 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_1 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_2 = NULL;
	ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* V_3 = NULL;
	DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* V_4 = NULL;
	{
		Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* L_0 = ___fallback4;
		RuntimeObject* L_1 = ___binder1;
		NullCheck(L_0);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_2;
		L_2 = ((  DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* (*) (Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE*, MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924*, RuntimeObject*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, __this, L_1, (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_5;
		L_5 = Expression_Parameter_mE65CB09BF5121B5F7079555CED44FEB5B057F318(L_4, (String_t*)NULL, NULL);
		V_1 = L_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = Expression_Parameter_mE65CB09BF5121B5F7079555CED44FEB5B057F318(L_7, (String_t*)NULL, NULL);
		V_2 = L_8;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_9 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_10;
		L_10 = MetaDynamic_GetConvertedArgs_m25D845993FFA08DAD206F40DC59353B71B3E6463(L_9, NULL);
		V_3 = L_10;
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_11 = (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)SZArrayNew(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var, (uint32_t)2);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_12 = L_11;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_13 = V_1;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_13);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_14 = L_12;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_15 = V_2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_15);
		TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1* L_16 = (TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1*)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_t7E25F2F60743133CCDC812DD1652DF57315FB0D1_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C(L_16, L_14, TrueReadOnlyCollection_1__ctor_m5B06AFD2DDDD8B9FB4444BF45E404C5FE4BAA51C_RuntimeMethod_var);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_17 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)2);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_18 = L_17;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_19 = V_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_20, NULL);
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_22 = V_3;
		NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E* L_23;
		L_23 = Expression_NewArrayInit_m80255FF1335D4CC9284F986CE832AEE310F98369(L_21, (RuntimeObject*)L_22, NULL);
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_24;
		L_24 = Expression_Assign_m820F9637D57C3AF6EB96900C7910DF6299823F1F((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_19, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_23, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_24);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_25 = L_18;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_26;
		L_26 = MetaDynamic_GetLimitedSelf_mC6AFC8AD2450A39AAAC06B82980176C3CF497EFC(__this, NULL);
		MethodInfo_t* L_27 = ___method0;
		RuntimeObject* L_28 = ___binder1;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_29 = ___args2;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_30 = V_2;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_31 = V_1;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_32 = ___value3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_33, NULL);
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_35;
		L_35 = Expression_Convert_mE26A8F02EF729CCAE06E809F30227B4195B3C392(L_32, L_34, NULL);
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_36;
		L_36 = Expression_Assign_m820F9637D57C3AF6EB96900C7910DF6299823F1F((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_31, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_35, NULL);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_37;
		L_37 = ((  ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* (*) (RuntimeObject*, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_28, L_29, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_30, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_36, il2cpp_rgctx_method(method->rgctx_data, 2));
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_38;
		L_38 = Expression_Call_m7068D5DDC465BEE280F37CD89F808E8D3A76111D(L_26, L_27, L_37, NULL);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_39 = V_2;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_40 = ___args2;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_41;
		L_41 = MetaDynamic_ReferenceArgAssign_mADC476A2755E3F318B1694AC6A61607E368D9386((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_39, L_40, NULL);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_42 = V_1;
		BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* L_43;
		L_43 = Expression_Block_m89422223D29D4E87B96C9C643D4C3B4F2AB9BF9E(L_41, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_42, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_44 = V_0;
		NullCheck(L_44);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_45;
		L_45 = DynamicMetaObject_get_Expression_mC74F5FF9AC58E0F938C2C15CA0B32CE999EEA7F4_inline(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_46, NULL);
		ConditionalExpression_t4A487FB09E6FEA815F25AADA33335CD658B6A913* L_48;
		L_48 = Expression_Condition_mFE72AAE409FF6E0D371F04F1CEC7BD9C7FEF4552((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_38, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_43, L_45, L_47, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_48);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_48);
		TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6* L_49 = (TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6*)il2cpp_codegen_object_new(TrueReadOnlyCollection_1_tF83D1BA3C01B3349644B9EDA4F52301FC7863BB6_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD(L_49, L_25, TrueReadOnlyCollection_1__ctor_m5A7431D84DF4F093FF9D23D49D1B6C3C4FC5B0CD_RuntimeMethod_var);
		BlockExpression_tA7BF679A1EA718F7DC918EBF5DE86D4C9327B76B* L_50;
		L_50 = Expression_Block_mA2A5F7ECDC2C090F6DBAF19FA118784A90A0D80D((RuntimeObject*)L_16, (RuntimeObject*)L_49, NULL);
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_51;
		L_51 = MetaDynamic_GetRestrictions_m09B931B3094B49F6DA2A386B881AA8A3DE1FB60A(__this, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_52 = V_0;
		NullCheck(L_52);
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_53;
		L_53 = DynamicMetaObject_get_Restrictions_mC56A7B16011CB2E190394A71B37293BDAC8CBF68_inline(L_52, NULL);
		NullCheck(L_51);
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_54;
		L_54 = BindingRestrictions_Merge_mD2B5746636C9BAD9E88FE2618E18AE0B0C8B3785(L_51, L_53, NULL);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_55 = (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*)il2cpp_codegen_object_new(DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		DynamicMetaObject__ctor_m3A410E35A61623019D223D58673E0A38550EF12A(L_55, (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_50, L_54, NULL);
		V_4 = L_55;
		Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* L_56 = ___fallback4;
		RuntimeObject* L_57 = ___binder1;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_58 = V_4;
		NullCheck(L_56);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_59;
		L_59 = ((  DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* (*) (Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE*, MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924*, RuntimeObject*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_56, __this, L_57, L_58, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_59;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.DynamicObject/MetaDynamic::CallMethodWithResult<System.Object>(System.Reflection.MethodInfo,TBinder,System.Linq.Expressions.Expression[],System.Dynamic.DynamicObject/MetaDynamic/Fallback`1<TBinder>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* MetaDynamic_CallMethodWithResult_TisRuntimeObject_m405CB988DAC877CF9254AAB780BD8FA4F0D669F0_gshared (MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924* __this, MethodInfo_t* ___method0, RuntimeObject* ___binder1, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___args2, Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* ___fallback3, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = ___method0;
		RuntimeObject* L_1 = ___binder1;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_2 = ___args2;
		Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* L_3 = ___fallback3;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_4;
		L_4 = ((  DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* (*) (MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924*, MethodInfo_t*, RuntimeObject*, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*, Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE*, Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, L_2, L_3, (Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// System.Dynamic.DynamicMetaObject System.Dynamic.DynamicObject/MetaDynamic::CallMethodWithResult<System.Object>(System.Reflection.MethodInfo,TBinder,System.Linq.Expressions.Expression[],System.Dynamic.DynamicObject/MetaDynamic/Fallback`1<TBinder>,System.Dynamic.DynamicObject/MetaDynamic/Fallback`1<TBinder>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* MetaDynamic_CallMethodWithResult_TisRuntimeObject_m4FF74812F2478793679B34900CCD45B62FE55B1C_gshared (MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924* __this, MethodInfo_t* ___method0, RuntimeObject* ___binder1, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___args2, Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* ___fallback3, Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* ___fallbackInvoke4, const RuntimeMethod* method) 
{
	DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* V_0 = NULL;
	DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* V_1 = NULL;
	{
		Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* L_0 = ___fallback3;
		RuntimeObject* L_1 = ___binder1;
		NullCheck(L_0);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_2;
		L_2 = ((  DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* (*) (Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE*, MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924*, RuntimeObject*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, __this, L_1, (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		MethodInfo_t* L_3 = ___method0;
		RuntimeObject* L_4 = ___binder1;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_5 = ___args2;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_6 = V_0;
		Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* L_7 = ___fallbackInvoke4;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_8;
		L_8 = ((  DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* (*) (MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924*, MethodInfo_t*, RuntimeObject*, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_3, L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_8;
		Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE* L_9 = ___fallback3;
		RuntimeObject* L_10 = ___binder1;
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_11 = V_1;
		NullCheck(L_9);
		DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* L_12;
		L_12 = ((  DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* (*) (Fallback_1_t7644D1F560334036CDDA442A100EF8937A1BCFBE*, MetaDynamic_tD64FFD23B6EF0ED21E14C16AB3B83CE08158F924*, RuntimeObject*, DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_9, __this, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// System.Linq.Expressions.ConstantExpression System.Dynamic.DynamicObject/MetaDynamic::Constant<System.Object>(TBinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* MetaDynamic_Constant_TisRuntimeObject_m7EE8A3247F08AE9188A787D53B6C8D4CCFE22C5A_gshared (RuntimeObject* ___binder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___binder0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_3;
		L_3 = Expression_Constant_m600574E310E474F4D6E62D32B2A01F3DDE56D839(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisRuntimeObject_m8546CE5243FDDEFA3C7483FEB44BF91BD8F91DAF_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_1 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_7 = ___node0;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___node0;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___channel1;
		bool L_1;
		L_1 = MeshData_HasVertexAttribute_m915D9CD55110DCEBE56E9DBE654D9CC196FDFE88(__this, L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___channel1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FEB2B080187BD8DC7BC64F8D39BD8910C62CC2E)), L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___buffer0))->___m_Length_1);
		int32_t L_9;
		L_9 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11;
		L_11 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___buffer0))->___m_Length_1);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCC178D5BE56C6C185E79192131F152693335504)), L_13, L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_RuntimeMethod_var)));
	}

IL_005f:
	{
		intptr_t L_19 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_20 = ___channel1;
		int32_t L_21 = ___format2;
		int32_t L_22 = ___dim3;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_23 = ___buffer0;
		void* L_24;
		L_24 = ((  void* (*) (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 0));
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE(L_24, NULL);
		MeshData_CopyAttributeIntoPtr_m9B03920F8423FE175BE40BBCFBEE2CAB88D1C27D(L_19, L_20, L_21, L_22, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	MeshData_CopyAttributeInto_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mCCE0EB9991830B8D0114521CF5275A103CBEBE95(_thisAdjusted, ___buffer0, ___channel1, ___format2, ___dim3, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Color32>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___channel1;
		bool L_1;
		L_1 = MeshData_HasVertexAttribute_m915D9CD55110DCEBE56E9DBE654D9CC196FDFE88(__this, L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___channel1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FEB2B080187BD8DC7BC64F8D39BD8910C62CC2E)), L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___buffer0))->___m_Length_1);
		int32_t L_9;
		L_9 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11;
		L_11 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___buffer0))->___m_Length_1);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCC178D5BE56C6C185E79192131F152693335504)), L_13, L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_RuntimeMethod_var)));
	}

IL_005f:
	{
		intptr_t L_19 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_20 = ___channel1;
		int32_t L_21 = ___format2;
		int32_t L_22 = ___dim3;
		NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D L_23 = ___buffer0;
		void* L_24;
		L_24 = ((  void* (*) (NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 0));
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE(L_24, NULL);
		MeshData_CopyAttributeIntoPtr_m9B03920F8423FE175BE40BBCFBEE2CAB88D1C27D(L_19, L_20, L_21, L_22, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	MeshData_CopyAttributeInto_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5FDD44731861B730BF2E576A6CDF9324E4ED43A9(_thisAdjusted, ___buffer0, ___channel1, ___format2, ___dim3, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___channel1;
		bool L_1;
		L_1 = MeshData_HasVertexAttribute_m915D9CD55110DCEBE56E9DBE654D9CC196FDFE88(__this, L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___channel1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FEB2B080187BD8DC7BC64F8D39BD8910C62CC2E)), L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___buffer0))->___m_Length_1);
		int32_t L_9;
		L_9 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11;
		L_11 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___buffer0))->___m_Length_1);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCC178D5BE56C6C185E79192131F152693335504)), L_13, L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_RuntimeMethod_var)));
	}

IL_005f:
	{
		intptr_t L_19 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_20 = ___channel1;
		int32_t L_21 = ___format2;
		int32_t L_22 = ___dim3;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_23 = ___buffer0;
		void* L_24;
		L_24 = ((  void* (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 0));
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE(L_24, NULL);
		MeshData_CopyAttributeIntoPtr_m9B03920F8423FE175BE40BBCFBEE2CAB88D1C27D(L_19, L_20, L_21, L_22, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	MeshData_CopyAttributeInto_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mA16D61445C3FD7B212B1D271AD6D5122A849961E(_thisAdjusted, ___buffer0, ___channel1, ___format2, ___dim3, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___channel1;
		bool L_1;
		L_1 = MeshData_HasVertexAttribute_m915D9CD55110DCEBE56E9DBE654D9CC196FDFE88(__this, L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___channel1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FEB2B080187BD8DC7BC64F8D39BD8910C62CC2E)), L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___buffer0))->___m_Length_1);
		int32_t L_9;
		L_9 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11;
		L_11 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___buffer0))->___m_Length_1);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCC178D5BE56C6C185E79192131F152693335504)), L_13, L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_RuntimeMethod_var)));
	}

IL_005f:
	{
		intptr_t L_19 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_20 = ___channel1;
		int32_t L_21 = ___format2;
		int32_t L_22 = ___dim3;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_23 = ___buffer0;
		void* L_24;
		L_24 = ((  void* (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 0));
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE(L_24, NULL);
		MeshData_CopyAttributeIntoPtr_m9B03920F8423FE175BE40BBCFBEE2CAB88D1C27D(L_19, L_20, L_21, L_22, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	MeshData_CopyAttributeInto_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mD4EBC0BC05E5E7213FC3EBBF9F629DA35D70B811(_thisAdjusted, ___buffer0, ___channel1, ___format2, ___dim3, method);
}
// System.Void UnityEngine.Mesh/MeshData::CopyAttributeInto<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_gshared (MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___channel1;
		bool L_1;
		L_1 = MeshData_HasVertexAttribute_m915D9CD55110DCEBE56E9DBE654D9CC196FDFE88(__this, L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___channel1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FEB2B080187BD8DC7BC64F8D39BD8910C62CC2E)), L_5, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___buffer0))->___m_Length_1);
		int32_t L_9;
		L_9 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		V_1 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11;
		L_11 = MeshData_get_vertexCount_mFA6527FC89B88D35130B9C29FA3D5BAF8FB6E265(__this, NULL);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___buffer0))->___m_Length_1);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCC178D5BE56C6C185E79192131F152693335504)), L_13, L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_RuntimeMethod_var)));
	}

IL_005f:
	{
		intptr_t L_19 = (intptr_t)__this->___m_Ptr_0;
		int32_t L_20 = ___channel1;
		int32_t L_21 = ___format2;
		int32_t L_22 = ___dim3;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_23 = ___buffer0;
		void* L_24;
		L_24 = ((  void* (*) (NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 0));
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE(L_24, NULL);
		MeshData_CopyAttributeIntoPtr_m9B03920F8423FE175BE40BBCFBEE2CAB88D1C27D(L_19, L_20, L_21, L_22, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___buffer0, int32_t ___channel1, int32_t ___format2, int32_t ___dim3, const RuntimeMethod* method)
{
	MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshData_tFCD3E8B24DBC948C0FDF0900B918E3FF117369AC*>(__this + _offset);
	MeshData_CopyAttributeInto_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m068243B502B92A3511F9F40DFA767A5E06081DB1(_thisAdjusted, ___buffer0, ___channel1, ___format2, ___dim3, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisRuntimeObject_m367D8F5D10D80B4A1A34D42A5339BAF95A51FE5E_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_0 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_3 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_6 = ___node0;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_23 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_25 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_26 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(20 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<System.Object>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl::AddEventHandler<System.Object>(System.Func`2<T,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedEventRegistrationImpl_AddEventHandler_TisRuntimeObject_m812A2E9219CD61A53B3C98C10FBEA6ECE5853E9C_gshared (Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE* ___addMethod0, Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod1, RuntimeObject* ___handler2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mF9BB023431FF9493F2C22433F0B8C7FA48C3E6BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m59C6E5F0047F0C69B43BB4F0214D2088302ECBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedEventRegistrationImpl_t715BCEFA6A3ABA66759D33A0DA220EA0D632DB4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* V_0 = NULL;
	EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B V_1;
	memset((&V_1), 0, sizeof(V_1));
	Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* V_2 = NULL;
	bool V_3 = false;
	EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_0 = ___removeMethod1;
		NullCheck((Delegate_t*)L_0);
		RuntimeObject* L_1;
		L_1 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline((Delegate_t*)L_0, NULL);
		Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_2 = ___removeMethod1;
		il2cpp_codegen_runtime_class_init_inline(ManagedEventRegistrationImpl_t715BCEFA6A3ABA66759D33A0DA220EA0D632DB4B_il2cpp_TypeInfo_var);
		Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* L_3;
		L_3 = ManagedEventRegistrationImpl_GetEventRegistrationTokenTable_mCC1C56554BB647EDBD6F7989FD8F0D823DBA8BA8(L_1, L_2, NULL);
		V_0 = L_3;
		Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE* L_4 = ___addMethod0;
		RuntimeObject* L_5 = ___handler2;
		NullCheck(L_4);
		EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B L_6;
		L_6 = ((  EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B (*) (Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_6;
		Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* L_7 = V_0;
		V_2 = L_7;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{// begin finally (depth: 1)
				{
					bool L_8 = V_3;
					if (!L_8)
					{
						goto IL_006c;
					}
				}
				{
					Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* L_9 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_9, NULL);
				}

IL_006c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* L_10 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_10, (&V_3), NULL);
				Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* L_11 = V_0;
				RuntimeObject* L_12 = ___handler2;
				NullCheck(L_11);
				bool L_13;
				L_13 = Dictionary_2_TryGetValue_mF9BB023431FF9493F2C22433F0B8C7FA48C3E6BD(L_11, L_12, (&V_4), Dictionary_2_TryGetValue_mF9BB023431FF9493F2C22433F0B8C7FA48C3E6BD_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0049_1;
				}
			}
			{
				EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B L_14 = V_1;
				EventRegistrationTokenList__ctor_m37C3271A7EF7FB1C0137995C752318A6FBF1225D((&V_4), L_14, NULL);
				Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* L_15 = V_0;
				RuntimeObject* L_16 = ___handler2;
				EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C L_17 = V_4;
				NullCheck(L_15);
				Dictionary_2_set_Item_m59C6E5F0047F0C69B43BB4F0214D2088302ECBD7(L_15, L_16, L_17, Dictionary_2_set_Item_m59C6E5F0047F0C69B43BB4F0214D2088302ECBD7_RuntimeMethod_var);
				goto IL_006d;
			}

IL_0049_1:
			{
				EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B L_18 = V_1;
				bool L_19;
				L_19 = EventRegistrationTokenList_Push_m3C14B4F62A1E7AD1D3A9B3014CCBC0C25D2F311F((&V_4), L_18, NULL);
				if (!L_19)
				{
					goto IL_0061_1;
				}
			}
			{
				Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* L_20 = V_0;
				RuntimeObject* L_21 = ___handler2;
				EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C L_22 = V_4;
				NullCheck(L_20);
				Dictionary_2_set_Item_m59C6E5F0047F0C69B43BB4F0214D2088302ECBD7(L_20, L_21, L_22, Dictionary_2_set_Item_m59C6E5F0047F0C69B43BB4F0214D2088302ECBD7_RuntimeMethod_var);
			}

IL_0061_1:
			{
				goto IL_006d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl::RemoveEventHandler<System.Object>(System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedEventRegistrationImpl_RemoveEventHandler_TisRuntimeObject_m754EA6B22547200A0008D4587E598B62E4924004_gshared (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod0, RuntimeObject* ___handler1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5BA9B1814C76B0F303E1A26665C6D64CCA9271B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mF9BB023431FF9493F2C22433F0B8C7FA48C3E6BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedEventRegistrationImpl_t715BCEFA6A3ABA66759D33A0DA220EA0D632DB4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* V_0 = NULL;
	EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B V_1;
	memset((&V_1), 0, sizeof(V_1));
	Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* V_2 = NULL;
	bool V_3 = false;
	EventRegistrationTokenList_t2B404250C277B1746BAA0E028B10FCEFEE3E0E7C V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_0 = ___removeMethod0;
		NullCheck((Delegate_t*)L_0);
		RuntimeObject* L_1;
		L_1 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline((Delegate_t*)L_0, NULL);
		Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_2 = ___removeMethod0;
		il2cpp_codegen_runtime_class_init_inline(ManagedEventRegistrationImpl_t715BCEFA6A3ABA66759D33A0DA220EA0D632DB4B_il2cpp_TypeInfo_var);
		Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* L_3;
		L_3 = ManagedEventRegistrationImpl_GetEventRegistrationTokenTable_mCC1C56554BB647EDBD6F7989FD8F0D823DBA8BA8(L_1, L_2, NULL);
		V_0 = L_3;
		Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* L_4 = V_0;
		V_2 = L_4;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_3;
					if (!L_5)
					{
						goto IL_004e;
					}
				}
				{
					Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* L_6 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_6, NULL);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* L_7 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_7, (&V_3), NULL);
				Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* L_8 = V_0;
				RuntimeObject* L_9 = ___handler1;
				NullCheck(L_8);
				bool L_10;
				L_10 = Dictionary_2_TryGetValue_mF9BB023431FF9493F2C22433F0B8C7FA48C3E6BD(L_8, L_9, (&V_4), Dictionary_2_TryGetValue_mF9BB023431FF9493F2C22433F0B8C7FA48C3E6BD_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_0056;
			}

IL_002b_1:
			{
				bool L_11;
				L_11 = EventRegistrationTokenList_Pop_m57CDDD0FE59FA973C283A06A1F73AF4C2E410FE8((&V_4), (&V_1), NULL);
				if (L_11)
				{
					goto IL_0043_1;
				}
			}
			{
				Dictionary_2_tDC24C472D18C1A4B48E5F32DE9DD41C5BB72A1D4* L_12 = V_0;
				RuntimeObject* L_13 = ___handler1;
				NullCheck(L_12);
				bool L_14;
				L_14 = Dictionary_2_Remove_m5BA9B1814C76B0F303E1A26665C6D64CCA9271B1(L_12, L_13, Dictionary_2_Remove_m5BA9B1814C76B0F303E1A26665C6D64CCA9271B1_RuntimeMethod_var);
			}

IL_0043_1:
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_15 = ___removeMethod0;
		EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B L_16 = V_1;
		NullCheck(L_15);
		Action_1_Invoke_m45D0A38692AC9D6D49A127721F451779033C800F_inline(L_15, L_16, NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::AddEventHandler<System.Object>(System.Func`2<T,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeOrStaticEventRegistrationImpl_AddEventHandler_TisRuntimeObject_mD62069EB751846C4ED7682D08762B8262666CF44_gshared (Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE* ___addMethod0, Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod1, RuntimeObject* ___handler2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_m158118C15E69401385EC5814B51876E39CF2F9D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mCBF93A06F5ECA55FFB77D2EA2144B46C64709E1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303* V_3 = NULL;
	TokenListCount_t52D9E220227BAA2D3E0243CC23EFE1E54ECE5E0C* V_4 = NULL;
	ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* V_5 = NULL;
	ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* V_6 = NULL;
	bool V_7 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_0 = ___removeMethod1;
		il2cpp_codegen_runtime_class_init_inline(NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = NativeOrStaticEventRegistrationImpl_GetInstanceKey_mDDA8C4B81BF9011ED6CC83E1F7CDDCB0B2A9DE04(L_0, NULL);
		V_0 = L_1;
		Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE* L_2 = ___addMethod0;
		RuntimeObject* L_3 = ___handler2;
		NullCheck(L_2);
		EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B L_4;
		L_4 = ((  EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B (*) (Func_2_t1C28D2BFD837EC81FF3046F74030179155D5F3BE*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_4;
		V_2 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			il2cpp_codegen_runtime_class_init_inline(NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var);
			MyReaderWriterLock_t228D12A218942E675CF1B49D299F795BC96E3970* L_5 = ((NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var))->___s_eventCacheRWLock_1;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_5);
			MyReaderWriterLock_AcquireReaderLock_m96E5ECF7E8F7635E7518D8882FE7FA304EC9309D(L_5, (-1), NULL);
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_007c_1:
				{// begin finally (depth: 2)
					il2cpp_codegen_runtime_class_init_inline(NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var);
					MyReaderWriterLock_t228D12A218942E675CF1B49D299F795BC96E3970* L_6 = ((NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var))->___s_eventCacheRWLock_1;
					il2cpp_codegen_memory_barrier();
					NullCheck(L_6);
					MyReaderWriterLock_ReleaseReaderLock_m00DB66CED452771CBBFED2BCD55730C9767F2ADE(L_6, NULL);
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					RuntimeObject* L_7 = V_0;
					Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_8 = ___removeMethod1;
					il2cpp_codegen_runtime_class_init_inline(NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var);
					ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* L_9;
					L_9 = NativeOrStaticEventRegistrationImpl_GetOrCreateEventRegistrationTokenTable_mFB70EEB39CDF1042329D797291E38E596C4B6F33(L_7, L_8, (&V_4), NULL);
					V_5 = L_9;
					ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* L_10 = V_5;
					V_6 = L_10;
					V_7 = (bool)0;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_006e_2:
						{// begin finally (depth: 3)
							{
								bool L_11 = V_7;
								if (!L_11)
								{
									goto IL_0079_2;
								}
							}
							{
								ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* L_12 = V_6;
								Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_12, NULL);
							}

IL_0079_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						{
							ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* L_13 = V_6;
							Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_13, (&V_7), NULL);
							ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* L_14 = V_5;
							RuntimeObject* L_15 = ___handler2;
							NullCheck(L_14);
							RuntimeObject* L_16;
							L_16 = ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mCBF93A06F5ECA55FFB77D2EA2144B46C64709E1E(L_14, L_15, (&V_3), ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mCBF93A06F5ECA55FFB77D2EA2144B46C64709E1E_RuntimeMethod_var);
							if (L_16)
							{
								goto IL_0063_3;
							}
						}
						{
							TokenListCount_t52D9E220227BAA2D3E0243CC23EFE1E54ECE5E0C* L_17 = V_4;
							EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B L_18 = V_1;
							EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303* L_19 = (EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303*)il2cpp_codegen_object_new(EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303_il2cpp_TypeInfo_var);
							NullCheck(L_19);
							EventRegistrationTokenListWithCount__ctor_m3B108FCAE33427CA33DC9312896F0B35B48A105C(L_19, L_17, L_18, NULL);
							V_3 = L_19;
							ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* L_20 = V_5;
							RuntimeObject* L_21 = ___handler2;
							EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303* L_22 = V_3;
							NullCheck(L_20);
							ConditionalWeakTable_2_Add_m158118C15E69401385EC5814B51876E39CF2F9D9(L_20, L_21, L_22, ConditionalWeakTable_2_Add_m158118C15E69401385EC5814B51876E39CF2F9D9_RuntimeMethod_var);
							goto IL_006a_3;
						}

IL_0063_3:
						{
							EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303* L_23 = V_3;
							EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B L_24 = V_1;
							NullCheck(L_23);
							EventRegistrationTokenListWithCount_Push_mF905EB7AC59B50919AC6D043A23AA95E8B59799E(L_23, L_24, NULL);
						}

IL_006a_3:
						{
							V_2 = (bool)1;
							goto IL_007a_2;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_007a_2:
				{
					goto IL_0089_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0089_1:
		{
			goto IL_0098;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{// begin catch(System.Exception)
		{
			bool L_25 = V_2;
			if (L_25)
			{
				goto IL_0096;
			}
		}
		{
			Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_26 = ___removeMethod1;
			EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B L_27 = V_1;
			NullCheck(L_26);
			Action_1_Invoke_m45D0A38692AC9D6D49A127721F451779033C800F_inline(L_26, L_27, NULL);
		}

IL_0096:
		{
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
	}// end catch (depth: 1)

IL_0098:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::RemoveEventHandler<System.Object>(System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeOrStaticEventRegistrationImpl_RemoveEventHandler_TisRuntimeObject_mD1B9EBEFC84FA536B51E0A650F71DF784C067FE6_gshared (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* ___removeMethod0, RuntimeObject* ___handler1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mCBF93A06F5ECA55FFB77D2EA2144B46C64709E1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_m6346F74865E02C6D37564EF494852AA66E953698_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B V_1;
	memset((&V_1), 0, sizeof(V_1));
	TokenListCount_t52D9E220227BAA2D3E0243CC23EFE1E54ECE5E0C* V_2 = NULL;
	ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* V_3 = NULL;
	ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* V_4 = NULL;
	bool V_5 = false;
	EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	{
		Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_0 = ___removeMethod0;
		il2cpp_codegen_runtime_class_init_inline(NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = NativeOrStaticEventRegistrationImpl_GetInstanceKey_mDDA8C4B81BF9011ED6CC83E1F7CDDCB0B2A9DE04(L_0, NULL);
		V_0 = L_1;
		MyReaderWriterLock_t228D12A218942E675CF1B49D299F795BC96E3970* L_2 = ((NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var))->___s_eventCacheRWLock_1;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_2);
		MyReaderWriterLock_AcquireReaderLock_m96E5ECF7E8F7635E7518D8882FE7FA304EC9309D(L_2, (-1), NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006a:
			{// begin finally (depth: 1)
				il2cpp_codegen_runtime_class_init_inline(NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var);
				MyReaderWriterLock_t228D12A218942E675CF1B49D299F795BC96E3970* L_3 = ((NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var))->___s_eventCacheRWLock_1;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_3);
				MyReaderWriterLock_ReleaseReaderLock_m00DB66CED452771CBBFED2BCD55730C9767F2ADE(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_5 = ___removeMethod0;
				il2cpp_codegen_runtime_class_init_inline(NativeOrStaticEventRegistrationImpl_tAC9E5B36D0580765E176634E51A3F62346B05B90_il2cpp_TypeInfo_var);
				ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* L_6;
				L_6 = NativeOrStaticEventRegistrationImpl_GetEventRegistrationTokenTableNoCreate_m0D50B02A53DD9EF9EEBA515347B3CA5992979501(L_4, L_5, (&V_2), NULL);
				V_3 = L_6;
				ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* L_7 = V_3;
				if (L_7)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_007e;
			}

IL_0023_1:
			{
				ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* L_8 = V_3;
				V_4 = L_8;
				V_5 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_005e_1:
					{// begin finally (depth: 2)
						{
							bool L_9 = V_5;
							if (!L_9)
							{
								goto IL_0069_1;
							}
						}
						{
							ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* L_10 = V_4;
							Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_10, NULL);
						}

IL_0069_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* L_11 = V_4;
						Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_11, (&V_5), NULL);
						ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* L_12 = V_3;
						RuntimeObject* L_13 = ___handler1;
						NullCheck(L_12);
						RuntimeObject* L_14;
						L_14 = ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mCBF93A06F5ECA55FFB77D2EA2144B46C64709E1E(L_12, L_13, (&V_6), ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mCBF93A06F5ECA55FFB77D2EA2144B46C64709E1E_RuntimeMethod_var);
						V_7 = L_14;
						EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303* L_15 = V_6;
						if (L_15)
						{
							goto IL_0048_2;
						}
					}
					{
						goto IL_007e;
					}

IL_0048_2:
					{
						EventRegistrationTokenListWithCount_t08BA4BD2F271ACE6EEEE0727790F88EBCE54A303* L_16 = V_6;
						NullCheck(L_16);
						bool L_17;
						L_17 = EventRegistrationTokenListWithCount_Pop_mD9C29E40F98D1A20AAF83702169F1A0CB11E750D(L_16, (&V_1), NULL);
						if (L_17)
						{
							goto IL_005c_2;
						}
					}
					{
						ConditionalWeakTable_2_t41A74963A0EDC80AE123649159914342B542862F* L_18 = V_3;
						RuntimeObject* L_19 = V_7;
						NullCheck(L_18);
						bool L_20;
						L_20 = ConditionalWeakTable_2_Remove_m6346F74865E02C6D37564EF494852AA66E953698(L_18, L_19, ConditionalWeakTable_2_Remove_m6346F74865E02C6D37564EF494852AA66E953698_RuntimeMethod_var);
					}

IL_005c_2:
					{
						goto IL_0077;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
		Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* L_21 = ___removeMethod0;
		EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B L_22 = V_1;
		NullCheck(L_21);
		Action_1_Invoke_m45D0A38692AC9D6D49A127721F451779033C800F_inline(L_21, L_22, NULL);
	}

IL_007e:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* DynamicMetaObject_get_Expression_mC74F5FF9AC58E0F938C2C15CA0B32CE999EEA7F4_inline (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->___U3CExpressionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* DynamicMetaObject_get_Restrictions_mC56A7B16011CB2E190394A71B37293BDAC8CBF68_inline (DynamicMetaObject_tD1405F56818181F9ED29E520D40F2837B73EF825* __this, const RuntimeMethod* method) 
{
	{
		BindingRestrictions_t82F6450C15BA76194E37B20305C3C2932527C424* L_0 = __this->___U3CRestrictionsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_target_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m45D0A38692AC9D6D49A127721F451779033C800F_gshared_inline (Action_1_t2F6697C5DA7073FCAE212D3900E184AF5BA9E722* __this, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
