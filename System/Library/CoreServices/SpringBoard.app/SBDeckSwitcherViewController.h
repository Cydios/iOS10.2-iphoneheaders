/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBDeckSwitcherPageViewProviderDelegate.h>
#import <SpringBoard/SBAppViewHostRequester.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBSwitcherAppSuggestionViewControllerDelegate.h>
#import <SpringBoard/SBDeckSwitcherItemContainerDelegate.h>
#import <SpringBoard/SBMainAppSwitcherContentViewControlling.h>

@protocol SBMainAppSwitcherContentViewControllerDelegate;
@class NSMutableArray, SBDisplayItem, SBMainDisplayLayoutState, SBWallpaperEffectView, SBOrientationTransformWrapperView, SBAppSwitcherScrollView, UIView, NSMutableDictionary, SBSwitcherAppSuggestionViewController, SBDeckSwitcherPageViewProvider, SBWorkspaceTransitionRequest, SBAppView, NSCountedSet, SBAppSwitcherSettings, NSArray, SBBestAppSuggestion, NSString;

@interface SBDeckSwitcherViewController : UIViewController <SBDeckSwitcherPageViewProviderDelegate, SBAppViewHostRequester, UIScrollViewDelegate, _UISettingsKeyObserver, SBSwitcherAppSuggestionViewControllerDelegate, SBDeckSwitcherItemContainerDelegate, SBMainAppSwitcherContentViewControlling> {

	id<SBMainAppSwitcherContentViewControllerDelegate> _delegate;
	NSMutableArray* _displayItems;
	SBDisplayItem* _returnToDisplayItem;
	SBDisplayItem* _returnToSideDisplayItem;
	SBDisplayItem* _initialDisplayItem;
	SBMainDisplayLayoutState* _initialLayoutState;
	SBWallpaperEffectView* _wallpaperEffectView;
	SBOrientationTransformWrapperView* _wallpaperWrapperView;
	SBAppSwitcherScrollView* _scrollView;
	UIView* _backgroundDarkeningView;
	NSMutableDictionary* _visibleItemContainers;
	double _topmostItemMinimumFrameXOrigin;
	double _topmostItemMinimumScale;
	NSRange _visibleItemRange;
	CGPoint _scrollViewLastContentOffset;
	BOOL _scrollViewLastScrolledForward;
	SBSwitcherAppSuggestionViewController* _appSuggestionViewController;
	SBDeckSwitcherPageViewProvider* _pageViewProvider;
	UIEdgeInsets _transitionParameters;
	BOOL _transitionInProgress;
	BOOL _transitionPresenting;
	BOOL _transitionInteractive;
	BOOL _transitionFinishingAfterBeingInteractive;
	BOOL _transitionDidFinishDismissing;
	BOOL _didSendViewPresentingDismissing;
	SBWorkspaceTransitionRequest* _transitionRequest;
	BOOL _shouldHideTitlesAndIconsForInteraction;
	double _initialTitleAndIconOpacityTransitionProgress;
	SBAppView* _hideSideAppView;
	NSMutableArray* _blocksToPerformWhenScrollingEnds;
	NSMutableDictionary* _insertionRemovalStatus;
	NSCountedSet* _suppressBackgroundReasons;
	BOOL _configuredScrollviewForThisPresentation;
	SBAppSwitcherSettings* _settings;
	BOOL _isScrolling;
	long long _grabbedDraggingIndex;
	double _inputContentOffsetAdjustmentForIndexChange;
	double _outputContentOffsetAdjustmentForIndexChange;
	CGPoint _start;
	CGPoint _originalLocationInView;
	BOOL _invalidated;
	BOOL _isWallpaperConfigured;

}

@property (nonatomic,copy) NSArray * displayItems;                                                                       //@synthesize displayItems=_displayItems - In the implementation block
@property (setter=_setReturnToDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToDisplayItem;                         //@synthesize returnToDisplayItem=_returnToDisplayItem - In the implementation block
@property (setter=_setReturnToSideDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToSideDisplayItem;                 //@synthesize returnToSideDisplayItem=_returnToSideDisplayItem - In the implementation block
@property (setter=_setInitialDisplayItem:,nonatomic,copy) SBDisplayItem * _initialDisplayItem;                           //@synthesize initialDisplayItem=_initialDisplayItem - In the implementation block
@property (setter=_setInitialLayoutState:,nonatomic,retain) SBMainDisplayLayoutState * _initialLayoutState;              //@synthesize initialLayoutState=_initialLayoutState - In the implementation block
@property (assign,nonatomic,__weak) id<SBMainAppSwitcherContentViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)snapshotScale;
-(void)_updateScrollViewContentOffsetToCenterIndex:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)appViewRequesterIdentifier:(id)arg1 ;
-(long long)appViewRequesterPriority:(id)arg1 ;
-(SBDisplayItem *)_returnToDisplayItem;
-(void)startInteractiveTransition:(BOOL)arg1 presenting:(BOOL)arg2 withRequest:(id)arg3 ;
-(void)setTransitionParameters:(UIEdgeInsets)arg1 ;
-(void)endTransitionWithSuccess:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(SBDisplayItem *)_returnToSideDisplayItem;
-(BOOL)hasInteractiveContentAtBottomOfScreen;
-(void)endInteractionWithCommitment:(BOOL)arg1 ;
-(id)nextDisplayItem;
-(void)animatePresentationForTransitionRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)animateDismissalToDisplayItem:(id)arg1 forTransitionRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)insertDisplayItem:(id)arg1 atIndex:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeDisplayItem:(id)arg1 forReason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)replaceDisplayItem:(id)arg1 withDisplayItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)suppressBackgroundForReason:(id)arg1 ;
-(void)stopSuppressingBackgroundForReason:(id)arg1 ;
-(void)_setReturnToDisplayItem:(id)arg1 ;
-(void)_setReturnToSideDisplayItem:(id)arg1 ;
-(SBDisplayItem *)_initialDisplayItem;
-(void)_setInitialDisplayItem:(id)arg1 ;
-(SBMainDisplayLayoutState *)_initialLayoutState;
-(void)_setInitialLayoutState:(id)arg1 ;
-(void)setDisplayItems:(NSArray *)arg1 ;
-(void)setBestAppSuggestion:(SBBestAppSuggestion *)arg1 ;
-(id)_displayItems;
-(void)_applyPrototypeSettingsToConstants;
-(void)_updateVisibleItems;
-(void)_animateWallpaperDismissal;
-(void)_cleanupWallpaper;
-(void)_unhostSideApp;
-(void)_updateScrollViewFrameAndContentSize;
-(void)_getIndiciesAndDirectionToPreserveScrollPositionWhenInsertingAtIndex:(unsigned long long)arg1 prior:(unsigned long long*)arg2 subsequent:(unsigned long long*)arg3 direction:(unsigned long long*)arg4 animated:(BOOL)arg5 ;
-(void)_beginInsertionOrRemovalOfDisplayItem:(id)arg1 direction:(unsigned long long)arg2 style:(unsigned long long)arg3 progress:(double)arg4 ;
-(void)_updateContentSizePreservingScrollPositionOfPriorIndex:(unsigned long long)arg1 subsequentIndex:(unsigned long long)arg2 acrossMutation:(/*^block*/id)arg3 ;
-(id)_insertionRemovalSlideAnimation;
-(void)_updateProgressOfInsertingOrRemovingDisplayItem:(id)arg1 progress:(double)arg2 ;
-(void)_endInsertionOrRemovalOfDisplayItem:(id)arg1 ;
-(SCD_Struct_SB33)_insertionRemovalStatusForDisplayItem:(id)arg1 ;
-(void)_updateContentSizePreservingScrollPositionOfDisplayItem:(id)arg1 atOriginalIndex:(unsigned long long)arg2 acrossMutation:(/*^block*/id)arg3 ;
-(void)_getItemToKeepStill:(id*)arg1 andDirection:(unsigned long long*)arg2 whenRemovingItem:(id)arg3 ;
-(id)_topVisibleItem;
-(void)_animatePresentationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_cleanupDisappearedItemContainers;
-(void)_revealSideAppForDismissalWithTransitionRequest:(id)arg1 ;
-(void)_animateDismissalWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_cancelScrolling;
-(BOOL)_shouldScrollForDismissalToItem:(id)arg1 ;
-(void)_minimizeScrollDistanceForDismissalToItem:(id)arg1 ;
-(unsigned long long)_indexForPresentationOrDismissalIsPresenting:(BOOL)arg1 ;
-(id)_animationSettingsForHidingSideAppForPresentation;
-(id)_animationSettingsForRevealingSideAppForDismissal;
-(BOOL)_shouldFadeInToRevealSideAppForDismissal;
-(id)_itemContainerForDisplayItem:(id)arg1 ;
-(void)_hideSideAppForPresentation;
-(void)_animateWallpaperPresentationForTransitionRequest:(id)arg1 ;
-(void)_sendViewPresentingToPageViewsForTransitionRequest:(id)arg1 ;
-(void)_sendViewDismissingToPageViewsForTransitionRequest:(id)arg1 ;
-(CGRect)_frameForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 transitionParameters:(UIEdgeInsets)arg3 scrollProgress:(double)arg4 ignoringScrollOffset:(BOOL)arg5 ignoringKillingAdjustments:(BOOL)arg6 ignoringPinning:(BOOL)arg7 ;
-(double)_scaleForTransformForIndex:(unsigned long long)arg1 progressPresented:(double)arg2 scrollProgress:(double)arg3 ;
-(CGRect)_frameForIndex:(unsigned long long)arg1 ;
-(CGAffineTransform)_transformForIndex:(unsigned long long)arg1 ;
-(void)_layoutDisplayItem:(id)arg1 ;
-(void)_ensureCardSubviewOrdering;
-(void)_applyStyleToVisibleItemContainers;
-(double)_normalizedScrollProgress;
-(CGRect)_scaleTransformedFrameForIndex:(unsigned long long)arg1 withUntransformedFrame:(CGRect)arg2 scrollProgress:(double)arg3 ;
-(BOOL)_shouldUseDepth;
-(double)_effectiveIndexForIndex:(unsigned long long)arg1 ;
-(double)_depthForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3 ignoringKillOffset:(BOOL)arg4 ;
-(double)_leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 transitionParameters:(UIEdgeInsets)arg3 scrollProgress:(double)arg4 ignoringKillingAdjustments:(BOOL)arg5 ;
-(double)_effectiveInsertionRemovalSlideInProgressForIndex:(unsigned long long)arg1 ;
-(CGSize)_scrollViewContentSizeForDisplayItemCount:(unsigned long long)arg1 ;
-(double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 depth:(double)arg3 ignoringKillOffset:(BOOL)arg4 ;
-(CGAffineTransform)_transformForIndex:(unsigned long long)arg1 progressPresented:(double)arg2 scrollProgress:(double)arg3 ;
-(double)_scaleForPresentedProgress:(double)arg1 ;
-(BOOL)_displayItemWantsToBeKeptInViewHierarchy:(id)arg1 ;
-(BOOL)_isIndexVisible:(unsigned long long)arg1 ;
-(void)_applyStyleToItemContainer:(id)arg1 ;
-(void)_didAddVisibleItemContainer:(id)arg1 forDisplayItem:(id)arg2 ;
-(void)_removeVisibleItemContainerForDisplayItem:(id)arg1 ;
-(void)_didRemoveVisibleItemContainerForDisplayItem:(id)arg1 ;
-(double)_opacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 ;
-(BOOL)_isItemTransitioning:(id)arg1 ;
-(id)_insertingOrRemovingDisplayItems;
-(BOOL)_isItemVisible:(id)arg1 ;
-(BOOL)_isAboveTransitioningItemDuringPresentation:(id)arg1 ;
-(BOOL)_isAboveTransitioningItemDuringDismissalAfterInteractivePresentation:(id)arg1 ;
-(double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 progressPresented:(double)arg3 frameOrigin:(double)arg4 ignoringScrollOffset:(BOOL)arg5 ;
-(void)_setNormalizedScrollProgress:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)_desiredXOriginForQuantizedTopPage;
-(double)_preferredVisibleMarginForTopPage;
-(void)_setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_applyStyleToItemContainer:(id)arg1 forceRealBlur:(BOOL)arg2 ;
-(double)_opacityForIndex:(unsigned long long)arg1 ;
-(double)_blurForIndex:(unsigned long long)arg1 ;
-(BOOL)_isAboveTransitioningItemDuringPresentationAndWillEndUpOffscreen:(id)arg1 ;
-(BOOL)_isAboveTransitioningItemDuringDismissalAfterInteractivePresentationAndWillEndUpOffscreen:(id)arg1 ;
-(double)_titleOpacityForIndex:(unsigned long long)arg1 ;
-(double)_titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(void)_applyVisibleMarginToItemContainer:(id)arg1 ;
-(double)_killGestureHysteresis;
-(BOOL)_priorIndex:(long long)arg1 fullyObscuresCardForItemContainer:(id)arg2 ;
-(double)_blurForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 ;
-(double)_titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 ;
-(BOOL)_shouldShowIconAndTitleInItemContainers;
-(BOOL)_scrollViewThinksItsScrolling;
-(BOOL)_shouldAdjustScrollViewTracking;
-(long long)_topIndexForLocationInScrollView:(CGPoint)arg1 ;
-(CGPoint)_adjustedOffsetForIndex:(long long)arg1 offset:(CGPoint)arg2 start:(CGPoint)arg3 originalLocationInView:(CGPoint)arg4 locationInView:(CGPoint)arg5 ;
-(double)_scaleTransformedXOrigin:(double)arg1 scrollProgress:(double)arg2 ;
-(CGSize)_sizeForPageViewOfDisplayItem:(id)arg1 progressPresented:(double)arg2 ;
-(CGSize)_contentSizeForPageViewOfDisplayItem:(id)arg1 ;
-(BOOL)isDisplayItemOfContainerRemovable:(id)arg1 ;
-(double)_contentSizeDeltaForItemDeletion;
-(long long)orientationForPageViewFromProvider:(id)arg1 ;
-(id)initialDisplayItemForPageViewFromProvider:(id)arg1 ;
-(id)nextDisplayItemForInteractiveTransitionForPageViewFromProvider:(id)arg1 ;
-(id)initialLayoutStateForPageViewFromProvider:(id)arg1 ;
-(CGSize)sizeForDisplayItem:(id)arg1 fromProvider:(id)arg2 ;
-(CGSize)contentSizeForDisplayItem:(id)arg1 fromProvider:(id)arg2 ;
-(id)containerViewControllerForPageViewFromProvider:(id)arg1 ;
-(void)suggestionViewController:(id)arg1 activatedSuggestion:(id)arg2 ;
-(long long)orientationForSuggestionViewController:(id)arg1 ;
-(BOOL)shouldShowIconAndLabelOfContainer:(id)arg1 ;
-(void)killDisplayItemOfContainer:(id)arg1 withVelocity:(double)arg2 ;
-(BOOL)canSelectDisplayItemOfContainer:(id)arg1 numberOfTaps:(long long)arg2 ;
-(void)selectedDisplayItemOfContainer:(id)arg1 ;
-(CGRect)frameForPageViewOfContainer:(id)arg1 fullyPresented:(BOOL)arg2 ;
-(void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(id)arg2 ;
-(double)minimumVerticalTranslationForKillingOfContainer:(id)arg1 ;
-(id)pageForDisplayItem:(id)arg1 ;
-(void)_layoutDisplayItem:(id)arg1 withZoomScale:(double)arg2 ;
-(CGRect)_scaleTransformedFrameForIndex:(unsigned long long)arg1 ;
-(BOOL)_isIndexTransitioning:(unsigned long long)arg1 ;
-(id)_animationFactoryForWallpaper;
-(double)_insertionRemovalProgressForDisplayItem:(id)arg1 ;
-(double)_transitionProgress;
-(id)_visibleItemContainers;
-(BOOL)_isReadyForScrollViewLayout;
-(CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(CGPoint)arg2 translation:(CGPoint)arg3 startPoint:(CGPoint)arg4 locationInView:(CGPoint)arg5 ;
-(void)setScrolling:(BOOL)arg1 ;
-(void)setDelegate:(id<SBMainAppSwitcherContentViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SBMainAppSwitcherContentViewControllerDelegate>)delegate;
-(void)invalidate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(CGPoint)arg2 translation:(CGPoint)arg3 startPoint:(CGPoint)arg4 locationInView:(CGPoint)arg5 horizontalVelocity:(double*)arg6 verticalVelocity:(double*)arg7 ;
-(id)_scrollView;
-(BOOL)_isDismissing;
-(void)viewDidLoad;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(NSArray *)displayItems;
-(NSRange)_visibleItemRange;
-(SBBestAppSuggestion *)bestAppSuggestion;
@end

