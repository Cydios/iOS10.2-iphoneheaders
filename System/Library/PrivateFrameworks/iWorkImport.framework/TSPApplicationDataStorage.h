/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPDocumentResourceDataStorage.h>

@interface TSPApplicationDataStorage : TSPDocumentResourceDataStorage {

	BOOL _isValidated;

}
-(id)filenameForPreferredFilename:(id)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2 isValidated:(BOOL)arg3 ;
-(id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2 ;
-(void)validateIfNeeded;
-(id)fileURLForInfo:(id)arg1 ;
-(BOOL)isReadable;
@end
