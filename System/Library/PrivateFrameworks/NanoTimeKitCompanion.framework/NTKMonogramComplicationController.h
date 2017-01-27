/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKComplicationController.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@class NSString;

@interface NTKMonogramComplicationController : NTKComplicationController <NTKTimeTravel> {

	NSString* _monogramText;

}

@property (nonatomic,__weak,readonly) id<NTKMonogramComplicationDisplay> legacyDisplay; 
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 ;
-(void)_deactivate;
-(void)_updateDisplay;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_activate;
-(BOOL)hasTapAction;
-(void)_handleLocaleChange;
-(void)_configureForLegacyDisplay:(id)arg1 ;
-(void)_reloadMonogramText;
-(void)_handleCustomMonogramChanged;
-(void)_handleFaceDefaultsChanged;
@end
