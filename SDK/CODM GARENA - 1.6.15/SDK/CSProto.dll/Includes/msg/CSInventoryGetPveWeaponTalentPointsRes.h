#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryGetPveWeaponTalentPointsRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryGetPveWeaponTalentPointsRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _talent_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryGetPveWeaponTalentPointsRes*))(Il2CppBase() + 0x5138030))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryGetPveWeaponTalentPointsRes*, int32_t))(Il2CppBase() + 0x5138038))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_talent_list() {
		return ((T (*)(CSInventoryGetPveWeaponTalentPointsRes*))(Il2CppBase() + 0x5138040))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryGetPveWeaponTalentPointsRes*, bool))(Il2CppBase() + 0x5138048))(this, createIfMissing);
	}

};

}