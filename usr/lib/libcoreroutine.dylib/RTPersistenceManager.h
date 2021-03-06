/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTDiagnostics.h>

@protocol OS_dispatch_queue;
@class RTKeepAliveTransaction, NSObject, NSManagedObjectModel, NSPersistentStoreCoordinator, RTInvocationDispatcher, RTDataProtectionManager, RTMigrationManager, NSString;

@interface RTPersistenceManager : NSObject <RTDiagnostics> {

	BOOL _legacyMigrationsComplete;
	RTKeepAliveTransaction* _markDirtyKeepAliveTransaction;
	NSObject*<OS_dispatch_queue> _queue;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	RTInvocationDispatcher* _dispatcher;
	RTInvocationDispatcher* _preMigrationDispatcher;
	RTDataProtectionManager* _dataProtectionManager;
	RTMigrationManager* _migrationManager;
	NSString* _storeName;
	NSString* _setupVersion;

}

@property (nonatomic,retain) RTKeepAliveTransaction * markDirtyKeepAliveTransaction;                 //@synthesize markDirtyKeepAliveTransaction=_markDirtyKeepAliveTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                                    //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * preMigrationDispatcher;                        //@synthesize preMigrationDispatcher=_preMigrationDispatcher - In the implementation block
@property (nonatomic,retain) RTDataProtectionManager * dataProtectionManager;                        //@synthesize dataProtectionManager=_dataProtectionManager - In the implementation block
@property (nonatomic,retain) RTMigrationManager * migrationManager;                                  //@synthesize migrationManager=_migrationManager - In the implementation block
@property (nonatomic,copy) NSString * storeName;                                                     //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,copy) NSString * setupVersion;                                                  //@synthesize setupVersion=_setupVersion - In the implementation block
@property (assign,nonatomic) BOOL legacyMigrationsComplete;                                          //@synthesize legacyMigrationsComplete=_legacyMigrationsComplete - In the implementation block
+(id)sharedInstance;
+(id)diagnosticFiles;
-(void)_unregisterForNotifications;
-(NSString *)storeName;
-(void)setMigrationManager:(RTMigrationManager *)arg1 ;
-(void)setStoreName:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)_registerForNotifications;
-(void)shutdown;
-(RTMigrationManager *)migrationManager;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(void)createPrivateManagedObjectContext:(/*^block*/id)arg1 ;
-(void)onDataProtectionChange:(id)arg1 ;
-(RTDataProtectionManager *)dataProtectionManager;
-(void)setDataProtectionManager:(RTDataProtectionManager *)arg1 ;
-(void)createPrivateManagedObjectContextForMigration:(/*^block*/id)arg1 ;
-(id)initWithStoreName:(id)arg1 dataProtectionManager:(id)arg2 migrationManager:(id)arg3 ;
-(void)onMigrationNotification:(id)arg1 ;
-(id)_managedObjectModelDirectoryURL;
-(void)_changeModelVersion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_teardownPersistenceStack;
-(BOOL)_persistenceStackInitialized;
-(void)_setupPersistenceStack:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_latestCoreDataModelVersion;
-(id)_managedObjectModelURL:(id)arg1 ;
-(id)_loadManagedObjectModelWithPath:(id)arg1 ;
-(id)_persistentStoreURL;
-(id)_setupPersistentStoreCoordinatorWithObjectModel:(id)arg1 persistentStorePath:(id)arg2 error:(id*)arg3 ;
-(void)resetPersistentStoreWithHandler:(/*^block*/id)arg1 ;
-(BOOL)_setupPersistentStoreWithCoordinator:(id)arg1 persistentStorePath:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)_resetPersistentStoreWithHandler:(/*^block*/id)arg1 ;
-(void)createPrivateManagedObjectContextWithOptions:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_createPrivateManagedObjectContext:(/*^block*/id)arg1 ;
-(void)_onDataProtectionChange:(id)arg1 ;
-(void)_configureDirtyStateForEncryptedDataAvailability:(long long)arg1 ;
-(void)_setupPersistenceStackForEncryptedDataAvailability:(long long)arg1 ;
-(void)_setupPersistenceStack;
-(void)_onMigrationNotification:(id)arg1 ;
-(void)changeModelVersion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTKeepAliveTransaction *)markDirtyKeepAliveTransaction;
-(void)setMarkDirtyKeepAliveTransaction:(RTKeepAliveTransaction *)arg1 ;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(RTInvocationDispatcher *)preMigrationDispatcher;
-(void)setPreMigrationDispatcher:(RTInvocationDispatcher *)arg1 ;
-(NSString *)setupVersion;
-(void)setSetupVersion:(NSString *)arg1 ;
-(BOOL)legacyMigrationsComplete;
-(void)setLegacyMigrationsComplete:(BOOL)arg1 ;
@end

