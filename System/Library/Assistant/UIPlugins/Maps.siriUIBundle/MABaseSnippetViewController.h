/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, SALocalSearchMapItemSnippet, SALocalSearchMapItem, NSString;

@interface MABaseSnippetViewController : SiriUISnippetViewController <CLLocationManagerDelegate> {

	BOOL _hasEverStartedLoading;
	BOOL _appearing;
	CLLocationManager* _locManager;
	unsigned long long _selectedMapItemIndex;

}

@property (nonatomic,readonly) BOOL appearing;                                                 //@synthesize appearing=_appearing - In the implementation block
@property (nonatomic,readonly) CLLocationManager * locManager;                                 //@synthesize locManager=_locManager - In the implementation block
@property (nonatomic,readonly) SALocalSearchMapItemSnippet * mapItemSnippet; 
@property (assign,nonatomic) unsigned long long selectedMapItemIndex;                          //@synthesize selectedMapItemIndex=_selectedMapItemIndex - In the implementation block
@property (nonatomic,readonly) SALocalSearchMapItem * selectedLocalSearchMapItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)generateURLWithSession:(/*^block*/id)arg1 ;
-(id)initWithMapItemSnippet:(id)arg1 ;
-(void)donateLocationForMapItem:(id)arg1 ;
-(void)captureUserAction:(int)arg1 details:(id)arg2 ;
-(unsigned long long)selectedMapItemIndex;
-(void)setSelectedMapItemIndex:(unsigned long long)arg1 ;
-(SALocalSearchMapItem *)selectedLocalSearchMapItem;
-(void)makeReservationAtSelectedRestaurantForSelectedTimeIndex:(unsigned long long)arg1 ;
-(void)captureUserAction:(int)arg1 ;
-(void)openURLWithMapItem:(id)arg1 ;
-(void)openURLWithDirectionsFromPlace:(id)arg1 toPlace:(id)arg2 transportType:(unsigned long long)arg3 ;
-(void)_updateTitleAndSubtitleWithCompletionHandler:(/*^block*/id)arg1 ;
-(CLLocationManager *)locManager;
-(int)analyticsUITarget;
-(void)openURLWithSnippetMapItemsAndSelectedMapItem;
-(void)openURLWithDirectionsFromPlace:(id)arg1 toPlace:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(SALocalSearchMapItemSnippet *)mapItemSnippet;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(BOOL)appearing;
-(id)initWithSnippet:(id)arg1 ;
-(void)siriDidScrollVisible:(BOOL)arg1 ;
-(BOOL)isMemoryIntensive;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
