/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, NSDate;

@interface WDDateTime : WDRun {

	WDCharacterProperties* mProperties;
	NSDate* mDate;

}
-(void)dealloc;
-(id)description;
-(id)date;
-(void)setProperties:(id)arg1 ;
-(id)properties;
-(int)runType;
-(id)initWithParagraph:(id)arg1 date:(id)arg2 ;
-(void)clearProperties;
@end

