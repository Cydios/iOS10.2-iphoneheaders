/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData;

@interface HMFHTTPResponseInternal : NSObject <NSCopying> {

	long long _statusCode;
	NSDictionary* _headerFields;
	NSData* _body;

}

@property (nonatomic,readonly) long long statusCode;                     //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,copy) NSData * body;                                //@synthesize body=_body - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)body;
-(void)setBody:(NSData *)arg1 ;
-(long long)statusCode;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
-(NSDictionary *)headerFields;
-(id)initWithStatusCode:(long long)arg1 headerFields:(id)arg2 body:(id)arg3 ;
@end

