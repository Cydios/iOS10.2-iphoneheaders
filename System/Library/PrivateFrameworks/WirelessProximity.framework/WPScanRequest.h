/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WirelessProximity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSData, NSDictionary, NSArray;

@interface WPScanRequest : NSObject <NSSecureCoding> {

	unsigned char _clientType;
	BOOL _allowDuplicates;
	BOOL _scanWhenLocked;
	BOOL _activeScanning;
	BOOL _scanCache;
	NSNumber* _rssiThreshold;
	NSData* _blobValue;
	NSData* _maskValue;
	NSDictionary* _options;
	NSArray* _peers;
	double _updateTime;
	long long _nearbyScanMode;
	SCD_Struct_WP1 _scanningRates;

}

@property (assign) unsigned char clientType;                  //@synthesize clientType=_clientType - In the implementation block
@property (assign) SCD_Struct_WP1 scanningRates;              //@synthesize scanningRates=_scanningRates - In the implementation block
@property (assign) BOOL allowDuplicates;                      //@synthesize allowDuplicates=_allowDuplicates - In the implementation block
@property (assign) BOOL scanWhenLocked;                       //@synthesize scanWhenLocked=_scanWhenLocked - In the implementation block
@property (assign) BOOL activeScanning;                       //@synthesize activeScanning=_activeScanning - In the implementation block
@property (assign) BOOL scanCache;                            //@synthesize scanCache=_scanCache - In the implementation block
@property (retain) NSNumber * rssiThreshold;                  //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (nonatomic,retain) NSData * blobValue;              //@synthesize blobValue=_blobValue - In the implementation block
@property (nonatomic,retain) NSData * maskValue;              //@synthesize maskValue=_maskValue - In the implementation block
@property (retain) NSDictionary * options;                    //@synthesize options=_options - In the implementation block
@property (retain) NSArray * peers;                           //@synthesize peers=_peers - In the implementation block
@property (assign) double updateTime;                         //@synthesize updateTime=_updateTime - In the implementation block
@property (assign) long long nearbyScanMode;                  //@synthesize nearbyScanMode=_nearbyScanMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setUpdateTime:(double)arg1 ;
-(double)updateTime;
-(BOOL)allowDuplicates;
-(void)setAllowDuplicates:(BOOL)arg1 ;
-(void)setPeers:(NSArray *)arg1 ;
-(NSArray *)peers;
-(unsigned char)clientType;
-(void)setClientType:(unsigned char)arg1 ;
-(void)setScanningRates:(SCD_Struct_WP1)arg1 ;
-(void)setActiveScanning:(BOOL)arg1 ;
-(void)setMaskValue:(NSData *)arg1 ;
-(SCD_Struct_WP1)scanningRates;
-(void)setNearbyScanMode:(long long)arg1 ;
-(BOOL)scanWhenLocked;
-(void)setScanWhenLocked:(BOOL)arg1 ;
-(BOOL)activeScanning;
-(NSData *)blobValue;
-(NSData *)maskValue;
-(long long)nearbyScanMode;
-(void)setRssiThreshold:(NSNumber *)arg1 ;
-(void)setScanCache:(BOOL)arg1 ;
-(NSNumber *)rssiThreshold;
-(BOOL)scanCache;
-(void)setBlobValue:(NSData *)arg1 ;
@end
