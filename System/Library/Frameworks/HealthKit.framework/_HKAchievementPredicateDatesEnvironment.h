/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@class NSCalendar, NSDate, NSNumber;

@interface _HKAchievementPredicateDatesEnvironment : _HKBaseAchievementPredicateEnvironment {

	NSCalendar* _calendar;
	NSDate* _now;
	NSDate* _startOfToday;
	NSDate* _endOfToday;
	NSDate* _startOfYesterday;
	long long _firstDayOfFitnessWeek;
	NSDate* _firstWristOnDateToday;
	double _currentTimeZoneOffset;
	long long _dayOfWeekToday;
	long long _dayOfMonthToday;
	long long _numberOfDaysInCurrentMonth;
	NSDate* _startOfCurrentFitnessWeek;
	NSDate* _endOfCurrentFitnessWeek;

}

@property (nonatomic,readonly) NSNumber * now; 
@property (nonatomic,readonly) NSNumber * startOfToday; 
@property (nonatomic,readonly) NSNumber * endOfToday; 
@property (nonatomic,readonly) NSNumber * startOfYesterday; 
@property (nonatomic,readonly) long long firstDayOfFitnessWeek; 
@property (nonatomic,readonly) long long lastDayOfFitnessWeek; 
@property (nonatomic,readonly) NSNumber * firstWristOnDateToday; 
@property (nonatomic,readonly) double currentTimeZoneOffset; 
@property (nonatomic,readonly) long long dayOfWeekToday; 
@property (nonatomic,readonly) long long dayOfMonthToday; 
@property (nonatomic,readonly) long long numberOfDaysInCurrentMonth; 
@property (nonatomic,readonly) NSNumber * startOfCurrentFitnessWeek; 
@property (nonatomic,readonly) NSNumber * endOfCurrentFitnessWeek; 
-(id)init;
-(void)setCalendar:(id)arg1 ;
-(void)_clearDateCaches;
-(long long)firstDayOfFitnessWeek;
-(id)_startOfToday;
-(id)_endOfToday;
-(id)_startOfYesterday;
-(id)_startOfCurrentFitnessWeek;
-(id)_endOfCurrentFitnessWeek;
-(NSNumber *)endOfToday;
-(long long)lastDayOfFitnessWeek;
-(NSNumber *)firstWristOnDateToday;
-(double)currentTimeZoneOffset;
-(long long)dayOfWeekToday;
-(long long)dayOfMonthToday;
-(long long)numberOfDaysInCurrentMonth;
-(NSNumber *)startOfCurrentFitnessWeek;
-(NSNumber *)endOfCurrentFitnessWeek;
-(void)setCurrentDate:(id)arg1 ;
-(NSNumber *)startOfToday;
-(NSNumber *)startOfYesterday;
-(NSNumber *)now;
@end
