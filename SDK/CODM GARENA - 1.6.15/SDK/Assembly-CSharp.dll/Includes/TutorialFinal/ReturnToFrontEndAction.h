#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TutorialFinal {

class ReturnToFrontEndAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TutorialFinal", "ReturnToFrontEndAction"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ReturnToFrontEndAction*))(Il2CppBase() + 0x4248104))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(ReturnToFrontEndAction*))(Il2CppBase() + 0x4248240))(this);
	}

};

}