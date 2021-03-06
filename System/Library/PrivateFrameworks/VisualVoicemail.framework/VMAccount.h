/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VMVoicemailManager;

@interface VMAccount : NSObject {

	VMVoicemailManager* _voicemailManager;

}

@property (nonatomic,retain) VMVoicemailManager * voicemailManager;              //@synthesize voicemailManager=_voicemailManager - In the implementation block
-(id)init;
-(BOOL)isSubscribed;
-(BOOL)mailboxRequiresSetup;
-(void)setProvisionalPassword:(id)arg1 ;
-(int)mailboxUsage;
-(BOOL)isMessageWaiting;
-(BOOL)isOfflineDueToRoaming;
-(void)handlePasswordNotificationResponse:(id)arg1 ;
-(void)changePassword:(id)arg1 fromPassword:(id)arg2 ;
-(BOOL)greetingAvailable;
-(void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned)arg3 ;
-(VMVoicemailManager *)voicemailManager;
-(void)setVoicemailManager:(VMVoicemailManager *)arg1 ;
-(unsigned)recentUnreadCount;
-(void)moveVoicemailToTrash:(id)arg1 ;
-(void)moveVoicemailFromTrash:(id)arg1 ;
-(id)allVoicemailsWithFlags:(unsigned long long)arg1 withoutFlags:(unsigned long long)arg2 ;
-(unsigned)unreadCount;
-(id)voicemailWithIdentifier:(unsigned long long)arg1 ;
-(BOOL)isOnline;
-(void)synchronize:(BOOL)arg1 ;
@end

