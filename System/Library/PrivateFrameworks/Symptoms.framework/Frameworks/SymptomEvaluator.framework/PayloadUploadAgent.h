/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PayloadUploadAgent : NSObject {

	NSObject*<OS_dispatch_queue> _uploadQueue;
	NSMutableDictionary* _pendingUploadMap;
	id _foregroundStateObserver;

}
+(id)sharedInstance;
+(BOOL)uploadPayload:(id)arg1 ;
-(id)init;
-(void)uploadPayloadsToRadarWithCaseID:(id)arg1 radarID:(id)arg2 token:(id)arg3 urgency:(long long)arg4 ;
-(void)scheduleUploadFor:(id)arg1 ;
-(void)scheduleUserPermissionRequestFor:(id)arg1 ;
@end

