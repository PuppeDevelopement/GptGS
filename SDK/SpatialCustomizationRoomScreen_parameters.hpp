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

// 0x10 (0x10 - 0x0)
// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.HandeRoomStateChanged
struct USpatialCustomizationRoomScreen_C_HandeRoomStateChanged_Params
{
public:
	enum class ESpatialCustomizationRoomState    CurrentRoomState;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpatialCustomizationRoomState    PreviousRoomState;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpatialCustomizationRoomState    Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60B1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.OnRoomStateChanged
struct USpatialCustomizationRoomScreen_C_OnRoomStateChanged_Params
{
public:
	enum class ESpatialCustomizationRoomState    CurrentRoomState;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpatialCustomizationRoomState    PreviousRoomState;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct USpatialCustomizationRoomScreen_C_BndEvt__Button_About_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.OnShowFirstTimeInfo
struct USpatialCustomizationRoomScreen_C_OnShowFirstTimeInfo_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_2_OnAboutModalClosedDynamic__DelegateSignature
struct USpatialCustomizationRoomScreen_C_BndEvt__BPS12_AboutModal_K2Node_ComponentBoundEvent_2_OnAboutModalClosedDynamic__DelegateSignature_Params
{
public:
};

// 0x12 (0x12 - 0x0)
// Function SpatialCustomizationRoomScreen.SpatialCustomizationRoomScreen_C.ExecuteUbergraph_SpatialCustomizationRoomScreen
struct USpatialCustomizationRoomScreen_C_ExecuteUbergraph_SpatialCustomizationRoomScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpatialCustomizationRoomState    K2Node_Event_CurrentRoomState;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpatialCustomizationRoomState    K2Node_Event_PreviousRoomState;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
