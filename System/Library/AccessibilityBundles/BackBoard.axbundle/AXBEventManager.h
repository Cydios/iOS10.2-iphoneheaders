/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BackBoard/BackBoard-Structs.h>
@class NSString, AXEventRepresentation;

@interface AXBEventManager : NSObject {

	NSString* _eventTapIdentifier;
	BOOL _homeIsDown;
	BOOL _overrideGestureRecognitionState;
	BOOL _eventListenerEnabled;
	IOHIDUserDeviceRef _userDevice;
	AXEventRepresentation* _lastHIDRecord;

}

@property (assign,nonatomic) BOOL homeIsDown;              //@synthesize homeIsDown=_homeIsDown - In the implementation block
+(id)sharedManager;
-(void)_processHIDEvent:(IOHIDEventRef)arg1 ;
-(BOOL)_assistiveTouchEventTap:(id)arg1 ;
-(void)_normalizeEventForContext:(id)arg1 ;
-(void)_enableAssistiveTouchEventTap:(BOOL)arg1 ;
-(unsigned)contextIdForPosition:(CGPoint)arg1 displayId:(unsigned)arg2 ;
-(void)dispatchEventRepresentationToClient:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 displayId:(unsigned)arg3 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 displayId:(unsigned)arg3 ;
-(unsigned)systemEventPort;
-(unsigned)systemAppPort;
-(void)setHomeIsDown:(BOOL)arg1 ;
-(id)windowServer;
-(int)systemAppPid;
-(unsigned)machPortForPoint:(CGPoint)arg1 ;
-(unsigned)clientPortForContextId:(unsigned)arg1 ;
-(void)clearLastRecordPostedThrougHID;
-(BOOL)homeIsDown;
-(id)lastRecordPostedThroughHID;
-(id)init;
-(unsigned)contextIdHosterForContextId:(unsigned)arg1 ;
-(void)postEvent:(id)arg1 systemEvent:(BOOL)arg2 afterNamedTap:(id)arg3 namedTaps:(id)arg4 ;
-(void)enableEventTap:(BOOL)arg1 forApplication:(int)arg2 ;
-(void)setDisableSystemGestureRecognitionInEvents:(BOOL)arg1 ;
-(void)registerEventListener:(BOOL)arg1 ;
@end
