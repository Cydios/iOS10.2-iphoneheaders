/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIMecabraCandidate.h>

@class NSString;

@interface TIMecabraFacemarkCandidate : TIMecabraCandidate {

	NSString* _category;

}

@property (nonatomic,copy) NSString * category;              //@synthesize category=_category - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
+(id)candidateWithCandidate:(id)arg1 category:(id)arg2 input:(id)arg3 mecabraCandidatePointerValue:(id)arg4 ;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 category:(id)arg2 input:(id)arg3 mecabraCandidatePointerValue:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
