/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem {

	CoreDAVPrincipalItem* _principal;

}

@property (nonatomic,retain) CoreDAVPrincipalItem * principal;              //@synthesize principal=_principal - In the implementation block
+(id)copyParseRules;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setPrincipal:(CoreDAVPrincipalItem *)arg1 ;
-(CoreDAVPrincipalItem *)principal;
-(void)write:(id)arg1 ;
@end
