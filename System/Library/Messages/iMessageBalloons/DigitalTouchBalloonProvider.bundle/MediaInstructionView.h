/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel;

@interface MediaInstructionView : UIView {

	UILabel* _textLabel;

}
+(void)disallowInstruction;
+(BOOL)isInstructionAllowed;
-(void)updateForVideoState:(unsigned long long)arg1 ;
-(void)_updateTextLabelFrame;
-(id)init;
-(void)layoutSubviews;
@end
