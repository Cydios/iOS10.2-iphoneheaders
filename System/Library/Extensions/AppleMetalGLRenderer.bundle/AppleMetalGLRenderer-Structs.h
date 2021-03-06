/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Extensions/AppleMetalGLRenderer.bundle/AppleMetalGLRenderer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class <MTLRenderPipelineStateSPI>;

typedef struct {
	unsigned fragmentUsesDiscard : 1;
	unsigned fragmentWritesSampleMask : 1;
	unsigned fragmentWritesDepth : 1;
	unsigned vertexRegisterSpill : 1;
	unsigned fragmentRegisterSpill : 1;
	unsigned fragmentReadsFramebufferValues : 1;
	unsigned fragmentPunchThrough : 1;
	unsigned vertexWritesPointSize : 1;
	unsigned reserved : 56;
} SCD_Struct_GL0;

typedef struct {
	<MTLRenderPipelineStateSPI>* renderPipelineState;
	SCD_Struct_GL0 usageFlags;
} SCD_Struct_GL1;

