/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCDReader.h>

@class OCCDecryptor;

@interface OCDEncryptedReader : OCDReader {

	OCCDecryptor* mDecryptor;

}

@property (nonatomic,readonly) OCCDecryptor * decryptor; 
-(void)dealloc;
-(BOOL)retainDecryptorWithErrorCode:(int*)arg1 ;
-(OCCDecryptor *)decryptor;
-(void)restartReaderToUseDecryptedDocument;
-(void)useUnencryptedDocument;
-(id)defaultPassphrase;
@end

