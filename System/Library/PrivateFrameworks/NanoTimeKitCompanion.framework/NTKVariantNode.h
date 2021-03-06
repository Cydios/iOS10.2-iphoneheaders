/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SKCropNode.h>

@class SKSpriteNode, NTKCollectionNode;

@interface NTKVariantNode : SKCropNode {

	SKSpriteNode* _transitionMask;

}

@property (nonatomic,readonly) NTKCollectionNode * ticks; 
@property (nonatomic,readonly) NTKCollectionNode * labels; 
@property (nonatomic,readonly) NTKCollectionNode * other; 
-(NTKCollectionNode *)labels;
-(NTKCollectionNode *)other;
-(NTKCollectionNode *)ticks;
-(void)applyAppearanceFraction:(double)arg1 ;
-(void)applyAppearanceFraction:(double)arg1 inverted:(BOOL)arg2 ;
-(void)applyFullAppearance;
-(void)appearAnimated;
-(void)disappearAnimated;
-(id)initWithElements:(id)arg1 ;
-(void)resetAlphaAndScale;
-(void)_stopMasking;
-(void)createTransitionMaskLazily;
-(void)revealWithFraction:(double)arg1 invert:(BOOL)arg2 ;
@end

