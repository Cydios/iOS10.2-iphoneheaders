/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNSaveRequest.h>

@class NSMutableSet, NSSet;

@interface CNSuggestedSaveRequest : CNSaveRequest {

	NSMutableSet* _mutableConfirmedSuggestions;
	NSMutableSet* _mutableRejectedSuggestions;

}

@property (nonatomic,retain) NSMutableSet * mutableConfirmedSuggestions;              //@synthesize mutableConfirmedSuggestions=_mutableConfirmedSuggestions - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableRejectedSuggestions;               //@synthesize mutableRejectedSuggestions=_mutableRejectedSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * confirmedSuggestions; 
@property (nonatomic,copy,readonly) NSSet * rejectedSuggestions; 
-(void)dealloc;
-(NSMutableSet *)mutableConfirmedSuggestions;
-(void)setMutableConfirmedSuggestions:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mutableRejectedSuggestions;
-(void)setMutableRejectedSuggestions:(NSMutableSet *)arg1 ;
-(void)confirmSuggestion:(id)arg1 ;
-(void)rejectSuggestion:(id)arg1 ;
-(id)storeIdentifier;
-(NSSet *)confirmedSuggestions;
-(NSSet *)rejectedSuggestions;
@end

