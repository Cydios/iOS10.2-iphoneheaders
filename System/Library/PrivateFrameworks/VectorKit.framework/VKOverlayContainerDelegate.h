/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKOverlayContainerDelegate <NSObject>
@required
-(id)overlayContainer:(id)arg1 painterForOverlay:(id)arg2;
-(id)overlayContainer:(id)arg1 roadTileForTile:(id)arg2;
-(BOOL)overlayContainerIsInNavigationMode:(id)arg1;
-(BOOL)overlayContainerIsInTransitMode:(id)arg1;
-(void)overlayContainer:(id)arg1 showingOuterHaloOnLabelsDidChange:(BOOL)arg2;

@end
