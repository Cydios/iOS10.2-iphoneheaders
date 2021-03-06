/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/MediaPlayerFramework.axbundle/MediaPlayerFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerFramework/MediaPlayerFramework-Structs.h>
#import <MediaPlayerFramework/__MPVideoPlaybackOverlayViewAccessibility_super.h>

@interface MPVideoPlaybackOverlayViewAccessibility : __MPVideoPlaybackOverlayViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_configureTransportControls;
-(void)_effectiveScaleModeDidChange:(id)arg1 ;
-(void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2 ;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)_axUpdatePlayPauseButton;
-(void)_axUpdatePictureInPictureButton;
-(void)_axUpdateScaleButton;
-(void)_axAnnotateLeftRightButtons;
-(void)_axAnnotateAllButtons;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
@end

