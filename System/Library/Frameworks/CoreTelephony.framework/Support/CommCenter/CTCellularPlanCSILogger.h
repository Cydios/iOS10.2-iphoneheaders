/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <CommCenter/CTCellularPlanLoggerDelegate.h>

@class NSString;

@interface CTCellularPlanCSILogger : NSObject <CTCellularPlanLoggerDelegate> {

	queue* queue;
	shared_ptr<ctu::Logger>* fLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLogger;
-(id)init;
-(void)didReceiveLogMessage:(id)arg1 withLevel:(int)arg2 ;
@end
