#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector2Add
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector2Add"));
	}

	template <typename T = uintptr_t> T& vector2Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& addVector() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& perSecond() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector2Add*))(Il2CppBase() + 0x4F1B5AC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector2Add*))(Il2CppBase() + 0x4F1B66C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector2Add*))(Il2CppBase() + 0x4F1B7A8))(this);
	}
	template <typename T = void> T DoVector2Add() {
		return ((T (*)(Vector2Add*))(Il2CppBase() + 0x4F1B698))(this);
	}

};

}