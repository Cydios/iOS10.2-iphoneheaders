/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _CATRemoteConnectionSendDataContext : NSObject {

	NSData* _data;
	NSData* _encodedData;
	id _userInfo;
	long long _bytesWritten;

}

@property (nonatomic,copy,readonly) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSData * encodedData;                  //@synthesize encodedData=_encodedData - In the implementation block
@property (nonatomic,readonly) id userInfo;                           //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) long long remainingBytes; 
@property (assign,nonatomic) long long bytesWritten;                  //@synthesize bytesWritten=_bytesWritten - In the implementation block
-(id)userInfo;
-(NSData *)data;
-(NSData *)encodedData;
-(long long)bytesWritten;
-(long long)remainingBytes;
-(id)initWithData:(id)arg1 userInfo:(id)arg2 ;
-(id)remainingData;
-(void)setBytesWritten:(long long)arg1 ;
@end
