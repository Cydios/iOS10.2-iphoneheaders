/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class NSString, MSPMapsPaths, RAPStorage, NSDictionary;

@interface PersistenceManager : NSObject <GEOResourceManifestTileGroupObserver> {

	NSString* _settingsDirectoryPath;
	MSPMapsPaths* _locations;
	RAPStorage* _directionsRecordingsStorage;
	RAPStorage* _searchRecordingsStorage;
	NSDictionary* _directionsCache;
	NSDictionary* _directionsCacheObjectThatFailedToBeWrittenBecauseTheDeviceWasLockedLastTimeWeChecked;
	NSString* _directionsCacheKeyThatFailedToBeWrittenBecauseTheDeviceWasLockedLastTimeWeChecked;

}

@property (nonatomic,readonly) NSString * settingsDirectoryPath;              //@synthesize settingsDirectoryPath=_settingsDirectoryPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)readBookmarksDictionary;
-(BOOL)writeFailedMSPDirectionsRequests:(id)arg1 error:(id*)arg2 ;
-(BOOL)addDataToDirectionsCache:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)directionsCacheDataArrayForKey:(id)arg1 ;
-(id)readFailedMSPSearches;
-(BOOL)writeFailedMSPSearches:(id)arg1 error:(id*)arg2 ;
-(BOOL)addPaginationDataToDirectionsCache:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)writeMSPHistory:(id)arg1 error:(id*)arg2 ;
-(BOOL)writePins:(id)arg1 error:(id*)arg2 ;
-(id)readTransitAppRanker;
-(BOOL)writeTransitAppRanker:(id)arg1 error:(id*)arg2 ;
-(id)directionsCachePaginationArrayForKey:(id)arg1 ;
-(id)readFailedDirectionsRequests;
-(void)deleteFailedDirectionsRequests;
-(BOOL)writeFailedDirectionsRequests:(id)arg1 error:(id*)arg2 ;
-(void)deleteFailedSearches;
-(id)readFailedMSPDirectionsRequests;
-(BOOL)writeDirections:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeMSPHistoryWithLegacyHistoryItems:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeSearchResults:(id)arg1 toType:(int)arg2 error:(id*)arg3 ;
-(id)readDirections;
-(BOOL)checkOrCreateHistorySynced;
-(id)readNanoHistory;
-(id)readFailedSearches;
-(BOOL)_deleteSyncedFileWithName:(id)arg1 ;
-(NSString *)settingsDirectoryPath;
-(void)_syncDirectionsCacheIfNeeded;
-(id)cacheKeyForWaypoints:(id)arg1 ;
-(id)_searchResultsSettingsPath:(int)arg1 ;
-(BOOL)_writeFailedHistoryItems:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)_writeFailedMSPHistoryItems:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)_writeMSPHistoryFromHistoryItems:(id)arg1 syncItemsToRAPStorage:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_createSyncedFileIfNotExistsWithName:(id)arg1 ;
-(BOOL)checkOrCreateBookmarksSynced;
-(void)deleteTransitAppRanker;
-(id)initWithPersistenceData:(id)arg1 ;
-(id)directionsCache;
-(id)_readFailedItemsAtPath:(id)arg1 ;
-(void)_deleteDirectionsCacheFile;
-(id)_readFailedMSPItemsAtPath:(id)arg1 ;
-(void)deleteDirections;
-(id)readLegacyBookmarksDictionary;
-(id)readMSPHistoryDictionary;
-(id)_canonicalHistoryItemForItem:(id)arg1 inHistory:(id)arg2 ;
-(id)readMSPHistory;
-(id)readSearchResultsType:(int)arg1 error:(id*)arg2 ;
-(id)readNanoHistoryDictionary;
-(BOOL)writeLegacyBookmarks:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeFailedSearches:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeMSPBookmarks:(id)arg1 error:(id*)arg2 ;
-(void)_cleanDirectionsCache;
-(BOOL)writeLegacyHistory:(id)arg1 error:(id*)arg2 ;
-(BOOL)_writeDirectionsCache:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteHistorySyncedFile;
-(id)readLegacyHistory;
-(void)deleteLegacyBookmarks;
-(BOOL)deleteBookmarksSyncedFile;
-(id)readMSPBookmarksDictionary;
-(id)readLegacyBookmarks;
-(id)readMSPBookmarks;
-(void)dealloc;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)_deleteItemAtPath:(id)arg1 ;
-(id)readPins;
@end
