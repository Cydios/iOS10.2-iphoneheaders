/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBColorScheme : NSObject
+(void)addColorWithIndex:(int)arg1 fromScheme:(PptColorSchemeAtom*)arg2 colorTransform:(/*function pointer*/void*)arg3 atIndex:(int)arg4 inScheme:(id)arg5 ;
+(void)addColorWithIndex:(int)arg1 fromScheme:(PptColorSchemeAtom*)arg2 atIndex:(int)arg3 inScheme:(id)arg4 ;
+(int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 ;
+(unsigned short)eshSchemeColorIndexForOADSchemeColorValue:(int)arg1 ;
+(void)readFromColorScheme:(PptColorSchemeAtom*)arg1 toColorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4 ;
@end

