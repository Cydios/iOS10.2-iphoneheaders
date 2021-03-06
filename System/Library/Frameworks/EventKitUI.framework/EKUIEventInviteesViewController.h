/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@class EKUIEventInviteesEditViewController, NSDate, EKUIEventInviteesView, EKEvent, NSArray, EKUIInviteesViewAddInviteesSection, EKUIInviteesViewRespondedInviteesSection, EKUIInviteesViewNotRespondedInviteesSection, EKUIInviteesViewInvisibleInviteeStatusSection, EKUIInviteesViewProposedTimeSection, EKUIInviteesViewOriginalConflictSection, EKUIInviteesViewSomeInviteesCanAttendSection, EKUIInviteesViewAllInviteesCanAttendSection, EKInviteeAlternativeTimeSearcher, NSString;

@interface EKUIEventInviteesViewController : UITableViewController <EKEditItemViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EKEditItemViewControllerProtocol> {

	BOOL _resetAttendeesSections;
	BOOL _resetConflictResolutionSections;
	BOOL _viewIsVisible;
	BOOL _deletedParticipants;
	BOOL _fromDetail;
	EKUIEventInviteesEditViewController* _parentController;
	NSDate* _selectedStartDate;
	NSDate* _selectedEndDate;
	EKUIEventInviteesView* _inviteesView;
	EKEvent* _event;
	NSArray* _sections;
	EKUIInviteesViewAddInviteesSection* _addInviteesSection;
	EKUIInviteesViewRespondedInviteesSection* _respondedSection;
	EKUIInviteesViewNotRespondedInviteesSection* _notRespondedSection;
	EKUIInviteesViewInvisibleInviteeStatusSection* _invisibleInviteeStatusSection;
	EKUIInviteesViewProposedTimeSection* _proposedTimeSection;
	EKUIInviteesViewOriginalConflictSection* _originalConflictSection;
	EKUIInviteesViewSomeInviteesCanAttendSection* _someInviteesCanAttendSection;
	EKUIInviteesViewAllInviteesCanAttendSection* _allInviteesCanAttendSection;
	EKInviteeAlternativeTimeSearcher* _availabilitySearcher;

}

@property (nonatomic,retain) NSDate * selectedStartDate;                                                                 //@synthesize selectedStartDate=_selectedStartDate - In the implementation block
@property (nonatomic,retain) NSDate * selectedEndDate;                                                                   //@synthesize selectedEndDate=_selectedEndDate - In the implementation block
@property (nonatomic,retain) EKUIEventInviteesView * inviteesView;                                                       //@synthesize inviteesView=_inviteesView - In the implementation block
@property (assign,nonatomic) BOOL resetAttendeesSections;                                                                //@synthesize resetAttendeesSections=_resetAttendeesSections - In the implementation block
@property (assign,nonatomic) BOOL resetConflictResolutionSections;                                                       //@synthesize resetConflictResolutionSections=_resetConflictResolutionSections - In the implementation block
@property (assign,nonatomic) BOOL viewIsVisible;                                                                         //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (assign,nonatomic) BOOL deletedParticipants;                                                                   //@synthesize deletedParticipants=_deletedParticipants - In the implementation block
@property (assign,nonatomic) BOOL fromDetail;                                                                            //@synthesize fromDetail=_fromDetail - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                                                            //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                                         //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewAddInviteesSection * addInviteesSection;                                    //@synthesize addInviteesSection=_addInviteesSection - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewRespondedInviteesSection * respondedSection;                                //@synthesize respondedSection=_respondedSection - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewNotRespondedInviteesSection * notRespondedSection;                          //@synthesize notRespondedSection=_notRespondedSection - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewInvisibleInviteeStatusSection * invisibleInviteeStatusSection;              //@synthesize invisibleInviteeStatusSection=_invisibleInviteeStatusSection - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewProposedTimeSection * proposedTimeSection;                                  //@synthesize proposedTimeSection=_proposedTimeSection - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewOriginalConflictSection * originalConflictSection;                          //@synthesize originalConflictSection=_originalConflictSection - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewSomeInviteesCanAttendSection * someInviteesCanAttendSection;                //@synthesize someInviteesCanAttendSection=_someInviteesCanAttendSection - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewAllInviteesCanAttendSection * allInviteesCanAttendSection;                  //@synthesize allInviteesCanAttendSection=_allInviteesCanAttendSection - In the implementation block
@property (nonatomic,retain) EKInviteeAlternativeTimeSearcher * availabilitySearcher;                                    //@synthesize availabilitySearcher=_availabilitySearcher - In the implementation block
@property (assign,nonatomic,__weak) EKUIEventInviteesEditViewController * parentController;                              //@synthesize parentController=_parentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
+(id)_participantsInArray:(id)arg1 thatAreNotInArray:(id)arg2 ;
-(void)dealloc;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)viewDidLoad;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(id)initWithEvent:(id)arg1 fromDetail:(BOOL)arg2 ;
-(void)setParentController:(EKUIEventInviteesEditViewController *)arg1 ;
-(NSDate *)selectedStartDate;
-(NSDate *)selectedEndDate;
-(void)setResetConflictResolutionSections:(BOOL)arg1 ;
-(void)_searcherStateChanged:(long long)arg1 ;
-(void)setAvailabilitySearcher:(EKInviteeAlternativeTimeSearcher *)arg1 ;
-(EKInviteeAlternativeTimeSearcher *)availabilitySearcher;
-(void)_eventModified:(id)arg1 ;
-(void)_fontSizeDefinitionsChanged:(id)arg1 ;
-(void)updateCustomBackButton;
-(void)setOriginalConflictSection:(EKUIInviteesViewOriginalConflictSection *)arg1 ;
-(EKUIInviteesViewOriginalConflictSection *)originalConflictSection;
-(void)setAllInviteesCanAttendSection:(EKUIInviteesViewAllInviteesCanAttendSection *)arg1 ;
-(EKUIInviteesViewAllInviteesCanAttendSection *)allInviteesCanAttendSection;
-(void)setSomeInviteesCanAttendSection:(EKUIInviteesViewSomeInviteesCanAttendSection *)arg1 ;
-(EKUIInviteesViewSomeInviteesCanAttendSection *)someInviteesCanAttendSection;
-(long long)_indexForSection:(id)arg1 ;
-(void)_refreshIfNeeded;
-(id)_sectionForIndex:(unsigned long long)arg1 ;
-(void)_dismissPresentedViewControllerAnimated:(BOOL)arg1 ;
-(id)_viewControllerForPresentingViewControllers;
-(BOOL)resetConflictResolutionSections;
-(BOOL)useCustomBackButton;
-(id)_attendeesWithoutOrganizerAndLocations;
-(void)setSelectedStartDate:(NSDate *)arg1 ;
-(void)setSelectedEndDate:(NSDate *)arg1 ;
-(void)setResetAttendeesSections:(BOOL)arg1 ;
-(void)setFromDetail:(BOOL)arg1 ;
-(EKUIEventInviteesView *)inviteesView;
-(void)setInviteesView:(EKUIEventInviteesView *)arg1 ;
-(void)setAddInviteesSection:(EKUIInviteesViewAddInviteesSection *)arg1 ;
-(void)setRespondedSection:(EKUIInviteesViewRespondedInviteesSection *)arg1 ;
-(void)setNotRespondedSection:(EKUIInviteesViewNotRespondedInviteesSection *)arg1 ;
-(void)setInvisibleInviteeStatusSection:(EKUIInviteesViewInvisibleInviteeStatusSection *)arg1 ;
-(void)setProposedTimeSection:(EKUIInviteesViewProposedTimeSection *)arg1 ;
-(void)setDeletedParticipants:(BOOL)arg1 ;
-(EKUIInviteesViewInvisibleInviteeStatusSection *)invisibleInviteeStatusSection;
-(EKUIInviteesViewRespondedInviteesSection *)respondedSection;
-(EKUIInviteesViewAddInviteesSection *)addInviteesSection;
-(EKUIInviteesViewNotRespondedInviteesSection *)notRespondedSection;
-(EKUIInviteesViewProposedTimeSection *)proposedTimeSection;
-(BOOL)fromDetail;
-(void)_sendMessageToParticipants:(id)arg1 ;
-(void)_requestDismissal;
-(BOOL)deletedParticipants;
-(BOOL)resetAttendeesSections;
-(EKUIEventInviteesEditViewController *)parentController;
-(void)_presentViewController:(id)arg1 ;
-(BOOL)viewIsVisible;
-(void)_dismiss:(id)arg1 ;
-(void)setViewIsVisible:(BOOL)arg1 ;
@end

