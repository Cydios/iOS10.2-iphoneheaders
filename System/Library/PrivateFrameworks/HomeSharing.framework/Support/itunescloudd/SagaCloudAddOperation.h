/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class ML3MusicLibrary;

@interface SagaCloudAddOperation : CloudLibraryOperation {

	ML3MusicLibrary* _musicLibrary;

}

@property (nonatomic,retain) ML3MusicLibrary * musicLibrary;              //@synthesize musicLibrary=_musicLibrary - In the implementation block
-(void)setMusicLibrary:(ML3MusicLibrary *)arg1 ;
-(unsigned)currentDatabaseRevision;
-(id)cloudAddRequestWithDatabaseID:(unsigned)arg1 ;
-(void)logCloudAddRequestDescription;
-(void)processAddedItems:(id)arg1 ;
-(void)removePendingAddedItemsForPermanentlyFailedOperation;
-(id)init;
-(BOOL)isPersistent;
-(void)main;
-(ML3MusicLibrary *)musicLibrary;
@end
