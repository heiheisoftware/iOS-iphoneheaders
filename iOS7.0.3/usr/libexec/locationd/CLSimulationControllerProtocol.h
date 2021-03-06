/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CLSimulationControllerProtocol <CLIntersiloServiceProtocol>
@required
-(void)setSimulationScenarioURL:(id)arg1;
-(void)setSimulationType:(int)arg1;
-(void)setIntermediateLocationDistance:(double)arg1;
-(void)setTravellingSpeed:(double)arg1;
-(void)clearPendingLocations;
-(void)addPendingLocationsArray:(id)arg1;
-(void)startSimulation;
-(void)stopSimulation;
-(void)setRepeatBehavior:(int)arg1;
-(void)setLocationInterval:(double)arg1;
-(void)shutdown;
@end

