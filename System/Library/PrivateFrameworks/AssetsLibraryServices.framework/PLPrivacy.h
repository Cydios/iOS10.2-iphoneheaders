/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLPrivacy : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _authStatus;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isPhotosAccessAllowedWithScope:(long long)arg1 promptIfNeededWithHandler:(/*^block*/id)arg2 ;
-(BOOL)_isPhotosAccessAllowedWithScope:(long long)arg1 forceHandler:(BOOL)arg2 accessAllowedHandler:(/*^block*/id)arg3 ;
-(void)photoAccessPowersActive;
-(BOOL)isPhotoLibraryReadAccessAllowed;
-(BOOL)isPhotosTCCAccessAllowed;
-(void)isPhotosAccessAllowedWithScope:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(int)photosTCCAccessStatus;
-(BOOL)isPhotosTCCAccessRestricted;
-(BOOL)isPhotosTCCAccessNotAllowed;
-(BOOL)isPhotoLibrarySharingOrModificationAllowed;
@end

