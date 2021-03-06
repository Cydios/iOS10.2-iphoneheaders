/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSearchResultsCell.h>

@class UISwitch, PSSpecifierAction, PSSpecifier;

@interface PSSearchResultsSwitchCell : PSSearchResultsCell {

	UISwitch* _switch;
	PSSpecifierAction* _action;
	PSSpecifier* _specifier;

}

@property (nonatomic,copy) PSSpecifierAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;               //@synthesize specifier=_specifier - In the implementation block
-(PSSpecifier *)specifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(PSSpecifierAction *)action;
-(void)setAction:(PSSpecifierAction *)arg1 ;
-(void)prepareForReuse;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)reloadValue:(BOOL)arg1 ;
-(void)_switchValueChanged:(id)arg1 ;
@end

