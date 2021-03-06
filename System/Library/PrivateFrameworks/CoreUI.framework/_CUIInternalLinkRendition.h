/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, CUIStructuredThemeStore, CUIRenditionKey;

@interface _CUIInternalLinkRendition : CUIThemeRendition {

	unsigned _nimages;
	CGRect _imageRect[16];
	CGImage* _image[16];
	CGImageRef _unslicedImage;
	CUIRenditionMetrics* _renditionMetrics;
	CUIRenditionSliceInformation* _sliceInformation;
	CGRect _frame;
	CUIStructuredThemeStore* _sourceProvider;
	CUIRenditionKey* _referenceKey;
	CGSize _originalUncroppedSize;
	CGRect _alphaCroppedFrame;

}
-(CGImageRef)unslicedImage;
-(id)linkingToRendition;
-(CGImageRef)_sourceImage;
-(BOOL)isTiled;
-(id)imageForSliceIndex:(long long)arg1 ;
-(BOOL)isScaled;
-(id)maskForSliceIndex:(long long)arg1 ;
-(BOOL)edgesOnly;
-(id)sliceInformation;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(void)_setStructuredThemeStore:(id)arg1 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(CGSize)unslicedSize;
-(CGRect)_destinationFrame;
-(void)_fillOutImageSlices;
-(BOOL)isInternalLink;
-(void)dealloc;
-(id)metrics;
-(CGSize)originalUncroppedSize;
-(CGRect)alphaCroppedRect;
@end

