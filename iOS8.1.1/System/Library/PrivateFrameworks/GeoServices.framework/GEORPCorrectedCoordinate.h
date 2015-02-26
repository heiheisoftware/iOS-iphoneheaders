/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOLatLng;

@interface GEORPCorrectedCoordinate : PBCodable <NSCopying> {

	GEOLatLng* _correctedCoordinate;
	GEOLatLng* _originalCoordinate;

}

@property (nonatomic,readonly) BOOL hasOriginalCoordinate; 
@property (nonatomic,retain) GEOLatLng * originalCoordinate;               //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedCoordinate; 
@property (nonatomic,retain) GEOLatLng * correctedCoordinate;              //@synthesize correctedCoordinate=_correctedCoordinate - In the implementation block
-(GEOLatLng *)originalCoordinate;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCorrectedCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasCorrectedCoordinate;
-(GEOLatLng *)correctedCoordinate;
-(void)setOriginalCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasOriginalCoordinate;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
