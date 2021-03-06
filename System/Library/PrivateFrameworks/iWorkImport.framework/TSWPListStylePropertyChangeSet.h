/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSSStylePropertyChangeSet.h>

@class TSSSpecColor, TSSSpecString, TSWPSpecListStyleFloatArray, TSWPSpecListStyleListLabelGeometryArray, TSWPSpecListStyleImageDataArray, TSWPSpecListStyleListNumberTypeArray, TSWPSpecListStyleBoolArray, TSDSpecShadow, TSWPSpecListStyleStringArray, TSWPSpecListStyleListLabelTypeArray, TSSSpecInteger;

@interface TSWPListStylePropertyChangeSet : TSSStylePropertyChangeSet {

	TSSSpecColor* _fontColor;
	TSSSpecString* _fontName;
	TSWPSpecListStyleFloatArray* _listClassicTextIndentArray;
	TSWPSpecListStyleListLabelGeometryArray* _listLabelGeometryArray;
	TSWPSpecListStyleImageDataArray* _listLabelImageDataArray;
	TSWPSpecListStyleFloatArray* _listLabelIndentArray;
	TSWPSpecListStyleListNumberTypeArray* _listLabelNumberArray;
	TSWPSpecListStyleBoolArray* _listLabelTieredNumberArray;
	TSDSpecShadow* _textShadow;
	TSWPSpecListStyleStringArray* _listLabelStringArray;
	TSWPSpecListStyleFloatArray* _listTextIndentArray;
	TSWPSpecListStyleListLabelTypeArray* _listLabelTypeArray;
	TSSSpecInteger* _writingDirection;
	BOOL _definedFontColor;
	BOOL _definedFontName;
	BOOL _definedListClassicTextIndentArray;
	BOOL _definedListLabelGeometryArray;
	BOOL _definedListLabelImageDataArray;
	BOOL _definedListLabelIndentArray;
	BOOL _definedListLabelNumberArray;
	BOOL _definedListLabelTieredNumberArray;
	BOOL _definedTextShadow;
	BOOL _definedListLabelStringArray;
	BOOL _definedListTextIndentArray;
	BOOL _definedListLabelTypeArray;
	BOOL _definedWritingDirection;

}
-(void)setBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)setSpec:(id)arg1 forProperty:(int)arg2 ;
-(void)setUnsetSpecForProperty:(int)arg1 ;
-(void)enumerateDefinedPropertiesWithBlock:(/*^block*/id)arg1 ;
@end

