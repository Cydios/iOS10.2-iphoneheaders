/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATDownloadProgressObserver <NSObject>
@required
-(void)atcDidEnqueueAsset:(id)arg1;
-(void)atcDidUpdateActiveStateTransitionForAssets:(id)arg1;
-(void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2;
-(void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2;

@end

