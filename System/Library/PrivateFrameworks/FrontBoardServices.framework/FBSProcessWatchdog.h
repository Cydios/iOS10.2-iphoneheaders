/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSProcessExecutionProvisionDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSProcessInternal;
@class NSString, FBSProcessWatchdogPolicy;

@interface FBSProcessWatchdog : NSObject <FBSProcessExecutionProvisionDelegate, BSDescriptionProviding> {

	NSString* _name;
	id<FBSProcessInternal> _process;
	FBSProcessWatchdogPolicy* _policy;
	BOOL _active;
	BOOL _invalidated;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSProcess> process;                       //@synthesize process=_process - In the implementation block
@property (nonatomic,copy,readonly) FBSProcessWatchdogPolicy * policy;              //@synthesize policy=_policy - In the implementation block
@property (nonatomic,copy) id completion;                                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_beginMonitoringConstraints;
-(void)_stopMonitoringConstraints;
-(void)provision:(id)arg1 wasViolatedWithError:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)invalidate;
-(void)deactivate;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)activate;
-(FBSProcessWatchdogPolicy *)policy;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3 ;
-(id<FBSProcess>)process;
@end

