/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/log/liblog_mediaremote.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MLFLogFormatter : NSObject {

	NSString* _typeName;
	id _value;

}

@property (nonatomic,readonly) NSString * typeName;              //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,readonly) id value;                         //@synthesize value=_value - In the implementation block
-(id)value;
-(NSString *)typeName;
-(id)formattedString;
-(id)initWithTypeName:(id)arg1 value:(id)arg2 ;
@end
