/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MSCLSocialService : NSObject <NSCopying> {

	NSString* _identifier;
	long long _maximumNumberOfCharacters;
	NSString* _storeItemIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfCharacters;              //@synthesize maximumNumberOfCharacters=_maximumNumberOfCharacters - In the implementation block
@property (nonatomic,copy) NSString * storeItemIdentifier;                     //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)storeItemIdentifier;
-(void)setStoreItemIdentifier:(NSString *)arg1 ;
-(long long)maximumNumberOfCharacters;
-(void)setMaximumNumberOfCharacters:(long long)arg1 ;
-(id)initWithServiceDictionary:(id)arg1 ;
@end
