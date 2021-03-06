/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKStackedTextItem : NSObject {

	BOOL _significantPrimary;
	NSString* _groupingIdentifier;
	unsigned long long _numberOfContentRows;
	NSString* _title;
	NSString* _primary;
	NSString* _secondary;
	NSString* _tertiary;

}

@property (nonatomic,copy,readonly) NSString * groupingIdentifier;                             //@synthesize groupingIdentifier=_groupingIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfContentRows;                         //@synthesize numberOfContentRows=_numberOfContentRows - In the implementation block
@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * primary;                                                 //@synthesize primary=_primary - In the implementation block
@property (nonatomic,copy) NSString * secondary;                                               //@synthesize secondary=_secondary - In the implementation block
@property (nonatomic,copy) NSString * tertiary;                                                //@synthesize tertiary=_tertiary - In the implementation block
@property (assign,getter=isSignificantPrimary,nonatomic) BOOL significantPrimary;              //@synthesize significantPrimary=_significantPrimary - In the implementation block
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(void)setPrimary:(NSString *)arg1 ;
-(void)setSecondary:(NSString *)arg1 ;
-(id)initWithNumberOfContentRows:(unsigned long long)arg1 groupingIdentifier:(id)arg2 ;
-(void)setSignificantPrimary:(BOOL)arg1 ;
-(void)setTertiary:(NSString *)arg1 ;
-(NSString *)primary;
-(NSString *)secondary;
-(NSString *)tertiary;
-(BOOL)isSignificantPrimary;
-(NSString *)groupingIdentifier;
-(unsigned long long)numberOfContentRows;
@end

