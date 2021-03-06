/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKObjectType, _HKFilter;

@interface _HKQueryServerDataObject : NSObject <NSSecureCoding> {

	BOOL _shouldStayAliveAfterInitialResults;
	BOOL _waitForStart;
	int _samplesDeliveredBeforeSuspend;
	HKObjectType* _objectType;
	_HKFilter* _filter;
	double _collectionInterval;

}

@property (nonatomic,retain) HKObjectType * objectType;                            //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,retain) _HKFilter * filter;                                   //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) BOOL shouldStayAliveAfterInitialResults;              //@synthesize shouldStayAliveAfterInitialResults=_shouldStayAliveAfterInitialResults - In the implementation block
@property (assign,nonatomic) BOOL waitForStart;                                    //@synthesize waitForStart=_waitForStart - In the implementation block
@property (assign,nonatomic) int samplesDeliveredBeforeSuspend;                    //@synthesize samplesDeliveredBeforeSuspend=_samplesDeliveredBeforeSuspend - In the implementation block
@property (assign,nonatomic) double collectionInterval;                            //@synthesize collectionInterval=_collectionInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFilter:(_HKFilter *)arg1 ;
-(_HKFilter *)filter;
-(void)setShouldStayAliveAfterInitialResults:(BOOL)arg1 ;
-(void)setSamplesDeliveredBeforeSuspend:(int)arg1 ;
-(void)setWaitForStart:(BOOL)arg1 ;
-(BOOL)shouldStayAliveAfterInitialResults;
-(void)setObjectType:(HKObjectType *)arg1 ;
-(HKObjectType *)objectType;
-(int)samplesDeliveredBeforeSuspend;
-(BOOL)waitForStart;
-(double)collectionInterval;
-(void)setCollectionInterval:(double)arg1 ;
@end

