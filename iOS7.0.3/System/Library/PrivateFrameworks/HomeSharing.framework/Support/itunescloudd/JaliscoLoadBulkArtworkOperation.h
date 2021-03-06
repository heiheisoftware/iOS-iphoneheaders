/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSMutableSet;

@interface JaliscoLoadBulkArtworkOperation : CloudLibraryOperation {

	NSMutableSet* _handledAlbums;
	NSMutableSet* _handledAlbumArtists;
	NSMutableSet* _handledComposers;

}
-(id)_cloudArtworkInfoDictionariesForRepresentativeItemIDs;
-(void)_updateAlbum:(id)arg1 albumArtist:(id)arg2 composer:(id)arg3 withRepresentativeItem:(id)arg4 artworkCacheID:(id)arg5 mediaType:(unsigned long)arg6 ;
-(id)_cloudScreenshotsItemsInfosToLoad;
-(void)dealloc;
-(id)init;
-(void)main;
-(void).cxx_destruct;
@end

