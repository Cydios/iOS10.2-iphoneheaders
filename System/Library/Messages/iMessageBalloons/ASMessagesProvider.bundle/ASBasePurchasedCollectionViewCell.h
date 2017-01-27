/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <StoreKitUI/SKUIItemCollectionViewCell.h>

@class ASPurchasedCellLayout;

@interface ASBasePurchasedCollectionViewCell : SKUIItemCollectionViewCell {

	ASPurchasedCellLayout* _layout;

}

@property (nonatomic,readonly) ASPurchasedCellLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(ASPurchasedCellLayout *)layout;
-(void)configureForItem:(id)arg1 clientContext:(id)arg2 ;
@end
