/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/PKMicaResizableView.h>

@class CALayer, NSString;

@interface PKMicaLayer : CALayer <PKMicaResizableView> {

	CALayer* _rootLayer;

}

@property (nonatomic,readonly) CALayer * rootLayer;                 //@synthesize rootLayer=_rootLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)dealloc;
-(CALayer *)rootLayer;
-(void)layoutSublayers;
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(double)pointScaleToMatchBoundsSize:(CGSize)arg1 ;
-(CGSize)boundsSizeToMatchPointScale:(double)arg1 ;
@end

