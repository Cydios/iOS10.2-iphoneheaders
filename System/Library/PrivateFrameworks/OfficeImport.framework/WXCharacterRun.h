/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXCharacterRun : NSObject
+(void)readFrom:(xmlNode*)arg1 to:(id)arg2 ;
+(void)readFromString:(id)arg1 source:(xmlNode*)arg2 to:(id)arg3 ;
+(id)fontForRun:(id)arg1 fontType:(int)arg2 ;
+(BOOL)isSpecialCharacter:(unsigned short)arg1 ;
@end
