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


// Function AmbientAudio.AmbientAudioStatics.RemoveAmbientGameplayTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayTag                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioStatics::RemoveAmbientGameplayTag(class UObject* WorldContextObject, struct FGameplayTag& GameplayTag)
{
	static auto Func = Class->GetFunction("AmbientAudioStatics", "RemoveAmbientGameplayTag");

	Params::UAmbientAudioStatics_RemoveAmbientGameplayTag_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.GameplayTag = GameplayTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientAudioStatics.RemoveAmbientEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AmbientName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioStatics::RemoveAmbientEntry(class UObject* WorldContextObject, class FName AmbientName)
{
	static auto Func = Class->GetFunction("AmbientAudioStatics", "RemoveAmbientEntry");

	Params::UAmbientAudioStatics_RemoveAmbientEntry_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AmbientName = AmbientName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientAudioStatics.PlaySoundAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioStatics::PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location)
{
	static auto Func = Class->GetFunction("AmbientAudioStatics", "PlaySoundAtLocation");

	Params::UAmbientAudioStatics_PlaySoundAtLocation_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;
	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientAudioStatics.CreateAudioComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioComponent* UAmbientAudioStatics::CreateAudioComponent(class UObject* WorldContextObject, class USoundBase* Sound)
{
	static auto Func = Class->GetFunction("AmbientAudioStatics", "CreateAudioComponent");

	Params::UAmbientAudioStatics_CreateAudioComponent_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AmbientAudio.AmbientAudioStatics.AddAmbientGameplayTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayTag                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioStatics::AddAmbientGameplayTag(class UObject* WorldContextObject, struct FGameplayTag& GameplayTag)
{
	static auto Func = Class->GetFunction("AmbientAudioStatics", "AddAmbientGameplayTag");

	Params::UAmbientAudioStatics_AddAmbientGameplayTag_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.GameplayTag = GameplayTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientAudioStatics.AddAmbientEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AmbientName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAmbientAudioDataAsset*      Asset                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioStatics::AddAmbientEntry(class UObject* WorldContextObject, class FName AmbientName, class UAmbientAudioDataAsset* Asset, int32 Priority)
{
	static auto Func = Class->GetFunction("AmbientAudioStatics", "AddAmbientEntry");

	Params::UAmbientAudioStatics_AddAmbientEntry_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.AmbientName = AmbientName;
	Parms.Asset = Asset;
	Parms.Priority = Priority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientVolume.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewPriority                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAmbientVolume::SetPriority(int32 NewPriority)
{
	static auto Func = Class->GetFunction("AmbientVolume", "SetPriority");

	Params::AAmbientVolume_SetPriority_Params Parms;

	Parms.NewPriority = NewPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAmbientVolume::SetEnabled(bool bNewEnabled)
{
	static auto Func = Class->GetFunction("AmbientVolume", "SetEnabled");

	Params::AAmbientVolume_SetEnabled_Params Parms;

	Parms.bNewEnabled = bNewEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientVolume.SetAmbientAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAmbientAudioDataAsset*      NewAmbientAsset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAmbientVolume::SetAmbientAsset(class UAmbientAudioDataAsset* NewAmbientAsset)
{
	static auto Func = Class->GetFunction("AmbientVolume", "SetAmbientAsset");

	Params::AAmbientVolume_SetAmbientAsset_Params Parms;

	Parms.NewAmbientAsset = NewAmbientAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientVolume.OnRep_bEnabled
// (Native, Protected)
// Parameters:

void AAmbientVolume::OnRep_bEnabled()
{
	static auto Func = Class->GetFunction("AmbientVolume", "OnRep_bEnabled");

	Params::AAmbientVolume_OnRep_bEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
