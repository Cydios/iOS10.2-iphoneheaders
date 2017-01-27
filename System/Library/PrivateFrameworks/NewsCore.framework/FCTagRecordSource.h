/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCRecordSource.h>

@class NSArray;

@interface FCTagRecordSource : FCRecordSource {

	NSArray* _genericKeys;
	unsigned long long _desiredFieldOptions;

}

@property (assign,nonatomic) unsigned long long desiredFieldOptions;              //@synthesize desiredFieldOptions=_desiredFieldOptions - In the implementation block
+(id)recordType;
+(id)storeFilename;
+(unsigned long long)storeVersion;
+(id)defaultCachePolicy;
+(unsigned long long)lowThresholdDataSizeLimit;
+(unsigned long long)highThresholdDataSizeLimit;
-(id)desiredKeys;
-(id)genericKeys;
-(id)localizableKeys;
-(id)recordFromCKRecord:(id)arg1 base:(id)arg2 ;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 ;
-(id)localizedKeysByOriginalKey;
-(unsigned long long)desiredFieldOptions;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredTagRecordFieldOptions:(unsigned long long)arg3 ;
-(id)saveTagRecords:(id)arg1 ;
-(void)setDesiredFieldOptions:(unsigned long long)arg1 ;
@end
