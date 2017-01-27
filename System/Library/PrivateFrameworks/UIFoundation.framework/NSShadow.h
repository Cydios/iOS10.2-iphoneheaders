/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSColor;

@interface NSShadow : NSObject <NSCopying, NSCoding> {

	unsigned long long _shadowFlags;
	CGSize _shadowOffset;
	double _shadowBlurRadius;
	NSColor* _shadowColor;

}

@property (assign,nonatomic) CGSize shadowOffset;                  //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowBlurRadius;              //@synthesize shadowBlurRadius=_shadowBlurRadius - In the implementation block
@property (nonatomic,retain) id shadowColor; 
+(id)defaultShadowColor;
+(void)initialize;
+(id)shadow;
-(id)initWithShadow:(id)arg1 ;
-(id)init;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)shadowOffset;
-(id)shadowColor;
-(void)setShadowBlurRadius:(double)arg1 ;
-(double)shadowBlurRadius;
@end
