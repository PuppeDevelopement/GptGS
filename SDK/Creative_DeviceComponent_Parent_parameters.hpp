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
// Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.Owning Actor Activated
struct UCreative_DeviceComponent_Parent_C_Owning_Actor_Activated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.Owning Actor Initialized
struct UCreative_DeviceComponent_Parent_C_Owning_Actor_Initialized_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.ReceiveBeginPlay
struct UCreative_DeviceComponent_Parent_C_ReceiveBeginPlay_Params
{
public:
};

// 0x39 (0x39 - 0x0)
// Function Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C.ExecuteUbergraph_Creative_DeviceComponent_Parent
struct UCreative_DeviceComponent_Parent_C_ExecuteUbergraph_Creative_DeviceComponent_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_5AEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class ACreative_Device_Prop_Parent_C*        K2Node_DynamicCast_AsCreative_Device_Prop_Parent;  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
