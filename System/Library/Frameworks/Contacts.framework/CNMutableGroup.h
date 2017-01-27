/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNGroup.h>

@class NSString, CNGroup;

@interface CNMutableGroup : CNGroup

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) CNGroup * snapshot; 
@property (assign,nonatomic) int iOSLegacyIdentifier; 
@property (nonatomic,copy) NSString * name; 
-(id)copy;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSnapshot:(CNGroup *)arg1 ;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(id)freezeWithSelfAsSnapshot;
-(void)adoptValuesFromAndSetSnaphot:(id)arg1 ;
-(id)freeze;
@end
