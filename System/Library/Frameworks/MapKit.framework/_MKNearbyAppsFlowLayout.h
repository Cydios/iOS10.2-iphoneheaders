/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface _MKNearbyAppsFlowLayout : UICollectionViewFlowLayout {

	BOOL _snapsToItemBoundaries;
	BOOL _snapsToItemCenters;

}

@property (assign,nonatomic) BOOL snapsToItemBoundaries;              //@synthesize snapsToItemBoundaries=_snapsToItemBoundaries - In the implementation block
@property (assign,nonatomic) BOOL snapsToItemCenters;                 //@synthesize snapsToItemCenters=_snapsToItemCenters - In the implementation block
+(double)snapToBoundariesDecelerationRate;
-(id)init;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setSnapsToItemBoundaries:(BOOL)arg1 ;
-(BOOL)snapsToItemBoundaries;
-(BOOL)snapsToItemCenters;
-(void)setSnapsToItemCenters:(BOOL)arg1 ;
@end

