/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIBarButtonItem;


@protocol ASNavigationItemProviding <NSObject>
@property (nonatomic,retain) UIBarButtonItem * messagesRightBarButtonItem; 
@property (nonatomic,retain) UIBarButtonItem * messagesLeftBarButtonItem; 
@required
-(void)setMessagesRightBarButtonItem:(id)arg1;
-(void)setMessagesLeftBarButtonItem:(id)arg1;
-(UIBarButtonItem *)messagesLeftBarButtonItem;
-(UIBarButtonItem *)messagesRightBarButtonItem;

@end
