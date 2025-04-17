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


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InStiffness                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness)
{
	static auto Func = Class->GetFunction("ClothingSimulationInteractor", "SetAnimDriveSpringStiffness");

	Params::UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params Parms;

	Parms.InStiffness = InStiffness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
// (Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static auto Func = Class->GetFunction("ClothingSimulationInteractor", "PhysicsAssetUpdated");

	Params::UClothingSimulationInteractor_PhysicsAssetUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InVector                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractor::EnableGravityOverride(struct FVector& InVector)
{
	static auto Func = Class->GetFunction("ClothingSimulationInteractor", "EnableGravityOverride");

	Params::UClothingSimulationInteractor_EnableGravityOverride_Params Parms;

	Parms.InVector = InVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
// (Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractor::DisableGravityOverride()
{
	static auto Func = Class->GetFunction("ClothingSimulationInteractor", "DisableGravityOverride");

	Params::UClothingSimulationInteractor_DisableGravityOverride_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
// (Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static auto Func = Class->GetFunction("ClothingSimulationInteractor", "ClothConfigUpdated");

	Params::UClothingSimulationInteractor_ClothConfigUpdated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
