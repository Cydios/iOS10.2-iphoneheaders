/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>

@protocol MDLMeshBuffer;
@class MDLMaterial, MDLSubmeshTopology, NSString;

@interface MDLSubmesh : NSObject <MDLNamed> {

	MDLMaterial* _material;
	id<MDLMeshBuffer> _indexBuffer;
	unsigned long long _indexCount;
	unsigned long long _indexType;
	long long _geometryType;
	MDLSubmeshTopology* _topology;
	NSString* _name;

}

@property (nonatomic,retain,readonly) id<MDLMeshBuffer> indexBuffer;              //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long indexCount;                     //@synthesize indexCount=_indexCount - In the implementation block
@property (nonatomic,readonly) unsigned long long indexType;                      //@synthesize indexType=_indexType - In the implementation block
@property (nonatomic,readonly) long long geometryType;                            //@synthesize geometryType=_geometryType - In the implementation block
@property (nonatomic,retain) MDLMaterial * material;                              //@synthesize material=_material - In the implementation block
@property (nonatomic,retain) MDLSubmeshTopology * topology;                       //@synthesize topology=_topology - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
+(id)submeshWithSCNGeometryElement:(id)arg1 ;
+(id)newSubmeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2 ;
+(id)submeshWithSCNGeometryElement:(id)arg1 bufferAllocator:(id)arg2 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned long long)arg3 indexType:(unsigned long long)arg4 geometryType:(long long)arg5 material:(id)arg6 ;
-(id)indexBufferAsIndexType:(unsigned long long)arg1 ;
-(void)debugPrintToFile:(_sFILE*)arg1 ;
-(MDLAABBRef)boundingBoxForMesh:(id)arg1 ;
-(void)setTopology:(MDLSubmeshTopology *)arg1 ;
-(id)initWithMDLSubmesh:(id)arg1 indexType:(unsigned long long)arg2 geometryType:(long long)arg3 ;
-(id)initWithIndexBuffer:(id)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 geometryType:(long long)arg4 material:(id)arg5 ;
-(id)initWithName:(id)arg1 indexBuffer:(id)arg2 indexCount:(unsigned long long)arg3 indexType:(unsigned long long)arg4 geometryType:(long long)arg5 material:(id)arg6 topology:(id)arg7 ;
-(unsigned long long)indexCount;
-(long long)geometryType;
-(MDLSubmeshTopology *)topology;
-(unsigned long long)indexType;
-(id<MDLMeshBuffer>)indexBuffer;
-(void)setMaterial:(MDLMaterial *)arg1 ;
-(MDLMaterial *)material;
@end

