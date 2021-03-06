/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <iWorkImport/TSUMultipleChoiceListChoiceProviding.h>

@class NSArray;

@interface TSTPopUpMenuModel : TSPObject <NSCopying, TSUMultipleChoiceListChoiceProviding> {

	NSArray* mItems;
	unsigned long long mCount;

}
+(BOOL)needsObjectUUID;
+(id)p_cellValueFromCellWithCustomFormat:(id)arg1 locale:(id)arg2 ;
+(id)p_cellValueFromCell:(id)arg1 locale:(id)arg2 ;
+(void)p_appendChoices:(id)arg1 uniquelyToChoices:(id)arg2 ;
+(id)p_PopUpMenuModelDefaultWithContext:(id)arg1 locale:(id)arg2 ;
+(id)popupMenuModelFromTable:(id)arg1 region:(id)arg2 initialValue:(int*)arg3 overflow:(BOOL*)arg4 ;
+(id)popupMenuModelDeletingItemFromModel:(id)arg1 index:(unsigned long long)arg2 ;
+(id)popupMenuModelEditingItemInModel:(id)arg1 index:(unsigned long long)arg2 newContent:(id)arg3 ;
+(id)popupMenuModelReorderingModel:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)didInitFromSOS;
-(void)saveToArchive:(PopUpMenuModel*)arg1 archiver:(id)arg2 ;
-(int)valueTypeOfItemAtIndex:(unsigned long long)arg1 ;
-(id)popUpItemFromString:(id)arg1 ;
-(SCD_Struct_TS49)formatAtIndex:(unsigned long long)arg1 ;
-(id)popUpItemFromDate:(id)arg1 format:(SCD_Struct_TS49)arg2 ;
-(id)popUpItemFromNumber:(double)arg1 format:(SCD_Struct_TS49)arg2 ;
-(id)initWithItems:(id)arg1 context:(id)arg2 ;
-(void)loadFromArchive:(const PopUpMenuModel*)arg1 ;
-(BOOL)isEqualToChoices:(id)arg1 ;
-(BOOL)booleanAtIndex:(unsigned long long)arg1 ;
-(int)p_mcListTypeForArgType:(int)arg1 ;
-(int)p_mcListTypeOfListItem:(id)arg1 ;
-(id)p_listItemAtIndex:(unsigned long long)arg1 ;
-(double)p_numberForListItem:(id)arg1 ;
-(id)p_stringForListItem:(id)arg1 ;
-(id)p_dateForListItem:(id)arg1 ;
-(BOOL)p_booleanForListItem:(id)arg1 ;
-(id)displayStringAtIndex:(unsigned long long)arg1 ;
-(id)popUpItemFromBoolean:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)dateAtIndex:(unsigned long long)arg1 ;
-(double)numberAtIndex:(unsigned long long)arg1 ;
-(id)choices;
@end

