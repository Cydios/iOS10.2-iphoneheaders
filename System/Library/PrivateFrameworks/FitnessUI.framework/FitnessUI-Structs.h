/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGGradient* CGGradientRef;

typedef struct CGContext* CGContextRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	unsigned long long section;
	unsigned long long item;
} SCD_Struct_FI6;

typedef struct {
	SCD_Struct_FI6 first;
	SCD_Struct_FI6 last;
} SCD_Struct_FI7;

typedef struct CGColor* CGColorRef;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	CGSize field1;
	CGSize field2;
} SCD_Struct_FI10;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	float m00;
	float m01;
	float m02;
	float m03;
	float m10;
	float m11;
	float m12;
	float m13;
	float m20;
	float m21;
	float m22;
	float m23;
	float m30;
	float m31;
	float m32;
	float m33;
} SCD_Struct_FI12;

typedef union GLKMatrix4 {
	SCD_Struct_FI12 field1;
	float m[16];
} GLKMatrix4;

typedef struct _UniformBinding {
	int location;
	char* name;
} UniformBinding;

typedef struct _UniformBindings {
	UniformBinding viewProjectionMatrix;
	UniformBinding modelMatrix;
	UniformBinding environmentMatrix;
	UniformBinding cameraPosition;
	UniformBinding useTexture;
	UniformBinding useTextureShine;
	UniformBinding useFullColorEnamel;
	UniformBinding color;
	UniformBinding enamelColor;
	UniformBinding colorSampler;
	UniformBinding environmentSampler;
} UniformBindings;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_FI16;

typedef union GLKVector3 {
	SCD_Struct_FI16 field1;
	SCD_Struct_FI16 field2;
	SCD_Struct_FI16 field3;
	float v[3];
} GLKVector3;
