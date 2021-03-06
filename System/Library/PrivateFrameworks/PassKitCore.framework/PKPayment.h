/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentToken, PKContact, PKShippingMethod;

@interface PKPayment : NSObject <NSSecureCoding> {

	PKPaymentToken* _token;
	PKContact* _billingContact;
	PKContact* _shippingContact;
	PKShippingMethod* _shippingMethod;

}

@property (nonatomic,retain) PKContact * billingContact;                     //@synthesize billingContact=_billingContact - In the implementation block
@property (nonatomic,retain) PKContact * shippingContact;                    //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,retain) PKPaymentToken * token;                         //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) PKShippingMethod * shippingMethod;              //@synthesize shippingMethod=_shippingMethod - In the implementation block
@property (nonatomic,readonly) const void* billingAddress; 
@property (nonatomic,readonly) const void* shippingAddress; 
+(BOOL)supportsSecureCoding;
+(long long)version;
+(id)paymentWithProtobuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(PKPaymentToken *)token;
-(void)setToken:(PKPaymentToken *)arg1 ;
-(PKContact *)billingContact;
-(id)protobuf;
-(const void*)billingAddress;
-(const void*)shippingAddress;
-(PKShippingMethod *)shippingMethod;
-(PKContact *)shippingContact;
-(void)setShippingMethod:(PKShippingMethod *)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(void)setShippingContact:(PKContact *)arg1 ;
-(void)setBillingContact:(PKContact *)arg1 ;
@end

