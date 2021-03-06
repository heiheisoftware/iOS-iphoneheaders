/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOPDAmenities : PBCodable <NSCopying> {

	SCD_Struct_GE95* _amenitys;
	unsigned long long _amenitysCount;
	unsigned long long _amenitysSpace;

}

@property (nonatomic,readonly) unsigned long long amenitysCount; 
@property (nonatomic,readonly) SCD_Struct_GE95* amenitys; 
+(id)amentiesForPlaceData:(id)arg1 ;
-(BOOL)hasAmenityType:(int)arg1 ;
-(BOOL)valueForAmenityType:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)amenitysCount;
-(SCD_Struct_GE95*)amenitys;
-(void)clearAmenitys;
-(SCD_Struct_GE95)amenityAtIndex:(unsigned long long)arg1 ;
-(void)addAmenity:(SCD_Struct_GE95)arg1 ;
-(void)setAmenitys:(SCD_Struct_GE95*)arg1 count:(unsigned long long)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

