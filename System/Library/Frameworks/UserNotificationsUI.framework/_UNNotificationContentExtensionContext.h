/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>

@protocol _UNNotificationExtensionHostInterface;
@interface _UNNotificationContentExtensionContext : NSExtensionContext {

	id<_UNNotificationExtensionHostInterface> _hostService;

}

@property (assign,nonatomic,__weak) id<_UNNotificationExtensionHostInterface> hostService;              //@synthesize hostService=_hostService - In the implementation block
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<_UNNotificationExtensionHostInterface>)hostService;
-(void)mediaPlayingStarted;
-(void)mediaPlayingPaused;
-(void)requestDismiss;
-(void)setHostService:(id<_UNNotificationExtensionHostInterface>)arg1 ;
@end

