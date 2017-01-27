/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKeyboardCandidateBarSegmentControl;

@interface UIKeyboardCandidatePageControl : UIView {

	UIKeyboardCandidateBarSegmentControl* _pageControl;
	BOOL _usingVerticalArrows;

}
+(id)imageWithColor:(id)arg1 size:(CGSize)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setUseVerticalArrows:(BOOL)arg1 ;
-(void)_changePage:(id)arg1 ;
-(void)updatePageControlWithStatus:(BOOL)arg1 rightControlButtonEnabled:(BOOL)arg2 ;
@end
