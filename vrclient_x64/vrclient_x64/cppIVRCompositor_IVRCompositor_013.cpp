/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRCompositor_IVRCompositor_013_SetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_013_SetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_013_SetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_GetTrackingSpace( void *args )
{
    struct IVRCompositor_IVRCompositor_013_GetTrackingSpace_params *params = (struct IVRCompositor_IVRCompositor_013_GetTrackingSpace_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackingSpace(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_WaitGetPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_013_WaitGetPoses_params *params = (struct IVRCompositor_IVRCompositor_013_WaitGetPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_GetLastPoses( void *args )
{
    struct IVRCompositor_IVRCompositor_013_GetLastPoses_params *params = (struct IVRCompositor_IVRCompositor_013_GetLastPoses_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex( void *args )
{
    struct IVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex_params *params = (struct IVRCompositor_IVRCompositor_013_GetLastPoseForTrackedDeviceIndex_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastPoseForTrackedDeviceIndex( params->unDeviceIndex, params->pOutputPose, params->pOutputGamePose );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame( void *args )
{
    struct IVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame_params *params = (struct IVRCompositor_IVRCompositor_013_ClearLastSubmittedFrame_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_PostPresentHandoff( void *args )
{
    struct IVRCompositor_IVRCompositor_013_PostPresentHandoff_params *params = (struct IVRCompositor_IVRCompositor_013_PostPresentHandoff_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->PostPresentHandoff(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_GetFrameTiming( void *args )
{
    struct IVRCompositor_IVRCompositor_013_GetFrameTiming_params *params = (struct IVRCompositor_IVRCompositor_013_GetFrameTiming_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = (bool)iface->GetFrameTiming( params->pTiming, params->unFramesAgo );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_GetFrameTimeRemaining( void *args )
{
    struct IVRCompositor_IVRCompositor_013_GetFrameTimeRemaining_params *params = (struct IVRCompositor_IVRCompositor_013_GetFrameTimeRemaining_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = (float)iface->GetFrameTimeRemaining(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_FadeToColor( void *args )
{
    struct IVRCompositor_IVRCompositor_013_FadeToColor_params *params = (struct IVRCompositor_IVRCompositor_013_FadeToColor_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_FadeGrid( void *args )
{
    struct IVRCompositor_IVRCompositor_013_FadeGrid_params *params = (struct IVRCompositor_IVRCompositor_013_FadeGrid_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_ClearSkyboxOverride( void *args )
{
    struct IVRCompositor_IVRCompositor_013_ClearSkyboxOverride_params *params = (struct IVRCompositor_IVRCompositor_013_ClearSkyboxOverride_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_CompositorBringToFront( void *args )
{
    struct IVRCompositor_IVRCompositor_013_CompositorBringToFront_params *params = (struct IVRCompositor_IVRCompositor_013_CompositorBringToFront_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->CompositorBringToFront(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_CompositorGoToBack( void *args )
{
    struct IVRCompositor_IVRCompositor_013_CompositorGoToBack_params *params = (struct IVRCompositor_IVRCompositor_013_CompositorGoToBack_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->CompositorGoToBack(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_CompositorQuit( void *args )
{
    struct IVRCompositor_IVRCompositor_013_CompositorQuit_params *params = (struct IVRCompositor_IVRCompositor_013_CompositorQuit_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->CompositorQuit(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_IsFullscreen( void *args )
{
    struct IVRCompositor_IVRCompositor_013_IsFullscreen_params *params = (struct IVRCompositor_IVRCompositor_013_IsFullscreen_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = (bool)iface->IsFullscreen(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess( void *args )
{
    struct IVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess_params *params = (struct IVRCompositor_IVRCompositor_013_GetCurrentSceneFocusProcess_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetCurrentSceneFocusProcess(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_GetLastFrameRenderer( void *args )
{
    struct IVRCompositor_IVRCompositor_013_GetLastFrameRenderer_params *params = (struct IVRCompositor_IVRCompositor_013_GetLastFrameRenderer_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetLastFrameRenderer(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_CanRenderScene( void *args )
{
    struct IVRCompositor_IVRCompositor_013_CanRenderScene_params *params = (struct IVRCompositor_IVRCompositor_013_CanRenderScene_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = (bool)iface->CanRenderScene(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_ShowMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_013_ShowMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_013_ShowMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->ShowMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_HideMirrorWindow( void *args )
{
    struct IVRCompositor_IVRCompositor_013_HideMirrorWindow_params *params = (struct IVRCompositor_IVRCompositor_013_HideMirrorWindow_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->HideMirrorWindow(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_IsMirrorWindowVisible( void *args )
{
    struct IVRCompositor_IVRCompositor_013_IsMirrorWindowVisible_params *params = (struct IVRCompositor_IVRCompositor_013_IsMirrorWindowVisible_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = (bool)iface->IsMirrorWindowVisible(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_CompositorDumpImages( void *args )
{
    struct IVRCompositor_IVRCompositor_013_CompositorDumpImages_params *params = (struct IVRCompositor_IVRCompositor_013_CompositorDumpImages_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->CompositorDumpImages(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources( void *args )
{
    struct IVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources_params *params = (struct IVRCompositor_IVRCompositor_013_ShouldAppRenderWithLowResources_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    params->_ret = (bool)iface->ShouldAppRenderWithLowResources(  );
    return 0;
}

NTSTATUS IVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn( void *args )
{
    struct IVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn_params *params = (struct IVRCompositor_IVRCompositor_013_ForceInterleavedReprojectionOn_params *)args;
    struct u_IVRCompositor_IVRCompositor_013 *iface = (struct u_IVRCompositor_IVRCompositor_013 *)params->linux_side;
    iface->ForceInterleavedReprojectionOn( params->bOverride );
    return 0;
}

