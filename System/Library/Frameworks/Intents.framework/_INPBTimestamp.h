/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface _INPBTimestamp : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	long long _seconds;
	int _nanos;
	SCD_Struct_IN3 _has;

}

@property (assign,nonatomic) BOOL hasSeconds; 
@property (assign,nonatomic) long long seconds;                              //@synthesize seconds=_seconds - In the implementation block
@property (assign,nonatomic) BOOL hasNanos; 
@property (assign,nonatomic) int nanos;                                      //@synthesize nanos=_nanos - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(long long)seconds;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setSeconds:(long long)arg1 ;
-(void)setHasSeconds:(BOOL)arg1 ;
-(BOOL)hasSeconds;
-(void)setNanos:(int)arg1 ;
-(void)setHasNanos:(BOOL)arg1 ;
-(BOOL)hasNanos;
-(int)nanos;
@end
