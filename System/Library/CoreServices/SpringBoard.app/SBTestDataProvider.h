/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@class BBDataProviderConnection, BBDataProviderProxy, NSMutableArray, NSString;

@interface SBTestDataProvider : NSObject <BBRemoteDataProvider> {

	BBDataProviderConnection* _connection;
	BBDataProviderProxy* _proxy;
	NSMutableArray* _bulletinRequests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_existingBulletinRequestForPublisherBulletinID:(id)arg1 ;
-(id)_newBulletinRequest:(id)arg1 ;
-(void)_publishBulletinWithID:(id)arg1 ;
-(id)_publisherBulletinIDWithIndex:(long long)arg1 ;
-(void)publishBulletinsWithCount:(long long)arg1 ;
-(void)publish;
-(id)init;
-(void)update;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(id)defaultSectionInfo;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 ;
-(id)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 ;
-(id)sectionParameters;
-(id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 ;
-(float)attachmentAspectRatioForRecordID:(id)arg1 ;
-(void)dataProviderDidLoad;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)handleBulletinActionResponse:(id)arg1 ;
-(id)sectionDisplayName;
@end

