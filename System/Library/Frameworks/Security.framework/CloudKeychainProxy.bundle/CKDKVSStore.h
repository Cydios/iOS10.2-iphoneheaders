/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Security.framework/CloudKeychainProxy.bundle/CloudKeychainProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKeychainProxy/CKDStore.h>

@class UbiqitousKVSProxy, NSUbiquitousKeyValueStore;

@interface CKDKVSStore : NSObject <CKDStore> {

	UbiqitousKVSProxy* _proxy;
	NSUbiquitousKeyValueStore* _cloudStore;

}

@property (__weak) UbiqitousKVSProxy * proxy;                           //@synthesize proxy=_proxy - In the implementation block
@property (retain) NSUbiquitousKeyValueStore * cloudStore;              //@synthesize cloudStore=_cloudStore - In the implementation block
+(id)kvsInterface;
-(void)pushWrites;
-(id)copyAsDictionary;
-(BOOL)pullUpdates:(id*)arg1 ;
-(void)kvsStoreChanged:(id)arg1 ;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(UbiqitousKVSProxy *)proxy;
-(void)connectToProxy:(id)arg1 ;
-(void)setProxy:(UbiqitousKVSProxy *)arg1 ;
-(void)setCloudStore:(NSUbiquitousKeyValueStore *)arg1 ;
-(NSUbiquitousKeyValueStore *)cloudStore;
@end

