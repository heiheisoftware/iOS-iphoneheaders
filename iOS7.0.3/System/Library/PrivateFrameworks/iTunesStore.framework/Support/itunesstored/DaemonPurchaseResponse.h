/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSPurchaseResponse.h>

@class StoreDownloadQueueResponse;

@interface DaemonPurchaseResponse : SSPurchaseResponse {

	StoreDownloadQueueResponse* _decodedResponse;

}

@property (nonatomic,retain) StoreDownloadQueueResponse * decodedResponse;              //@synthesize decodedResponse=_decodedResponse - In the implementation block
-(id)decodedResponse;
-(void)setDecodedResponse:(id)arg1 ;
-(void)dealloc;
@end

