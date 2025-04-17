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
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.TvB_HideAll
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_TvB_HideAll_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.Hide_Pot_05
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_Hide_Pot_05_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.Hide_Pot_04
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_Hide_Pot_04_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.Hide_Pot_03
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_Hide_Pot_03_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.Hide_Pot_02
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_Hide_Pot_02_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.Hide_Pot_01
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_Hide_Pot_01_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.TvB_ShowOnlyMapAndPots
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_TvB_ShowOnlyMapAndPots_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.TvB_ShowOnlyHint
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_TvB_ShowOnlyHint_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.UpdateAllSplines
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_UpdateAllSplines_Params
{
public:
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.UpdateSplines
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_UpdateSplines_Params
{
public:
	class USplineMeshComponent*                  Spline;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Start;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  End;                                               // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Offset;                                            // 0x18(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.UserConstructionScript
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_UserConstructionScript_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.OnCurrentQuestsReady_12655DD446F522D8E34C9CBF5A99866D
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_OnCurrentQuestsReady_12655DD446F522D8E34C9CBF5A99866D_Params
{
public:
	class UFortQuestManager*                     OwningQuestManager;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFoundAllQuestsOnProfile;                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.ReceiveBeginPlay
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_ReceiveBeginPlay_Params
{
public:
};

// 0xA1 (0xA1 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_NoticBoard.BP_Frontend_EventLevel_NavObject_NoticBoard_C.ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_NoticBoard
struct ABP_Frontend_EventLevel_NavObject_NoticBoard_C_ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_NoticBoard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_70A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestManager*                     K2Node_CustomEvent_OwningQuestManager;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bFoundAllQuestsOnProfile;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestManager*                     Temp_object_Variable;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_70A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid; // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted; // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted; // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70A5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue_1; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue_2; // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_1; // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_1; // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_1; // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70A6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid_2; // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted_2; // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted_2; // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 CallFunc_GetFirstLocalFortPlayerController_ReturnValue_3; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_70A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_70A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_CurrentQuestsReady*   CallFunc_CurrentQuestsReadyAsync_ReturnValue;      // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
