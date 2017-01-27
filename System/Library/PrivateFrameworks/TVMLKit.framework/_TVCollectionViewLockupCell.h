/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@protocol TVAuxiliaryViewSelecting;
@class UIMotionEffectGroup, UIView, NSString;

@interface _TVCollectionViewLockupCell : UICollectionViewCell <TVAuxiliaryViewSelecting> {

	UIMotionEffectGroup* _motionEffectGroup;
	BOOL _pressIsAnimating;
	UIView*<TVAuxiliaryViewSelecting> __selectingView;
	BOOL _unpressOnEndAnimating;
	BOOL _allowsFocus;

}

@property (assign,nonatomic) BOOL allowsFocus;                      //@synthesize allowsFocus=_allowsFocus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(BOOL)_unapplyMotionEffect:(id)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(BOOL)_descendantsShouldHighlight;
-(BOOL)allowsFocus;
-(void)setAllowsFocus:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)_handleSelect;
-(void)_showPressState;
-(void)_clearPressState;
-(void)_setFocusDirection:(CGPoint)arg1 ;
-(void)_setFocused:(BOOL)arg1 animated:(BOOL)arg2 context:(id)arg3 coordinator:(id)arg4 ;
-(id)_selectingView;
-(void)_attachMotionEffects;
-(void)_detachMotionEffects;
@end
