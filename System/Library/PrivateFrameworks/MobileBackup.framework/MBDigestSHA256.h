/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <MobileBackup/MBDigest.h>

@interface MBDigestSHA256 : MBDigest {

	CC_SHA256state_st _context;

}
-(id)init;
-(void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)final;
@end
