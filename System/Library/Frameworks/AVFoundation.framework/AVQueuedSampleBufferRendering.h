/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol AVQueuedSampleBufferRendering <NSObject>
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData; 
@required
-(void)flush;
-(long long)status;
-(OpaqueCMTimebaseRef)timebase;
-(void)stopRequestingMediaData;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1;
-(NSError *)error;
-(BOOL)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2;

@end

