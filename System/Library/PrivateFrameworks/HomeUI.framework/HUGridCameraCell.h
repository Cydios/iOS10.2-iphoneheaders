/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCell.h>

@class HFItem, HUGridCameraCellLayoutOptions, UILabel, HUCameraView, NSArray, HUDecayingTimer;

@interface HUGridCameraCell : HUGridCell {

	HFItem* _item;
	HUGridCameraCellLayoutOptions* _layoutOptions;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	HUCameraView* _cameraView;
	NSArray* _allConstraints;
	NSArray* _descriptionLabelConstraints;
	HUDecayingTimer* _descriptionLabelUpdateTimer;

}

@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                 //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) HUCameraView * cameraView;                                  //@synthesize cameraView=_cameraView - In the implementation block
@property (nonatomic,retain) NSArray * allConstraints;                                   //@synthesize allConstraints=_allConstraints - In the implementation block
@property (nonatomic,retain) NSArray * descriptionLabelConstraints;                      //@synthesize descriptionLabelConstraints=_descriptionLabelConstraints - In the implementation block
@property (nonatomic,retain) HUDecayingTimer * descriptionLabelUpdateTimer;              //@synthesize descriptionLabelUpdateTimer=_descriptionLabelUpdateTimer - In the implementation block
@property (nonatomic,retain) HUGridCameraCellLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
+(Class)layoutOptionsClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)item;
-(void)tintColorDidChange;
-(void)updateConstraints;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setItem:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(HUCameraView *)cameraView;
-(void)setCameraView:(HUCameraView *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(HUGridCameraCellLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(HUGridCameraCellLayoutOptions *)arg1 ;
-(HUDecayingTimer *)descriptionLabelUpdateTimer;
-(void)setDescriptionLabelUpdateTimer:(HUDecayingTimer *)arg1 ;
-(void)_updateLabelsAppearance;
-(void)layoutOptionsDidChange;
-(id)_descriptionLabelText:(id)arg1 ;
-(void)_updateCameraViewAppearance;
-(void)displayStyleDidChange;
-(NSArray *)allConstraints;
-(void)setAllConstraints:(NSArray *)arg1 ;
-(void)setDescriptionLabelConstraints:(NSArray *)arg1 ;
-(NSArray *)descriptionLabelConstraints;
-(CGRect)cameraViewFrame;
-(void)_animateTransitionWithView:(id)arg1 animations:(/*^block*/id)arg2 ;
-(void)_invalidateConstraints;
@end
