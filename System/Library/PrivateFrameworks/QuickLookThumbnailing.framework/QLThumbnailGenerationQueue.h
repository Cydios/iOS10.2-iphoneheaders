/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSMutableDictionary;

@interface QLThumbnailGenerationQueue : NSObject {

	NSOperationQueue* _queue;
	NSMutableDictionary* _queuedURLs;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)arg1 ;
-(void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)arg1 atBackgroundPriority:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

