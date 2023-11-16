/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRCompositor_IVRCompositor_019_SetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_019_SetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_019_SetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_019_GetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_WaitGetPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_019_WaitGetPoses_params *params = (struct IVRCompositor_IVRCompositor_019_WaitGetPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetLastPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetLastPoses_params *params = (struct IVRCompositor_IVRCompositor_019_GetLastPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex_params *params = (struct IVRCompositor_IVRCompositor_019_GetLastPoseForTrackedDeviceIndex_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame( void *args )
{
    struct IVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame_params *params = (struct IVRCompositor_IVRCompositor_019_ClearLastSubmittedFrame_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_PostPresentHandoff( void *args )
{
    struct IVRCompositor_IVRCompositor_019_PostPresentHandoff_params *params = (struct IVRCompositor_IVRCompositor_019_PostPresentHandoff_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->PostPresentHandoff(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetFrameTiming( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetFrameTiming_params *params = (struct IVRCompositor_IVRCompositor_019_GetFrameTiming_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetFrameTimings( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetFrameTimings_params *params = (struct IVRCompositor_IVRCompositor_019_GetFrameTimings_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetFrameTimings( params->pTiming, params->nFrames );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetFrameTimeRemaining( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetFrameTimeRemaining_params *params = (struct IVRCompositor_IVRCompositor_019_GetFrameTimeRemaining_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (float)iface->GetFrameTimeRemaining(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetCumulativeStats( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetCumulativeStats_params *params = (struct IVRCompositor_IVRCompositor_019_GetCumulativeStats_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->GetCumulativeStats( params->pStats, params->nStatsSizeInBytes );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_FadeToColor( void *args )
{
    struct IVRCompositor_IVRCompositor_019_FadeToColor_params *params = (struct IVRCompositor_IVRCompositor_019_FadeToColor_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetCurrentFadeColor( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetCurrentFadeColor_params *params = (struct IVRCompositor_IVRCompositor_019_GetCurrentFadeColor_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    *params->_ret = iface->GetCurrentFadeColor( params->bBackground );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_FadeGrid( void *args )
{
    struct IVRCompositor_IVRCompositor_019_FadeGrid_params *params = (struct IVRCompositor_IVRCompositor_019_FadeGrid_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetCurrentGridAlpha( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetCurrentGridAlpha_params *params = (struct IVRCompositor_IVRCompositor_019_GetCurrentGridAlpha_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (float)iface->GetCurrentGridAlpha(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_ClearSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_019_ClearSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_019_ClearSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_CompositorBringToFront( void *args )
{
    struct IVRCompositor_IVRCompositor_019_CompositorBringToFront_params *params = (struct IVRCompositor_IVRCompositor_019_CompositorBringToFront_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->CompositorBringToFront(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_CompositorGoToBack( void *args )
{
    struct IVRCompositor_IVRCompositor_019_CompositorGoToBack_params *params = (struct IVRCompositor_IVRCompositor_019_CompositorGoToBack_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->CompositorGoToBack(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_CompositorQuit( void *args )
{
    struct IVRCompositor_IVRCompositor_019_CompositorQuit_params *params = (struct IVRCompositor_IVRCompositor_019_CompositorQuit_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->CompositorQuit(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_IsFullscreen( void *args )
{
    struct IVRCompositor_IVRCompositor_019_IsFullscreen_params *params = (struct IVRCompositor_IVRCompositor_019_IsFullscreen_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess_params *params = (struct IVRCompositor_IVRCompositor_019_GetCurrentSceneFocusProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetLastFrameRenderer( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetLastFrameRenderer_params *params = (struct IVRCompositor_IVRCompositor_019_GetLastFrameRenderer_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastFrameRenderer(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_CanRenderScene( void *args )
{
    struct IVRCompositor_IVRCompositor_019_CanRenderScene_params *params = (struct IVRCompositor_IVRCompositor_019_CanRenderScene_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_ShowMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_019_ShowMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_019_ShowMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->ShowMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_HideMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_019_HideMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_019_HideMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->HideMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_IsMirrorWindowVisible( void *args )
{
    struct IVRCompositor_IVRCompositor_019_IsMirrorWindowVisible_params *params = (struct IVRCompositor_IVRCompositor_019_IsMirrorWindowVisible_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (bool)iface->IsMirrorWindowVisible(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_CompositorDumpImages( void *args )
{
    struct IVRCompositor_IVRCompositor_019_CompositorDumpImages_params *params = (struct IVRCompositor_IVRCompositor_019_CompositorDumpImages_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->CompositorDumpImages(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources( void *args )
{
    struct IVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources_params *params = (struct IVRCompositor_IVRCompositor_019_ShouldAppRenderWithLowResources_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (bool)iface->ShouldAppRenderWithLowResources(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn( void *args )
{
    struct IVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn_params *params = (struct IVRCompositor_IVRCompositor_019_ForceInterleavedReprojectionOn_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->ForceInterleavedReprojectionOn( params->bOverride );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_ForceReconnectProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_019_ForceReconnectProcess_params *params = (struct IVRCompositor_IVRCompositor_019_ForceReconnectProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->ForceReconnectProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_SuspendRendering( void *args )
{
    struct IVRCompositor_IVRCompositor_019_SuspendRendering_params *params = (struct IVRCompositor_IVRCompositor_019_SuspendRendering_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->SuspendRendering( params->bSuspend );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11_params *params = (struct IVRCompositor_IVRCompositor_019_GetMirrorTextureD3D11_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetMirrorTextureD3D11( params->eEye, params->pD3D11DeviceOrResource, params->ppD3D11ShaderResourceView );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetMirrorTextureGL( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetMirrorTextureGL_params *params = (struct IVRCompositor_IVRCompositor_019_GetMirrorTextureGL_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetMirrorTextureGL( params->eEye, params->pglTextureId, params->pglSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture( void *args )
{
    struct IVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture_params *params = (struct IVRCompositor_IVRCompositor_019_ReleaseSharedGLTexture_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (bool)iface->ReleaseSharedGLTexture( params->glTextureId, params->glSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess( void *args )
{
    struct IVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess_params *params = (struct IVRCompositor_IVRCompositor_019_LockGLSharedTextureForAccess_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->LockGLSharedTextureForAccess( params->glSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess( void *args )
{
    struct IVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess_params *params = (struct IVRCompositor_IVRCompositor_019_UnlockGLSharedTextureForAccess_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    iface->UnlockGLSharedTextureForAccess( params->glSharedTextureHandle );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired( void *args )
{
    struct IVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired_params *params = (struct IVRCompositor_IVRCompositor_019_GetVulkanInstanceExtensionsRequired_params *)args;
    struct u_IVRCompositor_IVRCompositor_019 *iface = (struct u_IVRCompositor_IVRCompositor_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetVulkanInstanceExtensionsRequired( params->pchValue, params->unBufferSize );
    return 0;
}

