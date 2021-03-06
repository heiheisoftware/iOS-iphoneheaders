/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:03:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol PLThumbPersistenceManager <PLPreheatItemSource>
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) int imageFormat; 
@property (nonatomic,readonly) int imageWidth; 
@property (nonatomic,readonly) int imageHeight; 
@property (nonatomic,readonly) int imageRowBytes; 
@property (nonatomic,readonly) int imageLength; 
@property (nonatomic,readonly) char isReadOnly; 
@property (nonatomic,readonly) CGSize imageSize; 
@optional
-(void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned)arg2 uuid:(id)arg3;
-(id)imageWithIdentifier:(id)arg1;
-(id)thumbnailPathForThumbIdentifier:(id)arg1;
-(void)preheatImageDataAtIndex:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(void)preheatImageDataAtIndexes:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(int)entryCount;

@required
-(NSString *)path;
-(CGSize)imageSize;
-(int)imageLength;
-(int)imageFormat;
-(int)imageWidth;
-(int)imageHeight;
-(int)imageRowBytes;
-(id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
-(void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned)arg3 videoDuration:(id)arg4 photoUUID:(id)arg5;
-(void)setImageDataForEntry:(const void*)arg1 withIdentifier:(id)arg2 orIndex:(unsigned)arg3 asset:(id)arg4;
-(char)copyEntryFromOriginalAsset:(id)arg1 toAsset:(id)arg2;
-(id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
-(void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
-(char)usesThumbIdentifiers;
-(id)_debugDescription;
-(char)isReadOnly;

@end

