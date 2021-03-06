/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSNumber, NSString, CKAsset, CKPackage, CKRecordID, NSData, NSMutableArray, NSError, CKDMMCSItemCommandWriter;

@interface CKDMMCSItem : NSObject {

	BOOL _inMemoryDownloadLooksOkay;
	BOOL _hasSize;
	BOOL _hasOffset;
	BOOL _finished;
	BOOL _temporary;
	BOOL _shouldReadRawEncryptedData;
	BOOL _isAlreadyRegistered;
	BOOL _isReaderReadFrom;
	unsigned _chunkCount;
	NSURL* _fileURL;
	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationID;
	NSNumber* _modTimeInSeconds;
	unsigned long long _itemID;
	double _progress;
	unsigned long long _size;
	unsigned long long _offset;
	unsigned long long _packageIndex;
	NSString* _putPackageSectionIdentifier;
	CKAsset* _asset;
	CKPackage* _package;
	CKRecordID* _recordID;
	NSString* _recordType;
	NSString* _recordKey;
	NSData* _signature;
	NSString* _itemTypeHint;
	NSURL* _contentBaseURL;
	NSString* _owner;
	NSString* _requestor;
	NSString* _authToken;
	NSData* _authRequest;
	NSString* _uploadReceipt;
	NSMutableArray* _sectionItems;
	NSError* _error;
	NSData* _assetKey;
	NSData* _wrappedAssetKey;
	NSData* _referenceSignature;
	CKDMMCSItemCommandWriter* _writer;
	unsigned long long _uploadTokenExpiration;
	unsigned long long _downloadTokenExpiration;
	NSString* _trackingUUID;

}

@property (nonatomic,retain) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSNumber * deviceID;                                     //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                                       //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;                                 //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,retain) NSNumber * modTimeInSeconds;                             //@synthesize modTimeInSeconds=_modTimeInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long itemID;                               //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) double progress;                                         //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) unsigned long long size;                                 //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                               //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned chunkCount;                                     //@synthesize chunkCount=_chunkCount - In the implementation block
@property (assign,nonatomic) unsigned long long packageIndex;                         //@synthesize packageIndex=_packageIndex - In the implementation block
@property (nonatomic,retain) NSString * putPackageSectionIdentifier;                  //@synthesize putPackageSectionIdentifier=_putPackageSectionIdentifier - In the implementation block
@property (nonatomic,retain) CKAsset * asset;                                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) CKPackage * package;                                     //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * recordType;                                   //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,retain) NSString * recordKey;                                    //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,retain) NSData * signature;                                      //@synthesize signature=_signature - In the implementation block
@property (nonatomic,retain) NSString * itemTypeHint;                                 //@synthesize itemTypeHint=_itemTypeHint - In the implementation block
@property (nonatomic,retain) NSURL * contentBaseURL;                                  //@synthesize contentBaseURL=_contentBaseURL - In the implementation block
@property (nonatomic,retain) NSString * owner;                                        //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * requestor;                                    //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,retain) NSString * authToken;                                    //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,retain) NSData * authRequest;                                    //@synthesize authRequest=_authRequest - In the implementation block
@property (nonatomic,retain) NSString * uploadReceipt;                                //@synthesize uploadReceipt=_uploadReceipt - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionItems;                           //@synthesize sectionItems=_sectionItems - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * assetKey;                                       //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,retain) NSData * wrappedAssetKey;                                //@synthesize wrappedAssetKey=_wrappedAssetKey - In the implementation block
@property (nonatomic,retain) NSData * referenceSignature;                             //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,retain) CKDMMCSItemCommandWriter * writer;                       //@synthesize writer=_writer - In the implementation block
@property (assign,nonatomic) BOOL inMemoryDownloadLooksOkay;                          //@synthesize inMemoryDownloadLooksOkay=_inMemoryDownloadLooksOkay - In the implementation block
@property (assign,nonatomic) unsigned long long uploadTokenExpiration;                //@synthesize uploadTokenExpiration=_uploadTokenExpiration - In the implementation block
@property (assign,nonatomic) unsigned long long downloadTokenExpiration;              //@synthesize downloadTokenExpiration=_downloadTokenExpiration - In the implementation block
@property (nonatomic,retain) NSString * trackingUUID;                                 //@synthesize trackingUUID=_trackingUUID - In the implementation block
@property (assign,nonatomic) BOOL hasSize;                                            //@synthesize hasSize=_hasSize - In the implementation block
@property (assign,nonatomic) BOOL hasOffset;                                          //@synthesize hasOffset=_hasOffset - In the implementation block
@property (assign,nonatomic) BOOL finished;                                           //@synthesize finished=_finished - In the implementation block
@property (assign,getter=isTemporary,nonatomic) BOOL temporary;                       //@synthesize temporary=_temporary - In the implementation block
@property (assign,nonatomic) BOOL shouldReadRawEncryptedData;                         //@synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData - In the implementation block
@property (assign,nonatomic) BOOL isAlreadyRegistered;                                //@synthesize isAlreadyRegistered=_isAlreadyRegistered - In the implementation block
@property (assign,nonatomic) BOOL isReaderReadFrom;                                   //@synthesize isReaderReadFrom=_isReaderReadFrom - In the implementation block
-(void)setPackage:(CKPackage *)arg1 ;
-(id)init;
-(unsigned long long)size;
-(id)description;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(NSString *)owner;
-(void)setOwner:(NSString *)arg1 ;
-(double)progress;
-(id)initWithAsset:(id)arg1 ;
-(CKAsset *)asset;
-(void)setAsset:(CKAsset *)arg1 ;
-(NSURL *)fileURL;
-(CKRecordID *)recordID;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(void)setFinished:(BOOL)arg1 ;
-(void)setChunkCount:(unsigned)arg1 ;
-(unsigned)chunkCount;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)finished;
-(void)setFileURL:(NSURL *)arg1 ;
-(unsigned long long)itemID;
-(void)setFileID:(NSNumber *)arg1 ;
-(NSNumber *)fileID;
-(id)CKPropertiesDescription;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)signature;
-(NSString *)recordKey;
-(NSString *)trackingUUID;
-(id)getFileSizeWithError:(id*)arg1 ;
-(BOOL)inMemoryDownloadLooksOkay;
-(NSMutableArray *)sectionItems;
-(unsigned long long)packageIndex;
-(id)initWithPackage:(id)arg1 ;
-(void)setPackageIndex:(unsigned long long)arg1 ;
-(void)setSectionItems:(NSMutableArray *)arg1 ;
-(void)setTrackingUUID:(NSString *)arg1 ;
-(NSNumber *)generationID;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(id)getFileSizeWithProxy:(id)arg1 error:(id*)arg2 ;
-(void)setShouldReadRawEncryptedData:(BOOL)arg1 ;
-(void)setTemporary:(BOOL)arg1 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(NSData *)referenceSignature;
-(void)setItemID:(unsigned long long)arg1 ;
-(void)setPutPackageSectionIdentifier:(NSString *)arg1 ;
-(NSString *)uploadReceipt;
-(void)setUploadReceipt:(NSString *)arg1 ;
-(void)setRecordKey:(NSString *)arg1 ;
-(void)setWrappedAssetKey:(NSData *)arg1 ;
-(NSData *)wrappedAssetKey;
-(id)openWithProxy:(id)arg1 error:(id*)arg2 ;
-(void)setIsReaderReadFrom:(BOOL)arg1 ;
-(id)getFileMetadataWithFileHandle:(id)arg1 error:(id*)arg2 ;
-(NSNumber *)modTimeInSeconds;
-(NSURL *)contentBaseURL;
-(NSString *)requestor;
-(NSData *)authRequest;
-(BOOL)isAlreadyRegistered;
-(unsigned long long)downloadTokenExpiration;
-(unsigned long long)uploadTokenExpiration;
-(NSString *)putPackageSectionIdentifier;
-(BOOL)isReaderReadFrom;
-(void)setModTimeInSeconds:(NSNumber *)arg1 ;
-(NSString *)itemTypeHint;
-(BOOL)shouldReadRawEncryptedData;
-(BOOL)hasOffset;
-(BOOL)isTemporary;
-(id)_openInfo;
-(void)setItemTypeHint:(NSString *)arg1 ;
-(void)setContentBaseURL:(NSURL *)arg1 ;
-(void)setRequestor:(NSString *)arg1 ;
-(void)setAuthRequest:(NSData *)arg1 ;
-(void)setInMemoryDownloadLooksOkay:(BOOL)arg1 ;
-(void)setUploadTokenExpiration:(unsigned long long)arg1 ;
-(void)setDownloadTokenExpiration:(unsigned long long)arg1 ;
-(void)setHasOffset:(BOOL)arg1 ;
-(void)setIsAlreadyRegistered:(BOOL)arg1 ;
-(id)openWithError:(id*)arg1 ;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(NSString *)recordType;
-(NSNumber *)deviceID;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(void)setRecordType:(NSString *)arg1 ;
-(CKPackage *)package;
-(CKDMMCSItemCommandWriter *)writer;
-(void)setWriter:(CKDMMCSItemCommandWriter *)arg1 ;
-(NSData *)assetKey;
-(void)setAssetKey:(NSData *)arg1 ;
@end

