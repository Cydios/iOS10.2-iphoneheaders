/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/Assistant.bundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IntentsApp : NSObject {

	BOOL _accessGranted;
	NSString* _appID;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * appID;                    //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL accessGranted;                       //@synthesize accessGranted=_accessGranted - In the implementation block
-(long long)compareWithIntentsApp:(id)arg1 ;
-(id)initWithAppId:(id)arg1 displayName:(id)arg2 accessGranted:(BOOL)arg3 ;
-(NSString *)displayName;
-(BOOL)accessGranted;
-(NSString *)appID;
@end

