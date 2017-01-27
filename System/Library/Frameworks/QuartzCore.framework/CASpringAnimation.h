/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CABasicAnimation.h>

@interface CASpringAnimation : CABasicAnimation

@property (assign) double velocity; 
@property (assign) double mass; 
@property (assign) double stiffness; 
@property (assign) double damping; 
@property (assign) double initialVelocity; 
@property (readonly) double settlingDuration; 
+(id)_lp_springWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 ;
+(id)defaultValueForKey:(id)arg1 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(void)setVelocity:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(float)_solveForInput:(float)arg1 ;
-(double)velocity;
-(double)damping;
-(double)mass;
-(double)durationForEpsilon:(double)arg1 ;
-(double)stiffness;
-(double)initialVelocity;
-(double)settlingDuration;
-(void)setInitialVelocity:(double)arg1 ;
-(double)_timeFunction:(double)arg1 ;
@end
