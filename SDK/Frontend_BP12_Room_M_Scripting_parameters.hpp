#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C.OnFailure_43ED484A4E514CB6169D83955324F3DF
struct AFrontend_BP12_Room_M_Scripting_C_OnFailure_43ED484A4E514CB6169D83955324F3DF_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C.OnIgnored_43ED484A4E514CB6169D83955324F3DF
struct AFrontend_BP12_Room_M_Scripting_C_OnIgnored_43ED484A4E514CB6169D83955324F3DF_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C.OnSuccess_43ED484A4E514CB6169D83955324F3DF
struct AFrontend_BP12_Room_M_Scripting_C_OnSuccess_43ED484A4E514CB6169D83955324F3DF_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C.ReceiveBeginPlay
struct AFrontend_BP12_Room_M_Scripting_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C.MakePeelyPeak
struct AFrontend_BP12_Room_M_Scripting_C_MakePeelyPeak_Params
{
public:
};

// 0x71 (0x71 - 0x0)
// Function Frontend_BP12_Room_M_Scripting.Frontend_BP12_Room_M_Scripting_C.ExecuteUbergraph_Frontend_BP12_Room_M_Scripting
struct AFrontend_BP12_Room_M_Scripting_C_ExecuteUbergraph_Frontend_BP12_Room_M_Scripting_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7187[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x38(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x48(0x10)(ZeroConstructor, NoDestructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7188[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_SendQuestStatEvent*   CallFunc_SendClientStatEvent_ReturnValue;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
