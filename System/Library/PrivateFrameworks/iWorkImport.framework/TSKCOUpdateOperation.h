/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOAbstractOperation.h>

@class NSString;

@interface TSKCOUpdateOperation : TSKCOAbstractOperation {

	NSString* mPropertyName;

}

@property (nonatomic,readonly) NSString * propertyName; 
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(id)initWithPropertyName:(id)arg1 noop:(BOOL)arg2 ;
-(int)conflictTypeWithOperation:(id)arg1 hadRun:(BOOL)arg2 ;
-(id)initWithPropertyName:(id)arg1 ;
-(void)dealloc;
-(NSString *)propertyName;
@end

