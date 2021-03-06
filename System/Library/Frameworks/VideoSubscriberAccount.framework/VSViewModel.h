/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSString;

@interface VSViewModel : NSObject {

	unsigned long long _viewState;
	unsigned long long _validationState;
	NSError* _error;
	NSString* _title;
	unsigned long long _deleteAccountState;

}

@property (assign,nonatomic) unsigned long long viewState;                       //@synthesize viewState=_viewState - In the implementation block
@property (assign,nonatomic) unsigned long long validationState;                 //@synthesize validationState=_validationState - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long deleteAccountState;              //@synthesize deleteAccountState=_deleteAccountState - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(unsigned long long)validationState;
-(void)setValidationState:(unsigned long long)arg1 ;
-(unsigned long long)viewState;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)deleteAccountState;
-(void)setDeleteAccountState:(unsigned long long)arg1 ;
-(void)setViewState:(unsigned long long)arg1 ;
@end

