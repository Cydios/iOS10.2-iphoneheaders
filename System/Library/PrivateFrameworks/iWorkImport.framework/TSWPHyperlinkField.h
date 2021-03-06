/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPSmartField.h>

@class NSURL, TSWPSelection, NSString;

@interface TSWPHyperlinkField : TSWPSmartField {

	NSURL* _url;

}

@property (nonatomic,readonly) TSWPSelection * highlightSelection; 
@property (setter=setURL:,nonatomic,retain) NSURL * url; 
@property (nonatomic,readonly) NSString * displayText; 
@property (nonatomic,readonly) BOOL isInGroupedShape; 
+(id)defaultFieldStyleIdentifier;
+(BOOL)schemeIsValidForURL:(id)arg1 ;
+(BOOL)schemeIsValidForURLReference:(id)arg1 ;
+(id)defaultURLFromDefaultsKey:(id)arg1 defaultValue:(id)arg2 ;
+(id)defaultMailURL;
+(id)newURLFromURLReference:(id)arg1 ;
+(id)urlReferenceFromURL:(id)arg1 ;
+(int)schemeFromURL:(id)arg1 ;
+(id)defaultWebURL;
+(id)defaultFileURL;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 url:(id)arg2 ;
-(void)saveToArchive:(HyperlinkFieldArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const HyperlinkFieldArchive*)arg1 unarchiver:(id)arg2 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(int)smartFieldKind;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 storage:(id)arg2 ;
-(TSWPSelection *)highlightSelection;
-(id)urlReference;
-(void)setURLReference:(id)arg1 ;
-(void)p_performHyperlinkSelector:(SEL)arg1 onStorage:(id)arg2 ;
-(BOOL)isInGroupedShape;
-(id)urlPrefix;
-(BOOL)hasDisplayText;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)url;
-(int)scheme;
-(BOOL)isFileURL;
-(void)setURL:(id)arg1 ;
-(BOOL)allowsEditing;
-(NSString *)displayText;
-(id)filePath;
-(id)fullPath;
@end

