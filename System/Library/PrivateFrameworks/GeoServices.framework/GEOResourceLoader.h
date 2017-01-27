/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, NSArray, NSData, NSMapTable, GEOPowerAssertion, NSObject;

@interface GEOResourceLoader : NSObject {

	NSString* _directory;
	NSString* _additionalDirectoryToConsider;
	NSMutableArray* _resourcesToLoad;
	/*^block*/id _completionHandler;
	long long _numberOfDownloadsInProgress;
	long long _numberOfCopiesInProgress;
	BOOL _canceled;
	BOOL _requiresWiFi;
	NSString* _baseURLString;
	unsigned long long _maxConcurrentLoads;
	NSArray* _resourceInfos;
	NSMutableArray* _loadedResources;
	NSData* _auditToken;
	BOOL _allowResumingPartialDownloads;
	NSMapTable* _inProgressResourceDownloads;
	GEOPowerAssertion* _powerAssertion;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSData * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL requiresWiFi;                //@synthesize requiresWiFi=_requiresWiFi - In the implementation block
+(Class)resourceLoadOperationClass;
-(void)cancel;
-(void)dealloc;
-(void)_cleanup;
-(NSData *)auditToken;
-(void)setAuditToken:(NSData *)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(BOOL)requiresWiFi;
-(void)setRequiresWiFi:(BOOL)arg1 ;
-(id)initWithTargetDirectory:(id)arg1 baseURLString:(id)arg2 resources:(id)arg3 maximumConcurrentLoads:(unsigned long long)arg4 additionalDirectoryToConsider:(id)arg5 ;
-(BOOL)_establishHardLinkIfPossibleForResource:(id)arg1 toResource:(id)arg2 error:(id*)arg3 ;
-(void)_loadResourcesFromDisk;
-(void)_loadNextResourceFromNetwork;
-(void)_writeResourceToDisk:(id)arg1 withData:(id)arg2 checksum:(id)arg3 completionHandler:(/*^block*/id)arg4 callbackQueue:(id)arg5 ;
-(BOOL)_copyResource:(id)arg1 fromPath:(id)arg2 allowCreatingHardLink:(BOOL)arg3 error:(id*)arg4 ;
@end
