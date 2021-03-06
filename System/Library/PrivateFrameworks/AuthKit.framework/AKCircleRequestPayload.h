/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDictionary;

@interface AKCircleRequestPayload : NSObject <NSSecureCoding> {

	NSString* _serverInfo;
	NSData* _clientInfo;
	long long _clientErrorCode;
	NSString* _altDSID;
	NSString* _transactionId;
	NSDictionary* _responseInfo;
	unsigned long long _circleStep;

}

@property (nonatomic,retain) NSDictionary * responseInfo;                //@synthesize responseInfo=_responseInfo - In the implementation block
@property (assign,nonatomic) unsigned long long circleStep;              //@synthesize circleStep=_circleStep - In the implementation block
@property (nonatomic,readonly) NSString * serverMachineId; 
@property (nonatomic,retain) NSString * serverInfo;                      //@synthesize serverInfo=_serverInfo - In the implementation block
@property (nonatomic,retain) NSData * clientInfo;                        //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) long long clientErrorCode;                  //@synthesize clientErrorCode=_clientErrorCode - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                         //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * transactionId;                   //@synthesize transactionId=_transactionId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)payloadWithInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)clientInfo;
-(void)setTransactionId:(NSString *)arg1 ;
-(unsigned long long)circleStep;
-(void)setCircleStep:(unsigned long long)arg1 ;
-(BOOL)isRequestingPayload;
-(BOOL)isAcceptingPayload;
-(NSString *)serverMachineId;
-(void)setClientErrorCode:(long long)arg1 ;
-(void)setResponseInfo:(NSDictionary *)arg1 ;
-(void)setServerInfo:(NSString *)arg1 ;
-(NSString *)serverInfo;
-(void)setClientInfo:(NSData *)arg1 ;
-(NSDictionary *)responseInfo;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)altDSID;
-(long long)clientErrorCode;
-(id)replyPayload;
-(NSString *)transactionId;
@end

