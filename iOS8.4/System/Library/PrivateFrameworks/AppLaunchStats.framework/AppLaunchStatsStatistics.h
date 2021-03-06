/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <AppLaunchStats/DuetLoggerProtocol.h>
#import <AppLaunchStats/DuetSaveAndRestore.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSMutableArray, NSMutableDictionary, AppLaunchStatsSaveAndRestore;

@interface AppLaunchStatsStatistics : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {

	NSObject*<OS_dispatch_queue> statsQueue;
	unsigned long long records;
	NSDate* lastTriggeredDate;
	NSMutableArray* lastPredictedApps;
	NSMutableArray* lastForegroundApps;
	NSMutableDictionary* appStatistics;
	AppLaunchStatsSaveAndRestore* saveAndRestoreContext;
	/*^block*/id scoreCallback;
	short lastTriggeredSlot;
	BOOL bypass;

}
-(id)init:(/*^block*/id)arg1 ;
-(void)restore:(id)arg1 ;
-(void)save:(id)arg1 ;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)saveContext:(id)arg1 ;
-(BOOL)pullPredicted:(unsigned short)arg1 ;
-(id)copyStatisticsToDictionary;
-(void)broughtToForeground:(id)arg1 ;
-(BOOL)admit:(id)arg1 ;
-(void)trigger;
@end

