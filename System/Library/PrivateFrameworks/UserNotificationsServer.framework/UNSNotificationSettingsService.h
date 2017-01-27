/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UNSDefaultDataProviderFactory, UNSNotificationAuthorizationAlertController, NSObject;

@interface UNSNotificationSettingsService : NSObject {

	UNSDefaultDataProviderFactory* _dataProviderFactory;
	UNSNotificationAuthorizationAlertController* _authorizationAlertController;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 ;
-(void)getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDataProviderFactory:(id)arg1 ;
-(void)getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_queue_getNotificationSettingsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queue_getAuthorizedBundleIdentifiersForBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_queue_isAuthorizationModificationRestrictedForApplication:(id)arg1 ;
-(BOOL)_queue_isCarPlayAvailableForApplication:(id)arg1 ;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)notificationSettingsForBundleIdentifier:(id)arg1 ;
@end
