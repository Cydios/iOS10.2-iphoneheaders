/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@interface SBAppIconForceTouchSettings : SBUISettings {

	BOOL _enableUIPreviewInteractionAnimations;
	float _animationDurationMultiplier;

}

@property (assign,nonatomic) float animationDurationMultiplier;                      //@synthesize animationDurationMultiplier=_animationDurationMultiplier - In the implementation block
@property (assign,nonatomic) BOOL enableUIPreviewInteractionAnimations;              //@synthesize enableUIPreviewInteractionAnimations=_enableUIPreviewInteractionAnimations - In the implementation block
+(id)settingsControllerModule;
+(id)defaults;
-(float)animationDurationMultiplier;
-(void)setAnimationDurationMultiplier:(float)arg1 ;
-(BOOL)enableUIPreviewInteractionAnimations;
-(void)setEnableUIPreviewInteractionAnimations:(BOOL)arg1 ;
-(void)setDefaultValues;
@end

