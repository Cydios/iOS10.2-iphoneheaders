/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _TVCommonSenseView, IKViewElement;

@interface _TVCommonSenseTemplateController : UIViewController {

	_TVCommonSenseView* _commonSenseView;
	IKViewElement* _templateElement;

}

@property (nonatomic,retain) _TVCommonSenseView * commonSenseView;              //@synthesize commonSenseView=_commonSenseView - In the implementation block
@property (nonatomic,retain) IKViewElement * templateElement;                   //@synthesize templateElement=_templateElement - In the implementation block
-(void)loadView;
-(IKViewElement *)templateElement;
-(void)_loadTemplate;
-(void)_updateHeaderWithElement:(id)arg1 ;
-(id)_infoTableFromElement:(id)arg1 ;
-(void)_updateFooterWithElement:(id)arg1 ;
-(_TVCommonSenseView *)commonSenseView;
-(void)updateWithCommonSenseTemplate:(id)arg1 ;
-(void)setCommonSenseView:(_TVCommonSenseView *)arg1 ;
-(void)setTemplateElement:(IKViewElement *)arg1 ;
@end

