/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIActivityIndicatorView;

@interface _TVLoadingView : UIView {

	BOOL _shouldShowSpinner;
	UIView* _loadingTitleLabel;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,retain) UIView * loadingTitleLabel;                         //@synthesize loadingTitleLabel=_loadingTitleLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSpinner;                             //@synthesize shouldShowSpinner=_shouldShowSpinner - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(UIActivityIndicatorView *)spinnerView;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(void)_showSpinner;
-(UIView *)loadingTitleLabel;
-(void)setLoadingTitleLabel:(UIView *)arg1 ;
-(BOOL)shouldShowSpinner;
-(void)setShouldShowSpinner:(BOOL)arg1 ;
@end

