/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCoreThunking.h>
#import <SiriCore/SiriCoreSessionObject.h>

@class NSString, NSArray;

@interface SiriCoreSpeechPacket : NSObject <SiriCoreThunking, SiriCoreSessionObject> {

	NSString* _aceId;
	NSString* _refId;
	NSArray* _packets;
	long long _packetNumber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * packets;                     //@synthesize packets=_packets - In the implementation block
@property (assign,nonatomic) long long packetNumber;                //@synthesize packetNumber=_packetNumber - In the implementation block
@property (nonatomic,copy) NSString * aceId;                        //@synthesize aceId=_aceId - In the implementation block
@property (nonatomic,copy) NSString * refId;                        //@synthesize refId=_refId - In the implementation block
-(NSString *)description;
-(void)setAceId:(NSString *)arg1 ;
-(NSString *)refId;
-(void)setRefId:(NSString *)arg1 ;
-(long long)packetNumber;
-(void)setPacketNumber:(long long)arg1 ;
-(NSArray *)packets;
-(void)setPackets:(NSArray *)arg1 ;
-(NSString *)aceId;
-(id)siriCore_serializedAceDataError:(id*)arg1 ;
-(BOOL)siriCore_supportsSendCompletions;
-(void)siriCore_dispatchSendCompletionsWithResult:(long long)arg1 error:(id)arg2 ;
-(void)siriCore_invokeThunk;
-(BOOL)siriCore_bufferingAllowedDuringActiveSession;
-(BOOL)siriCore_isRetryable;
-(BOOL)siriCore_isRestartable;
-(void)siriCore_logDiagnostics;
-(void)siriCore_addSendCompletion:(/*^block*/id)arg1 ;
@end
