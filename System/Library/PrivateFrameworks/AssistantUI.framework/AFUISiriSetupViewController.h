/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/VTUITurnOnSiriViewDelegate.h>
#import <libobjc.A.dylib/SBUIPluginViewControllerInterface.h>

@protocol AFUISiriSetupViewControllerDelegate;
@class UIView, VTUITurnOnSiriView, _UIBackdropView, UIStatusBar, NSString;

@interface AFUISiriSetupViewController : UIViewController <VTUITurnOnSiriViewDelegate, SBUIPluginViewControllerInterface> {

	UIView* _contentView;
	VTUITurnOnSiriView* _setupView;
	_UIBackdropView* _backdropView;
	BOOL _backdropViewVisible;
	BOOL _visible;
	BOOL _lastTimeShown;
	id<AFUISiriSetupViewControllerDelegate> _delegate;
	UIStatusBar* _statusBar;

}

@property (setter=_setStatusBar:,getter=_statusBar,nonatomic,retain) UIStatusBar * statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISiriSetupViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL lastTimeShown;                                                           //@synthesize lastTimeShown=_lastTimeShown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<AFUISiriSetupViewControllerDelegate>)arg1 ;
-(id<AFUISiriSetupViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)isVisible;
-(void)_continueTapped:(id)arg1 ;
-(void)_laterTapped:(id)arg1 ;
-(void)_addStatusBar;
-(void)_removeStatusBar;
-(id)dimBackdropSettings;
-(void)_setBackdropVisible:(BOOL)arg1 ;
-(CGRect)_statusBarFrame;
-(void)_setStatusBar:(id)arg1 ;
-(id)_statusBar;
-(void)aboutSelectedInTurnOnSiriView:(id)arg1 ;
-(void)animateAppearanceFromContext:(id)arg1 ;
-(void)animateDisappearanceFromContext:(id)arg1 ;
-(void)setLastTimeShown:(BOOL)arg1 ;
-(BOOL)lastTimeShown;
@end

