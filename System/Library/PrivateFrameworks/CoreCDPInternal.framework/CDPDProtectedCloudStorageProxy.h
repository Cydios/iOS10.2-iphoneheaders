/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPDProtectedCloudStorageProxy <NSObject>
@required
-(BOOL)pcsIdentitySetIsInICDPNetwork:(PCSIdentitySetDataRef)arg1 error:(id*)arg2;
-(BOOL)pcsIdentitySetIsInICDPLocal:(PCSIdentitySetDataRef)arg1 error:(id*)arg2;
-(PCSIdentitySetDataRef)pcsIdentityCreateWithInfo:(id)arg1 error:(id*)arg2;
-(PCSIdentitySetDataRef)pcsIdentitySetupWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)pcsIdentityMigrateToiCDPWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)pcsIdentityMigrateToStingrayWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)pcsIdentityMigrateDropStingrayWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)pcsIdentityMigrateRestoreHSMWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)pcsIdentityPlesioNetworkedWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)pcsIdentityPlesioLocalWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)pcsIdentityMigrateCloseDoorWithInfo:(id)arg1 error:(id*)arg2;

@end

