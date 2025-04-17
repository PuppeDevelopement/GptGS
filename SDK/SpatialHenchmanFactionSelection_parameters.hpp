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

// 0x30 (0x30 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.ReverseEitherOrAnims
struct USpatialHenchmanFactionSelection_C_ReverseEitherOrAnims_Params
{
public:
	class USpatialHenchmanFactionEgo_C*          K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego; // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6DFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpatialHenchmanFactionAlter_C*        K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter; // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.ForwardEitherOrAnims
struct USpatialHenchmanFactionSelection_C_ForwardEitherOrAnims_Params
{
public:
	class USpatialHenchmanFactionEgo_C*          K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego; // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpatialHenchmanFactionAlter_C*        K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter; // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.OnActivateFactionOptions
struct USpatialHenchmanFactionSelection_C_OnActivateFactionOptions_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.AlterInspectionClicked
struct USpatialHenchmanFactionSelection_C_AlterInspectionClicked_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.EgoInspectionClicked
struct USpatialHenchmanFactionSelection_C_EgoInspectionClicked_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BP_OnActivated
struct USpatialHenchmanFactionSelection_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.Start_BackToHenchmanRoom
struct USpatialHenchmanFactionSelection_C_Start_BackToHenchmanRoom_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.Construct
struct USpatialHenchmanFactionSelection_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.Start_BackToHenchmanInspection
struct USpatialHenchmanFactionSelection_C_Start_BackToHenchmanInspection_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.PreConstruct
struct USpatialHenchmanFactionSelection_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BndEvt__Button_MoreInfo_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct USpatialHenchmanFactionSelection_C_BndEvt__Button_MoreInfo_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.SetUserFocusOnSelection
struct USpatialHenchmanFactionSelection_C_SetUserFocusOnSelection_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BndEvt__MissionDetailsAlter_K2Node_ComponentBoundEvent_2_OnPlayAcceptedMissionAnim__DelegateSignature
struct USpatialHenchmanFactionSelection_C_BndEvt__MissionDetailsAlter_K2Node_ComponentBoundEvent_2_OnPlayAcceptedMissionAnim__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BndEvt__MissionDetailsEgo_K2Node_ComponentBoundEvent_3_OnPlayAcceptedMissionAnim__DelegateSignature
struct USpatialHenchmanFactionSelection_C_BndEvt__MissionDetailsEgo_K2Node_ComponentBoundEvent_3_OnPlayAcceptedMissionAnim__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BndEvt__Button_AlterInspection_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
struct USpatialHenchmanFactionSelection_C_BndEvt__Button_AlterInspection_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BndEvt__Button_EgoInspection_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct USpatialHenchmanFactionSelection_C_BndEvt__Button_EgoInspection_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.OnUpdatedRoomState
struct USpatialHenchmanFactionSelection_C_OnUpdatedRoomState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_5_OnAboutModalClosedDynamic__DelegateSignature
struct USpatialHenchmanFactionSelection_C_BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_5_OnAboutModalClosedDynamic__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.Play On Accept Confirm
struct USpatialHenchmanFactionSelection_C_Play_On_Accept_Confirm_Params
{
public:
};

// 0x208 (0x208 - 0x0)
// Function SpatialHenchmanFactionSelection.SpatialHenchmanFactionSelection_C.ExecuteUbergraph_SpatialHenchmanFactionSelection
struct USpatialHenchmanFactionSelection_C_ExecuteUbergraph_SpatialHenchmanFactionSelection_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_2;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionState                     Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E06[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_3;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_4;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_5;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_6;                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E07[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortVariantTokenType*                 CallFunc_GetAlterVariantToken_ReturnValue;         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortVariantTokenType*                 CallFunc_GetEgoVariantToken_ReturnValue;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpatialHenchmanFactionAlter_C*        K2Node_DynamicCast_AsSpatial_Henchman_Faction_Alter; // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpatialHenchmanFactionEgo_C*          K2Node_DynamicCast_AsSpatial_Henchman_Faction_Ego; // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_7;                             // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x64(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6E0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_CustomEvent_Button_1;                       // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_Button;                         // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x88(0x10)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_2;       // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_3;       // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_4;       // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_5;       // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_6;       // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPS12_AboutModal_C*                   K2Node_DynamicCast_AsBPS12_About_Modal;            // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xF0(0x10)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_7;       // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionState                     Temp_byte_Variable_1;                              // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E0D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x110(0x40)(HasGetValueTypeHash)
	float                                        K2Node_Select_Default_1;                           // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x158(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x168(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x180(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x1C0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x1D0(0x18)()
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x1E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x1F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1F8(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
