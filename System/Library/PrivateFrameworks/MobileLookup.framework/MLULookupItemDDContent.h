/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileLookup/MobileLookup-Structs.h>
#import <MobileLookup/MLULookupItemContent.h>

@class DDPreviewAction;

@interface MLULookupItemDDContent : MLULookupItemContent {

	DDPreviewAction* _previewAction;

}
-(unsigned long long)commitType;
-(id)contact;
-(void)dismissViewController;
-(id)commitURL;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 documentProperties:(id)arg3 ;
-(void)setupViewControllerInCommitMode;
@end

