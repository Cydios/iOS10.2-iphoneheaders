/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQHState.h>

@interface GQHKeynoteState : GQHState {

	int mCurrentSlide;
	CGSize mSlideSize;
	int mProgressiveIndex;

}
-(BOOL)shouldMapLinkWithUrl:(CFStringRef)arg1 ;
-(void)setProgressiveIndex:(int)arg1 ;
-(void)incrementCurrentSlide;
-(BOOL)shouldStreamContent;
-(int)progressiveIndex;
-(int)currentSlide;
-(CGSize)slideSize;
-(void)setSlideSize:(CGSize)arg1 ;
@end
