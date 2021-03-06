/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMResidentDeviceDelegate.h>
#import <libobjc.A.dylib/HMCameraSnapshotControlDelegate.h>
#import <libobjc.A.dylib/HMCameraStreamControlDelegate.h>
#import <libobjc.A.dylib/HFLocationSensingCoordinatorDelegate.h>
#import <libobjc.A.dylib/HMHomeManagerDelegatePrivate.h>
#import <libobjc.A.dylib/HMHomeDelegatePrivate.h>
#import <libobjc.A.dylib/HMAccessoryDelegatePrivate.h>

@class HMHomeManager, HMHome, HFLocationSensingCoordinator, NSTimer, NSMutableDictionary, NSHashTable, NSMutableArray, NAFuture, NSString;

@interface HFHomeKitDispatcher : NSObject <HMResidentDeviceDelegate, HMCameraSnapshotControlDelegate, HMCameraStreamControlDelegate, HFLocationSensingCoordinatorDelegate, HMHomeManagerDelegatePrivate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate> {

	BOOL _hasLoadedHomes;
	int _homeKitPreferencesChangedNotifyToken;
	HMHomeManager* _homeManager;
	HMHome* _home;
	HMHome* _overrideHome;
	HMHome* _selectedHome;
	HFLocationSensingCoordinator* _locationCoordinator;
	NSTimer* _homeSensingIdleTimer;
	NSMutableDictionary* _remoteAccessStateByHomeID;
	NSHashTable* _homeObservers;
	NSHashTable* _homeManagerObservers;
	NSHashTable* _accessoryObservers;
	NSHashTable* _residentDeviceObservers;
	NSHashTable* _cameraObservers;
	NSMutableArray* _homePromises;
	NSMutableArray* _allHomesPromises;

}

@property (nonatomic,retain) HMHomeManager * homeManager;                                     //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                   //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMHome * overrideHome;                                           //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HMHome * selectedHome;                                           //@synthesize selectedHome=_selectedHome - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedHomes;                                             //@synthesize hasLoadedHomes=_hasLoadedHomes - In the implementation block
@property (nonatomic,retain) HFLocationSensingCoordinator * locationCoordinator;              //@synthesize locationCoordinator=_locationCoordinator - In the implementation block
@property (nonatomic,retain) NSTimer * homeSensingIdleTimer;                                  //@synthesize homeSensingIdleTimer=_homeSensingIdleTimer - In the implementation block
@property (assign,nonatomic) int homeKitPreferencesChangedNotifyToken;                        //@synthesize homeKitPreferencesChangedNotifyToken=_homeKitPreferencesChangedNotifyToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remoteAccessStateByHomeID;                 //@synthesize remoteAccessStateByHomeID=_remoteAccessStateByHomeID - In the implementation block
@property (nonatomic,retain) NSHashTable * homeObservers;                                     //@synthesize homeObservers=_homeObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * homeManagerObservers;                              //@synthesize homeManagerObservers=_homeManagerObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * accessoryObservers;                                //@synthesize accessoryObservers=_accessoryObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * residentDeviceObservers;                           //@synthesize residentDeviceObservers=_residentDeviceObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * cameraObservers;                                   //@synthesize cameraObservers=_cameraObservers - In the implementation block
@property (nonatomic,retain) NSMutableArray * homePromises;                                   //@synthesize homePromises=_homePromises - In the implementation block
@property (nonatomic,retain) NSMutableArray * allHomesPromises;                               //@synthesize allHomesPromises=_allHomesPromises - In the implementation block
@property (nonatomic,readonly) NAFuture * homeFuture; 
@property (nonatomic,readonly) NAFuture * allHomesFuture; 
@property (nonatomic,readonly) NAFuture * locationSensingAvailableFuture; 
@property (assign,nonatomic) BOOL selectedHomeFollowsLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_homeManagerCreationPolicy;
+(id)sharedDispatcher;
-(id)init;
-(void)dealloc;
-(HMHomeManager *)homeManager;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(void)coordinator:(id)arg1 locationSensingAvailabilityDidChange:(BOOL)arg2 ;
-(void)coordinator:(id)arg1 homeSensingStatusDidChange:(BOOL)arg2 ;
-(NAFuture *)locationSensingAvailableFuture;
-(void)dispatchCameraObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)accessoryDidUpdateName:(id)arg1 ;
-(void)dispatchAccessoryObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)accessoryDidUpdateApplicationData:(id)arg1 ;
-(void)accessory:(id)arg1 didUpdateNameForService:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2 ;
-(void)accessoryDidUpdateServices:(id)arg1 ;
-(void)accessoryDidUpdateReachability:(id)arg1 ;
-(void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3 ;
-(void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2 ;
-(void)accessoryDidUpdateAdditionalSetupRequired:(id)arg1 ;
-(void)accessory:(id)arg1 didUpdateHasAuthorizationDataForCharacteristic:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateBundleID:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateStoreID:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateFirmwareUpdateAvailable:(BOOL)arg2 ;
-(void)accessory:(id)arg1 didUpdateFirmwareVersion:(id)arg2 ;
-(void)residentDevice:(id)arg1 didUpdateName:(id)arg2 ;
-(void)residentDevice:(id)arg1 didUpdateEnabled:(BOOL)arg2 ;
-(void)residentDevice:(id)arg1 didUpdateStatus:(unsigned long long)arg2 ;
-(void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3 ;
-(void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1 ;
-(void)cameraStreamControlDidStartStream:(id)arg1 ;
-(void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2 ;
-(NAFuture *)allHomesFuture;
-(NAFuture *)homeFuture;
-(void)addAccessoryObserver:(id)arg1 ;
-(void)addResidentDeviceObserver:(id)arg1 ;
-(void)addCameraObserver:(id)arg1 ;
-(void)removeHomeObserver:(id)arg1 ;
-(void)removeAccessoryObserver:(id)arg1 ;
-(void)removeResidentDeviceObserver:(id)arg1 ;
-(void)removeCameraObserver:(id)arg1 ;
-(void)dispatchHomeManagerObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)_createHomeManagerIfNecessary;
-(int)homeKitPreferencesChangedNotifyToken;
-(NSTimer *)homeSensingIdleTimer;
-(NSHashTable *)homeManagerObservers;
-(NSHashTable *)homeObservers;
-(NSHashTable *)accessoryObservers;
-(NSHashTable *)residentDeviceObservers;
-(NSHashTable *)cameraObservers;
-(HMHome *)overrideHome;
-(HMHome *)selectedHome;
-(void)_setDelegate:(id)arg1 forObjectsInHome:(id)arg2 ;
-(BOOL)hasLoadedHomes;
-(void)_setSelectedHome:(id)arg1 notifyAndSaveIfNecessary:(BOOL)arg2 ;
-(void)updateStopHomeSensingIdleTimerState;
-(id)_primaryHome;
-(void)updateHome;
-(void)_finishHomePromises:(id)arg1 ;
-(NSMutableArray *)homePromises;
-(void)_finishAllHomesPromises:(id)arg1 ;
-(NSMutableArray *)allHomesPromises;
-(HFLocationSensingCoordinator *)locationCoordinator;
-(BOOL)selectedHomeFollowsLocation;
-(void)updateSelectedHome;
-(void)setHasLoadedHomes:(BOOL)arg1 ;
-(void)_updateRemoteAccessStateForHome:(id)arg1 notifyingObservers:(BOOL)arg2 ;
-(void)setOverrideHome:(HMHome *)arg1 ;
-(void)setSelectedHome:(HMHome *)arg1 ;
-(NSMutableDictionary *)remoteAccessStateByHomeID;
-(id)homeSensingActiveFuture;
-(void)_setDelegate:(id)arg1 forAccessoryHierarchy:(id)arg2 ;
-(void)startHomeSensingIdleTimer;
-(void)setHomeSensingIdleTimer:(NSTimer *)arg1 ;
-(void)setSelectedHomeFollowsLocation:(BOOL)arg1 ;
-(void)setLocationCoordinator:(HFLocationSensingCoordinator *)arg1 ;
-(void)setHomeKitPreferencesChangedNotifyToken:(int)arg1 ;
-(void)setRemoteAccessStateByHomeID:(NSMutableDictionary *)arg1 ;
-(void)setHomeObservers:(NSHashTable *)arg1 ;
-(void)setHomeManagerObservers:(NSHashTable *)arg1 ;
-(void)setAccessoryObservers:(NSHashTable *)arg1 ;
-(void)setResidentDeviceObservers:(NSHashTable *)arg1 ;
-(void)setCameraObservers:(NSHashTable *)arg1 ;
-(void)setHomePromises:(NSMutableArray *)arg1 ;
-(void)setAllHomesPromises:(NSMutableArray *)arg1 ;
-(void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2 ;
-(void)home:(id)arg1 didAddResidentDevice:(id)arg2 ;
-(void)home:(id)arg1 didRemoveResidentDevice:(id)arg2 ;
-(void)home:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2 ;
-(void)homeDidUpdateApplicationData:(id)arg1 ;
-(void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2 ;
-(void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2 ;
-(void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2 ;
-(void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2 ;
-(void)homeDidUpdateName:(id)arg1 ;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)home:(id)arg1 didAddUser:(id)arg2 ;
-(void)home:(id)arg1 didRemoveUser:(id)arg2 ;
-(void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3 ;
-(void)home:(id)arg1 didAddRoom:(id)arg2 ;
-(void)home:(id)arg1 didRemoveRoom:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForRoom:(id)arg2 ;
-(void)home:(id)arg1 didAddZone:(id)arg2 ;
-(void)home:(id)arg1 didRemoveZone:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForZone:(id)arg2 ;
-(void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3 ;
-(void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3 ;
-(void)home:(id)arg1 didAddServiceGroup:(id)arg2 ;
-(void)home:(id)arg1 didRemoveServiceGroup:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2 ;
-(void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3 ;
-(void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3 ;
-(void)home:(id)arg1 didAddActionSet:(id)arg2 ;
-(void)home:(id)arg1 didRemoveActionSet:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2 ;
-(void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2 ;
-(void)home:(id)arg1 didAddTrigger:(id)arg2 ;
-(void)home:(id)arg1 didRemoveTrigger:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2 ;
-(void)home:(id)arg1 didUpdateTrigger:(id)arg2 ;
-(void)home:(id)arg1 didUnblockAccessory:(id)arg2 ;
-(void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3 ;
-(void)addHomeObserver:(id)arg1 ;
-(void)dispatchHomeObserverMessage:(/*^block*/id)arg1 sender:(id)arg2 ;
-(void)warmup;
-(void)addHomeManagerObserver:(id)arg1 ;
-(void)removeHomeManagerObserver:(id)arg1 ;
-(void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2 ;
-(void)homeManagerDidUpdateCurrentHome:(id)arg1 ;
-(void)homeManagerDidUpdateApplicationData:(id)arg1 ;
-(void)homeManagerDidUpdateDataSyncState:(id)arg1 ;
-(void)homeManager:(id)arg1 didUpdateResidentEnabledForThisDevice:(BOOL)arg2 ;
-(void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2 ;
-(void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2 ;
-(void)homeManagerWillStartBatchNotifications:(id)arg1 ;
-(void)homeManagerDidEndBatchNotifications:(id)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)homeManagerDidUpdatePrimaryHome:(id)arg1 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
@end

