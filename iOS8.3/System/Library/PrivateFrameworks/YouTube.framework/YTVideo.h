/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:27:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <YouTube/YouTube-Structs.h>
@class NSString, NSCalendarDate, NSArray, NSURL, NSMutableArray;

@interface YTVideo : NSObject {

	NSString* _id;
	NSString* _title;
	NSString* _author;
	NSCalendarDate* _dateUpdated;
	NSCalendarDate* _dateAdded;
	NSArray* _videoReferences;
	NSString* _notificationName;
	NSString* _videoDescription;
	NSString* _category;
	NSArray* _tags;
	unsigned _numberOfViews;
	unsigned _numLikes;
	unsigned _numDislikes;
	int _batchStatus;
	NSURL* _infoURL;
	NSURL* _thumbnailURL;
	NSURL* _commentsURL;
	NSURL* _editURL;
	NSURL* _ratingsURL;
	NSURL* _captionsURL;
	NSString* _shortID;
	NSString* _unplayable;
	char _isProcessing;
	NSMutableArray* _captions;
	int _privacy;
	NSString* _restrictedCountries;
	/*^block*/id _thumbnailProxyBlock;

}
+(void)enableNotifications;
+(void)disableNotifications;
+(id)unsupportedVideoError;
+(id)videoNotFoundError;
+(id)videoIsProcessingError;
+(void)reset3GPlaybackStallCount;
+(void)playbackDidStall;
-(id)ID;
-(id)archiveDictionary;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)category;
-(id)title;
-(id)tags;
-(id)author;
-(char)isPlayable;
-(id)thumbnailURL;
-(double)age;
-(id)dateUpdated;
-(id)dateAdded;
-(char)allowsHighQuality3GPlayback;
-(id)shortID;
-(id)initFromArchiveDictionary:(id)arg1 ;
-(id)initWithID:(id)arg1 title:(id)arg2 dateUpdated:(id)arg3 dateAdded:(id)arg4 videoReferences:(id)arg5 infoURL:(id)arg6 videoDescription:(id)arg7 category:(id)arg8 tags:(id)arg9 author:(id)arg10 thumbnailURL:(id)arg11 numLikes:(unsigned)arg12 numDislikes:(unsigned)arg13 numberOfViews:(unsigned)arg14 batchStatus:(int)arg15 commentsURL:(id)arg16 editURL:(id)arg17 ratingsURL:(id)arg18 captionsURL:(id)arg19 shortID:(id)arg20 unplayable:(id)arg21 isProcessing:(char)arg22 privacy:(int)arg23 restrictedCountries:(id)arg24 ;
-(CGImageRef)thumbnailLoadIfAbsent:(char)arg1 ;
-(void)_postVideoDidChange;
-(void)carrierBundleDidChangeNotification:(id)arg1 ;
-(void)_thumbnailDidLoad;
-(id)videoReferenceForProfile:(int)arg1 ;
-(id)bestVideoReference;
-(id)dateAddedString;
-(id)commentsURL;
-(id)editURL;
-(id)ratingsURL;
-(id)captionsURL;
-(id)videoDescription;
-(id)tagsString;
-(id)unplayable;
-(unsigned)numLikes;
-(unsigned)numDislikes;
-(char)positiveRating;
-(id)ratingPercentageString;
-(unsigned)numberOfViews;
-(id)restrictedCountries;
-(int)batchStatus;
-(CGImageRef)roundedThumbnailLoadIfAbsent:(char)arg1 ;
-(CGImageRef)largeThumbnailLoadIfAbsent:(char)arg1 ;
-(CGImageRef)pluginThumbnailLoadIfAbsent:(char)arg1 ;
-(void)loadThumbnailWithCallback:(/*^block*/id)arg1 ;
-(id)anyVideoReference;
-(char)isBookmarked;
-(char)isProcessing;
-(id)captions;
-(id)privacyString;
-(char)ownVideo;
-(id)infoURL;
@end
