/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSageFillData.h>

@class TSCH3DFill, NSMutableArray;

@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData> {

	TSCH3DFill* mFill;
	NSMutableArray* mTextures;
	NSMutableArray* mTextureBlendModes;

}
+(id)dataWithFill:(id)arg1 ;
-(id)fillSetIdentifier;
-(id)lightingModel;
-(Color)emissive;
-(BOOL)isLayerEnabledForIndex:(unsigned long long)arg1 ;
-(id)textureForIndex:(unsigned long long)arg1 ;
-(int)layerTilingModeForIndex:(unsigned long long)arg1 ;
-(BOOL)layerIsEnvironmentMapForIndex:(unsigned long long)arg1 ;
-(long long)layerBlendModeForIndex:(unsigned long long)arg1 ;
-(id)initWithFill:(id)arg1 ;
-(unsigned long long)diffuseCount;
-(id)diffuseMaterial;
-(void)p_addMaterial:(id)arg1 blendMode:(long long)arg2 ;
-(unsigned long long)modulateCount;
-(id)modulateMaterial;
-(id)phongMaterials;
-(id)materialAtIndex:(unsigned long long)arg1 ;
-(float)layerScaleForIndex:(unsigned long long)arg1 ;
-(float)layerRotationForIndex:(unsigned long long)arg1 ;
-(id)layerLightenPercentageForIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)environment;
-(float)opacity;
-(Color)diffuse;
-(Color)specular;
-(float)shininess;
-(unsigned long long)layerCount;
@end

