/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface MICodeSigningInfo : NSObject {

	BOOL _validatedByProfile;
	BOOL _validatedByUPP;
	BOOL _isAdHocSigned;
	BOOL _validatedByFreeProfile;
	NSString* _signerIdentity;
	NSString* _signerOrganization;
	NSString* _codeInfoIdentifier;
	NSDictionary* _entitlements;

}

@property (nonatomic,copy,readonly) NSString * signerIdentity;                            //@synthesize signerIdentity=_signerIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * signerOrganization;                        //@synthesize signerOrganization=_signerOrganization - In the implementation block
@property (nonatomic,copy,readonly) NSString * codeInfoIdentifier;                        //@synthesize codeInfoIdentifier=_codeInfoIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * entitlements;                          //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,readonly) BOOL validatedByProfile;                                   //@synthesize validatedByProfile=_validatedByProfile - In the implementation block
@property (nonatomic,readonly) BOOL validatedByUPP;                                       //@synthesize validatedByUPP=_validatedByUPP - In the implementation block
@property (nonatomic,readonly) BOOL isAdHocSigned;                                        //@synthesize isAdHocSigned=_isAdHocSigned - In the implementation block
@property (nonatomic,readonly) BOOL validatedByFreeProfile;                               //@synthesize validatedByFreeProfile=_validatedByFreeProfile - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
-(id)initWithSignerIdentity:(id)arg1 signerOrganization:(id)arg2 codeInfoIdentifier:(id)arg3 entitlements:(id)arg4 validatedByProfile:(BOOL)arg5 validatedByUPP:(BOOL)arg6 isAdHocSigned:(BOOL)arg7 validatedByFreeProfile:(BOOL)arg8 ;
-(NSString *)signerOrganization;
-(NSString *)codeInfoIdentifier;
-(BOOL)validatedByProfile;
-(BOOL)validatedByUPP;
-(BOOL)isAdHocSigned;
-(BOOL)validatedByFreeProfile;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSDictionary *)entitlements;
-(NSString *)signerIdentity;
@end
