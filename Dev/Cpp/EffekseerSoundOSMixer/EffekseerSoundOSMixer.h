﻿
#ifndef	__EFFEKSEERSOUND_BASE_PRE_H__
#define	__EFFEKSEERSOUND_BASE_PRE_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include <Effekseer.h>

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
namespace EffekseerSound
{
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
class Sound;

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif	// __EFFEKSEERSOUND_BASE_PRE_H__

#ifndef	__EFFEKSEERSOUND_OSMIXER_H__
#define	__EFFEKSEERSOUND_OSMIXER_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include <OpenSoundMixer.h>

//----------------------------------------------------------------------------------
// Lib
//----------------------------------------------------------------------------------

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
namespace EffekseerSound
{
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
	
/**
	@brief	サウンドデータ
*/
//struct SoundData
//{	
//	/**
//		@brief	チャンネル数。
//	*/
//	int32_t			channels;
//	
//	/**
//		@brief	サンプリング周波数。
//	*/
//	int32_t			sampleRate;
//
//	/**
//		@brief	OSMixerソースボイス用バッファ。
//	*/
//	OSMIXER_BUFFER	buffer;
//};

/**
	@brief	サウンドクラス
*/
class Sound : public Effekseer::IReference
{
protected:
	Sound() {}
	virtual ~Sound() {}

public:
	/**
		@brief	インスタンスを生成する。
		@param	device	[in]	OSMixerのデバイス
		@param	voiceCount1ch	[in]	モノラルボイス数
		@param	voiceCount2ch	[in]	ステレオボイス数
		@return	インスタンス
	*/
	static Sound* Create( osm::Manager* soundManager );
	
	/**
		@brief	このインスタンスを破棄する。
	*/
	virtual void Destroy() = 0;

	/**
		@brief	更新
	*/
	virtual void Update() = 0;

	/**
		@brief	リスナー設定
	*/
	virtual void SetListener( const ::Effekseer::Vector3D& pos, 
		const ::Effekseer::Vector3D& at, const ::Effekseer::Vector3D& up ) = 0;
	
	/**
		@brief	サウンドプレイヤを生成する。
	*/
	virtual ::Effekseer::SoundPlayer* CreateSoundPlayer() = 0;

	/**
		@brief	標準のサウンド読込インスタンスを生成する。
	*/
	virtual ::Effekseer::SoundLoader* CreateSoundLoader( ::Effekseer::FileInterface* fileInterface = NULL ) = 0;
	
	/**
		@brief	ミュート設定
	*/
	virtual void SetMute( bool mute ) = 0;

};

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif	// __EFFEKSEERSOUND_OSMIXER_H__