/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@interface RKEventIdentification : NSObject {

	vector<RKNaturalLanguageEvents::TokenSequence, std::__1::allocator<RKNaturalLanguageEvents::TokenSequence> >* _tokenSequences;
	float* _probabilities;

}

@property (nonatomic,readonly) vector<RKNaturalLanguageEvents::TokenSequence* tokenSequences;              //@synthesize tokenSequences=_tokenSequences - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithOwnedTokenSequences:(vector<RKNaturalLanguageEvents::TokenSequence, std::__1::allocator<RKNaturalLanguageEvents::TokenSequence> >*)arg1 probabilities:(float*)arg2 ;
-(void)getTopKClassifications:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateTopKClassificationsForEachString:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(SCD_Struct_RK2)topClassification;
-(vector<RKNaturalLanguageEvents::TokenSequence*)tokenSequences;
-(void)enumerateClassifiedTokens:(/*^block*/id)arg1 ;
@end

