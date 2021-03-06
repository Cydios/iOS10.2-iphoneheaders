/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUQuickControlSliderGestureTransformerDelegate;
#import <HomeUI/HomeUI-Structs.h>
@class UIGestureRecognizer, HUQuickControlPanningContext;

@interface HUQuickControlSliderGestureTransformer : NSObject {

	BOOL _ignoreTouches;
	BOOL _hasRecognizedSignificantSliderValueChange;
	id<HUQuickControlSliderGestureTransformerDelegate> _delegate;
	UIGestureRecognizer* _gestureRecognizer;
	HUQuickControlPanningContext* _context;
	double _referenceSliderValue;
	double _currentSliderValue;
	double _accumulatedDragDistance;
	CGPoint _referenceTouchLocation;
	CGPoint _lastTouchLocation;

}

@property (nonatomic,retain) UIGestureRecognizer * gestureRecognizer;                                         //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) double referenceSliderValue;                                                     //@synthesize referenceSliderValue=_referenceSliderValue - In the implementation block
@property (assign,nonatomic) double currentSliderValue;                                                       //@synthesize currentSliderValue=_currentSliderValue - In the implementation block
@property (assign,nonatomic) CGPoint referenceTouchLocation;                                                  //@synthesize referenceTouchLocation=_referenceTouchLocation - In the implementation block
@property (assign,nonatomic) CGPoint lastTouchLocation;                                                       //@synthesize lastTouchLocation=_lastTouchLocation - In the implementation block
@property (assign,nonatomic) double accumulatedDragDistance;                                                  //@synthesize accumulatedDragDistance=_accumulatedDragDistance - In the implementation block
@property (assign,nonatomic) BOOL hasRecognizedSignificantSliderValueChange;                                  //@synthesize hasRecognizedSignificantSliderValueChange=_hasRecognizedSignificantSliderValueChange - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlSliderGestureTransformerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HUQuickControlPanningContext * context;                                        //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL ignoreTouches;                                                              //@synthesize ignoreTouches=_ignoreTouches - In the implementation block
-(void)setDelegate:(id<HUQuickControlSliderGestureTransformerDelegate>)arg1 ;
-(void)dealloc;
-(id<HUQuickControlSliderGestureTransformerDelegate>)delegate;
-(void)setGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)gestureRecognizer;
-(HUQuickControlPanningContext *)context;
-(void)setIgnoreTouches:(BOOL)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 context:(id)arg2 ;
-(BOOL)hasRecognizedSignificantSliderValueChange;
-(void)setLastTouchLocation:(CGPoint)arg1 ;
-(CGPoint)lastTouchLocation;
-(void)setReferenceTouchLocation:(CGPoint)arg1 ;
-(void)setReferenceSliderValue:(double)arg1 ;
-(void)setCurrentSliderValue:(double)arg1 ;
-(void)_handleGesturePan:(id)arg1 ;
-(BOOL)ignoreTouches;
-(BOOL)_shouldIgnoreAllGestures;
-(void)_handleSliderValuePan:(CGPoint)arg1 ;
-(double)accumulatedDragDistance;
-(void)setAccumulatedDragDistance:(double)arg1 ;
-(double)_rawSliderValueForLocation:(CGPoint)arg1 ;
-(double)currentSliderValue;
-(double)referenceSliderValue;
-(void)setHasRecognizedSignificantSliderValueChange:(BOOL)arg1 ;
-(CGPoint)referenceTouchLocation;
@end

