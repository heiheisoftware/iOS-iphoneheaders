/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOLocationShiftRequest, GEOPolyLocationShiftRequest, PBRequest;

@interface GEOLocationShiftFunctionRequest : NSObject {

	unsigned short _providerID;
	GEOLocationShiftRequest* _locationShiftRequest;
	GEOPolyLocationShiftRequest* _polyLocationShiftRequest;

}

@property (assign,nonatomic) unsigned short providerID;               //@synthesize providerID=_providerID - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE15 coordinate; 
@property (nonatomic,readonly) PBRequest * shiftRequest; 
-(void)dealloc;
-(void)setProviderID:(unsigned short)arg1 ;
-(PBRequest *)shiftRequest;
-(unsigned short)providerID;
-(SCD_Struct_GE15)coordinate;
-(void)setCoordinate:(SCD_Struct_GE15)arg1 ;
@end

