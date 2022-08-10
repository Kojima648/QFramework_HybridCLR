
#include "Interpreter.h"

#include <cmath>

#include "codegen/il2cpp-codegen-il2cpp.h"
#include "vm/Object.h"
#include "vm/Class.h"
#include "vm/ClassInlines.h"
#include "vm/Array.h"
#include "vm/Image.h"
#include "vm/Exception.h"
#include "vm/Thread.h"
#include "vm/Runtime.h"
#include "metadata/GenericMetadata.h"

#include "Instruction.h"
#include "MethodBridge.h"
#include "InstrinctDef.h"
#include "MemoryUtil.h"
#include "../metadata/MetadataModule.h"
#include "InterpreterModule.h"

using namespace hybridclr::metadata;

namespace hybridclr
{
namespace interpreter
{

#pragma region memory

#define LOCAL_ALLOC(size) interpFrameGroup.AllocLoc(size)

#pragma endregion

#pragma region arith

#define CHECK_ADD_OVERFLOW(a,b) \
(int32_t)(b) >= 0 ? (int32_t)(INT32_MAX) - (int32_t)(b) < (int32_t)(a) ? -1 : 0	\
: (int32_t)(INT32_MIN) - (int32_t)(b) > (int32_t)(a) ? +1 : 0

#define CHECK_SUB_OVERFLOW(a,b) \
(int32_t)(b) < 0 ? (int32_t)(INT32_MAX) + (int32_t)(b) < (int32_t)(a) ? -1 : 0	\
: (int32_t)(INT32_MIN) + (int32_t)(b) > (int32_t)(a) ? +1 : 0

#define CHECK_ADD_OVERFLOW_UN(a,b) \
(uint32_t)(UINT32_MAX) - (uint32_t)(b) < (uint32_t)(a) ? -1 : 0

#define CHECK_SUB_OVERFLOW_UN(a,b) \
(uint32_t)(a) < (uint32_t)(b) ? -1 : 0

#define CHECK_ADD_OVERFLOW64(a,b) \
(int64_t)(b) >= 0 ? (int64_t)(INT64_MAX) - (int64_t)(b) < (int64_t)(a) ? -1 : 0	\
: (int64_t)(INT64_MIN) - (int64_t)(b) > (int64_t)(a) ? +1 : 0

#define CHECK_SUB_OVERFLOW64(a,b) \
(int64_t)(b) < 0 ? (int64_t)(INT64_MAX) + (int64_t)(b) < (int64_t)(a) ? -1 : 0	\
: (int64_t)(INT64_MIN) + (int64_t)(b) > (int64_t)(a) ? +1 : 0

#define CHECK_ADD_OVERFLOW64_UN(a,b) \
(uint64_t)(UINT64_MAX) - (uint64_t)(b) < (uint64_t)(a) ? -1 : 0

#define CHECK_SUB_OVERFLOW64_UN(a,b) \
(uint64_t)(a) < (uint64_t)(b) ? -1 : 0

#define CHECK_ADD_OVERFLOW_NAT(a,b) CHECK_ADD_OVERFLOW64(a,b)
#define CHECK_ADD_OVERFLOW_NAT_UN(a,b) CHECK_ADD_OVERFLOW64_UN(a,b)

	/* Resolves to TRUE if the operands would overflow */
#define CHECK_MUL_OVERFLOW(a,b) \
((int32_t)(a) == 0) || ((int32_t)(b) == 0) ? 0 : \
(((int32_t)(a) > 0) && ((int32_t)(b) == -1)) ? 0 : \
(((int32_t)(a) < 0) && ((int32_t)(b) == -1)) ? (a == INT32_MIN) : \
(((int32_t)(a) > 0) && ((int32_t)(b) > 0)) ? (int32_t)(a) > ((INT32_MAX) / (int32_t)(b)) : \
(((int32_t)(a) > 0) && ((int32_t)(b) < 0)) ? (int32_t)(a) > ((INT32_MIN) / (int32_t)(b)) : \
(((int32_t)(a) < 0) && ((int32_t)(b) > 0)) ? (int32_t)(a) < ((INT32_MIN) / (int32_t)(b)) : \
(int32_t)(a) < ((INT32_MAX) / (int32_t)(b))

#define CHECK_MUL_OVERFLOW_UN(a,b) \
((uint32_t)(a) == 0) || ((uint32_t)(b) == 0) ? 0 : \
(uint32_t)(b) > ((UINT32_MAX) / (uint32_t)(a))

#define CHECK_MUL_OVERFLOW64(a,b) \
((int64_t)(a) == 0) || ((int64_t)(b) == 0) ? 0 : \
(((int64_t)(a) > 0) && ((int64_t)(b) == -1)) ? 0 : \
(((int64_t)(a) < 0) && ((int64_t)(b) == -1)) ? (a == INT64_MIN) : \
(((int64_t)(a) > 0) && ((int64_t)(b) > 0)) ? (int64_t)(a) > ((INT64_MAX) / (int64_t)(b)) : \
(((int64_t)(a) > 0) && ((int64_t)(b) < 0)) ? (int64_t)(a) > ((INT64_MIN) / (int64_t)(b)) : \
(((int64_t)(a) < 0) && ((int64_t)(b) > 0)) ? (int64_t)(a) < ((INT64_MIN) / (int64_t)(b)) : \
(int64_t)(a) < ((INT64_MAX) / (int64_t)(b))

#define CHECK_MUL_OVERFLOW64_UN(a,b) \
((uint64_t)(a) == 0) || ((uint64_t)(b) == 0) ? 0 : \
(uint64_t)(b) > ((UINT64_MAX) / (uint64_t)(a))

	inline bool CheckConvertOverflow_i4_i1(int32_t x)
	{
		return ((x < INT8_MIN) || (x > INT8_MAX));
	}

	inline bool CheckConvertOverflow_i4_u1(int32_t x)
	{
		return (uint32_t)x > UINT8_MAX;
	}

	inline bool CheckConvertOverflow_i4_i2(int32_t x)
	{
		return ((x < INT16_MIN) || (x > INT16_MAX));
	}

	inline bool CheckConvertOverflow_i4_u2(int32_t x)
	{
		return (uint32_t)x > UINT16_MAX;
	}

	inline bool CheckConvertOverflow_i4_i4(int32_t x)
	{
		return false;
	}

	inline bool CheckConvertOverflow_i4_u4(int32_t x)
	{
		return x < 0;
	}

	inline bool CheckConvertOverflow_i4_i8(int32_t x)
	{
		return false;
	}

	inline bool CheckConvertOverflow_i4_u8(int32_t x)
	{
		return  x < 0;
	}

	inline bool CheckConvertOverflow_u4_i1(uint32_t x)
	{
		return  x > INT8_MAX;
	}

	inline bool CheckConvertOverflow_u4_u1(uint32_t x)
	{
		return  x > UINT8_MAX;
	}

	inline bool CheckConvertOverflow_u4_i2(uint32_t x)
	{
		return x > INT16_MAX;
	}

	inline bool CheckConvertOverflow_u4_u2(uint32_t x)
	{
		return  x > UINT16_MAX;
	}

	inline bool CheckConvertOverflow_u4_i4(uint32_t x)
	{
		return x > INT32_MAX;
	}

	inline bool CheckConvertOverflow_u4_u4(uint32_t x)
	{
		return false;
	}

	inline bool CheckConvertOverflow_u4_i8(uint32_t x)
	{
		return false;
	}

	inline bool CheckConvertOverflow_u4_u8(uint32_t x)
	{
		return false;
	}

	inline bool CheckConvertOverflow_i8_i1(int64_t x)
	{
		return ((x < INT8_MIN) || (x > INT8_MAX));
	}

	inline bool CheckConvertOverflow_i8_u1(int64_t x)
	{
		return (uint64_t)x > UINT8_MAX;
	}

	inline bool CheckConvertOverflow_i8_i2(int64_t x)
	{
		return ((x < INT16_MIN) || (x > INT16_MAX));
	}

	inline bool CheckConvertOverflow_i8_u2(int64_t x)
	{
		return (uint64_t)x > UINT16_MAX;
	}

	inline bool CheckConvertOverflow_i8_i4(int64_t x)
	{
		return ((x < INT32_MIN) || (x > INT32_MAX));
	}

	inline bool CheckConvertOverflow_i8_u4(int64_t x)
	{
		return (uint64_t)x > UINT32_MAX;
	}

	inline bool CheckConvertOverflow_i8_i8(int64_t x)
	{
		return false;
	}

	inline bool CheckConvertOverflow_i8_u8(int64_t x)
	{
		return x < 0;
	}

	inline bool CheckConvertOverflow_u8_i1(uint64_t x)
	{
		return x > INT8_MAX;
	}

	inline bool CheckConvertOverflow_u8_u1(uint64_t x)
	{
		return  x > UINT8_MAX;
	}

	inline bool CheckConvertOverflow_u8_i2(uint64_t x)
	{
		return x > INT16_MAX;
	}

	inline bool CheckConvertOverflow_u8_u2(uint64_t x)
	{
		return  x > UINT16_MAX;
	}

	inline bool CheckConvertOverflow_u8_i4(uint64_t x)
	{
		return x > INT32_MAX;
	}

	inline bool CheckConvertOverflow_u8_u4(uint64_t x)
	{
		return x > UINT32_MAX;
	}

	inline bool CheckConvertOverflow_u8_i8(uint64_t x)
	{
		return x > INT64_MAX;
	}

	inline bool CheckConvertOverflow_u8_u8(uint64_t x)
	{
		return false;
	}

	inline bool CheckConvertOverflow_f4_i1(float x)
	{
		return ((x < INT8_MIN) || (x > INT8_MAX)) || isnan(x);
	}

	inline bool CheckConvertOverflow_f4_u1(float x)
	{
		return truncf(x) < 0 || truncf(x) > UINT8_MAX || isnan(x);
	}

	inline bool CheckConvertOverflow_f4_i2(float x)
	{
		return truncf(x) < INT16_MIN || truncf(x) > INT16_MAX || isnan(x);
	}

	inline bool CheckConvertOverflow_f4_u2(float x)
	{
		return truncf(x) < 0 || truncf(x) > UINT16_MAX || isnan(x);
	}

	inline bool CheckConvertOverflow_f4_i4(float x)
	{
		return truncf(x) < INT32_MIN || truncf(x) > INT32_MAX || isnan(x);
	}

	inline bool CheckConvertOverflow_f4_u4(float x)
	{
		return truncf(x) < 0 || truncf(x) > UINT32_MAX || isnan(x);
	}

	inline bool CheckConvertOverflow_f4_i8(float x)
	{
		return truncf(x) < INT64_MIN || truncf(x) > INT64_MAX || isnan(x);
	}

	inline bool CheckConvertOverflow_f4_u8(float x)
	{
		return truncf(x) < 0 || truncf(x) > UINT64_MAX || isnan(x);
	}

	inline bool CheckConvertOverflow_f8_i1(double x)
	{
		return ((x < INT8_MIN) || (x > INT8_MAX)) || isnan(x);
	}

	inline bool CheckConvertOverflow_f8_u1(double x)
	{
		return trunc(x) < 0 || trunc(x) > UINT8_MAX || isnan(x);
	}

	inline bool CheckConvertOverflow_f8_i2(double x)
	{
		return trunc(x) < INT16_MIN || trunc(x) > INT16_MAX || isnan(x);
	}

	inline bool CheckConvertOverflow_f8_u2(double x)
	{
		return trunc(x) < 0 || trunc(x) > UINT16_MAX || isnan(x);
	}

	inline bool CheckConvertOverflow_f8_i4(double x)
	{
		return trunc(x) < INT32_MIN || trunc(x) > INT32_MAX || isnan(x);
	}

	inline bool CheckConvertOverflow_f8_u4(double x)
	{
		return trunc(x) < 0 || trunc(x) > UINT32_MAX || isnan(x);
	}

	inline bool CheckConvertOverflow_f8_i8(double x)
	{
		return trunc(x) < INT64_MIN || trunc(x) > INT64_MAX || isnan(x);
	}

	inline bool CheckConvertOverflow_f8_u8(double x)
	{
		return trunc(x) < 0 || trunc(x) > UINT64_MAX || isnan(x);
	}

	inline int32_t HiDiv(int32_t a, int32_t b)
	{
		if (b == 0)
		{
			il2cpp::vm::Exception::RaiseDivideByZeroException();
		}
		else if (a == kIl2CppInt32Min && b == -1)
		{
			il2cpp::vm::Exception::RaiseOverflowException();
		}
		return a / b;
	}

	inline int64_t HiDiv(int64_t a, int64_t b)
	{
		if (b == 0)
		{
			il2cpp::vm::Exception::RaiseDivideByZeroException();
		}
		else if (a == kIl2CppInt64Min && b == -1)
		{
			il2cpp::vm::Exception::RaiseOverflowException();
		}
		return a / b;
	}

	inline float HiDiv(float a, float b)
	{
		return a / b;
	}

	inline double HiDiv(double a, double b)
	{
		return a / b;
	}

	inline int32_t HiMulUn(int32_t a, int32_t b)
	{
		return (uint32_t)a * (uint32_t)b;
	}

	inline int64_t HiMulUn(int64_t a, int64_t b)
	{
		return (uint64_t)a * (uint64_t)b;
	}

	inline int32_t HiDivUn(int32_t a, int32_t b)
	{
		if (b == 0)
		{
			il2cpp::vm::Exception::RaiseDivideByZeroException();
		}
		return (uint32_t)a / (uint32_t)b;
	}

	inline int64_t HiDivUn(int64_t a, int64_t b)
	{
		if (b == 0)
		{
			il2cpp::vm::Exception::RaiseDivideByZeroException();
		}
		return (uint64_t)a / (uint64_t)b;
	}

	inline float HiRem(float a, float b)
	{
		return std::fmod(a, b);
	}

	inline double HiRem(double a, double b)
	{
		return std::fmod(a, b);
	}

	inline int32_t HiRem(int32_t a, int32_t b)
	{
		if (b == 0)
		{
			il2cpp::vm::Exception::RaiseDivideByZeroException();
		}
		else if (a == kIl2CppInt32Min && b == -1)
		{
			il2cpp::vm::Exception::RaiseOverflowException();
		}
		return a % b;
	}

	inline int64_t HiRem(int64_t a, int64_t b)
	{
		if (b == 0)
		{
			il2cpp::vm::Exception::RaiseDivideByZeroException();
		}
		else if (a == kIl2CppInt64Min && b == -1)
		{
			il2cpp::vm::Exception::RaiseOverflowException();
		}
		return a % b;
	}

	inline uint32_t HiRemUn(int32_t a, int32_t b)
	{
		if (b == 0)
		{
			il2cpp::vm::Exception::RaiseDivideByZeroException();
		}
		return (uint32_t)a % (uint32_t)b;
	}

	inline uint64_t HiRemUn(int64_t a, int64_t b)
	{
		if (b == 0)
		{
			il2cpp::vm::Exception::RaiseDivideByZeroException();
		}
		return (uint64_t)a % (uint64_t)b;
	}

	inline uint32_t HiShrUn(int32_t a, int64_t b)
	{
		return (uint32_t)a >> b;
	}

	inline uint32_t HiShrUn(int32_t a, int32_t b)
	{
		return (uint32_t)a >> b;
	}

	inline uint64_t HiShrUn(int64_t a, int32_t b)
	{
		return (uint64_t)a >> b;
	}

	inline uint64_t HiShrUn(int64_t a, int64_t b)
	{
		return (uint64_t)a >> b;
	}


	inline void HiCheckFinite(float x)
	{
		if (std::isinf(x) || std::isnan(x))
		{
			il2cpp::vm::Exception::RaiseOverflowException();
		}
	}

	inline void HiCheckFinite(double x)
	{
		if (std::isinf(x) || std::isnan(x))
		{
			il2cpp::vm::Exception::RaiseOverflowException();
		}
	}



#define DefCompare(cmp, op) template<typename T> bool Compare##cmp(T a, T b) { return a op b; }
#define DefCompareUn(cmp, op) inline bool Compare##cmp(int32_t a, int32_t b) { return (uint32_t)a op (uint32_t)b; } \
inline bool Compare##cmp(int64_t a, int64_t b) { return (uint64_t)a op (uint64_t)b; } \
inline bool Compare##cmp(float a, float b) { return a op b; } \
inline bool Compare##cmp(double a, double b) { return a op b; }

	DefCompare(Ceq, == );
	DefCompare(Cne, != );
	DefCompare(Cgt, > );
	DefCompare(Cge, >= );
	DefCompare(Clt, < );
	DefCompare(Cle, <= );

	DefCompareUn(CneUn, != );
	DefCompareUn(CgtUn, > );
	DefCompareUn(CgeUn, >= );
	DefCompareUn(CltUn, < );
	DefCompareUn(CleUn, <= );

#pragma endregion

#pragma region object

	inline void INIT_CLASS(Il2CppClass* klass)
	{
		il2cpp::vm::ClassInlines::InitFromCodegen(klass);
	}

	inline void CHECK_NOT_NULL_THROW(const void* ptr)
	{
		if (!ptr)
		{
			il2cpp::vm::Exception::RaiseNullReferenceException();
		}
	}

#define CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(ARR, INDEX) CHECK_NOT_NULL_THROW(ARR); \
if (ARR->max_length <= (il2cpp_array_size_t)INDEX) { \
	il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetIndexOutOfRangeException()); \
}

	inline void CHECK_TYPE_MATCH_ELSE_THROW(Il2CppClass* klass1, Il2CppClass* klass2)
	{
		if (klass1 != klass2)
		{
			il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetArrayTypeMismatchException());
		}
	}

	inline void CheckArrayElementTypeMatch(Il2CppClass* arrKlass, Il2CppClass* eleKlass)
	{
		if (il2cpp::vm::Class::GetElementClass(arrKlass) != eleKlass)
		{
			il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetArrayTypeMismatchException());
		}
	}

	inline void CheckArrayElementTypeCompatible(Il2CppArray* arr, Il2CppObject* ele)
	{
		if (ele && !il2cpp::vm::Class::IsAssignableFrom(arr->klass->element_class, ele->klass))
		{
			il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetArrayTypeMismatchException());
		}
	}

	inline MethodInfo* GET_OBJECT_VIRTUAL_METHOD(Il2CppObject* obj, const MethodInfo* method)
	{
		CHECK_NOT_NULL_THROW(obj);
		const MethodInfo* result;
		if (hybridclr::metadata::IsVirtualMethod(method->flags))
		{
			if (hybridclr::metadata::IsInterface(method->klass->flags))
			{
				result = il2cpp_codegen_get_interface_invoke_data(method->slot, obj, method->klass).method;
			}
			else
			{
				result = il2cpp_codegen_get_virtual_invoke_data(method->slot, obj).method;
			}
			IL2CPP_ASSERT(!method->genericMethod || method->is_inflated);
			if (method->genericMethod && method->genericMethod->context.method_inst/* && method->genericMethod*/) // means it's genericInstance method 或generic method
			{
				result = GetGenericVirtualMethod(result, method);
			}
		}
		else
		{
			result = method;
		}
		return const_cast<MethodInfo*>(result);
	}

#define GET_OBJECT_INTERFACE_METHOD(obj, intfKlass, slot) (MethodInfo*)nullptr

	inline void* HiUnbox(Il2CppObject* obj, Il2CppClass* klass)
	{
		if (il2cpp::vm::Class::IsNullable(klass))
		{
			if (!obj)
			{
				return nullptr;
			}
			klass = il2cpp::vm::Class::GetNullableArgument(klass);
		}
		return UnBox(obj, klass);
	}

	inline void HiUnboxAny2StackObject(Il2CppObject* obj, Il2CppClass* klass, void* data)
	{
		if (il2cpp::vm::Class::IsNullable(klass))
		{
#if HYBRIDCLR_UNITY_2021_OR_NEW
			// il2cpp modify argument meaning in 2021
			UnBoxNullable(obj, klass, data);
#else
			UnBoxNullable(obj, klass->element_class, data);
#endif
		}
		else
		{
			std::memmove(data, UnBox(obj, klass), klass->instance_size - sizeof(Il2CppObject));
			ExpandLocationData2StackDataByType(data, klass->byval_arg.type);
		}
	}

	inline void HiCastClass(Il2CppObject* obj, Il2CppClass* klass)
	{
		if (obj != nullptr && !il2cpp::vm::Class::IsAssignableFrom(klass, obj->klass))
		{
			il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidCastException("cast fail"), nullptr);
		}
	}

	inline Il2CppTypedRef MAKE_TYPEDREFERENCE(Il2CppClass* klazz, void* ptr)
	{
		return Il2CppTypedRef{ &klazz->byval_arg, ptr, klazz };
	}

	inline void* RefAnyType(Il2CppTypedRef ref)
	{
		return (void*)ref.type;
	}

	inline void* RefAnyValue(Il2CppTypedRef ref, Il2CppClass* klass)
	{
		if (klass != ref.klass)
		{
			il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidCastException(klass->name));
		}
		return ref.value;
	}

#define MAX_DIMENSION  10

	inline Il2CppArray* NewMdArray(Il2CppClass* fullArrKlass, StackObject* lengths, StackObject* lowerBounds)
	{
		il2cpp_array_size_t arrLengths[MAX_DIMENSION];
		il2cpp_array_size_t arrLowerBounds[MAX_DIMENSION];

		switch (fullArrKlass->rank)
		{
		case 1:
		{
			arrLengths[0] = lengths[0].i32;
			if (lowerBounds)
			{
				arrLowerBounds[0] = lowerBounds[0].i32;
			}
			break;
		}
		case 2:
		{
			arrLengths[0] = lengths[0].i32;
			arrLengths[1] = lengths[1].i32;
			if (lowerBounds)
			{
				arrLowerBounds[0] = lowerBounds[0].i32;
				arrLowerBounds[1] = lowerBounds[1].i32;
			}
			break;
		}
		default:
		{
			for (uint8_t i = 0; i < fullArrKlass->rank; i++)
			{
				arrLengths[i] = lengths[i].i32;
				if (lowerBounds)
				{
					arrLowerBounds[i] = lowerBounds[i].i32;
				}
			}
			break;
		}
		}
		return il2cpp::vm::Array::NewFull(fullArrKlass, arrLengths, lowerBounds ? arrLowerBounds : nullptr);
	}

	inline void* GetMdArrayElementAddress(Il2CppArray* arr, StackObject* indexs)
	{
		CHECK_NOT_NULL_THROW(arr);
		Il2CppClass* klass = arr->klass;
		uint32_t eleSize = klass->element_size;
		Il2CppArrayBounds* bounds = arr->bounds;
		char* arrayStart = il2cpp::vm::Array::GetFirstElementAddress(arr);
		switch (klass->rank)
		{
		case 1:
		{
			Il2CppArrayBounds& bound = bounds[0];
			il2cpp_array_size_t idx = (il2cpp_array_size_t)(indexs[0].i32 - bound.lower_bound);
			if (idx < bound.length)
			{
				return arrayStart + (idx * eleSize);
			}
			else
			{
				il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetIndexOutOfRangeException());
			}
			break;
		}
		case 2:
		{
			Il2CppArrayBounds& bound0 = bounds[0];
			il2cpp_array_size_t idx0 = (il2cpp_array_size_t)(indexs[0].i32 - bound0.lower_bound);
			Il2CppArrayBounds& bound1 = bounds[1];
			il2cpp_array_size_t idx1 = (il2cpp_array_size_t)(indexs[1].i32 - bound1.lower_bound);
			if (idx0 < bound0.length && idx1 < bound1.length)
			{
				return arrayStart + ((idx0 * bound1.length) + idx1) * eleSize;
			}
			else
			{
				il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetIndexOutOfRangeException());
			}
			break;
		}
		case 3:
		{
			Il2CppArrayBounds& bound0 = bounds[0];
			il2cpp_array_size_t idx0 = (il2cpp_array_size_t)(indexs[0].i32 - bound0.lower_bound);
			Il2CppArrayBounds& bound1 = bounds[1];
			il2cpp_array_size_t idx1 = (il2cpp_array_size_t)(indexs[1].i32 - bound1.lower_bound);
			Il2CppArrayBounds& bound2 = bounds[2];
			il2cpp_array_size_t idx2 = (il2cpp_array_size_t)(indexs[2].i32 - bound2.lower_bound);
			if (idx0 < bound0.length && idx1 < bound1.length && idx2 < bound2.length)
			{
				return arrayStart + ((idx0 * bound1.length + idx1) * bound2.length + idx2) * eleSize;
			}
			else
			{
				il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetIndexOutOfRangeException());
			}
			break;
		}
		default:
		{
			IL2CPP_ASSERT(klass->rank > 0);
			il2cpp_array_size_t totalIdx = 0;
			for (uint8_t i = 0; i < klass->rank; i++)
			{
				Il2CppArrayBounds& bound = bounds[i];
				il2cpp_array_size_t idx = (il2cpp_array_size_t)(indexs[i].i32 - bound.lower_bound);
				if (idx < bound.length)
				{
					totalIdx = totalIdx * bound.length + idx;
				}
				else
				{
					il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetIndexOutOfRangeException());
				}
			}
			return arrayStart + totalIdx * eleSize;
		}
		}
	}

	template<typename T> void GetMdArrayElementExpandToStack(Il2CppArray* arr, StackObject* indexs, void* value)
	{
		CHECK_NOT_NULL_THROW(arr);
		*(int32_t*)value = *(T*)GetMdArrayElementAddress(arr, indexs);
	}

	template<typename T> void GetMdArrayElementCopyToStack(Il2CppArray* arr, StackObject* indexs, void* value)
	{
		CHECK_NOT_NULL_THROW(arr);
		*(T*)value = *(T*)GetMdArrayElementAddress(arr, indexs);
	}

	inline void GetMdArrayElementBySize(Il2CppArray* arr, StackObject* indexs, void* value)
	{
		CopyBySize(value, GetMdArrayElementAddress(arr, indexs), arr->klass->element_size);
	}

	inline void SetMdArrayElement(Il2CppArray* arr, StackObject* indexs, void* value)
	{
		CopyBySize(GetMdArrayElementAddress(arr, indexs), value, arr->klass->element_size);
	}

#pragma endregion

#pragma region nullable


	inline void InitNullableValueType(void* nullableValueTypeObj, void* data, Il2CppClass* klass)
	{
		uint32_t size = klass->castClass->instance_size - sizeof(Il2CppObject);
		std::memmove(GetNulllableDataOffset(nullableValueTypeObj, size), data, size);
		*GetNulllableHasValueOffset(nullableValueTypeObj, size) = 1;
	}

	inline void NewNullableValueType(void* nullableValueTypeObj, void* data, Il2CppClass* klass)
	{
		InitNullableValueType(nullableValueTypeObj, data, klass);
	}

	inline bool IsNullableHasValue(void* nullableValueObj, Il2CppClass* klass)
	{
		uint32_t size = klass->castClass->instance_size - sizeof(Il2CppObject);
		return *(GetNulllableHasValueOffset(nullableValueObj, size));
	}

	/*
	inline void GetNullableValueOrDefault(void* dst, void* nullableValueObj, Il2CppClass* klass)
	{
		uint32_t size = klass->castClass->instance_size - sizeof(Il2CppObject);
		if (*GetNulllableHasValueOffset(nullableValueObj, size))
		{
			std::memmove(dst, nullableValueObj, size);
		}
		else
		{
			std::memset(dst, 0, size);
		}
	}

	inline void GetNullableValueOrDefault(void* dst, void* nullableValueObj, void* defaultData, Il2CppClass* klass)
	{
		uint32_t size = klass->castClass->instance_size - sizeof(Il2CppObject);
		std::memmove(dst, *GetNulllableHasValueOffset(nullableValueObj, size) ? nullableValueObj : defaultData, size);
	}

	inline void GetNullableValue(void* dst, void* nullableValueObj, Il2CppClass* klass)
	{
		uint32_t size = klass->castClass->instance_size - sizeof(Il2CppObject);
		if (*GetNulllableHasValueOffset(nullableValueObj, size))
		{
			std::memmove(dst, nullableValueObj, size);
		}
		else
		{
			il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("Nullable object must have a value."));
		}
	}
	*/
	// ExpandLocationData2StackDataByType
	
	inline void GetNullableValueOrDefault2StackDataByType(void* dst, void* nullableValueObj, Il2CppClass* klass)
	{
		Il2CppClass* eleClass = klass->castClass;
		uint32_t size = eleClass->instance_size - sizeof(Il2CppObject);
		bool notNull = *GetNulllableHasValueOffset(nullableValueObj, size);
		void* srcData = GetNulllableDataOffset(nullableValueObj, size);

	LabelGet:
		IL2CPP_ASSERT(IS_CLASS_VALUE_TYPE(eleClass));
		switch (eleClass->byval_arg.type)
		{
		case IL2CPP_TYPE_BOOLEAN:
		{
			*(int32_t*)dst = notNull ? *(uint8_t*)srcData : 0;
			break;
		}
		case IL2CPP_TYPE_I1:
		{
			*(int32_t*)dst = notNull ? *(int8_t*)srcData : 0;
			break;
		}
		case IL2CPP_TYPE_U1:
		{
			*(int32_t*)dst = notNull ? *(uint8_t*)srcData : 0;
			break;
		}
		case IL2CPP_TYPE_I2:
		{
			*(int32_t*)dst = notNull ? *(int16_t*)srcData : 0;
			break;
		}
		case IL2CPP_TYPE_U2:
		case IL2CPP_TYPE_CHAR:
		{
			*(int32_t*)dst = notNull ? *(uint16_t*)srcData : 0;
			break;
		}
		case IL2CPP_TYPE_I4:
		case IL2CPP_TYPE_U4:
		{
			*(int32_t*)dst = notNull ? *(int32_t*)srcData : 0;
			break;
		}
		case IL2CPP_TYPE_I8:
		case IL2CPP_TYPE_U8:
		{
			*(int64_t*)dst = notNull ? *(int64_t*)srcData : 0;
			break;
		}
		case IL2CPP_TYPE_R4:
		{
			*(float*)dst = notNull ? *(float*)srcData : 0;
			break;
		}
		case IL2CPP_TYPE_R8:
		{
			*(double*)dst = notNull ? *(double*)srcData : 0.0;
			break;
		}
		case IL2CPP_TYPE_I:
		case IL2CPP_TYPE_U:
		{
#if HYBRIDCLR_ARCH_64
			* (int64_t*)dst = notNull ? *(int64_t*)srcData : 0;
#else 
			* (int32_t*)dst = notNull ? *(int32_t*)srcData : 0;
#endif
			break;
		}
		case IL2CPP_TYPE_VALUETYPE:
		case IL2CPP_TYPE_GENERICINST:
		{
			if (eleClass->enumtype)
			{
				eleClass = eleClass->castClass;
				goto LabelGet;
			}
			if (notNull)
			{
				std::memmove(dst, nullableValueObj, size);
			}
			else
			{
				std::memset(dst, 0, size);
			}
			break;
		}
		default:
		{
			RaiseExecutionEngineException("GetNullableValueOrDefault2StackDataByType");
		}
		}
	}

	inline void GetNullableValueOrDefault2StackDataByType(void* dst, void* nullableValueObj, void* defaultData, Il2CppClass* klass)
	{
		Il2CppClass* eleClass = klass->castClass;
		uint32_t size = eleClass->instance_size - sizeof(Il2CppObject);
		void* srcData;
		bool notNull = *GetNulllableHasValueOffset(nullableValueObj, size);
		if (notNull)
		{
			srcData = GetNulllableDataOffset(nullableValueObj, size);
		}
		else
		{
			if (defaultData == nullptr)
			{
				il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetInvalidOperationException("Nullable object must have a value."));
			}
			srcData = defaultData;
		}
	LabelGet:
		switch (eleClass->byval_arg.type)
		{
		case IL2CPP_TYPE_BOOLEAN:
		{
			*(int32_t*)dst = *(uint8_t*)srcData;
			break;
		}
		case IL2CPP_TYPE_CHAR:
		{
			*(int32_t*)dst = *(uint16_t*)srcData;
			break;
		}
		case IL2CPP_TYPE_I1:
		{
			*(int32_t*)dst = *(int8_t*)srcData;
			break;
		}
		case IL2CPP_TYPE_U1:
		{
			*(int32_t*)dst = *(uint8_t*)srcData;
			break;
		}
		case IL2CPP_TYPE_I2:
		{
			*(int32_t*)dst = *(int16_t*)srcData;
			break;
		}
		case IL2CPP_TYPE_U2:
		{
			*(int32_t*)dst = *(uint16_t*)srcData;
			break;
		}
		case IL2CPP_TYPE_I4:
		case IL2CPP_TYPE_U4:
		{
			*(int32_t*)dst = *(int32_t*)srcData;
			break;
		}
		case IL2CPP_TYPE_I8:
		case IL2CPP_TYPE_U8:
		{
			*(int64_t*)dst = *(int64_t*)srcData;
			break;
		}
		case IL2CPP_TYPE_R4:
		{
			*(float*)dst = *(float*)srcData;
			break;
		}
		case IL2CPP_TYPE_R8:
		{
			*(double*)dst = *(double*)srcData;
			break;
		}
		case IL2CPP_TYPE_I:
		case IL2CPP_TYPE_U:
		{
#if HYBRIDCLR_ARCH_64
			* (int64_t*)dst = *(int64_t*)srcData;
#else 
			* (int32_t*)dst = *(int32_t*)srcData;
#endif
			break;
		}
		case IL2CPP_TYPE_VALUETYPE:
		case IL2CPP_TYPE_GENERICINST:
		{
			if (eleClass->enumtype)
			{
				eleClass = eleClass->castClass;
				goto LabelGet;
			}
			std::memmove(dst, nullableValueObj, size);
			break;
		}
		default:
		{
			RaiseExecutionEngineException("GetNullableValue2StackDataByType");
		}
		}
	}

#pragma endregion

#pragma region misc

	// not boxed data

	inline int32_t HiInterlockedCompareExchange(int32_t* location, int32_t newValue, int32_t oldValue)
	{
		return il2cpp::os::Atomic::CompareExchange(location, newValue, oldValue);
	}


	inline int64_t HiInterlockedCompareExchange(int64_t* location, int64_t newValue, int64_t oldValue)
	{
		return il2cpp::os::Atomic::CompareExchange64(location, newValue, oldValue);
	}


	inline void* HiInterlockedCompareExchange(void** location, void* newValue, void* oldValue)
	{
		return il2cpp::os::Atomic::CompareExchangePointer(location, newValue, oldValue);
	}

	inline int32_t HiInterlockedExchange(int32_t* location, int32_t newValue)
	{
		return il2cpp::os::Atomic::Exchange(location, newValue);
	}

	inline int64_t HiInterlockedExchange(int64_t* location, int64_t newValue)
	{
#if HYBRIDCLR_ARCH_64
		return il2cpp::os::Atomic::Exchange64(location, newValue);
#else
		RaiseExecutionEngineException("not support LockedExchange64");
		return newValue;
#endif
	}

	inline void* HiInterlockedExchange(void** location, void* newValue)
	{
		return il2cpp::os::Atomic::ExchangePointer(location, newValue);
	}

#define MEMORY_BARRIER() il2cpp::os::Atomic::FullMemoryBarrier()

#pragma endregion

#pragma region function

#define SAVE_CUR_FRAME(nextIp) { \
	frame->ip = nextIp; \
}

#define LOAD_PREV_FRAME() { \
	imi = frame->method; \
	ip = frame->ip; \
	ipBase = imi->codes; \
	localVarBase = frame->stackBasePtr; \
}

	// maxStackSize包含 arg + local + eval,对于解释器栈来说，可能多余
#define PREPARE_NEW_FRAME(newMethodInfo, argBasePtr, retPtr, withArgStack) { \
	imi = newMethodInfo->interpData ? (InterpMethodInfo*)newMethodInfo->interpData : InterpreterModule::GetInterpMethodInfo(newMethodInfo); \
	frame = interpFrameGroup.EnterFrame(imi, argBasePtr, withArgStack); \
	RuntimeClassCCtorInit(newMethodInfo); \
	frame->ret = retPtr; \
	ip = ipBase = imi->codes; \
	localVarBase = frame->stackBasePtr; \
}

#define LEAVE_FRAME() { \
	frame = interpFrameGroup.LeaveFrame(); \
	if (frame) \
	{ \
		LOAD_PREV_FRAME(); \
	}\
	else \
	{ \
		goto ExitEvalLoop; \
	} \
}

#define SET_RET_AND_LEAVE_FRAME(nativeSize, interpSize) { \
	void* _curRet = frame->ret; \
	frame = interpFrameGroup.LeaveFrame(); \
	if (frame) \
	{ \
        Copy##interpSize(_curRet, (void*)(localVarBase + __ret)); \
		LOAD_PREV_FRAME(); \
	}\
	else \
	{ \
        Copy##nativeSize(_curRet, (void*)(localVarBase + __ret)); \
		goto ExitEvalLoop; \
	} \
}

#define CALL_INTERP_VOID(nextIp, methodInfo, argBasePtr) { \
	SAVE_CUR_FRAME(nextIp) \
	PREPARE_NEW_FRAME(methodInfo, argBasePtr, nullptr, true); \
}

#define CALL_INTERP_RET(nextIp, methodInfo, argBasePtr, retPtr) { \
	SAVE_CUR_FRAME(nextIp) \
	PREPARE_NEW_FRAME(methodInfo, argBasePtr, retPtr, true); \
}

inline void FixCallNativeThisPointer(const MethodInfo * method, StackObject * dst, Il2CppObject * src)
{
#ifdef HYBRIDCLR_UNITY_2021_OR_NEW
	dst->obj = IS_CLASS_VALUE_TYPE(method->klass) ? src + 1 : src;
#else
	dst->obj = src;
#endif
}

inline void CallDelegateMethod(uint16_t invokeParamCount, const MethodInfo * method, Il2CppObject * obj, Managed2NativeCallMethod staticM2NMethod, Managed2NativeCallMethod instanceM2NMethod, uint16_t * argIdxs, StackObject * localVarBase, void* ret)
{
	if (invokeParamCount == method->parameters_count)
	{
		if (hybridclr::metadata::IsInstanceMethod(method))
		{
			CHECK_NOT_NULL_THROW(obj);
#ifdef HYBRIDCLR_UNITY_2021_OR_NEW
			(localVarBase + argIdxs[0])->obj = IS_CLASS_VALUE_TYPE(method->klass) ? obj + 1 : obj;
#else
			(localVarBase + argIdxs[0])->obj = obj;
#endif
			instanceM2NMethod(method, argIdxs, localVarBase, ret);
		}
		else
		{
			staticM2NMethod(method, argIdxs + 1, localVarBase, ret);
		}
	}
	else if (invokeParamCount + 1 == method->parameters_count)
	{
		// explicit this
		CHECK_NOT_NULL_THROW(obj);
#ifdef HYBRIDCLR_UNITY_2021_OR_NEW
		(localVarBase + argIdxs[0])->obj = IS_CLASS_VALUE_TYPE(method->klass) ? obj + 1 : obj;
#else
		(localVarBase + argIdxs[0])->obj = obj;
#endif
		instanceM2NMethod(method, argIdxs, localVarBase, ret);
	}
	else
	{
		IL2CPP_ASSERT(invokeParamCount == method->parameters_count + 1);
#if HYBRIDCLR_UNITY_2021_OR_NEW == 0
		if (hybridclr::metadata::IsInstanceMethod(method) && IS_CLASS_VALUE_TYPE(method->klass))
		{
			(localVarBase + argIdxs[1])->obj -= 1;
		}
#endif
		staticM2NMethod(method, argIdxs + 1, localVarBase, ret);
	}
}

#pragma endregion

#pragma region exception

void PushExceptionFlowInfo(InterpFrame* frame, const ExceptionFlowInfo& newExFlowInfo)
{
	if (frame->curExFlowInfo.exFlowType == ExceptionFlowType::None)
	{

	}
	else if (frame->prevExFlowInfo.exFlowType == ExceptionFlowType::None)
	{
		frame->prevExFlowInfo = frame->curExFlowInfo;
	}
	else
	{
		if (!frame->exHandleStack)
		{
			frame->exHandleStack = new (IL2CPP_MALLOC(sizeof(std::vector<ExceptionFlowInfo>))) std::vector<ExceptionFlowInfo>();
		}
		frame->exHandleStack->push_back(frame->prevExFlowInfo);
		frame->prevExFlowInfo = frame->curExFlowInfo;
	}
	frame->curExFlowInfo = newExFlowInfo;
}

void PopPrevExceptionFlowInfo(InterpFrame* frame)
{
	if (frame->exHandleStack && !frame->exHandleStack->empty())
	{
		frame->prevExFlowInfo = *frame->exHandleStack->rbegin();
		frame->exHandleStack->pop_back();
	}
	else
	{
		frame->prevExFlowInfo.exFlowType = ExceptionFlowType::None;
	}
}

#define PREPARE_EXCEPTION(_ex_, _firstHanlderIndex_)  PushExceptionFlowInfo(frame, {ExceptionFlowType::Exception, (int32_t)(ip - ipBase), _ex_, _firstHanlderIndex_, 0});


#define FIND_NEXT_EX_HANDLER_OR_UNWIND() \
while (true) \
{ \
	ExceptionFlowInfo& efi = frame->curExFlowInfo; \
	IL2CPP_ASSERT(efi.exFlowType == ExceptionFlowType::Exception); \
	IL2CPP_ASSERT(efi.ex); \
	int32_t exClauseNum = (int32_t)imi->exClauses.size(); \
	for (; efi.nextExClauseIndex < exClauseNum; ) \
	{ \
		while (frame->prevExFlowInfo.exFlowType != ExceptionFlowType::None && efi.nextExClauseIndex >= frame->prevExFlowInfo.nextExClauseIndex) {\
			InterpExceptionClause* prevIec = imi->exClauses[frame->prevExFlowInfo.nextExClauseIndex - 1]; \
			if (!(prevIec->handlerBeginOffset <= efi.throwOffset && efi.throwOffset < prevIec->handlerEndOffset)) { \
				PopPrevExceptionFlowInfo(frame);\
			} \
			else \
			{ \
				break; \
			} \
		}\
		InterpExceptionClause* iec = imi->exClauses[efi.nextExClauseIndex++]; \
		if (iec->tryBeginOffset <= efi.throwOffset && efi.throwOffset < iec->tryEndOffset) \
		{ \
			switch (iec->flags) \
			{ \
			case CorILExceptionClauseType::Exception: \
			{ \
			if (il2cpp::vm::Class::IsAssignableFrom(iec->exKlass, efi.ex->klass)) \
			{ \
			ip = ipBase + iec->handlerBeginOffset; \
			StackObject* exObj = localVarBase + imi->evalStackBaseOffset; \
			exObj->obj = efi.ex; \
			efi.exFlowType = ExceptionFlowType::Catch;\
			goto LoopStart; \
			} \
			break; \
			} \
			case CorILExceptionClauseType::Filter: \
			{ \
			ip = ipBase + iec->filterBeginOffset; \
			StackObject* exObj = localVarBase + imi->evalStackBaseOffset; \
			exObj->obj = efi.ex; \
			goto LoopStart; \
			} \
			case CorILExceptionClauseType::Finally: \
			{ \
			ip = ipBase + iec->handlerBeginOffset; \
			goto LoopStart; \
			} \
			case CorILExceptionClauseType::Fault: \
			{ \
			ip = ipBase + iec->handlerBeginOffset; \
			goto LoopStart; \
			} \
			default: \
			{ \
				RaiseExecutionEngineException(""); \
			} \
			} \
		} \
	} \
	frame = interpFrameGroup.LeaveFrame(); \
	if (frame) \
	{ \
		LOAD_PREV_FRAME(); \
		PREPARE_EXCEPTION(efi.ex, 0); \
	}\
	else \
	{ \
		lastUnwindException = efi.ex; \
		goto UnWindFail; \
	} \
}


#define THROW_EX(_ex_, _firstHandlerIndex_) { \
	Il2CppException* ex = _ex_; \
	CHECK_NOT_NULL_THROW(ex); \
	il2cpp::vm::Exception::Raise(ex, const_cast<MethodInfo*>(imi->method)); \
	PREPARE_EXCEPTION(ex, _firstHandlerIndex_); \
	FIND_NEXT_EX_HANDLER_OR_UNWIND(); \
}
#define RETHROW_EX() { \
	IL2CPP_ASSERT(frame->curExFlowInfo.exFlowType == ExceptionFlowType::Catch); \
	il2cpp::vm::Exception::Raise(frame->curExFlowInfo.ex, const_cast<MethodInfo*>(imi->method)); \
}

#define POP_CATCH_HANDLERS(leaveTarget)\
{ \
	while (frame->prevExFlowInfo.exFlowType == ExceptionFlowType::Catch) { \
			InterpExceptionClause* prevIec = imi->exClauses[frame->prevExFlowInfo.nextExClauseIndex - 1]; \
			if (!(prevIec->handlerBeginOffset <= leaveTarget && leaveTarget < prevIec->handlerEndOffset)) {	\
					PopPrevExceptionFlowInfo(frame); \
			} \
			else \
			{ \
				break; \
			} \
	}\
}

#define CONTINUE_NEXT_FINALLY() { \
ExceptionFlowInfo& efi = frame->curExFlowInfo; \
IL2CPP_ASSERT(efi.exFlowType == ExceptionFlowType::Leave); \
int32_t exClauseNum = (int32_t)imi->exClauses.size(); \
for (; efi.nextExClauseIndex < exClauseNum; ) \
{ \
	InterpExceptionClause* iec = imi->exClauses[efi.nextExClauseIndex++]; \
	if (iec->tryBeginOffset <= efi.throwOffset && efi.throwOffset < iec->tryEndOffset) \
	{ \
		if (iec->tryBeginOffset <= efi.leaveTarget && efi.leaveTarget < iec->tryEndOffset) \
		{ \
			break; \
		} \
		switch (iec->flags) \
		{ \
		case CorILExceptionClauseType::Finally: \
		{ \
			ip = ipBase + iec->handlerBeginOffset; \
			goto LoopStart; \
		} \
		case CorILExceptionClauseType::Exception: \
		case CorILExceptionClauseType::Filter: \
		case CorILExceptionClauseType::Fault: \
		{ \
			break; \
		} \
		default: \
		{ \
			RaiseExecutionEngineException(""); \
		} \
		} \
	} \
} \
ip = ipBase + efi.leaveTarget; \
if (frame->prevExFlowInfo.exFlowType != ExceptionFlowType::None) {\
	frame->curExFlowInfo = frame->prevExFlowInfo;\
	PopPrevExceptionFlowInfo(frame); \
} else { \
	frame->curExFlowInfo.exFlowType = ExceptionFlowType::None; \
}\
}

#define LEAVE_EX(target, firstHandlerIndex)  { \
	PushExceptionFlowInfo(frame, {ExceptionFlowType::Leave, (int32_t)(ip - ipBase), nullptr, firstHandlerIndex + 1, target}); \
	InterpExceptionClause* iec = imi->exClauses[firstHandlerIndex]; \
	POP_CATCH_HANDLERS(target); \
	ip = ipBase + iec->handlerBeginOffset; \
}

#define LEAVE_EX_DIRECTLY(target)  { \
	POP_CATCH_HANDLERS(target); \
	ip = ipBase + target; \
}

#define ENDFILTER_EX(value) \
IL2CPP_ASSERT(frame->curExFlowInfo.exFlowType == ExceptionFlowType::Exception); \
if(!(value)) \
{\
    FIND_NEXT_EX_HANDLER_OR_UNWIND();\
} \
else \
{ \
	frame->curExFlowInfo.exFlowType = ExceptionFlowType::Catch;\
}

#define ENDFINALLY_EX() \
IL2CPP_ASSERT(frame->curExFlowInfo.exFlowType != ExceptionFlowType::None); \
if (frame->curExFlowInfo.exFlowType == ExceptionFlowType::Exception) \
{ \
    FIND_NEXT_EX_HANDLER_OR_UNWIND(); \
} \
else \
{ \
    CONTINUE_NEXT_FINALLY();\
}

#pragma endregion 


	void Interpreter::Execute(const MethodInfo* methodInfo, StackObject* args, void* ret)
	{
		INIT_CLASS(methodInfo->klass);
		MachineState& machine = InterpreterModule::GetCurrentThreadMachineState();
		InterpFrameGroup interpFrameGroup(machine);

		const InterpMethodInfo* imi;
		InterpFrame* frame;
		StackObject* localVarBase;
		byte* ipBase;
		byte* ip;

		Il2CppException* lastUnwindException;

		PREPARE_NEW_FRAME(methodInfo, args, ret, false);
	LoopStart:
		try
		{
			for (;;)
			{
				switch (*(HiOpcodeEnum*)ip)
				{
#pragma region memory
					//!!!{{MEMORY
				case HiOpcodeEnum::InitLocals_n_2:
				{
					uint16_t __size = *(uint16_t*)(ip + 2);
					InitDefaultN(localVarBase + imi->localVarBaseOffset, __size);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitLocals_n_4:
				{
					uint32_t __size = *(uint32_t*)(ip + 4);
					InitDefaultN(localVarBase + imi->localVarBaseOffset, __size);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdlocVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(uint64_t*)(localVarBase + __dst)) = (*(uint64_t*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdlocExpandVarVar_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (*(int8_t*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdlocExpandVarVar_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (*(uint8_t*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdlocExpandVarVar_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (*(int16_t*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdlocExpandVarVar_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (*(uint16_t*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdlocVarVarSize:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					uint16_t __size = *(uint16_t*)(ip + 6);
					std::memmove((void*)(localVarBase + __dst), (void*)(localVarBase + __src), __size);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdlocVarAddress:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(void**)(localVarBase + __dst)) = (void*)(localVarBase + __src);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdcVarConst_1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 4);
					uint8_t __src = *(uint8_t*)(ip + 2);
					(*(int32_t*)(localVarBase + __dst)) = __src;
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdcVarConst_2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = __src;
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdcVarConst_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint32_t __src = *(uint32_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = __src;
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdcVarConst_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint64_t __src = *(uint64_t*)(ip + 8);
					(*(uint64_t*)(localVarBase + __dst)) = __src;
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdnullVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					(*(void**)(localVarBase + __dst)) = nullptr;
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdindVarVar_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (*(int8_t*)*(void**)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdindVarVar_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (*(uint8_t*)*(void**)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdindVarVar_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (*(int16_t*)*(void**)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdindVarVar_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (*(uint16_t*)*(void**)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdindVarVar_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (*(int32_t*)*(void**)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdindVarVar_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (*(uint32_t*)*(void**)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdindVarVar_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = (*(int64_t*)*(void**)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdindVarVar_f4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(float*)(localVarBase + __dst)) = (*(float*)*(void**)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdindVarVar_f8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(double*)(localVarBase + __dst)) = (*(double*)*(void**)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StindVarVar_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int8_t*)*(void**)(localVarBase + __dst)) = (*(int8_t*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StindVarVar_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int16_t*)*(void**)(localVarBase + __dst)) = (*(int16_t*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StindVarVar_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)*(void**)(localVarBase + __dst)) = (*(int32_t*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StindVarVar_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)*(void**)(localVarBase + __dst)) = (*(int64_t*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StindVarVar_f4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(float*)*(void**)(localVarBase + __dst)) = (*(float*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StindVarVar_f8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(double*)*(void**)(localVarBase + __dst)) = (*(double*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LocalAllocVarVar_n_2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __size = *(uint16_t*)(ip + 4);
					(*(void**)(localVarBase + __dst)) = LOCAL_ALLOC((*(uint16_t*)(localVarBase + __size)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LocalAllocVarVar_n_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __size = *(uint16_t*)(ip + 4);
					(*(void**)(localVarBase + __dst)) = LOCAL_ALLOC((*(uint32_t*)(localVarBase + __size)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitblkVarVarVar:
				{
					uint16_t __addr = *(uint16_t*)(ip + 2);
					uint16_t __value = *(uint16_t*)(ip + 4);
					uint16_t __size = *(uint16_t*)(ip + 6);
					std::memset((*(void**)(localVarBase + __addr)), (*(uint8_t*)(localVarBase + __value)), (*(uint32_t*)(localVarBase + __size)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CpblkVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					uint16_t __size = *(uint16_t*)(ip + 6);
					std::memmove((*(void**)(localVarBase + __dst)), (*(void**)(localVarBase + __src)), (*(uint32_t*)(localVarBase + __size)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::MemoryBarrier:
				{
					MEMORY_BARRIER();
				    ip += 8;
				    continue;
				}

				//!!!}}MEMORY


#pragma endregion

#pragma region CONVERT
		//!!!{{CONVERT
				case HiOpcodeEnum::ConvertVarVar_i4_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (int8_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i4_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (uint8_t)(uint32_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i4_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (int16_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i4_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (uint16_t)(uint32_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i4_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (int32_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i4_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (uint32_t)(uint32_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i4_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = (int64_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i4_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = (uint64_t)(uint32_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i4_f4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(float*)(localVarBase + __dst)) = (float)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i4_f8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(double*)(localVarBase + __dst)) = (double)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u4_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (int8_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u4_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (uint8_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u4_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (int16_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u4_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (uint16_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u4_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (int32_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u4_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (uint32_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u4_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = (int64_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u4_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = (uint64_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u4_f4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(float*)(localVarBase + __dst)) = (float)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u4_f8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(double*)(localVarBase + __dst)) = (double)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i8_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (int8_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i8_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (uint8_t)(uint64_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i8_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (int16_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i8_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (uint16_t)(uint64_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i8_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (int32_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i8_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (uint32_t)(uint64_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i8_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = (int64_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i8_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = (uint64_t)(uint64_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i8_f4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(float*)(localVarBase + __dst)) = (float)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_i8_f8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(double*)(localVarBase + __dst)) = (double)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u8_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (int8_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u8_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (uint8_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u8_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (int16_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u8_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (uint16_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u8_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (int32_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u8_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = (uint32_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u8_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = (int64_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u8_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = (uint64_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u8_f4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(float*)(localVarBase + __dst)) = (float)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_u8_f8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(double*)(localVarBase + __dst)) = (double)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f4_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int8_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f4_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint8_t, int32_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f4_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int16_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f4_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint16_t, int32_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f4_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int32_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f4_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint32_t, int32_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f4_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int64_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f4_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint64_t, int64_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f4_f4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(float*)(localVarBase + __dst)) = (float)((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f4_f8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(double*)(localVarBase + __dst)) = (double)((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f8_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int8_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f8_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint8_t, int32_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f8_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int16_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f8_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint16_t, int32_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f8_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int32_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f8_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint32_t, int32_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f8_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int64_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f8_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint64_t, int64_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f8_f4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(float*)(localVarBase + __dst)) = (float)((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertVarVar_f8_f8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(double*)(localVarBase + __dst)) = (double)((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i4_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int32_t val = (*(int32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i4_i1(*(int32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (int8_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i4_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int32_t val = (*(int32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i4_u1(*(int32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (uint8_t)(uint32_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i4_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int32_t val = (*(int32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i4_i2(*(int32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (int16_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i4_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int32_t val = (*(int32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i4_u2(*(int32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (uint16_t)(uint32_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i4_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int32_t val = (*(int32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i4_i4(*(int32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (int32_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i4_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int32_t val = (*(int32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i4_u4(*(int32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (uint32_t)(uint32_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i4_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int32_t val = (*(int32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i4_i8(*(int32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int64_t*)(localVarBase + __dst)) = (int64_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i4_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int32_t val = (*(int32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i4_u8(*(int32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int64_t*)(localVarBase + __dst)) = (uint64_t)(uint32_t)((*(int32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u4_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint32_t val = (*(uint32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u4_i1(*(uint32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (int8_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u4_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint32_t val = (*(uint32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u4_u1(*(uint32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (uint8_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u4_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint32_t val = (*(uint32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u4_i2(*(uint32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (int16_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u4_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint32_t val = (*(uint32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u4_u2(*(uint32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (uint16_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u4_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint32_t val = (*(uint32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u4_i4(*(uint32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (int32_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u4_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint32_t val = (*(uint32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u4_u4(*(uint32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (uint32_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u4_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint32_t val = (*(uint32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u4_i8(*(uint32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int64_t*)(localVarBase + __dst)) = (int64_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u4_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint32_t val = (*(uint32_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u4_u8(*(uint32_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int64_t*)(localVarBase + __dst)) = (uint64_t)((*(uint32_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i8_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int64_t val = (*(int64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i8_i1(*(int64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (int8_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i8_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int64_t val = (*(int64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i8_u1(*(int64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (uint8_t)(uint64_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i8_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int64_t val = (*(int64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i8_i2(*(int64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (int16_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i8_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int64_t val = (*(int64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i8_u2(*(int64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (uint16_t)(uint64_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i8_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int64_t val = (*(int64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i8_i4(*(int64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (int32_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i8_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int64_t val = (*(int64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i8_u4(*(int64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (uint32_t)(uint64_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i8_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int64_t val = (*(int64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i8_i8(*(int64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int64_t*)(localVarBase + __dst)) = (int64_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_i8_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    int64_t val = (*(int64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_i8_u8(*(int64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int64_t*)(localVarBase + __dst)) = (uint64_t)(uint64_t)((*(int64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u8_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint64_t val = (*(uint64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u8_i1(*(uint64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (int8_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u8_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint64_t val = (*(uint64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u8_u1(*(uint64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (uint8_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u8_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint64_t val = (*(uint64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u8_i2(*(uint64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (int16_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u8_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint64_t val = (*(uint64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u8_u2(*(uint64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (uint16_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u8_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint64_t val = (*(uint64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u8_i4(*(uint64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (int32_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u8_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint64_t val = (*(uint64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u8_u4(*(uint64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = (uint32_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u8_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint64_t val = (*(uint64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u8_i8(*(uint64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int64_t*)(localVarBase + __dst)) = (int64_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_u8_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    uint64_t val = (*(uint64_t*)(localVarBase + __src));
				    if (CheckConvertOverflow_u8_u8(*(uint64_t*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int64_t*)(localVarBase + __dst)) = (uint64_t)((*(uint64_t*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f4_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    float val = (*(float*)(localVarBase + __src));
				    if (CheckConvertOverflow_f4_i1(*(float*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int8_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f4_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    float val = (*(float*)(localVarBase + __src));
				    if (CheckConvertOverflow_f4_u1(*(float*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint8_t, int32_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f4_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    float val = (*(float*)(localVarBase + __src));
				    if (CheckConvertOverflow_f4_i2(*(float*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int16_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f4_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    float val = (*(float*)(localVarBase + __src));
				    if (CheckConvertOverflow_f4_u2(*(float*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint16_t, int32_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f4_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    float val = (*(float*)(localVarBase + __src));
				    if (CheckConvertOverflow_f4_i4(*(float*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int32_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f4_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    float val = (*(float*)(localVarBase + __src));
				    if (CheckConvertOverflow_f4_u4(*(float*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint32_t, int32_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f4_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    float val = (*(float*)(localVarBase + __src));
				    if (CheckConvertOverflow_f4_i8(*(float*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int64_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int64_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f4_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    float val = (*(float*)(localVarBase + __src));
				    if (CheckConvertOverflow_f4_u8(*(float*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int64_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint64_t, int64_t>((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f8_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    double val = (*(double*)(localVarBase + __src));
				    if (CheckConvertOverflow_f8_i1(*(double*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int8_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f8_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    double val = (*(double*)(localVarBase + __src));
				    if (CheckConvertOverflow_f8_u1(*(double*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint8_t, int32_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f8_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    double val = (*(double*)(localVarBase + __src));
				    if (CheckConvertOverflow_f8_i2(*(double*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int16_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f8_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    double val = (*(double*)(localVarBase + __src));
				    if (CheckConvertOverflow_f8_u2(*(double*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint16_t, int32_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f8_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    double val = (*(double*)(localVarBase + __src));
				    if (CheckConvertOverflow_f8_i4(*(double*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int32_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f8_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    double val = (*(double*)(localVarBase + __src));
				    if (CheckConvertOverflow_f8_u4(*(double*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint32_t, int32_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f8_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    double val = (*(double*)(localVarBase + __src));
				    if (CheckConvertOverflow_f8_i8(*(double*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int64_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_double_to_int<int64_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::ConvertOverflowVarVar_f8_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
				    double val = (*(double*)(localVarBase + __src));
				    if (CheckConvertOverflow_f8_u8(*(double*)(localVarBase + __src)))
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    (*(int64_t*)(localVarBase + __dst)) = il2cpp_codegen_cast_floating_point<uint64_t, int64_t>((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}

				//!!!}}CONVERT
#pragma endregion

#pragma region ARITH
		//!!!{{ARITH
				case HiOpcodeEnum::BinOpVarVarVar_Add_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = (*(int32_t*)(localVarBase + __op1)) + (*(int32_t*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Sub_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = (*(int32_t*)(localVarBase + __op1)) - (*(int32_t*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Mul_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = (*(int32_t*)(localVarBase + __op1)) * (*(int32_t*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_MulUn_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = HiMulUn((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Div_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = HiDiv((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_DivUn_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = HiDivUn((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Rem_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = HiRem((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_RemUn_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = HiRemUn((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_And_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = (*(int32_t*)(localVarBase + __op1)) & (*(int32_t*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Or_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = (*(int32_t*)(localVarBase + __op1)) | (*(int32_t*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Xor_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = (*(int32_t*)(localVarBase + __op1)) ^ (*(int32_t*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Add_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = (*(int64_t*)(localVarBase + __op1)) + (*(int64_t*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Sub_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = (*(int64_t*)(localVarBase + __op1)) - (*(int64_t*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Mul_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = (*(int64_t*)(localVarBase + __op1)) * (*(int64_t*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_MulUn_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = HiMulUn((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Div_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = HiDiv((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_DivUn_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = HiDivUn((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Rem_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = HiRem((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_RemUn_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = HiRemUn((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_And_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = (*(int64_t*)(localVarBase + __op1)) & (*(int64_t*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Or_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = (*(int64_t*)(localVarBase + __op1)) | (*(int64_t*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Xor_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = (*(int64_t*)(localVarBase + __op1)) ^ (*(int64_t*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Add_f4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(float*)(localVarBase + __ret)) = (*(float*)(localVarBase + __op1)) + (*(float*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Sub_f4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(float*)(localVarBase + __ret)) = (*(float*)(localVarBase + __op1)) - (*(float*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Mul_f4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(float*)(localVarBase + __ret)) = (*(float*)(localVarBase + __op1)) * (*(float*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Div_f4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(float*)(localVarBase + __ret)) = HiDiv((*(float*)(localVarBase + __op1)), (*(float*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Rem_f4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(float*)(localVarBase + __ret)) = HiRem((*(float*)(localVarBase + __op1)), (*(float*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Add_f8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(double*)(localVarBase + __ret)) = (*(double*)(localVarBase + __op1)) + (*(double*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Sub_f8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(double*)(localVarBase + __ret)) = (*(double*)(localVarBase + __op1)) - (*(double*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Mul_f8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(double*)(localVarBase + __ret)) = (*(double*)(localVarBase + __op1)) * (*(double*)(localVarBase + __op2));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Div_f8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(double*)(localVarBase + __ret)) = HiDiv((*(double*)(localVarBase + __op1)), (*(double*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpVarVarVar_Rem_f8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
					(*(double*)(localVarBase + __ret)) = HiRem((*(double*)(localVarBase + __op1)), (*(double*)(localVarBase + __op2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpOverflowVarVarVar_Add_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
				    int32_t op1 = (*(int32_t*)(localVarBase + __op1));
				    int32_t op2 = (*(int32_t*)(localVarBase + __op2));
				    if ((CHECK_ADD_OVERFLOW(op1, op2)) == 0)
				    {
				        (*(int32_t*)(localVarBase + __ret)) = op1 + op2;
				    }
				    else
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpOverflowVarVarVar_Sub_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
				    int32_t op1 = (*(int32_t*)(localVarBase + __op1));
				    int32_t op2 = (*(int32_t*)(localVarBase + __op2));
				    if ((CHECK_SUB_OVERFLOW(op1, op2)) == 0)
				    {
				        (*(int32_t*)(localVarBase + __ret)) = op1 - op2;
				    }
				    else
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpOverflowVarVarVar_Mul_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
				    int32_t op1 = (*(int32_t*)(localVarBase + __op1));
				    int32_t op2 = (*(int32_t*)(localVarBase + __op2));
				    if ((CHECK_MUL_OVERFLOW(op1, op2)) == 0)
				    {
				        (*(int32_t*)(localVarBase + __ret)) = op1 * op2;
				    }
				    else
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpOverflowVarVarVar_Add_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
				    int64_t op1 = (*(int64_t*)(localVarBase + __op1));
				    int64_t op2 = (*(int64_t*)(localVarBase + __op2));
				    if ((CHECK_ADD_OVERFLOW64(op1, op2)) == 0)
				    {
				        (*(int64_t*)(localVarBase + __ret)) = op1 + op2;
				    }
				    else
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpOverflowVarVarVar_Sub_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
				    int64_t op1 = (*(int64_t*)(localVarBase + __op1));
				    int64_t op2 = (*(int64_t*)(localVarBase + __op2));
				    if ((CHECK_SUB_OVERFLOW64(op1, op2)) == 0)
				    {
				        (*(int64_t*)(localVarBase + __ret)) = op1 - op2;
				    }
				    else
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpOverflowVarVarVar_Mul_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
				    int64_t op1 = (*(int64_t*)(localVarBase + __op1));
				    int64_t op2 = (*(int64_t*)(localVarBase + __op2));
				    if ((CHECK_MUL_OVERFLOW64(op1, op2)) == 0)
				    {
				        (*(int64_t*)(localVarBase + __ret)) = op1 * op2;
				    }
				    else
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpOverflowVarVarVar_Add_u4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
				    uint32_t op1 = (*(uint32_t*)(localVarBase + __op1));
				    uint32_t op2 = (*(uint32_t*)(localVarBase + __op2));
				    if ((CHECK_ADD_OVERFLOW_UN(op1, op2)) == 0)
				    {
				        (*(uint32_t*)(localVarBase + __ret)) = op1 + op2;
				    }
				    else
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpOverflowVarVarVar_Sub_u4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
				    uint32_t op1 = (*(uint32_t*)(localVarBase + __op1));
				    uint32_t op2 = (*(uint32_t*)(localVarBase + __op2));
				    if ((CHECK_SUB_OVERFLOW_UN(op1, op2)) == 0)
				    {
				        (*(uint32_t*)(localVarBase + __ret)) = op1 - op2;
				    }
				    else
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpOverflowVarVarVar_Mul_u4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
				    uint32_t op1 = (*(uint32_t*)(localVarBase + __op1));
				    uint32_t op2 = (*(uint32_t*)(localVarBase + __op2));
				    if ((CHECK_MUL_OVERFLOW_UN(op1, op2)) == 0)
				    {
				        (*(uint32_t*)(localVarBase + __ret)) = op1 * op2;
				    }
				    else
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpOverflowVarVarVar_Add_u8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
				    uint64_t op1 = (*(uint64_t*)(localVarBase + __op1));
				    uint64_t op2 = (*(uint64_t*)(localVarBase + __op2));
				    if ((CHECK_ADD_OVERFLOW64_UN(op1, op2)) == 0)
				    {
				        (*(uint64_t*)(localVarBase + __ret)) = op1 + op2;
				    }
				    else
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpOverflowVarVarVar_Sub_u8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
				    uint64_t op1 = (*(uint64_t*)(localVarBase + __op1));
				    uint64_t op2 = (*(uint64_t*)(localVarBase + __op2));
				    if ((CHECK_SUB_OVERFLOW64_UN(op1, op2)) == 0)
				    {
				        (*(uint64_t*)(localVarBase + __ret)) = op1 - op2;
				    }
				    else
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BinOpOverflowVarVarVar_Mul_u8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __op1 = *(uint16_t*)(ip + 4);
					uint16_t __op2 = *(uint16_t*)(ip + 6);
				    uint64_t op1 = (*(uint64_t*)(localVarBase + __op1));
				    uint64_t op2 = (*(uint64_t*)(localVarBase + __op2));
				    if ((CHECK_MUL_OVERFLOW64_UN(op1, op2)) == 0)
				    {
				        (*(uint64_t*)(localVarBase + __ret)) = op1 * op2;
				    }
				    else
				    {
				        il2cpp::vm::Exception::RaiseOverflowException();
				    }
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BitShiftBinOpVarVarVar_Shl_i4_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __value = *(uint16_t*)(ip + 4);
					uint16_t __shiftAmount = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = (*(int32_t*)(localVarBase + __value)) << (*(int32_t*)(localVarBase + __shiftAmount));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BitShiftBinOpVarVarVar_Shr_i4_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __value = *(uint16_t*)(ip + 4);
					uint16_t __shiftAmount = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = (*(int32_t*)(localVarBase + __value)) >> (*(int32_t*)(localVarBase + __shiftAmount));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BitShiftBinOpVarVarVar_ShrUn_i4_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __value = *(uint16_t*)(ip + 4);
					uint16_t __shiftAmount = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = HiShrUn((*(int32_t*)(localVarBase + __value)), (*(int32_t*)(localVarBase + __shiftAmount)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BitShiftBinOpVarVarVar_Shl_i4_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __value = *(uint16_t*)(ip + 4);
					uint16_t __shiftAmount = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = (*(int32_t*)(localVarBase + __value)) << (*(int64_t*)(localVarBase + __shiftAmount));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BitShiftBinOpVarVarVar_Shr_i4_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __value = *(uint16_t*)(ip + 4);
					uint16_t __shiftAmount = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = (*(int32_t*)(localVarBase + __value)) >> (*(int64_t*)(localVarBase + __shiftAmount));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BitShiftBinOpVarVarVar_ShrUn_i4_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __value = *(uint16_t*)(ip + 4);
					uint16_t __shiftAmount = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = HiShrUn((*(int32_t*)(localVarBase + __value)), (*(int64_t*)(localVarBase + __shiftAmount)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BitShiftBinOpVarVarVar_Shl_i8_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __value = *(uint16_t*)(ip + 4);
					uint16_t __shiftAmount = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = (*(int64_t*)(localVarBase + __value)) << (*(int32_t*)(localVarBase + __shiftAmount));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BitShiftBinOpVarVarVar_Shr_i8_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __value = *(uint16_t*)(ip + 4);
					uint16_t __shiftAmount = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = (*(int64_t*)(localVarBase + __value)) >> (*(int32_t*)(localVarBase + __shiftAmount));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BitShiftBinOpVarVarVar_ShrUn_i8_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __value = *(uint16_t*)(ip + 4);
					uint16_t __shiftAmount = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = HiShrUn((*(int64_t*)(localVarBase + __value)), (*(int32_t*)(localVarBase + __shiftAmount)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BitShiftBinOpVarVarVar_Shl_i8_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __value = *(uint16_t*)(ip + 4);
					uint16_t __shiftAmount = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = (*(int64_t*)(localVarBase + __value)) << (*(int64_t*)(localVarBase + __shiftAmount));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BitShiftBinOpVarVarVar_Shr_i8_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __value = *(uint16_t*)(ip + 4);
					uint16_t __shiftAmount = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = (*(int64_t*)(localVarBase + __value)) >> (*(int64_t*)(localVarBase + __shiftAmount));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BitShiftBinOpVarVarVar_ShrUn_i8_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __value = *(uint16_t*)(ip + 4);
					uint16_t __shiftAmount = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __ret)) = HiShrUn((*(int64_t*)(localVarBase + __value)), (*(int64_t*)(localVarBase + __shiftAmount)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::UnaryOpVarVar_Neg_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = - (*(int32_t*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::UnaryOpVarVar_Not_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int32_t*)(localVarBase + __dst)) = ~ (*(int32_t*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::UnaryOpVarVar_Neg_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = - (*(int64_t*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::UnaryOpVarVar_Not_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(int64_t*)(localVarBase + __dst)) = ~ (*(int64_t*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::UnaryOpVarVar_Neg_f4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(float*)(localVarBase + __dst)) = - (*(float*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::UnaryOpVarVar_Neg_f8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					(*(double*)(localVarBase + __dst)) = - (*(double*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CheckFiniteVar_f4:
				{
					uint16_t __src = *(uint16_t*)(ip + 2);
					HiCheckFinite((*(float*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CheckFiniteVar_f8:
				{
					uint16_t __src = *(uint16_t*)(ip + 2);
					HiCheckFinite((*(double*)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}

				//!!!}}ARITH
#pragma endregion

#pragma region COMPARE
		//!!!{{COMPARE
				case HiOpcodeEnum::CompOpVarVarVar_Ceq_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCeq((*(int32_t*)(localVarBase + __c1)), (*(int32_t*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_Ceq_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCeq((*(int64_t*)(localVarBase + __c1)), (*(int64_t*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_Ceq_f4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCeq((*(float*)(localVarBase + __c1)), (*(float*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_Ceq_f8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCeq((*(double*)(localVarBase + __c1)), (*(double*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_Cgt_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCgt((*(int32_t*)(localVarBase + __c1)), (*(int32_t*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_Cgt_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCgt((*(int64_t*)(localVarBase + __c1)), (*(int64_t*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_Cgt_f4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCgt((*(float*)(localVarBase + __c1)), (*(float*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_Cgt_f8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCgt((*(double*)(localVarBase + __c1)), (*(double*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_CgtUn_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCgtUn((*(int32_t*)(localVarBase + __c1)), (*(int32_t*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_CgtUn_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCgtUn((*(int64_t*)(localVarBase + __c1)), (*(int64_t*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_CgtUn_f4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCgtUn((*(float*)(localVarBase + __c1)), (*(float*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_CgtUn_f8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCgtUn((*(double*)(localVarBase + __c1)), (*(double*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_Clt_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareClt((*(int32_t*)(localVarBase + __c1)), (*(int32_t*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_Clt_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareClt((*(int64_t*)(localVarBase + __c1)), (*(int64_t*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_Clt_f4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareClt((*(float*)(localVarBase + __c1)), (*(float*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_Clt_f8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareClt((*(double*)(localVarBase + __c1)), (*(double*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_CltUn_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCltUn((*(int32_t*)(localVarBase + __c1)), (*(int32_t*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_CltUn_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCltUn((*(int64_t*)(localVarBase + __c1)), (*(int64_t*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_CltUn_f4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCltUn((*(float*)(localVarBase + __c1)), (*(float*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CompOpVarVarVar_CltUn_f8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __c1 = *(uint16_t*)(ip + 4);
					uint16_t __c2 = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __ret)) = CompareCltUn((*(double*)(localVarBase + __c1)), (*(double*)(localVarBase + __c2)));
				    ip += 8;
				    continue;
				}

				//!!!}}COMPARE
#pragma endregion

#pragma region BRANCH
		//!!!{{BRANCH
				case HiOpcodeEnum::BranchUncondition_4:
				{
					int32_t __offset = *(int32_t*)(ip + 4);
					ip = ipBase + __offset;
				    continue;
				}
				case HiOpcodeEnum::BranchTrueVar_i4:
				{
					uint16_t __op = *(uint16_t*)(ip + 2);
					int32_t __offset = *(int32_t*)(ip + 4);
				    if ((*(int32_t*)(localVarBase + __op)))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 8;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchTrueVar_i8:
				{
					uint16_t __op = *(uint16_t*)(ip + 2);
					int32_t __offset = *(int32_t*)(ip + 4);
				    if ((*(int64_t*)(localVarBase + __op)))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 8;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchFalseVar_i4:
				{
					uint16_t __op = *(uint16_t*)(ip + 2);
					int32_t __offset = *(int32_t*)(ip + 4);
				    if (!(*(int32_t*)(localVarBase + __op)))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 8;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchFalseVar_i8:
				{
					uint16_t __op = *(uint16_t*)(ip + 2);
					int32_t __offset = *(int32_t*)(ip + 4);
				    if (!(*(int64_t*)(localVarBase + __op)))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 8;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Ceq_i4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCeq((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Ceq_i8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCeq((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Ceq_f4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCeq((*(float*)(localVarBase + __op1)), (*(float*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Ceq_f8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCeq((*(double*)(localVarBase + __op1)), (*(double*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CneUn_i4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCneUn((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CneUn_i8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCneUn((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CneUn_f4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCneUn((*(float*)(localVarBase + __op1)), (*(float*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CneUn_f8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCneUn((*(double*)(localVarBase + __op1)), (*(double*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Cgt_i4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCgt((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Cgt_i8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCgt((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Cgt_f4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCgt((*(float*)(localVarBase + __op1)), (*(float*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Cgt_f8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCgt((*(double*)(localVarBase + __op1)), (*(double*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CgtUn_i4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCgtUn((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CgtUn_i8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCgtUn((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CgtUn_f4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCgtUn((*(float*)(localVarBase + __op1)), (*(float*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CgtUn_f8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCgtUn((*(double*)(localVarBase + __op1)), (*(double*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Cge_i4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCge((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Cge_i8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCge((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Cge_f4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCge((*(float*)(localVarBase + __op1)), (*(float*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Cge_f8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCge((*(double*)(localVarBase + __op1)), (*(double*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CgeUn_i4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCgeUn((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CgeUn_i8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCgeUn((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CgeUn_f4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCgeUn((*(float*)(localVarBase + __op1)), (*(float*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CgeUn_f8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCgeUn((*(double*)(localVarBase + __op1)), (*(double*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Clt_i4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareClt((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Clt_i8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareClt((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Clt_f4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareClt((*(float*)(localVarBase + __op1)), (*(float*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Clt_f8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareClt((*(double*)(localVarBase + __op1)), (*(double*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CltUn_i4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCltUn((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CltUn_i8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCltUn((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CltUn_f4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCltUn((*(float*)(localVarBase + __op1)), (*(float*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CltUn_f8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCltUn((*(double*)(localVarBase + __op1)), (*(double*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Cle_i4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCle((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Cle_i8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCle((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Cle_f4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCle((*(float*)(localVarBase + __op1)), (*(float*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_Cle_f8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCle((*(double*)(localVarBase + __op1)), (*(double*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CleUn_i4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCleUn((*(int32_t*)(localVarBase + __op1)), (*(int32_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CleUn_i8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCleUn((*(int64_t*)(localVarBase + __op1)), (*(int64_t*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CleUn_f4:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCleUn((*(float*)(localVarBase + __op1)), (*(float*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchVarVar_CleUn_f8:
				{
					uint16_t __op1 = *(uint16_t*)(ip + 2);
					uint16_t __op2 = *(uint16_t*)(ip + 4);
					int32_t __offset = *(int32_t*)(ip + 8);
				    if (CompareCleUn((*(double*)(localVarBase + __op1)), (*(double*)(localVarBase + __op2))))
				    {
				        ip = ipBase + __offset;
				    }
				    else
				    {
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::BranchJump:
				{
					uint32_t __token = *(uint32_t*)(ip + 4);
					IL2CPP_ASSERT(false);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BranchSwitch:
				{
				    uint16_t __value = *(uint16_t*)(ip + 2);
				    uint32_t __caseNum = *(uint32_t*)(ip + 4);
				    uint32_t __caseOffsets = *(uint32_t*)(ip + 8);
				    uint32_t __idx = (*(uint32_t*)(localVarBase + __value));
				    if (__idx < __caseNum)
				    {
				        ip = ipBase + ((uint32_t*)&imi->resolveDatas[__caseOffsets])[__idx];
				    }
				    else 
				    {
				        ip += 16;
				    }
				    continue;
				}

				//!!!}}BRANCH
#pragma endregion

#pragma region FUNCTION
		//!!!{{FUNCTION
				case HiOpcodeEnum::NewClassVar:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					void* __managed2NativeMethod = ((void*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					MethodInfo* __method = ((MethodInfo*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint32_t __argIdxs = *(uint32_t*)(ip + 12);
				    uint16_t* _argIdxs = ((uint16_t*)&imi->resolveDatas[__argIdxs]);
				    Il2CppObject* _obj = il2cpp::vm::Object::New(__method->klass);
				    *(Il2CppObject**)(localVarBase + _argIdxs[0]) = _obj;
				    ((Managed2NativeCallMethod)__managed2NativeMethod)(__method, _argIdxs, localVarBase, nullptr);
				    (*(Il2CppObject**)(localVarBase + __obj)) = _obj;
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::NewClassVar_Ctor_0:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					MethodInfo* __method = ((MethodInfo*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
				    Il2CppObject* _obj = il2cpp::vm::Object::New(__method->klass);
				    ((NativeClassCtor0)(GetInterpreterDirectlyCallMethodPointer(__method)))(_obj, __method);
				    (*(Il2CppObject**)(localVarBase + __obj)) = _obj;
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::NewClassVar_NotCtor:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
				    (*(Il2CppObject**)(localVarBase + __obj)) = il2cpp::vm::Object::New(__klass);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::NewValueTypeVar:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					void* __managed2NativeMethod = ((void*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					MethodInfo* __method = ((MethodInfo*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint32_t __argIdxs = *(uint32_t*)(ip + 12);
				    uint16_t* _argIdxs = ((uint16_t*)&imi->resolveDatas[__argIdxs]);
				    int32_t _typeSize = GetTypeValueSize(__method->klass);
				    // arg1, arg2, ..., argN, value type, __this
				    StackObject* _frameBasePtr = localVarBase + _argIdxs[0];
				    Il2CppObject* _this = (Il2CppObject*)(_frameBasePtr - GetStackSizeByByteSize(_typeSize));
				#if VALUE_TYPE_METHOD_POINTER_IS_ADJUST_METHOD
				    _frameBasePtr->ptr = _this - 1;
				#else
				    _frameBasePtr->ptr = _this;
				#endif
				    InitDefaultN(_this, _typeSize);
				    ((Managed2NativeCallMethod)__managed2NativeMethod)(__method, _argIdxs, localVarBase, nullptr);
				    std::memmove((void*)(localVarBase + __obj), _this, _typeSize);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::NewClassInterpVar:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					MethodInfo* __method = ((MethodInfo*)imi->resolveDatas[*(uint32_t*)(ip + 12)]);
					uint16_t __argBase = *(uint16_t*)(ip + 4);
					uint16_t __argStackObjectNum = *(uint16_t*)(ip + 6);
					uint16_t __ctorFrameBase = *(uint16_t*)(ip + 8);
				    IL2CPP_ASSERT(__obj < __ctorFrameBase);
				    Il2CppObject* _newObj = il2cpp::vm::Object::New(__method->klass);
				    StackObject* _frameBasePtr = (StackObject*)(void*)(localVarBase + __ctorFrameBase);
				    std::memmove(_frameBasePtr + 1, (void*)(localVarBase + __argBase), __argStackObjectNum * sizeof(StackObject)); // move arg
				    _frameBasePtr->obj = _newObj; // prepare this 
				    (*(Il2CppObject**)(localVarBase + __obj)) = _newObj; // set must after move
				    CALL_INTERP_VOID((ip + 16), __method, _frameBasePtr);
				    continue;
				}
				case HiOpcodeEnum::NewClassInterpVar_Ctor_0:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					MethodInfo* __method = ((MethodInfo*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __ctorFrameBase = *(uint16_t*)(ip + 4);
				    IL2CPP_ASSERT(__obj < __ctorFrameBase);
				    Il2CppObject* _newObj = il2cpp::vm::Object::New(__method->klass);
				    StackObject* _frameBasePtr = (StackObject*)(void*)(localVarBase + __ctorFrameBase);
				    _frameBasePtr->obj = _newObj; // prepare this 
				    (*(Il2CppObject**)(localVarBase + __obj)) = _newObj;
				    CALL_INTERP_VOID((ip + 16), __method, _frameBasePtr);
				    continue;
				}
				case HiOpcodeEnum::NewValueTypeInterpVar:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					MethodInfo* __method = ((MethodInfo*)imi->resolveDatas[*(uint32_t*)(ip + 12)]);
					uint16_t __argBase = *(uint16_t*)(ip + 4);
					uint16_t __argStackObjectNum = *(uint16_t*)(ip + 6);
					uint16_t __ctorFrameBase = *(uint16_t*)(ip + 8);
				    IL2CPP_ASSERT(__obj < __ctorFrameBase);
				    StackObject* _frameBasePtr = (StackObject*)(void*)(localVarBase + __ctorFrameBase);
				    std::memmove(_frameBasePtr + 1, (void*)(localVarBase + __argBase), __argStackObjectNum * sizeof(StackObject)); // move arg
				    _frameBasePtr->ptr = (StackObject*)(void*)(localVarBase + __obj);
				    int32_t _typeSize = GetTypeValueSize(__method->klass);
				    InitDefaultN((void*)(localVarBase + __obj), _typeSize); // init after move
				    CALL_INTERP_VOID((ip + 16), __method, _frameBasePtr);
				    continue;
				}
				case HiOpcodeEnum::AdjustValueTypeRefVar:
				{
					uint16_t __data = *(uint16_t*)(ip + 2);
				    // ref => fake value type boxed object value. // fake obj = ref(value_type) - sizeof(Il2CppObject)
				    StackObject* _thisSo = ((StackObject*)((void*)(localVarBase + __data)));
				    _thisSo->obj -= 1;
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::BoxRefVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    (*(Il2CppObject**)(localVarBase + __dst)) = il2cpp::vm::Object::Box(__klass, (*(void**)(localVarBase + __src)));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdvirftnVarVar:
				{
					uint16_t __resultMethod = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					MethodInfo* __virtualMethod = ((MethodInfo*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    (*(MethodInfo**)(localVarBase + __resultMethod)) = GET_OBJECT_VIRTUAL_METHOD((*(Il2CppObject**)(localVarBase + __obj)), __virtualMethod);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::RetVar_ret_1:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
				    SET_RET_AND_LEAVE_FRAME(1, 8);
				    continue;
				}
				case HiOpcodeEnum::RetVar_ret_2:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
				    SET_RET_AND_LEAVE_FRAME(2, 8);
				    continue;
				}
				case HiOpcodeEnum::RetVar_ret_4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
				    SET_RET_AND_LEAVE_FRAME(4, 8);
				    continue;
				}
				case HiOpcodeEnum::RetVar_ret_8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
				    SET_RET_AND_LEAVE_FRAME(8, 8);
				    continue;
				}
				case HiOpcodeEnum::RetVar_ret_12:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
				    SET_RET_AND_LEAVE_FRAME(12, 12);
				    continue;
				}
				case HiOpcodeEnum::RetVar_ret_16:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
				    SET_RET_AND_LEAVE_FRAME(16, 16);
				    continue;
				}
				case HiOpcodeEnum::RetVar_ret_20:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
				    SET_RET_AND_LEAVE_FRAME(20, 20);
				    continue;
				}
				case HiOpcodeEnum::RetVar_ret_24:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
				    SET_RET_AND_LEAVE_FRAME(24, 24);
				    continue;
				}
				case HiOpcodeEnum::RetVar_ret_28:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
				    SET_RET_AND_LEAVE_FRAME(28, 28);
				    continue;
				}
				case HiOpcodeEnum::RetVar_ret_32:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
				    SET_RET_AND_LEAVE_FRAME(32, 32);
				    continue;
				}
				case HiOpcodeEnum::RetVar_ret_n:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint32_t __size = *(uint32_t*)(ip + 4);
				    std::memmove(frame->ret, (void*)(localVarBase + __ret), __size);
					LEAVE_FRAME();
				    continue;
				}
				case HiOpcodeEnum::RetVar_void:
				{
					LEAVE_FRAME();
				    continue;
				}
				case HiOpcodeEnum::CallNative_void:
				{
					uint32_t __managed2NativeMethod = *(uint32_t*)(ip + 4);
					uint32_t __methodInfo = *(uint32_t*)(ip + 8);
					uint32_t __argIdxs = *(uint32_t*)(ip + 12);
				    ((Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeMethod])(((MethodInfo*)imi->resolveDatas[__methodInfo]), ((uint16_t*)&imi->resolveDatas[__argIdxs]), localVarBase, nullptr);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::CallNative_ret:
				{
					uint32_t __managed2NativeMethod = *(uint32_t*)(ip + 4);
					uint32_t __methodInfo = *(uint32_t*)(ip + 8);
					uint32_t __argIdxs = *(uint32_t*)(ip + 12);
					uint16_t __ret = *(uint16_t*)(ip + 2);
				    void* _ret = (void*)(localVarBase + __ret);
				    ((Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeMethod])(((MethodInfo*)imi->resolveDatas[__methodInfo]), ((uint16_t*)&imi->resolveDatas[__argIdxs]), localVarBase, _ret);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::CallNative_ret_expand:
				{
					uint32_t __managed2NativeMethod = *(uint32_t*)(ip + 8);
					uint32_t __methodInfo = *(uint32_t*)(ip + 12);
					uint32_t __argIdxs = *(uint32_t*)(ip + 16);
					uint16_t __ret = *(uint16_t*)(ip + 4);
					uint8_t __retLocationType = *(uint8_t*)(ip + 2);
				    void* _ret = (void*)(localVarBase + __ret);
				    ((Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeMethod])(((MethodInfo*)imi->resolveDatas[__methodInfo]), ((uint16_t*)&imi->resolveDatas[__argIdxs]), localVarBase, _ret);
				    ExpandLocationData2StackDataByType(_ret, (LocationDataType)__retLocationType);
				    ip += 24;
				    continue;
				}
				case HiOpcodeEnum::CallInterp_void:
				{
					MethodInfo* __methodInfo = ((MethodInfo*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					uint16_t __argBase = *(uint16_t*)(ip + 2);
				    CALL_INTERP_VOID((ip + 8), __methodInfo, (StackObject*)(void*)(localVarBase + __argBase));
				    continue;
				}
				case HiOpcodeEnum::CallInterp_ret:
				{
					MethodInfo* __methodInfo = ((MethodInfo*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __argBase = *(uint16_t*)(ip + 2);
					uint16_t __ret = *(uint16_t*)(ip + 4);
				    CALL_INTERP_RET((ip + 16), __methodInfo, (StackObject*)(void*)(localVarBase + __argBase), (void*)(localVarBase + __ret));
				    continue;
				}
				case HiOpcodeEnum::CallVirtual_void:
				{
					uint32_t __managed2NativeMethod = *(uint32_t*)(ip + 4);
					uint32_t __methodInfo = *(uint32_t*)(ip + 8);
					uint32_t __argIdxs = *(uint32_t*)(ip + 12);
				    uint16_t* _argIdxData = ((uint16_t*)&imi->resolveDatas[__argIdxs]);
					StackObject* _objPtr = localVarBase + _argIdxData[0];
				    MethodInfo* _actualMethod = GET_OBJECT_VIRTUAL_METHOD( _objPtr->obj, ((MethodInfo*)imi->resolveDatas[__methodInfo]));
				#if !VALUE_TYPE_METHOD_POINTER_IS_ADJUST_METHOD
				    if (IS_CLASS_VALUE_TYPE(_actualMethod->klass))
				    {
				        _objPtr->obj += 1;
				    }
				#endif
				    if (hybridclr::metadata::IsInterpreterImplement(_actualMethod))
				    {
				#if VALUE_TYPE_METHOD_POINTER_IS_ADJUST_METHOD
				        if (IS_CLASS_VALUE_TYPE(_actualMethod->klass))
				        {
				            _objPtr->obj += 1;
				        }
				#endif
				        CALL_INTERP_VOID((ip + 16), _actualMethod, _objPtr);
				    }
				    else 
				    {
				        if (GetInterpreterDirectlyCallMethodPointer(_actualMethod) == nullptr)
				        {
				            RaiseAOTGenericMethodNotInstantiatedException(_actualMethod);
				        }
				        ((Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeMethod])(_actualMethod, _argIdxData, localVarBase, nullptr);
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::CallVirtual_ret:
				{
					uint32_t __managed2NativeMethod = *(uint32_t*)(ip + 4);
					uint32_t __methodInfo = *(uint32_t*)(ip + 8);
					uint32_t __argIdxs = *(uint32_t*)(ip + 12);
					uint16_t __ret = *(uint16_t*)(ip + 2);
				    uint16_t* _argIdxData = ((uint16_t*)&imi->resolveDatas[__argIdxs]);
					StackObject* _objPtr = localVarBase + _argIdxData[0];
				    MethodInfo* _actualMethod = GET_OBJECT_VIRTUAL_METHOD(_objPtr->obj, ((MethodInfo*)imi->resolveDatas[__methodInfo]));
				    void* _ret = (void*)(localVarBase + __ret);
				#if !VALUE_TYPE_METHOD_POINTER_IS_ADJUST_METHOD
				    if (IS_CLASS_VALUE_TYPE(_actualMethod->klass))
				    {
				        _objPtr->obj += 1;
				    }
				#endif
				    if (hybridclr::metadata::IsInterpreterImplement(_actualMethod))
				    {
				#if VALUE_TYPE_METHOD_POINTER_IS_ADJUST_METHOD
				        if (IS_CLASS_VALUE_TYPE(_actualMethod->klass))
				        {
				            _objPtr->obj += 1;
				        }
				#endif
				        CALL_INTERP_RET((ip + 16), _actualMethod, _objPtr, _ret);
				    }
				    else 
				    {
				        if (GetInterpreterDirectlyCallMethodPointer(_actualMethod) == nullptr)
				        {
				            RaiseAOTGenericMethodNotInstantiatedException(_actualMethod);
				        }
				        ((Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeMethod])(_actualMethod, _argIdxData, localVarBase, _ret);
				        ip += 16;
				    }
				    continue;
				}
				case HiOpcodeEnum::CallVirtual_ret_expand:
				{
					uint32_t __managed2NativeMethod = *(uint32_t*)(ip + 8);
					uint32_t __methodInfo = *(uint32_t*)(ip + 12);
					uint32_t __argIdxs = *(uint32_t*)(ip + 16);
					uint16_t __ret = *(uint16_t*)(ip + 4);
					uint8_t __retLocationType = *(uint8_t*)(ip + 2);
				    uint16_t* _argIdxData = ((uint16_t*)&imi->resolveDatas[__argIdxs]);
					StackObject* _objPtr = localVarBase + _argIdxData[0];
				    MethodInfo* _actualMethod = GET_OBJECT_VIRTUAL_METHOD(_objPtr->obj, ((MethodInfo*)imi->resolveDatas[__methodInfo]));
				    void* _ret = (void*)(localVarBase + __ret);
				#if !VALUE_TYPE_METHOD_POINTER_IS_ADJUST_METHOD
				    if (IS_CLASS_VALUE_TYPE(_actualMethod->klass))
				    {
				        _objPtr->obj += 1;
				    }
				#endif
				    if (hybridclr::metadata::IsInterpreterImplement(_actualMethod))
				    {
				#if VALUE_TYPE_METHOD_POINTER_IS_ADJUST_METHOD
				        if (IS_CLASS_VALUE_TYPE(_actualMethod->klass))
				        {
				            _objPtr->obj += 1;
				        }
				#endif
				        CALL_INTERP_RET((ip + 24), _actualMethod, _objPtr, _ret);
				    }
				    else 
				    {
				        if (GetInterpreterDirectlyCallMethodPointer(_actualMethod) == nullptr)
				        {
				            RaiseAOTGenericMethodNotInstantiatedException(_actualMethod);
				        }
				        ((Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeMethod])(_actualMethod, _argIdxData, localVarBase, _ret);
				        ExpandLocationData2StackDataByType(_ret, (LocationDataType)__retLocationType);
				        ip += 24;
				    }
				    continue;
				}
				case HiOpcodeEnum::CallInterpVirtual_void:
				{
					MethodInfo* __method = ((MethodInfo*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					uint16_t __argBase = *(uint16_t*)(ip + 2);
				    StackObject* _argBasePtr = (StackObject*)(void*)(localVarBase + __argBase);
				    MethodInfo* _actualMethod = GET_OBJECT_VIRTUAL_METHOD(_argBasePtr->obj, __method);
				    if (IS_CLASS_VALUE_TYPE(_actualMethod->klass))
				    {
				        _argBasePtr->obj += 1;
				    }
				    CALL_INTERP_VOID((ip + 8), _actualMethod, _argBasePtr);
				    continue;
				}
				case HiOpcodeEnum::CallInterpVirtual_ret:
				{
					MethodInfo* __method = ((MethodInfo*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __argBase = *(uint16_t*)(ip + 2);
					uint16_t __ret = *(uint16_t*)(ip + 4);
				    StackObject* _argBasePtr = (StackObject*)(void*)(localVarBase + __argBase);
				    MethodInfo* _actualMethod = GET_OBJECT_VIRTUAL_METHOD(_argBasePtr->obj, __method);
				    if (IS_CLASS_VALUE_TYPE(_actualMethod->klass))
				    {
				        _argBasePtr->obj += 1;
				    }
				    CALL_INTERP_RET((ip + 16), _actualMethod, _argBasePtr, (void*)(localVarBase + __ret));
				    continue;
				}
				case HiOpcodeEnum::CallInd_void:
				{
					uint32_t __managed2NativeMethod = *(uint32_t*)(ip + 4);
					uint32_t __methodInfo = *(uint32_t*)(ip + 8);
					uint32_t __argIdxs = *(uint32_t*)(ip + 12);
				    ((Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeMethod])(((MethodInfo*)imi->resolveDatas[__methodInfo]), ((uint16_t*)&imi->resolveDatas[__argIdxs]), localVarBase, nullptr);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::CallInd_ret:
				{
					uint32_t __managed2NativeMethod = *(uint32_t*)(ip + 4);
					uint32_t __methodInfo = *(uint32_t*)(ip + 8);
					uint32_t __argIdxs = *(uint32_t*)(ip + 12);
					uint16_t __ret = *(uint16_t*)(ip + 2);
				    void* _ret = (void*)(localVarBase + __ret);
				    ((Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeMethod])(((MethodInfo*)imi->resolveDatas[__methodInfo]), ((uint16_t*)&imi->resolveDatas[__argIdxs]), localVarBase, _ret);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::CallInd_ret_expand:
				{
					uint32_t __managed2NativeMethod = *(uint32_t*)(ip + 8);
					uint32_t __methodInfo = *(uint32_t*)(ip + 12);
					uint32_t __argIdxs = *(uint32_t*)(ip + 16);
					uint16_t __ret = *(uint16_t*)(ip + 4);
					uint8_t __retLocationType = *(uint8_t*)(ip + 2);
				    void* _ret = (void*)(localVarBase + __ret);
				    ((Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeMethod])(((MethodInfo*)imi->resolveDatas[__methodInfo]), ((uint16_t*)&imi->resolveDatas[__argIdxs]), localVarBase, _ret);
				    ExpandLocationData2StackDataByType(_ret, (LocationDataType)__retLocationType);
				    ip += 24;
				    continue;
				}
				case HiOpcodeEnum::CallDelegate_void:
				{
					uint32_t __managed2NativeStaticMethod = *(uint32_t*)(ip + 4);
					uint32_t __managed2NativeInstanceMethod = *(uint32_t*)(ip + 8);
					uint32_t __argIdxs = *(uint32_t*)(ip + 12);
					uint16_t __invokeParamCount = *(uint16_t*)(ip + 2);
					void* _ret = nullptr;
					uint16_t* _resolvedArgIdxs = ((uint16_t*)&imi->resolveDatas[__argIdxs]);
					StackObject* _argBasePtr = localVarBase + _resolvedArgIdxs[0];
					Il2CppMulticastDelegate* _del = (Il2CppMulticastDelegate*)_argBasePtr->obj;
					CHECK_NOT_NULL_THROW(_del);
					if (_del->delegates == nullptr)
					{
						const MethodInfo* method = _del->delegate.method;
						Il2CppObject* target = _del->delegate.target;
						// uint8_t _actualParameterCount = method->parameters_count + hybridclr::metadata::IsInstanceMethod(method);
						if (hybridclr::metadata::IsInterpreterImplement(method))
						{
							switch ((int32_t)__invokeParamCount - (int32_t)method->parameters_count)
							{
							case 0:
							{
								if (hybridclr::metadata::IsInstanceMethod(method))
								{
									CHECK_NOT_NULL_THROW(target);
									if (IS_CLASS_VALUE_TYPE(method->klass))
									{
										target++;
									}
									_argBasePtr->obj = target;
								}
								else
								{
									_argBasePtr++;
									_resolvedArgIdxs++;
								}
								break;
							}
							case -1:
							{
								CHECK_NOT_NULL_THROW(target);
								_argBasePtr->obj = target;
								break;
							}
							case 1:
							{
								_resolvedArgIdxs++;
								_argBasePtr = localVarBase + _resolvedArgIdxs[0];
								break;
							}
							default:
							{
								RaiseExecutionEngineException("CallInterpDelegate");
							}
							}
							CALL_INTERP_RET((ip + 16), method, _argBasePtr, _ret);
							continue;
						}
						else
						{
							Managed2NativeCallMethod _staticM2NMethod = (Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeStaticMethod];
							Managed2NativeCallMethod _instanceM2NMethod = (Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeInstanceMethod];
							Managed2NativeCallMethod _managed2NativeCallMethod = nullptr;
							switch ((int32_t)__invokeParamCount - (int32_t)method->parameters_count)
							{
							case 0:
								{
									if (hybridclr::metadata::IsInstanceMethod(method))
									{
										CHECK_NOT_NULL_THROW(target);
										FixCallNativeThisPointer(method, _argBasePtr, target);
										_managed2NativeCallMethod = _instanceM2NMethod;
									}
									else
									{
										_argBasePtr++;
										_resolvedArgIdxs++;
										_managed2NativeCallMethod = _staticM2NMethod;
									}
									break;
								}
							case -1:
								{
									CHECK_NOT_NULL_THROW(target);
									FixCallNativeThisPointer(method, _argBasePtr, target);
									_managed2NativeCallMethod = _instanceM2NMethod;
									break;
								}
							case 1:
								{
									_resolvedArgIdxs++;
									_argBasePtr = localVarBase + _resolvedArgIdxs[0];
					#if HYBRIDCLR_UNITY_2021_OR_NEW == 0
									if (hybridclr::metadata::IsInstanceMethod(method) && IS_CLASS_VALUE_TYPE(method->klass))
									{
										_argBasePtr->obj -= 1;
									}
					#endif
									_managed2NativeCallMethod = _staticM2NMethod;
									break;
								}
							default:
								{
									RaiseExecutionEngineException("CallInterpDelegate");
								}
							}
							_managed2NativeCallMethod(method, _resolvedArgIdxs, localVarBase, _ret);
						}
					}
					else
					{
						Il2CppArray* dels = _del->delegates;
						Managed2NativeCallMethod _staticM2NMethod = (Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeStaticMethod];
						Managed2NativeCallMethod _instanceM2NMethod = (Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeInstanceMethod];
						for (il2cpp_array_size_t i = 0; i < dels->max_length; i++)
						{
							Il2CppMulticastDelegate* subDel = il2cpp_array_get(dels, Il2CppMulticastDelegate *, i);
							IL2CPP_ASSERT(subDel);
							//IL2CPP_ASSERT(subDel->delegate.method->klass->parent == il2cpp_defaults.multicastdelegate_class);
							IL2CPP_ASSERT(subDel->delegates == nullptr);
							const MethodInfo* method = subDel->delegate.method;
							Il2CppObject* target = subDel->delegate.target;
							CallDelegateMethod(__invokeParamCount, method, target, _staticM2NMethod, _instanceM2NMethod, _resolvedArgIdxs, localVarBase, _ret);
						}
					}
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::CallDelegate_ret:
				{
					uint32_t __managed2NativeStaticMethod = *(uint32_t*)(ip + 8);
					uint32_t __managed2NativeInstanceMethod = *(uint32_t*)(ip + 12);
					uint32_t __argIdxs = *(uint32_t*)(ip + 16);
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __invokeParamCount = *(uint16_t*)(ip + 4);
				    void* _ret = (void*)(localVarBase + __ret);
					uint16_t* _resolvedArgIdxs = ((uint16_t*)&imi->resolveDatas[__argIdxs]);
					StackObject* _argBasePtr = localVarBase + _resolvedArgIdxs[0];
					Il2CppMulticastDelegate* _del = (Il2CppMulticastDelegate*)_argBasePtr->obj;
					CHECK_NOT_NULL_THROW(_del);
					if (_del->delegates == nullptr)
					{
						const MethodInfo* method = _del->delegate.method;
						Il2CppObject* target = _del->delegate.target;
						// uint8_t _actualParameterCount = method->parameters_count + hybridclr::metadata::IsInstanceMethod(method);
						if (hybridclr::metadata::IsInterpreterImplement(method))
						{
							switch ((int32_t)__invokeParamCount - (int32_t)method->parameters_count)
							{
							case 0:
							{
								if (hybridclr::metadata::IsInstanceMethod(method))
								{
									CHECK_NOT_NULL_THROW(target);
									if (IS_CLASS_VALUE_TYPE(method->klass))
									{
										target++;
									}
									_argBasePtr->obj = target;
								}
								else
								{
									_argBasePtr++;
									_resolvedArgIdxs++;
								}
								break;
							}
							case -1:
							{
								CHECK_NOT_NULL_THROW(target);
								_argBasePtr->obj = target;
								break;
							}
							case 1:
							{
								_resolvedArgIdxs++;
								_argBasePtr = localVarBase + _resolvedArgIdxs[0];
								break;
							}
							default:
							{
								RaiseExecutionEngineException("CallInterpDelegate");
							}
							}
							CALL_INTERP_RET((ip + 24), method, _argBasePtr, _ret);
							continue;
						}
						else
						{
							Managed2NativeCallMethod _staticM2NMethod = (Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeStaticMethod];
							Managed2NativeCallMethod _instanceM2NMethod = (Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeInstanceMethod];
							Managed2NativeCallMethod _managed2NativeCallMethod = nullptr;
							switch ((int32_t)__invokeParamCount - (int32_t)method->parameters_count)
							{
							case 0:
								{
									if (hybridclr::metadata::IsInstanceMethod(method))
									{
										CHECK_NOT_NULL_THROW(target);
										FixCallNativeThisPointer(method, _argBasePtr, target);
										_managed2NativeCallMethod = _instanceM2NMethod;
									}
									else
									{
										_argBasePtr++;
										_resolvedArgIdxs++;
										_managed2NativeCallMethod = _staticM2NMethod;
									}
									break;
								}
							case -1:
								{
									CHECK_NOT_NULL_THROW(target);
									FixCallNativeThisPointer(method, _argBasePtr, target);
									_managed2NativeCallMethod = _instanceM2NMethod;
									break;
								}
							case 1:
								{
									_resolvedArgIdxs++;
									_argBasePtr = localVarBase + _resolvedArgIdxs[0];
					#if HYBRIDCLR_UNITY_2021_OR_NEW == 0
									if (hybridclr::metadata::IsInstanceMethod(method) && IS_CLASS_VALUE_TYPE(method->klass))
									{
										_argBasePtr->obj -= 1;
									}
					#endif
									_managed2NativeCallMethod = _staticM2NMethod;
									break;
								}
							default:
								{
									RaiseExecutionEngineException("CallInterpDelegate");
								}
							}
							_managed2NativeCallMethod(method, _resolvedArgIdxs, localVarBase, _ret);
						}
					}
					else
					{
						Il2CppArray* dels = _del->delegates;
						Managed2NativeCallMethod _staticM2NMethod = (Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeStaticMethod];
						Managed2NativeCallMethod _instanceM2NMethod = (Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeInstanceMethod];
						for (il2cpp_array_size_t i = 0; i < dels->max_length; i++)
						{
							Il2CppMulticastDelegate* subDel = il2cpp_array_get(dels, Il2CppMulticastDelegate *, i);
							IL2CPP_ASSERT(subDel);
							//IL2CPP_ASSERT(subDel->delegate.method->klass->parent == il2cpp_defaults.multicastdelegate_class);
							IL2CPP_ASSERT(subDel->delegates == nullptr);
							const MethodInfo* method = subDel->delegate.method;
							Il2CppObject* target = subDel->delegate.target;
							CallDelegateMethod(__invokeParamCount, method, target, _staticM2NMethod, _instanceM2NMethod, _resolvedArgIdxs, localVarBase, _ret);
						}
					}
				    ip += 24;
				    continue;
				}
				case HiOpcodeEnum::CallDelegate_ret_expand:
				{
					uint32_t __managed2NativeStaticMethod = *(uint32_t*)(ip + 8);
					uint32_t __managed2NativeInstanceMethod = *(uint32_t*)(ip + 12);
					uint32_t __argIdxs = *(uint32_t*)(ip + 16);
					uint16_t __ret = *(uint16_t*)(ip + 4);
					uint16_t __invokeParamCount = *(uint16_t*)(ip + 6);
					uint8_t __retLocationType = *(uint8_t*)(ip + 2);
				    void* _ret = (void*)(localVarBase + __ret);
					uint16_t* _resolvedArgIdxs = ((uint16_t*)&imi->resolveDatas[__argIdxs]);
					StackObject* _argBasePtr = localVarBase + _resolvedArgIdxs[0];
					Il2CppMulticastDelegate* _del = (Il2CppMulticastDelegate*)_argBasePtr->obj;
					CHECK_NOT_NULL_THROW(_del);
					if (_del->delegates == nullptr)
					{
						const MethodInfo* method = _del->delegate.method;
						Il2CppObject* target = _del->delegate.target;
						// uint8_t _actualParameterCount = method->parameters_count + hybridclr::metadata::IsInstanceMethod(method);
						if (hybridclr::metadata::IsInterpreterImplement(method))
						{
							switch ((int32_t)__invokeParamCount - (int32_t)method->parameters_count)
							{
							case 0:
							{
								if (hybridclr::metadata::IsInstanceMethod(method))
								{
									CHECK_NOT_NULL_THROW(target);
									if (IS_CLASS_VALUE_TYPE(method->klass))
									{
										target++;
									}
									_argBasePtr->obj = target;
								}
								else
								{
									_argBasePtr++;
									_resolvedArgIdxs++;
								}
								break;
							}
							case -1:
							{
								CHECK_NOT_NULL_THROW(target);
								_argBasePtr->obj = target;
								break;
							}
							case 1:
							{
								_resolvedArgIdxs++;
								_argBasePtr = localVarBase + _resolvedArgIdxs[0];
								break;
							}
							default:
							{
								RaiseExecutionEngineException("CallInterpDelegate");
							}
							}
							CALL_INTERP_RET((ip + 24), method, _argBasePtr, _ret);
							continue;
						}
						else
						{
							Managed2NativeCallMethod _staticM2NMethod = (Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeStaticMethod];
							Managed2NativeCallMethod _instanceM2NMethod = (Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeInstanceMethod];
							Managed2NativeCallMethod _managed2NativeCallMethod = nullptr;
							switch ((int32_t)__invokeParamCount - (int32_t)method->parameters_count)
							{
							case 0:
								{
									if (hybridclr::metadata::IsInstanceMethod(method))
									{
										CHECK_NOT_NULL_THROW(target);
										FixCallNativeThisPointer(method, _argBasePtr, target);
										_managed2NativeCallMethod = _instanceM2NMethod;
									}
									else
									{
										_argBasePtr++;
										_resolvedArgIdxs++;
										_managed2NativeCallMethod = _staticM2NMethod;
									}
									break;
								}
							case -1:
								{
									CHECK_NOT_NULL_THROW(target);
									FixCallNativeThisPointer(method, _argBasePtr, target);
									_managed2NativeCallMethod = _instanceM2NMethod;
									break;
								}
							case 1:
								{
									_resolvedArgIdxs++;
									_argBasePtr = localVarBase + _resolvedArgIdxs[0];
					#if HYBRIDCLR_UNITY_2021_OR_NEW == 0
									if (hybridclr::metadata::IsInstanceMethod(method) && IS_CLASS_VALUE_TYPE(method->klass))
									{
										_argBasePtr->obj -= 1;
									}
					#endif
									_managed2NativeCallMethod = _staticM2NMethod;
									break;
								}
							default:
								{
									RaiseExecutionEngineException("CallInterpDelegate");
								}
							}
							_managed2NativeCallMethod(method, _resolvedArgIdxs, localVarBase, _ret);
						}
					}
					else
					{
						Il2CppArray* dels = _del->delegates;
						Managed2NativeCallMethod _staticM2NMethod = (Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeStaticMethod];
						Managed2NativeCallMethod _instanceM2NMethod = (Managed2NativeCallMethod)imi->resolveDatas[__managed2NativeInstanceMethod];
						for (il2cpp_array_size_t i = 0; i < dels->max_length; i++)
						{
							Il2CppMulticastDelegate* subDel = il2cpp_array_get(dels, Il2CppMulticastDelegate *, i);
							IL2CPP_ASSERT(subDel);
							//IL2CPP_ASSERT(subDel->delegate.method->klass->parent == il2cpp_defaults.multicastdelegate_class);
							IL2CPP_ASSERT(subDel->delegates == nullptr);
							const MethodInfo* method = subDel->delegate.method;
							Il2CppObject* target = subDel->delegate.target;
							CallDelegateMethod(__invokeParamCount, method, target, _staticM2NMethod, _instanceM2NMethod, _resolvedArgIdxs, localVarBase, _ret);
						}
					}
				    ExpandLocationData2StackDataByType(_ret, (LocationDataType)__retLocationType);
				    ip += 24;
				    continue;
				}
				case HiOpcodeEnum::NewDelegate:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __method = *(uint16_t*)(ip + 6);
				    Il2CppDelegate* del = (Il2CppDelegate*)il2cpp::vm::Object::New(__klass);
				    ConstructDelegate(del, (*(Il2CppObject**)(localVarBase + __obj)), (*(MethodInfo**)(localVarBase + __method)));
				    (*(Il2CppObject**)(localVarBase + __dst)) = (Il2CppObject*)del;
				    ip += 16;
				    continue;
				}

				//!!!}}FUNCTION
#pragma endregion

#pragma region OBJECT
		//!!!{{OBJECT
				case HiOpcodeEnum::BoxVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    (*(Il2CppObject**)(localVarBase + __dst)) = il2cpp::vm::Object::Box(__klass, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::UnBoxVarVar:
				{
					uint16_t __addr = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    (*(void**)(localVarBase + __addr)) = HiUnbox((*(Il2CppObject**)(localVarBase + __obj)), __klass);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::UnBoxAnyVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    HiUnboxAny2StackObject((*(Il2CppObject**)(localVarBase + __obj)), __klass, (void*)(localVarBase + __dst));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::CastclassVar:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint32_t __klass = *(uint32_t*)(ip + 4);
				    HiCastClass((*(Il2CppObject**)(localVarBase + __obj)), ((Il2CppClass*)imi->resolveDatas[__klass]));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::IsInstVar:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint32_t __klass = *(uint32_t*)(ip + 4);
				    (*(Il2CppObject**)(localVarBase + __obj)) = il2cpp::vm::Object::IsInst((*(Il2CppObject**)(localVarBase + __obj)), ((Il2CppClass*)imi->resolveDatas[__klass]));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdtokenVar:
				{
					uint16_t __runtimeHandle = *(uint16_t*)(ip + 2);
					void* __token = ((void*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
				    (*(void**)(localVarBase + __runtimeHandle)) = __token;
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::MakeRefVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    (*(Il2CppTypedRef*)(localVarBase + __dst)) = MAKE_TYPEDREFERENCE(__klass, (*(void**)(localVarBase + __data)));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::RefAnyTypeVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __typedRef = *(uint16_t*)(ip + 4);
				    (*(void**)(localVarBase + __dst)) = RefAnyType((*(Il2CppTypedRef*)(localVarBase + __typedRef)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::RefAnyValueVarVar:
				{
					uint16_t __addr = *(uint16_t*)(ip + 2);
					uint16_t __typedRef = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    (*(void**)(localVarBase + __addr)) = RefAnyValue((*(Il2CppTypedRef*)(localVarBase + __typedRef)), __klass);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::CpobjVarVar_1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy1((*(void**)(localVarBase + __dst)), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CpobjVarVar_2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy2((*(void**)(localVarBase + __dst)), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CpobjVarVar_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy4((*(void**)(localVarBase + __dst)), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CpobjVarVar_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy8((*(void**)(localVarBase + __dst)), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CpobjVarVar_12:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy12((*(void**)(localVarBase + __dst)), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CpobjVarVar_16:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy16((*(void**)(localVarBase + __dst)), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CpobjVarVar_20:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy20((*(void**)(localVarBase + __dst)), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CpobjVarVar_24:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy24((*(void**)(localVarBase + __dst)), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CpobjVarVar_28:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy28((*(void**)(localVarBase + __dst)), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CpobjVarVar_32:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy32((*(void**)(localVarBase + __dst)), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CpobjVarVar_n_2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					uint16_t __size = *(uint16_t*)(ip + 6);
					std::memmove((*(void**)(localVarBase + __dst)), (*(void**)(localVarBase + __src)), (*(uint16_t*)(localVarBase + __size)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::CpobjVarVar_n_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					uint16_t __size = *(uint16_t*)(ip + 6);
					std::memmove((*(void**)(localVarBase + __dst)), (*(void**)(localVarBase + __src)), (*(uint32_t*)(localVarBase + __size)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdobjVarVar_1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy1((void*)(localVarBase + __dst), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdobjVarVar_2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy2((void*)(localVarBase + __dst), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdobjVarVar_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy4((void*)(localVarBase + __dst), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdobjVarVar_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy8((void*)(localVarBase + __dst), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdobjVarVar_12:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy12((void*)(localVarBase + __dst), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdobjVarVar_16:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy16((void*)(localVarBase + __dst), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdobjVarVar_20:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy20((void*)(localVarBase + __dst), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdobjVarVar_24:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy24((void*)(localVarBase + __dst), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdobjVarVar_28:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy28((void*)(localVarBase + __dst), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdobjVarVar_32:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy32((void*)(localVarBase + __dst), (*(void**)(localVarBase + __src)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdobjVarVar_n_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					uint16_t __size = *(uint16_t*)(ip + 6);
					std::memmove((void*)(localVarBase + __dst), (*(void**)(localVarBase + __src)), __size);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StobjVarVar_1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy1((*(void**)(localVarBase + __dst)), (void*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StobjVarVar_2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy2((*(void**)(localVarBase + __dst)), (void*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StobjVarVar_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy4((*(void**)(localVarBase + __dst)), (void*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StobjVarVar_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy8((*(void**)(localVarBase + __dst)), (void*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StobjVarVar_12:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy12((*(void**)(localVarBase + __dst)), (void*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StobjVarVar_16:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy16((*(void**)(localVarBase + __dst)), (void*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StobjVarVar_20:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy20((*(void**)(localVarBase + __dst)), (void*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StobjVarVar_24:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy24((*(void**)(localVarBase + __dst)), (void*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StobjVarVar_28:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy28((*(void**)(localVarBase + __dst)), (void*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StobjVarVar_32:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					Copy32((*(void**)(localVarBase + __dst)), (void*)(localVarBase + __src));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StobjVarVar_n_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __src = *(uint16_t*)(ip + 4);
					uint16_t __size = *(uint16_t*)(ip + 6);
					std::memmove((*(void**)(localVarBase + __dst)), (void*)(localVarBase + __src), __size);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitobjVar_1:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					InitDefault1((*(void**)(localVarBase + __obj)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitobjVar_2:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					InitDefault2((*(void**)(localVarBase + __obj)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitobjVar_4:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					InitDefault4((*(void**)(localVarBase + __obj)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitobjVar_8:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					InitDefault8((*(void**)(localVarBase + __obj)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitobjVar_12:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					InitDefault12((*(void**)(localVarBase + __obj)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitobjVar_16:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					InitDefault16((*(void**)(localVarBase + __obj)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitobjVar_20:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					InitDefault20((*(void**)(localVarBase + __obj)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitobjVar_24:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					InitDefault24((*(void**)(localVarBase + __obj)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitobjVar_28:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					InitDefault28((*(void**)(localVarBase + __obj)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitobjVar_32:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					InitDefault32((*(void**)(localVarBase + __obj)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitobjVar_n_2:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __size = *(uint16_t*)(ip + 4);
					InitDefaultN((*(void**)(localVarBase + __obj)), __size);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InitobjVar_n_4:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint32_t __size = *(uint32_t*)(ip + 4);
					InitDefaultN((*(void**)(localVarBase + __obj)), __size);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdstrVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint32_t __str = *(uint32_t*)(ip + 4);
				    (*(Il2CppString**)(localVarBase + __dst)) = ((Il2CppString*)imi->resolveDatas[__str]);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    (*(int32_t*)(localVarBase + __dst)) = *(int8_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    (*(int32_t*)(localVarBase + __dst)) = *(uint8_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    (*(int32_t*)(localVarBase + __dst)) = *(int16_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    (*(int32_t*)(localVarBase + __dst)) = *(uint16_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    (*(int32_t*)(localVarBase + __dst)) = *(int32_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    (*(int32_t*)(localVarBase + __dst)) = *(uint32_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    (*(int64_t*)(localVarBase + __dst)) = *(int64_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    (*(int64_t*)(localVarBase + __dst)) = *(uint64_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_size_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy8((void*)(localVarBase + __dst), (uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_size_12:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy12((void*)(localVarBase + __dst), (uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_size_16:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy16((void*)(localVarBase + __dst), (uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_size_20:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy20((void*)(localVarBase + __dst), (uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_size_24:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy24((void*)(localVarBase + __dst), (uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_size_28:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy28((void*)(localVarBase + __dst), (uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_size_32:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy32((void*)(localVarBase + __dst), (uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_n_2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					uint16_t __size = *(uint16_t*)(ip + 8);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    std::memmove((void*)(localVarBase + __dst), (uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset, __size);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdfldVarVar_n_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					uint32_t __size = *(uint32_t*)(ip + 8);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    std::memmove((void*)(localVarBase + __dst), (uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset, __size);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __dst)) = *(int8_t*)((byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __dst)) = *(uint8_t*)((byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __dst)) = *(int16_t*)((byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __dst)) = *(uint16_t*)((byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __dst)) = *(int32_t*)((byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					(*(int32_t*)(localVarBase + __dst)) = *(uint32_t*)((byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __dst)) = *(int64_t*)((byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					(*(int64_t*)(localVarBase + __dst)) = *(uint64_t*)((byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_size_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					Copy8((void*)(localVarBase + __dst), (byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_size_12:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					Copy12((void*)(localVarBase + __dst), (byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_size_16:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					Copy16((void*)(localVarBase + __dst), (byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_size_20:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					Copy20((void*)(localVarBase + __dst), (byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_size_24:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					Copy24((void*)(localVarBase + __dst), (byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_size_28:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					Copy28((void*)(localVarBase + __dst), (byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_size_32:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					Copy32((void*)(localVarBase + __dst), (byte*)(void*)(localVarBase + __obj) + __offset);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_n_2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					uint16_t __size = *(uint16_t*)(ip + 8);
					std::memmove((void*)(localVarBase + __dst), (byte*)(void*)(localVarBase + __obj) + __offset, __size);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdfldValueTypeVarVar_n_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
					uint32_t __size = *(uint32_t*)(ip + 8);
					std::memmove((void*)(localVarBase + __dst), (byte*)(void*)(localVarBase + __obj) + __offset, __size);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdfldaVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __offset = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    (*(void**)(localVarBase + __dst)) = (uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset;
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_i1:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    *(int8_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset) = (*(int8_t*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_u1:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    *(uint8_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset) = (*(uint8_t*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_i2:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    *(int16_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset) = (*(int16_t*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_u2:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    *(uint16_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset) = (*(uint16_t*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_i4:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    *(int32_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset) = (*(int32_t*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_u4:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    *(uint32_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset) = (*(uint32_t*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_i8:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    *(int64_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset) = (*(int64_t*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_u8:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    *(uint64_t*)((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset) = (*(uint64_t*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_size_8:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy8((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset, (void*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_size_12:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy12((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset, (void*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_size_16:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy16((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset, (void*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_size_20:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy20((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset, (void*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_size_24:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy24((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset, (void*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_size_28:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy28((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset, (void*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_size_32:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    Copy32((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset, (void*)(localVarBase + __data));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_n_2:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
					uint16_t __size = *(uint16_t*)(ip + 8);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    std::memmove((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset, (void*)(localVarBase + __data), __size);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StfldVarVar_n_4:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __data = *(uint16_t*)(ip + 6);
					uint32_t __size = *(uint32_t*)(ip + 8);
				    CHECK_NOT_NULL_THROW((*(Il2CppObject**)(localVarBase + __obj)));
				    std::memmove((uint8_t*)(*(Il2CppObject**)(localVarBase + __obj)) + __offset, (void*)(localVarBase + __data), __size);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int32_t*)(localVarBase + __dst)) = *(int8_t*)(((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int32_t*)(localVarBase + __dst)) = *(uint8_t*)(((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int32_t*)(localVarBase + __dst)) = *(int16_t*)(((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int32_t*)(localVarBase + __dst)) = *(uint16_t*)(((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int32_t*)(localVarBase + __dst)) = *(int32_t*)(((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int32_t*)(localVarBase + __dst)) = *(uint32_t*)(((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int64_t*)(localVarBase + __dst)) = *(int64_t*)(((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int64_t*)(localVarBase + __dst)) = *(uint64_t*)(((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_size_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy8((void*)(localVarBase + __dst), ((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_size_12:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy12((void*)(localVarBase + __dst), ((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_size_16:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy16((void*)(localVarBase + __dst), ((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_size_20:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy20((void*)(localVarBase + __dst), ((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_size_24:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy24((void*)(localVarBase + __dst), ((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_size_28:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy28((void*)(localVarBase + __dst), ((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_size_32:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy32((void*)(localVarBase + __dst), ((byte*)__klass->static_fields) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_n_2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint16_t __size = *(uint16_t*)(ip + 6);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    std::memmove((void*)(localVarBase + __dst), (((byte*)__klass->static_fields) + __offset), __size);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldVarVar_n_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
					uint32_t __size = *(uint32_t*)(ip + 12);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    std::memmove((void*)(localVarBase + __dst), (((byte*)__klass->static_fields) + __offset), __size);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_i1:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(int8_t*)(((byte*)__klass->static_fields) + __offset) = (*(int8_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_u1:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(uint8_t*)(((byte*)__klass->static_fields) + __offset) = (*(uint8_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_i2:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(int16_t*)(((byte*)__klass->static_fields) + __offset) = (*(int16_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_u2:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(uint16_t*)(((byte*)__klass->static_fields) + __offset) = (*(uint16_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_i4:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(int32_t*)(((byte*)__klass->static_fields) + __offset) = (*(int32_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_u4:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(uint32_t*)(((byte*)__klass->static_fields) + __offset) = (*(uint32_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_i8:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(int64_t*)(((byte*)__klass->static_fields) + __offset) = (*(int64_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_u8:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(uint64_t*)(((byte*)__klass->static_fields) + __offset) = (*(uint64_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_size_8:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy8(((byte*)__klass->static_fields) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_size_12:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy12(((byte*)__klass->static_fields) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_size_16:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy16(((byte*)__klass->static_fields) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_size_20:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy20(((byte*)__klass->static_fields) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_size_24:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy24(((byte*)__klass->static_fields) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_size_28:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy28(((byte*)__klass->static_fields) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_size_32:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy32(((byte*)__klass->static_fields) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_n_2:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
					uint16_t __size = *(uint16_t*)(ip + 6);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    std::memmove(((byte*)__klass->static_fields) + __offset, (void*)(localVarBase + __data), __size);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StsfldVarVar_n_4:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
					uint32_t __size = *(uint32_t*)(ip + 12);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    std::memmove(((byte*)__klass->static_fields) + __offset, (void*)(localVarBase + __data), __size);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldaVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(void**)(localVarBase + __dst)) = ((byte*)__klass->static_fields) + __offset;
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdsfldaFromFieldDataVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					void* __src = ((void*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
				    (*(void**)(localVarBase + __dst)) = __src;
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalaVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(void**)(localVarBase + __dst)) = (byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset;
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_i1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int32_t*)(localVarBase + __dst)) = *(int8_t*)((byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_u1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int32_t*)(localVarBase + __dst)) = *(uint8_t*)((byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_i2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int32_t*)(localVarBase + __dst)) = *(int16_t*)((byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_u2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int32_t*)(localVarBase + __dst)) = *(uint16_t*)((byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_i4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int32_t*)(localVarBase + __dst)) = *(int32_t*)((byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_u4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int32_t*)(localVarBase + __dst)) = *(uint32_t*)((byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_i8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int64_t*)(localVarBase + __dst)) = *(int64_t*)((byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_u8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    (*(int64_t*)(localVarBase + __dst)) = *(uint64_t*)((byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_size_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy8((void*)(localVarBase + __dst), (byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_size_12:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy12((void*)(localVarBase + __dst), (byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_size_16:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy16((void*)(localVarBase + __dst), (byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_size_20:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy20((void*)(localVarBase + __dst), (byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_size_24:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy24((void*)(localVarBase + __dst), (byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_size_28:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy28((void*)(localVarBase + __dst), (byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_size_32:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy32((void*)(localVarBase + __dst), (byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_n_2:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					int32_t __offset = *(int32_t*)(ip + 12);
					uint16_t __size = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    std::memmove((void*)(localVarBase + __dst), (byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset, __size);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::LdthreadlocalVarVar_n_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 4)]);
					int32_t __offset = *(int32_t*)(ip + 8);
					uint32_t __size = *(uint32_t*)(ip + 12);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    std::memmove((void*)(localVarBase + __dst), (byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset, __size);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_i1:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(int8_t*)((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset) = (*(int8_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_u1:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(uint8_t*)((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset) = (*(uint8_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_i2:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(int16_t*)((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset) = (*(int16_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_u2:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(uint16_t*)((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset) = (*(uint16_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_i4:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(int32_t*)((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset) = (*(int32_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_u4:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(uint32_t*)((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset) = (*(uint32_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_i8:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(int64_t*)((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset) = (*(int64_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_u8:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    *(uint64_t*)((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset) = (*(uint64_t*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_size_8:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy8((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_size_12:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy12((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_size_16:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy16((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_size_20:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy20((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_size_24:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy24((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_size_28:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy28((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_size_32:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    Copy32((byte*)(il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset)) + __offset, (void*)(localVarBase + __data));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_n_2:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
					uint16_t __size = *(uint16_t*)(ip + 6);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    std::memmove((byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset, (void*)(localVarBase + __data), __size);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::StthreadlocalVarVar_n_4:
				{
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
					uint16_t __offset = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
					uint32_t __size = *(uint32_t*)(ip + 12);
				    Interpreter::RuntimeClassCCtorInit(__klass);
				    std::memmove((byte*)il2cpp::vm::Thread::GetThreadStaticData(__klass->thread_static_fields_offset) + __offset, (void*)(localVarBase + __data), __size);
				    ip += 16;
				    continue;
				}

				//!!!}}OBJECT
#pragma endregion

#pragma region ARRAY
		//!!!{{ARRAY
				case HiOpcodeEnum::NewArrVarVar_4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __size = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    (*(Il2CppArray**)(localVarBase + __arr)) =  il2cpp::vm::Array::NewSpecific(__klass, (*(int32_t*)(localVarBase + __size)));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::NewArrVarVar_8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __size = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    (*(Il2CppArray**)(localVarBase + __arr)) =  il2cpp::vm::Array::NewSpecific(__klass, (*(int64_t*)(localVarBase + __size)));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::GetArrayLengthVarVar_4:
				{
					uint16_t __len = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
				    CHECK_NOT_NULL_THROW((*(Il2CppArray**)(localVarBase + __arr)));
				    (*(uint32_t*)(localVarBase + __len)) = (uint32_t)il2cpp::vm::Array::GetLength((*(Il2CppArray**)(localVarBase + __arr)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayLengthVarVar_8:
				{
					uint16_t __len = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
				    CHECK_NOT_NULL_THROW((*(Il2CppArray**)(localVarBase + __arr)));
				    (*(uint64_t*)(localVarBase + __len)) = (uint64_t)il2cpp::vm::Array::GetLength((*(Il2CppArray**)(localVarBase + __arr)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementAddressAddrVarVar_i4:
				{
					uint16_t __addr = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int32_t*)(localVarBase + __index)));
				    (*(void**)(localVarBase + __addr)) = GET_ARRAY_ELEMENT_ADDRESS(arr, (*(int32_t*)(localVarBase + __index)), il2cpp::vm::Array::GetElementSize(arr->klass));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementAddressAddrVarVar_i8:
				{
					uint16_t __addr = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int64_t*)(localVarBase + __index)));
				    (*(void**)(localVarBase + __addr)) = GET_ARRAY_ELEMENT_ADDRESS(arr, (*(int64_t*)(localVarBase + __index)), il2cpp::vm::Array::GetElementSize(arr->klass));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementAddressCheckAddrVarVar_i4:
				{
					uint16_t __addr = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
					Il2CppClass* __eleKlass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int32_t*)(localVarBase + __index)));
				    CheckArrayElementTypeMatch(arr->klass, __eleKlass);
				    (*(void**)(localVarBase + __addr)) = GET_ARRAY_ELEMENT_ADDRESS(arr, (*(int32_t*)(localVarBase + __index)), il2cpp::vm::Array::GetElementSize(arr->klass));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementAddressCheckAddrVarVar_i8:
				{
					uint16_t __addr = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
					Il2CppClass* __eleKlass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int64_t*)(localVarBase + __index)));
				    CheckArrayElementTypeMatch(arr->klass, __eleKlass);
				    (*(void**)(localVarBase + __addr)) = GET_ARRAY_ELEMENT_ADDRESS(arr, (*(int64_t*)(localVarBase + __index)), il2cpp::vm::Array::GetElementSize(arr->klass));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_i1_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int32_t*)(localVarBase + __index)));
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, int8_t, (*(int32_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_u1_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int32_t*)(localVarBase + __index)));
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, uint8_t, (*(int32_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_i2_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int32_t*)(localVarBase + __index)));
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, int16_t, (*(int32_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_u2_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int32_t*)(localVarBase + __index)));
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, uint16_t, (*(int32_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_i4_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int32_t*)(localVarBase + __index)));
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, int32_t, (*(int32_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_u4_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int32_t*)(localVarBase + __index)));
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, uint32_t, (*(int32_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_i8_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int32_t*)(localVarBase + __index)));
				    (*(int64_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, int64_t, (*(int32_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_u8_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int32_t*)(localVarBase + __index)));
				    (*(int64_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, uint64_t, (*(int32_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_size_12_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int32_t*)(localVarBase + __index)));
				    Copy12((void*)(localVarBase + __dst), GET_ARRAY_ELEMENT_ADDRESS(arr, (*(int32_t*)(localVarBase + __index)), 12));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_size_16_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int32_t*)(localVarBase + __index)));
				    Copy16((void*)(localVarBase + __dst), GET_ARRAY_ELEMENT_ADDRESS(arr, (*(int32_t*)(localVarBase + __index)), 16));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_n_4:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int32_t*)(localVarBase + __index)));
				    int32_t eleSize = il2cpp::vm::Array::GetElementSize(arr->klass);
				    std::memmove((void*)(localVarBase + __dst), GET_ARRAY_ELEMENT_ADDRESS(arr, (*(int32_t*)(localVarBase + __index)), eleSize), eleSize);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_i1_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int64_t*)(localVarBase + __index)));
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, int8_t, (*(int64_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_u1_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int64_t*)(localVarBase + __index)));
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, uint8_t, (*(int64_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_i2_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int64_t*)(localVarBase + __index)));
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, int16_t, (*(int64_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_u2_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int64_t*)(localVarBase + __index)));
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, uint16_t, (*(int64_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_i4_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int64_t*)(localVarBase + __index)));
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, int32_t, (*(int64_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_u4_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int64_t*)(localVarBase + __index)));
				    (*(int32_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, uint32_t, (*(int64_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_i8_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int64_t*)(localVarBase + __index)));
				    (*(int64_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, int64_t, (*(int64_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_u8_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int64_t*)(localVarBase + __index)));
				    (*(int64_t*)(localVarBase + __dst)) = il2cpp_array_get(arr, uint64_t, (*(int64_t*)(localVarBase + __index)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_size_12_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int64_t*)(localVarBase + __index)));
				    Copy12((void*)(localVarBase + __dst), GET_ARRAY_ELEMENT_ADDRESS(arr, (*(int64_t*)(localVarBase + __index)), 12));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_size_16_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int64_t*)(localVarBase + __index)));
				    Copy16((void*)(localVarBase + __dst), GET_ARRAY_ELEMENT_ADDRESS(arr, (*(int64_t*)(localVarBase + __index)), 16));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetArrayElementVarVar_n_8:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __index = *(uint16_t*)(ip + 6);
				    Il2CppArray* arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(arr, (*(int64_t*)(localVarBase + __index)));
				    int32_t eleSize = il2cpp::vm::Array::GetElementSize(arr->klass);
				    std::memmove((void*)(localVarBase + __dst), GET_ARRAY_ELEMENT_ADDRESS(arr, (*(int64_t*)(localVarBase + __index)), eleSize), eleSize);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_i1_4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int32_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), int8_t, (*(int32_t*)(localVarBase + __index)), (*(int8_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_u1_4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int32_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), uint8_t, (*(int32_t*)(localVarBase + __index)), (*(uint8_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_i2_4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int32_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), int16_t, (*(int32_t*)(localVarBase + __index)), (*(int16_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_u2_4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int32_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), uint16_t, (*(int32_t*)(localVarBase + __index)), (*(uint16_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_i4_4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int32_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), int32_t, (*(int32_t*)(localVarBase + __index)), (*(int32_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_u4_4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int32_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), uint32_t, (*(int32_t*)(localVarBase + __index)), (*(uint32_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_i8_4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int32_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), int64_t, (*(int32_t*)(localVarBase + __index)), (*(int64_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_u8_4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int32_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), uint64_t, (*(int32_t*)(localVarBase + __index)), (*(uint64_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_ref_4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int32_t*)(localVarBase + __index)));
				    CheckArrayElementTypeCompatible((*(Il2CppArray**)(localVarBase + __arr)), (*(Il2CppObject**)(localVarBase + __ele)));
				    il2cpp_array_setref((*(Il2CppArray**)(localVarBase + __arr)), (*(int32_t*)(localVarBase + __index)), (*(Il2CppObject**)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_size_12_4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int32_t*)(localVarBase + __index)));
				    Copy12(GET_ARRAY_ELEMENT_ADDRESS(_arr, (*(int32_t*)(localVarBase + __index)), 12), (void*)(localVarBase + __ele));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_size_16_4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int32_t*)(localVarBase + __index)));
				    Copy16(GET_ARRAY_ELEMENT_ADDRESS(_arr, (*(int32_t*)(localVarBase + __index)), 16), (void*)(localVarBase + __ele));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_n_4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int32_t*)(localVarBase + __index)));
				    int32_t _eleSize = il2cpp::vm::Array::GetElementSize(_arr->klass);
				    il2cpp_array_setrefwithsize(_arr, _eleSize, (*(int32_t*)(localVarBase + __index)), (void*)(localVarBase + __ele));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_i1_8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int64_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), int8_t, (*(int64_t*)(localVarBase + __index)), (*(int8_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_u1_8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int64_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), uint8_t, (*(int64_t*)(localVarBase + __index)), (*(uint8_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_i2_8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int64_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), int16_t, (*(int64_t*)(localVarBase + __index)), (*(int16_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_u2_8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int64_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), uint16_t, (*(int64_t*)(localVarBase + __index)), (*(uint16_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_i4_8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int64_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), int32_t, (*(int64_t*)(localVarBase + __index)), (*(int32_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_u4_8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int64_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), uint32_t, (*(int64_t*)(localVarBase + __index)), (*(uint32_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_i8_8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int64_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), int64_t, (*(int64_t*)(localVarBase + __index)), (*(int64_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_u8_8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int64_t*)(localVarBase + __index)));
				    il2cpp_array_set((*(Il2CppArray**)(localVarBase + __arr)), uint64_t, (*(int64_t*)(localVarBase + __index)), (*(uint64_t*)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_ref_8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int64_t*)(localVarBase + __index)));
				    CheckArrayElementTypeCompatible((*(Il2CppArray**)(localVarBase + __arr)), (*(Il2CppObject**)(localVarBase + __ele)));
				    il2cpp_array_setref((*(Il2CppArray**)(localVarBase + __arr)), (*(int64_t*)(localVarBase + __index)), (*(Il2CppObject**)(localVarBase + __ele)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_size_12_8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int64_t*)(localVarBase + __index)));
				    Copy12(GET_ARRAY_ELEMENT_ADDRESS(_arr, (*(int64_t*)(localVarBase + __index)), 12), (void*)(localVarBase + __ele));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_size_16_8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int64_t*)(localVarBase + __index)));
				    Copy16(GET_ARRAY_ELEMENT_ADDRESS(_arr, (*(int64_t*)(localVarBase + __index)), 16), (void*)(localVarBase + __ele));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetArrayElementVarVar_n_8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __index = *(uint16_t*)(ip + 4);
					uint16_t __ele = *(uint16_t*)(ip + 6);
				    Il2CppArray* _arr = (*(Il2CppArray**)(localVarBase + __arr));
				    CHECK_NOT_NULL_AND_ARRAY_BOUNDARY(_arr, (*(int64_t*)(localVarBase + __index)));
				    int32_t _eleSize = il2cpp::vm::Array::GetElementSize(_arr->klass);
				    il2cpp_array_setrefwithsize(_arr, _eleSize, (*(int64_t*)(localVarBase + __index)), (void*)(localVarBase + __ele));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::NewMdArrVarVar_length:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __lengthIdxs = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    (*(Il2CppArray**)(localVarBase + __arr)) =  NewMdArray(__klass, (StackObject*)(void*)(localVarBase + __lengthIdxs), nullptr);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::NewMdArrVarVar_length_bound:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __lengthIdxs = *(uint16_t*)(ip + 4);
					uint16_t __lowerBoundIdxs = *(uint16_t*)(ip + 6);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    (*(Il2CppArray**)(localVarBase + __arr)) =  NewMdArray(__klass, (StackObject*)(void*)(localVarBase + __lengthIdxs), (StackObject*)(void*)(localVarBase + __lowerBoundIdxs));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::GetMdArrElementVarVar_i1:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __lengthIdxs = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
				    GetMdArrayElementExpandToStack<int8_t>((*(Il2CppArray**)(localVarBase + __arr)), (StackObject*)(void*)(localVarBase + __lengthIdxs), (void*)(localVarBase + __value));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetMdArrElementVarVar_u1:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __lengthIdxs = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
				    GetMdArrayElementExpandToStack<uint8_t>((*(Il2CppArray**)(localVarBase + __arr)), (StackObject*)(void*)(localVarBase + __lengthIdxs), (void*)(localVarBase + __value));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetMdArrElementVarVar_i2:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __lengthIdxs = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
				    GetMdArrayElementExpandToStack<int16_t>((*(Il2CppArray**)(localVarBase + __arr)), (StackObject*)(void*)(localVarBase + __lengthIdxs), (void*)(localVarBase + __value));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetMdArrElementVarVar_u2:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __lengthIdxs = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
				    GetMdArrayElementExpandToStack<uint16_t>((*(Il2CppArray**)(localVarBase + __arr)), (StackObject*)(void*)(localVarBase + __lengthIdxs), (void*)(localVarBase + __value));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetMdArrElementVarVar_i4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __lengthIdxs = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
				    GetMdArrayElementCopyToStack<int32_t>((*(Il2CppArray**)(localVarBase + __arr)), (StackObject*)(void*)(localVarBase + __lengthIdxs), (void*)(localVarBase + __value));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetMdArrElementVarVar_u4:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __lengthIdxs = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
				    GetMdArrayElementCopyToStack<uint32_t>((*(Il2CppArray**)(localVarBase + __arr)), (StackObject*)(void*)(localVarBase + __lengthIdxs), (void*)(localVarBase + __value));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetMdArrElementVarVar_i8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __lengthIdxs = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
				    GetMdArrayElementCopyToStack<int64_t>((*(Il2CppArray**)(localVarBase + __arr)), (StackObject*)(void*)(localVarBase + __lengthIdxs), (void*)(localVarBase + __value));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetMdArrElementVarVar_u8:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __lengthIdxs = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
				    GetMdArrayElementCopyToStack<uint64_t>((*(Il2CppArray**)(localVarBase + __arr)), (StackObject*)(void*)(localVarBase + __lengthIdxs), (void*)(localVarBase + __value));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetMdArrElementVarVar_size:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __lengthIdxs = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
				    GetMdArrayElementBySize((*(Il2CppArray**)(localVarBase + __arr)), (StackObject*)(void*)(localVarBase + __lengthIdxs), (void*)(localVarBase + __value));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::GetMdArrElementAddressVarVar:
				{
					uint16_t __addr = *(uint16_t*)(ip + 2);
					uint16_t __arr = *(uint16_t*)(ip + 4);
					uint16_t __lengthIdxs = *(uint16_t*)(ip + 6);
				    (*(void**)(localVarBase + __addr)) = GetMdArrayElementAddress((*(Il2CppArray**)(localVarBase + __arr)), (StackObject*)(void*)(localVarBase + __lengthIdxs));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::SetMdArrElementVarVar:
				{
					uint16_t __arr = *(uint16_t*)(ip + 2);
					uint16_t __lengthIdxs = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
				    SetMdArrayElement((*(Il2CppArray**)(localVarBase + __arr)), (StackObject*)(void*)(localVarBase + __lengthIdxs), (void*)(localVarBase + __value));
				    ip += 8;
				    continue;
				}

				//!!!}}ARRAY
#pragma endregion

#pragma region EXCEPTION
		//!!!{{EXCEPTION
				case HiOpcodeEnum::ThrowEx:
				{
					uint16_t __exceptionObj = *(uint16_t*)(ip + 2);
					uint16_t __firstHandlerIndex = *(uint16_t*)(ip + 4);
					THROW_EX((Il2CppException*)(*(Il2CppObject**)(localVarBase + __exceptionObj)), __firstHandlerIndex);
				    continue;
				}
				case HiOpcodeEnum::RethrowEx:
				{
					RETHROW_EX();
				    continue;
				}
				case HiOpcodeEnum::LeaveEx:
				{
					int32_t __target = *(int32_t*)(ip + 4);
					uint16_t __firstHandlerIndex = *(uint16_t*)(ip + 2);
					LEAVE_EX(__target, __firstHandlerIndex);
				    continue;
				}
				case HiOpcodeEnum::LeaveEx_Directly:
				{
					int32_t __target = *(int32_t*)(ip + 4);
					LEAVE_EX_DIRECTLY(__target);
				    continue;
				}
				case HiOpcodeEnum::EndFilterEx:
				{
					uint16_t __value = *(uint16_t*)(ip + 2);
					ENDFILTER_EX((*(bool*)(localVarBase + __value)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::EndFinallyEx:
				{
					ENDFINALLY_EX();
				    continue;
				}

				//!!!}}EXCEPTION
#pragma endregion

#pragma region instrinct
		//!!!{{INSTRINCT
				case HiOpcodeEnum::NullableNewVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    NewNullableValueType((void*)(localVarBase + __dst), (void*)(localVarBase + __data), __klass);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::NullableCtorVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __data = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    InitNullableValueType((*(void**)(localVarBase + __dst)), (void*)(localVarBase + __data), __klass);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::NullableHasValueVar:
				{
					uint16_t __result = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    (*(uint32_t*)(localVarBase + __result)) = IsNullableHasValue((*(void**)(localVarBase + __obj)), __klass);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::NullableGetValueOrDefaultVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    GetNullableValueOrDefault2StackDataByType((void*)(localVarBase + __dst), (*(void**)(localVarBase + __obj)), __klass);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::NullableGetValueOrDefaultVarVar_1:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					uint16_t __defaultValue = *(uint16_t*)(ip + 6);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    GetNullableValueOrDefault2StackDataByType((void*)(localVarBase + __dst), (*(void**)(localVarBase + __obj)), (void*)(localVarBase + __defaultValue), __klass);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::NullableGetValueVarVar:
				{
					uint16_t __dst = *(uint16_t*)(ip + 2);
					uint16_t __obj = *(uint16_t*)(ip + 4);
					Il2CppClass* __klass = ((Il2CppClass*)imi->resolveDatas[*(uint32_t*)(ip + 8)]);
				    GetNullableValueOrDefault2StackDataByType((void*)(localVarBase + __dst), (*(void**)(localVarBase + __obj)), nullptr, __klass);
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::InterlockedCompareExchangeVarVarVarVar_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __location = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
					uint16_t __comparand = *(uint16_t*)(ip + 8);
				    (*(int32_t*)(localVarBase + __ret)) = HiInterlockedCompareExchange((int32_t*)(*(void**)(localVarBase + __location)), (*(int32_t*)(localVarBase + __value)), (*(int32_t*)(localVarBase + __comparand)));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::InterlockedCompareExchangeVarVarVarVar_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __location = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
					uint16_t __comparand = *(uint16_t*)(ip + 8);
				    (*(int64_t*)(localVarBase + __ret)) = HiInterlockedCompareExchange((int64_t*)(*(void**)(localVarBase + __location)), (*(int64_t*)(localVarBase + __value)), (*(int64_t*)(localVarBase + __comparand)));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::InterlockedCompareExchangeVarVarVarVar_pointer:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __location = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
					uint16_t __comparand = *(uint16_t*)(ip + 8);
				    (*(void**)(localVarBase + __ret)) = HiInterlockedCompareExchange((void**)(*(void**)(localVarBase + __location)), (*(void**)(localVarBase + __value)), (*(void**)(localVarBase + __comparand)));
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::InterlockedExchangeVarVarVar_i4:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __location = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
				    (*(int32_t*)(localVarBase + __ret)) = HiInterlockedExchange((int32_t*)(*(void**)(localVarBase + __location)), (*(int32_t*)(localVarBase + __value)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InterlockedExchangeVarVarVar_i8:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __location = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
				    (*(int64_t*)(localVarBase + __ret)) = HiInterlockedExchange((int64_t*)(*(void**)(localVarBase + __location)), (*(int64_t*)(localVarBase + __value)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::InterlockedExchangeVarVarVar_pointer:
				{
					uint16_t __ret = *(uint16_t*)(ip + 2);
					uint16_t __location = *(uint16_t*)(ip + 4);
					uint16_t __value = *(uint16_t*)(ip + 6);
				    (*(void**)(localVarBase + __ret)) = HiInterlockedExchange((void**)(*(void**)(localVarBase + __location)), (*(void**)(localVarBase + __value)));
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::NewSystemObjectVar:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
				(*(Il2CppObject**)(localVarBase + __obj)) = il2cpp::vm::Object::New(il2cpp_defaults.object_class);
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::NewVector2:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __x = *(uint16_t*)(ip + 4);
					uint16_t __y = *(uint16_t*)(ip + 6);
				    *(HtVector2f*)(*(void**)(localVarBase + __obj)) = {(*(float*)(localVarBase + __x)), (*(float*)(localVarBase + __y))};
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::NewVector3_2:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __x = *(uint16_t*)(ip + 4);
					uint16_t __y = *(uint16_t*)(ip + 6);
				    *(HtVector3f*)(*(void**)(localVarBase + __obj)) = {(*(float*)(localVarBase + __x)), (*(float*)(localVarBase + __y)), 0};
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::NewVector3_3:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __x = *(uint16_t*)(ip + 4);
					uint16_t __y = *(uint16_t*)(ip + 6);
					uint16_t __z = *(uint16_t*)(ip + 8);
				    *(HtVector3f*)(*(void**)(localVarBase + __obj)) = {(*(float*)(localVarBase + __x)), (*(float*)(localVarBase + __y)), (*(float*)(localVarBase + __z))};
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::NewVector4_2:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __x = *(uint16_t*)(ip + 4);
					uint16_t __y = *(uint16_t*)(ip + 6);
				    *(HtVector4f*)(*(void**)(localVarBase + __obj)) = {(*(float*)(localVarBase + __x)), (*(float*)(localVarBase + __y)), 0, 0};
				    ip += 8;
				    continue;
				}
				case HiOpcodeEnum::NewVector4_3:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __x = *(uint16_t*)(ip + 4);
					uint16_t __y = *(uint16_t*)(ip + 6);
					uint16_t __z = *(uint16_t*)(ip + 8);
				    *(HtVector4f*)(*(void**)(localVarBase + __obj)) = {(*(float*)(localVarBase + __x)), (*(float*)(localVarBase + __y)), (*(float*)(localVarBase + __z)), 0};
				    ip += 16;
				    continue;
				}
				case HiOpcodeEnum::NewVector4_4:
				{
					uint16_t __obj = *(uint16_t*)(ip + 2);
					uint16_t __x = *(uint16_t*)(ip + 4);
					uint16_t __y = *(uint16_t*)(ip + 6);
					uint16_t __z = *(uint16_t*)(ip + 8);
					uint16_t __w = *(uint16_t*)(ip + 10);
				    *(HtVector4f*)(*(void**)(localVarBase + __obj)) = {(*(float*)(localVarBase + __x)), (*(float*)(localVarBase + __y)), (*(float*)(localVarBase + __z)), (*(float*)(localVarBase + __w))};
				    ip += 16;
				    continue;
				}

				//!!!}}INSTRINCT
#pragma endregion
				default:
					RaiseExecutionEngineException("");
					break;
				}
			}
		ExitEvalLoop:;
		}
		catch (Il2CppExceptionWrapper ex)
		{
			PREPARE_EXCEPTION(ex.ex, 0);
			FIND_NEXT_EX_HANDLER_OR_UNWIND();
		}
		return;
	UnWindFail:
		IL2CPP_ASSERT(lastUnwindException);
		IL2CPP_ASSERT(interpFrameGroup.GetFrameCount() == 0);
		il2cpp::vm::Exception::Raise(lastUnwindException);
	}


}
}

