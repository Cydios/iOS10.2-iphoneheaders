/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSData;

@interface MKTileOverlayTile : NSObject {

	SCD_Struct_MK21 _path;
	SCD_Struct_MK1 _frame;
	double _scale;
	NSData* _image;

}

@property (assign,nonatomic) SCD_Struct_MK21 path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK1 frame;              //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double scale;                      //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSData * image;                    //@synthesize image=_image - In the implementation block
-(void)setFrame:(SCD_Struct_MK1)arg1 ;
-(void)setImage:(NSData *)arg1 ;
-(SCD_Struct_MK1)frame;
-(id)description;
-(void)setScale:(double)arg1 ;
-(SCD_Struct_MK21)path;
-(NSData *)image;
-(double)scale;
-(void)setPath:(SCD_Struct_MK21)arg1 ;
@end

