/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMKStillImageCaptureRequestDelegate <NSObject>
@optional
-(void)captureController:(id)arg1 willCaptureStillImageForRequest:(id)arg2;
-(void)captureController:(id)arg1 didCaptureStillImageForRequest:(id)arg2;
-(void)captureController:(id)arg1 didGenerateResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
-(void)captureController:(id)arg1 didCompleteResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
-(void)captureController:(id)arg1 didFinishWriteForResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;

@end

