/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface SFCard : NSObject <NSSecureCoding> {

	NSArray* _cardSections;
	NSString* _title;
	NSString* _type;

}

@property (copy) NSArray * cardSections;                  //@synthesize cardSections=_cardSections - In the implementation block
@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * type;               //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setCardSections:(NSArray *)arg1 ;
-(NSArray *)cardSections;
-(void)loadCardSectionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadCardSectionsWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
@end

