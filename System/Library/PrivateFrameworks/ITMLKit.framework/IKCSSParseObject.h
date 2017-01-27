/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface IKCSSParseObject : NSObject {

	NSArray* _cssValue;
	long long _type;

}

@property (nonatomic,retain) NSArray * cssValue;              //@synthesize cssValue=_cssValue - In the implementation block
@property (assign,nonatomic) long long type;                  //@synthesize type=_type - In the implementation block
+(id)stringifyList:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSArray *)cssValue;
-(void)setCssValue:(NSArray *)arg1 ;
@end
