/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <Sharing/Sharing-Structs.h>
@class NSObject;

@interface SFWirelessSettingsController : NSObject {

	id _delegate;
	BOOL _wifiEnabled;
	BOOL _bluetoothEnabled;
	BOOL _deviceSupportsWAPI;
	BOOL _firstCallbackCompleted;
	BOOL _wirelessCarPlayEnabled;
	BOOL _wirelessAccessPointEnabled;
	SFOperationRef _information;
	NSObject*<OS_dispatch_queue> _informationQueue;
	NSObject*<OS_dispatch_semaphore> _firstCallBackSemaphore;

}

@property (__weak) id<SFWirelessSettingsControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBluetoothEnabled) BOOL bluetoothEnabled; 
@property (getter=isWifiEnabled) BOOL wifiEnabled; 
@property (getter=isWirelessAccessPointEnabled,readonly) BOOL wirelessAccessPointEnabled; 
@property (getter=isWirelessCarPlayEnabled,readonly) BOOL wirelessCarPlayEnabled; 
@property (readonly) BOOL deviceSupportsWAPI; 
-(id)init;
-(void)setDelegate:(id<SFWirelessSettingsControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SFWirelessSettingsControllerDelegate>)delegate;
-(void)setWifiEnabled:(BOOL)arg1 ;
-(BOOL)isWifiEnabled;
-(BOOL)deviceSupportsWAPI;
-(BOOL)isBluetoothEnabled;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)setBluetoothEnabled:(BOOL)arg1 ;
-(BOOL)isWirelessAccessPointEnabled;
-(BOOL)isWirelessCarPlayEnabled;
@end

