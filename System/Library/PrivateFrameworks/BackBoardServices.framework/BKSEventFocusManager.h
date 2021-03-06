/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSEventFocusManagerClientInterface.h>

@protocol BKSEventFocusIPCInterface, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, NSXPCConnection, NSHashTable, NSSet, NSString;

@interface BKSEventFocusManager : NSObject <BKSEventFocusManagerClientInterface> {

	id<BKSEventFocusIPCInterface> _ipcInterface;
	NSObject*<OS_dispatch_queue> _focusClientQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _needsFlush;
	BOOL _systemAppControlsFocusOnMainDisplay;
	int _pid;
	NSMutableSet* _currentState;
	NSMutableDictionary* _pendingStatesByPriority;
	NSXPCConnection* _connection;
	NSHashTable* _focusChangeObservers;
	NSSet* _cachedFocusedDeferralProperties;
	NSString* _clientIdentifier;

}

@property (nonatomic,retain,readonly) NSMutableSet * currentState;                                //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * pendingStatesByPriority;              //@synthesize pendingStatesByPriority=_pendingStatesByPriority - In the implementation block
@property (assign,nonatomic) BOOL needsFlush;                                                     //@synthesize needsFlush=_needsFlush - In the implementation block
@property (assign,nonatomic) BOOL systemAppControlsFocusOnMainDisplay;                            //@synthesize systemAppControlsFocusOnMainDisplay=_systemAppControlsFocusOnMainDisplay - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSHashTable * focusChangeObservers;                                  //@synthesize focusChangeObservers=_focusChangeObservers - In the implementation block
@property (nonatomic,retain) NSSet * cachedFocusedDeferralProperties;                             //@synthesize cachedFocusedDeferralProperties=_cachedFocusedDeferralProperties - In the implementation block
@property (assign,nonatomic) int pid;                                                             //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                           //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)needsFlush;
-(void)setNeedsFlush:(BOOL)arg1 ;
-(id)initWithIPCInterface:(id)arg1 ;
-(void)_connectToEventFocusService;
-(void)focusedDeferralPropertiesUpdatedWithProperties:(id)arg1 ;
-(void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3 ;
-(void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)pendingStatesByPriority;
-(void)reallyFlushWithSet:(id)arg1 ;
-(void)_rebuildPendingStatesByPriority;
-(void)setSystemAppControlsFocusOnMainDisplay:(BOOL)arg1 ;
-(BOOL)systemAppControlsFocusOnMainDisplay;
-(NSHashTable *)focusChangeObservers;
-(void)setFocusChangeObservers:(NSHashTable *)arg1 ;
-(NSSet *)cachedFocusedDeferralProperties;
-(void)setCachedFocusedDeferralProperties:(NSSet *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)flush;
-(NSMutableSet *)currentState;
-(void)removeObserver:(id)arg1 ;
-(void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setPid:(int)arg1 ;
-(NSString *)clientIdentifier;
-(void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2 ;
-(int)pid;
@end

