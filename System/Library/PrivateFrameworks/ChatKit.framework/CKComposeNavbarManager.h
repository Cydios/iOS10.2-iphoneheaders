/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKComposeNavbarManagerContentView, CKComposeNavbarCanvasViewController, CKNavbarCanvasViewController, UIButton;

@interface CKComposeNavbarManager : NSObject {

	CKComposeNavbarManagerContentView* _contentView;
	CKComposeNavbarCanvasViewController* _defaultNavbarCanvasViewController;
	CKNavbarCanvasViewController* _avatarNavbarCanvasViewController;

}

@property (nonatomic,retain) CKComposeNavbarManagerContentView * contentView;                                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) CKComposeNavbarCanvasViewController * defaultNavbarCanvasViewController;              //@synthesize defaultNavbarCanvasViewController=_defaultNavbarCanvasViewController - In the implementation block
@property (nonatomic,retain) CKNavbarCanvasViewController * avatarNavbarCanvasViewController;                      //@synthesize avatarNavbarCanvasViewController=_avatarNavbarCanvasViewController - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton; 
-(void)setContentView:(CKComposeNavbarManagerContentView *)arg1 ;
-(id)init;
-(CKComposeNavbarManagerContentView *)contentView;
-(UIButton *)cancelButton;
-(void)updateTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setupDefaultNavbarCanvasViewController;
-(CKComposeNavbarCanvasViewController *)defaultNavbarCanvasViewController;
-(void)setDefaultNavbarCanvasViewController:(CKComposeNavbarCanvasViewController *)arg1 ;
-(void)setAvatarNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 ;
-(void)_setupAvatarNavBarViewControllerWithConversation:(id)arg1 shouldShowBackButtonView:(BOOL)arg2 ;
-(CKNavbarCanvasViewController *)avatarNavbarCanvasViewController;
-(void)commitTransitionAnimationWithConversation:(id)arg1 shouldShowBackButtonView:(BOOL)arg2 ;
@end
