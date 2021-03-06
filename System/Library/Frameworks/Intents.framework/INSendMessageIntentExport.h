/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, INPerson;


@protocol INSendMessageIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSString * serviceName; 
@property (nonatomic,copy) INPerson * sender; 
@required
-(id)init;
-(NSString *)content;
-(INPerson *)sender;
-(NSString *)groupName;
-(void)setGroupName:(id)arg1;
-(void)setSender:(id)arg1;
-(void)setContent:(id)arg1;
-(NSArray *)recipients;
-(void)setRecipients:(id)arg1;
-(void)setServiceName:(id)arg1;
-(NSString *)serviceName;

@end

