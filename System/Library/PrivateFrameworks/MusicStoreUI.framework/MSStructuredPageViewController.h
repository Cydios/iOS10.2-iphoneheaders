/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUStructuredPageGroupedViewController.h>

@class SUSegmentedControl, NSIndexPath, SUAudioPlayer, SUPlayerStatus;

@interface MSStructuredPageViewController : SUStructuredPageGroupedViewController {

	SUSegmentedControl* _inlineSegmentedControl;
	NSIndexPath* _previewIndexPath;
	SUAudioPlayer* _previewPlayer;
	SUPlayerStatus* _previewStatus;

}
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)applicationDidEnterBackground;
-(void)reloadWithStorePage:(id)arg1 forURL:(id)arg2 ;
-(BOOL)canDisplaySectionGroup:(id)arg1 ;
-(id)setDisplayedSectionGroup:(id)arg1 ;
-(BOOL)canSelectRowAtIndexPath:(id)arg1 ;
-(BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2 ;
-(BOOL)purchaseItemAtIndexPath:(id)arg1 ;
-(void)setSkLoading:(BOOL)arg1 ;
-(void)_stopPreviewPlayback;
-(void)_setPreviewStatus:(id)arg1 forIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)_handlePreviewForIndexPath:(id)arg1 ;
-(void)_playerStatusChangeNotification:(id)arg1 ;
-(BOOL)_handleMediaPreviewForIndexPath:(id)arg1 ;
-(BOOL)_handleInlinePreviewForIndexPath:(id)arg1 ;
@end

