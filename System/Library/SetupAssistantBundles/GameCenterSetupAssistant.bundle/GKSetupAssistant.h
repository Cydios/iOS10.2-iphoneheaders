/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SetupAssistantBundles/GameCenterSetupAssistant.bundle/GameCenterSetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AASetupAssistantDelegateService.h>

@interface GKSetupAssistant : NSObject <AASetupAssistantDelegateService> {

	BOOL _cancelled;

}

@property (assign) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setupOperationFailed;
@end
