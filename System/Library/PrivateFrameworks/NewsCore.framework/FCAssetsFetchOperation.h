/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFetchOperation.h>

@class NSArray;

@interface FCAssetsFetchOperation : FCFetchOperation {

	NSArray* _assetHandles;

}

@property (nonatomic,copy) NSArray * assetHandles;              //@synthesize assetHandles=_assetHandles - In the implementation block
-(void)performOperation;
-(id)initWithAssetHandle:(id)arg1 ;
-(id)initWithAssetHandles:(id)arg1 ;
-(NSArray *)assetHandles;
-(void)setAssetHandles:(NSArray *)arg1 ;
@end
