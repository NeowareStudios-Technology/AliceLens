#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoPlayerHelper
struct  VideoPlayerHelper_t1808751630  : public Il2CppObject
{
public:
	// System.String VideoPlayerHelper::mFilename
	String_t* ___mFilename_0;
	// System.String VideoPlayerHelper::mFullScreenFilename
	String_t* ___mFullScreenFilename_1;
	// System.IntPtr VideoPlayerHelper::mVideoPlayerPtr
	IntPtr_t ___mVideoPlayerPtr_2;

public:
	inline static int32_t get_offset_of_mFilename_0() { return static_cast<int32_t>(offsetof(VideoPlayerHelper_t1808751630, ___mFilename_0)); }
	inline String_t* get_mFilename_0() const { return ___mFilename_0; }
	inline String_t** get_address_of_mFilename_0() { return &___mFilename_0; }
	inline void set_mFilename_0(String_t* value)
	{
		___mFilename_0 = value;
		Il2CppCodeGenWriteBarrier(&___mFilename_0, value);
	}

	inline static int32_t get_offset_of_mFullScreenFilename_1() { return static_cast<int32_t>(offsetof(VideoPlayerHelper_t1808751630, ___mFullScreenFilename_1)); }
	inline String_t* get_mFullScreenFilename_1() const { return ___mFullScreenFilename_1; }
	inline String_t** get_address_of_mFullScreenFilename_1() { return &___mFullScreenFilename_1; }
	inline void set_mFullScreenFilename_1(String_t* value)
	{
		___mFullScreenFilename_1 = value;
		Il2CppCodeGenWriteBarrier(&___mFullScreenFilename_1, value);
	}

	inline static int32_t get_offset_of_mVideoPlayerPtr_2() { return static_cast<int32_t>(offsetof(VideoPlayerHelper_t1808751630, ___mVideoPlayerPtr_2)); }
	inline IntPtr_t get_mVideoPlayerPtr_2() const { return ___mVideoPlayerPtr_2; }
	inline IntPtr_t* get_address_of_mVideoPlayerPtr_2() { return &___mVideoPlayerPtr_2; }
	inline void set_mVideoPlayerPtr_2(IntPtr_t value)
	{
		___mVideoPlayerPtr_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
