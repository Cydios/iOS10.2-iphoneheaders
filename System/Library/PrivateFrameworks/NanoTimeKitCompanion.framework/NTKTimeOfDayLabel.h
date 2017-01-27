/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKTimeIntervalLabel.h>

@class NSCalendar, NSString, NSDate, NSTimeZone;

@interface NTKTimeOfDayLabel : NTKTimeIntervalLabel {

	NSCalendar* _cal;
	BOOL _is24HourMode;
	BOOL _usePrefix;
	NSString* _amSymbol;
	NSString* _pmSymbol;
	NSString* _ampmLiteral;
	NSDate* _midnight;
	NSDate* _midday;
	double _startOfDayTime;
	double _startOfTomorrowTime;
	BOOL _hideSuffix;
	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (assign,nonatomic) BOOL hideSuffix;                    //@synthesize hideSuffix=_hideSuffix - In the implementation block
-(void)dealloc;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSTimeZone *)timeZone;
-(id)prefix;
-(void)_localeChanged;
-(BOOL)hideSuffix;
-(BOOL)_isMorning:(id)arg1 ;
-(void)cacheDateInformation:(id)arg1 ;
-(id)_midnightOf:(id)arg1 ;
-(double)timeIntervalForDate:(id)arg1 sinceDate:(id)arg2 consideringDSTDifferenceForTimeZone:(id)arg3 ;
-(id)_middayOf:(id)arg1 ;
-(id)initWithMonospacedFontOfSize:(double)arg1 color:(id)arg2 ;
-(void)setHideSuffix:(BOOL)arg1 ;
-(id)suffix;
@end
