/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3DatabaseBlob : NSObject {

	sqlite3_blobRef _sqliteHandle;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)data;
-(int)readData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)initWithSQLiteHandle:(sqlite3_blobRef)arg1 ;
-(int)writeData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
@end

