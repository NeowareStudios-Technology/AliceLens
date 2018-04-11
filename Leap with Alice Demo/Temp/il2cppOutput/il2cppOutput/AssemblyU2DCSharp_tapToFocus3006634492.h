#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Focus4087668361.h"
#include "UnityEngine_UnityEngine_Touch407273883.h"

// tapToFocus/ClickAction
struct ClickAction_t2688446951;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// tapToFocus
struct  tapToFocus_t3006634492  : public MonoBehaviour_t1158329972
{
public:
	// Vuforia.CameraDevice/FocusMode tapToFocus::mFocusMode
	int32_t ___mFocusMode_3;
	// System.String tapToFocus::mAutoFocusText
	String_t* ___mAutoFocusText_6;
	// System.Single tapToFocus::touchDuration
	float ___touchDuration_7;
	// UnityEngine.Touch tapToFocus::touch
	Touch_t407273883  ___touch_8;

public:
	inline static int32_t get_offset_of_mFocusMode_3() { return static_cast<int32_t>(offsetof(tapToFocus_t3006634492, ___mFocusMode_3)); }
	inline int32_t get_mFocusMode_3() const { return ___mFocusMode_3; }
	inline int32_t* get_address_of_mFocusMode_3() { return &___mFocusMode_3; }
	inline void set_mFocusMode_3(int32_t value)
	{
		___mFocusMode_3 = value;
	}

	inline static int32_t get_offset_of_mAutoFocusText_6() { return static_cast<int32_t>(offsetof(tapToFocus_t3006634492, ___mAutoFocusText_6)); }
	inline String_t* get_mAutoFocusText_6() const { return ___mAutoFocusText_6; }
	inline String_t** get_address_of_mAutoFocusText_6() { return &___mAutoFocusText_6; }
	inline void set_mAutoFocusText_6(String_t* value)
	{
		___mAutoFocusText_6 = value;
		Il2CppCodeGenWriteBarrier(&___mAutoFocusText_6, value);
	}

	inline static int32_t get_offset_of_touchDuration_7() { return static_cast<int32_t>(offsetof(tapToFocus_t3006634492, ___touchDuration_7)); }
	inline float get_touchDuration_7() const { return ___touchDuration_7; }
	inline float* get_address_of_touchDuration_7() { return &___touchDuration_7; }
	inline void set_touchDuration_7(float value)
	{
		___touchDuration_7 = value;
	}

	inline static int32_t get_offset_of_touch_8() { return static_cast<int32_t>(offsetof(tapToFocus_t3006634492, ___touch_8)); }
	inline Touch_t407273883  get_touch_8() const { return ___touch_8; }
	inline Touch_t407273883 * get_address_of_touch_8() { return &___touch_8; }
	inline void set_touch_8(Touch_t407273883  value)
	{
		___touch_8 = value;
	}
};

struct tapToFocus_t3006634492_StaticFields
{
public:
	// tapToFocus/ClickAction tapToFocus::OnClicked
	ClickAction_t2688446951 * ___OnClicked_2;

public:
	inline static int32_t get_offset_of_OnClicked_2() { return static_cast<int32_t>(offsetof(tapToFocus_t3006634492_StaticFields, ___OnClicked_2)); }
	inline ClickAction_t2688446951 * get_OnClicked_2() const { return ___OnClicked_2; }
	inline ClickAction_t2688446951 ** get_address_of_OnClicked_2() { return &___OnClicked_2; }
	inline void set_OnClicked_2(ClickAction_t2688446951 * value)
	{
		___OnClicked_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnClicked_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
