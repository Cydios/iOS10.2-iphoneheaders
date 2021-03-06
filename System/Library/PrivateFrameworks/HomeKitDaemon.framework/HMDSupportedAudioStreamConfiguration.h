/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraTLVBase.h>
#import <libobjc.A.dylib/HMDCameraTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDictionary;

@interface HMDSupportedAudioStreamConfiguration : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding> {

	NSNumber* _supportsComfortNoise;
	NSDictionary* _codecConfigurations;

}

@property (nonatomic,copy,readonly) NSNumber * supportsComfortNoise;                 //@synthesize supportsComfortNoise=_supportsComfortNoise - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * codecConfigurations;              //@synthesize codecConfigurations=_codecConfigurations - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSDictionary *)codecConfigurations;
-(NSNumber *)supportsComfortNoise;
-(id)initWithComfortNoise:(id)arg1 CodecConfigurations:(id)arg2 ;
@end

