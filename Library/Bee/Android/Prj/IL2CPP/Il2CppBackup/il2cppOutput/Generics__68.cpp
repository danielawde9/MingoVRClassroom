#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB;
struct Func_2_t28B89F577966ACE68E85C35C084880FB68397861;
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
struct Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821;
struct Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4;
struct Func_2_tF12503C33FD184E465546C31F324F4C344B8975A;
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19;
struct Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C;
struct Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82;
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E;
struct Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9;
struct Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4;
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A;
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF;
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct IEnumerable_1_t64B98413ADC364FA8E2A7EF47C0E957FDDD2C1DD;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t2BB095AB2DF67A05AFA977F9A716C856D31DC5DA;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t66E4CFAFB15FAD3BA3573CE2E321AFC488F05319;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_tEECB81389808568F3A4227D00948C08133D9EE8F;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE;
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07;
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
struct Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD;
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
struct List_1_t2A856B085F5754B918764F52637F4F2F76BDED25;
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2;
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E;
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A;
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4;
struct WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7;
struct WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4;
struct WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13;
struct WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0;
struct WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343;
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A;
struct WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F;
struct WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA;
struct WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247;
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52;
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989;
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
struct WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507;
struct WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A;
struct WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960;
struct WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6;
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6;
struct MethodInfo_t;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A;
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C;

IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07  : public RuntimeObject
{
	int32_t ___threadId_0;
	int32_t ___state_1;
	int32_t ___current_2;
};
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	int32_t ___threadId_0;
	int32_t ___state_1;
	RuntimeObject* ___current_2;
};
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};
struct List_1_t2A856B085F5754B918764F52637F4F2F76BDED25  : public RuntimeObject
{
	HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576  : public RuntimeObject
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2  : public RuntimeObject
{
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF  : public RuntimeObject
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	int32_t ____size_2;
	int32_t ____version_3;
	RuntimeObject* ____syncRoot_4;
};
struct WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507  : public RuntimeObject
{
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	String_t* ___id_1;
	String_t* ___name_2;
	String_t* ___role_3;
	int32_t ___start_4;
	int32_t ___end_5;
	String_t* ___type_6;
	String_t* ___body_7;
	int32_t ___value_8;
	float ___confidence_9;
	bool ___hasData_10;
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* ___entities_11;
};
struct WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A  : public RuntimeObject
{
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	String_t* ___id_1;
	String_t* ___name_2;
	String_t* ___role_3;
	int32_t ___start_4;
	int32_t ___end_5;
	String_t* ___type_6;
	String_t* ___body_7;
	RuntimeObject* ___value_8;
	float ___confidence_9;
	bool ___hasData_10;
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* ___entities_11;
};
struct WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960  : public RuntimeObject
{
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	String_t* ___id_1;
	String_t* ___name_2;
	String_t* ___role_3;
	int32_t ___start_4;
	int32_t ___end_5;
	String_t* ___type_6;
	String_t* ___body_7;
	float ___value_8;
	float ___confidence_9;
	bool ___hasData_10;
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* ___entities_11;
};
struct WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6 : public RuntimeObject {};
struct JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6  : public RuntimeObject
{
	bool ___U3CCanReadU3Ek__BackingField_0;
	bool ___U3CCanWriteU3Ek__BackingField_1;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C  : public RuntimeObject
{
};
struct Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B 
{
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	int32_t ____current_3;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	RuntimeObject* ____current_3;
};
struct Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C 
{
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	float ____current_3;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	RuntimeObject* ___source_3;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	RuntimeObject* ___enumerator_5;
};
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	RuntimeObject* ___source_3;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	RuntimeObject* ___enumerator_5;
};
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x_0;
	float ___y_1;
	float ___z_2;
	float ___w_3;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin_0;
	float ___m_YMin_1;
	float ___m_Width_2;
	float ___m_Height_3;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin_0;
	int32_t ___m_YMin_1;
	int32_t ___m_Width_2;
	int32_t ___m_Height_3;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	String_t* ___m_Value_0;
	int32_t ___m_Type_1;
	RuntimeObject* ___tempData_2;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x_0;
	float ___y_1;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X_0;
	int32_t ___m_Y_1;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x_2;
	float ___y_3;
	float ___z_4;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X_0;
	int32_t ___m_Y_1;
	int32_t ___m_Z_2;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x_1;
	float ___y_2;
	float ___z_3;
	float ___w_4;
};
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
struct Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F 
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ____current_3;
};
struct Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD  : public RuntimeObject
{
	int32_t ___threadId_0;
	int32_t ___state_1;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___current_2;
};
struct WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___source_3;
	Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate_4;
	Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* ___selector_5;
	Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B ___enumerator_6;
};
struct WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___source_3;
	Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___predicate_4;
	Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* ___selector_5;
	Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B ___enumerator_6;
};
struct WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector_5;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_5;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};
struct WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source_3;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate_4;
	Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___selector_5;
	Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C ___enumerator_6;
};
struct WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___source_3;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate_4;
	Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* ___selector_5;
	Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C ___enumerator_6;
};
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};
struct Delegate_t  : public RuntimeObject
{
	Il2CppMethodPointer ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	RuntimeObject* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	bool ___method_is_virtual_12;
};
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
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};
struct Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 
{
	List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____current_3;
};
struct WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7  : public Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD
{
	RuntimeObject* ___source_3;
	Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* ___predicate_4;
	RuntimeObject* ___enumerator_5;
};
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector_5;
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};
struct HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 
{
	int32_t ___parent_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_1;
	float ___radius_2;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};
struct Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547 
{
	List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* ____list_0;
	int32_t ____index_1;
	int32_t ____version_2;
	HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ____current_3;
};
struct Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB  : public MulticastDelegate_t
{
};
struct Func_2_t28B89F577966ACE68E85C35C084880FB68397861  : public MulticastDelegate_t
{
};
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};
struct Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821  : public MulticastDelegate_t
{
};
struct Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4  : public MulticastDelegate_t
{
};
struct Func_2_tF12503C33FD184E465546C31F324F4C344B8975A  : public MulticastDelegate_t
{
};
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B  : public MulticastDelegate_t
{
};
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};
struct Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19  : public MulticastDelegate_t
{
};
struct Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C  : public MulticastDelegate_t
{
};
struct Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82  : public MulticastDelegate_t
{
};
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E  : public MulticastDelegate_t
{
};
struct Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9  : public MulticastDelegate_t
{
};
struct Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4  : public MulticastDelegate_t
{
};
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A  : public MulticastDelegate_t
{
};
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF  : public MulticastDelegate_t
{
};
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE  : public RuntimeObject
{
	int32_t ___threadId_0;
	int32_t ___state_1;
	HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___current_2;
};
struct WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F  : public Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD
{
	List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___source_3;
	Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* ___predicate_4;
	Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* ___selector_5;
	Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 ___enumerator_6;
};
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234  : public MulticastDelegate_t
{
};
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1  : public MulticastDelegate_t
{
};
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D  : public MulticastDelegate_t
{
};
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7  : public MulticastDelegate_t
{
};
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789  : public MulticastDelegate_t
{
};
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0  : public MulticastDelegate_t
{
};
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8  : public MulticastDelegate_t
{
};
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};
struct WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E  : public Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE
{
	RuntimeObject* ___source_3;
	Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___predicate_4;
	RuntimeObject* ___enumerator_5;
};
struct WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4  : public Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE
{
	List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* ___source_3;
	Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___predicate_4;
	Func_2_t28B89F577966ACE68E85C35C084880FB68397861* ___selector_5;
	Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547 ___enumerator_6;
};
struct List_1_t2A856B085F5754B918764F52637F4F2F76BDED25_StaticFields
{
	HandSkeletonJointU5BU5D_t51777BC841638FBD65EF72F51217D480C935E4F6* ___s_emptyArray_5;
};
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___s_emptyArray_5;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2_StaticFields
{
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___s_emptyArray_5;
};
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF_StaticFields
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___s_emptyArray_5;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA  : public RuntimeArray
{
	ALIGN_FIELD (8) JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* m_Items[1];

	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m4708B8B88298F20459F66C0D21FC878EFC261CE3_gshared (Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6950518D37796DC575F9B30A1A027E0D0485A9A7_gshared (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* __this, List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* ___0_source, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___1_predicate, Func_2_t28B89F577966ACE68E85C35C084880FB68397861* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547 List_1_GetEnumerator_m78E750642C1B7E484BA17A675320743B2D0E6143_gshared (List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 Enumerator_get_Current_m9968FC2669A2C31839A6AA5C897FE4DF3BD422B6_gshared_inline (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mEDB2597194FDAB5423DAA25874C94942311BE40B_gshared_inline (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* __this, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 Func_2_Invoke_m8D1BAA2A637751F46F1B026E79A2D36101C34AA0_gshared_inline (Func_2_t28B89F577966ACE68E85C35C084880FB68397861* __this, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m07AF5AFDCC3CCE6D5B709E0F3202AA7125CE3D22_gshared (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mED08AF901CC87637FE1D8E46DBE4F71C51BB2C43_gshared (WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E* __this, RuntimeObject* ___0_source, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE1A2D2A162D6FC64DE67E5AE6A4D3FF81E3A34FF_gshared (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_gshared_inline (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m2F5EF7EE15634492B2E930C5F3DF28F3071CD5F0_gshared_inline (Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m80BB1C97A9B4B9C60648387CF6393E5D6C6B7AE7_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mFA681ED6452214C133490C8EBCEF80076525B562_gshared_inline (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m786841EFDCE2204815816376B5AA874F846F04CE_gshared (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___0_source, Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* ___1_predicate, Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601_gshared (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_gshared_inline (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_gshared_inline (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_gshared_inline (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6_gshared (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mDA01E17BBA1696E1D1A3AFFE4505BEF3356FB987_gshared (WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7* __this, RuntimeObject* ___0_source, Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_gshared_inline (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_gshared (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_gshared_inline (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* __this, float ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonConvert_DeserializeIntoObject_TisRuntimeObject_mDA30925DA476EBAD9C82D87B82686AD2F7A1DCD5_gshared (RuntimeObject** ___0_instance, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___1_jsonToken, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___2_customConverters, const RuntimeMethod* method) ;

inline void Iterator_1__ctor_m4708B8B88298F20459F66C0D21FC878EFC261CE3 (Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*, const RuntimeMethod*))Iterator_1__ctor_m4708B8B88298F20459F66C0D21FC878EFC261CE3_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m6950518D37796DC575F9B30A1A027E0D0485A9A7 (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* __this, List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* ___0_source, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___1_predicate, Func_2_t28B89F577966ACE68E85C35C084880FB68397861* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4*, List_1_t2A856B085F5754B918764F52637F4F2F76BDED25*, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB*, Func_2_t28B89F577966ACE68E85C35C084880FB68397861*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6950518D37796DC575F9B30A1A027E0D0485A9A7_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547 List_1_GetEnumerator_m78E750642C1B7E484BA17A675320743B2D0E6143 (List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547 (*) (List_1_t2A856B085F5754B918764F52637F4F2F76BDED25*, const RuntimeMethod*))List_1_GetEnumerator_m78E750642C1B7E484BA17A675320743B2D0E6143_gshared)(__this, method);
}
inline HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 Enumerator_get_Current_m9968FC2669A2C31839A6AA5C897FE4DF3BD422B6_inline (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* __this, const RuntimeMethod* method)
{
	return ((  HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 (*) (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547*, const RuntimeMethod*))Enumerator_get_Current_m9968FC2669A2C31839A6AA5C897FE4DF3BD422B6_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_mEDB2597194FDAB5423DAA25874C94942311BE40B_inline (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* __this, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB*, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50, const RuntimeMethod*))Func_2_Invoke_mEDB2597194FDAB5423DAA25874C94942311BE40B_gshared_inline)(__this, ___0_arg, method);
}
inline HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 Func_2_Invoke_m8D1BAA2A637751F46F1B026E79A2D36101C34AA0_inline (Func_2_t28B89F577966ACE68E85C35C084880FB68397861* __this, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___0_arg, const RuntimeMethod* method)
{
	return ((  HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 (*) (Func_2_t28B89F577966ACE68E85C35C084880FB68397861*, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50, const RuntimeMethod*))Func_2_Invoke_m8D1BAA2A637751F46F1B026E79A2D36101C34AA0_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m07AF5AFDCC3CCE6D5B709E0F3202AA7125CE3D22 (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547*, const RuntimeMethod*))Enumerator_MoveNext_m07AF5AFDCC3CCE6D5B709E0F3202AA7125CE3D22_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_mED08AF901CC87637FE1D8E46DBE4F71C51BB2C43 (WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E* __this, RuntimeObject* ___0_source, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E*, RuntimeObject*, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mED08AF901CC87637FE1D8E46DBE4F71C51BB2C43_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7 (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mE1A2D2A162D6FC64DE67E5AE6A4D3FF81E3A34FF (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13*, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mE1A2D2A162D6FC64DE67E5AE6A4D3FF81E3A34FF_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, const RuntimeMethod*))List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared)(__this, method);
}
inline int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*, const RuntimeMethod*))Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_inline (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, int32_t, const RuntimeMethod*))Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m2F5EF7EE15634492B2E930C5F3DF28F3071CD5F0_inline (Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4*, int32_t, const RuntimeMethod*))Func_2_Invoke_m2F5EF7EE15634492B2E930C5F3DF28F3071CD5F0_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5 (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*, const RuntimeMethod*))Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63 (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m80BB1C97A9B4B9C60648387CF6393E5D6C6B7AE7 (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0*, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*, Func_2_tF12503C33FD184E465546C31F324F4C344B8975A*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m80BB1C97A9B4B9C60648387CF6393E5D6C6B7AE7_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mFA681ED6452214C133490C8EBCEF80076525B562_inline (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A*, int32_t, const RuntimeMethod*))Func_2_Invoke_mFA681ED6452214C133490C8EBCEF80076525B562_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01 (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___0_arg, method);
}
inline void Iterator_1__ctor_m786841EFDCE2204815816376B5AA874F846F04CE (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*, const RuntimeMethod*))Iterator_1__ctor_m786841EFDCE2204815816376B5AA874F846F04CE_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___0_source, Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* ___1_predicate, Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F*, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*, Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601 (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 (*) (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, const RuntimeMethod*))List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601_gshared)(__this, method);
}
inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_inline (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method)
{
	return ((  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (*) (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83*, const RuntimeMethod*))Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_inline (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*))Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_gshared_inline)(__this, ___0_arg, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_inline (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_arg, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*))Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6 (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83*, const RuntimeMethod*))Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_mDA01E17BBA1696E1D1A3AFFE4505BEF3356FB987 (WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7* __this, RuntimeObject* ___0_source, Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7*, RuntimeObject*, Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mDA01E17BBA1696E1D1A3AFFE4505BEF3356FB987_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5 (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA*, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_gshared)(__this, method);
}
inline float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*, const RuntimeMethod*))Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, float, const RuntimeMethod*))Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_inline (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9*, float, const RuntimeMethod*))Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209 (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*, const RuntimeMethod*))Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287 (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247*, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_inline (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* __this, float ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4*, float, const RuntimeMethod*))Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64 (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751 (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared)(__this, method);
}
inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline)(__this, ___0_arg, method);
}
inline bool JsonConvert_DeserializeIntoObject_TisWitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507_mF46512CB8E82FDFE361A83FB9D6C6A0FFE567B60 (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507** ___0_instance, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___1_jsonToken, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___2_customConverters, const RuntimeMethod* method)
{
	return ((  bool (*) (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507**, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, const RuntimeMethod*))JsonConvert_DeserializeIntoObject_TisRuntimeObject_mDA30925DA476EBAD9C82D87B82686AD2F7A1DCD5_gshared)(___0_instance, ___1_jsonToken, ___2_customConverters, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline bool JsonConvert_DeserializeIntoObject_TisWitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A_m41297B9656855D65846598E02A0081FD493B75C9 (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A** ___0_instance, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___1_jsonToken, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___2_customConverters, const RuntimeMethod* method)
{
	return ((  bool (*) (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A**, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, const RuntimeMethod*))JsonConvert_DeserializeIntoObject_TisRuntimeObject_mDA30925DA476EBAD9C82D87B82686AD2F7A1DCD5_gshared)(___0_instance, ___1_jsonToken, ___2_customConverters, method);
}
inline bool JsonConvert_DeserializeIntoObject_TisWitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960_mC50F34E55EE50A542A52AA68D9CCB44BBC4B3433 (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960** ___0_instance, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___1_jsonToken, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___2_customConverters, const RuntimeMethod* method)
{
	return ((  bool (*) (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960**, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, const RuntimeMethod*))JsonConvert_DeserializeIntoObject_TisRuntimeObject_mDA30925DA476EBAD9C82D87B82686AD2F7A1DCD5_gshared)(___0_instance, ___1_jsonToken, ___2_customConverters, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6950518D37796DC575F9B30A1A027E0D0485A9A7_gshared (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* __this, List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* ___0_source, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___1_predicate, Func_2_t28B89F577966ACE68E85C35C084880FB68397861* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m4708B8B88298F20459F66C0D21FC878EFC261CE3((Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t28B89F577966ACE68E85C35C084880FB68397861* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE* WhereSelectListIterator_2_Clone_m4A23AB9C7251D71D26DAFE5BB560E531ECCDDE10_gshared (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* __this, const RuntimeMethod* method) 
{
	{
		List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* L_0 = (List_1_t2A856B085F5754B918764F52637F4F2F76BDED25*)__this->___source_3;
		Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* L_1 = (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB*)__this->___predicate_4;
		Func_2_t28B89F577966ACE68E85C35C084880FB68397861* L_2 = (Func_2_t28B89F577966ACE68E85C35C084880FB68397861*)__this->___selector_5;
		WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* L_3 = (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m6950518D37796DC575F9B30A1A027E0D0485A9A7(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mAA77A791BE3D5D989777DA8140CE7CD0F0335E60_gshared (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2A856B085F5754B918764F52637F4F2F76BDED25* L_3 = (List_1_t2A856B085F5754B918764F52637F4F2F76BDED25*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547 L_4;
		L_4 = List_1_GetEnumerator_m78E750642C1B7E484BA17A675320743B2D0E6143(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* L_5 = (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547*)(&__this->___enumerator_6);
		HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 L_6;
		L_6 = Enumerator_get_Current_m9968FC2669A2C31839A6AA5C897FE4DF3BD422B6_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* L_7 = (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* L_8 = (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB*)__this->___predicate_4;
		HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mEDB2597194FDAB5423DAA25874C94942311BE40B_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t28B89F577966ACE68E85C35C084880FB68397861* L_11 = (Func_2_t28B89F577966ACE68E85C35C084880FB68397861*)__this->___selector_5;
		HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 L_12 = V_1;
		NullCheck(L_11);
		HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 L_13;
		L_13 = Func_2_Invoke_m8D1BAA2A637751F46F1B026E79A2D36101C34AA0_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* L_14 = (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m07AF5AFDCC3CCE6D5B709E0F3202AA7125CE3D22(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t8D3B14DC39EC0107585B14C67836EC87EFA42EBE*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mED77F102E1763A235979871C9DF710030A22ADAC_gshared (WhereSelectListIterator_2_tA5F01D210684BA61B2132E605037A2E0BCDB8EC4* __this, Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E* L_1 = (WhereEnumerableIterator_1_tA6B7D8DC6C99EF91C7833AFC13D2284BB130024E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mED08AF901CC87637FE1D8E46DBE4F71C51BB2C43(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE1A2D2A162D6FC64DE67E5AE6A4D3FF81E3A34FF_gshared (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m551DB82C97B0D14CD1CAB4742072C5086988C8F4_gshared (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* L_2 = (Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4*)__this->___selector_5;
		WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* L_3 = (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_mE1A2D2A162D6FC64DE67E5AE6A4D3FF81E3A34FF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9157C66EF2FA3246129237E64468ED7084177DC1_gshared (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_3 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_4;
		L_4 = List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_5 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_7 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_8 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* L_11 = (Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m2F5EF7EE15634492B2E930C5F3DF28F3071CD5F0_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_14 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m733ADF7FB8076669C0869C174979CE46A370EC47_gshared (WhereSelectListIterator_2_tEC5FC532BCB0C2374889A1DEAEA2A0AF67061F13* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m80BB1C97A9B4B9C60648387CF6393E5D6C6B7AE7_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_source, Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* ___1_predicate, Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mEB021C37D21C588BD23B2E31E94B78EECAC70ECC_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_1 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* L_2 = (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A*)__this->___selector_5;
		WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* L_3 = (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m80BB1C97A9B4B9C60648387CF6393E5D6C6B7AE7(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC4C73B9B34878E32FE1CE9D39506A38A51D3647E_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_3 = (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_4;
		L_4 = List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_5 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_7 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* L_8 = (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* L_11 = (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mFA681ED6452214C133490C8EBCEF80076525B562_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* L_14 = (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m73B23853246474AB894F5475C49165E061CFE8AE_gshared (WhereSelectListIterator_2_tED106563EDAAAFC5D4826BB767636CC6724207C0* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m62045FC9E5DDF7C34F754695E9EBF13C4326DCE8_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)__this->___selector_5;
		WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* L_3 = (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE97A1BC013242BE83F2417B94F433533ECA0BE17_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_11 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3FE0D83DC912C8134BC2E276A0BBBF78E7CCDFF2_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF22589DABD608C024E039C0F5DE9F457967EC3E8_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* L_3 = (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4609B745A7644E640F319C2651F1A97C2D304458_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA37F84C07852A5760237B9A50C373846A6528477_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___0_source, Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* ___1_predicate, Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m786841EFDCE2204815816376B5AA874F846F04CE((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD* WhereSelectListIterator_2_Clone_m47AED1BFB1424EA5DD7CD462A74B68318FAF25DD_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*)__this->___source_3;
		Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* L_1 = (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*)__this->___predicate_4;
		Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* L_2 = (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C*)__this->___selector_5;
		WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* L_3 = (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m133E3902B5EDA8C65673C67A7714B544E51928EB(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m6E59DFD08E06CE99C6F1B2E476F96CE1407BBBF7_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_3 = (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 L_4;
		L_4 = List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* L_5 = (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83*)(&__this->___enumerator_6);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6;
		L_6 = Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* L_7 = (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* L_8 = (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19*)__this->___predicate_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* L_11 = (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C*)__this->___selector_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = V_1;
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* L_14 = (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tB04BA6D6E0EFCACC253FC89C40AB85C759F72BBD*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3F7CA31CDB32C704C8A775637B425248EC96913B_gshared (WhereSelectListIterator_2_t0387E5E21DF8B08D7308DD54F30ECFAE43F7EF8F* __this, Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tA6088F7AC2E30545BBD68DC21607C76F31E8BA82* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7* L_1 = (WhereEnumerableIterator_1_t01B15947B21E37C7459CBE2100E77CDFD3A01FC7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mDA01E17BBA1696E1D1A3AFFE4505BEF3356FB987(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m83103F083E2774F63DCAF44EEA4FDA620666A842_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* L_2 = (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9*)__this->___selector_5;
		WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* L_3 = (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m56BA4489469F766853C60F729E93CBF6F6F2A0A5(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5EE4A67650BDA6399B4D4CCBA4C6FAF5DBD891CC_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C L_4;
		L_4 = List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_5 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		float L_6;
		L_6 = Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_7 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_8 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		float L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* L_11 = (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9*)__this->___selector_5;
		float L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_14 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA93495B19C8B7D4C3787E3E17F2EE687BBCAA203_gshared (WhereSelectListIterator_2_t44D4BAAFA2EB20AFCA16E52E58EE0007D05CB9CA* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m4C5B47918993CE67EEDF80BB4EEB316D15EB817E_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, const RuntimeMethod* method) 
{
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_1 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* L_2 = (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4*)__this->___selector_5;
		WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* L_3 = (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m2DE07E6A784DD96ACBE03BB96A93F86B96A9F287(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m365018BB1C5782BD2AAFBA88AE5D47F6CECDB135_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C L_4;
		L_4 = List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_5 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		float L_6;
		L_6 = Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_7 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_8 = (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*)__this->___predicate_4;
		float L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* L_11 = (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4*)__this->___selector_5;
		float L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_14 = (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1471483926B9C1FB36A517E3AF0FB642126DFCF2_gshared (WhereSelectListIterator_2_t498B706F5ADD34AB68E2F9F371B66AB0F43AA247* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mD7DFE8C6AD3458E99FCBEA0751FF7C4043732CD4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*)__this->___selector_5;
		WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* L_3 = (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m2F302C62B7FF8D42DDE74A666313CDC858137AC4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_11 = (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m98B6BE2F15454CBA305692F230C66425836665F4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___2_selector;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D285DDC28CFAF8BDCF8C2ED06F9982D33D0342A_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* L_3 = (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DBE2E1EDA00E9EBE1A6E90D5DA81A39E1CEBF37_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE0E3E8BE8176B317F5FF0D03313F7D4DFE68681E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB_gshared (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* V_0 = NULL;
	WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* V_1 = NULL;
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___0_node;
		__this->___responseNode_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___responseNode_0), (void*)L_0);
		V_0 = __this;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___0_node;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JsonConvert_DeserializeIntoObject_TisWitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507_mF46512CB8E82FDFE361A83FB9D6C6A0FFE567B60((&V_0), L_1, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_m589391B12E05BAAED6C3E9BD7971B2A9ABB61855_gshared (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		int32_t* L_0 = (int32_t*)(&__this->___value_8);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_gshared (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* WitEntityDataBase_1_FromEntityWitResponseNode_m86F61120798C478643AF4031DE9CC7CE890E7DF1_gshared (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* V_0 = NULL;
	WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* V_1 = NULL;
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___0_node;
		__this->___responseNode_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___responseNode_0), (void*)L_0);
		V_0 = __this;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___0_node;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JsonConvert_DeserializeIntoObject_TisWitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A_m41297B9656855D65846598E02A0081FD493B75C9((&V_0), L_1, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_mFBAE16E1599FD53C4310CC682EA6A6D77708CD48_gshared (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		RuntimeObject** L_0 = (RuntimeObject**)(&__this->___value_8);
		NullCheck((*L_0));
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3, (*L_0));
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m5C970DAB1C9B01D04F0BD6D9B2FCE291BF11ACF9_gshared (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0_gshared (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* V_0 = NULL;
	WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* V_1 = NULL;
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___0_node;
		__this->___responseNode_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___responseNode_0), (void*)L_0);
		V_0 = __this;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___0_node;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JsonConvert_DeserializeIntoObject_TisWitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960_mC50F34E55EE50A542A52AA68D9CCB44BBC4B3433((&V_0), L_1, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_m559746678D2E800FBF20AA902184BB03ABD5963E_gshared (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		float* L_0 = (float*)(&__this->___value_8);
		String_t* L_1;
		L_1 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_gshared (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* WitEntityDataBase_1_FromEntityWitResponseNode_m2A96C59D1D12FDCB580D1C1F2F77E5978FA7B7CD_gshared (WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* V_0 = NULL;
	WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* V_1 = NULL;
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___0_node;
		il2cpp_codegen_write_instance_field_data<WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		V_0 = __this;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___0_node;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = ((  bool (*) (WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6**, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((&V_0), L_1, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityDataBase_1_ToString_m2EDC565705637A5D658625C85550EC6591E2878C_gshared (WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* __this, const RuntimeMethod* method) 
{
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 3)));
	String_t* V_0 = NULL;
	{
		String_t* L_1;
		L_1 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 3), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_0, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))));
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m262E6B88066F73CF24A328EBCEDEB83B1357B84B_gshared (WitEntityDataBase_1_tC582BAA52A92F908A683443BC6CEBCBAC5ECD6F6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* currentDelegate = reinterpret_cast<WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m630834333CB7AE51AB01F7713157EE57991D03D7_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* currentDelegate = reinterpret_cast<WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m2AA9BE88F67A2DA68720D6B5F2AFFA89E23BB597_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* currentDelegate = reinterpret_cast<WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m4F33ED7C62B9E61B33CC81A7B5C739D0396BC209_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* currentDelegate = reinterpret_cast<WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m1067E857FEE330354C23F3DB8C7B30143BCA679D_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* currentDelegate = reinterpret_cast<WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mC9073752A9F993A89037EB0FCF8968BCB14AE3A3_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* currentDelegate = reinterpret_cast<WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mAA1CB4066F7346F24DA38ED5A1240309F0C4BC60_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* currentDelegate = reinterpret_cast<WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m6165AFE856EC0CC9CDE8A145B404312481261696_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic;
		else
			{
				__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
				__this->___method_code_6 = (intptr_t)__this->___m_target_2;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, NULL, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	NullCheck(___0_val);
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(__this->___method_ptr_0, method, ___0_val, ___1_fieldValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 Enumerator_get_Current_m9968FC2669A2C31839A6AA5C897FE4DF3BD422B6_gshared_inline (Enumerator_tDFC541EECC8F1D6BC7EB71EB102CD756D4170547* __this, const RuntimeMethod* method) 
{
	{
		HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 L_0 = (HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mEDB2597194FDAB5423DAA25874C94942311BE40B_gshared_inline (Func_2_t9067DA26C15FA0124501D7073C59CD243F7DF7CB* __this, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 Func_2_Invoke_m8D1BAA2A637751F46F1B026E79A2D36101C34AA0_gshared_inline (Func_2_t28B89F577966ACE68E85C35C084880FB68397861* __this, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 ___0_arg, const RuntimeMethod* method) 
{
	typedef HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50 (*FunctionPointerType) (RuntimeObject*, HandSkeletonJoint_t3120B3D1CBB219AF904F1E0C239D0F4E3699DF50, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m095D2006A2DDB336987862DC15A7EFAED53E08EC_gshared_inline (Func_2_t1C8F983F9A1AA802D45E89037E2AA7ACD1094821* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m2F5EF7EE15634492B2E930C5F3DF28F3071CD5F0_gshared_inline (Func_2_t16F469F6A9BC1DA8D6E1B32B0D2D7F7983D5FBC4* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mFA681ED6452214C133490C8EBCEF80076525B562_gshared_inline (Func_2_tF12503C33FD184E465546C31F324F4C344B8975A* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_gshared_inline (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_mA9F17AE3E63FB66006408B9C15A0BB50706BD01B_gshared_inline (Func_2_tCA45E42853223A0E2A2ACAB668822780F57A9B19* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Func_2_Invoke_mF774126E2477B605319486A51EC166D12DD8AAB3_gshared_inline (Func_2_tBBA22584C40391E64F6D33716411CCFE131A090C* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_arg, const RuntimeMethod* method) 
{
	typedef Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*FunctionPointerType) (RuntimeObject*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1FE6F2A4EC23CC595897C55AE7B0BDA8969044D7_gshared_inline (Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* __this, float ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5F59DB7D65A544574E0D53BFB58E1475EC5D704F_gshared_inline (Func_2_t5506E89391C8473FC9A730F023737B9AA2F59EA9* __this, float ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m3BE8D78408917A621DF68E41CF3C1243A33C49A3_gshared_inline (Func_2_tAD879F71BAB11408CC38B8BF81F979D9205C1CC4* __this, float ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_0 = (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
