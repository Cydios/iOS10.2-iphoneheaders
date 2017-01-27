/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSDictionary, NSArray, NSString;

@interface SAAppsGetRestrictedAppsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSDictionary * appToItsRestrictionsMap; 
@property (nonatomic,copy) NSArray * restrictedApps; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getRestrictedAppsResponse;
+(id)getRestrictedAppsResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDictionary *)appToItsRestrictionsMap;
-(void)setAppToItsRestrictionsMap:(NSDictionary *)arg1 ;
-(NSArray *)restrictedApps;
-(void)setRestrictedApps:(NSArray *)arg1 ;
@end
