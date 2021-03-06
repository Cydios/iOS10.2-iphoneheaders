/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FacebookSettings/FacebookSettings-Structs.h>
#import <AccountsUI/ACUIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SLFacebookRegistrationInfoPromptDelegate;
@class SLFacebookRegistrationInfo, UITextField, NSString;

@interface SLFacebookRegistrationInfoPrompt : ACUIViewController <UITextFieldDelegate> {

	SLFacebookRegistrationInfo* _registrationInfo;
	UITextField* _firstTextField;
	id<SLFacebookRegistrationInfoPromptDelegate> _delegate;

}

@property (nonatomic,retain) id<SLFacebookRegistrationInfoPromptDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showErrorMessage:(id)arg1 withTitle:(id)arg2 ;
-(void)updateRegistrationInfo;
-(BOOL)isReadyToValidate;
-(void)refreshNextButton;
-(void)setDelegate:(id<SLFacebookRegistrationInfoPromptDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<SLFacebookRegistrationInfoPromptDelegate>)delegate;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)validate;
-(void)textFieldValueDidChange:(id)arg1 ;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)returnPressedAtEnd;
-(void)nextButtonTapped:(id)arg1 ;
@end

