/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DTexture.h>

@class TSDFill;

@interface TSCH3DTSDFillTexture : TSCH3DTexture {

	TSDFill* mFill;

}
+(id)textureWithTSDFill:(id)arg1 ;
-(BOOL)hasCompleteData;
-(id)databufferForDataCache:(id)arg1 ;
-(id)initWithTSDFill:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

