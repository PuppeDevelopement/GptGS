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

// 0x0 (0x528 - 0x528)
// Class FortSoundCueTemplates.FortSoundCueTemplateBase
class UFortSoundCueTemplateBase : public USoundCueTemplate
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortSoundCueTemplateBase");
		return Clss;
	}

};

// 0x0 (0x528 - 0x528)
// Class FortSoundCueTemplates.EmoteBase
class UEmoteBase : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EmoteBase");
		return Clss;
	}

};

// 0x0 (0x528 - 0x528)
// Class FortSoundCueTemplates.EmoteFoley
class UEmoteFoley : public UEmoteBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EmoteFoley");
		return Clss;
	}

};

// 0x0 (0x528 - 0x528)
// Class FortSoundCueTemplates.EmoteMusic
class UEmoteMusic : public UEmoteBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EmoteMusic");
		return Clss;
	}

};

// 0x0 (0x528 - 0x528)
// Class FortSoundCueTemplates.EmoteMusic3P
class UEmoteMusic3P : public UEmoteBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EmoteMusic3P");
		return Clss;
	}

};

// 0x0 (0x528 - 0x528)
// Class FortSoundCueTemplates.GliderOpenClose
class UGliderOpenClose : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GliderOpenClose");
		return Clss;
	}

};

// 0x0 (0x528 - 0x528)
// Class FortSoundCueTemplates.GliderOpen
class UGliderOpen : public UGliderOpenClose
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GliderOpen");
		return Clss;
	}

};

// 0x0 (0x528 - 0x528)
// Class FortSoundCueTemplates.GliderClose
class UGliderClose : public UGliderOpenClose
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GliderClose");
		return Clss;
	}

};

// 0x0 (0x528 - 0x528)
// Class FortSoundCueTemplates.GliderThrustLoop
class UGliderThrustLoop : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GliderThrustLoop");
		return Clss;
	}

};

// 0x0 (0x528 - 0x528)
// Class FortSoundCueTemplates.GliderThrustStart
class UGliderThrustStart : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GliderThrustStart");
		return Clss;
	}

};

// 0x0 (0x528 - 0x528)
// Class FortSoundCueTemplates.PickaxeImpactEnemy
class UPickaxeImpactEnemy : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PickaxeImpactEnemy");
		return Clss;
	}

};

// 0x0 (0x528 - 0x528)
// Class FortSoundCueTemplates.PickaxeReady
class UPickaxeReady : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PickaxeReady");
		return Clss;
	}

};

// 0x0 (0x528 - 0x528)
// Class FortSoundCueTemplates.PickaxeSwing
class UPickaxeSwing : public UFortSoundCueTemplateBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PickaxeSwing");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
