/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVMediaContentTasteItem.h>

@class NSString;

@interface SSVMutableMediaContentTasteItem : SSVMediaContentTasteItem

@property (assign,nonatomic) unsigned long long contentType; 
@property (nonatomic,copy) NSString * playlistGlobalID; 
@property (assign,nonatomic) long long storeAdamID; 
@property (assign,nonatomic) unsigned long long tasteType; 
-(void)setPlaylistGlobalID:(NSString *)arg1 ;
-(void)setTasteType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStoreAdamID:(long long)arg1 ;
-(void)setContentType:(unsigned long long)arg1 ;
@end

