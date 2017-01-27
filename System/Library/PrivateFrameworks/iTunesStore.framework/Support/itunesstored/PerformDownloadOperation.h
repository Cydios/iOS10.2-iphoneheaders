/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@protocol OS_dispatch_semaphore;
@class DownloadPipeline, PrepareDownloadResponse, NSObject;

@interface PerformDownloadOperation : ISOperation {

	DownloadPipeline* _pipeline;
	PrepareDownloadResponse* _response;
	NSObject*<OS_dispatch_semaphore> _downloadTaskWaitSemaphore;
	BOOL _waitForSignal;
	BOOL _waitForDownload;

}

@property (retain) PrepareDownloadResponse * response;              //@synthesize response=_response - In the implementation block
@property (assign) BOOL waitForDownload;                            //@synthesize waitForDownload=_waitForDownload - In the implementation block
-(void)signalDownloadCompletion;
-(void)setWaitForDownload:(BOOL)arg1 ;
-(id)initWithDownloadPipeline:(id)arg1 response:(id)arg2 ;
-(BOOL)waitForDownload;
-(PrepareDownloadResponse *)response;
-(void)run;
-(void)setResponse:(PrepareDownloadResponse *)arg1 ;
@end
