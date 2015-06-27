/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:57 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, NSError;

@interface RestorePodcastItemsResponse : NSObject {

	NSMutableDictionary* _itemErrors;
	NSArray* _requestItems;
	NSArray* _responseDownloads;
	NSError* _responseError;

}

@property (nonatomic,copy) NSArray * requestItems;                   //@synthesize requestItems=_requestItems - In the implementation block
@property (nonatomic,copy) NSArray * responseDownloads;              //@synthesize responseDownloads=_responseDownloads - In the implementation block
@property (nonatomic,retain) NSError * responseError;                //@synthesize responseError=_responseError - In the implementation block
-(id)errorForItemIdentifier:(id)arg1 ;
-(void)setRequestItems:(NSArray *)arg1 ;
-(NSArray *)responseDownloads;
-(NSArray *)requestItems;
-(void)setResponseDownloads:(NSArray *)arg1 ;
-(void)setError:(id)arg1 forItemIdentifier:(id)arg2 ;
-(void)dealloc;
-(NSError *)responseError;
-(void)setResponseError:(NSError *)arg1 ;
@end
