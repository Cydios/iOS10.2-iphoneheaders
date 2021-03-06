/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNSApplicationWorkStoreObserver.h>

@protocol UNSSystemStateProviding;
@class FBSSystemService, BKSApplicationStateMonitor, UNSLocationMonitor, NSMutableDictionary, AppLaunchStats, UNSApplicationWorkStore, NSString;

@interface UNSApplicationLauncher : NSObject <UNSApplicationWorkStoreObserver> {

	FBSSystemService* _systemService;
	BKSApplicationStateMonitor* _appStateMonitor;
	UNSLocationMonitor* _locationMonitor;
	NSMutableDictionary* _bundleIdentifierToAssertions;
	double _backgroundFetchDuration;
	id<UNSSystemStateProviding> _systemStateProvider;
	AppLaunchStats* _appLaunchStats;
	UNSApplicationWorkStore* _applicationWorkStore;

}

@property (nonatomic,retain) AppLaunchStats * appLaunchStats;                             //@synthesize appLaunchStats=_appLaunchStats - In the implementation block
@property (nonatomic,retain) UNSApplicationWorkStore * applicationWorkStore;              //@synthesize applicationWorkStore=_applicationWorkStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)backgroundLaunchApplication:(id)arg1 withNewsstandPush:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)backgroundLaunchApplication:(id)arg1 withContentAvailablePush:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithSystemService:(id)arg1 locationMonitor:(id)arg2 systemStateProvider:(id)arg3 ;
-(void)workStore:(id)arg1 applicationsWithWorkChanged:(id)arg2 ;
-(void)foregroundLaunchApplication:(id)arg1 withResponse:(id)arg2 launchImageName:(id)arg3 origin:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)backgroundLaunchApplication:(id)arg1 withResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)queryBackgroundFetchDuration;
-(void)_setupAppLaunchStats;
-(UNSApplicationWorkStore *)applicationWorkStore;
-(void)_setupApplicationStateMonitor;
-(void)_removeAllProcessAssertionsAndInvalidate:(BOOL)arg1 ;
-(id)_actionForNotificationResponse:(id)arg1 bundleIdentifier:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_removeProcessAssertion:(id)arg1 forBundleID:(id)arg2 invalidate:(BOOL)arg3 ;
-(id)_newProcessAssertionForBundleID:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 watchdogInterval:(double)arg5 acquisitionHandler:(/*^block*/id)arg6 invalidationHandler:(/*^block*/id)arg7 ;
-(void)_removeProcessAssertionsHavingReason:(unsigned)arg1 forBundleID:(id)arg2 invalidate:(BOOL)arg3 ;
-(void)_addProcessAssertion:(id)arg1 forBundleID:(id)arg2 ;
-(BOOL)_backgroundLaunchAllowedForBundleIdentifier:(id)arg1 ;
-(void)_backgroundLaunchApplication:(id)arg1 withContentAvailablePush:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_backgroundLaunchApplication:(id)arg1 withContentAvailablePush:(id)arg2 launchHandler:(/*^block*/id)arg3 resultHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(AppLaunchStats *)appLaunchStats;
-(void)_queue_addProcessAssertion:(id)arg1 forBundleID:(id)arg2 ;
-(void)_queue_updateApplicationStateMonitor;
-(void)_queue_removeProcessAssertion:(id)arg1 forBundleID:(id)arg2 invalidate:(BOOL)arg3 ;
-(void)_queue_removeProcessAssertionsHavingReason:(unsigned)arg1 forBundleID:(id)arg2 invalidate:(BOOL)arg3 ;
-(void)_queue_removeAllProcessAssertionsForBundleID:(id)arg1 invalidate:(BOOL)arg2 ;
-(void)_queue_removeAllProcessAssertionsAndInvalidate:(BOOL)arg1 ;
-(void)_removeAllProcessAssertionsForBundleID:(id)arg1 invalidate:(BOOL)arg2 ;
-(void)setAppLaunchStats:(AppLaunchStats *)arg1 ;
-(void)setApplicationWorkStore:(UNSApplicationWorkStore *)arg1 ;
@end

