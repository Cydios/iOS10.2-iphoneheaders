/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <libobjc.A.dylib/TTSSpeechConnectionDelegate.h>

@protocol TTSSpeechSynthesizerDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMutableArray, NSArray, NSString;

@interface TTSSpeechSynthesizer : NSObject <TTSSpeechConnectionDelegate> {

	long long _footprint;
	id<TTSSpeechSynthesizerDelegate> _delegate;
	BOOL _useSharedSession;
	BOOL _audioSessionIDIsValid;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	BOOL _useMonarchStyleRate;
	NSMutableDictionary* _channels;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _currentRequestOwners;
	NSMutableArray* _speechRequests;
	struct {
		unsigned delegateStartWithRequest : 1;
		unsigned delegateFinishWithRequest : 1;
		unsigned delegateFinishWithPhonemesSpokenWithRequest : 1;
		unsigned delegatePauseWithRequest : 1;
		unsigned delegateContinueWithRequest : 1;
		unsigned delegateWillSpeakWithRequest : 1;
		unsigned willUseInput : 1;
	}  _synthesizerFlags;
	NSArray* _outputChannels;
	BOOL _ignoreSubstitutions;
	float _rate;
	float _pitch;
	float _volume;
	NSString* _voiceIdentifier;
	NSString* _bundleIdentifier;
	void* _speakingRequestClientContext;
	NSArray* _userSubstitutions;
	NSArray* _phonemeSubstitutions;

}

@property (assign,nonatomic,__weak) id<TTSSpeechSynthesizerDelegate> delegate; 
@property (assign,nonatomic) float rate;                                                    //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitch;                                                   //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) float volume;                                                  //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSString * voiceIdentifier;                                    //@synthesize voiceIdentifier=_voiceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * resolvedVoiceIdentifier; 
@property (assign,nonatomic) void* speakingRequestClientContext;                            //@synthesize speakingRequestClientContext=_speakingRequestClientContext - In the implementation block
@property (nonatomic,copy) NSArray * userSubstitutions;                                     //@synthesize userSubstitutions=_userSubstitutions - In the implementation block
@property (nonatomic,copy) NSArray * phonemeSubstitutions;                                  //@synthesize phonemeSubstitutions=_phonemeSubstitutions - In the implementation block
@property (nonatomic,retain) NSArray * outputChannels; 
@property (assign,nonatomic) BOOL ignoreSubstitutions;                                      //@synthesize ignoreSubstitutions=_ignoreSubstitutions - In the implementation block
+(void)initialize;
+(id)availableVoicesForLanguageCode:(id)arg1 ;
+(BOOL)isSystemSpeaking;
+(id)availableLanguageCodes;
+(id)supportedIPAPhonemeLanguages;
+(id)allAvailableVoices;
+(id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2 footprint:(long long)arg3 ;
+(id)voiceForIdentifier:(id)arg1 ;
+(BOOL)employSpeechMarkupForType:(long long)arg1 identifier:(id)arg2 withLanguage:(id)arg3 ;
+(id)speechMarkupStringForType:(long long)arg1 forIdentifier:(id)arg2 ;
+(void)testingSetAllVoices:(id)arg1 ;
+(void)refreshAllAvailableVoices;
+(id)availableVoices;
-(id)init;
-(void)setDelegate:(id<TTSSpeechSynthesizerDelegate>)arg1 ;
-(void)dealloc;
-(id<TTSSpeechSynthesizerDelegate>)delegate;
-(NSString *)bundleIdentifier;
-(void)_setDelegate:(id)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setPitch:(float)arg1 ;
-(float)pitch;
-(void)setFootprint:(long long)arg1 ;
-(BOOL)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4 ;
-(BOOL)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id*)arg5 error:(id*)arg6 ;
-(BOOL)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5 ;
-(BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4 ;
-(BOOL)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_continueSpeakingRequest:(id)arg1 withError:(id*)arg2 ;
-(void)connection:(id)arg1 speechRequestDidStart:(id)arg2 ;
-(void)connection:(id)arg1 speechRequestDidPause:(id)arg2 ;
-(void)connection:(id)arg1 speechRequestDidContinue:(id)arg2 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(NSRange)arg4 ;
-(BOOL)startSpeakingString:(id)arg1 error:(id*)arg2 ;
-(BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)pauseSpeakingAtNextBoundary:(long long)arg1 error:(id*)arg2 ;
-(BOOL)continueSpeakingWithError:(id*)arg1 ;
-(float)minimumRate;
-(void)useSharedAudioSession:(BOOL)arg1 ;
-(void)useAudioQueueFlags:(unsigned)arg1 ;
-(BOOL)startSpeakingString:(id)arg1 request:(id*)arg2 error:(id*)arg3 ;
-(BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 request:(id*)arg3 error:(id*)arg4 ;
-(BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id*)arg3 ;
-(BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id*)arg3 ;
-(BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)continueSpeakingRequest:(id)arg1 withError:(id*)arg2 ;
-(BOOL)useMonarchStyleRate;
-(void)setUseMonarchStyleRate:(BOOL)arg1 ;
-(void)_mediaServicesDied;
-(id)_applySubstitution:(id)arg1 toText:(id)arg2 wordRange:(NSRange)arg3 request:(id)arg4 phonemes:(id*)arg5 ;
-(void*)speakingRequestClientContext;
-(id)_preprocessText:(id)arg1 languageCode:(id)arg2 ;
-(NSArray *)phonemeSubstitutions;
-(void)_processPhonemeSubstitutions:(id)arg1 toText:(id)arg2 request:(id)arg3 bundleIdentifier:(id)arg4 voice:(id)arg5 ;
-(BOOL)ignoreSubstitutions;
-(NSArray *)userSubstitutions;
-(void)_processUserSubstitutions:(id)arg1 toText:(id)arg2 request:(id)arg3 bundleIdentifier:(id)arg4 voice:(id)arg5 ;
-(void)setIgnoreSubstitutions:(BOOL)arg1 ;
-(void)setUserSubstitutions:(NSArray *)arg1 ;
-(void)setPhonemeSubstitutions:(NSArray *)arg1 ;
-(NSString *)resolvedVoiceIdentifier;
-(id)resolvedVoiceIdentifierForLanguageCode:(id)arg1 ;
-(BOOL)startSpeakingIPAPhonemes:(id)arg1 withLanguageCode:(id)arg2 request:(id*)arg3 error:(id*)arg4 ;
-(void)setSpeakingRequestClientContext:(void*)arg1 ;
-(void)setVoiceIdentifier:(NSString *)arg1 ;
-(BOOL)isSpeaking;
-(NSString *)voiceIdentifier;
-(void)useSpecificAudioSession:(unsigned)arg1 ;
-(BOOL)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id*)arg3 error:(id*)arg4 ;
-(long long)footprint;
-(float)maximumRate;
-(id)speechString;
-(NSArray *)outputChannels;
-(void)setOutputChannels:(NSArray *)arg1 ;
-(BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id*)arg3 ;
-(BOOL)stopSpeakingAtNextBoundary:(long long)arg1 error:(id*)arg2 ;
@end
