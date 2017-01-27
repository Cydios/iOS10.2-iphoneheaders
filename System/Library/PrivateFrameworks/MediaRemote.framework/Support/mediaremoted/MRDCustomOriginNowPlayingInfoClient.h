/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDNowPlayingInfoClient.h>

@class NSString;

@interface MRDCustomOriginNowPlayingInfoClient : MRDNowPlayingInfoClient {

	BOOL _currentRouteHasVolumeControl;
	NSString* _nowPlayingAppDisplayID;
	NSString* _nowPlayingAppDisplayName;

}

@property (nonatomic,copy) NSString * nowPlayingAppDisplayID;                //@synthesize nowPlayingAppDisplayID=_nowPlayingAppDisplayID - In the implementation block
@property (nonatomic,copy) NSString * nowPlayingAppDisplayName;              //@synthesize nowPlayingAppDisplayName=_nowPlayingAppDisplayName - In the implementation block
@property (assign,nonatomic) BOOL currentRouteHasVolumeControl;              //@synthesize currentRouteHasVolumeControl=_currentRouteHasVolumeControl - In the implementation block
-(NSString *)nowPlayingAppDisplayName;
-(void)setNowPlayingAppDisplayName:(NSString *)arg1 ;
-(void)setCurrentRouteHasVolumeControl:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)currentRouteHasVolumeControl;
-(void)setNowPlayingAppDisplayID:(NSString *)arg1 ;
-(NSString *)nowPlayingAppDisplayID;
@end
