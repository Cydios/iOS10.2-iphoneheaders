/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIView.h>

@protocol ASTGestureRecorderControlsViewDelegate;
@class UIButton, ASTBiggerProgressView;

@interface ASTGestureRecorderControlsView : UIView {

	id<ASTGestureRecorderControlsViewDelegate> _delegate;
	UIButton* _leftButton;
	UIButton* _rightButton;
	ASTBiggerProgressView* _progressView;
	UIButton* _middleButton;

}

@property (nonatomic,retain) UIButton * leftButton;                                            //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) UIButton * rightButton;                                           //@synthesize rightButton=_rightButton - In the implementation block
@property (assign,nonatomic) id<ASTGestureRecorderControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float progress; 
@property (assign,getter=isLeftButtonEnabled,nonatomic) BOOL leftButtonEnabled; 
@property (assign,getter=isRightButtonEnabled,nonatomic) BOOL rightButtonEnabled; 
@property (nonatomic,retain) UIButton * middleButton;                                          //@synthesize middleButton=_middleButton - In the implementation block
+(double)defaultHeight;
-(BOOL)isRightButtonEnabled;
-(BOOL)isLeftButtonEnabled;
-(void)setRightButtonEnabled:(BOOL)arg1 ;
-(void)setMiddleButton:(UIButton *)arg1 ;
-(UIButton *)middleButton;
-(id)makeButton;
-(void)setLeftButtonColor:(int)arg1 title:(id)arg2 enabled:(BOOL)arg3 rightButtonColor:(int)arg4 title:(id)arg5 enabled:(BOOL)arg6 animationDuration:(double)arg7 completion:(/*^block*/id)arg8 ;
-(void)setLeftButtonEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<ASTGestureRecorderControlsViewDelegate>)arg1 ;
-(void)dealloc;
-(id<ASTGestureRecorderControlsViewDelegate>)delegate;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
-(void)_buttonTapped:(id)arg1 ;
-(void)setLeftButton:(UIButton *)arg1 ;
-(void)setRightButton:(UIButton *)arg1 ;
@end
