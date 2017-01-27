/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString, NSObject;

@interface TSWPStorageRangeProvider : NSObject {

	NSString* _identifier;
	NSRange _range;
	NSObject* _object;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSRange range;                      //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSObject * object;                  //@synthesize object=_object - In the implementation block
-(unsigned long long)rangeLength;
-(void)nextRange;
-(unsigned long long)rangeStart;
-(unsigned long long)rangeEnd;
-(void)dealloc;
-(NSString *)identifier;
-(NSObject *)object;
-(NSRange)range;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setRangeStart:(unsigned long long)arg1 ;
@end
