/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/NSURLConnectionDelegate.h>

@protocol GEOVoltaireMultiTileDownloaderDelegate;
@class GEOTileKeyList, NSURL, NSMutableSet, NSURLConnection, GEONetworkDataReader, NSString, NSData, GEOTileKeyMap, GEOResourceManifestConfiguration, NSLocale;

@interface GEOVoltaireMultiTileDownloader : NSObject <NSURLConnectionDelegate> {

	GEOTileKeyList* _keyList;
	GEOTileKeyList* _requiresLocalization;
	GEOTileKeyList* _receivedKeys;
	NSURL* _requestURL;
	char _useStatusCodes;
	NSMutableSet* _errorCodes;
	NSURLConnection* _connection;
	GEONetworkDataReader* _reader;
	NSString* _sharedPrefix;
	NSString* _userAgent;
	NSData* _auditToken;
	id<GEOVoltaireMultiTileDownloaderDelegate> _delegate;
	unsigned short _providerID;
	GEOTileKeyMap* _baseTilesWaitingForLocalized;
	GEOTileKeyMap* _localizedTilesWaitingForBase;
	NSString* _postString;
	char _requireWiFi;
	int _attempts;
	double _startTime;
	double _timeout;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSString * userAgent;                                             //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSData * auditToken;                                              //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) NSURL * requestURL;                                             //@synthesize requestURL=_requestURL - In the implementation block
@property (assign,nonatomic) char useStatusCodes;                                              //@synthesize useStatusCodes=_useStatusCodes - In the implementation block
@property (assign,nonatomic) char requireWiFi;                                                 //@synthesize requireWiFi=_requireWiFi - In the implementation block
@property (assign,nonatomic) id<GEOVoltaireMultiTileDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)userAgent;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<GEOVoltaireMultiTileDownloaderDelegate>)arg1 ;
-(id<GEOVoltaireMultiTileDownloaderDelegate>)delegate;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_cancelWithError:(id)arg1 ;
-(NSData *)auditToken;
-(void)setAuditToken:(NSData *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(double)elapsed;
-(char)useStatusCodes;
-(id)initWithURL:(id)arg1 keyList:(id)arg2 manifestConfiguration:(id)arg3 locale:(id)arg4 ;
-(void)setUseStatusCodes:(char)arg1 ;
-(NSURL *)requestURL;
-(id)_localizationURLIfNecessaryForTileKey:(GEOTileKey*)arg1 ;
-(void)_cleanupConnection;
-(void)_failWithError:(id)arg1 ;
-(id)_localizationURLForTileKey:(GEOTileKey*)arg1 ;
-(GEOTileKey)_tileKeyForURL:(id)arg1 edition:(unsigned*)arg2 isLocalized:(char*)arg3 ;
-(id)_mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2 ;
-(void)logDownloadDetails;
-(void)_tryParseTiles;
-(void)setRequireWiFi:(char)arg1 ;
-(char)requireWiFi;
-(id)_urlForTileKey:(GEOTileKey*)arg1 ;
@end
