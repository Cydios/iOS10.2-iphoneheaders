/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TTYTelephonyUtilities : NSObject {

	BOOL _headphoneJackSupportsTTY;

}

@property (assign,nonatomic) BOOL headphoneJackSupportsTTY;              //@synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY - In the implementation block
+(id)sharedUtilityProvider;
+(BOOL)relayIsSupported;
+(id)relayPhoneNumber;
-(id)init;
-(void)dealloc;
-(void)registerNotifications;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(void)mediaServerDied;
-(BOOL)relayIsSupported;
-(unsigned long long)currentPreferredTransportMethod;
-(BOOL)headphoneJackSupportsTTY;
-(void)setHeadphoneJackSupportsTTY:(BOOL)arg1 ;
-(void)updateHeadphoneState;
-(void)headphoneStateChangedNotification:(id)arg1 ;
@end
