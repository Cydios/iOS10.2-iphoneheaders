/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <libobjc.A.dylib/VKMapLayer.h>
#import <libobjc.A.dylib/VKStyleManagerObserver.h>

@class NSMutableArray, VKMapModel, NSArray, NSString;

@interface VKAnnotationModel : VKModelObject <VKMapLayer, VKStyleManagerObserver> {

	NSMutableArray* _annotationMarkers;
	SCD_Struct_VK278 _styleTransitionState;
	VKMapModel* _mapModel;
	unique_ptr<AnnotationPipelineStates, std::__1::default_delete<AnnotationPipelineStates> >* _annotationPipelineStates;

}

@property (assign,nonatomic) SCD_Struct_VK281 styleTransitionState;                                             //@synthesize styleTransitionState=_styleTransitionState - In the implementation block
@property (nonatomic,readonly) NSArray * annotationMarkers;                                                     //@synthesize annotationMarkers=_annotationMarkers - In the implementation block
@property (nonatomic,readonly) BOOL needsLayout; 
@property (nonatomic,readonly) const AnnotationPipelineStates* pipelineStates; 
@property (assign,nonatomic) VKMapModel * mapModel;                                                             //@synthesize mapModel=_mapModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<gss::StylesheetManager<gss::PropertyID> >* styleManager; 
+(BOOL)reloadOnStylesheetChange;
-(id)init;
-(void)dealloc;
-(BOOL)needsLayout;
-(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)styleManager;
-(NSArray *)annotationMarkers;
-(void)setMapModel:(VKMapModel *)arg1 ;
-(void)stylesheetDidChange;
-(BOOL)shouldLayoutWithoutStyleManager;
-(id)initWithTarget:(id)arg1 sharedResources:(id)arg2 ;
-(void)gglLayoutScene:(id)arg1 withContext:(LayoutContext*)arg2 renderQueue:(RenderQueue*)arg3 ;
-(unsigned long long)mapLayerPosition;
-(void)setStyleTransitionState:(SCD_Struct_VK281)arg1 ;
-(SCD_Struct_VK281)styleTransitionState;
-(VKMapModel *)mapModel;
-(const AnnotationPipelineStates*)pipelineStates;
-(void)removeAnnotationMarker:(id)arg1 ;
-(void)addAnnotationMarker:(id)arg1 ;
@end

