/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MessageServiceSessionSendBlockWrapper : NSObject {

	BOOL _isDelayedRichLinkBlock;
	NSString* _GUID;
	/*^block*/id _block;

}

@property (getter=UID,nonatomic,copy) NSString * GUID;                 //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,copy) id block;                                   //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL isDelayedRichLinkBlock;              //@synthesize isDelayedRichLinkBlock=_isDelayedRichLinkBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setGUID:(NSString *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
-(BOOL)isDelayedRichLinkBlock;
-(void)setIsDelayedRichLinkBlock:(BOOL)arg1 ;
-(NSString *)GUID;
@end
