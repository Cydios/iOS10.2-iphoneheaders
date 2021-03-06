/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAwayListItem.h>

@class NSMutableArray, NSString, BBObserver, NSDate, UIImage, BBBulletin, UIViewController;

@interface SBAwayBulletinListItem : SBAwayListItem {

	NSMutableArray* _bulletins;
	int _personID;
	NSString* _contactInfo;
	BBObserver* _observer;
	NSDate* _sortDate;
	NSDate* _displayDate;
	NSString* _message;
	UIImage* _listItemImage;
	BOOL _shouldPlayLightsAndSirens;
	BBBulletin* _activeBulletin;
	UIViewController* _secondaryContentViewController;

}

@property (retain) BBBulletin * activeBulletin;                                    //@synthesize activeBulletin=_activeBulletin - In the implementation block
@property (retain) UIViewController * secondaryContentViewController;              //@synthesize secondaryContentViewController=_secondaryContentViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayLightsAndSirens;                       //@synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens - In the implementation block
-(void)prepareWithCompletion:(/*^block*/id)arg1 ;
-(void)setSecondaryContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)secondaryContentViewController;
-(BBBulletin *)activeBulletin;
-(BOOL)wantsHighlightOnInsert;
-(BOOL)canBeRemovedByNotificationCenterPresentation;
-(BOOL)canBeRemovedByUnlock;
-(void)_updateActiveBulletin;
-(void)_updateSortDate;
-(void)_updateDisplayDate;
-(id)sortedBulletins;
-(void)setActiveBulletin:(BBBulletin *)arg1 ;
-(BOOL)_suppressesMessageForPrivacy;
-(unsigned long long)maxMessageLines;
-(id)bulletinWithID:(id)arg1 ;
-(BOOL)hasSamePersonAsBulletin:(id)arg1 ;
-(BOOL)_hasCustomSecondaryContent;
-(BOOL)canSnooze;
-(id)initWithBulletin:(id)arg1 andObserver:(id)arg2 ;
-(BOOL)containsBulletinWithID:(id)arg1 ;
-(BOOL)canCoalesceWithBulletin:(id)arg1 ;
-(long long)snoozeButtonindex;
-(id)description;
-(id)title;
-(id)date;
-(void)_update;
-(id)subtitle;
-(id)message;
-(id)iconImage;
-(id)observer;
-(BOOL)hasEventDate;
-(BOOL)shouldPlayLightsAndSirens;
-(BOOL)overridesQuietMode;
-(BOOL)overridesPocketMode;
-(void)_updateImage;
-(id)attachmentText;
-(void)_updateMessage;
-(void)setShouldPlayLightsAndSirens:(BOOL)arg1 ;
-(void)buttonPressed;
-(id)sortDate;
-(id)bulletins;
-(void)modifyBulletin:(id)arg1 ;
-(void)removeBulletin:(id)arg1 ;
-(void)removeAllBulletins;
-(void)addBulletin:(id)arg1 ;
-(BOOL)inertWhenLocked;
-(BOOL)allowsAutomaticRemovalFromLockScreen;
-(BOOL)wantsFullscreenPresentation;
-(id)attachmentImage;
-(id)publishDate;
-(BOOL)isCritical;
@end

