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
// Class AudioExtensions.SoundfieldEncodingSettingsBase
class USoundfieldEncodingSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundfieldEncodingSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SpatializationPluginSourceSettingsBase
class USpatializationPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpatializationPluginSourceSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.AudioEndpointSettingsBase
class UAudioEndpointSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioEndpointSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.OcclusionPluginSourceSettingsBase
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OcclusionPluginSourceSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundModulationPluginSourceSettingsBase
class USoundModulationPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundModulationPluginSourceSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.ReverbPluginSourceSettingsBase
class UReverbPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReverbPluginSourceSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundfieldEndpointSettingsBase
class USoundfieldEndpointSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundfieldEndpointSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundfieldEffectSettingsBase
class USoundfieldEffectSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundfieldEffectSettingsBase");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class AudioExtensions.SoundfieldEffectBase
class USoundfieldEffectBase : public UObject
{
public:
	class USoundfieldEffectSettingsBase*         Settings;                                          // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundfieldEffectBase");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
