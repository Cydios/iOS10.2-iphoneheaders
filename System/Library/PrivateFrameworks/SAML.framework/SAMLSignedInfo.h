/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAML-Structs.h>
#import <SAML/SAMLBaseElement.h>

@class NSString, NSNumber, NSArray;

@interface SAMLSignedInfo : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * canonicalizationMethod; 
@property (nonatomic,readonly) NSNumber * signatureMethodLength; 
@property (nonatomic,readonly) NSString * signatureMethod; 
@property (nonatomic,readonly) NSArray * references; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(NSArray *)references;
-(xmlNode*)xmlNode:(id*)arg1 ;
-(NSString *)canonicalizationMethod;
-(NSNumber *)signatureMethodLength;
-(NSString *)signatureMethod;
@end

