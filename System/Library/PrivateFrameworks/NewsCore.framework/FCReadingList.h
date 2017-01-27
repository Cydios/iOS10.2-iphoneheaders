/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCPrivateZoneController.h>
#import <libobjc.A.dylib/FCReadingListContentControllerObserving.h>

@class NSMutableDictionary, FCReadingListContentController, FCCloudContext, NSArray, FCMutexLock, NSString;

@interface FCReadingList : FCPrivateZoneController <FCReadingListContentControllerObserving> {

	NSMutableDictionary* _entriesByArticleID;
	FCReadingListContentController* _readingListContentController;
	FCCloudContext* _cloudContext;
	NSArray* _allSortedEntriesInReadingList;
	FCMutexLock* _itemsLock;

}

@property (nonatomic,retain) NSMutableDictionary * entriesByArticleID;                                   //@synthesize entriesByArticleID=_entriesByArticleID - In the implementation block
@property (nonatomic,retain) FCReadingListContentController * readingListContentController;              //@synthesize readingListContentController=_readingListContentController - In the implementation block
@property (nonatomic,retain) FCCloudContext * cloudContext;                                              //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,retain) NSArray * allSortedEntriesInReadingList;                                    //@synthesize allSortedEntriesInReadingList=_allSortedEntriesInReadingList - In the implementation block
@property (nonatomic,retain) FCMutexLock * itemsLock;                                                    //@synthesize itemsLock=_itemsLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)desiredKeys;
+(BOOL)requiresPushNotificationSupport;
+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(id)commandStoreFileName;
+(long long)commandQueueUrgency;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4 ;
-(FCMutexLock *)itemsLock;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2 ;
-(void)setItemsLock:(FCMutexLock *)arg1 ;
-(FCCloudContext *)cloudContext;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(id)allSortedArticleIDsInReadingList;
-(BOOL)isArticleOnReadingList:(id)arg1 ;
-(NSMutableDictionary *)entriesByArticleID;
-(id)_entryIDForArticleID:(id)arg1 ;
-(void)_addedArticleIDs:(id)arg1 removedArticleIDs:(id)arg2 ;
-(void)removeArticleFromReadingList:(id)arg1 ;
-(void)addArticleToReadingList:(id)arg1 ;
-(NSArray *)allSortedEntriesInReadingList;
-(id)allNonConsumedArticleIDsInReadingList;
-(FCReadingListContentController *)readingListContentController;
-(unsigned long long)_maxCountOfArticlesAvailableOffline;
-(id)articleIDsAvailableForOfflineReading;
-(void)enableDownloadingForOfflineReading;
-(BOOL)isArticleAvailableForOfflineReading:(id)arg1 ;
-(void)notifyWhenFinishedDownloadingForOfflineReadingWithTimeout:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)expressInterestInOfflineArticlesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setEntriesByArticleID:(NSMutableDictionary *)arg1 ;
-(void)_invalidateAllSortedEntriesInReadingList;
-(void)readingListContentControllerDidUpdateArticleAvailabilityInOfflineMode:(id)arg1 ;
-(BOOL)shouldHideHeadline:(id)arg1 ;
-(void)toggleArticleIsOnReadingList:(id)arg1 ;
-(id)dateArticleWasAdded:(id)arg1 ;
-(id)allNonConsumedArticleIDsInReadingListForOfflineReading;
-(void)setReadingListContentController:(FCReadingListContentController *)arg1 ;
-(void)setAllSortedEntriesInReadingList:(NSArray *)arg1 ;
@end
