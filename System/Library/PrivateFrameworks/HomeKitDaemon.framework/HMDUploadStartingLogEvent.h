/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDUploadStartingLogEvent : HMDLogEvent {

	NSString* _saveReason;

}

@property (nonatomic,readonly) NSString * saveReason;              //@synthesize saveReason=_saveReason - In the implementation block
+(id)uuid;
+(id)uploadReason:(id)arg1 ;
-(id)initUploadReason:(id)arg1 ;
-(NSString *)saveReason;
@end

