/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface EKUIBlurryView : UIView {

	BOOL _hasActivated;
	BOOL _shouldRasterizeForTransition;

}

@property (assign) double blurRadius; 
@property (assign,nonatomic) BOOL shouldRasterizeForTransition;              //@synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition - In the implementation block
-(void)setBlurRadius:(double)arg1 ;
-(double)blurRadius;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(BOOL)shouldRasterizeForTransition;
-(void)setShouldRasterizeForTransition:(BOOL)arg1 ;
-(void)_activateBlurring;
@end

