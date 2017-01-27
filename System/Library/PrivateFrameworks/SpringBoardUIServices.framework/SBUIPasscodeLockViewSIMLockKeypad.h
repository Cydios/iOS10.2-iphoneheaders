/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeLockViewLongNumericKeypad.h>

@class UILabel, UIView, NSString;

@interface SBUIPasscodeLockViewSIMLockKeypad : SBUIPasscodeLockViewLongNumericKeypad {

	UILabel* _statusSubtitleView;
	UIView* _entryFieldFiller;
	double _targetEntryFieldFillerAlpha;
	BOOL _isShowingStatus;
	UIView* _statusSpringView;
	UIView* _statusSpringViewParent;

}

@property (nonatomic,copy) NSString * statusTitle; 
@property (nonatomic,copy) NSString * statusSubtitle; 
-(void)layoutSubviews;
-(void)setBackgroundAlpha:(double)arg1 ;
-(id)initWithLightStyle:(BOOL)arg1 ;
-(void)_layoutStatusView;
-(void)_sizeLabel:(id)arg1 ;
-(void)_setHasInput:(BOOL)arg1 ;
-(id)_statusSubtitleFont;
-(void)forceShowStatus:(BOOL)arg1 ;
-(void)_setText:(id)arg1 onLabel:(id)arg2 ;
-(double)_expectedYOffsetBetweenTitleAndSubtitleViews;
-(double)_subtitleBaselineYOffsetFromTopOfEntryField;
-(double)_expectedDistanceBetweenTitleAndSubtitleBaselines;
-(double)_distanceToFirstLineBaseline:(id)arg1 ;
-(double)_distanceFromLastLineBaselineToTextFieldBoundsHeight:(id)arg1 ;
-(NSString *)statusTitle;
-(void)setStatusTitle:(NSString *)arg1 ;
-(NSString *)statusSubtitle;
-(void)setStatusSubtitle:(NSString *)arg1 ;
-(BOOL)_showsPromptLabelOnEntryField;
-(void)_shakeStatus;
-(double)_subtitleBaselineYOffsetFromTopOfNumberPad;
-(void)setCustomBackgroundColor:(id)arg1 ;
@end
