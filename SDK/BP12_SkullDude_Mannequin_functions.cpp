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


// Function BP12_SkullDude_Mannequin.BP12_SkullDude_Mannequin_C.OnPartChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UCustomCharacterPart*        OldPart                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*        NewPart                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomPartType     PartType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP12_SkullDude_Mannequin_C::OnPartChanged(class UCustomCharacterPart* OldPart, class UCustomCharacterPart* NewPart, enum class EFortCustomPartType PartType)
{
	static auto Func = Class->GetFunction("BP12_SkullDude_Mannequin_C", "OnPartChanged");

	Params::ABP12_SkullDude_Mannequin_C_OnPartChanged_Params Parms;

	Parms.OldPart = OldPart;
	Parms.NewPart = NewPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP12_SkullDude_Mannequin.BP12_SkullDude_Mannequin_C.OnVariantChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                VariantChannel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                OldVariantTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                NewVariantTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP12_SkullDude_Mannequin_C::OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& OldVariantTag, const struct FGameplayTag& NewVariantTag)
{
	static auto Func = Class->GetFunction("BP12_SkullDude_Mannequin_C", "OnVariantChanged");

	Params::ABP12_SkullDude_Mannequin_C_OnVariantChanged_Params Parms;

	Parms.VariantChannel = VariantChannel;
	Parms.OldVariantTag = OldVariantTag;
	Parms.NewVariantTag = NewVariantTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP12_SkullDude_Mannequin.BP12_SkullDude_Mannequin_C.ExecuteUbergraph_BP12_SkullDude_Mannequin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*        K2Node_Event_OldPart                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*        K2Node_Event_NewPart                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomPartType     K2Node_Event_PartType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_VariantChannel                                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_OldVariantTag                                       (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_NewVariantTag                                       (NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_SpawnFXSystemAttached_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP12_SkullDude_Mannequin_C::ExecuteUbergraph_BP12_SkullDude_Mannequin(int32 EntryPoint, class UCustomCharacterPart* K2Node_Event_OldPart, class UCustomCharacterPart* K2Node_Event_NewPart, enum class EFortCustomPartType K2Node_Event_PartType, const struct FGameplayTag& K2Node_Event_VariantChannel, const struct FGameplayTag& K2Node_Event_OldVariantTag, const struct FGameplayTag& K2Node_Event_NewVariantTag, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("BP12_SkullDude_Mannequin_C", "ExecuteUbergraph_BP12_SkullDude_Mannequin");

	Params::ABP12_SkullDude_Mannequin_C_ExecuteUbergraph_BP12_SkullDude_Mannequin_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OldPart = K2Node_Event_OldPart;
	Parms.K2Node_Event_NewPart = K2Node_Event_NewPart;
	Parms.K2Node_Event_PartType = K2Node_Event_PartType;
	Parms.K2Node_Event_VariantChannel = K2Node_Event_VariantChannel;
	Parms.K2Node_Event_OldVariantTag = K2Node_Event_OldVariantTag;
	Parms.K2Node_Event_NewVariantTag = K2Node_Event_NewVariantTag;
	Parms.CallFunc_SpawnFXSystemAttached_ReturnValue = CallFunc_SpawnFXSystemAttached_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
