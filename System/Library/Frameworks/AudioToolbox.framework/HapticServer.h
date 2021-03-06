/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface HapticServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	ServerManager* _manager;
	map<int, std::__1::bitset<255>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::bitset<255> > > >* _processIndexMap;
	unsigned long long _initCount;
	unsigned long long _prewarmCount;
	unsigned long long _runningCount;
	unsigned long long _runningChannelIDCount;

}

@property (readonly) unsigned long long initCount;                  //@synthesize initCount=_initCount - In the implementation block
@property (readonly) ServerManager* manager;                        //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(shared_ptr<ClientEntry>*)entryWithID:(unsigned long long)arg1 ;
-(void)removeProcessEntry:(unsigned long long)arg1 ;
-(BOOL)incrementInit:(id*)arg1 ;
-(unsigned long long)incrementPrewarmCount;
-(void)decrementPrewarmCount;
-(unsigned long long)incrementRunningCount;
-(void)decrementRunningCount:(/*^block*/id)arg1 ;
-(void)decrementInit;
-(unsigned long long)getChannelID;
-(int)startPrewarm;
-(int)playVibePattern:(CFDictionaryRef)arg1 gain:(float)arg2 synchronizer:(SSPlayerSynchronizerRef)arg3 flags:(unsigned)arg4 atTime:(double)arg5 completionHandler:(/*^block*/id)arg6 ;
-(int)cancelPatternWithOptions:(CFDictionaryRef)arg1 ;
-(int)loadSynthPreset;
-(unsigned long long)addProcessEntry:(int)arg1 ;
-(int)setupClient:(shared_ptr<ClientEntry>*)arg1 ;
-(unsigned long long)initCount;
-(id)init;
-(void)dealloc;
-(int)stopPrewarm;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(ServerManager*)manager;
@end

