/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class RKResponseCollection, NSObject, NSArray;

@interface RKMessageResponseManager : NSObject {

	RKResponseCollection* _collection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _preferredLanguages;

}

@property (retain) RKResponseCollection * collection;                       //@synthesize collection=_collection - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSArray * preferredLanguages;                  //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSArray *)preferredLanguages;
-(id)initWithDynamicDataURL:(id)arg1 displayStringsProvider:(id)arg2 ;
-(id)responsesForMessageImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 ;
-(id)responsesForMessageWithLanguageDetectionImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id*)arg4 options:(unsigned long long)arg5 ;
-(void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withEffectiveDate:(id)arg4 withLanguage:(id)arg5 ;
-(id)initWithDynamicDataURL:(id)arg1 withBundleURL:(id)arg2 ;
-(void)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id*)arg4 options:(unsigned long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id*)arg4 options:(unsigned long long)arg5 ;
-(id)categoryForMessage:(id)arg1 langID:(id)arg2 ;
-(void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withLanguage:(id)arg4 ;
-(id)initWithDynamicDataURL:(id)arg1 ;
-(void)flushDynamicData;
-(void)resetRegisteredResponses;
-(RKResponseCollection *)collection;
-(void)setCollection:(RKResponseCollection *)arg1 ;
-(void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPreferredLanguages:(NSArray *)arg1 ;
@end

