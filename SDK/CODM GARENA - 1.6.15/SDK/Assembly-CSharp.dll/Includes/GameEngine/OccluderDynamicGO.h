#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class OccluderDynamicGO
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "OccluderDynamicGO"));
	}

	template <typename T = uintptr_t> T& StoreOccluderData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TargetMeshRenderer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ForceGeometryMethod() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& RelativeNPC() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}