/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceOver/VoiceOver-Structs.h>
#import <UIKit/UIView.h>

@class UIVisualEffectView, UILabel;

@interface VOTEnabledBannerView : UIView {

	UIVisualEffectView* _effectView;
	UILabel* _bannerLabelView;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UILabel * bannerLabelView;                    //@synthesize bannerLabelView=_bannerLabelView - In the implementation block
-(void)setBannerLabelView:(UILabel *)arg1 ;
-(UILabel *)bannerLabelView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIVisualEffectView *)effectView;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
@end

