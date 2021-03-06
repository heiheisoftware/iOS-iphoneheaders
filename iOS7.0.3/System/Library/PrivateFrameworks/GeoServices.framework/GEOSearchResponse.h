/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOPlaceSearchResponse.h>

@class NSString, NSMapTable;

@interface GEOSearchResponse : GEOPlaceSearchResponse {

	NSString* _businessQuery;
	NSMapTable* _attributionKeysToInfo;

}

@property (nonatomic,retain) NSString * businessQuery;              //@synthesize businessQuery=_businessQuery - In the implementation block
-(void)dealloc;
-(void)setBusinessQuery:(id)arg1 ;
-(void)_addAttributionInfo:(id)arg1 ;
-(id)attributionInfoForSourceIdentifier:(id)arg1 sourceVersion:(unsigned)arg2 ;
-(id)businessQuery;
@end

