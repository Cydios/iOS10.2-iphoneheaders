/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UISearchBar;

@interface _TVSearchBarWrapper : UIView {

	UISearchBar* _searchBar;
	BOOL _enabled;

}

@property (nonatomic,retain) UISearchBar * searchBar;                    //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
@end

