/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListController.h>

@interface CertTrustSettings : PSListController {

	id _profileListChangedNotificationObserver;

}

@property (nonatomic,retain) id profileListChangedNotificationObserver;              //@synthesize profileListChangedNotificationObserver=_profileListChangedNotificationObserver - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setProfileListChangedNotificationObserver:(id)arg1 ;
-(id)profileListChangedNotificationObserver;
-(id)trustVersionString:(id)arg1 ;
-(id)specifierForTrustSettings:(SecCertificateRef)arg1 isRestricted:(BOOL)arg2 ;
-(void)setFullTrustEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)isFullTrustEnabled:(id)arg1 ;
-(id)specifiers;
@end
