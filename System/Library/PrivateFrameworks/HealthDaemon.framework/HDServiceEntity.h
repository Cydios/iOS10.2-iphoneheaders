/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDServiceEntity : HDHealthEntity
+(id)columnsDefinition;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(id)databaseTable;
+(long long)protectionClass;
+(id)uniquedColumns;
+(id)tableAliases;
+(id)_servicePredicate:(id)arg1 ;
+(id)_servicesInDatabase:(id)arg1 daemon:(id)arg2 removals:(id*)arg3 ;
+(id)insertOrUpdateService:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(BOOL)deleteService:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)allServicesFromHealthDaemon:(id)arg1 error:(id*)arg2 ;
+(BOOL)healthUpdatesEnabledForDevice:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
+(BOOL)setHealthUpdatesEnabled:(BOOL)arg1 forDevice:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
@end

