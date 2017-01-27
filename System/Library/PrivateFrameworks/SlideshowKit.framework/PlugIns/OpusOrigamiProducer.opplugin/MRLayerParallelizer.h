/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MRLayer.h>

@class MCContainerParallelizer, NSMutableArray, NSMutableDictionary, NSArray;

@interface MRLayerParallelizer : MRLayer {

	MCContainerParallelizer* mContainer;
	NSMutableArray* mSublayers;
	NSMutableDictionary* mSublayersForPlugs;
	float mBackgroundColor[4];
	BOOL mNeedsToUpdateSublayersOrdering;
	BOOL mNeedsToUpdateBackgroundColor;

}

@property (readonly) NSArray * sublayers; 
@property (assign) const float* backgroundColor; 
-(BOOL)isInInteractiveMode;
-(id)currentSlideInfos;
-(double)interestingTimeForTime:(double)arg1 ;
-(void)setSublayer:(id)arg1 forKey:(id)arg2 ;
-(void)setIsInInteractiveMode:(BOOL)arg1 ;
-(id)_dumpLayerWithOptions:(unsigned long long)arg1 ;
-(void)_observeSublayer:(id)arg1 ;
-(void)_deleteSublayer:(id)arg1 ;
-(void)_executeLayerCommandQueue;
-(void)_unobserveSublayer:(id)arg1 ;
-(id)currentSlideInfoForElement:(id)arg1 ;
-(BOOL)hasSomethingToRender;
-(double)phaseInSublayerForKey:(id)arg1 ;
-(void)_observePlug;
-(BOOL)isAlphaFriendly;
-(void)preactivate;
-(id)sublayerForKey:(id)arg1 ;
-(void)_observePlugOnPreactivate;
-(void)endMorphing;
-(void)_unobservePlugOnDepreactivate;
-(double)phaseOutSublayerForKey:(id)arg1 ;
-(void)_unobservePlug;
-(void)synchronizeTime;
-(void)setNeedsUpdateForPluggerOfSublayer:(id)arg1 ;
-(id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)sublayerHitAtPoint:(CGPoint)arg1 onlyIfHitElement:(BOOL)arg2 localPoint:(CGPoint*)arg3 ;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(void)_unobserveSublayerOnDepreactivate:(id)arg1 ;
-(BOOL)getStartTime:(double*)arg1 andDuration:(double*)arg2 forMovingToElementID:(id)arg3 backwards:(BOOL)arg4 ;
-(BOOL)hasMoreSlidesFromTime:(double)arg1 backwards:(BOOL)arg2 startTime:(double*)arg3 duration:(double*)arg4 ;
-(void)getLazyDuration:(double*)arg1 lazyFactor:(double*)arg2 animationDuration:(double*)arg3 fromInterestingTime:(double)arg4 ;
-(id)sublayerForPlugObjectID:(id)arg1 recursive:(BOOL)arg2 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)setBackgroundColorRed:(float)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(BOOL)hasSlides;
-(void)depreactivate:(BOOL)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(BOOL)_isMadeOpaqueBySublayers;
-(double)interestingTimeForElement:(id)arg1 ;
-(void)_updateSublayersOrdering;
-(void)_setNeedsToRequestRebuildAudio:(BOOL)arg1 ;
-(void)_observeSublayerOnPreactivate:(id)arg1 ;
-(id)_createSublayerForPlug:(id)arg1 ;
-(void)setBackgroundColor:(const float*)arg1 ;
-(const float*)backgroundColor;
-(void)setDuration:(double)arg1 ;
-(void)deactivate;
-(BOOL)isOpaque;
-(NSArray *)sublayers;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)cleanup;
-(void)removeSublayer:(id)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(BOOL)hasAudio;
-(id)_currentState;
-(void)setPixelSize:(CGSize)arg1 ;
-(BOOL)isInfinite;
@end
