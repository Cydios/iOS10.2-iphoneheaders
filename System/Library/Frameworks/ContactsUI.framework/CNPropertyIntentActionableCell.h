/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class NSArray;

@interface CNPropertyIntentActionableCell : CNPropertySimpleTransportCell {

	NSArray* _actions;

}

@property (nonatomic,retain) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(void)performDefaultAction;
-(id)transportsMapping;
-(void)transportButton1Clicked:(id)arg1 ;
-(void)transportButton2Clicked:(id)arg1 ;
-(void)transportButton3Clicked:(id)arg1 ;
-(void)updateTransportButtons;
-(BOOL)shouldPerformDefaultAction;
-(id)defaultContext;
@end
