/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:27 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDate, GEOSolarEclipticCelestialBodyData, GEOEquatorialCelestialBodyData, GEOHorizontalCelestialBodyData;

@interface GEOCelestialEphemeris : NSObject {

	NSDate* _date;
	SCD_Struct_GE15 _coordinate;
	int _body;
	GEOSolarEclipticCelestialBodyData* _eclipticCoord;
	GEOEquatorialCelestialBodyData* _equatorialCoord;
	GEOHorizontalCelestialBodyData* _horizontalCoord;
	NSDate* _rise;
	NSDate* _transit;
	NSDate* _set;
	double _phaseAngle;
	double _illuminatedFraction;
	double _elongation;
	double _parallacticAngle;

}

@property (nonatomic,readonly) NSDate * rise;                                                  //@synthesize rise=_rise - In the implementation block
@property (nonatomic,readonly) NSDate * transit;                                               //@synthesize transit=_transit - In the implementation block
@property (nonatomic,readonly) NSDate * set;                                                   //@synthesize set=_set - In the implementation block
@property (nonatomic,readonly) double phaseAngle;                                              //@synthesize phaseAngle=_phaseAngle - In the implementation block
@property (nonatomic,readonly) double illuminatedFraction;                                     //@synthesize illuminatedFraction=_illuminatedFraction - In the implementation block
@property (nonatomic,readonly) double elongation;                                              //@synthesize elongation=_elongation - In the implementation block
@property (nonatomic,readonly) double parallacticAngle;                                        //@synthesize parallacticAngle=_parallacticAngle - In the implementation block
@property (nonatomic,readonly) GEOSolarEclipticCelestialBodyData * eclipticCoord; 
@property (nonatomic,readonly) GEOEquatorialCelestialBodyData * equatorialCoord; 
@property (nonatomic,readonly) GEOHorizontalCelestialBodyData * horizontalCoord; 
-(void)dealloc;
-(NSDate *)set;
-(id)initWithLocation:(SCD_Struct_GE15)arg1 date:(id)arg2 body:(int)arg3 ;
-(CAARiseTransitSetDetails)_riseTransitSetForBody:(int)arg1 ;
-(void)_getRightAscension:(double*)arg1 declination:(double*)arg2 forJulianDay:(double)arg3 forBody:(int)arg4 ;
-(GEOSolarEclipticCelestialBodyData *)eclipticCoord;
-(GEOEquatorialCelestialBodyData *)equatorialCoord;
-(GEOHorizontalCelestialBodyData *)horizontalCoord;
-(NSDate *)rise;
-(NSDate *)transit;
-(double)elongation;
-(double)phaseAngle;
-(double)illuminatedFraction;
-(double)parallacticAngle;
@end

