/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UpNextWidget/UpNextWidget-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor, NSDateInterval, NSAttributedString, UIImage;

@interface UpNextWidget.LargeEventView : UIView {

	 gutterizedViewTapped;
	 travelAdvisoryViewTapped;
	 mapViewTapped;
	 title;
	 calendarColor;
	 location;
	 dateInterval;
	 travelAdvisoryText;
	 mapImage;
	 showExpandedMode;
	 showTravelAdvisoryText;
	 gutterizedEventView;
	 travelAdvisoryView;
	 mapView;
	 travelAdvisoryBaselineDistance;
	 mapBaselineDistance;

}

@property (copy,nonatomic) id gutterizedViewTapped; 
@property (copy,nonatomic) id travelAdvisoryViewTapped; 
@property (copy,nonatomic) id mapViewTapped; 
@property (copy,nonatomic) NSString * title; 
@property (retain,nonatomic) UIColor * calendarColor; 
@property (copy,nonatomic) NSString * location; 
@property (retain,nonatomic) NSDateInterval * dateInterval; 
@property (retain,nonatomic) NSAttributedString * travelAdvisoryText; 
@property (retain,nonatomic) UIImage * mapImage; 
@property (assign,nonatomic) BOOL showExpandedMode; 
@property (assign,nonatomic) BOOL showTravelAdvisoryText; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(void)setMapImage:(UIImage *)arg1 ;
-(UIColor *)calendarColor;
-(void)setCalendarColor:(UIColor *)arg1 ;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(double)lastBaselineOffsetFromBottom;
-(double)firstBaselineOffsetFromTop;
-(NSDateInterval *)dateInterval;
-(NSAttributedString *)travelAdvisoryText;
-(void)setTravelAdvisoryText:(NSAttributedString *)arg1 ;
-(BOOL)showTravelAdvisoryText;
-(void)setShowTravelAdvisoryText:(BOOL)arg1 ;
-(void)recognizerTriggeredForGutterizedView:(id)arg1 ;
-(void)recognizerTriggeredForTravelAdvisoryView:(id)arg1 ;
-(void)recognizerTriggeredForMapView:(id)arg1 ;
-(id)gutterizedViewTapped;
-(void)setGutterizedViewTapped:(id)arg1 ;
-(id)travelAdvisoryViewTapped;
-(void)setTravelAdvisoryViewTapped:(id)arg1 ;
-(id)mapViewTapped;
-(void)setMapViewTapped:(id)arg1 ;
-(UIImage *)mapImage;
-(BOOL)showExpandedMode;
-(void)setShowExpandedMode:(BOOL)arg1 ;
@end

