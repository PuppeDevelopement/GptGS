#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C
class ICustomLocomotionLayerInterface_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CustomLocomotionLayerInterface_C");
		return Clss;
	}

	void CustomLocomotionFullBodyLayer(const struct FPoseLink& PassThroughCustomFullBody, struct FPoseLink* CustomLocomotionFullBodyLayer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
