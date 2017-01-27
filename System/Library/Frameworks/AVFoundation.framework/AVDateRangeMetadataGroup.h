/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataGroup.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVDateRangeMetadataGroupInternal, NSDate, NSArray;

@interface AVDateRangeMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {

	AVDateRangeMetadataGroupInternal* _priv;

}

@property (nonatomic,readonly) NSDate * discoveryTimestamp; 
@property (nonatomic,readonly) NSDate * modificationTimestamp; 
@property (getter=_dateRangeMetadataGroupInternal,nonatomic,readonly) AVDateRangeMetadataGroupInternal * dateRangeMetadataGroupInternal; 
@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy,readonly) NSDate * endDate; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(id)_figMetadataArrayForMetadataItems:(id)arg1 ;
+(id)_metadataItemsForFigMetadataArray:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)items;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)discoveryTimestamp;
-(id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2 ;
-(id)classifyingLabel;
-(NSDate *)modificationTimestamp;
-(id)initWithItems:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)_taggedRangeMetadataDictionary;
-(void)_extractPropertiesFromTaggedRangeMetadataDictionary:(id)arg1 ;
-(id)_dateRangeMetadataGroupInternal;
-(id)uniqueID;
-(id)propertyList;
-(id)initWithPropertyList:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)finalize;
@end
