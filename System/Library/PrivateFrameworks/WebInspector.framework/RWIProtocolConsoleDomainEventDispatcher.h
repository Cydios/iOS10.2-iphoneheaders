/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolConsoleDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(void)messageAddedWithMessage:(id)arg1 ;
-(void)messageRepeatCountUpdatedWithCount:(int)arg1 ;
-(void)messagesCleared;
-(void)heapSnapshotWithTimestamp:(double)arg1 snapshotData:(id)arg2 title:(id*)arg3 ;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
@end

