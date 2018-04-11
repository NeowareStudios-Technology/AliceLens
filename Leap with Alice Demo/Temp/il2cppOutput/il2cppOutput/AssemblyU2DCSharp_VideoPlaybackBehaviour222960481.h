#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaType3153657181.h"
#include "AssemblyU2DCSharp_VideoPlayerHelper_MediaState921245858.h"

// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2243626319;
// VideoPlayerHelper
struct VideoPlayerHelper_t1808751630;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoPlaybackBehaviour
struct  VideoPlaybackBehaviour_t222960481  : public MonoBehaviour_t1158329972
{
public:
	// System.String VideoPlaybackBehaviour::m_path
	String_t* ___m_path_2;
	// UnityEngine.Texture VideoPlaybackBehaviour::m_playTexture
	Texture_t2243626319 * ___m_playTexture_3;
	// UnityEngine.Texture VideoPlaybackBehaviour::m_busyTexture
	Texture_t2243626319 * ___m_busyTexture_4;
	// UnityEngine.Texture VideoPlaybackBehaviour::m_errorTexture
	Texture_t2243626319 * ___m_errorTexture_5;
	// System.Boolean VideoPlaybackBehaviour::m_autoPlay
	bool ___m_autoPlay_6;
	// VideoPlayerHelper VideoPlaybackBehaviour::mVideoPlayer
	VideoPlayerHelper_t1808751630 * ___mVideoPlayer_8;
	// System.Boolean VideoPlaybackBehaviour::mIsInited
	bool ___mIsInited_9;
	// System.Boolean VideoPlaybackBehaviour::mInitInProgess
	bool ___mInitInProgess_10;
	// System.Boolean VideoPlaybackBehaviour::mAppPaused
	bool ___mAppPaused_11;
	// UnityEngine.Texture2D VideoPlaybackBehaviour::mVideoTexture
	Texture2D_t3542995729 * ___mVideoTexture_12;
	// UnityEngine.Texture VideoPlaybackBehaviour::mKeyframeTexture
	Texture_t2243626319 * ___mKeyframeTexture_13;
	// VideoPlayerHelper/MediaType VideoPlaybackBehaviour::mMediaType
	int32_t ___mMediaType_14;
	// VideoPlayerHelper/MediaState VideoPlaybackBehaviour::mCurrentState
	int32_t ___mCurrentState_15;
	// System.Single VideoPlaybackBehaviour::mSeekPosition
	float ___mSeekPosition_16;
	// System.Boolean VideoPlaybackBehaviour::isPlayableOnTexture
	bool ___isPlayableOnTexture_17;
	// UnityEngine.GameObject VideoPlaybackBehaviour::mIconPlane
	GameObject_t1756533147 * ___mIconPlane_18;
	// System.Boolean VideoPlaybackBehaviour::mIconPlaneActive
	bool ___mIconPlaneActive_19;

public:
	inline static int32_t get_offset_of_m_path_2() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___m_path_2)); }
	inline String_t* get_m_path_2() const { return ___m_path_2; }
	inline String_t** get_address_of_m_path_2() { return &___m_path_2; }
	inline void set_m_path_2(String_t* value)
	{
		___m_path_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_path_2, value);
	}

	inline static int32_t get_offset_of_m_playTexture_3() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___m_playTexture_3)); }
	inline Texture_t2243626319 * get_m_playTexture_3() const { return ___m_playTexture_3; }
	inline Texture_t2243626319 ** get_address_of_m_playTexture_3() { return &___m_playTexture_3; }
	inline void set_m_playTexture_3(Texture_t2243626319 * value)
	{
		___m_playTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_playTexture_3, value);
	}

	inline static int32_t get_offset_of_m_busyTexture_4() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___m_busyTexture_4)); }
	inline Texture_t2243626319 * get_m_busyTexture_4() const { return ___m_busyTexture_4; }
	inline Texture_t2243626319 ** get_address_of_m_busyTexture_4() { return &___m_busyTexture_4; }
	inline void set_m_busyTexture_4(Texture_t2243626319 * value)
	{
		___m_busyTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_busyTexture_4, value);
	}

	inline static int32_t get_offset_of_m_errorTexture_5() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___m_errorTexture_5)); }
	inline Texture_t2243626319 * get_m_errorTexture_5() const { return ___m_errorTexture_5; }
	inline Texture_t2243626319 ** get_address_of_m_errorTexture_5() { return &___m_errorTexture_5; }
	inline void set_m_errorTexture_5(Texture_t2243626319 * value)
	{
		___m_errorTexture_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_errorTexture_5, value);
	}

	inline static int32_t get_offset_of_m_autoPlay_6() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___m_autoPlay_6)); }
	inline bool get_m_autoPlay_6() const { return ___m_autoPlay_6; }
	inline bool* get_address_of_m_autoPlay_6() { return &___m_autoPlay_6; }
	inline void set_m_autoPlay_6(bool value)
	{
		___m_autoPlay_6 = value;
	}

	inline static int32_t get_offset_of_mVideoPlayer_8() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___mVideoPlayer_8)); }
	inline VideoPlayerHelper_t1808751630 * get_mVideoPlayer_8() const { return ___mVideoPlayer_8; }
	inline VideoPlayerHelper_t1808751630 ** get_address_of_mVideoPlayer_8() { return &___mVideoPlayer_8; }
	inline void set_mVideoPlayer_8(VideoPlayerHelper_t1808751630 * value)
	{
		___mVideoPlayer_8 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoPlayer_8, value);
	}

	inline static int32_t get_offset_of_mIsInited_9() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___mIsInited_9)); }
	inline bool get_mIsInited_9() const { return ___mIsInited_9; }
	inline bool* get_address_of_mIsInited_9() { return &___mIsInited_9; }
	inline void set_mIsInited_9(bool value)
	{
		___mIsInited_9 = value;
	}

	inline static int32_t get_offset_of_mInitInProgess_10() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___mInitInProgess_10)); }
	inline bool get_mInitInProgess_10() const { return ___mInitInProgess_10; }
	inline bool* get_address_of_mInitInProgess_10() { return &___mInitInProgess_10; }
	inline void set_mInitInProgess_10(bool value)
	{
		___mInitInProgess_10 = value;
	}

	inline static int32_t get_offset_of_mAppPaused_11() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___mAppPaused_11)); }
	inline bool get_mAppPaused_11() const { return ___mAppPaused_11; }
	inline bool* get_address_of_mAppPaused_11() { return &___mAppPaused_11; }
	inline void set_mAppPaused_11(bool value)
	{
		___mAppPaused_11 = value;
	}

	inline static int32_t get_offset_of_mVideoTexture_12() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___mVideoTexture_12)); }
	inline Texture2D_t3542995729 * get_mVideoTexture_12() const { return ___mVideoTexture_12; }
	inline Texture2D_t3542995729 ** get_address_of_mVideoTexture_12() { return &___mVideoTexture_12; }
	inline void set_mVideoTexture_12(Texture2D_t3542995729 * value)
	{
		___mVideoTexture_12 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoTexture_12, value);
	}

	inline static int32_t get_offset_of_mKeyframeTexture_13() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___mKeyframeTexture_13)); }
	inline Texture_t2243626319 * get_mKeyframeTexture_13() const { return ___mKeyframeTexture_13; }
	inline Texture_t2243626319 ** get_address_of_mKeyframeTexture_13() { return &___mKeyframeTexture_13; }
	inline void set_mKeyframeTexture_13(Texture_t2243626319 * value)
	{
		___mKeyframeTexture_13 = value;
		Il2CppCodeGenWriteBarrier(&___mKeyframeTexture_13, value);
	}

	inline static int32_t get_offset_of_mMediaType_14() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___mMediaType_14)); }
	inline int32_t get_mMediaType_14() const { return ___mMediaType_14; }
	inline int32_t* get_address_of_mMediaType_14() { return &___mMediaType_14; }
	inline void set_mMediaType_14(int32_t value)
	{
		___mMediaType_14 = value;
	}

	inline static int32_t get_offset_of_mCurrentState_15() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___mCurrentState_15)); }
	inline int32_t get_mCurrentState_15() const { return ___mCurrentState_15; }
	inline int32_t* get_address_of_mCurrentState_15() { return &___mCurrentState_15; }
	inline void set_mCurrentState_15(int32_t value)
	{
		___mCurrentState_15 = value;
	}

	inline static int32_t get_offset_of_mSeekPosition_16() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___mSeekPosition_16)); }
	inline float get_mSeekPosition_16() const { return ___mSeekPosition_16; }
	inline float* get_address_of_mSeekPosition_16() { return &___mSeekPosition_16; }
	inline void set_mSeekPosition_16(float value)
	{
		___mSeekPosition_16 = value;
	}

	inline static int32_t get_offset_of_isPlayableOnTexture_17() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___isPlayableOnTexture_17)); }
	inline bool get_isPlayableOnTexture_17() const { return ___isPlayableOnTexture_17; }
	inline bool* get_address_of_isPlayableOnTexture_17() { return &___isPlayableOnTexture_17; }
	inline void set_isPlayableOnTexture_17(bool value)
	{
		___isPlayableOnTexture_17 = value;
	}

	inline static int32_t get_offset_of_mIconPlane_18() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___mIconPlane_18)); }
	inline GameObject_t1756533147 * get_mIconPlane_18() const { return ___mIconPlane_18; }
	inline GameObject_t1756533147 ** get_address_of_mIconPlane_18() { return &___mIconPlane_18; }
	inline void set_mIconPlane_18(GameObject_t1756533147 * value)
	{
		___mIconPlane_18 = value;
		Il2CppCodeGenWriteBarrier(&___mIconPlane_18, value);
	}

	inline static int32_t get_offset_of_mIconPlaneActive_19() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481, ___mIconPlaneActive_19)); }
	inline bool get_mIconPlaneActive_19() const { return ___mIconPlaneActive_19; }
	inline bool* get_address_of_mIconPlaneActive_19() { return &___mIconPlaneActive_19; }
	inline void set_mIconPlaneActive_19(bool value)
	{
		___mIconPlaneActive_19 = value;
	}
};

struct VideoPlaybackBehaviour_t222960481_StaticFields
{
public:
	// System.Boolean VideoPlaybackBehaviour::sLoadingLocked
	bool ___sLoadingLocked_7;

public:
	inline static int32_t get_offset_of_sLoadingLocked_7() { return static_cast<int32_t>(offsetof(VideoPlaybackBehaviour_t222960481_StaticFields, ___sLoadingLocked_7)); }
	inline bool get_sLoadingLocked_7() const { return ___sLoadingLocked_7; }
	inline bool* get_address_of_sLoadingLocked_7() { return &___sLoadingLocked_7; }
	inline void set_sLoadingLocked_7(bool value)
	{
		___sLoadingLocked_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
