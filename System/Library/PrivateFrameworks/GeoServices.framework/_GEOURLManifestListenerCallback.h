/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface _GEOURLManifestListenerCallback : NSObject {

	/*^block*/id _handler;
	CFRunLoopRef _runLoop;

}
-(void)dealloc;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 handler:(/*^block*/id)arg2 ;
-(void)performHandler:(BOOL)arg1 ;
@end

