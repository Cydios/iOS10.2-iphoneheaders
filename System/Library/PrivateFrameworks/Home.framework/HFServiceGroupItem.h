/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>
#import <libobjc.A.dylib/HFCharacteristicWriteActionBuilderFactory.h>
#import <libobjc.A.dylib/HFServiceLikeBuilderCreating.h>

@protocol HFCharacteristicValueSource;
@class HMServiceGroup, NSSet, NSString;

@interface HFServiceGroupItem : HFItem <HFServiceLikeItem, HFCharacteristicWriteActionBuilderFactory, HFServiceLikeBuilderCreating> {

	id<HFCharacteristicValueSource> _valueSource;
	HMServiceGroup* _serviceGroup;
	NSSet* _serviceItemUUIDs;
	NSSet* _serviceItems;
	NSSet* _controlItems;

}

@property (nonatomic,retain) NSSet * serviceItemUUIDs;                                   //@synthesize serviceItemUUIDs=_serviceItemUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * serviceItems;                                       //@synthesize serviceItems=_serviceItems - In the implementation block
@property (nonatomic,retain) NSSet * controlItems;                                       //@synthesize controlItems=_controlItems - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) HMServiceGroup * serviceGroup;                            //@synthesize serviceGroup=_serviceGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
+(id)_combinedWriteErrorForError:(id)arg1 serviceGroupTitle:(id)arg2 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)services;
-(id)accessories;
-(HMServiceGroup *)serviceGroup;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(NSSet *)serviceItems;
-(void)setServiceItems:(NSSet *)arg1 ;
-(BOOL)_reloadServiceItems;
-(id)_aggregatedValueSource;
-(id)_initForCopyWithValueSource:(id)arg1 serviceGroup:(id)arg2 serviceItems:(id)arg3 controlItems:(id)arg4 ;
-(id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2 ;
-(id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2 ;
-(id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(/*^block*/id)arg2 ;
-(id)_mergedIconDescriptorForServiceItems:(id)arg1 ;
-(NSSet *)serviceItemUUIDs;
-(void)setServiceItemUUIDs:(NSSet *)arg1 ;
-(void)_updateControlItems;
-(BOOL)_isControlItem:(id)arg1 similarToControlItem:(id)arg2 ;
-(BOOL)_isControlItem:(id)arg1 identicalToControlItem:(id)arg2 ;
-(double)_averageNumericalValueForResultsKey:(id)arg1 inServiceItems:(id)arg2 ;
-(id)primaryStateControlItem;
-(id)incrementalStateControlItem;
-(id)allControlItems;
-(id)controlPanelItems;
-(id<HFHomeKitObject>)homeKitObject;
-(void)setControlItems:(NSSet *)arg1 ;
-(NSSet *)controlItems;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)initWithValueSource:(id)arg1 serviceGroup:(id)arg2 ;
-(BOOL)containsActionableCharacteristics;
-(id)currentStateActionBuildersForHome:(id)arg1 ;
@end

