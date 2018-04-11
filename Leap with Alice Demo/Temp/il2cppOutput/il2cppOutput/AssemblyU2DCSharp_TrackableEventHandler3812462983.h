#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackableEventHandler
struct  TrackableEventHandler_t3812462983  : public MonoBehaviour_t1158329972
{
public:
	// Vuforia.TrackableBehaviour TrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1779888572 * ___mTrackableBehaviour_2;
	// System.Boolean TrackableEventHandler::mHasBeenFound
	bool ___mHasBeenFound_3;
	// System.Boolean TrackableEventHandler::mLostTracking
	bool ___mLostTracking_4;
	// System.Single TrackableEventHandler::mSecondsSinceLost
	float ___mSecondsSinceLost_5;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1779888572 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1779888572 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviour_2, value);
	}

	inline static int32_t get_offset_of_mHasBeenFound_3() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___mHasBeenFound_3)); }
	inline bool get_mHasBeenFound_3() const { return ___mHasBeenFound_3; }
	inline bool* get_address_of_mHasBeenFound_3() { return &___mHasBeenFound_3; }
	inline void set_mHasBeenFound_3(bool value)
	{
		___mHasBeenFound_3 = value;
	}

	inline static int32_t get_offset_of_mLostTracking_4() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___mLostTracking_4)); }
	inline bool get_mLostTracking_4() const { return ___mLostTracking_4; }
	inline bool* get_address_of_mLostTracking_4() { return &___mLostTracking_4; }
	inline void set_mLostTracking_4(bool value)
	{
		___mLostTracking_4 = value;
	}

	inline static int32_t get_offset_of_mSecondsSinceLost_5() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___mSecondsSinceLost_5)); }
	inline float get_mSecondsSinceLost_5() const { return ___mSecondsSinceLost_5; }
	inline float* get_address_of_mSecondsSinceLost_5() { return &___mSecondsSinceLost_5; }
	inline void set_mSecondsSinceLost_5(float value)
	{
		___mSecondsSinceLost_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
