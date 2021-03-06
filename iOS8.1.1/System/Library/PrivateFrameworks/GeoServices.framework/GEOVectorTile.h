/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOFeatureStyleAttributes, NSMutableData, NSData, NSMutableOrderedSet, NSMutableArray;

@interface GEOVectorTile : NSObject {

	GEOTileKey _key;
	GEOFeatureStyleAttributes* _attributes;
	SCD_Struct_GE94* _lines;
	unsigned long long _linesCount;
	unsigned long long _linesVertexCount;
	SCD_Struct_GE94* _coastlines;
	unsigned long long _coastlinesCount;
	SCD_Struct_GE119* _polygons;
	unsigned long long _polygonsCount;
	unsigned long long _polygonsVertexCount;
	SCD_Struct_GE90* _polygonLabelPositions;
	unsigned long long _polygonLabelPositionsCount;
	SCD_Struct_GE120* _buildingFootprints;
	NSMutableData* _extrusionHeightsPool;
	NSMutableData* _baseHeightsPool;
	unsigned long long _buildingFootprintsCount;
	SCD_Struct_GE120* _hiResBuildingFootprints;
	unsigned long long _hiResBuildingFootprintsCount;
	SCD_Struct_GE121* _threeDBuildings;
	unsigned long long _threeDBuildingsCount;
	SCD_Struct_GE122* _extendedPointAttributes;
	unsigned long long _extendedPointAttributesCount;
	SCD_Struct_GE123* _pois;
	unsigned long long _poisCount;
	SCD_Struct_GE124* _overpasses;
	SCD_Struct_GE107* _junctions;
	unsigned long long _junctionsCount;
	BOOL _hasComputedJunctions;
	SCD_Struct_GE125* _laneConnections;
	unsigned long long _laneConnectionsCount;
	SCD_Struct_GE125* _pointsOnRoad;
	unsigned long long _pointsOnRoadCount;
	/*function pointer*/void** _sortedPointsOnRoad;
	SCD_Struct_GE126* _laneGeometry;
	SCD_Struct_GE127* _curveLineVertices;
	unsigned* _curveToLineMapping;
	SCD_Struct_GE127* _lineVertices;
	SCD_Struct_GE127* _polygonVertices;
	SCD_Struct_GE127* _coastlineVertices;
	SCD_Struct_GE127* _footprintVertices;
	SCD_Struct_GE127* _hiResFootprintVertices;
	NSData* _labelPool;
	SCD_Struct_GE128* _labelPoolLanguages;
	unsigned long long _labelPoolLanguagesLength;
	NSMutableData* _localizedLabelPool;
	char* _localizedLabelsLanguage;
	SCD_Struct_GE129* _labelIndex;
	unsigned long long _labelIndexCount;
	GEOFeatureShield* _shieldIndex;
	unsigned long long _shieldIndexCount;
	SCD_Struct_GE130* _localizationTable;
	unsigned long long _localizationTableCount;
	NSMutableOrderedSet* _uniqueAttributes;
	NSMutableArray* _uniqueFeatureAttributes;
	SCD_Struct_GE133* _lineCharacteristicPoints;
	unsigned long long _lineCharacteristicPointCount;
	SCD_Struct_GE133* _polygonCharacteristicPoints;
	unsigned long long _polygonCharacteristicPointCount;
	SCD_Struct_GE133* _coastlineCharacteristicPoints;
	unsigned long long _coastlineCharacteristicPointCount;
	unsigned long long _tileReferenceCount;
	GEOTileKey* _tileReferences;

}

@property (nonatomic,readonly) SCD_Struct_GE94* lines;                                            //@synthesize lines=_lines - In the implementation block
@property (nonatomic,readonly) unsigned long long linesCount;                                     //@synthesize linesCount=_linesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long linesVertexCount;                               //@synthesize linesVertexCount=_linesVertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE94* coastlines;                                       //@synthesize coastlines=_coastlines - In the implementation block
@property (nonatomic,readonly) unsigned long long coastlinesCount;                                //@synthesize coastlinesCount=_coastlinesCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE119* polygons;                                        //@synthesize polygons=_polygons - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonsCount;                                  //@synthesize polygonsCount=_polygonsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonsVertexCount;                            //@synthesize polygonsVertexCount=_polygonsVertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE120* buildingFootprints;                              //@synthesize buildingFootprints=_buildingFootprints - In the implementation block
@property (nonatomic,readonly) unsigned long long buildingFootprintsCount;                        //@synthesize buildingFootprintsCount=_buildingFootprintsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE120* hiResBuildingFootprints;                         //@synthesize hiResBuildingFootprints=_hiResBuildingFootprints - In the implementation block
@property (nonatomic,readonly) unsigned long long hiResBuildingFootprintsCount;                   //@synthesize hiResBuildingFootprintsCount=_hiResBuildingFootprintsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE121* threeDBuildings;                                 //@synthesize threeDBuildings=_threeDBuildings - In the implementation block
@property (nonatomic,readonly) unsigned long long threeDBuildingsCount;                           //@synthesize threeDBuildingsCount=_threeDBuildingsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE123* pois;                                            //@synthesize pois=_pois - In the implementation block
@property (nonatomic,readonly) unsigned long long poisCount;                                      //@synthesize poisCount=_poisCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE124* overpasses;                                      //@synthesize overpasses=_overpasses - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE107* junctions;                                       //@synthesize junctions=_junctions - In the implementation block
@property (nonatomic,readonly) unsigned long long junctionsCount;                                 //@synthesize junctionsCount=_junctionsCount - In the implementation block
@property (nonatomic,readonly) BOOL hasComputedJunctions;                                         //@synthesize hasComputedJunctions=_hasComputedJunctions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE125* pointsOnRoad;                                    //@synthesize pointsOnRoad=_pointsOnRoad - In the implementation block
@property (nonatomic,readonly) unsigned long long pointsOnRoadCount;                              //@synthesize pointsOnRoadCount=_pointsOnRoadCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE125* laneConnections;                                 //@synthesize laneConnections=_laneConnections - In the implementation block
@property (nonatomic,readonly) unsigned long long laneConnectionsCount;                           //@synthesize laneConnectionsCount=_laneConnectionsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE133* lineCharacteristicPoints;                        //@synthesize lineCharacteristicPoints=_lineCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long lineCharacteristicPointCount;                   //@synthesize lineCharacteristicPointCount=_lineCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE133* polygonCharacteristicPoints;                     //@synthesize polygonCharacteristicPoints=_polygonCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonCharacteristicPointCount;                //@synthesize polygonCharacteristicPointCount=_polygonCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE133* coastlineCharacteristicPoints;                   //@synthesize coastlineCharacteristicPoints=_coastlineCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long coastlineCharacteristicPointCount;              //@synthesize coastlineCharacteristicPointCount=_coastlineCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE127* curveLineVertices; 
@property (nonatomic,readonly) SCD_Struct_GE127* lineVertices; 
@property (nonatomic,readonly) GEOTileKey tileKey;                                                //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL dataIncludesConnectivity; 
@property (nonatomic,readonly) unsigned long long tileReferenceCount;                             //@synthesize tileReferenceCount=_tileReferenceCount - In the implementation block
@property (nonatomic,readonly) GEOTileKey* tileReferences;                                        //@synthesize tileReferences=_tileReferences - In the implementation block
-(id)_initWithVMP4:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(unsigned long long)_makeSpaceForLabels:(unsigned long long)arg1 ;
-(unsigned long long)_makeSpaceForShields:(unsigned long long)arg1 ;
-(id)addAttributes:(id)arg1 toUniqueAttributeSet:(id)arg2 ;
-(BOOL)_readPolygons:(SCD_Struct_GE135*)arg1 ofType:(unsigned short)arg2 ;
-(BOOL)_readLowResBuildings:(SCD_Struct_GE135*)arg1 ;
-(BOOL)_readWrappingCoastlines:(SCD_Struct_GE137*)arg1 tile:(SCD_Struct_GE135*)arg2 ;
-(BOOL)_readSimpleCoastlines:(SCD_Struct_GE137*)arg1 tile:(SCD_Struct_GE135*)arg2 ;
-(BOOL)_readModernBuildings:(SCD_Struct_GE135*)arg1 chapter:(unsigned short)arg2 vertexPool:(/*function pointer*/void**)arg3 footprints:(/*function pointer*/void**)arg4 count:(unsigned long long*)arg5 ;
-(BOOL)_addGenericPolygonWithAttributes:(int*)arg1 ;
-(BOOL)_handleGenericTile:(SCD_Struct_GE135*)arg1 ;
-(BOOL)_readInfoChapter:(SCD_Struct_GE135*)arg1 key:(const GEOTileKey*)arg2 ;
-(BOOL)_readLabels:(SCD_Struct_GE135*)arg1 ;
-(BOOL)_readPois:(SCD_Struct_GE135*)arg1 ;
-(BOOL)_readLines:(SCD_Struct_GE135*)arg1 ;
-(BOOL)_readPolygons:(SCD_Struct_GE135*)arg1 ;
-(BOOL)_readCoastlines:(SCD_Struct_GE135*)arg1 ;
-(BOOL)_read3DBuildings:(SCD_Struct_GE135*)arg1 ;
-(BOOL)_readHighResBuildings:(SCD_Struct_GE135*)arg1 ;
-(BOOL)_readTileReferences:(SCD_Struct_GE135*)arg1 key:(const GEOTileKey*)arg2 ;
-(BOOL)_readExtendedPointAttributes:(SCD_Struct_GE135*)arg1 ;
-(void)_attachRoadPoints;
-(void)_findJunctions;
-(void)_findOverpasses;
-(void)_trimWhitespace;
-(void)dealloc;
-(id)description;
-(SCD_Struct_GE127*)curveLineVertices;
-(id)extrusionHeightsPool;
-(id)baseHeightsPool;
-(SCD_Struct_GE90*)polygonLabelPositions;
-(void)forEachPoint:(/*^block*/id)arg1 ;
-(void)forEachPolygon:(/*^block*/id)arg1 ;
-(void)forEachJunction:(/*^block*/id)arg1 ;
-(void)forEachJunctionInRoad:(SCD_Struct_GE94*)arg1 visitor:(/*^block*/id)arg2 ;
-(unsigned long long)linesVertexCount;
-(unsigned long long)polygonsVertexCount;
-(BOOL)dataIncludesConnectivity;
-(SCD_Struct_GE94*)multiSectionFeatureForGeoID:(unsigned long long)arg1 ;
-(SCD_Struct_GE120*)hiResBuildingFootprints;
-(unsigned long long)hiResBuildingFootprintsCount;
-(BOOL)hasComputedJunctions;
-(unsigned long long)pointsOnRoadCount;
-(SCD_Struct_GE125*)laneConnections;
-(unsigned long long)laneConnectionsCount;
-(SCD_Struct_GE133*)lineCharacteristicPoints;
-(unsigned long long)lineCharacteristicPointCount;
-(SCD_Struct_GE133*)polygonCharacteristicPoints;
-(unsigned long long)polygonCharacteristicPointCount;
-(SCD_Struct_GE133*)coastlineCharacteristicPoints;
-(unsigned long long)coastlineCharacteristicPointCount;
-(unsigned long long)tileReferenceCount;
-(GEOTileKey*)tileReferences;
-(SCD_Struct_GE120*)buildingFootprints;
-(unsigned long long)buildingFootprintsCount;
-(unsigned long long)poisCount;
-(SCD_Struct_GE123*)pois;
-(unsigned long long)linesCount;
-(SCD_Struct_GE94*)lines;
-(unsigned long long)polygonsCount;
-(SCD_Struct_GE119*)polygons;
-(unsigned long long)coastlinesCount;
-(SCD_Struct_GE94*)coastlines;
-(GEOTileKey)tileKey;
-(SCD_Struct_GE127*)lineVertices;
-(unsigned long long)junctionsCount;
-(SCD_Struct_GE125*)pointsOnRoad;
-(SCD_Struct_GE107*)junctions;
-(SCD_Struct_GE124*)overpasses;
-(void)forEachEdgeOnJunction:(const SCD_Struct_GE107*)arg1 visitor:(/*^block*/id)arg2 ;
-(void)forEachEdgeInRoad:(SCD_Struct_GE94*)arg1 visitTwice:(BOOL)arg2 visitor:(/*^block*/id)arg3 ;
-(id)initWithTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(/*function pointer*/void**)sortedPointsOnRoad;
-(void)forEachRoad:(/*^block*/id)arg1 ;
-(SCD_Struct_GE121*)threeDBuildings;
-(unsigned long long)threeDBuildingsCount;
@end

