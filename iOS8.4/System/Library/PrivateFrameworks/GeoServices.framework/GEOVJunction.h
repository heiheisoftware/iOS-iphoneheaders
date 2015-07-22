/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOVJunction : PBCodable <NSCopying> {

	NSMutableArray* _connectingRoads;
	NSMutableArray* _laneConnections;

}

@property (nonatomic,retain) NSMutableArray * connectingRoads;              //@synthesize connectingRoads=_connectingRoads - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneConnections;              //@synthesize laneConnections=_laneConnections - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)laneConnections;
-(unsigned long long)laneConnectionsCount;
-(void)setConnectingRoads:(NSMutableArray *)arg1 ;
-(void)setLaneConnections:(NSMutableArray *)arg1 ;
-(void)addConnectingRoad:(id)arg1 ;
-(void)addLaneConnections:(id)arg1 ;
-(unsigned long long)connectingRoadsCount;
-(void)clearConnectingRoads;
-(id)connectingRoadAtIndex:(unsigned long long)arg1 ;
-(void)clearLaneConnections;
-(id)laneConnectionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)connectingRoads;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
