#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AudioStop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AudioStop"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AudioStop*))(Il2CppBase() + 0x4F32AE4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AudioStop*))(Il2CppBase() + 0x4F32AF0))(this);
	}

};

}