/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SGDSuggestManagerInterface : NSObject
+(void)initialize;
+(id)xpcInterface;
+(void)_registerWhitelistBlock:(/*^block*/id)arg1 forProtocol:(id)arg2 ;
+(id)xpcInterfaceForProtocol:(id)arg1 ;
+(void)_whitelistXPCInterface:(id)arg1 forProtocol:(id)arg2 alreadyWhitelisted:(id)arg3 ;
+(void)interface:(id)arg1 returns:(Class)arg2 forSelector:(SEL)arg3 ;
+(void)interface:(id)arg1 returnsArrayOf:(Class)arg2 forSelector:(SEL)arg3 ;
@end
