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


// Function PlayspaceFramework.Playspace.OnRep_PlayspaceUsers
// (Final, Native, Protected)
// Parameters:

void APlayspace::OnRep_PlayspaceUsers()
{
	static auto Func = Class->GetFunction("Playspace", "OnRep_PlayspaceUsers");

	Params::APlayspace_OnRep_PlayspaceUsers_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PlayspaceFramework.Playspace.OnRep_PlayspaceLogic
// (Final, Native, Protected)
// Parameters:

void APlayspace::OnRep_PlayspaceLogic()
{
	static auto Func = Class->GetFunction("Playspace", "OnRep_PlayspaceLogic");

	Params::APlayspace_OnRep_PlayspaceLogic_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
