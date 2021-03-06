/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VCCaptionsTranscription : PBCodable <NSCopying> {

	NSMutableArray* _segments;
	unsigned _updateNumber;
	unsigned _utteranceNumber;
	BOOL _isFinal;
	BOOL _isLocal;
	SCD_Struct_VC1 _has;

}

@property (assign,nonatomic) unsigned utteranceNumber;               //@synthesize utteranceNumber=_utteranceNumber - In the implementation block
@property (assign,nonatomic) unsigned updateNumber;                  //@synthesize updateNumber=_updateNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIsLocal; 
@property (assign,nonatomic) BOOL isLocal;                           //@synthesize isLocal=_isLocal - In the implementation block
@property (assign,nonatomic) BOOL hasIsFinal; 
@property (assign,nonatomic) BOOL isFinal;                           //@synthesize isFinal=_isFinal - In the implementation block
@property (nonatomic,retain) NSMutableArray * segments;              //@synthesize segments=_segments - In the implementation block
+(Class)segmentsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isLocal;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isFinal;
-(NSMutableArray *)segments;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(void)addSegments:(id)arg1 ;
-(unsigned long long)segmentsCount;
-(void)clearSegments;
-(id)segmentsAtIndex:(unsigned long long)arg1 ;
-(void)setIsFinal:(BOOL)arg1 ;
-(void)setHasIsFinal:(BOOL)arg1 ;
-(BOOL)hasIsFinal;
-(unsigned)utteranceNumber;
-(void)setUtteranceNumber:(unsigned)arg1 ;
-(unsigned)updateNumber;
-(void)setUpdateNumber:(unsigned)arg1 ;
-(void)setHasIsLocal:(BOOL)arg1 ;
-(BOOL)hasIsLocal;
-(void)setIsLocal:(BOOL)arg1 ;
@end

