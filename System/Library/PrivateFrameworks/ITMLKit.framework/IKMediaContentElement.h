/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKAppPlayerBridge;

@interface IKMediaContentElement : IKViewElement {

	IKAppPlayerBridge* _playerBridge;

}

@property (nonatomic,readonly) IKAppPlayerBridge * playerBridge;              //@synthesize playerBridge=_playerBridge - In the implementation block
+(id)supportedFeatures;
-(IKAppPlayerBridge *)playerBridge;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
@end

