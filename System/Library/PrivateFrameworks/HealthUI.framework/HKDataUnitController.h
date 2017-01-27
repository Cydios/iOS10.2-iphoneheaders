/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKWheelchairUseCharacteristicCacheObserver.h>

@class _HKWheelchairUseCharacteristicCache, NSArray, NSDictionary;

@interface HKDataUnitController : NSObject <_HKWheelchairUseCharacteristicCacheObserver> {

	_HKWheelchairUseCharacteristicCache* _wheelchairUseCharacteristicCache;
	NSArray* _dataUnits;
	NSDictionary* _dataUnitsByIdentifier;
	NSDictionary* _dataUnitsByCategoryIdentifier;
	NSDictionary* _dataUnitsByObjectType;

}
+(id)sharedInstance;
-(id)init;
-(void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(BOOL)arg2 ;
-(id)dataUnitForTypeUnifyingBloodPressureTypes:(id)arg1 ;
-(id)dataUnitForType:(id)arg1 ;
-(void)setWheelchairUseCharacteristicCache:(id)arg1 ;
-(id)allDataUnits;
-(id)dataUnitWithIdentifier:(id)arg1 ;
-(id)dataUnitsForCategoryIdentifier:(long long)arg1 ;
@end
