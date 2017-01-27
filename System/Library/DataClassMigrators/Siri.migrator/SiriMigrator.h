/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/Siri.migrator/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface SiriMigrator : DataClassMigrator
-(void)_performATVDictationMigration;
-(void)_performLoggingMigration;
-(void)_performInteralToBackedUpMigration;
-(void)_performOutputVoiceMigration;
-(void)_performVoiceServicesLanguageMigration;
-(void)_performBootstrapSpeechIdMigration;
-(void)_performSessionLanguageMigration;
-(void)_cleanupBundleCaches;
-(void)_performDictationMigration;
-(void)_performAudioFeedbackMigration;
-(void)_removeTokenDomain;
-(void)_cleanupiOS9PhotoAlbumData;
-(float)migrationProgress;
-(float)estimatedDuration;
-(id)dataClassName;
-(BOOL)performMigration;
@end
