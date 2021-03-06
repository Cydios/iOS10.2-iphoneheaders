/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXHearingSupport/AXHearingSupport-Structs.h>
@class CHManager, AXCloudKitHelper, NSManagedObjectContext;

@interface TTYDatabaseHelper : NSObject {

	sqlite3Ref _database;
	CHManager* _callHistoryManager;
	AXCloudKitHelper* _cloudKitHelper;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
+(id)sharedHelper;
-(id)init;
-(void)dealloc;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)ttyDirectoryPath;
-(id)ttyDatabaseFilePath;
-(void)storesWillChange:(id)arg1 ;
-(void)contentDidUpdate:(id)arg1 ;
-(void)callHistoryDBDidChange:(id)arg1 ;
-(BOOL)deleteConversationsWithCallUIDs:(id)arg1 ;
-(BOOL)saveIfPossible;
-(BOOL)contactPathWasUsedForTTY:(id)arg1 ;
-(BOOL)contactIDIsTTYContact:(id)arg1 ;
-(id)conversationForCallUID:(id)arg1 ;
-(BOOL)saveConversation:(id)arg1 ;
-(BOOL)deleteConversationWithCallUID:(id)arg1 ;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(void)setupDatabase;
@end

