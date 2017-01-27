/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>

@class TKTonePickerViewController;

@interface ABTonePickerViewController : ABPickerViewController {

	TKTonePickerViewController* _tonePickerViewController;

}

@property (nonatomic,retain,readonly) TKTonePickerViewController * tonePickerViewController; 
-(id)init;
-(void)loadView;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(id)initWithAlertType:(long long)arg1 ;
-(double)ab_heightToFitForViewInPopoverView;
-(TKTonePickerViewController *)tonePickerViewController;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)ringtoneSaveButtonClicked:(id)arg1 ;
-(void)setStyleProvider:(id)arg1 ;
@end
