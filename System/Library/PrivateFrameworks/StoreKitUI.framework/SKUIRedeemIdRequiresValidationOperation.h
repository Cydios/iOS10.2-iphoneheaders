/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISDialogOperationDelegate.h>

@class NSString;

@interface SKUIRedeemIdRequiresValidationOperation : ISOperation <ISDialogOperationDelegate> {

	/*^block*/id _resultBlock;

}

@property (copy) id resultBlock;                                    //@synthesize resultBlock=_resultBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)setResultBlock:(id)arg1 ;
-(void)operation:(id)arg1 selectedButton:(id)arg2 ;
-(id)resultBlock;
-(id)_authenticationContext;
-(BOOL)_performAuthentication;
-(id)_subOperationWithBagKey:(id)arg1 ;
-(void)_logResultsForSuccess:(BOOL)arg1 shouldVerify:(BOOL)arg2 failureReason:(id)arg3 error:(id)arg4 ;
@end

