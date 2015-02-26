/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISReview, NSURL;

@interface ISFetchReviewOperation : ISOperation {

	long long _assetType;
	BOOL _backgroundReview;
	unsigned long long _itemIdentifier;
	unsigned long long _softwareVersionIdentifier;
	ISReview* _review;
	NSURL* _url;

}

@property (assign) long long assetType;                                       //@synthesize assetType=_assetType - In the implementation block
@property (assign) unsigned long long softwareVersionIdentifier;              //@synthesize softwareVersionIdentifier=_softwareVersionIdentifier - In the implementation block
@property (assign) unsigned long long itemIdentifier;                         //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (retain) NSURL * url;                                               //@synthesize url=_url - In the implementation block
@property (getter=isBackgroundReview) BOOL backgroundReview;                  //@synthesize backgroundReview=_backgroundReview - In the implementation block
@property (retain) ISReview * review;                                         //@synthesize review=_review - In the implementation block
-(void)dealloc;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)run;
-(void)setAssetType:(long long)arg1 ;
-(ISReview *)review;
-(void)setReview:(ISReview *)arg1 ;
-(unsigned long long)itemIdentifier;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(long long)assetType;
-(BOOL)isBackgroundReview;
-(void)setBackgroundReview:(BOOL)arg1 ;
-(void)_fetchReviewInformation;
-(unsigned long long)softwareVersionIdentifier;
-(void)setSoftwareVersionIdentifier:(unsigned long long)arg1 ;
@end
