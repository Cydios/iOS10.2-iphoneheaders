/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/MediaStreamPlugins/PhotoStreamsPlugin.mediastream/PhotoStreamsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSSharingPlugin <MSSharingManagerDelegate>
@optional
-(void)sharingManagerWillAssignPluginAsDelegateOfSharingManager:(id)arg1;
-(void)sharingManagerWillDeassignPluginAsDelegateOfSharingManager:(id)arg1;

@required
+(id)sharingPluginForPersonID:(id)arg1;
+(BOOL)personIDIsAcceptingInvitations:(id)arg1;

@end

