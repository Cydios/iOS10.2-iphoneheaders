/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringUndoCommand.h>

@class NSString;

@interface TTMergeableStringUndoEditCommand : NSObject <TTMergeableStringUndoCommand> {

	vector<TopoIDRange, std::__1::allocator<TopoIDRange> >* _deleteRanges;
	vector<std::__1::pair<TopoIDRange, NSAttributedString *>, std::__1::allocator<std::__1::pair<TopoIDRange, NSAttributedString *> > >* _insertStrings;

}

@property (nonatomic,readonly) vector<TopoIDRange* deleteRanges;                              //@synthesize deleteRanges=_deleteRanges - In the implementation block
@property (nonatomic,readonly) vector<std::__1::pair<TopoIDRange* insertStrings;              //@synthesize insertStrings=_insertStrings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)applyToString:(id)arg1 ;
-(BOOL)addToGroup:(id)arg1 ;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(BOOL)hasTopoIDsThatCanChange;
-(void)updateInsertTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(vector<TopoIDRange*)deleteRanges;
-(vector<std::__1::pair<TopoIDRange*)insertStrings;
@end
