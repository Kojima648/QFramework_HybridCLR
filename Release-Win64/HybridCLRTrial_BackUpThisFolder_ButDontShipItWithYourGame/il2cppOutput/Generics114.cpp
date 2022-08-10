#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t815A43BFBA64EC1F9F92AD042622E80EED65712E;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Linq.Parallel.IMergeHelper`1<System.Object>
struct IMergeHelper_1_tD96BC21322464CF4004711232BBDEDE870CCF10C;
// System.Linq.Parallel.IPartitionedStreamRecipient`1<System.Object>
struct IPartitionedStreamRecipient_1_t33D2138B3295895B4A4EE38D34E84DDF27BEF7BB;
// System.Linq.Parallel.MergeExecutor`1<System.Object>
struct MergeExecutor_1_tD307C9BBD6A15E75C721DD8ABD839BF4734E1E11;
// System.Linq.ParallelQuery`1<System.Object>
struct ParallelQuery_1_t9A81970143722DA28CEDDC7EB28DC418F1AEE946;
// System.Linq.Parallel.QueryOperator`1<System.Object>
struct QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F;
// System.Linq.Parallel.QueryResults`1<System.Object>
struct QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4;
// System.Linq.Parallel.Shared`1<System.Boolean>
struct Shared_1_t4A7F7F801F4CB32195ED0BE3DB6A4B71184FE41E;
// System.Linq.Parallel.ZipQueryOperator`3/ZipQueryOperatorResults<System.Object,System.Object,System.Object>
struct ZipQueryOperatorResults_t9C905AED72B6403A30EEE42B72FF61F270549C82;
// System.Linq.Parallel.ZipQueryOperator`3<System.Object,System.Object,System.Object>
struct ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661;
// System.Linq.Parallel.QueryOperatorEnumerator`2<System.Object,System.Int32>[]
struct QueryOperatorEnumerator_2U5BU5D_t5E9E1933B91B85DE7863691CE6BA3B5537F18B30;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Linq.Parallel.CancellationState
struct CancellationState_t124B5961B993AEBFCA44C8D40BDE22CFF387F774;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Linq.ParallelQuery
struct ParallelQuery_tD84EF99CDF13A9348713139D06318E3AF88E7751;
// System.String
struct String_t;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Parallel.MergeExecutor`1<System.Object>
struct MergeExecutor_1_tD307C9BBD6A15E75C721DD8ABD839BF4734E1E11  : public RuntimeObject
{
	// System.Linq.Parallel.IMergeHelper`1<TInputOutput> System.Linq.Parallel.MergeExecutor`1::_mergeHelper
	RuntimeObject* ____mergeHelper_0;
};

// System.Linq.Parallel.PartitionedStreamMerger`1<System.Object>
struct PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795  : public RuntimeObject
{
	// System.Boolean System.Linq.Parallel.PartitionedStreamMerger`1::_forEffectMerge
	bool ____forEffectMerge_0;
	// System.Linq.ParallelMergeOptions System.Linq.Parallel.PartitionedStreamMerger`1::_mergeOptions
	int32_t ____mergeOptions_1;
	// System.Boolean System.Linq.Parallel.PartitionedStreamMerger`1::_isOrdered
	bool ____isOrdered_2;
	// System.Linq.Parallel.MergeExecutor`1<TOutput> System.Linq.Parallel.PartitionedStreamMerger`1::_mergeExecutor
	MergeExecutor_1_tD307C9BBD6A15E75C721DD8ABD839BF4734E1E11* ____mergeExecutor_3;
	// System.Threading.Tasks.TaskScheduler System.Linq.Parallel.PartitionedStreamMerger`1::_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ____taskScheduler_4;
	// System.Int32 System.Linq.Parallel.PartitionedStreamMerger`1::_queryId
	int32_t ____queryId_5;
	// System.Linq.Parallel.CancellationState System.Linq.Parallel.PartitionedStreamMerger`1::_cancellationState
	CancellationState_t124B5961B993AEBFCA44C8D40BDE22CFF387F774* ____cancellationState_6;
};

// System.Linq.Parallel.PartitionedStream`2<System.Object,System.Int32>
struct PartitionedStream_2_t622B7AB16D5343677384EC3F9071045DBD6D0C6C  : public RuntimeObject
{
	// System.Linq.Parallel.QueryOperatorEnumerator`2<TElement,TKey>[] System.Linq.Parallel.PartitionedStream`2::_partitions
	QueryOperatorEnumerator_2U5BU5D_t5E9E1933B91B85DE7863691CE6BA3B5537F18B30* ____partitions_0;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.Parallel.PartitionedStream`2::_keyComparer
	RuntimeObject* ____keyComparer_1;
	// System.Linq.Parallel.OrdinalIndexState System.Linq.Parallel.PartitionedStream`2::_indexState
	uint8_t ____indexState_2;
};

// System.Linq.Parallel.QueryResults`1<System.Object>
struct QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;
};

struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t815A43BFBA64EC1F9F92AD042622E80EED65712E* ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_4;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_5;
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

// System.Linq.Parallel.ListQueryResults`1<System.Object>
struct ListQueryResults_1_t789381CAA6ED25156904DBD45EF23870A71CBCB6  : public QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4
{
	// System.Collections.Generic.IList`1<T> System.Linq.Parallel.ListQueryResults`1::_source
	RuntimeObject* ____source_0;
	// System.Int32 System.Linq.Parallel.ListQueryResults`1::_partitionCount
	int32_t ____partitionCount_1;
	// System.Boolean System.Linq.Parallel.ListQueryResults`1::_useStriping
	bool ____useStriping_2;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Linq.ParallelExecutionMode>
struct Nullable_1_tBF55B56C0E6E232EA57213F6FC241B54176E01A5 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Linq.ParallelMergeOptions>
struct Nullable_1_t704BA716A6DED8B22F18803DD0BA3238D4FD3A5F 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Linq.Parallel.Wrapper`1<System.Object>
struct Wrapper_1_t3B4A3B11061C9979ED785CD72DC4083FBE81B9E2 
{
	// T System.Linq.Parallel.Wrapper`1::Value
	RuntimeObject* ___Value_0;
};

// System.Linq.Parallel.ZipQueryOperator`3/ZipQueryOperatorResults<System.Object,System.Object,System.Object>
struct ZipQueryOperatorResults_t9C905AED72B6403A30EEE42B72FF61F270549C82  : public QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4
{
	// System.Linq.Parallel.QueryResults`1<TLeftInput> System.Linq.Parallel.ZipQueryOperator`3/ZipQueryOperatorResults::_leftChildResults
	QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* ____leftChildResults_0;
	// System.Linq.Parallel.QueryResults`1<TRightInput> System.Linq.Parallel.ZipQueryOperator`3/ZipQueryOperatorResults::_rightChildResults
	QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* ____rightChildResults_1;
	// System.Func`3<TLeftInput,TRightInput,TOutput> System.Linq.Parallel.ZipQueryOperator`3/ZipQueryOperatorResults::_resultSelector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ____resultSelector_2;
	// System.Int32 System.Linq.Parallel.ZipQueryOperator`3/ZipQueryOperatorResults::_count
	int32_t ____count_3;
	// System.Int32 System.Linq.Parallel.ZipQueryOperator`3/ZipQueryOperatorResults::_partitionCount
	int32_t ____partitionCount_4;
	// System.Boolean System.Linq.Parallel.ZipQueryOperator`3/ZipQueryOperatorResults::_preferStriping
	bool ____preferStriping_5;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// System.Linq.Parallel.ZipQueryOperator`3/<AsSequentialQuery>d__9<System.Object,System.Object,System.Object>
struct U3CAsSequentialQueryU3Ed__9_t011E2BD49955B906B61AF9476FF524A9DD14D691  : public RuntimeObject
{
	// System.Int32 System.Linq.Parallel.ZipQueryOperator`3/<AsSequentialQuery>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TOutput System.Linq.Parallel.ZipQueryOperator`3/<AsSequentialQuery>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 System.Linq.Parallel.ZipQueryOperator`3/<AsSequentialQuery>d__9::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Linq.Parallel.ZipQueryOperator`3<TLeftInput,TRightInput,TOutput> System.Linq.Parallel.ZipQueryOperator`3/<AsSequentialQuery>d__9::<>4__this
	ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* ___U3CU3E4__this_3;
	// System.Threading.CancellationToken System.Linq.Parallel.ZipQueryOperator`3/<AsSequentialQuery>d__9::token
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token_4;
	// System.Threading.CancellationToken System.Linq.Parallel.ZipQueryOperator`3/<AsSequentialQuery>d__9::<>3__token
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___U3CU3E3__token_5;
	// System.Collections.Generic.IEnumerator`1<TLeftInput> System.Linq.Parallel.ZipQueryOperator`3/<AsSequentialQuery>d__9::<leftEnumerator>5__2
	RuntimeObject* ___U3CleftEnumeratorU3E5__2_6;
	// System.Collections.Generic.IEnumerator`1<TRightInput> System.Linq.Parallel.ZipQueryOperator`3/<AsSequentialQuery>d__9::<rightEnumerator>5__3
	RuntimeObject* ___U3CrightEnumeratorU3E5__3_7;
};

// System.Linq.Parallel.CancellationState
struct CancellationState_t124B5961B993AEBFCA44C8D40BDE22CFF387F774  : public RuntimeObject
{
	// System.Threading.CancellationTokenSource System.Linq.Parallel.CancellationState::InternalCancellationTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___InternalCancellationTokenSource_0;
	// System.Threading.CancellationToken System.Linq.Parallel.CancellationState::ExternalCancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___ExternalCancellationToken_1;
	// System.Threading.CancellationTokenSource System.Linq.Parallel.CancellationState::MergedCancellationTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___MergedCancellationTokenSource_2;
	// System.Linq.Parallel.Shared`1<System.Boolean> System.Linq.Parallel.CancellationState::TopLevelDisposedFlag
	Shared_1_t4A7F7F801F4CB32195ED0BE3DB6A4B71184FE41E* ___TopLevelDisposedFlag_3;
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

// System.Linq.Parallel.QuerySettings
struct QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 
{
	// System.Threading.Tasks.TaskScheduler System.Linq.Parallel.QuerySettings::_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ____taskScheduler_0;
	// System.Nullable`1<System.Int32> System.Linq.Parallel.QuerySettings::_degreeOfParallelism
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____degreeOfParallelism_1;
	// System.Linq.Parallel.CancellationState System.Linq.Parallel.QuerySettings::_cancellationState
	CancellationState_t124B5961B993AEBFCA44C8D40BDE22CFF387F774* ____cancellationState_2;
	// System.Nullable`1<System.Linq.ParallelExecutionMode> System.Linq.Parallel.QuerySettings::_executionMode
	Nullable_1_tBF55B56C0E6E232EA57213F6FC241B54176E01A5 ____executionMode_3;
	// System.Nullable`1<System.Linq.ParallelMergeOptions> System.Linq.Parallel.QuerySettings::_mergeOptions
	Nullable_1_t704BA716A6DED8B22F18803DD0BA3238D4FD3A5F ____mergeOptions_4;
	// System.Int32 System.Linq.Parallel.QuerySettings::_queryId
	int32_t ____queryId_5;
};
// Native definition for P/Invoke marshalling of System.Linq.Parallel.QuerySettings
struct QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178_marshaled_pinvoke
{
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ____taskScheduler_0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____degreeOfParallelism_1;
	CancellationState_t124B5961B993AEBFCA44C8D40BDE22CFF387F774* ____cancellationState_2;
	Nullable_1_tBF55B56C0E6E232EA57213F6FC241B54176E01A5 ____executionMode_3;
	Nullable_1_t704BA716A6DED8B22F18803DD0BA3238D4FD3A5F ____mergeOptions_4;
	int32_t ____queryId_5;
};
// Native definition for COM marshalling of System.Linq.Parallel.QuerySettings
struct QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178_marshaled_com
{
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ____taskScheduler_0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____degreeOfParallelism_1;
	CancellationState_t124B5961B993AEBFCA44C8D40BDE22CFF387F774* ____cancellationState_2;
	Nullable_1_tBF55B56C0E6E232EA57213F6FC241B54176E01A5 ____executionMode_3;
	Nullable_1_t704BA716A6DED8B22F18803DD0BA3238D4FD3A5F ____mergeOptions_4;
	int32_t ____queryId_5;
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

// System.Linq.ParallelQuery
struct ParallelQuery_tD84EF99CDF13A9348713139D06318E3AF88E7751  : public RuntimeObject
{
	// System.Linq.Parallel.QuerySettings System.Linq.ParallelQuery::_specifiedSettings
	QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 ____specifiedSettings_0;
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};

// System.Linq.ParallelQuery`1<System.Object>
struct ParallelQuery_1_t9A81970143722DA28CEDDC7EB28DC418F1AEE946  : public ParallelQuery_tD84EF99CDF13A9348713139D06318E3AF88E7751
{
};

// System.Linq.Parallel.QueryOperator`1<System.Object>
struct QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F  : public ParallelQuery_1_t9A81970143722DA28CEDDC7EB28DC418F1AEE946
{
	// System.Boolean System.Linq.Parallel.QueryOperator`1::_outputOrdered
	bool ____outputOrdered_1;
};

// System.Linq.Parallel.ZipQueryOperator`3<System.Object,System.Object,System.Object>
struct ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661  : public QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F
{
	// System.Func`3<TLeftInput,TRightInput,TOutput> System.Linq.Parallel.ZipQueryOperator`3::_resultSelector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ____resultSelector_2;
	// System.Linq.Parallel.QueryOperator`1<TLeftInput> System.Linq.Parallel.ZipQueryOperator`3::_leftChild
	QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* ____leftChild_3;
	// System.Linq.Parallel.QueryOperator`1<TRightInput> System.Linq.Parallel.ZipQueryOperator`3::_rightChild
	QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* ____rightChild_4;
	// System.Boolean System.Linq.Parallel.ZipQueryOperator`3::_prematureMergeLeft
	bool ____prematureMergeLeft_5;
	// System.Boolean System.Linq.Parallel.ZipQueryOperator`3::_prematureMergeRight
	bool ____prematureMergeRight_6;
	// System.Boolean System.Linq.Parallel.ZipQueryOperator`3::_limitsParallelism
	bool ____limitsParallelism_7;
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


// System.Void System.Linq.Parallel.Wrapper`1<System.Object>::.ctor(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Wrapper_1__ctor_mBA14775240D6A2167920D8B2412FC4052E0FE93F_gshared_inline (Wrapper_1_t3B4A3B11061C9979ED785CD72DC4083FBE81B9E2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;

// System.Void System.Linq.Parallel.Wrapper`1<System.Object>::.ctor(T)
inline void Wrapper_1__ctor_mBA14775240D6A2167920D8B2412FC4052E0FE93F_inline (Wrapper_1_t3B4A3B11061C9979ED785CD72DC4083FBE81B9E2* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	((  void (*) (Wrapper_1_t3B4A3B11061C9979ED785CD72DC4083FBE81B9E2*, RuntimeObject*, const RuntimeMethod*))Wrapper_1__ctor_mBA14775240D6A2167920D8B2412FC4052E0FE93F_gshared_inline)(__this, ___value0, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Linq.Parallel.QuerySettings System.Linq.ParallelQuery::get_SpecifiedQuerySettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 ParallelQuery_get_SpecifiedQuerySettings_m60A2C5238B978FDF6F9AAA08A2991BCE5316E1B6_inline (ParallelQuery_tD84EF99CDF13A9348713139D06318E3AF88E7751* __this, const RuntimeMethod* method) ;
// System.Linq.Parallel.QuerySettings System.Linq.Parallel.QuerySettings::Merge(System.Linq.Parallel.QuerySettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 QuerySettings_Merge_mB5C70A5EADD97294048A55CB141C4D71D71A67F6 (QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178* __this, QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 ___settings20, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int32> System.Linq.Parallel.QuerySettings::get_DegreeOfParallelism()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 QuerySettings_get_DegreeOfParallelism_mCD782220F0DBD29348919B656290BF87E8CDC62E_inline (QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Threading.Tasks.TaskScheduler System.Linq.Parallel.QuerySettings::get_TaskScheduler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* QuerySettings_get_TaskScheduler_m93E46EBF0EA1A659C2C3F8200CAF3ED1A463272C_inline (QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178* __this, const RuntimeMethod* method) ;
// System.Linq.Parallel.CancellationState System.Linq.Parallel.QuerySettings::get_CancellationState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationState_t124B5961B993AEBFCA44C8D40BDE22CFF387F774* QuerySettings_get_CancellationState_m057BC085492E668926ADA137E1D9281EBC10E84B_inline (QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178* __this, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Parallel.QuerySettings::get_QueryId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QuerySettings_get_QueryId_m3323B4658C1FED6C8FBF3BE9B7B8A488015D287E_inline (QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Parallel.Wrapper`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper_1__ctor_mBA14775240D6A2167920D8B2412FC4052E0FE93F_gshared (Wrapper_1_t3B4A3B11061C9979ED785CD72DC4083FBE81B9E2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___Value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Value_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Wrapper_1__ctor_mBA14775240D6A2167920D8B2412FC4052E0FE93F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	Wrapper_1_t3B4A3B11061C9979ED785CD72DC4083FBE81B9E2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Wrapper_1_t3B4A3B11061C9979ED785CD72DC4083FBE81B9E2*>(__this + _offset);
	Wrapper_1__ctor_mBA14775240D6A2167920D8B2412FC4052E0FE93F_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Parallel.ZipQueryOperator`3/ZipQueryOperatorResults<System.Object,System.Object,System.Object>::.ctor(System.Linq.Parallel.QueryResults`1<TLeftInput>,System.Linq.Parallel.QueryResults`1<TRightInput>,System.Func`3<TLeftInput,TRightInput,TOutput>,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipQueryOperatorResults__ctor_mEF07A3976B5F44C6598F386A45381374648B1438_gshared (ZipQueryOperatorResults_t9C905AED72B6403A30EEE42B72FF61F270549C82* __this, QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* ___leftChildResults0, QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* ___rightChildResults1, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___resultSelector2, int32_t ___partitionCount3, bool ___preferStriping4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((  void (*) (QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* L_0 = ___leftChildResults0;
		__this->____leftChildResults_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leftChildResults_0), (void*)L_0);
		QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* L_1 = ___rightChildResults1;
		__this->____rightChildResults_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rightChildResults_1), (void*)L_1);
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_2 = ___resultSelector2;
		__this->____resultSelector_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____resultSelector_2), (void*)L_2);
		int32_t L_3 = ___partitionCount3;
		__this->____partitionCount_4 = L_3;
		bool L_4 = ___preferStriping4;
		__this->____preferStriping_5 = L_4;
		QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* L_5 = (QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*)__this->____leftChildResults_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ((  int32_t (*) (QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* L_7 = (QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*)__this->____rightChildResults_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ((  int32_t (*) (QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_6, L_8, NULL);
		__this->____count_3 = L_9;
		return;
	}
}
// System.Int32 System.Linq.Parallel.ZipQueryOperator`3/ZipQueryOperatorResults<System.Object,System.Object,System.Object>::get_ElementsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipQueryOperatorResults_get_ElementsCount_m83180E342AC4946C5C585D35379E49208CA9E65E_gshared (ZipQueryOperatorResults_t9C905AED72B6403A30EEE42B72FF61F270549C82* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
// System.Boolean System.Linq.Parallel.ZipQueryOperator`3/ZipQueryOperatorResults<System.Object,System.Object,System.Object>::get_IsIndexible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipQueryOperatorResults_get_IsIndexible_mB7730E66C6FC5C320D839239B9FF818CA93C6B33_gshared (ZipQueryOperatorResults_t9C905AED72B6403A30EEE42B72FF61F270549C82* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// TOutput System.Linq.Parallel.ZipQueryOperator`3/ZipQueryOperatorResults<System.Object,System.Object,System.Object>::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipQueryOperatorResults_GetElement_m9E1830B33B5DCC3138C45F4BA8397BD9C477446B_gshared (ZipQueryOperatorResults_t9C905AED72B6403A30EEE42B72FF61F270549C82* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_0 = (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*)__this->____resultSelector_2;
		QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* L_1 = (QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*)__this->____leftChildResults_0;
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(20 /* T System.Linq.Parallel.QueryResults`1<System.Object>::GetElement(System.Int32) */, L_1, L_2);
		QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* L_4 = (QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*)__this->____rightChildResults_1;
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(20 /* T System.Linq.Parallel.QueryResults`1<System.Object>::GetElement(System.Int32) */, L_4, L_5);
		NullCheck(L_0);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_0, L_3, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_7;
	}
}
// System.Void System.Linq.Parallel.ZipQueryOperator`3/ZipQueryOperatorResults<System.Object,System.Object,System.Object>::GivePartitionedStream(System.Linq.Parallel.IPartitionedStreamRecipient`1<TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipQueryOperatorResults_GivePartitionedStream_mE75B4CAA4997F4AF24A4FD96AECE0AF097285448_gshared (ZipQueryOperatorResults_t9C905AED72B6403A30EEE42B72FF61F270549C82* __this, RuntimeObject* ___recipient0, const RuntimeMethod* method) 
{
	PartitionedStream_2_t622B7AB16D5343677384EC3F9071045DBD6D0C6C* V_0 = NULL;
	{
		int32_t L_0 = (int32_t)__this->____partitionCount_4;
		bool L_1 = (bool)__this->____preferStriping_5;
		PartitionedStream_2_t622B7AB16D5343677384EC3F9071045DBD6D0C6C* L_2;
		L_2 = ((  PartitionedStream_2_t622B7AB16D5343677384EC3F9071045DBD6D0C6C* (*) (RuntimeObject*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((RuntimeObject*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		RuntimeObject* L_3 = ___recipient0;
		PartitionedStream_2_t622B7AB16D5343677384EC3F9071045DBD6D0C6C* L_4 = V_0;
		NullCheck(L_3);
		GenericInterfaceActionInvoker1< PartitionedStream_2_t622B7AB16D5343677384EC3F9071045DBD6D0C6C* >::Invoke(il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_3, L_4);
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
// System.Void System.Linq.Parallel.ZipQueryOperator`3<System.Object,System.Object,System.Object>::.ctor(System.Linq.ParallelQuery`1<TLeftInput>,System.Linq.ParallelQuery`1<TRightInput>,System.Func`3<TLeftInput,TRightInput,TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipQueryOperator_3__ctor_m8511C96B30693E7CC30B48C29465206BA0CEDD83_gshared (ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* __this, ParallelQuery_1_t9A81970143722DA28CEDDC7EB28DC418F1AEE946* ___leftChildSource0, ParallelQuery_1_t9A81970143722DA28CEDDC7EB28DC418F1AEE946* ___rightChildSource1, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___resultSelector2, const RuntimeMethod* method) 
{
	{
		ParallelQuery_1_t9A81970143722DA28CEDDC7EB28DC418F1AEE946* L_0 = ___leftChildSource0;
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_1;
		L_1 = ((  QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		ParallelQuery_1_t9A81970143722DA28CEDDC7EB28DC418F1AEE946* L_2 = ___rightChildSource1;
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_3;
		L_3 = ((  QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((RuntimeObject*)L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_4 = ___resultSelector2;
		((  void (*) (ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661*, QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*, QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_1, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
// System.Void System.Linq.Parallel.ZipQueryOperator`3<System.Object,System.Object,System.Object>::.ctor(System.Linq.Parallel.QueryOperator`1<TLeftInput>,System.Linq.Parallel.QueryOperator`1<TRightInput>,System.Func`3<TLeftInput,TRightInput,TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipQueryOperator_3__ctor_m3CD0D855B2DC809F81E41F631369A2890AAC73F9_gshared (ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* __this, QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* ___left0, QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* ___right1, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___resultSelector2, const RuntimeMethod* method) 
{
	QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	uint8_t V_2 = 0;
	ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* G_B2_0 = NULL;
	ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* G_B3_1 = NULL;
	ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* G_B5_0 = NULL;
	ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* G_B4_0 = NULL;
	ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* G_B8_0 = NULL;
	ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* G_B7_0 = NULL;
	ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* G_B6_0 = NULL;
	int32_t G_B9_0 = 0;
	ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* G_B9_1 = NULL;
	{
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_0 = ___left0;
		NullCheck((ParallelQuery_tD84EF99CDF13A9348713139D06318E3AF88E7751*)L_0);
		QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 L_1;
		L_1 = ParallelQuery_get_SpecifiedQuerySettings_m60A2C5238B978FDF6F9AAA08A2991BCE5316E1B6_inline((ParallelQuery_tD84EF99CDF13A9348713139D06318E3AF88E7751*)L_0, NULL);
		V_0 = L_1;
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_2 = ___right1;
		NullCheck((ParallelQuery_tD84EF99CDF13A9348713139D06318E3AF88E7751*)L_2);
		QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 L_3;
		L_3 = ParallelQuery_get_SpecifiedQuerySettings_m60A2C5238B978FDF6F9AAA08A2991BCE5316E1B6_inline((ParallelQuery_tD84EF99CDF13A9348713139D06318E3AF88E7751*)L_2, NULL);
		QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 L_4;
		L_4 = QuerySettings_Merge_mB5C70A5EADD97294048A55CB141C4D71D71A67F6((&V_0), L_3, NULL);
		((  void (*) (QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*, QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*)__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_5 = ___left0;
		__this->____leftChild_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leftChild_3), (void*)L_5);
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_6 = ___right1;
		__this->____rightChild_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rightChild_4), (void*)L_6);
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_7 = ___resultSelector2;
		__this->____resultSelector_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____resultSelector_2), (void*)L_7);
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_8 = (QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*)__this->____leftChild_3;
		NullCheck(L_8);
		bool L_9;
		L_9 = ((  bool (*) (QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		G_B1_0 = __this;
		if (L_9)
		{
			G_B2_0 = __this;
			goto IL_004a;
		}
	}
	{
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_10 = (QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*)__this->____rightChild_4;
		NullCheck(L_10);
		bool L_11;
		L_11 = ((  bool (*) (QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		G_B3_0 = ((int32_t)(L_11));
		G_B3_1 = G_B1_0;
		goto IL_004b;
	}

IL_004a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_004b:
	{
		NullCheck(G_B3_1);
		((QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*)G_B3_1)->____outputOrdered_1 = (bool)G_B3_0;
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_12 = (QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*)__this->____leftChild_3;
		NullCheck(L_12);
		uint8_t L_13;
		L_13 = VirtualFuncInvoker0< uint8_t >::Invoke(14 /* System.Linq.Parallel.OrdinalIndexState System.Linq.Parallel.QueryOperator`1<System.Object>::get_OrdinalIndexState() */, L_12);
		V_1 = L_13;
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_14 = (QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*)__this->____rightChild_4;
		NullCheck(L_14);
		uint8_t L_15;
		L_15 = VirtualFuncInvoker0< uint8_t >::Invoke(14 /* System.Linq.Parallel.OrdinalIndexState System.Linq.Parallel.QueryOperator`1<System.Object>::get_OrdinalIndexState() */, L_14);
		V_2 = L_15;
		uint8_t L_16 = V_1;
		__this->____prematureMergeLeft_5 = (bool)((!(((uint32_t)L_16) <= ((uint32_t)0)))? 1 : 0);
		uint8_t L_17 = V_2;
		__this->____prematureMergeRight_6 = (bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0);
		bool L_18 = (bool)__this->____prematureMergeLeft_5;
		G_B4_0 = __this;
		if (!L_18)
		{
			G_B5_0 = __this;
			goto IL_0089;
		}
	}
	{
		uint8_t L_19 = V_1;
		G_B5_0 = G_B4_0;
		if ((!(((uint32_t)L_19) == ((uint32_t)3))))
		{
			G_B8_0 = G_B4_0;
			goto IL_009d;
		}
	}

IL_0089:
	{
		bool L_20 = (bool)__this->____prematureMergeRight_6;
		G_B6_0 = G_B5_0;
		if (!L_20)
		{
			G_B7_0 = G_B5_0;
			goto IL_009a;
		}
	}
	{
		uint8_t L_21 = V_2;
		G_B9_0 = ((((int32_t)((((int32_t)L_21) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B9_1 = G_B6_0;
		goto IL_009e;
	}

IL_009a:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_009e:
	{
		NullCheck(G_B9_1);
		G_B9_1->____limitsParallelism_7 = (bool)G_B9_0;
		return;
	}
}
// System.Linq.Parallel.QueryResults`1<TOutput> System.Linq.Parallel.ZipQueryOperator`3<System.Object,System.Object,System.Object>::Open(System.Linq.Parallel.QuerySettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* ZipQueryOperator_3_Open_m1F4A14428E9EFBAD40D30298AF9036D407A2F454_gshared (ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* __this, QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 ___settings0, bool ___preferStriping1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* V_0 = NULL;
	QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* V_1 = NULL;
	int32_t V_2 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795* V_4 = NULL;
	PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795* V_5 = NULL;
	{
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_0 = (QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*)__this->____leftChild_3;
		QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 L_1 = ___settings0;
		bool L_2 = ___preferStriping1;
		NullCheck(L_0);
		QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* L_3;
		L_3 = VirtualFuncInvoker2< QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*, QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178, bool >::Invoke(10 /* System.Linq.Parallel.QueryResults`1<TOutput> System.Linq.Parallel.QueryOperator`1<System.Object>::Open(System.Linq.Parallel.QuerySettings,System.Boolean) */, L_0, L_1, L_2);
		V_0 = L_3;
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_4 = (QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*)__this->____rightChild_4;
		QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 L_5 = ___settings0;
		bool L_6 = ___preferStriping1;
		NullCheck(L_4);
		QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* L_7;
		L_7 = VirtualFuncInvoker2< QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*, QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178, bool >::Invoke(10 /* System.Linq.Parallel.QueryResults`1<TOutput> System.Linq.Parallel.QueryOperator`1<System.Object>::Open(System.Linq.Parallel.QuerySettings,System.Boolean) */, L_4, L_5, L_6);
		V_1 = L_7;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_8;
		L_8 = QuerySettings_get_DegreeOfParallelism_mCD782220F0DBD29348919B656290BF87E8CDC62E_inline((&___settings0), NULL);
		V_3 = L_8;
		int32_t L_9;
		L_9 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_3), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		V_2 = L_9;
		bool L_10 = (bool)__this->____prematureMergeLeft_5;
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_11;
		L_11 = QuerySettings_get_TaskScheduler_m93E46EBF0EA1A659C2C3F8200CAF3ED1A463272C_inline((&___settings0), NULL);
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_12 = (QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*)__this->____leftChild_3;
		NullCheck(L_12);
		bool L_13;
		L_13 = ((  bool (*) (QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CancellationState_t124B5961B993AEBFCA44C8D40BDE22CFF387F774* L_14;
		L_14 = QuerySettings_get_CancellationState_m057BC085492E668926ADA137E1D9281EBC10E84B_inline((&___settings0), NULL);
		int32_t L_15;
		L_15 = QuerySettings_get_QueryId_m3323B4658C1FED6C8FBF3BE9B7B8A488015D287E_inline((&___settings0), NULL);
		PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795* L_16 = (PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_16);
		((  void (*) (PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795*, bool, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, bool, CancellationState_t124B5961B993AEBFCA44C8D40BDE22CFF387F774*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_16, (bool)0, (int32_t)3, L_11, L_13, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_4 = L_16;
		QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* L_17 = V_0;
		PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795* L_18 = V_4;
		NullCheck(L_17);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(18 /* System.Void System.Linq.Parallel.QueryResults`1<System.Object>::GivePartitionedStream(System.Linq.Parallel.IPartitionedStreamRecipient`1<T>) */, L_17, (RuntimeObject*)L_18);
		PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795* L_19 = V_4;
		NullCheck(L_19);
		MergeExecutor_1_tD307C9BBD6A15E75C721DD8ABD839BF4734E1E11* L_20;
		L_20 = ((  MergeExecutor_1_tD307C9BBD6A15E75C721DD8ABD839BF4734E1E11* (*) (PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		NullCheck(L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (MergeExecutor_1_tD307C9BBD6A15E75C721DD8ABD839BF4734E1E11*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		int32_t L_22 = V_2;
		bool L_23 = ___preferStriping1;
		ListQueryResults_1_t789381CAA6ED25156904DBD45EF23870A71CBCB6* L_24 = (ListQueryResults_1_t789381CAA6ED25156904DBD45EF23870A71CBCB6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		NullCheck(L_24);
		((  void (*) (ListQueryResults_1_t789381CAA6ED25156904DBD45EF23870A71CBCB6*, RuntimeObject*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(L_24, (RuntimeObject*)L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = (QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*)L_24;
	}

IL_0079:
	{
		bool L_25 = (bool)__this->____prematureMergeRight_6;
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_26;
		L_26 = QuerySettings_get_TaskScheduler_m93E46EBF0EA1A659C2C3F8200CAF3ED1A463272C_inline((&___settings0), NULL);
		QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F* L_27 = (QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*)__this->____rightChild_4;
		NullCheck(L_27);
		bool L_28;
		L_28 = ((  bool (*) (QueryOperator_1_t6730244DDCA5F58174DE590BD52FF3D22A10598F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		CancellationState_t124B5961B993AEBFCA44C8D40BDE22CFF387F774* L_29;
		L_29 = QuerySettings_get_CancellationState_m057BC085492E668926ADA137E1D9281EBC10E84B_inline((&___settings0), NULL);
		int32_t L_30;
		L_30 = QuerySettings_get_QueryId_m3323B4658C1FED6C8FBF3BE9B7B8A488015D287E_inline((&___settings0), NULL);
		PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795* L_31 = (PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_31);
		((  void (*) (PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795*, bool, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, bool, CancellationState_t124B5961B993AEBFCA44C8D40BDE22CFF387F774*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(L_31, (bool)0, (int32_t)3, L_26, L_28, L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		V_5 = L_31;
		QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* L_32 = V_1;
		PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795* L_33 = V_5;
		NullCheck(L_32);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(18 /* System.Void System.Linq.Parallel.QueryResults`1<System.Object>::GivePartitionedStream(System.Linq.Parallel.IPartitionedStreamRecipient`1<T>) */, L_32, (RuntimeObject*)L_33);
		PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795* L_34 = V_5;
		NullCheck(L_34);
		MergeExecutor_1_tD307C9BBD6A15E75C721DD8ABD839BF4734E1E11* L_35;
		L_35 = ((  MergeExecutor_1_tD307C9BBD6A15E75C721DD8ABD839BF4734E1E11* (*) (PartitionedStreamMerger_1_tE92B8FD725B2D62D7C951D56E7852F45CB519795*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)))(L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_35);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36;
		L_36 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (MergeExecutor_1_tD307C9BBD6A15E75C721DD8ABD839BF4734E1E11*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_37 = V_2;
		bool L_38 = ___preferStriping1;
		ListQueryResults_1_t789381CAA6ED25156904DBD45EF23870A71CBCB6* L_39 = (ListQueryResults_1_t789381CAA6ED25156904DBD45EF23870A71CBCB6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 34));
		NullCheck(L_39);
		((  void (*) (ListQueryResults_1_t789381CAA6ED25156904DBD45EF23870A71CBCB6*, RuntimeObject*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)))(L_39, (RuntimeObject*)L_36, L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_1 = (QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*)L_39;
	}

IL_00c6:
	{
		QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* L_40 = V_0;
		QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4* L_41 = V_1;
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_42 = (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*)__this->____resultSelector_2;
		int32_t L_43 = V_2;
		bool L_44 = ___preferStriping1;
		ZipQueryOperatorResults_t9C905AED72B6403A30EEE42B72FF61F270549C82* L_45 = (ZipQueryOperatorResults_t9C905AED72B6403A30EEE42B72FF61F270549C82*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 36));
		NullCheck(L_45);
		((  void (*) (ZipQueryOperatorResults_t9C905AED72B6403A30EEE42B72FF61F270549C82*, QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*, QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(L_45, L_40, L_41, L_42, L_43, L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (QueryResults_1_tEE857F632F3B7411CE2C47861DA9430C264184E4*)L_45;
	}
}
// System.Collections.Generic.IEnumerable`1<TOutput> System.Linq.Parallel.ZipQueryOperator`3<System.Object,System.Object,System.Object>::AsSequentialQuery(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipQueryOperator_3_AsSequentialQuery_mB643A252F66B86B74BF075C120F8881464908433_gshared (ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token0, const RuntimeMethod* method) 
{
	{
		U3CAsSequentialQueryU3Ed__9_t011E2BD49955B906B61AF9476FF524A9DD14D691* L_0 = (U3CAsSequentialQueryU3Ed__9_t011E2BD49955B906B61AF9476FF524A9DD14D691*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 38));
		NullCheck(L_0);
		((  void (*) (U3CAsSequentialQueryU3Ed__9_t011E2BD49955B906B61AF9476FF524A9DD14D691*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_0, ((int32_t)-2), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		U3CAsSequentialQueryU3Ed__9_t011E2BD49955B906B61AF9476FF524A9DD14D691* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CAsSequentialQueryU3Ed__9_t011E2BD49955B906B61AF9476FF524A9DD14D691* L_2 = L_1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___token0;
		NullCheck(L_2);
		L_2->___U3CU3E3__token_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_2->___U3CU3E3__token_5))->____source_0), (void*)NULL);
		return (RuntimeObject*)L_2;
	}
}
// System.Linq.Parallel.OrdinalIndexState System.Linq.Parallel.ZipQueryOperator`3<System.Object,System.Object,System.Object>::get_OrdinalIndexState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ZipQueryOperator_3_get_OrdinalIndexState_mC7B6E1FD175DA92E4A1537FE3962146166155857_gshared (ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* __this, const RuntimeMethod* method) 
{
	{
		return (uint8_t)(0);
	}
}
// System.Boolean System.Linq.Parallel.ZipQueryOperator`3<System.Object,System.Object,System.Object>::get_LimitsParallelism()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipQueryOperator_3_get_LimitsParallelism_m378F3BF648A1E9C48B642350B5F496A63D9CDD0C_gshared (ZipQueryOperator_3_t952F12F5D3520707918769D3B4710FFB76991661* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->____limitsParallelism_7;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 ParallelQuery_get_SpecifiedQuerySettings_m60A2C5238B978FDF6F9AAA08A2991BCE5316E1B6_inline (ParallelQuery_tD84EF99CDF13A9348713139D06318E3AF88E7751* __this, const RuntimeMethod* method) 
{
	{
		QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178 L_0 = __this->____specifiedSettings_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 QuerySettings_get_DegreeOfParallelism_mCD782220F0DBD29348919B656290BF87E8CDC62E_inline (QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->____degreeOfParallelism_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* QuerySettings_get_TaskScheduler_m93E46EBF0EA1A659C2C3F8200CAF3ED1A463272C_inline (QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178* __this, const RuntimeMethod* method) 
{
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = __this->____taskScheduler_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationState_t124B5961B993AEBFCA44C8D40BDE22CFF387F774* QuerySettings_get_CancellationState_m057BC085492E668926ADA137E1D9281EBC10E84B_inline (QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178* __this, const RuntimeMethod* method) 
{
	{
		CancellationState_t124B5961B993AEBFCA44C8D40BDE22CFF387F774* L_0 = __this->____cancellationState_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QuerySettings_get_QueryId_m3323B4658C1FED6C8FBF3BE9B7B8A488015D287E_inline (QuerySettings_tBF6FBD1A7A9376162D2CD90F83B218A983FF1178* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____queryId_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Wrapper_1__ctor_mBA14775240D6A2167920D8B2412FC4052E0FE93F_gshared_inline (Wrapper_1_t3B4A3B11061C9979ED785CD72DC4083FBE81B9E2* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___Value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Value_0), (void*)L_0);
		return;
	}
}
