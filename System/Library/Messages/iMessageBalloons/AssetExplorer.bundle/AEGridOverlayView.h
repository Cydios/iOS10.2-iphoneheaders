/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@class UIView, AEGridOverlayConfiguration, NSString;

@interface AEGridOverlayView : UIView <PXUIViewBasicTile, PXReusableObject> {

	AEGridOverlayConfiguration* _overlayConfiguration;

}

@property (setter=_setOverlayConfiguration:,nonatomic,retain) AEGridOverlayConfiguration * overlayConfiguration;              //@synthesize overlayConfiguration=_overlayConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
+(id)cloudBadge;
+(id)gridOverlayLayoutInfo;
+(id)gradientShadow;
+(id)videoBadge;
-(void)_setOverlayConfiguration:(id)arg1 ;
-(CGRect)_cloudRect;
-(AEGridOverlayConfiguration *)overlayConfiguration;
-(CGRect)_videoRect;
-(id)init;
-(void)drawRect:(CGRect)arg1 ;
-(UIView *)view;
-(void)prepareForReuse;
-(void)becomeReusable;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
@end

