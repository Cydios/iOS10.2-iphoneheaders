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

@class GEONavigationTransitStopSummary;

@interface GEONavigationScheduledTransitLinkSummary : PBCodable <NSCopying> {

	unsigned long long _lineID;
	double _scheduledArrival;
	double _scheduledDeparture;
	GEONavigationTransitStopSummary* _stopFrom;
	GEONavigationTransitStopSummary* _stopTo;
	SCD_Struct_GE20 _has;

}

@property (assign,nonatomic) BOOL hasLineID; 
@property (assign,nonatomic) unsigned long long lineID;                               //@synthesize lineID=_lineID - In the implementation block
@property (assign,nonatomic) BOOL hasScheduledDeparture; 
@property (assign,nonatomic) double scheduledDeparture;                               //@synthesize scheduledDeparture=_scheduledDeparture - In the implementation block
@property (assign,nonatomic) BOOL hasScheduledArrival; 
@property (assign,nonatomic) double scheduledArrival;                                 //@synthesize scheduledArrival=_scheduledArrival - In the implementation block
@property (nonatomic,readonly) BOOL hasStopFrom; 
@property (nonatomic,retain) GEONavigationTransitStopSummary * stopFrom;              //@synthesize stopFrom=_stopFrom - In the implementation block
@property (nonatomic,readonly) BOOL hasStopTo; 
@property (nonatomic,retain) GEONavigationTransitStopSummary * stopTo;                //@synthesize stopTo=_stopTo - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEONavigationTransitStopSummary *)stopFrom;
-(GEONavigationTransitStopSummary *)stopTo;
-(void)setLineID:(unsigned long long)arg1 ;
-(void)setHasLineID:(BOOL)arg1 ;
-(BOOL)hasLineID;
-(void)setScheduledDeparture:(double)arg1 ;
-(void)setHasScheduledDeparture:(BOOL)arg1 ;
-(BOOL)hasScheduledDeparture;
-(void)setScheduledArrival:(double)arg1 ;
-(void)setHasScheduledArrival:(BOOL)arg1 ;
-(BOOL)hasScheduledArrival;
-(BOOL)hasStopFrom;
-(BOOL)hasStopTo;
-(unsigned long long)lineID;
-(double)scheduledDeparture;
-(double)scheduledArrival;
-(void)setStopFrom:(GEONavigationTransitStopSummary *)arg1 ;
-(void)setStopTo:(GEONavigationTransitStopSummary *)arg1 ;
-(id)initWithTransitTripRouteStep:(id)arg1 originSummary:(id)arg2 destinationSummary:(id)arg3 ;
@end

