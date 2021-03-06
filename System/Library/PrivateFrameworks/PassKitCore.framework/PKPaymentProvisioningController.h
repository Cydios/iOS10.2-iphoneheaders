/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentWebServiceDelegate.h>

@class NSMutableSet, NSTimer, NSMutableArray, NSString, PKPaymentWebService, PKPaymentSetupProductModel, PKPaymentRequirementsResponse, PKPaymentEligibilityResponse, PKPaymentProvisioningResponse, PKPaymentPass, NSArray, NSSet;

@interface PKPaymentProvisioningController : NSObject <PKPaymentWebServiceDelegate> {

	NSMutableSet* _tasks;
	NSTimer* _descriptionTimer;
	NSMutableArray* _associatedCredentials;
	BOOL _provisioningUserInterfaceIsVisible;
	BOOL _proxyTargetDeviceWebServiceInUse;
	NSString* _provisioningNonce;
	NSString* _productIdentifier;
	PKPaymentWebService* _webService;
	long long _state;
	NSString* _localizedProgressDescription;
	PKPaymentSetupProductModel* _paymentSetupProductModel;
	PKPaymentRequirementsResponse* _requirementsResponse;
	PKPaymentEligibilityResponse* _eligibilityResponse;
	PKPaymentProvisioningResponse* _provisioningResponse;
	PKPaymentPass* _provisionedPass;
	NSArray* _moreInfoItems;
	NSSet* _automaticExpressModes;

}

@property (nonatomic,readonly) BOOL suppressDefaultCardholderNameField; 
@property (nonatomic,readonly) PKPaymentWebService * webService;                                   //@synthesize webService=_webService - In the implementation block
@property (assign,nonatomic) long long state;                                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedProgressDescription;                       //@synthesize localizedProgressDescription=_localizedProgressDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * associatedCredentials;                               //@synthesize associatedCredentials=_associatedCredentials - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupProductModel * paymentSetupProductModel;              //@synthesize paymentSetupProductModel=_paymentSetupProductModel - In the implementation block
@property (nonatomic,readonly) PKPaymentRequirementsResponse * requirementsResponse;               //@synthesize requirementsResponse=_requirementsResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * productIdentifier;                                  //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) PKPaymentEligibilityResponse * eligibilityResponse;                 //@synthesize eligibilityResponse=_eligibilityResponse - In the implementation block
@property (nonatomic,readonly) PKPaymentProvisioningResponse * provisioningResponse;               //@synthesize provisioningResponse=_provisioningResponse - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * provisionedPass;                                    //@synthesize provisionedPass=_provisionedPass - In the implementation block
@property (nonatomic,readonly) NSArray * moreInfoItems;                                            //@synthesize moreInfoItems=_moreInfoItems - In the implementation block
@property (nonatomic,readonly) NSSet * automaticExpressModes;                                      //@synthesize automaticExpressModes=_automaticExpressModes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)alertForDisplayableError:(id)arg1 ;
-(id)alertForDisplayableError:(id)arg1 earlyExitHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(void)retrieveRemoteCredentials:(/*^block*/id)arg1 ;
-(void)registerDevice:(/*^block*/id)arg1 ;
-(void)validatePreconditions:(/*^block*/id)arg1 ;
-(long long)_defaultResetState;
-(void)_setState:(long long)arg1 notify:(BOOL)arg2 ;
-(void)_validatePreconditionsWhileRetrievingRemoteCredentials:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_registerWhileRetrievingRemoteCredentials:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_associateCredential:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_addAssociatedCredential:(id)arg1 ;
-(void)_queryEligibilityForCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queryRequirementsForCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_filterPaymentSetupProducts:(id)arg1 ;
-(void)_requestEligibility:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_requestRequirements:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_setLocalizedProgressDescription:(id)arg1 ;
-(void)_passAlreadyProvisioned;
-(void)_provisioningNonceWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestProvisioning:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_downloadMoreInfoItemURLs:(id)arg1 withMetadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleProvisioningError:(id)arg1 forRequest:(id)arg2 ;
-(id)_displayableErrorOverrideForUnderlyingError:(id)arg1 ;
-(void)_updateLocalizedProgressAndInvalidateTimer;
-(void)paymentWebService:(id)arg1 didQueueTSMConnectionForTaskID:(unsigned long long)arg2 ;
-(void)paymentWebService:(id)arg1 didCompleteTSMConnectionForTaskID:(unsigned long long)arg2 ;
-(BOOL)provisioningUserInterfaceIsVisible;
-(PKPaymentProvisioningResponse *)provisioningResponse;
-(NSString *)productIdentifier;
-(id)initWithWebService:(id)arg1 ;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(PKPaymentWebService *)webService;
-(PKPaymentRequirementsResponse *)requirementsResponse;
-(void)requestRequirements:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestEligibility:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(PKPaymentEligibilityResponse *)eligibilityResponse;
-(void)acceptTerms;
-(void)requestProvisioning:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(PKPaymentPass *)provisionedPass;
-(BOOL)suppressDefaultCardholderNameField;
-(void)resolveRequirementsUsingProduct:(id)arg1 ;
-(void)validatePreconditionsAndRegister:(/*^block*/id)arg1 ;
-(id)displayableErrorForError:(id)arg1 ;
-(NSArray *)moreInfoItems;
-(void)associateCredentials:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)validatePreconditionsRegisterAndAssociateRemoteCredentials:(/*^block*/id)arg1 ;
-(PKPaymentSetupProductModel *)paymentSetupProductModel;
-(void)updatePaymentSetupProductModelWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resolveAmbiguousRequirementsWithProductIdentifier:(id)arg1 ;
-(void)removeProvisionedPass;
-(NSSet *)automaticExpressModes;
-(id)displayableErrorForProvisioningError:(id)arg1 ;
-(NSString *)localizedProgressDescription;
-(NSArray *)associatedCredentials;
-(void)requestRemoteCredentials:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

