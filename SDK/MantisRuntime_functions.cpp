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


// Function MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce.ApplyRootMotionMantisForce
// (Final, Native, Static, Public)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                TechniqueMontage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAbilityTask_ApplyRootMotionMantisForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAbilityTask_ApplyRootMotionMantisForce* UFortAbilityTask_ApplyRootMotionMantisForce::ApplyRootMotionMantisForce(class UGameplayAbility* OwningAbility, float Duration, class UAnimMontage* TechniqueMontage)
{
	static auto Func = Class->GetFunction("FortAbilityTask_ApplyRootMotionMantisForce", "ApplyRootMotionMantisForce");

	Params::UFortAbilityTask_ApplyRootMotionMantisForce_ApplyRootMotionMantisForce_Params Parms;

	Parms.OwningAbility = OwningAbility;
	Parms.Duration = Duration;
	Parms.TechniqueMontage = TechniqueMontage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageFinished
// (Final, Native, Protected)
// Parameters:

void UFortGameplayAbility_Mantis::OnMontageFinished()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_Mantis", "OnMontageFinished");

	Params::UFortGameplayAbility_Mantis_OnMontageFinished_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageCancelled
// (Final, Native, Protected)
// Parameters:

void UFortGameplayAbility_Mantis::OnMontageCancelled()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_Mantis", "OnMontageCancelled");

	Params::UFortGameplayAbility_Mantis_OnMontageCancelled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetDataHandle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_Mantis::BP_OnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_OnMantisTechniqueHit");

	Params::UFortGameplayAbility_Mantis_BP_OnMantisTechniqueHit_Params Parms;

	Parms.TargetDataHandle = TargetDataHandle;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation
// (Final, Native, Protected)
// Parameters:
// class UCharacterMovementComponent* CharMoveComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisPawnComponent::OnPostPhysicsRotation(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds)
{
	static auto Func = Class->GetFunction("FortMantisPawnComponent", "OnPostPhysicsRotation");

	Params::UFortMantisPawnComponent_OnPostPhysicsRotation_Params Parms;

	Parms.CharMoveComp = CharMoveComp;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate
// (Final, Native, Protected)
// Parameters:
// class UCharacterMovementComponent* CharMoveComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMantisPawnComponent::OnCharacterMovementPreUpdate(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds)
{
	static auto Func = Class->GetFunction("FortMantisPawnComponent", "OnCharacterMovementPreUpdate");

	Params::UFortMantisPawnComponent_OnCharacterMovementPreUpdate_Params Parms;

	Parms.CharMoveComp = CharMoveComp;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
