#import <CameraUI/CAMExposureBiasSlider.h>
#import <CameraUI/CAMViewfinderFlipTransition.h>
#import <CameraUI/CAMIdleController.h>
#import <CameraUI/CAMOrientationUtilities.h>
#import <CameraUI/CAMZoomSlider.h>
#import <CameraUI/CAMRampToVideoZoomFactorCommand.h>
#import <CameraUI/CAMPanoramaConfiguration.h>
#import <CameraUI/CAMQueryVideoDimensionsCommand.h>
#import <CameraUI/CAMBottomBar.h>
#import <CameraUI/CAMTransientAsset.h>
#import <CameraUI/CAMSetVideoOrientationCommand.h>
#import <CameraUI/CAMDisabledModeOverlayView.h>
#import <CameraUI/CAMZoomSliderZoomFactorLabel.h>
#import <CameraUI/CAMStopVideoRecordingCommand.h>
#import <CameraUI/CAMPanoramaLevelView.h>
#import <CameraUI/CAMLegacyStillImageCaptureRequest.h>
#import <CameraUI/CAMMutableLegacyStillImageCaptureRequest.h>
#import <CameraUI/CAMCaptureEngineDevice.h>
#import <CameraUI/CAMIOSurfaceWrapper.h>
#import <CameraUI/CAMApplication.h>
#import <CameraUI/CAMVideoRecordingCameraSelectionBehaviorCommand.h>
#import <CameraUI/CAMCounterRotatingLayer.h>
#import <CameraUI/CAMPanoramaPaintingStatus.h>
#import <CameraUI/CAMSecureWindow.h>
#import <CameraUI/CAMCaptureMetadataUtilities.h>
#import <CameraUI/CAMPreviewContainerMaskingView.h>
#import <CameraUI/CAMStillImageCaptureCommand.h>
#import <CameraUI/CAMIrisVideoJob.h>
#import <CameraUI/CAMPowerController.h>
#import <CameraUI/CAMShallowDepthOfFieldEffectCommand.h>
#import <CameraUI/CAMExposureResult.h>
#import <CameraUI/CAMLowLightTimelapseCommand.h>
#import <CameraUI/CAMNebulaKeepAliveController.h>
#import <CameraUI/CAMPanoramaConfigurationCommand.h>
#import <CameraUI/CAMTorchPattern.h>
#import <CameraUI/CAMLegacyStillImageCaptureCommand.h>
#import <CameraUI/CAMSurfaceLegacyStillImageCaptureCommand.h>
#import <CameraUI/CAMSampleBufferLegacyStillImageCaptureCommand.h>
#import <CameraUI/CAMTransientPairedVideo.h>
#import <CameraUI/CAMLedger.h>
#import <CameraUI/CAMPanoramaRetainedBufferHintCommand.h>
#import <CameraUI/CAMPortraitModeInstructionLabel.h>
#import <CameraUI/CAMStillImageCaptureResolvedSettings.h>
#import <CameraUI/CAMPendingLocalPersistenceWrapper.h>
#import <CameraUI/CAMMotionController.h>
#import <CameraUI/CAMZoomControl.h>
#import <CameraUI/CAMFlipButton.h>
#import <CameraUI/CAMVideoRecordOrientationCommand.h>
#import <CameraUI/CAMUserPreferences.h>
#import <CameraUI/CAMFocusLockBadge.h>
#import <CameraUI/CAMViewfinderViewController.h>
#import <CameraUI/CAMImageWell.h>
#import <CameraUI/CAMFaceResult.h>
#import <CameraUI/CAMGridView.h>
#import <CameraUI/CAMTimelapseJPEGReader.h>
#import <CameraUI/CAMNebulaDaemonConnectionManager.h>
#import <CameraUI/CAMModeAndDeviceCommand.h>
#import <CameraUI/CAMCaptureCommandContext.h>
#import <CameraUI/CAMTimelapseOldStabilizationMovieWriter.h>
#import <CameraUI/CAMFilterButton.h>
#import <CameraUI/CAMPanoramaViewController.h>
#import <CameraUI/CAMPausePairedVideoRecordingCommand.h>
#import <CameraUI/CAMFlashBadge.h>
#import <CameraUI/CAMBufferObservance.h>
#import <CameraUI/CAMPreviewContainerView.h>
#import <CameraUI/CAMTimerIndicatorView.h>
#import <CameraUI/CAMPriorityNotificationCenterEntry.h>
#import <CameraUI/CAMPriorityNotificationCenter.h>
#import <CameraUI/CAMConflictingControlConfiguration.h>
#import <CameraUI/CAMCameraRollController.h>
#import <CameraUI/CAMImagePickerCameraViewController.h>
#import <CameraUI/CAMVideoStabilizationCommand.h>
#import <CameraUI/CAMVideoCaptureResponse.h>
#import <CameraUI/CAMLowDiskSpaceAlertView.h>
#import <CameraUI/CAMFocusResult.h>
#import <CameraUI/CAMCallStatusMonitor.h>
#import <CameraUI/CAMClosedViewfinderController.h>
#import <CameraUI/CAMVideoHDRCommand.h>
#import <CameraUI/CAMPanoramaDirectionCommand.h>
#import <CameraUI/CAMElapsedTimeView.h>
#import <CameraUI/CAMVideoRecordFaceMetadataCommand.h>
#import <CameraUI/CAMViewfinderOpenAndCloseTransition.h>
#import <CameraUI/CAMTimerButton.h>
#import <CameraUI/CAMColorSpaceCommand.h>
#import <CameraUI/CAMBadgeView.h>
#import <CameraUI/CAMImageControlModeCommand.h>
#import <CameraUI/CAMLegibilityViewHelper.h>
#import <CameraUI/CAMNebulaUtilities.h>
#import <CameraUI/CAMVideoCaptureRequest.h>
#import <CameraUI/CAMMutableVideoCaptureRequest.h>
#import <CameraUI/CAMTestModeChangeListener.h>
#import <CameraUI/CAMPerformanceTestHarness.h>
#import <CameraUI/CAMVideoFramerateCommand.h>
#import <CameraUI/CAMEffectsPreviewVideoDataOutputEnabledCommand.h>
#import <CameraUI/CAMEffectsGridLabelsView.h>
#import <CameraUI/CAMFaceDetectionCommand.h>
#import <CameraUI/CAMEffectsRenderer.h>
#import <CameraUI/CAMButtonLabel.h>
#import <CameraUI/CAMLivePhotoBadge.h>
#import <CameraUI/CAMVideoLocalPersistenceResult.h>
#import <CameraUI/CAMModeDialItem.h>
#import <CameraUI/CAMModeDial.h>
#import <CameraUI/CAMDeviceSwitchTestHarness.h>
#import <CameraUI/CAMIrisDiskUtilities.h>
#import <CameraUI/CAMCaptureMovieFileOutput.h>
#import <CameraUI/CAMCaptureRequest.h>
#import <CameraUI/CUShutterButton.h>
#import <CameraUI/CAMPanoramaProcessor.h>
#import <CameraUI/CAMPreciseTimer.h>
#import <CameraUI/CAMTimelapseState.h>
#import <CameraUI/CAMFocusLockWithLensPositionCommand.h>
#import <CameraUI/CAMRemoteShutterController.h>
#import <CameraUI/CAMShutterIndicatorView.h>
#import <CameraUI/CAMZoomFactorLabel.h>
#import <CameraUI/CAMIrisVideoController.h>
#import <CameraUI/CAMStartVideoRecordingCommand.h>
#import <CameraUI/CAMUpdateFocusAndExposureForStopVideoRecordingCommand.h>
#import <CameraUI/CAMGLLayerDelegate.h>
#import <CameraUI/CAMGLView.h>
#import <CameraUI/CAMPersistenceResponse.h>
#import <CameraUI/CAMZoomButton.h>
#import <CameraUI/CAMPersistenceController.h>
#import <CameraUI/CAMIrisButton.h>
#import <CameraUI/CAMExposureBiasSliderThumb.h>
#import <CameraUI/CAMTimelapseBackendSessionContext.h>
#import <CameraUI/CAMViewfinderView.h>
#import <CameraUI/CAMHighResolutionStillImageCommand.h>
#import <CameraUI/CAMNebulaDaemonProxyManager.h>
#import <CameraUI/CAMSubjectIndicatorView.h>
#import <CameraUI/CAMSubjectAreaChangeMonitoringCommand.h>
#import <CameraUI/CUCaptureController.h>
#import <CameraUI/CAMPanoramaUtilities.h>
#import <CameraUI/CAMSnapshotView.h>
#import <CameraUI/CAMReviewViewController.h>
#import <CameraUI/CAMProtectionController.h>
#import <CameraUI/CAMFocusIndicatorView.h>
#import <CameraUI/CAMExposureCommand.h>
#import <CameraUI/CAMVideoPersistenceResponse.h>
#import <CameraUI/CAMStillImageStabilizationCommand.h>
#import <CameraUI/CAMReviewViewControllerContainerView.h>
#import <CameraUI/CAMFlashButton.h>
#import <CameraUI/CAMKeyValueCoalescer.h>
#import <CameraUI/CAMEffectsFullsizeView.h>
#import <CameraUI/CAMPendingRemotePersistenceWrapper.h>
#import <CameraUI/CAMBufferObservanceChange.h>
#import <CameraUI/CAMReviewButton.h>
#import <CameraUI/CAMNebulaIrisBackendController.h>
#import <CameraUI/CAMBadgeTextView.h>
#import <CameraUI/CAMBlinkAndSmileDetectionCommand.h>
#import <CameraUI/CAMLowLightBoostCommand.h>
#import <CameraUI/CAMCaptureCapabilities.h>
#import <CameraUI/CAMQuadraHighResolutionStillImageCommand.h>
#import <CameraUI/CAMZoomDial.h>
#import <CameraUI/CAMTimelapseStabilizationCommand.h>
#import <CameraUI/CAMKeepAliveController.h>
#import <CameraUI/CAMTimelapseController.h>
#import <CameraUI/CAMPreviewLayerEnabledCommand.h>
#import <CameraUI/CAMHDRCommand.h>
#import <CameraUI/CAMFocusCommand.h>
#import <CameraUI/CAMCameraReviewAdapter.h>
#import <CameraUI/CAMTransientImageManagerRequest.h>
#import <CameraUI/CAMTransientImageManager.h>
#import <CameraUI/CAMFocusIndicatorRectView.h>
#import <CameraUI/CAMUpdateFocusAndExposureForStartVideoRecordingCommand.h>
#import <CameraUI/CAMVideoPreviewView.h>
#import <CameraUI/CAMStillImageCaptureResult.h>
#import <CameraUI/CAMFormattingManager.h>
#import <CameraUI/CAMCaptureCommand.h>
#import <CameraUI/CAMCaptureRequestIntervalometer.h>
#import <CameraUI/CAMPanoramaArrowView.h>
#import <CameraUI/CAMStartPanoramaCommand.h>
#import <CameraUI/CAMMemoizationCache.h>
#import <CameraUI/CAMHDRButton.h>
#import <CameraUI/CAMEffectFilterManager.h>
#import <CameraUI/CAMCaptureResponse.h>
#import <CameraUI/CAMFaceIndicatorView.h>
#import <CameraUI/CAMStillImageCaptureResponse.h>
#import <CameraUI/CAMBurstController.h>
#import <CameraUI/CAMTorchPatternController.h>
#import <CameraUI/CAMWhiteBalanceCommand.h>
#import <CameraUI/CAMFocusAtCenterForVideoRecordingCommand.h>
#import <CameraUI/CAMTorchCommand.h>
#import <CameraUI/CAMModeSwitchTestHarness.h>
#import <CameraUI/CAMTimelapseSettings.h>
#import <CameraUI/CAMFlashCommand.h>
#import <CameraUI/CAMExpandableMenuButton.h>
#import <CameraUI/CAMShallowDepthOfFieldBadge.h>
#import <CameraUI/CAMStillImagePersistenceResponse.h>
#import <CameraUI/CAMCameraViewControllerContainerView.h>
#import <CameraUI/CAMVideoCaptureResult.h>
#import <CameraUI/CAMPanoramaLabel.h>
#import <CameraUI/CAMSetVideoZoomFactorCommand.h>
#import <CameraUI/CAMIrisVideoRecordingCommand.h>
#import <CameraUI/CAMTimelapseStabilizationMovieWriter.h>
#import <CameraUI/CAMPhysicalCaptureRecognizer.h>
#import <CameraUI/CAMBufferKeyValueObserverObservance.h>
#import <CameraUI/CAMBufferKeyValueObserverObservanceChange.h>
#import <CameraUI/CAMUserPreferencesMigrator.h>
#import <CameraUI/CAMStillImageCaptureRequest.h>
#import <CameraUI/CAMMutableStillImageCaptureRequest.h>
#import <CameraUI/CAMPanoramaView.h>
#import <CameraUI/CAMTimelapseShutterRingView.h>
#import <CameraUI/CAMIntervalometerTestHarness.h>
#import <CameraUI/CAMBurstIndicatorView.h>
#import <CameraUI/CAMTopBar.h>
#import <CameraUI/CAMNebulaDaemon.h>
#import <CameraUI/CAMEffectsGridView.h>
#import <CameraUI/CAMPreviewView.h>
#import <CameraUI/CAMShutterSoundCommand.h>
#import <CameraUI/CAMLocationController.h>
#import <CameraUI/CAMTimelapsePlaceholderResult.h>
#import <CameraUI/CAMThumbnailGenerator.h>
#import <CameraUI/CAMPanoramaPreviewView.h>
#import <CameraUI/CAMInstructionLabel.h>
#import <CameraUI/CAMGraphConfigurationInspectionCommand.h>
#import <CameraUI/CAMStartRunningCommand.h>
#import <CameraUI/CAMZoomDialDotsView.h>
#import <CameraUI/CAMFramerateIndicatorView.h>
#import <CameraUI/CAMQueryTimelapseDimensionsCommand.h>
#import <CameraUI/CAMJPEGDecoder.h>
#import <CameraUI/CAMShutterButtonRingView.h>
#import <CameraUI/CAMPortraitModeDescriptionOverlayView.h>
#import <CameraUI/CAMCaptureEngine.h>
#import <CameraUI/CAMTimelapseDiskUtilities.h>
#import <CameraUI/CAMCaptureConversions.h>
#import <CameraUI/CAMCaptureGraphConfiguration.h>
#import <CameraUI/CAMTimelapseMovieWriter.h>
#import <CameraUI/CAMPreviewViewController.h>
#import <CameraUI/CAMCaptureConfiguration.h>
#import <CameraUI/CAMBurstAnalysisResult.h>
#import <CameraUI/CAMVideoCorruptor.h>
#import <CameraUI/CAMCaptureStillImageOutput.h>
#import <CameraUI/CAMZoomControlButtonMaskView.h>
#import <CameraUI/CAMCancelVideoZoomRampCommand.h>
#import <CameraUI/CAMNebulaSecondaryState.h>
#import <CameraUI/CAMBurstSession.h>
#import <CameraUI/CAMBufferNotificationObservance.h>
#import <CameraUI/CAMBufferNotificationObservanceChange.h>
#import <CameraUI/CAMStopPanoramaCommand.h>
#import <CameraUI/CAMBuffer.h>
#import <CameraUI/CAMExposureTargetBiasCommand.h>
#import <CameraUI/CAMPanoramaCaptureRequest.h>
#import <CameraUI/CAMMutablePanoramaCaptureRequest.h>
#import <CameraUI/CAMURLConfigurationRequest.h>
#import <CameraUI/CAMHDRSuggestionMonitoringCommand.h>
#import <CameraUI/CAMApplicationDelegate.h>
#import <CameraUI/CAMSquareCropCommand.h>
#import <CameraUI/CAMAnimationDelegate.h>
#import <CameraUI/CAMAnimationHelper.h>
#import <CameraUI/CAMHDRBadge.h>
#import <CameraUI/CAMTimelapseBackendController.h>
#import <CameraUI/CAMPhysicalCaptureNotifier.h>
#import <CameraUI/CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView.h>
#import <CameraUI/CAMPanoramaOutput.h>
#import <CameraUI/CAMStillImageLocalPersistenceResult.h>
#import <CameraUI/CAMTransientDataSource.h>
#import <CameraUI/CAMCameraViewController.h>