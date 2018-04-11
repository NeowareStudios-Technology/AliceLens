#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_MenuOptions3210604277.h"

// PlayVideo
struct PlayVideo_t2858951647;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoPlaybackMenuOptions
struct  VideoPlaybackMenuOptions_t1188888539  : public MenuOptions_t3210604277
{
public:
	// PlayVideo VideoPlaybackMenuOptions::mPlayVideo
	PlayVideo_t2858951647 * ___mPlayVideo_5;

public:
	inline static int32_t get_offset_of_mPlayVideo_5() { return static_cast<int32_t>(offsetof(VideoPlaybackMenuOptions_t1188888539, ___mPlayVideo_5)); }
	inline PlayVideo_t2858951647 * get_mPlayVideo_5() const { return ___mPlayVideo_5; }
	inline PlayVideo_t2858951647 ** get_address_of_mPlayVideo_5() { return &___mPlayVideo_5; }
	inline void set_mPlayVideo_5(PlayVideo_t2858951647 * value)
	{
		___mPlayVideo_5 = value;
		Il2CppCodeGenWriteBarrier(&___mPlayVideo_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
