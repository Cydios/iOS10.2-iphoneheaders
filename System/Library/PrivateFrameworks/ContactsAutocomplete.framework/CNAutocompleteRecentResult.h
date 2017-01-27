/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocomplete/CNAutocompleteResult.h>

@class NSDate;

@interface CNAutocompleteRecentResult : CNAutocompleteResult {

	NSDate* _date;
	BOOL _matchesSendingAddress;
	BOOL _completesChosenGroup;

}

@property (readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (assign) BOOL matchesSendingAddress;              //@synthesize matchesSendingAddress=_matchesSendingAddress - In the implementation block
@property (assign) BOOL completesChosenGroup;               //@synthesize completesChosenGroup=_completesChosenGroup - In the implementation block
+(id)comparators;
+(id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 date:(id)arg4 ;
+(id)groupResultWithDisplayName:(id)arg1 date:(id)arg2 ;
-(NSDate *)date;
-(BOOL)matchesSendingAddress;
-(BOOL)completesChosenGroup;
-(void)setMatchesSendingAddress:(BOOL)arg1 ;
-(void)setCompletesChosenGroup:(BOOL)arg1 ;
@end
