/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAHAEntity, NSString, SAHAAttributeValue;

@interface SAHAActionResult : SADomainObject

@property (nonatomic,retain) SAHAEntity * entity; 
@property (nonatomic,copy) NSString * outcome; 
@property (nonatomic,copy) NSString * resultAttribute; 
@property (nonatomic,retain) SAHAAttributeValue * resultValue; 
+(id)actionResultWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)actionResult;
-(id)shortDescription;
-(id)groupIdentifier;
-(SAHAEntity *)entity;
-(void)setEntity:(SAHAEntity *)arg1 ;
-(id)encodedClassName;
-(void)setResultAttribute:(NSString *)arg1 ;
-(NSString *)outcome;
-(NSString *)resultAttribute;
-(void)setResultValue:(SAHAAttributeValue *)arg1 ;
-(SAHAAttributeValue *)resultValue;
-(void)setOutcome:(NSString *)arg1 ;
@end
