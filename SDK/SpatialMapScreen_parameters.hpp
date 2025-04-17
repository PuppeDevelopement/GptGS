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
// Function SpatialMapScreen.SpatialMapScreen_C.BP_OnActivated
struct USpatialMapScreen_C_BP_OnActivated_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function SpatialMapScreen.SpatialMapScreen_C.OnTabCycled
struct USpatialMapScreen_C_OnTabCycled_Params
{
public:
	bool                                         bCanShowCompletedCount;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DFC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ChallengesNum;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CountOfCompletedChallenges;                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function SpatialMapScreen.SpatialMapScreen_C.SetRewardPreviewVisibility
struct USpatialMapScreen_C_SetRewardPreviewVisibility_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function SpatialMapScreen.SpatialMapScreen_C.ExecuteUbergraph_SpatialMapScreen
struct USpatialMapScreen_C_ExecuteUbergraph_SpatialMapScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bCanShowCompletedCount;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DFD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_ChallengesNum;                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_CountOfCompletedChallenges;           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bVisible;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaChallengeMapRewardPreview_C*    K2Node_DynamicCast_AsAthena_Challenge_Map_Reward_Preview; // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
