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
// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__FinishedFunc
struct ABP_UI_ScannerScreen_C_ErrorTimeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__UpdateFunc
struct ABP_UI_ScannerScreen_C_ErrorTimeline__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ReceiveBeginPlay
struct ABP_UI_ScannerScreen_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventError
struct ABP_UI_ScannerScreen_C_ScreenEventError_Params
{
public:
	bool                                         Reverse;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventSuccess
struct ABP_UI_ScannerScreen_C_ScreenEventSuccess_Params
{
public:
	class FText                                  SuccessText;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventFailure
struct ABP_UI_ScannerScreen_C_ScreenEventFailure_Params
{
public:
	class FText                                  FailureText;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventScan
struct ABP_UI_ScannerScreen_C_ScreenEventScan_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventDismiss
struct ABP_UI_ScannerScreen_C_ScreenEventDismiss_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventTargetLost
struct ABP_UI_ScannerScreen_C_ScreenEventTargetLost_Params
{
public:
	class FText                                  LostText;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xC8 (0xC8 - 0x0)
// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ExecuteUbergraph_BP_UI_ScannerScreen
struct ABP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue_1;                  // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4960[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_SuccessText;                    // 0x28(0x18)()
	class UMaterialInstanceDynamic*              CallFunc_GetMaterialInstance_ReturnValue;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_FailureText;                    // 0x48(0x18)()
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ScannerScreen_C*                   K2Node_DynamicCast_AsUI_Scanner_Screen;            // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Reverse;                        // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4964[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x74(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4965[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x88(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_LostText;                       // 0x90(0x18)()
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
