/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/GameCenterSettings.bundle/GameCenterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterSettings/GKSettingsGroupController.h>

@interface GKSettingsSessionGamesGroupController : GKSettingsGroupController {

	BOOL _zoneFetchInProgress;

}

@property (assign,getter=isZoneFetchInProgress,nonatomic) BOOL zoneFetchInProgress;              //@synthesize zoneFetchInProgress=_zoneFetchInProgress - In the implementation block
-(void)setZoneFetchInProgress:(BOOL)arg1 ;
-(BOOL)isZoneFetchInProgress;
-(void)didSelectGame:(id)arg1 ;
-(id)specifiers;
@end
