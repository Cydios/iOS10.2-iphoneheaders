/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OTATaskingAgent;
@class NSXPCConnection;

@interface OTATaskingAgentClient : NSObject {

	NSXPCConnection* _connection;
	id<OTATaskingAgent> _synchRemoteObjectProxy;

}
+(id)sharedClient;
-(unsigned)uidForUser:(id)arg1 ;
-(BOOL)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void*)arg4 ;
-(BOOL)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 ;
-(id)crashreporterKey;
-(id)awdKey;
-(id)init;
@end

