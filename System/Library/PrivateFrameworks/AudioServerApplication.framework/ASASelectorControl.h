/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/ASAControl.h>

@class NSArray;

@interface ASASelectorControl : ASAControl

@property (assign,nonatomic) unsigned currentItem; 
@property (nonatomic,copy,readonly) NSArray * availableItems; 
-(unsigned)currentItem;
-(NSArray *)availableItems;
-(void)setCurrentItem:(unsigned)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(id)nameForItem:(unsigned)arg1 ;
@end
