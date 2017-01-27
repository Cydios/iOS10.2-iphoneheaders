/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class NSString;

@interface TSTNumberNode : TSTExpressionNode {

	double mNumber;
	NSString* mString;

}

@property (nonatomic,retain) NSString * string; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(NumberNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const NumberNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)isEqualToExpressionNode:(id)arg1 ;
-(id)argumentSpec;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(TSTCSENodeData)recordHashesForSubexpressions:(id)arg1 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(TSUCellCoord)arg2 symbolTable:(TSCESymbolTable*)arg3 ;
-(id)exportString;
-(id)initWithContext:(id)arg1 number:(double)arg2 string:(id)arg3 firstIndex:(unsigned long long)arg4 lastIndex:(unsigned long long)arg5 ;
-(id)initWithContext:(id)arg1 number:(double)arg2 locale:(id)arg3 firstIndex:(unsigned long long)arg4 lastIndex:(unsigned long long)arg5 ;
-(id)initWithContext:(id)arg1 string:(id)arg2 locale:(id)arg3 firstIndex:(unsigned long long)arg4 lastIndex:(unsigned long long)arg5 ;
-(void)setNumber:(double)arg1 withLocale:(id)arg2 ;
-(void)dealloc;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(int)tokenType;
-(double)number;
@end
