/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKGestureCameraBehavior.h>

@class VKTimedAnimation;

@interface VKMapGestureCameraController : VKGestureCameraBehavior {

	CGPoint _panLastScreenPoint;
	BOOL _isPitchIncreasing;
	double _beganPitch;
	VKTimedAnimation* _zoomAnimation;

}
-(BOOL)isPitchIncreasing;
-(void)updateZoom:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)updatePan:(CGPoint)arg1 lastScreenPoint:(CGPoint)arg2 ;
-(void)updateRotate:(double)arg1 atScreenPoint:(CGPoint)arg2 ;
-(void)beginPitch:(CGPoint)arg1 ;
-(void)updatePitch:(CGPoint)arg1 translation:(double)arg2 ;
@end

