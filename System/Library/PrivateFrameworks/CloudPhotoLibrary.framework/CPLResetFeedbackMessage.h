/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

@interface CPLResetFeedbackMessage : CPLFeedbackMessage {

	NSString* _resetType;
	NSString* _reason;

}

@property (nonatomic,readonly) NSString * resetType;              //@synthesize resetType=_resetType - In the implementation block
@property (nonatomic,readonly) NSString * reason;                 //@synthesize reason=_reason - In the implementation block
+(id)feedbackType;
-(NSString *)reason;
-(id)serverMessage;
-(id)initWithResetType:(id)arg1 reason:(id)arg2 ;
-(NSString *)resetType;
@end

