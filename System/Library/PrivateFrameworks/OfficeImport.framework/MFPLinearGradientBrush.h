/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPGradientBrush.h>

@class OITSUColor;

@interface MFPLinearGradientBrush : MFPGradientBrush {

	CGRect mBounds;
	OITSUColor* mStartColor;
	OITSUColor* mEndColor;

}
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setStartColor:(id)arg1 ;
-(void)setEndColor:(id)arg1 ;
-(void)createShading;
-(id)startColor;
-(id)endColor;
@end
