/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIWebViewPrivateDelegate.h>
#import <libobjc.A.dylib/VSMessageQueueDelegate.h>
#import <libobjc.A.dylib/VSWebAuthenticationViewController.h>
@class VSWebAuthenticationViewModel;


@protocol VSWebAuthenticationViewController <VSAuthenticationViewController>
@property (nonatomic,retain) VSWebAuthenticationViewModel * viewModel; 
@required
-(VSWebAuthenticationViewModel *)viewModel;
-(void)setViewModel:(id)arg1;

@end


@protocol VSAuthenticationViewControllerDelegate;
@class VSWebAuthenticationViewModel, NSString, VSViewModel;

@interface VSWebAuthenticationViewController : UIViewController <UIWebViewDelegate, UIWebViewPrivateDelegate, VSMessageQueueDelegate, VSWebAuthenticationViewController> {

	BOOL _cancellationAllowed;
	id<VSAuthenticationViewControllerDelegate> _delegate;
	VSWebAuthenticationViewModel* _viewModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<VSAuthenticationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;                   //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
@property (nonatomic,readonly) VSViewModel * viewModel; 
@property (nonatomic,readonly) CGSize preferredLogoSize; 
-(void)setDelegate:(id<VSAuthenticationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<VSAuthenticationViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)webView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(VSViewModel *)viewModel;
-(void)setViewModel:(VSViewModel *)arg1 ;
-(void)setCancellationAllowed:(BOOL)arg1 ;
-(void)_startObservingViewModel:(id)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(void)_sendMessage:(id)arg1 ;
-(void)_sendMessages:(id)arg1 ;
-(void)_retrieveMessages;
-(id)_canonicalRequestForRequest:(id)arg1 ;
-(void)didAddMessagesToMessageQueue:(id)arg1 ;
-(BOOL)isCancellationAllowed;
-(void)_cancelButtonPressed:(id)arg1 ;
@end

