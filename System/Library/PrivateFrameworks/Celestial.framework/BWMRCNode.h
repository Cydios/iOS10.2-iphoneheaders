/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSArray, NSDictionary;

@interface BWMRCNode : BWNode {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSArray* _symbologiesArray;
	NSArray* _mrcIdentifiers;
	long long _lastMRCCount;
	CGRect _rectOfInterest;
	NSDictionary* _metadataIdentifierToSymbologyDictionary;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(int)_setupSampleBufferProcessor;
-(void)setMrcIdentifiers:(id)arg1 ;
-(id)_newSymbologiesArrayFromIdentifiers:(id)arg1 ;
-(void)_teardownSampleBufferProcessor;
-(id)mrcIdentifiers;
-(BOOL)_shouldEmitSBuf:(long long)arg1 ;
-(CGRect)rectOfInterest;
-(void)setRectOfInterest:(CGRect)arg1 ;
@end
