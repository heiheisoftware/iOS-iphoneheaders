/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class NSString, NSMutableArray;

@interface ICCameraProperties : NSObject {

	NSString* _volumePath;
	BOOL _ejectable;
	BOOL _beingEjected;
	BOOL _locked;
	BOOL _allowsSyncingClock;
	unsigned _contentCatalogPercentCompleted;
	BOOL _batteryLevelAvailable;
	unsigned _batteryLevel;
	NSMutableArray* _contents;
	NSMutableArray* _mediaFiles;
	NSMutableArray* _toBeNotifiedAddedItems;
	int _contentsLock;
	int _mediaFilesLock;
	double _timeOffset;
	unsigned _estimatedNumberOfDownloadableItems;
	unsigned _numberOfDownloadableItems;
	BOOL _contentReceived;
	double _downloadCancelTimestamp;
	dispatch_queue_sRef _thumbnailFetchQ;
	dispatch_queue_sRef _metadataFetchQ;
	dispatch_queue_sRef _downloadQ;
	dispatch_queue_sRef _generalQ;
	dispatch_semaphore_sRef _deviceQSemaphore;
	BOOL _accessRestrictedAppleDevice;

}

@property (retain) NSString * volumePath;                                    //@synthesize volumePath=_volumePath - In the implementation block
@property (assign) BOOL ejectable;                                           //@synthesize ejectable=_ejectable - In the implementation block
@property (assign) BOOL beingEjected;                                        //@synthesize beingEjected=_beingEjected - In the implementation block
@property (assign) BOOL locked;                                              //@synthesize locked=_locked - In the implementation block
@property (assign) BOOL allowsSyncingClock;                                  //@synthesize allowsSyncingClock=_allowsSyncingClock - In the implementation block
@property (assign) unsigned contentCatalogPercentCompleted;                  //@synthesize contentCatalogPercentCompleted=_contentCatalogPercentCompleted - In the implementation block
@property (assign) BOOL batteryLevelAvailable;                               //@synthesize batteryLevelAvailable=_batteryLevelAvailable - In the implementation block
@property (assign) unsigned batteryLevel;                                    //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (retain) NSMutableArray * contents;                                //@synthesize contents=_contents - In the implementation block
@property (retain) NSMutableArray * mediaFiles;                              //@synthesize mediaFiles=_mediaFiles - In the implementation block
@property (retain) NSMutableArray * toBeNotifiedAddedItems;                  //@synthesize toBeNotifiedAddedItems=_toBeNotifiedAddedItems - In the implementation block
@property (assign) int mediaFilesLock;                                       //@synthesize mediaFilesLock=_mediaFilesLock - In the implementation block
@property (assign) int contentsLock;                                         //@synthesize contentsLock=_contentsLock - In the implementation block
@property (assign) double timeOffset;                                        //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign) unsigned estimatedNumberOfDownloadableItems;              //@synthesize estimatedNumberOfDownloadableItems=_estimatedNumberOfDownloadableItems - In the implementation block
@property (assign) unsigned numberOfDownloadableItems;                       //@synthesize numberOfDownloadableItems=_numberOfDownloadableItems - In the implementation block
@property (assign) BOOL contentReceived;                                     //@synthesize contentReceived=_contentReceived - In the implementation block
@property (assign) double downloadCancelTimestamp;                           //@synthesize downloadCancelTimestamp=_downloadCancelTimestamp - In the implementation block
@property (assign) dispatch_queue_sRef thumbnailFetchQ;                      //@synthesize thumbnailFetchQ=_thumbnailFetchQ - In the implementation block
@property (assign) dispatch_queue_sRef metadataFetchQ;                       //@synthesize metadataFetchQ=_metadataFetchQ - In the implementation block
@property (assign) dispatch_queue_sRef downloadQ;                            //@synthesize downloadQ=_downloadQ - In the implementation block
@property (assign) dispatch_queue_sRef generalQ;                             //@synthesize generalQ=_generalQ - In the implementation block
@property (assign) dispatch_semaphore_sRef deviceQSemaphore;                 //@synthesize deviceQSemaphore=_deviceQSemaphore - In the implementation block
@property (assign) BOOL accessRestrictedAppleDevice;                         //@synthesize accessRestrictedAppleDevice=_accessRestrictedAppleDevice - In the implementation block
-(void)dealloc;
-(id)contents;
-(double)timeOffset;
-(void)setContents:(id)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(unsigned)batteryLevel;
-(void)setVolumePath:(id)arg1 ;
-(void)setMediaFiles:(id)arg1 ;
-(void)setToBeNotifiedAddedItems:(id)arg1 ;
-(void)lockMediaFiles;
-(void)unlockMediaFiles;
-(void)lockContents;
-(void)unlockContents;
-(id)volumePath;
-(BOOL)ejectable;
-(void)setEjectable:(BOOL)arg1 ;
-(BOOL)beingEjected;
-(void)setBeingEjected:(BOOL)arg1 ;
-(BOOL)allowsSyncingClock;
-(void)setAllowsSyncingClock:(BOOL)arg1 ;
-(void)setContentCatalogPercentCompleted:(unsigned)arg1 ;
-(BOOL)batteryLevelAvailable;
-(void)setBatteryLevelAvailable:(BOOL)arg1 ;
-(id)toBeNotifiedAddedItems;
-(int)mediaFilesLock;
-(void)setMediaFilesLock:(int)arg1 ;
-(int)contentsLock;
-(void)setContentsLock:(int)arg1 ;
-(void)setEstimatedNumberOfDownloadableItems:(unsigned)arg1 ;
-(unsigned)numberOfDownloadableItems;
-(void)setNumberOfDownloadableItems:(unsigned)arg1 ;
-(BOOL)contentReceived;
-(void)setContentReceived:(BOOL)arg1 ;
-(double)downloadCancelTimestamp;
-(void)setDownloadCancelTimestamp:(double)arg1 ;
-(dispatch_queue_sRef)thumbnailFetchQ;
-(void)setThumbnailFetchQ:(dispatch_queue_sRef)arg1 ;
-(dispatch_queue_sRef)metadataFetchQ;
-(void)setMetadataFetchQ:(dispatch_queue_sRef)arg1 ;
-(dispatch_queue_sRef)downloadQ;
-(void)setDownloadQ:(dispatch_queue_sRef)arg1 ;
-(dispatch_queue_sRef)generalQ;
-(void)setGeneralQ:(dispatch_queue_sRef)arg1 ;
-(dispatch_semaphore_sRef)deviceQSemaphore;
-(void)setDeviceQSemaphore:(dispatch_semaphore_sRef)arg1 ;
-(BOOL)accessRestrictedAppleDevice;
-(void)setAccessRestrictedAppleDevice:(BOOL)arg1 ;
-(BOOL)locked;
-(unsigned)estimatedNumberOfDownloadableItems;
-(unsigned)contentCatalogPercentCompleted;
-(id)mediaFiles;
-(void)setBatteryLevel:(unsigned)arg1 ;
-(void)finalize;
@end
