#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetActiveWithAlphaTweencAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetActiveWithAlphaTween>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SetActiveWithAlphaTweencAnonStorey0*))(Il2CppBase() + 0x2A083DC))(this);
	}

};

}