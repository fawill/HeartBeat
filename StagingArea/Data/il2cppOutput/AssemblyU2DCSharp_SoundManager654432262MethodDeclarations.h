#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SoundManager
struct SoundManager_t654432262;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"

// System.Void SoundManager::.ctor()
extern "C"  void SoundManager__ctor_m3417712111 (SoundManager_t654432262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::Awake()
extern "C"  void SoundManager_Awake_m1006343474 (SoundManager_t654432262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::Start()
extern "C"  void SoundManager_Start_m640423507 (SoundManager_t654432262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlayMusic(UnityEngine.AudioClip)
extern "C"  void SoundManager_PlayMusic_m2951685673 (SoundManager_t654432262 * __this, AudioClip_t1932558630 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlaySingle(UnityEngine.AudioClip)
extern "C"  void SoundManager_PlaySingle_m2017509048 (SoundManager_t654432262 * __this, AudioClip_t1932558630 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
extern "C"  void SoundManager_RandomizeSfx_m3482976376 (SoundManager_t654432262 * __this, AudioClipU5BU5D_t2203355011* ___clips0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SoundManager::PlayMusic(System.Single)
extern "C"  Il2CppObject * SoundManager_PlayMusic_m106187841 (SoundManager_t654432262 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::.cctor()
extern "C"  void SoundManager__cctor_m1047370624 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
