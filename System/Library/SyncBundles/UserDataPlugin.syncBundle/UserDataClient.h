/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SyncBundles/UserDataPlugin.syncBundle/UserDataPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATClient.h>

@class NSString;

@interface UserDataClient : NSObject <ATClient>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)supportedDataclasses;
-(id)outstandingAssetTransfers;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)currentSyncAnchor;
-(id)installedAssetMetrics;
@end
