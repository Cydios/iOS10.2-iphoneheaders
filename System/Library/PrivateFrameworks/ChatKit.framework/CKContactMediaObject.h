/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKCardMediaObject.h>

@class ABVCardRecord, UIImage;

@interface CKContactMediaObject : CKCardMediaObject {

	ABVCardRecord* _vCard;
	UIImage* _vCardImage;

}

@property (nonatomic,retain) ABVCardRecord * vCard;              //@synthesize vCard=_vCard - In the implementation block
@property (nonatomic,retain) UIImage * vCardImage;               //@synthesize vCardImage=_vCardImage - In the implementation block
+(id)UTITypes;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(id)fallbackFilenamePrefix;
-(id)title;
-(id)subtitle;
-(id)icon;
-(int)mediaType;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(CGSize)bbSize;
-(ABVCardRecord *)vCard;
-(id)vCardImageOfSize:(CGSize)arg1 ;
-(Class)coloredBalloonViewClass;
-(void)setVCard:(ABVCardRecord *)arg1 ;
-(UIImage *)vCardImage;
-(void)setVCardImage:(UIImage *)arg1 ;
@end
