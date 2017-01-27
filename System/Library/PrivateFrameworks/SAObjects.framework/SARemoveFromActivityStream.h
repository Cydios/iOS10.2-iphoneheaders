/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSDate;

@interface SARemoveFromActivityStream : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * activityType; 
@property (nonatomic,copy) NSDate * fromDate; 
@property (nonatomic,copy) NSString * streamType; 
@property (nonatomic,copy) NSString * taskType; 
@property (nonatomic,copy) NSDate * toDate; 
@property (nonatomic,copy) NSString * visibility; 
+(id)removeFromActivityStream;
+(id)removeFromActivityStreamWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)activityType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setStreamType:(NSString *)arg1 ;
-(void)setVisibility:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(NSDate *)fromDate;
-(void)setFromDate:(NSDate *)arg1 ;
-(NSDate *)toDate;
-(void)setToDate:(NSDate *)arg1 ;
-(NSString *)streamType;
-(NSString *)visibility;
-(NSString *)taskType;
-(void)setTaskType:(NSString *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
@end
