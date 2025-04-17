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
// Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.RequestFadeIn
struct UBuiltInEmotePopUP_C_RequestFadeIn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.RequuestFadeOut
struct UBuiltInEmotePopUP_C_RequuestFadeOut_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.ExecuteUbergraph_BuiltInEmotePopUP
struct UBuiltInEmotePopUP_C_ExecuteUbergraph_BuiltInEmotePopUP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
