/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSDInstantAlphaBinaryBitmap : NSObject {

	long long mWidth;
	long long mHeight;
	long long mRowBytes;
	char* mData;

}

@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) long long rowBytes; 
@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) char* data; 
-(id)initWithWidth:(long long)arg1 height:(long long)arg2 rowBytes:(long long)arg3 ;
-(void)unionWithBitmap:(id)arg1 ;
-(id)medianBitmap;
-(void)dealloc;
-(char*)data;
-(long long)width;
-(long long)height;
-(id)initWithWidth:(long long)arg1 height:(long long)arg2 ;
-(long long)rowBytes;
@end

