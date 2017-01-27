/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSIndexSet;


@protocol MSPContainerEditReplacement <MSPContainerEdit>
@property (nonatomic,readonly) NSArray * originalImmutableObjects; 
@property (nonatomic,readonly) NSArray * replacementImmutableObjects; 
@property (nonatomic,readonly) NSIndexSet * indexesOfReplacedObjects; 
@required
-(NSArray *)originalImmutableObjects;
-(NSArray *)replacementImmutableObjects;
-(NSIndexSet *)indexesOfReplacedObjects;

@end
