/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDDatabaseIntegrityFault.h>

@class NSString;

@interface MLDUnknownIntegrityFault : MLDDatabaseIntegrityFault {

	NSString* _faultString;

}

@property (nonatomic,readonly) NSString * faultString;              //@synthesize faultString=_faultString - In the implementation block
-(BOOL)attemptRecoveryUsingHandle:(sqlite3Ref)arg1 withError:(id*)arg2 ;
-(id)initWithFaultString:(id)arg1 ;
-(NSString *)faultString;
-(id)description;
@end

