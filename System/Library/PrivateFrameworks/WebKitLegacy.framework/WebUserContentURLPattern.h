/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebUserContentURLPatternPrivate;

@interface WebUserContentURLPattern : NSObject {

	WebUserContentURLPatternPrivate* _private;

}
-(id)initWithPatternString:(id)arg1 ;
-(BOOL)matchesSubdomains;
-(void)dealloc;
-(id)scheme;
-(BOOL)isValid;
-(id)host;
-(BOOL)matchesURL:(id)arg1 ;
@end

