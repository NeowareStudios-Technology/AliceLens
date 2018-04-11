#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// MenuAnimator
struct MenuAnimator_t2049002970;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TapHandler
struct  TapHandler_t3409799063  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TapHandler::mTimeSinceLastTap
	float ___mTimeSinceLastTap_3;
	// MenuAnimator TapHandler::mMenuAnim
	MenuAnimator_t2049002970 * ___mMenuAnim_4;
	// System.Int32 TapHandler::mTapCount
	int32_t ___mTapCount_5;

public:
	inline static int32_t get_offset_of_mTimeSinceLastTap_3() { return static_cast<int32_t>(offsetof(TapHandler_t3409799063, ___mTimeSinceLastTap_3)); }
	inline float get_mTimeSinceLastTap_3() const { return ___mTimeSinceLastTap_3; }
	inline float* get_address_of_mTimeSinceLastTap_3() { return &___mTimeSinceLastTap_3; }
	inline void set_mTimeSinceLastTap_3(float value)
	{
		___mTimeSinceLastTap_3 = value;
	}

	inline static int32_t get_offset_of_mMenuAnim_4() { return static_cast<int32_t>(offsetof(TapHandler_t3409799063, ___mMenuAnim_4)); }
	inline MenuAnimator_t2049002970 * get_mMenuAnim_4() const { return ___mMenuAnim_4; }
	inline MenuAnimator_t2049002970 ** get_address_of_mMenuAnim_4() { return &___mMenuAnim_4; }
	inline void set_mMenuAnim_4(MenuAnimator_t2049002970 * value)
	{
		___mMenuAnim_4 = value;
		Il2CppCodeGenWriteBarrier(&___mMenuAnim_4, value);
	}

	inline static int32_t get_offset_of_mTapCount_5() { return static_cast<int32_t>(offsetof(TapHandler_t3409799063, ___mTapCount_5)); }
	inline int32_t get_mTapCount_5() const { return ___mTapCount_5; }
	inline int32_t* get_address_of_mTapCount_5() { return &___mTapCount_5; }
	inline void set_mTapCount_5(int32_t value)
	{
		___mTapCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
