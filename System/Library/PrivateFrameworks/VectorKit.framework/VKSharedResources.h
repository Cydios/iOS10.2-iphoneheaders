/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class GEOResourceManifestConfiguration, VKIconManager, VKShieldManager, VKGGLTextureManager, VKResourceManager;

@interface VKSharedResources : NSObject {

	GEOResourceManifestConfiguration* _manifestConfiguration;
	VKIconManager* _iconManager;
	VKShieldManager* _shieldManager;
	VKGGLTextureManager* _gglTextureManager;
	VKResourceManager* _resourceManager;
	shared_ptr<md::StylesheetVendor>* _stylesheetVendor;
	shared_ptr<ggl::Device>* _device;
	unique_ptr<ggl::AlphaAtlas, std::__1::default_delete<ggl::AlphaAtlas> >* _alphaAtlas;
	unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas> >* _highInflationAlphaAtlas;
	unique_ptr<ggl::IsoAlphaAtlas, std::__1::default_delete<ggl::IsoAlphaAtlas> >* _isoAlphaAtlas;
	unique_ptr<ggl::DistanceAtlas, std::__1::default_delete<ggl::DistanceAtlas> >* _distanceAtlas;
	shared_ptr<ggl::StandardLibrary>* _shaderLibrary;
	mutex _referenceCountingLock;
	unsigned _referenceCount;

}

@property (nonatomic,readonly) VKIconManager * iconManager;                                     //@synthesize iconManager=_iconManager - In the implementation block
@property (nonatomic,readonly) VKShieldManager * shieldManager;                                 //@synthesize shieldManager=_shieldManager - In the implementation block
@property (nonatomic,readonly) VKGGLTextureManager * gglTextureManager;                         //@synthesize gglTextureManager=_gglTextureManager - In the implementation block
@property (nonatomic,readonly) VKResourceManager * resourceManager;                             //@synthesize resourceManager=_resourceManager - In the implementation block
@property (nonatomic,readonly) shared_ptr<md::StylesheetVendor>* stylesheetVendor;              //@synthesize stylesheetVendor=_stylesheetVendor - In the implementation block
@property (nonatomic,readonly) Device* device; 
@property (nonatomic,readonly) AlphaAtlas* alphaAtlas; 
@property (nonatomic,readonly) IsoAlphaAtlas* highInflationAlphaAtlas; 
@property (nonatomic,readonly) IsoAlphaAtlas* isoAlphaAtlas; 
@property (nonatomic,readonly) DistanceAtlas* distanceAtlas; 
@property (nonatomic,readonly) const StandardLibrary* shaderLibrary; 
+(id)sharedResourcesForConfiguration:(id)arg1 ;
-(void)dealloc;
-(AlphaAtlas*)alphaAtlas;
-(IsoAlphaAtlas*)highInflationAlphaAtlas;
-(IsoAlphaAtlas*)isoAlphaAtlas;
-(DistanceAtlas*)distanceAtlas;
-(const StandardLibrary*)shaderLibrary;
-(id)_initWithConfiguration:(id)arg1 device:(const shared_ptr<ggl::Device>*)arg2 standardLibrary:(const shared_ptr<ggl::StandardLibrary>*)arg3 ;
-(void)addResourceUser;
-(void)removeResourceUser;
-(VKGGLTextureManager *)gglTextureManager;
-(VKResourceManager *)resourceManager;
-(shared_ptr<md::StylesheetVendor>*)stylesheetVendor;
-(void)purge;
-(VKIconManager *)iconManager;
-(VKShieldManager *)shieldManager;
-(Device*)device;
@end

