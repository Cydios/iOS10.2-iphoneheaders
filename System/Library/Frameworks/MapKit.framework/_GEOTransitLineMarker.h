/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKTransitLineMarker.h>

@protocol GEOTransitLine;
@class NSString;

@interface _GEOTransitLineMarker : NSObject <MKTransitLineMarker> {

	id<GEOTransitLine> _line;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)artwork;
-(id)labelText;
-(unsigned long long)featureID;
-(id)initWithGEOTransitLine:(id)arg1 ;
@end

