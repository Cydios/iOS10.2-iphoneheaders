/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMJSONCommand.h>

@class NSNumber, NSURL;

@interface FMFBaseCmd : FMJSONCommand {

	NSNumber* statusCode;
	NSURL* contextIdentifierURL;

}

@property (nonatomic,copy) NSNumber * statusCode; 
@property (nonatomic,copy) NSURL * contextIdentifierURL; 
-(id)staticClientContext;
-(void)setContextIdentifierURL:(NSURL *)arg1 ;
-(double)minCallbackInterval;
-(NSURL *)contextIdentifierURL;
-(id)init;
-(void)run;
-(NSNumber *)statusCode;
-(id)result;
-(void)setStatusCode:(NSNumber *)arg1 ;
-(id)jsonBodyDictionary;
-(id)jsonResponseDictionary;
-(id)headers;
@end

