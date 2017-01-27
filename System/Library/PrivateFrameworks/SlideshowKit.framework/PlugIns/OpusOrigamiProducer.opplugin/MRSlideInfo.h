/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSString;

@interface MRSlideInfo : NSObject {

	BOOL _isMain;
	NSString* _assetPath;
	unsigned long long _index;
	double _aspectRatio;
	double _time;
	double _scale;
	double _rotation;
	id _player;
	CGPoint _center;

}

@property (nonatomic,copy) NSString * assetPath;                    //@synthesize assetPath=_assetPath - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) double aspectRatio;                    //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) double time;                           //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) CGPoint center;                        //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) double scale;                          //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double rotation;                       //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) id player;                             //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL isMain;                           //@synthesize isMain=_isMain - In the implementation block
-(void)setIsMain:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setScale:(double)arg1 ;
-(CGPoint)center;
-(double)scale;
-(void)setCenter:(CGPoint)arg1 ;
-(unsigned long long)index;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(void)setIndex:(unsigned long long)arg1 ;
-(double)time;
-(void)setTime:(double)arg1 ;
-(BOOL)isMain;
-(id)player;
-(void)setPlayer:(id)arg1 ;
-(double)aspectRatio;
-(void)setAspectRatio:(double)arg1 ;
-(NSString *)assetPath;
-(void)setAssetPath:(NSString *)arg1 ;
@end
