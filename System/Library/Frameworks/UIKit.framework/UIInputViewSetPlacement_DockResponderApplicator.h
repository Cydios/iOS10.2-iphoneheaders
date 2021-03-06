/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputViewSetPlacement_FloatingApplicator.h>

@class UIKeyboardPopoverContainer;

@interface UIInputViewSetPlacement_DockResponderApplicator : UIInputViewSetPlacement_FloatingApplicator {

	UIKeyboardPopoverContainer* _popover;

}
-(void)invalidate;
-(UIEdgeInsets)contentInsets;
-(void)prepare;
-(id)draggableView;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2 ;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2 ;
-(void)applyChanges:(id)arg1 ;
@end

