/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CKContainer, CKDatabase, CKRecordZone, NSString;

@interface _KSCloudKitManager : NSObject {

	NSObject*<OS_dispatch_queue> _ckWorkQueue;
	NSObject*<OS_dispatch_queue> _dataQueue;
	BOOL _recordZoneOperationInProgress;
	BOOL _subscriptionOperationInProgress;
	CKContainer* _cloudKitContainer;
	CKDatabase* _cloudKitDatabase;
	CKDatabase* _publicDatabase;
	CKRecordZone* _recordZone;
	NSString* _recordZoneKey;
	NSString* _subscriptionKey;

}

@property (nonatomic,retain) CKContainer * cloudKitContainer;                   //@synthesize cloudKitContainer=_cloudKitContainer - In the implementation block
@property (nonatomic,retain) CKDatabase * cloudKitDatabase;                     //@synthesize cloudKitDatabase=_cloudKitDatabase - In the implementation block
@property (nonatomic,retain) CKDatabase * publicDatabase;                       //@synthesize publicDatabase=_publicDatabase - In the implementation block
@property (nonatomic,retain) CKRecordZone * recordZone;                         //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,retain) NSString * recordZoneKey;                          //@synthesize recordZoneKey=_recordZoneKey - In the implementation block
@property (nonatomic,retain) NSString * subscriptionKey;                        //@synthesize subscriptionKey=_subscriptionKey - In the implementation block
@property (assign,nonatomic) BOOL recordZoneOperationInProgress;                //@synthesize recordZoneOperationInProgress=_recordZoneOperationInProgress - In the implementation block
@property (assign,nonatomic) BOOL subscriptionOperationInProgress;              //@synthesize subscriptionOperationInProgress=_subscriptionOperationInProgress - In the implementation block
-(id)init;
-(void)dealloc;
-(id)userIdentity;
-(BOOL)isAccountAvailable;
-(id)initWithRecordZoneName:(id)arg1 ;
-(void)accountStatusDidChange:(id)arg1 ;
-(void)setupAccountDidChange:(BOOL)arg1 ;
-(CKContainer *)cloudKitContainer;
-(void)setupSubscription;
-(void)setupRecordZoneWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)queryAccountStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)recordZoneKey;
-(NSString *)subscriptionKey;
-(void)_checkAccountStatusWithCompletionHandler:(/*^block*/id)arg1 withRetryCount:(unsigned long long)arg2 ;
-(BOOL)recordZoneOperationInProgress;
-(void)setRecordZoneOperationInProgress:(BOOL)arg1 ;
-(CKDatabase *)cloudKitDatabase;
-(BOOL)subscriptionOperationInProgress;
-(void)setSubscriptionOperationInProgress:(BOOL)arg1 ;
-(void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 retryCount:(unsigned long long)arg5 ;
-(id)resolveConflicts:(id)arg1 ;
-(void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(/*^block*/id)arg3 retryCount:(unsigned long long)arg4 ;
-(void)_submitFetchRecordsOperation:(id)arg1 withPriority:(unsigned long long)arg2 changeToken:(id)arg3 completionHandler:(/*^block*/id)arg4 retryCount:(unsigned long long)arg5 ;
-(CKDatabase *)publicDatabase;
-(id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4 ;
-(id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3 ;
-(id)recordIDForName:(id)arg1 ;
-(void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchPublicRecordsWithNames:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCloudKitContainer:(CKContainer *)arg1 ;
-(void)setCloudKitDatabase:(CKDatabase *)arg1 ;
-(void)setPublicDatabase:(CKDatabase *)arg1 ;
-(void)setRecordZoneKey:(NSString *)arg1 ;
-(void)setSubscriptionKey:(NSString *)arg1 ;
-(CKRecordZone *)recordZone;
-(void)setRecordZone:(CKRecordZone *)arg1 ;
@end

