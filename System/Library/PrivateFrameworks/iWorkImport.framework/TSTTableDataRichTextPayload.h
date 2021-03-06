/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSTTableDataObject.h>

@class TSTRichTextPayload, TSWPStorage;

@interface TSTTableDataRichTextPayload : TSTTableDataObject {

	TSTRichTextPayload* mPayload;

}

@property (nonatomic,readonly) TSTRichTextPayload * richTextPayload; 
@property (nonatomic,readonly) TSWPStorage * richTextStorage; 
-(TSWPStorage *)richTextStorage;
-(id)initObjectWithRichTextPayload:(id)arg1 refCount:(unsigned)arg2 ;
-(TSTRichTextPayload *)richTextPayload;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

