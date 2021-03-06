/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAStarkSupport : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * supportedModes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)starkSupport;
+(id)starkSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)supportedModes;
-(void)setSupportedModes:(NSArray *)arg1 ;
@end

