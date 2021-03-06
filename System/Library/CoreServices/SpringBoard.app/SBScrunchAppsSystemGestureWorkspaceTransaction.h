/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class FBUIApplicationSceneDeactivationAssertion, SBUIAnimationController, NSString;

@interface SBScrunchAppsSystemGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver> {

	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	SBUIAnimationController* _animationController;
	BOOL _ignoringEvents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_resumeEventsIfNecessary;
-(void)systemGestureStateChanged:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_ignoreEvents;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_finishWithCompletionType:(long long)arg1 ;
-(void)_lockOrientation:(long long)arg1 ;
-(void)_unlockOrientation;
-(void)_suspendGestureChanged:(double)arg1 ;
-(void)_suspendGestureEndedWithCompletionType:(long long)arg1 ;
-(void)_suspendGestureCancelled;
-(void)_executeUnscatterWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_beginAnimation;
-(void)_didComplete;
-(void)_begin;
-(void)_setupAnimation;
@end

