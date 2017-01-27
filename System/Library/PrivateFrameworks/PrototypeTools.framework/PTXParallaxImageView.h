/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTXParallaxView.h>

@class UIImageView, UIImage;

@interface PTXParallaxImageView : PTXParallaxView {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImage * image; 
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(id)initWithImage:(id)arg1 parallaxController:(id)arg2 settings:(id)arg3 ;
@end
