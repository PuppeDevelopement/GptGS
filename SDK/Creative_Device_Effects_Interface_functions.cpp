#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Creative_Device_Effects_Interface.Creative_Device_Effects_Interface_C.Get Creative Effect Data
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFCreativeEffectColorIndex  Effect_Color                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICreative_Device_Effects_Interface_C::Get_Creative_Effect_Data(struct FFCreativeEffectColorIndex* Effect_Color)
{
	static auto Func = Class->GetFunction("Creative_Device_Effects_Interface_C", "Get Creative Effect Data");

	Params::ICreative_Device_Effects_Interface_C_Get_Creative_Effect_Data_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Effect_Color != nullptr)
		*Effect_Color = Parms.Effect_Color;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
