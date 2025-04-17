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


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
// (Final, Native, Public)
// Parameters:
// bool                               bWorldIn                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
{
	static auto Func = Class->GetFunction("GizmoBaseComponent", "UpdateWorldLocalState");

	Params::UGizmoBaseComponent_UpdateWorldLocalState_Params Parms;

	Parms.bWorldIn = bWorldIn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
// (Final, Native, Public)
// Parameters:
// bool                               bHoveringIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
{
	static auto Func = Class->GetFunction("GizmoBaseComponent", "UpdateHoverState");

	Params::UGizmoBaseComponent_UpdateHoverState_Params Parms;

	Parms.bHoveringIn = bHoveringIn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FTransform                  NewTransform                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void IGizmoTransformSource::SetTransform(struct FTransform& NewTransform)
{
	static auto Func = Class->GetFunction("GizmoTransformSource", "SetTransform");

	Params::IGizmoTransformSource_SetTransform_Params Parms;

	Parms.NewTransform = NewTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform IGizmoTransformSource::GetTransform()
{
	static auto Func = Class->GetFunction("GizmoTransformSource", "GetTransform");

	Params::IGizmoTransformSource_GetTransform_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
// (Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGizmoAxisSource::HasTangentVectors()
{
	static auto Func = Class->GetFunction("GizmoAxisSource", "HasTangentVectors");

	Params::IGizmoAxisSource_HasTangentVectors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
// (Native, Public, HasOutParams, HasDefaults, Const)
// Parameters:
// struct FVector                     TangentXOut                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TangentYOut                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut)
{
	static auto Func = Class->GetFunction("GizmoAxisSource", "GetTangentVectors");

	Params::IGizmoAxisSource_GetTangentVectors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TangentXOut != nullptr)
		*TangentXOut = Parms.TangentXOut;

	if (TangentYOut != nullptr)
		*TangentYOut = Parms.TangentYOut;

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector IGizmoAxisSource::GetOrigin()
{
	static auto Func = Class->GetFunction("GizmoAxisSource", "GetOrigin");

	Params::IGizmoAxisSource_GetOrigin_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector IGizmoAxisSource::GetDirection()
{
	static auto Func = Class->GetFunction("GizmoAxisSource", "GetDirection");

	Params::IGizmoAxisSource_GetDirection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
// (Native, Public, Const)
// Parameters:
// bool                               bHovering                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoClickTarget::UpdateHoverState(bool bHovering)
{
	static auto Func = Class->GetFunction("GizmoClickTarget", "UpdateHoverState");

	Params::IGizmoClickTarget_UpdateHoverState_Params Parms;

	Parms.bHovering = bHovering;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
// (Native, Public)
// Parameters:

void IGizmoStateTarget::EndUpdate()
{
	static auto Func = Class->GetFunction("GizmoStateTarget", "EndUpdate");

	Params::IGizmoStateTarget_EndUpdate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
// (Native, Public)
// Parameters:

void IGizmoStateTarget::BeginUpdate()
{
	static auto Func = Class->GetFunction("GizmoStateTarget", "BeginUpdate");

	Params::IGizmoStateTarget_BeginUpdate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
// (Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoFloatParameterSource::SetParameter(float NewValue)
{
	static auto Func = Class->GetFunction("GizmoFloatParameterSource", "SetParameter");

	Params::IGizmoFloatParameterSource_SetParameter_Params Parms;

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
// (Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float IGizmoFloatParameterSource::GetParameter()
{
	static auto Func = Class->GetFunction("GizmoFloatParameterSource", "GetParameter");

	Params::IGizmoFloatParameterSource_GetParameter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
// (Native, Public)
// Parameters:

void IGizmoFloatParameterSource::EndModify()
{
	static auto Func = Class->GetFunction("GizmoFloatParameterSource", "EndModify");

	Params::IGizmoFloatParameterSource_EndModify_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
// (Native, Public)
// Parameters:

void IGizmoFloatParameterSource::BeginModify()
{
	static auto Func = Class->GetFunction("GizmoFloatParameterSource", "BeginModify");

	Params::IGizmoFloatParameterSource_BeginModify_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                   NewValue                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoVec2ParameterSource::SetParameter(struct FVector2D& NewValue)
{
	static auto Func = Class->GetFunction("GizmoVec2ParameterSource", "SetParameter");

	Params::IGizmoVec2ParameterSource_SetParameter_Params Parms;

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D IGizmoVec2ParameterSource::GetParameter()
{
	static auto Func = Class->GetFunction("GizmoVec2ParameterSource", "GetParameter");

	Params::IGizmoVec2ParameterSource_GetParameter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
// (Native, Public)
// Parameters:

void IGizmoVec2ParameterSource::EndModify()
{
	static auto Func = Class->GetFunction("GizmoVec2ParameterSource", "EndModify");

	Params::IGizmoVec2ParameterSource_EndModify_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
// (Native, Public)
// Parameters:

void IGizmoVec2ParameterSource::BeginModify()
{
	static auto Func = Class->GetFunction("GizmoVec2ParameterSource", "BeginModify");

	Params::IGizmoVec2ParameterSource_BeginModify_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
