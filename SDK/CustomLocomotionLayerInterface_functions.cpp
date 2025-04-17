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


// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionFullBodyLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   PassThroughCustomFullBody                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CustomLocomotionFullBodyLayer                                    (Parm, OutParm, NoDestructor)

void ICustomLocomotionLayerInterface_C::CustomLocomotionFullBodyLayer(const struct FPoseLink& PassThroughCustomFullBody, struct FPoseLink* CustomLocomotionFullBodyLayer)
{
	static auto Func = Class->GetFunction("CustomLocomotionLayerInterface_C", "CustomLocomotionFullBodyLayer");

	Params::ICustomLocomotionLayerInterface_C_CustomLocomotionFullBodyLayer_Params Parms;

	Parms.PassThroughCustomFullBody = PassThroughCustomFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (CustomLocomotionFullBodyLayer != nullptr)
		*CustomLocomotionFullBodyLayer = Parms.CustomLocomotionFullBodyLayer;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
