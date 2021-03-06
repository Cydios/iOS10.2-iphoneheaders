/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKHealthStore;

@interface HKSeriesBuilder : NSObject <NSSecureCoding> {

	HKHealthStore* _store;
	int _state;
	long long _count;

}

@property (readonly) HKHealthStore * store; 
@property (setter=_setState:) unsigned long long state; 
@property (setter=_setCount:) long long count; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(unsigned long long)state;
-(void)_setState:(unsigned long long)arg1 ;
-(void)_setCount:(long long)arg1 ;
-(void)_discardWithHandler:(/*^block*/id)arg1 ;
-(id)_initWithHealthStore:(id)arg1 ;
-(void)discard;
-(HKHealthStore *)store;
@end

