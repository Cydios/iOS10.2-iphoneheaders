/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BCPlist : NSObject {

	NSString* _path;

}

@property (nonatomic,retain,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
+(BOOL)canPromiseItem:(id)arg1 ;
+(id)promisableItemsFromItems:(id)arg1 ;
-(id)books;
-(void)regenerateMissingPersistentIDs;
-(void)generateDirectory;
-(id)entriesWithPath;
-(id)sortedPersistentIDs:(BOOL)arg1 ;
-(id)sortedPaths;
-(void)processDeletesFile;
-(BOOL)replaceItems:(id)arg1 ;
-(id)booksSortedByKey:(id)arg1 ;
-(id)unfilteredPersistentIDs;
-(BOOL)removeItemsByPersistentID:(id)arg1 ;
-(void)removeItemsFromSidecar:(id)arg1 ;
-(id)uploadsByPersistentID;
-(BOOL)isExistingEntry:(id)arg1 ;
-(id)existingPersistentIDs;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(NSString *)path;
-(BOOL)addItems:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)resetPaths;
-(id)paths;
@end

