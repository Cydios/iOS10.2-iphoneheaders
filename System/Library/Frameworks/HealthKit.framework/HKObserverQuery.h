/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@interface HKObserverQuery : HKQuery {

	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) id updateHandler;              //@synthesize updateHandler=_updateHandler - In the implementation block
-(id)updateHandler;
-(void)_queue_cleanupAfterDeactivation;
-(void)_queue_validate;
-(BOOL)_queue_shouldStayAliveAfterInitialResults;
-(/*^block*/id)_queue_errorHandler;
-(void)dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2 ;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
@end

