/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class SBLockScreenViewController, CADisplayLink, NSObject;

@interface SBUILockScreenNotificationAnimationHandler : NSObject {

	SBLockScreenViewController* _lockScreenViewController;
	CADisplayLink* _displayLink;
	NSObject*<OS_dispatch_group> _dispatchGroup;

}
-(id)initWithLockScreenViewController:(id)arg1 ;
-(void)performAnimationWithAdditionalAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_displayLinkDidFire:(id)arg1 ;
-(void)dealloc;
@end
