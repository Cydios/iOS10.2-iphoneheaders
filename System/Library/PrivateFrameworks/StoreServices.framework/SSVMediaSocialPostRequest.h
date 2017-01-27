/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSVMediaSocialPostDescription, NSString;

@interface SSVMediaSocialPostRequest : SSRequest <SSXPCCoding> {

	SSVMediaSocialPostDescription* _postDescription;

}

@property (nonatomic,readonly) SSVMediaSocialPostDescription * postDescription;              //@synthesize postDescription=_postDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPostDescription:(id)arg1 ;
-(SSVMediaSocialPostDescription *)postDescription;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
@end
