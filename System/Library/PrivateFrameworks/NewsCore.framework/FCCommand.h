/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface FCCommand : NSObject <NSCoding>
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 ;
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(void)coalesceWithCommand:(id)arg1 ;
-(unsigned long long)statusForCloudKitError:(id)arg1 ;
@end

