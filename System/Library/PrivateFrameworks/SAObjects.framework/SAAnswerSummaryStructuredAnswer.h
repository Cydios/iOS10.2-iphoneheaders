/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAnswerStructuredAnswer.h>

@class NSArray, NSString, NSURL;

@interface SAAnswerSummaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (nonatomic,copy) NSArray * answerPropertyGroups; 
@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSString * imageCaption; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * titleAnnotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)summaryStructuredAnswer;
+(id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)title;
-(NSURL *)image;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)answerPropertyGroups;
-(void)setAnswerPropertyGroups:(NSArray *)arg1 ;
-(NSString *)imageCaption;
-(void)setImageCaption:(NSString *)arg1 ;
-(NSString *)titleAnnotation;
-(void)setTitleAnnotation:(NSString *)arg1 ;
@end

