/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@interface TREraseAnisetteDataResponse : TRResponseMessage {

	BOOL _didSucceed;

}

@property (assign,nonatomic) BOOL didSucceed;              //@synthesize didSucceed=_didSucceed - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setDidSucceed:(BOOL)arg1 ;
-(BOOL)didSucceed;
@end

