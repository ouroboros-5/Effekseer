﻿
#ifndef	__EFFEKSEERRENDERER_GL_TRACK_RENDERER_H__
#define	__EFFEKSEERRENDERER_GL_TRACK_RENDERER_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include "EffekseerRendererGL.Renderer.h"
#include "../../EffekseerRendererCommon/EffekseerRenderer.TrackRendererBase.h"

//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------
namespace EffekseerRendererGL
{
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
typedef ::Effekseer::TrackRenderer::NodeParameter efkTrackNodeParam;
typedef ::Effekseer::TrackRenderer::InstanceParameter efkTrackInstanceParam;
typedef ::Effekseer::Vector3D efkVector3D;

class TrackRenderer
	: public ::EffekseerRenderer::TrackRendererBase
{
private:
	RendererImplemented*	m_renderer;
	
	TrackRenderer(RendererImplemented* renderer);

public:

	virtual ~TrackRenderer();

	static TrackRenderer* Create( RendererImplemented* renderer );

public:
	void BeginRendering( const efkTrackNodeParam& parameter, int32_t count, void* userData );

	void Rendering( const efkTrackNodeParam& parameter, const efkTrackInstanceParam& instanceParameter, void* userData );

	void EndRendering( const efkTrackNodeParam& parameter, void* userData );
};
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif	// __EFFEKSEERRENDERER_GL_TRACK_RENDERER_H__