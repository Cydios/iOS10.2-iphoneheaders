/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebCache : NSObject
+(BOOL)addImageToCache:(CGImageRef)arg1 forURL:(id)arg2 forFrame:(id)arg3 ;
+(void)removeImageFromCacheForURL:(id)arg1 forFrame:(id)arg2 ;
+(void)empty;
+(void)emptyInMemoryResources;
+(void)sizeOfDeadResources:(int*)arg1 ;
+(BOOL)addImageToCache:(CGImageRef)arg1 forURL:(id)arg2 ;
+(void)removeImageFromCacheForURL:(id)arg1 ;
+(void)clearCachedCredentials;
+(void)initialize;
+(void)setDisabled:(BOOL)arg1 ;
+(CGImageRef)imageForURL:(id)arg1 ;
+(BOOL)isDisabled;
+(id)statistics;
@end

