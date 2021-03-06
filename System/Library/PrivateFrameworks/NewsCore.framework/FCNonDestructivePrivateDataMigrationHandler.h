/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCNonDestructivePrivateDataActionProvider;
@class NSArray;

@interface FCNonDestructivePrivateDataMigrationHandler : NSObject {

	BOOL _privateDataSyncingEnabled;
	id<FCNonDestructivePrivateDataActionProvider> _privateDataActionProvider;
	NSArray* _privateZoneControllers;

}

@property (nonatomic,retain) id<FCNonDestructivePrivateDataActionProvider> privateDataActionProvider;              //@synthesize privateDataActionProvider=_privateDataActionProvider - In the implementation block
@property (nonatomic,copy) NSArray * privateZoneControllers;                                                       //@synthesize privateZoneControllers=_privateZoneControllers - In the implementation block
@property (assign,getter=isPrivateDataSyncingEnabled,nonatomic) BOOL privateDataSyncingEnabled;                    //@synthesize privateDataSyncingEnabled=_privateDataSyncingEnabled - In the implementation block
-(id)init;
-(BOOL)isPrivateDataSyncingEnabled;
-(id)initWithPrivateDataActionProvider:(id)arg1 privateZoneControllers:(id)arg2 privateDataSyncingEnabled:(BOOL)arg3 ;
-(void)handleMigration;
-(void)setPrivateDataSyncingEnabled:(BOOL)arg1 ;
-(NSArray *)privateZoneControllers;
-(id<FCNonDestructivePrivateDataActionProvider>)privateDataActionProvider;
-(void)setPrivateDataActionProvider:(id<FCNonDestructivePrivateDataActionProvider>)arg1 ;
-(void)setPrivateZoneControllers:(NSArray *)arg1 ;
@end

