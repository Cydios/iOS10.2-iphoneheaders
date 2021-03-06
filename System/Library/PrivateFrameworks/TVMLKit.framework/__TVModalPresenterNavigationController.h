/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <TVMLKit/_TVModalPresenterFocusing.h>

@class UIViewController, NSMapTable, NSArray, NSString, UIView;

@interface __TVModalPresenterNavigationController : UINavigationController <UIGestureRecognizerDelegate, _TVModalPresenterFocusing> {

	UIViewController* _rootViewController;
	NSMapTable* _pushCompletionBlocks;
	NSMapTable* _popCompletionBlocks;
	BOOL _isModalNavVisisble;
	NSArray* _previousViewControllers;

}

@property (nonatomic,retain) NSArray * previousViewControllers;                        //@synthesize previousViewControllers=_previousViewControllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)reset;
-(BOOL)shouldAutorotate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)popViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPreviousViewControllers:(NSArray *)arg1 ;
-(void)_dismissForLastViewController:(BOOL)arg1 ;
-(NSArray *)previousViewControllers;
-(void)_dismissForLastViewController;
@end

