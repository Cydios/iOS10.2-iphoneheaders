/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/FlickrSettings.bundle/FlickrSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount;

@interface SLFlickrAccountEditViewController : ACUIViewController {

	ACAccount* _account;
	BOOL _isPasswordDirty;

}
-(id)_usernameWithSpecifier:(id)arg1 ;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(void)_updatePasswordWithValueFromTextField;
-(void)_handlePasswordChangeWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_showAlertForError:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_deleteButtonTapped:(id)arg1 ;
-(void)_updateDoneButton;
-(void)setPassword:(id)arg1 ;
-(id)specifiers;
@end

