/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIInputContextHistory, NSSet;

@interface UIInputContextHistory : NSObject {

	TIInputContextHistory* _tiInputContextHistory;

}

@property (nonatomic,readonly) NSSet * recipientIdentifiers; 
@property (nonatomic,readonly) TIInputContextHistory * tiInputContextHistory;              //@synthesize tiInputContextHistory=_tiInputContextHistory - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(TIInputContextHistory *)tiInputContextHistory;
-(id)initWithRecipientIdentifiers:(id)arg1 ;
-(NSSet *)recipientIdentifiers;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 ;
@end

