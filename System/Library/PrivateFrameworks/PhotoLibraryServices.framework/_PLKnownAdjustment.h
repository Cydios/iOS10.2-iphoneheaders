/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSIndexSet;

@interface _PLKnownAdjustment : NSObject {

	NSString* _identifier;
	NSIndexSet* _supportedVersions;
	long long _supportLevel;
	/*^block*/id _settingsExtractionBlock;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSIndexSet * supportedVersions;              //@synthesize supportedVersions=_supportedVersions - In the implementation block
@property (assign,nonatomic) long long supportLevel;                    //@synthesize supportLevel=_supportLevel - In the implementation block
@property (nonatomic,copy) id settingsExtractionBlock;                  //@synthesize settingsExtractionBlock=_settingsExtractionBlock - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSIndexSet *)supportedVersions;
-(void)setSupportedVersions:(NSIndexSet *)arg1 ;
-(long long)supportLevel;
-(void)setSupportLevel:(long long)arg1 ;
-(id)settingsExtractionBlock;
-(void)setSettingsExtractionBlock:(id)arg1 ;
@end
