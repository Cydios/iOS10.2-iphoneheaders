/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface TCDumpBinaryToXmlState : NSObject {

	NSString* mCurrentFieldName;
	NSMutableDictionary* mFieldNameToValueMap;

}
-(id)init;
-(void)dealloc;
-(void)setCurrentField:(id)arg1 ;
-(void)cacheValueforCurrentField:(id)arg1 ;
-(id)valueForCurrentField;
-(id)valueForField:(id)arg1 ;
@end
