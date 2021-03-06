/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassbookSettingsDataSource <NSObject>
@optional
-(id)deviceName;
-(BOOL)hasFelicaSecureElement;
-(id)setupFeaturedNetworksForDevice;
-(void)setDefaultExpressFelicaTransitPassIdentifier:(id)arg1 visibleViewController:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(id)setupDelegate;
-(id)passLibraryDataProvider;
-(id)paymentDataProvider;
-(id)optionsDelegate;
-(BOOL)secureElementIsProductionSigned;
-(BOOL)deviceInRestrictedMode;
-(BOOL)deviceSupportsInAppPayments;
-(id)secureElementID;

@end

