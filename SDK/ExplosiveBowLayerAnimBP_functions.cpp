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


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_AdjustedAim  InputParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemUpperBody                                                    (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemUpperBody");

	Params::UExplosiveBowLayerAnimBP_C_ItemUpperBody_Params Parms;

	Parms.InPoseUpperBody = InPoseUpperBody;
	Parms.InputParam = InputParam;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = Parms.ItemUpperBody;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFullBodySprint
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseSprint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodySprint                                               (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemFullBodySprint");

	Params::UExplosiveBowLayerAnimBP_C_ItemFullBodySprint_Params Parms;

	Parms.InPoseSprint = InPoseSprint;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodySprint != nullptr)
		*ItemFullBodySprint = Parms.ItemFullBodySprint;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseIdleAdditive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemIdleAdditive                                                 (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemIdleAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemIdleAdditive_Params Parms;

	Parms.InPoseIdleAdditive = InPoseIdleAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = Parms.ItemIdleAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemCrouchTurningAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemCrouchTurningAdditive                                        (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemCrouchTurningAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemCrouchTurningAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemCrouchTurningAdditive != nullptr)
		*ItemCrouchTurningAdditive = Parms.ItemCrouchTurningAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemSlopeSliding
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSlopeSliding                                                 (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemSlopeSliding");

	Params::UExplosiveBowLayerAnimBP_C_ItemSlopeSliding_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSlopeSliding != nullptr)
		*ItemSlopeSliding = Parms.ItemSlopeSliding;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpUpAdditive                                               (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemJumpUpAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemJumpUpAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = Parms.ItemJumpUpAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpLoopAdditive                                             (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemJumpLoopAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemJumpLoopAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = Parms.ItemJumpLoopAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallAdditive                                                 (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemFallAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemFallAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = Parms.ItemFallAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallLandAdditive                                             (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemFallLandAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemFallLandAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = Parms.ItemFallLandAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackStartAdditive                                         (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemJetPackStartAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemJetPackStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = Parms.ItemJetPackStartAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackJumpAdditive                                          (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemJetPackJumpAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemJetPackJumpAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = Parms.ItemJetPackJumpAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemZipLineStartAdditive                                         (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemZipLineStartAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemZipLineStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = Parms.ItemZipLineStartAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFlyModeStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFlyModeStartAdditive                                         (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemFlyModeStartAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemFlyModeStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeStartAdditive != nullptr)
		*ItemFlyModeStartAdditive = Parms.ItemFlyModeStartAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFlyModeLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFlyModeLoopAdditive                                          (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemFlyModeLoopAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemFlyModeLoopAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeLoopAdditive != nullptr)
		*ItemFlyModeLoopAdditive = Parms.ItemFlyModeLoopAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseJogStartAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStartAdditive                                             (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemJogStartAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemJogStartAdditive_Params Parms;

	Parms.InPoseJogStartAdditive = InPoseJogStartAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStartAdditive != nullptr)
		*ItemJogStartAdditive = Parms.ItemJogStartAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogStopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseJogStopAdditive                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStopAdditive                                              (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemJogStopAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemJogStopAdditive_Params Parms;

	Parms.InPoseJogStopAdditive = InPoseJogStopAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStopAdditive != nullptr)
		*ItemJogStopAdditive = Parms.ItemJogStopAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogPrePivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePrePivotAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPrePivotAdditive                                          (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemJogPrePivotAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemJogPrePivotAdditive_Params Parms;

	Parms.InPosePrePivotAdditive = InPosePrePivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPrePivotAdditive != nullptr)
		*ItemJogPrePivotAdditive = Parms.ItemJogPrePivotAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogPostPivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePostPivotAdditive                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPostPivotAdditive                                         (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemJogPostPivotAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemJogPostPivotAdditive_Params Parms;

	Parms.InPosePostPivotAdditive = InPosePostPivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPostPivotAdditive != nullptr)
		*ItemJogPostPivotAdditive = Parms.ItemJogPostPivotAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyMovement                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyMovement                                            (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemLowerBodyMovement");

	Params::UExplosiveBowLayerAnimBP_C_ItemLowerBodyMovement_Params Parms;

	Parms.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = Parms.ItemLowerBodyMovement;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyLeanAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyLeanAdditive                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyLeanAdditive                                        (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemLowerBodyLeanAdditive");

	Params::UExplosiveBowLayerAnimBP_C_ItemLowerBodyLeanAdditive_Params Parms;

	Parms.InPoseLowerBodyLeanAdditive = InPoseLowerBodyLeanAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyLeanAdditive != nullptr)
		*ItemLowerBodyLeanAdditive = Parms.ItemLowerBodyLeanAdditive;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStart                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStart                                            (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemLowerBodyJogStart");

	Params::UExplosiveBowLayerAnimBP_C_ItemLowerBodyJogStart_Params Parms;

	Parms.InPoseLowerBodyJogStart = InPoseLowerBodyJogStart;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStart != nullptr)
		*ItemLowerBodyJogStart = Parms.ItemLowerBodyJogStart;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogStop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStop                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStop                                             (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemLowerBodyJogStop");

	Params::UExplosiveBowLayerAnimBP_C_ItemLowerBodyJogStop_Params Parms;

	Parms.InPoseLowerBodyJogStop = InPoseLowerBodyJogStop;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStop != nullptr)
		*ItemLowerBodyJogStop = Parms.ItemLowerBodyJogStop;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogPrePivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPrePivot                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPrePivot                                         (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemLowerBodyJogPrePivot");

	Params::UExplosiveBowLayerAnimBP_C_ItemLowerBodyJogPrePivot_Params Parms;

	Parms.InPoseLowerBodyJogPrePivot = InPoseLowerBodyJogPrePivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPrePivot != nullptr)
		*ItemLowerBodyJogPrePivot = Parms.ItemLowerBodyJogPrePivot;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogPostPivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPostPivot                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPostPivot                                        (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemLowerBodyJogPostPivot");

	Params::UExplosiveBowLayerAnimBP_C_ItemLowerBodyJogPostPivot_Params Parms;

	Parms.InPoseLowerBodyJogPostPivot = InPoseLowerBodyJogPostPivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPostPivot != nullptr)
		*ItemLowerBodyJogPostPivot = Parms.ItemLowerBodyJogPostPivot;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseRelaxedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemRelaxedEntry                                                 (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ItemRelaxedEntry");

	Params::UExplosiveBowLayerAnimBP_C_ItemRelaxedEntry_Params Parms;

	Parms.InPoseRelaxedEntry = InPoseRelaxedEntry;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = Parms.ItemRelaxedEntry;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UExplosiveBowLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "AnimGraph");

	Params::UExplosiveBowLayerAnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_EDF172954C1F699670096999A0687B8B
// (BlueprintEvent)
// Parameters:

void UExplosiveBowLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_EDF172954C1F699670096999A0687B8B()
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_EDF172954C1F699670096999A0687B8B");

	Params::UExplosiveBowLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_EDF172954C1F699670096999A0687B8B_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_4FE1ED204DA63B600CCE7AB1BB6028C4
// (BlueprintEvent)
// Parameters:

void UExplosiveBowLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_4FE1ED204DA63B600CCE7AB1BB6028C4()
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_4FE1ED204DA63B600CCE7AB1BB6028C4");

	Params::UExplosiveBowLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_4FE1ED204DA63B600CCE7AB1BB6028C4_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_11A315AA4DFC9DAEFD15619E18677637
// (BlueprintEvent)
// Parameters:

void UExplosiveBowLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_11A315AA4DFC9DAEFD15619E18677637()
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_11A315AA4DFC9DAEFD15619E18677637");

	Params::UExplosiveBowLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_11A315AA4DFC9DAEFD15619E18677637_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ExecuteUbergraph_ExplosiveBowLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExplosiveBowLayerAnimBP_C::ExecuteUbergraph_ExplosiveBowLayerAnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ExplosiveBowLayerAnimBP_C", "ExecuteUbergraph_ExplosiveBowLayerAnimBP");

	Params::UExplosiveBowLayerAnimBP_C_ExecuteUbergraph_ExplosiveBowLayerAnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
