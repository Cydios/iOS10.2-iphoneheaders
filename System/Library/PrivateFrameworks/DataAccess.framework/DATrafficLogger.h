/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DATrafficLogger : NSObject {

	NSString* _filename;

}

@property (nonatomic,retain) NSString * filename;              //@synthesize filename=_filename - In the implementation block
+(BOOL)enabled;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)_ensureCustomLogFile;
-(void)logSnippet:(id)arg1 ;
-(void)slurpAndRemoveLookasideFile:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3 ;
-(id)initWithFilename:(id)arg1 ;
@end

