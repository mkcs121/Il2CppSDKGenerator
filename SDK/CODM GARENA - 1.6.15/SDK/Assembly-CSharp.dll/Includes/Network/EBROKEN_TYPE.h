#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EBROKENTYPE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EBROKEN_TYPE"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eBROKENTYPE_NORMAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eBROKENTYPE_SNOWMAN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eBROKENTYPE_CHRISTMAS_TREE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eBROKENTYPE_DESTRUCTIBLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}