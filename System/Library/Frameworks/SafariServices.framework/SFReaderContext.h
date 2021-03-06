/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFReaderContext <NSObject>
@required
-(id)configuration;
-(void)loadNewArticle;
-(void)setReaderFont:(id)arg1;
-(void)setReaderTheme:(id)arg1;
-(void)increaseReaderTextSize;
-(void)decreaseReaderTextSize;
-(void)setReaderUserVisibleWidth:(double)arg1;
-(void)createArticleFinder;
-(BOOL)isReaderAvailable;
-(BOOL)isLoadingNextPage;
-(void)stopLoadingNextPage;
-(void)clearReaderWebView;
-(BOOL)shouldCreateArticleFinder;
-(void)activateReader;
-(void)deactivateReaderNow:(unsigned long long)arg1;
-(id)scrollPositionInformation;
-(void)clearAvailability;
-(void)clearUnusedReaderResourcesSoon;
-(id)readerURL;
-(id)fontManager;
-(void)setReaderLanguageTag:(id)arg1;

@end

