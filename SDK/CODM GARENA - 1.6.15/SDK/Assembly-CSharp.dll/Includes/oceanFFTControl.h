#pragma once
#include <Il2Cpp/Il2Cpp.h>

class oceanFFTControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "oceanFFTControl"));
	}

	template <typename T = uintptr_t> T& m_JTex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_forceLowQuality() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_updateShaderGlobalVars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T updateShaderGlobalVars() {
		return ((T (*)(oceanFFTControl*))(Il2CppBase() + 0x3EE9CF0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(oceanFFTControl*))(Il2CppBase() + 0x3EE9E2C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(oceanFFTControl*))(Il2CppBase() + 0x3EEA438))(this);
	}

};

}