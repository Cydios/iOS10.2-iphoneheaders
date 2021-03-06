/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonCalDAV/MobileCalDAVDaemonAccount.h>

@class NSString;

@interface MobileCalDAViCloudDaemonAccount : MobileCalDAVDaemonAccount {

	NSString* _host;
	int _useSSL;
	long long _port;

}
-(id)principalURL;
-(void)setUseSSL:(BOOL)arg1 ;
-(id)host;
-(long long)port;
-(void)setHost:(id)arg1 ;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(id)getAppleIDSession;
-(BOOL)useSSL;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(BOOL)supportsReminders;
-(BOOL)shouldUseCalendarHomeSyncReport;
-(id)additionalHeaderValues;
-(void)setPort:(long long)arg1 ;
@end

