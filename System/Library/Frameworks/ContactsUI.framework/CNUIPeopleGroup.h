/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNUIPeopleGroup : NSObject {

	NSString* _name;
	NSString* _identifier;
	NSString* _sourceKind;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * sourceKind;              //@synthesize sourceKind=_sourceKind - In the implementation block
+(id)peopleGroupWithName:(id)arg1 identifier:(id)arg2 sourceKind:(id)arg3 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)sourceKind;
-(void)setSourceKind:(NSString *)arg1 ;
@end
