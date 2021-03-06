/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface ZWUIMinimapView : UIView {

	UIView* _zoomedView;
	BOOL _enabled;
	CGRect _zoomedRect;

}

@property (assign,nonatomic) CGRect zoomedRect;              //@synthesize zoomedRect=_zoomedRect - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
-(void)hideSelf;
-(void)setZoomedRect:(CGRect)arg1 ;
-(void)setZoomedRect:(CGRect)arg1 screenRect:(CGRect)arg2 ;
-(CGRect)zoomedRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
@end

