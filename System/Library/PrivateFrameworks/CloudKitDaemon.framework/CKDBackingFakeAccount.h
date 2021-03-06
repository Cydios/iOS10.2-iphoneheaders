/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDBackingAccount.h>

@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSObject;

@interface CKDBackingFakeAccount : CKDBackingAccount {

	NSString* _dsid;
	NSString* _altDsid;
	NSString* _identifier;
	NSString* _primaryEmail;
	NSString* _password;
	NSDictionary* _accountBag;
	NSObject*<OS_dispatch_queue> _fakeAccountInfoQueue;

}

@property (nonatomic,retain) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * primaryEmail;                                        //@synthesize primaryEmail=_primaryEmail - In the implementation block
@property (nonatomic,retain) NSString * password;                                            //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * dsid;                                                //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * altDsid;                                             //@synthesize altDsid=_altDsid - In the implementation block
@property (nonatomic,retain) NSDictionary * accountBag;                                      //@synthesize accountBag=_accountBag - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fakeAccountInfoQueue;              //@synthesize fakeAccountInfoQueue=_fakeAccountInfoQueue - In the implementation block
+(id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 ;
+(Class)_platformBackingAccountClass;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)username;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(BOOL)canAuthWithCloudKit;
-(NSString *)primaryEmail;
-(BOOL)isDataclassEnabled:(id)arg1 ;
-(BOOL)cloudPhotosIsEnabled;
-(BOOL)cloudKitIsEnabled;
-(BOOL)iCloudDriveAllowsCellularAccess;
-(BOOL)isFakeAccount;
-(void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)saveVerifiedAccountInStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAccountProperiesInStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)cloudKitAuthTokenWithError:(id*)arg1 ;
-(id)iCloudAuthTokenWithError:(id*)arg1 ;
-(void)setAltDsid:(NSString *)arg1 ;
-(void)setAccountBag:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)fakeAccountInfoQueue;
-(id)_initFakeAccountWithEmail:(id)arg1 password:(id)arg2 ;
-(NSDictionary *)accountBag;
-(id)ckAccount;
-(NSString *)altDsid;
-(id)accountPropertiesForDataclass:(id)arg1 ;
-(void)setPrimaryEmail:(NSString *)arg1 ;
-(void)setFakeAccountInfoQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
@end

