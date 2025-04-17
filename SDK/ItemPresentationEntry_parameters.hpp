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

// 0x20 (0x20 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.PlayIntro
struct UItemPresentationEntry_C_PlayIntro_Params
{
public:
	float                                        TimeBeforeStart;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6306[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.HandelDeselectedAnim
struct UItemPresentationEntry_C_HandelDeselectedAnim_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleSelectedAnim
struct UItemPresentationEntry_C_HandleSelectedAnim_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleUnhover
struct UItemPresentationEntry_C_HandleUnhover_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleHover
struct UItemPresentationEntry_C_HandleHover_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnUnhovered
struct UItemPresentationEntry_C_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.DelayIntroAnimation
struct UItemPresentationEntry_C_DelayIntroAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnHovered
struct UItemPresentationEntry_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.Construct
struct UItemPresentationEntry_C_Construct_Params
{
public:
};

// 0x70 (0x70 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.OnMouseLeave
struct UItemPresentationEntry_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnSelected
struct UItemPresentationEntry_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnDeselected
struct UItemPresentationEntry_C_BP_OnDeselected_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function ItemPresentationEntry.ItemPresentationEntry_C.ExecuteUbergraph_ItemPresentationEntry
struct UItemPresentationEntry_C_ExecuteUbergraph_ItemPresentationEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6307[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x10(0x70)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
