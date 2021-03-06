/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCAudioPowerLevelMonitorDelegate;
@class NSObject;

@interface VCAudioPowerLevelMonitor : NSObject {

	unsigned startDetectRemoteAudioLowPowerTime;
	float audioPowerThreshold;
	unsigned audioLowPowerTimeInterval;
	BOOL isAudioPowerBelowThreshold;
	BOOL isAudioPowerMovingAverage;
	float audioPowerMovingAverageCoefficient;
	float currentAudioAverage;
	NSObject*<VCAudioPowerLevelMonitorDelegate> delegate;

}

@property (assign,nonatomic) NSObject*<VCAudioPowerLevelMonitorDelegate> delegate; 
-(id)init;
-(void)setDelegate:(NSObject*<VCAudioPowerLevelMonitorDelegate>)arg1 ;
-(NSObject*<VCAudioPowerLevelMonitorDelegate>)delegate;
-(void)detectRemoteAveragePowerLevel:(float)arg1 timestamp:(unsigned)arg2 ;
@end

