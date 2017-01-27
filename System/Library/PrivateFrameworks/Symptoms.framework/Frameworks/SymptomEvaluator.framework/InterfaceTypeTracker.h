/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol flowDispositionObserver;
@class NSArray, NSMutableDictionary, TrackerPolicy;

@interface InterfaceTypeTracker : NSObject {

	NSArray* _alwaysNote;
	NSArray* _neverNote;
	NSArray* _daemonCheck;
	NSMutableDictionary* _trackerCache;
	long long _interfaceType;
	id<flowDispositionObserver> _observer;
	TrackerPolicy* _defaultPolicy;

}

@property (retain) NSArray * alwaysNote;                              //@synthesize alwaysNote=_alwaysNote - In the implementation block
@property (retain) NSArray * neverNote;                               //@synthesize neverNote=_neverNote - In the implementation block
@property (retain) NSArray * daemonCheck;                             //@synthesize daemonCheck=_daemonCheck - In the implementation block
@property (retain) NSMutableDictionary * trackerCache;                //@synthesize trackerCache=_trackerCache - In the implementation block
@property (assign) long long interfaceType;                           //@synthesize interfaceType=_interfaceType - In the implementation block
@property (retain) id<flowDispositionObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (retain) TrackerPolicy * defaultPolicy;                     //@synthesize defaultPolicy=_defaultPolicy - In the implementation block
-(id)init;
-(id)description;
-(void)setObserver:(id<flowDispositionObserver>)arg1 ;
-(id<flowDispositionObserver>)observer;
-(TrackerPolicy *)defaultPolicy;
-(void)setDefaultPolicy:(TrackerPolicy *)arg1 ;
-(void)setInterfaceType:(long long)arg1 ;
-(long long)interfaceType;
-(void)noteFlow:(id)arg1 withDelegatee:(id)arg2 ;
-(void)noteFlow:(id)arg1 withOwner:(id)arg2 isADaemon:(BOOL)arg3 ;
-(void)configurePolicies:(id)arg1 ;
-(void)_trackerCachePrune;
-(void)removeLinkages:(id)arg1 ;
-(id)infoDir;
-(void)getNetworkActivity:(/*^block*/id)arg1 ;
-(NSArray *)alwaysNote;
-(void)setAlwaysNote:(NSArray *)arg1 ;
-(NSArray *)neverNote;
-(void)setNeverNote:(NSArray *)arg1 ;
-(NSArray *)daemonCheck;
-(void)setDaemonCheck:(NSArray *)arg1 ;
-(NSMutableDictionary *)trackerCache;
-(void)setTrackerCache:(NSMutableDictionary *)arg1 ;
@end
