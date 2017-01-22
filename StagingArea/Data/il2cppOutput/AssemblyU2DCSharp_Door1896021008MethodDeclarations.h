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

// Door
struct Door_t1896021008;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"

// System.Void Door::.ctor()
extern "C"  void Door__ctor_m1138547345 (Door_t1896021008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Door::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Door_OnCollisionEnter2D_m2292924739 (Door_t1896021008 * __this, Collision2D_t1539500754 * ___coll0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Door::Open()
extern "C"  void Door_Open_m1310967793 (Door_t1896021008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Door::Closed()
extern "C"  void Door_Closed_m3087814591 (Door_t1896021008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Door::WaitDelay()
extern "C"  Il2CppObject * Door_WaitDelay_m523215705 (Door_t1896021008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
