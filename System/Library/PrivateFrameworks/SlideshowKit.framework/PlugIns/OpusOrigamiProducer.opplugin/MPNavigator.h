/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPNavigatorSupportInternal.h>
#import <OpusOrigamiProducer/MPActionableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <OpusOrigamiProducer/MPAnimationSupport.h>
#import <OpusOrigamiProducer/MPNavigatorSupport.h>
#import <OpusOrigamiProducer/MPActionSupport.h>
#import <OpusOrigamiProducer/MPLayerableSupport.h>
#import <OpusOrigamiProducer/MPActionableSupport.h>
#import <OpusOrigamiProducer/MPGeometrySupport.h>
#import <OpusOrigamiProducer/MPTimingSupport.h>

@class MPNavigatorInternal, NSMutableDictionary, MCPlug, MCContainerNavigator, NSString;

@interface MPNavigator : NSObject <MPNavigatorSupportInternal, MPActionableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport> {

	MPNavigatorInternal* _internal;
	NSMutableDictionary* _layers;
	NSMutableDictionary* _actions;
	MCPlug* _plug;
	MCContainerNavigator* _navigator;
	id _parent;
	NSMutableDictionary* _animationPaths;

}

@property (nonatomic,copy) NSString * initialLayer; 
-(void)removeLayerForKey:(id)arg1 ;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setStartsPaused:(BOOL)arg1 ;
-(void)copyAnimationPaths:(id)arg1 ;
-(id)layerKeyDictionary;
-(id)navigatorKey;
-(void)setPlug:(id)arg1 ;
-(id)allSongs;
-(id)allSlides:(BOOL)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(void)copyActions:(id)arg1 ;
-(void)copyStruct:(id)arg1 ;
-(double)xRotationAngle;
-(id)animationPathForKey:(id)arg1 ;
-(void)removeAllLayers;
-(void)copyLayers:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(double)phaseInDuration;
-(id)animationPaths;
-(BOOL)isTriggered;
-(id)plug;
-(void)setYRotationAngle:(double)arg1 ;
-(id)plugID;
-(id)actionableObjectForID:(id)arg1 ;
-(void)setIsTriggered:(BOOL)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(double)yRotationAngle;
-(BOOL)startsPaused;
-(double)phaseOutDuration;
-(double)timeIn;
-(void)setInitialLayer:(NSString *)arg1 ;
-(void)configureActions;
-(void)reconnectAll;
-(id)layerForKey:(id)arg1 ;
-(void)setLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)layerKey;
-(NSString *)initialLayer;
-(id)init;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(double)duration;
-(id)actions;
-(void)setDuration:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(id)layers;
-(id)actionForKey:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setContainer:(id)arg1 ;
-(CGPoint)position;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setZPosition:(double)arg1 ;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(void)cleanup;
-(id)uuid;
-(void)setZIndex:(long long)arg1 ;
-(long long)zIndex;
-(double)numberOfLoops;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(id)objectID;
-(double)zPosition;
-(void)removeActionForKey:(id)arg1 ;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)setNumberOfLoops:(double)arg1 ;
-(id)parentDocument;
@end

