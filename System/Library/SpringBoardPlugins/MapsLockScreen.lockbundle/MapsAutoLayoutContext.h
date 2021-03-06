/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSMutableArray, NSArray;

@interface MapsAutoLayoutContext : NSObject <NSCopying> {

	NSMutableDictionary* _metrics;
	NSMutableDictionary* _views;
	NSMutableArray* _constraints;
	NSMutableArray* _mutableConstraints;
	NSArray* _oldMutableConstraints;

}
-(id)constrainView:(id)arg1 attribute:(long long)arg2 lessThanView:(id)arg3 ;
-(id)widthOfView:(id)arg1 isProportionalToWidthOfView:(id)arg2 withRatio:(double)arg3 ;
-(id)heightOfView:(id)arg1 isProportionalToHeightOfView:(id)arg2 withRatio:(double)arg3 ;
-(id)addConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 ;
-(id)constrainView:(id)arg1 attribute:(long long)arg2 equalToView:(id)arg3 ;
-(id)addVisualFormat:(id)arg1 ;
-(id)addConstantConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toValue:(double)arg4 ;
-(void)addImmutableConstraintsToView:(id)arg1 ;
-(void)endUpdateConstraintsOnView:(id)arg1 ;
-(id)attribute:(long long)arg1 isEqualToAttribute:(long long)arg2 ofView:(id)arg3 ;
-(void)addMetricsFromDictionary:(id)arg1 ;
-(void)addConstraintsToView:(id)arg1 previousContext:(id)arg2 ;
-(void)designateConstraintsMutable:(id)arg1 ;
-(void)beginUpdateConstraints;
-(void)setTranslatesAutoResizingMaskIntoConstraints:(id)arg1 value:(BOOL)arg2 ;
-(void)addViewsFromDictionary:(id)arg1 ;
-(id)addVisualFormat:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)addMutableConstraints:(id)arg1 ;
-(id)mutableConstraints;
-(void)removeConstraintsFromView:(id)arg1 ;
-(void)addMutableConstraint:(id)arg1 ;
-(id)_defaultMetrics;
-(void)removeImmutableConstraintsFromView:(id)arg1 ;
-(void)removeMutableConstraintsFromView:(id)arg1 ;
-(id)addConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 ;
-(id)init;
-(void)addConstraints:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)constraints;
-(void)removeConstraints:(id)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(void)addConstraint:(id)arg1 ;
@end

