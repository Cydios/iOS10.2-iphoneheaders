/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSearchEtceteraBlurringTransitionAnimator.h>

@class UIView;

@interface SBSearchEtceteraBlurringPullTransitionAnimator : SBSearchEtceteraBlurringTransitionAnimator {

	unsigned long long _operation;
	UIView* _touchSwallowingView;

}
-(void)_prepareToAnimate;
-(BOOL)shouldMoveIntoSearch;
-(void)_animateIntoSearch:(BOOL)arg1 ;
-(void)_cleanupAfterAnimating:(BOOL)arg1 ;
-(void)_cancelInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(BOOL)shouldMoveIntoSearchOnCancel;
-(void)_finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(double)_percentVisibleForPercentComplete:(double)arg1 ;
@end

