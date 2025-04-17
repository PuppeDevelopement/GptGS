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


// Function Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C.GetMaterialInt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MatInt                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IAthena_IGiveSneakySnowman_C::GetMaterialInt(int32* MatInt)
{
	static auto Func = Class->GetFunction("Athena_IGiveSneakySnowman_C", "GetMaterialInt");

	Params::IAthena_IGiveSneakySnowman_C_GetMaterialInt_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (MatInt != nullptr)
		*MatInt = Parms.MatInt;

}


// Function Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C.SpawnParticles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IAthena_IGiveSneakySnowman_C::SpawnParticles()
{
	static auto Func = Class->GetFunction("Athena_IGiveSneakySnowman_C", "SpawnParticles");

	Params::IAthena_IGiveSneakySnowman_C_SpawnParticles_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C.GetNewSnowmanTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)

void IAthena_IGiveSneakySnowman_C::GetNewSnowmanTransform(struct FTransform* Transform)
{
	static auto Func = Class->GetFunction("Athena_IGiveSneakySnowman_C", "GetNewSnowmanTransform");

	Params::IAthena_IGiveSneakySnowman_C_GetNewSnowmanTransform_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = Parms.Transform;

}


// Function Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C.OnTookSneakySnowman
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IAthena_IGiveSneakySnowman_C::OnTookSneakySnowman()
{
	static auto Func = Class->GetFunction("Athena_IGiveSneakySnowman_C", "OnTookSneakySnowman");

	Params::IAthena_IGiveSneakySnowman_C_OnTookSneakySnowman_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C.OnStartedJumpingIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IAthena_IGiveSneakySnowman_C::OnStartedJumpingIn()
{
	static auto Func = Class->GetFunction("Athena_IGiveSneakySnowman_C", "OnStartedJumpingIn");

	Params::IAthena_IGiveSneakySnowman_C_OnStartedJumpingIn_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C.MovePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IAthena_IGiveSneakySnowman_C::MovePlayer(class AActor* Player)
{
	static auto Func = Class->GetFunction("Athena_IGiveSneakySnowman_C", "MovePlayer");

	Params::IAthena_IGiveSneakySnowman_C_MovePlayer_Params Parms;

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C.OnGaveSneakySnowman
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IAthena_IGiveSneakySnowman_C::OnGaveSneakySnowman()
{
	static auto Func = Class->GetFunction("Athena_IGiveSneakySnowman_C", "OnGaveSneakySnowman");

	Params::IAthena_IGiveSneakySnowman_C_OnGaveSneakySnowman_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
