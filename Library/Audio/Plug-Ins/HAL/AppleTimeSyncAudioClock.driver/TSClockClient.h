/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Library/Audio/Plug-Ins/HAL/AppleTimeSyncAudioClock.driver/AppleTimeSyncAudioClock
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSClockClient <NSObject>
@optional
-(void)didResetClock:(id)arg1;
-(void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
-(void)didChangeClockMasterForClock:(id)arg1;
-(void)didBeginClockGrandmasterChangeForClock:(id)arg1;
-(void)didEndClockGrandmasterChangeForClock:(id)arg1;
-(void)didProcessSync:(id)arg1;

@end

