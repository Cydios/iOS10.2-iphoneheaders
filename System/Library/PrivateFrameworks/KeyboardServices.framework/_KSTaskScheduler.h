/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _KSTaskScheduler : NSObject {

	NSMutableDictionary* _allTasks;

}

@property (nonatomic,retain) NSMutableDictionary * allTasks;              //@synthesize allTasks=_allTasks - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSMutableDictionary *)allTasks;
-(void)registerTask:(id)arg1 ;
-(void)unregisterTask:(id)arg1 ;
-(void)setAllTasks:(NSMutableDictionary *)arg1 ;
@end

