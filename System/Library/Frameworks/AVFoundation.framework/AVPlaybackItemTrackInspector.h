/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {

	OpaqueFigPlaybackItemRef _playbackItem;
	int _trackID;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEnabled;
-(id)asset;
-(CGSize)dimensions;
-(CGSize)naturalSize;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(float)estimatedDataRate;
-(SCD_Struct_AV2)samplePresentationTimeForTrackTime:(SCD_Struct_AV2)arg1 ;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(unsigned)_figMediaType;
-(int)trackID;
-(id)mediaType;
-(SCD_Struct_AV3)timeRange;
-(CGAffineTransform)preferredTransform;
-(id)formatDescriptions;
-(void)finalize;
@end

