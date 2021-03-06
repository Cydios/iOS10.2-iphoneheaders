/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface ACMAlertView : UIAlertView <UIAlertViewDelegate> {

	id _acmAlertViewDelegate;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;                                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) id<acmAlertViewDelegateProtocol> acmAlertViewDelegate;              //@synthesize acmAlertViewDelegate=_acmAlertViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setAlpha:(double)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)showWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAcmAlertViewDelegate:(id<acmAlertViewDelegateProtocol>)arg1 ;
-(id<acmAlertViewDelegateProtocol>)acmAlertViewDelegate;
-(void)dismissAlert;
@end

