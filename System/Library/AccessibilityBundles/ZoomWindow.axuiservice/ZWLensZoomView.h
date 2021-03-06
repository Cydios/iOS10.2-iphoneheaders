/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIView, CAReplicatorLayer, CABackdropLayer, CAShapeLayer, NSString;

@interface ZWLensZoomView : UIView <CAAnimationDelegate> {

	BOOL _offsetZoomWindowFromFinger;
	BOOL _roundedLensCorners;
	BOOL _lensResizingHandlesShowing;
	UIView* _zoomView;
	CAReplicatorLayer* _zoomReplicatorLayer;
	CABackdropLayer* _zoomBackdropLayer;
	UIView* _effectView;
	CAReplicatorLayer* _effectReplicatorLayer;
	CABackdropLayer* _effectBackdropLayer;
	CAShapeLayer* _maskLayer;
	double _zoomFactor;
	CGPoint _zoomPanOffset;

}

@property (nonatomic,retain) UIView * zoomView;                                      //@synthesize zoomView=_zoomView - In the implementation block
@property (nonatomic,retain) CAReplicatorLayer * zoomReplicatorLayer;                //@synthesize zoomReplicatorLayer=_zoomReplicatorLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * zoomBackdropLayer;                    //@synthesize zoomBackdropLayer=_zoomBackdropLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * maskLayer;                               //@synthesize maskLayer=_maskLayer - In the implementation block
@property (nonatomic,retain) UIView * effectView;                                    //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) CAReplicatorLayer * effectReplicatorLayer;              //@synthesize effectReplicatorLayer=_effectReplicatorLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * effectBackdropLayer;                  //@synthesize effectBackdropLayer=_effectBackdropLayer - In the implementation block
@property (assign,nonatomic) double zoomFactor;                                      //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) CGPoint zoomPanOffset;                                  //@synthesize zoomPanOffset=_zoomPanOffset - In the implementation block
@property (assign,nonatomic) BOOL roundedLensCorners;                                //@synthesize roundedLensCorners=_roundedLensCorners - In the implementation block
@property (assign,nonatomic) BOOL lensResizingHandlesShowing;                        //@synthesize lensResizingHandlesShowing=_lensResizingHandlesShowing - In the implementation block
@property (assign,nonatomic) BOOL offsetZoomWindowFromFinger;                        //@synthesize offsetZoomWindowFromFinger=_offsetZoomWindowFromFinger - In the implementation block
@property (nonatomic,readonly) CGRect sampleRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CAReplicatorLayer *)effectReplicatorLayer;
-(CABackdropLayer *)effectBackdropLayer;
-(void)setEffectReplicatorLayer:(CAReplicatorLayer *)arg1 ;
-(void)setEffectBackdropLayer:(CABackdropLayer *)arg1 ;
-(BOOL)_effectRequiresQuartzFilter:(id)arg1 ;
-(CAReplicatorLayer *)zoomReplicatorLayer;
-(void)setRoundedLensCorners:(BOOL)arg1 ;
-(BOOL)roundedLensCorners;
-(void)setLensResizingHandlesShowing:(BOOL)arg1 ;
-(BOOL)lensResizingHandlesShowing;
-(BOOL)offsetZoomWindowFromFinger;
-(void)setZoomReplicatorLayer:(CAReplicatorLayer *)arg1 ;
-(void)setZoomBackdropLayer:(CABackdropLayer *)arg1 ;
-(CABackdropLayer *)zoomBackdropLayer;
-(void)setOffsetZoomWindowFromFinger:(BOOL)arg1 ;
-(void)showLensResizingHandlesShowing:(BOOL)arg1 ;
-(CGRect)sampleRect;
-(CGSize)sampledContentSizeWithZoomFactor:(double)arg1 ;
-(CGPoint)updateZoomPanOffset:(CGPoint)arg1 zoomFactor:(double)arg2 roundedLensCorners:(BOOL)arg3 animated:(BOOL)arg4 animationDuration:(double)arg5 completion:(/*^block*/id)arg6 ;
-(CGSize)_prescaledSizeForFinalSize:(CGSize)arg1 zoomFactor:(double)arg2 ;
-(CGRect)_effectiveRectForBounds:(CGRect)arg1 position:(CGPoint)arg2 scaleFactor:(double)arg3 ;
-(void)updateLensEffect:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(UIView *)effectView;
-(void)setEffectView:(UIView *)arg1 ;
-(CGPoint)zoomPanOffset;
-(void)setZoomPanOffset:(CGPoint)arg1 ;
-(void)setMaskLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)maskLayer;
-(void)setZoomFactor:(double)arg1 ;
-(double)zoomFactor;
-(UIView *)zoomView;
-(void)setZoomView:(UIView *)arg1 ;
@end

