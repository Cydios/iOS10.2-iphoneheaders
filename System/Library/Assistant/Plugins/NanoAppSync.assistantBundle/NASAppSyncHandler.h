/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>
#import <NanoAppSync/NASAppSyncMetaDataSourceObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NASAppSyncStatePersistence, NASAppSyncMetaDataSource, NASAppSyncMetaDataProcessor, NSString;

@interface NASAppSyncHandler : NSObject <AFSyncHandler, NASAppSyncMetaDataSourceObserver> {

	NSObject*<OS_dispatch_queue> _stateQueue;
	NASAppSyncStatePersistence* _statePersistence;
	NASAppSyncMetaDataSource* _source;
	NASAppSyncMetaDataProcessor* _processor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_checkIfResetIsNeededForWorkspace:(id)arg1 key:(id)arg2 startAnchorString:(id)arg3 validity:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sourceIsReady:(id)arg1 ;
-(void)syncDidEnd;
-(id)currentSyncSnapshot;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(id)init;
@end
