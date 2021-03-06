/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDIterator.h>

@class WDIterator;

@interface WDCombinedIterator : WDIterator {

	WDIterator* mParentIterator;
	WDIterator* mChildIterator;

}

@property (nonatomic,retain) WDIterator * childIterator; 
-(id)next;
-(void)dealloc;
-(void)incrementChildIterator;
-(WDIterator *)childIterator;
-(void)setChildIterator:(WDIterator *)arg1 ;
-(id)initWithParentIterator:(id)arg1 ;
-(id)childIteratorFrom:(id)arg1 ;
-(id)newChildIteratorFrom:(id)arg1 ;
-(BOOL)hasNext;
@end

