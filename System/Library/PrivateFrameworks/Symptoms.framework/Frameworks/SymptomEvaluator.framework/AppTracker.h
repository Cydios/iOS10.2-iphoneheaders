/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@class NSString, NSDate, TrackerPolicy;

@interface AppTracker : NSObject <ManagedEventInfoProtocol> {

	BOOL _isADaemon;
	BOOL _sentFlowCountExceededPolicySymptom;
	int _prevFlows;
	int _flowsForSelf;
	int _flowsForOthers;
	int _flowsPerPeriod;
	unsigned _eversetClassFlags;
	NSString* _userName;
	double _prevFlowDurations;
	unsigned long long _prevFlowRxBytes;
	unsigned long long _prevFlowTxBytes;
	NSDate* _timestamp;
	TrackerPolicy* _specificPolicy;
	long long _interfaceType;

}

@property (retain) NSDate * timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) int flowsForSelf;                                     //@synthesize flowsForSelf=_flowsForSelf - In the implementation block
@property (assign) int flowsForOthers;                                   //@synthesize flowsForOthers=_flowsForOthers - In the implementation block
@property (assign) int flowsPerPeriod;                                   //@synthesize flowsPerPeriod=_flowsPerPeriod - In the implementation block
@property (retain) TrackerPolicy * specificPolicy;                       //@synthesize specificPolicy=_specificPolicy - In the implementation block
@property (assign) unsigned eversetClassFlags;                           //@synthesize eversetClassFlags=_eversetClassFlags - In the implementation block
@property (assign) BOOL isADaemon;                                       //@synthesize isADaemon=_isADaemon - In the implementation block
@property (assign) BOOL sentFlowCountExceededPolicySymptom;              //@synthesize sentFlowCountExceededPolicySymptom=_sentFlowCountExceededPolicySymptom - In the implementation block
@property (assign) long long interfaceType;                              //@synthesize interfaceType=_interfaceType - In the implementation block
@property (retain) NSString * userName;                                  //@synthesize userName=_userName - In the implementation block
@property (assign) int prevFlows;                                        //@synthesize prevFlows=_prevFlows - In the implementation block
@property (assign) double prevFlowDurations;                             //@synthesize prevFlowDurations=_prevFlowDurations - In the implementation block
@property (assign) unsigned long long prevFlowRxBytes;                   //@synthesize prevFlowRxBytes=_prevFlowRxBytes - In the implementation block
@property (assign) unsigned long long prevFlowTxBytes;                   //@synthesize prevFlowTxBytes=_prevFlowTxBytes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initialize;
+(void)setInternalQueue:(id)arg1 ;
+(id)configureClass:(id)arg1 ;
+(void)setAppTrackerVerbose:(unsigned)arg1 ;
+(void)setWifiNeverNoteList:(id)arg1 ;
+(void)setWifiAlwaysNoteList:(id)arg1 ;
+(void)setWifiDaemonCheckList:(id)arg1 ;
+(void)getWifiNetworkActivity:(/*^block*/id)arg1 ;
+(void)beginTrafficClassFlowSnapshot;
+(void)endTrafficClassFlowSnapshot:(id)arg1 periodUsecs:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
+(void)setTrackCellular:(BOOL)arg1 ;
+(void)noteFlow:(id)arg1 withDelegatee:(id)arg2 ;
+(void)noteFlow:(id)arg1 withOwner:(id)arg2 isADaemon:(BOOL)arg3 ;
+(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3 ;
+(void)pruneCache:(id)arg1 ;
+(id)ifTrackerForFlow:(id)arg1 ;
+(void)stopFlowPeriodTimer;
+(void)startFlowPeriodTimer;
+(void)configureCellPolicies:(id)arg1 ;
+(void)configureWifiPolicies:(id)arg1 ;
+(void)noteFlowEnding:(id)arg1 ;
+(void)resetTrafficClassFlowSnapshot;
-(NSString *)userName;
-(NSString *)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(void)setInterfaceType:(long long)arg1 ;
-(long long)interfaceType;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)generateInfoForId:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removeFlow:(id)arg1 ;
-(void)removeImmediateFlow:(id)arg1 ;
-(id)initWithUserName:(id)arg1 interfaceType:(long long)arg2 ;
-(void)setIsADaemon:(BOOL)arg1 ;
-(TrackerPolicy *)specificPolicy;
-(unsigned)eversetClassFlags;
-(void)setEversetClassFlags:(unsigned)arg1 ;
-(void)adjustImmediateFlowLinkages:(id)arg1 ;
-(void)adjustFlowLinkages:(id)arg1 ;
-(int)flowsForSelf;
-(int)flowsForOthers;
-(void)setSpecificPolicy:(TrackerPolicy *)arg1 ;
-(int)prevFlows;
-(void)setPrevFlows:(int)arg1 ;
-(double)prevFlowDurations;
-(void)setPrevFlowDurations:(double)arg1 ;
-(unsigned long long)prevFlowRxBytes;
-(void)setPrevFlowRxBytes:(unsigned long long)arg1 ;
-(unsigned long long)prevFlowTxBytes;
-(void)setPrevFlowTxBytes:(unsigned long long)arg1 ;
-(void)sendFlowCount:(unsigned long long)arg1 exceededPolicyThreshold:(unsigned long long)arg2 ;
-(void)checkForFlowCountPolicyViolation;
-(void)addFlow:(id)arg1 ;
-(void)addImmediateFlow:(id)arg1 ;
-(void)resetFlowCountPolicyInfo;
-(void)setFlowsForSelf:(int)arg1 ;
-(void)setFlowsForOthers:(int)arg1 ;
-(int)flowsPerPeriod;
-(void)setFlowsPerPeriod:(int)arg1 ;
-(BOOL)isADaemon;
-(BOOL)sentFlowCountExceededPolicySymptom;
-(void)setSentFlowCountExceededPolicySymptom:(BOOL)arg1 ;
@end
