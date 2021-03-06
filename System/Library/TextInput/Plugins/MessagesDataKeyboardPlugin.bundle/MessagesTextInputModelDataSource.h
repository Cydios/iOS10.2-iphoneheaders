/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/Plugins/MessagesDataKeyboardPlugin.bundle/MessagesDataKeyboardPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesDataKeyboardPlugin/TILinguisticDataSource.h>

@class NSString;

@interface MessagesTextInputModelDataSource : NSObject <TILinguisticDataSource> {

	long long _currentMaxRow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)nextRowID;
-(void)setNextRowID:(unsigned long long)arg1 ;
-(unsigned long long)lastDatabaseRowID;
-(id)init;
-(void)reset;
-(id)nextOutgoingMessageBatch;
@end

