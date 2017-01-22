#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Reveal_Glow
struct  Reveal_Glow_t1576717619  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator Reveal_Glow::my_anim
	Animator_t69676727 * ___my_anim_2;

public:
	inline static int32_t get_offset_of_my_anim_2() { return static_cast<int32_t>(offsetof(Reveal_Glow_t1576717619, ___my_anim_2)); }
	inline Animator_t69676727 * get_my_anim_2() const { return ___my_anim_2; }
	inline Animator_t69676727 ** get_address_of_my_anim_2() { return &___my_anim_2; }
	inline void set_my_anim_2(Animator_t69676727 * value)
	{
		___my_anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___my_anim_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
