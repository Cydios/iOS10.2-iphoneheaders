/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOETAResult, GEOETAServiceResponseSummary, GEOPlaceSearchResponse;

@interface GEOETAResponse : PBCodable <NSCopying> {

	unsigned long long _debugServerLatencyMs;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;
	unsigned long long _problemDetailsSpace;
	NSMutableArray* _etaResultReferencePointDestinations;
	GEOETAResult* _etaResultReferencePointOrigin;
	NSMutableArray* _etaResults;
	GEOETAServiceResponseSummary* _etaServiceSummary;
	GEOPlaceSearchResponse* _originPlaceSearchResponse;
	int _status;
	SCD_Struct_GE45 _has;

}

@property (nonatomic,readonly) BOOL hasEtaServiceSummary; 
@property (nonatomic,retain) GEOETAServiceResponseSummary * etaServiceSummary; 
@property (assign,nonatomic) BOOL hasDebugServerLatencyMs; 
@property (assign,nonatomic) unsigned long long debugServerLatencyMs; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * etaResults;                                       //@synthesize etaResults=_etaResults - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * originPlaceSearchResponse;                //@synthesize originPlaceSearchResponse=_originPlaceSearchResponse - In the implementation block
@property (nonatomic,readonly) unsigned long long problemDetailsCount; 
@property (nonatomic,readonly) GEOProblemDetail* problemDetails; 
@property (nonatomic,readonly) BOOL hasEtaResultReferencePointOrigin; 
@property (nonatomic,retain) GEOETAResult * etaResultReferencePointOrigin;                      //@synthesize etaResultReferencePointOrigin=_etaResultReferencePointOrigin - In the implementation block
@property (nonatomic,retain) NSMutableArray * etaResultReferencePointDestinations;              //@synthesize etaResultReferencePointDestinations=_etaResultReferencePointDestinations - In the implementation block
+(Class)etaResultType;
+(Class)etaResultReferencePointDestinationType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(unsigned long long)problemDetailsCount;
-(GEOProblemDetail*)problemDetails;
-(void)clearProblemDetails;
-(void)addProblemDetail:(GEOProblemDetail)arg1 ;
-(GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1 ;
-(void)setProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(void)setEtaServiceSummary:(GEOETAServiceResponseSummary *)arg1 ;
-(BOOL)hasEtaServiceSummary;
-(GEOETAServiceResponseSummary *)etaServiceSummary;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)clearEtaResults;
-(void)addEtaResult:(id)arg1 ;
-(unsigned long long)etaResultsCount;
-(id)etaResultAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOriginPlaceSearchResponse;
-(BOOL)hasEtaResultReferencePointOrigin;
-(void)clearEtaResultReferencePointDestinations;
-(void)addEtaResultReferencePointDestination:(id)arg1 ;
-(unsigned long long)etaResultReferencePointDestinationsCount;
-(id)etaResultReferencePointDestinationAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)etaResults;
-(void)setEtaResults:(NSMutableArray *)arg1 ;
-(GEOPlaceSearchResponse *)originPlaceSearchResponse;
-(void)setOriginPlaceSearchResponse:(GEOPlaceSearchResponse *)arg1 ;
-(GEOETAResult *)etaResultReferencePointOrigin;
-(void)setEtaResultReferencePointOrigin:(GEOETAResult *)arg1 ;
-(NSMutableArray *)etaResultReferencePointDestinations;
-(void)setEtaResultReferencePointDestinations:(NSMutableArray *)arg1 ;
-(unsigned long long)debugServerLatencyMs;
-(void)setDebugServerLatencyMs:(unsigned long long)arg1 ;
-(void)setHasDebugServerLatencyMs:(BOOL)arg1 ;
-(BOOL)hasDebugServerLatencyMs;
@end
