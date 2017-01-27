/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNPhysicsBody, <MTLBuffer>, SCNMetalMesh, SCNMetalMeshElement, SCNMetalShadable, SCNMetalRenderPipeline, <MTLRenderPipelineState>, <MTLTexture>, NSArray, NSDictionary, NSMutableSet;

typedef struct _NSZone* NSZoneRef;

typedef struct __C3DNode* C3DNodeRef;

typedef struct __C3DScene* C3DSceneRef;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned char field9[4];
} SCD_Struct_SC3;

typedef struct __C3DMorph* C3DMorphRef;

typedef struct __C3DMesh* C3DMeshRef;

typedef struct SCNVector3 {
	float x;
	float y;
	float z;
} SCNVector3;

typedef struct {
	SCNPhysicsBody* bodyA;
	SCNPhysicsBody* bodyB;
	SCNVector3 anchorA;
	SCNVector3 anchorB;
	SCNVector3 axisA;
	SCNVector3 axisB;
} SCD_Struct_SC7;

typedef union C3DMatrix4x4 {
	float components[16];
	[4 m];
} C3DMatrix4x4;

typedef struct {
	unsigned short selectedAxis;
	 originalPosition;
	 axisDirection;
	 mouseDeltaVector;
} SCD_Struct_SC9;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct _C3DQuaternion {
	float x;
	float y;
	float z;
	float s;
} C3DQuaternion;

typedef struct {
	unsigned short selectedAxis;
	CGPoint originalMouseLocation;
	float rotationSign;
	C3DQuaternion originalRotation;
} SCD_Struct_SC12;

typedef union {
	SCD_Struct_SC9 axisMove;
	SCD_Struct_SC9 planeMove;
	SCD_Struct_SC12 axisRotate;
} SCD_Union_SC13;

typedef struct {
	 positions;
	__C3DQuaternion orientations;
	SCNMatrix4 originalLocalMatrix;
} SCD_Struct_SC14;

typedef struct {
	float field1;
	_ field2;
	_ field3;
	C3DNode field4;
	float field5;
} SCD_Struct_SC15;

typedef struct {
	id field1;
	SCNVector3 field2;
	SCNVector3 field3;
	CGPoint field4;
	CGPoint field5;
	double field6;
} SCD_Struct_SC16;

typedef struct __C3DMaterial* C3DMaterialRef;

typedef struct {
	char vertexIndex;
	char fragmentIndex;
} SCD_Struct_SC18;

typedef struct {
	id field1;
	/*function pointer*/void* field2;
	unsigned field3;
	unsigned field4;
} SCD_Struct_SC19;

typedef struct {
	__C3DFXPassInput field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_SC20;

typedef struct __CFString* CFStringRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	__C3DFXProgram field1;
	_ field2;
	_ field3;
	C3DNode field4;
	_ field5;
	_ field6;
	unsigned char field7;
	3 field8;
	D field9;
	G field10;
	e field11;
	o field12;
	m field13;
	e field14;
	t field15;
	const  field16;
	y field17;
	_ field18;
	_ field19;
	unsigned char field20;
	3 field21;
	D field22;
	F field23;
	X field24;
	P field25;
	a field26;
	short field27;
	short field28;
	_ field29;
	_ field30;
	unsigned char field31;
	3 field32;
	D field33;
	F field34;
	X field35;
	P field36;
	a field37;
	short field38;
	short field39;
	id field40;
	_ field41;
	_ field42;
	unsigned char field43;
	3 field44;
	D field45;
	BOOL field46;
	long field47;
	e field48;
	n field49;
	double field50;
	unsigned short field51;
	t field52;
	a field53;
	t field54;
	e field55;
	short field56;
	_ field57;
	_ field58;
	C3DMaterial field59;
} SCD_Struct_SC23;

typedef struct __C3DBlendStates* C3DBlendStatesRef;

typedef struct {
	__C3DFXProgram field1;
	_ field2;
	_ field3;
	C3DNode field4;
	_ field5;
	_ field6;
	unsigned char field7;
	3 field8;
	D field9;
	G field10;
	e field11;
	o field12;
	m field13;
	e field14;
	t field15;
	const  field16;
	y field17;
	_ field18;
	_ field19;
	unsigned char field20;
	3 field21;
	D field22;
	F field23;
	X field24;
	P field25;
	a field26;
	short field27;
	short field28;
	_ field29;
	_ field30;
	unsigned char field31;
	3 field32;
	D field33;
	F field34;
	X field35;
	P field36;
	a field37;
	short field38;
	short field39;
	id field40;
	_ field41;
	_ field42;
	C3DMaterial field43;
	_ field44;
	_ field45;
	C3DBlendStates field46;
} SCD_Struct_SC25;

typedef struct {
	unsigned char format;
	unsigned char sampleCount;
	unsigned char textureUsage;
	unsigned renderToTexture : 1;
	unsigned forceTextureRect : 1;
	unsigned viewportDependant : 1;
	unsigned renderToIOSurface : 1;
	unsigned mipmapped : 1;
	unsigned char padding[4];
} SCD_Struct_SC26;

typedef struct __C3DFXTechnique* C3DFXTechniqueRef;

typedef struct __C3DEngineContext* C3DEngineContextRef;

typedef struct {
	SCNPhysicsBody* characterBody;
	SCNVector3 direction;
	double velocity;
	double jumpSpeed;
} SCD_Struct_SC29;

typedef struct __C3DRasterizerStates* C3DRasterizerStatesRef;

typedef struct {
	__C3DFXPassInstance passInstance;
	__C3DLightingSystem lightingSystem;
	__C3DDynamicBatchingSystem dynamicBatchingSystem;
	__C3DFXPass pass;
	BOOL passRequiresLighting;
} SCD_Struct_SC31;

typedef struct float4x4 {
	[4 columns];
} float4x4;

typedef struct SCNSceneBuffer {
	float4x4 viewTransform;
	float4x4 inverseViewTransform;
	float4x4 projectionTransform;
	float4x4 viewProjectionTransform;
	float4x4 viewToCubeTransform;
	 ambientLightingColor;
	 fogColor;
	 fogParameters;
	 inverseResolution;
	float time;
	float sinTime;
	float cosTime;
	float random01;
	float environmentIntensity;
	float4x4 inverseProjectionTransform;
	float4x4 inverseViewProjectionTransform;
} SCNSceneBuffer;

typedef struct {
	<MTLBuffer>* buffer;
	unsigned long long offset;
	unsigned long long size;
} SCD_Struct_SC34;

typedef struct float2x3 {
	[2 columns];
} float2x3;

typedef struct {
	float4x4 modelTransform;
	float4x4 normalTransform;
	float4x4 modelViewTransform;
	float4x4 modelViewProjectionTransform;
	float2x3 boundingBox;
	float2x3 worldBoundingBox;
	__C3DNode instanceNode;
	unsigned flags;
	unsigned probeCacheIndex;
	unsigned boneTransformSizeWritten;
} SCD_Struct_SC36;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> > {
	float __first_;
} compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> >;

typedef struct {
	long long count;
	C3DLight lights[8__];
	C3DLightRuntimeData lightsData[8__];
} SCD_Struct_SC40;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> {
	__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> __first_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> > > {
	__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> __first_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> > __second_;
} compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> > > {
	compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData> > > {
	unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData> > >;

typedef struct unordered_map<unsigned long long, SCNMTLLightSetData, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCNMTLLightSetData> > > {
	hash_table<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, SCNMTLLightSetData> > > __table_;
} unordered_map<unsigned long long, SCNMTLLightSetData, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCNMTLLightSetData> > >;

typedef struct {
	unordered_map<unsigned long long, SCNMTLLightSetData, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCNMTLLightSetData> > > frameLightingSetDatas;
	unsigned long long currentLightingHashKey;
	SCD_Struct_SC40 currentLightingDesc;
} SCD_Struct_SC48;

typedef struct {
	void vertexBuffer;
	unsigned long long vertexOffset;
	void fragmentBuffer;
	unsigned long long fragmentOffset;
} SCD_Struct_SC49;

typedef struct {
	void vertexTexture;
	void fragmentTexture;
} SCD_Struct_SC50;

typedef struct {
	__C3DRasterizerStates rasterizerStates;
	__C3DMesh mesh;
	SCNMetalMesh* metalMesh;
	__C3DMeshElement meshElement;
	SCNMetalMeshElement* metalMeshElement;
	__C3DFXProgram program;
	__C3DMaterial material;
	__C3DGeometry geometry;
	SCNMetalShadable* metalShadable;
	__C3DEffectCommonProfile commonProfile;
	__C3DBlendStates blendStates;
	 blendColor;
	__C3DNode node;
	unsigned long long vertexDescriptorHash;
	SCNMetalRenderPipeline* renderPipeline;
	SCD_Struct_SC49 buffers[31];
	SCD_Struct_SC50 textures[31];
	SCD_Struct_SC50 samplerStates[16];
} SCD_Struct_SC51;

typedef struct {
	C3DFXPass debugLightMeshPass[7__];
	C3DFXPass lightPasses[7__];
	C3DMesh lightMeshes[7__];
	BOOL resourcesAreReady;
} SCD_Struct_SC52;

typedef struct {
	unsigned long long pixelFormat;
	unsigned long long depthFormat;
	unsigned long long stencilFormat;
	unsigned long long sampleCount;
	<MTLRenderPipelineState>* replaceRPS;
	<MTLRenderPipelineState>* overRPS;
} SCD_Struct_SC53;

typedef struct {
	<MTLTexture>* backgroundTexture;
	<MTLTexture>* overlayTexture;
	<MTLTexture>* stencilTexture;
} SCD_Struct_SC54;

typedef struct {
	unsigned long long pixelFormat;
	unsigned long long sampleCount;
	<MTLRenderPipelineState>* displayCubemapPS;
	<MTLRenderPipelineState>* displayTexture2DPS;
} SCD_Struct_SC55;

typedef struct {
	<MTLTexture>* currentColors[4];
	<MTLTexture>* currentDepth;
	<MTLTexture>* currentStencil;
	<MTLTexture>* mainColors[4];
	<MTLTexture>* mainDepth;
	<MTLTexture>* outputColors[4];
	<MTLTexture>* outputDepth;
} SCD_Struct_SC56;

typedef struct __C3DImage* C3DImageRef;

typedef struct {
	unsigned char field1[8];
} SCD_Struct_SC58;

typedef struct {
	__C3DFXProgram field1;
	_ field2;
	_ field3;
	C3DNode field4;
	_ field5;
	_ field6;
	unsigned char field7;
	3 field8;
	D field9;
	G field10;
	e field11;
	o field12;
	m field13;
	e field14;
	t field15;
	const  field16;
	y field17;
	_ field18;
	_ field19;
	C3DMesh field20;
	_ field21;
	_ field22;
	C3DMesh field23;
	_ field24;
	_ field25;
	C3DMaterial field26;
	E field27;
	long field28;
	e field29;
	m field30;
	e field31;
	n field32;
	t field33;
	SCD_Struct_SC58 field34;
	_ field35;
	_ field36;
	unsigned char field37;
	3 field38;
	D field39;
	F field40;
	X field41;
	P field42;
	a field43;
	short field44;
	short field45;
	unsigned field46;
	BOOL field47;
	BOOL field48;
	BOOL field49;
	BOOL field50;
} SCD_Struct_SC59;

typedef struct {
	__C3DEnginePipeline field1;
	_ field2;
	_ field3;
	C3DNode field4;
	_ field5;
	_ field6;
	unsigned char field7;
	3 field8;
	D field9;
	F field10;
	X field11;
	P field12;
	a field13;
	short field14;
	short field15;
	unsigned field16;
	n field17;
	short field18;
	t field19;
	a field20;
	n field21;
	char field22;
	e field23;
	int field24;
	_ field25;
	_ field26;
	C3DEngineContext field27;
	BOOL field28;
	BOOL field29;
} SCD_Struct_SC60;

typedef struct SCNVector4 {
	float x;
	float y;
	float z;
	float w;
} SCNVector4;

typedef struct _compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > {
	c3dPhysicsField __first_;
} compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> >;

typedef struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > {
	c3dPhysicsField __begin_;
	c3dPhysicsField __end_;
	compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > __end_cap_;
} vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> >;

typedef struct c3dAether {
	vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > _fields;
} c3dAether;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __C3DParticleSystem* C3DParticleSystemRef;

typedef struct SCNMatrix4 {
	float m11;
	float m12;
	float m13;
	float m14;
	float m21;
	float m22;
	float m23;
	float m24;
	float m31;
	float m32;
	float m33;
	float m34;
	float m41;
	float m42;
	float m43;
	float m44;
} SCNMatrix4;

typedef struct __C3DFXPass* C3DFXPassRef;

typedef struct {
	__C3DFramebuffer frameBuffer;
	__C3DFramebuffer multisamplingFrameBuffer;
	CGSize drawableSize;
} SCD_Struct_SC69;

typedef struct C3DColor4 {
	/*function pointer*/void* ;
	float rgba[4];
	C3DQuaternion) ;
} C3DColor4;

typedef struct CGImage* CGImageRef;

typedef struct __C3DSceneSource* C3DSceneSourceRef;

typedef struct __C3DLibrary* C3DLibraryRef;

typedef struct __C3DHitTestResult* C3DHitTestResultRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __C3DTextureProxy* C3DTextureProxyRef;

typedef struct {
	BOOL enableVertexWeldingAtImport;
	unsigned char boundaryInterpolationRule;
	unsigned char faceVaryingInterpolationRule;
	unsigned char normalSmoothingMode;
} SCD_Struct_SC77;

typedef struct __C3DSkinner* C3DSkinnerRef;

typedef struct {
	[16 field1];
} SCD_Struct_SC79;

typedef struct {
	_ field1;
	_ field2;
	C3DFXTechnique field3;
	_ field4;
	_ field5;
	C3DEngineContext field6;
	void field7;
	_ field8;
	_ field9;
	C3DFXPass field10;
	_ field11;
	_ field12;
	unsigned char field13;
	3 field14;
	D field15;
	F field16;
	X field17;
	P field18;
	const  field19;
	o field20;
	g field21;
	const  field22;
	a field23;
	m field24;
	Ob field25;
	j field26;
	e field27;
	char field28;
	t field29;
	double field30;
	void field31;
	_ field32;
	_ field33;
	unsigned char field34;
	3 field35;
	D field36;
	R field37;
	e field38;
	n field39;
	double field40;
	e field41;
	const  field42;
	e field43;
	const  field44;
	E field45;
	long field46;
	e field47;
	m field48;
	e field49;
	n field50;
	t field51;
	long long field52;
} SCD_Struct_SC80;

typedef struct {
	SCNPhysicsBody* bodyA;
	SCNPhysicsBody* bodyB;
	SCNVector3 anchorA;
	SCNVector3 anchorB;
} SCD_Struct_SC81;

typedef struct __C3DFXProgram* C3DFXProgramRef;

typedef struct __CFSet* CFSetRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct __C3DRendererElementProgramHashCode* C3DRendererElementProgramHashCodeRef;

typedef struct {
	int stage;
	NSArray* arguments;
	NSDictionary* customBlocks;
	__C3DFXPass pass;
} SCD_Struct_SC86;

typedef struct __C3DTexture* C3DTextureRef;

typedef struct {
	unsigned long long verticesStride;
	unsigned long long colorsStride;
	unsigned long long uvsStride;
	char* verticesData;
	char* colorsData;
	char* uvsData;
} SCD_Struct_SC88;

typedef struct {
	__C3DFXProgram weakProgram;
	unsigned baseIndex;
	unsigned baseVertex;
	unsigned vertexSize;
	unsigned allocatedVerticesSize;
	unsigned allocatedIndicesSize;
	__C3DImage textureImage;
	__C3DTexture texture;
	unsigned drawMode;
	BOOL orthographic;
	BOOL clearDepthBuffer;
	BOOL enableDepthTest;
	BOOL enableCulling;
	BOOL isDynamic;
	__C3DMesh mesh;
	__C3DMeshElement meshElement;
	SCD_Struct_SC88 _cache;
	NSMutableSet* _usedMeshes;
	NSMutableSet* _freeMeshes;
	NSMutableSet* _usedMeshElements;
	NSMutableSet* _freeMeshElements;
} SCD_Struct_SC89;

typedef struct {
	__C3DImage texture;
	CGSize textureSize;
	BOOL isRetina;
} SCD_Struct_SC90;

typedef struct {
	SCD_Struct_SC90 textureInfo;
	double lineHeight;
	short characterWidth_texture;
	double characterWidth_typography;
	short characterHeight_texture;
	/*function pointer*/void* symbolRects;
} SCD_Struct_SC91;

typedef struct _C3DEngineStats {
	unsigned verticesProcessed;
	unsigned primitivesProcessed;
	unsigned drawCount;
	unsigned drawStep;
	unsigned frameCount;
	unsigned fboSwitches;
	unsigned vboSwitches;
	unsigned attSwitches;
	unsigned attEnabling;
	unsigned iboSwitches;
	unsigned vaoSwitches;
	unsigned prgSwitches;
	unsigned texSwitches;
	unsigned rssSwitches;
	unsigned getCount;
	unsigned uniformFloatSent;
	unsigned uniformIntSent;
	unsigned uniformVector2Sent;
	unsigned uniformVector3Sent;
	unsigned uniformVector4Sent;
	unsigned uniformMatrix4Sent;
	unsigned vboUploaded;
	unsigned iboUploaded;
	unsigned texUploaded;
	double cpuTime;
	double cstrTime;
	double phyTime;
	double prtTime;
	double animTime;
	double skinTime;
	double mrphTime;
	double rendTime;
	double twoDTime;
	double delegateTime;
	double glFlushTime;
	double waitDisplayLinkTime;
	double drawableWaitTime;
	double lastDisplayLinkTime;
	unsigned prgCount;
	unsigned texCount;
	unsigned fboCount;
	unsigned vboCount;
	unsigned rboCount;
	unsigned iboCount;
	unsigned cboCount;
	unsigned vaoCount;
	unsigned fboMemory;
	unsigned rboMemory;
	unsigned vboMemory;
	unsigned iboMemory;
	unsigned cboMemory;
	unsigned texMemory;
	unsigned backBufferMemory;
	unsigned depthBuffersMemory;
	double frmAvgTime;
	double frmMinTime;
	double frmMaxTime;
	double frameTimeHistory[60];
	unsigned frameTimeCurrentIndex;
	double startTime;
	double lastFrameTime;
} C3DEngineStats;

typedef struct {
	BOOL initialized;
	BOOL showFullStatistics;
	float fps;
	float waitDisplayLinkTime;
	long long pressedButtonIndex;
	__CFString fpsString;
	__CFString shortString;
	unsigned lightingStatistics[9];
	C3DEngineStats stats;
} SCD_Struct_SC93;

typedef struct C3DSphere {
	 vector;
} C3DSphere;

typedef struct __C3DImageProxy* C3DImageProxyRef;

typedef struct __C3DFramebuffer* C3DFramebufferRef;

typedef struct {
	SCNPhysicsBody* bodyA;
	SCNPhysicsBody* bodyB;
	SCNVector3 axisA;
	SCNVector3 anchorA;
	SCNVector3 axisB;
	SCNVector3 anchorB;
	double minLinearLimit;
	double maxLinearLimit;
	double minAngularLimit;
	double maxAngularLimit;
	double motorTargetLinearVelocity;
	double motorMaximumForce;
	double motorTargetAngularVelocity;
	double motorMaximumTorque;
} SCD_Struct_SC97;

typedef struct __C3DFXGLSLProgram* C3DFXGLSLProgramRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	char field1;
	double field2;
	double field3;
	int field4;
	double field5;
	void field6;
	void field7;
} SCD_Struct_SC100;

typedef struct {
	CGRect field1;
	void field2;
	void field3;
	int field4;
	int field5;
	BOOL field6;
	BOOL field7;
	SCD_Struct_SC100 field8;
	double field9;
} SCD_Struct_SC101;

typedef struct __C3DLOD* C3DLODRef;
