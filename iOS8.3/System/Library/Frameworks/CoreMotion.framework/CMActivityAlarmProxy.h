/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:44:22 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSMutableDictionary, NSObject;

@interface CMActivityAlarmProxy : NSObject {

	id _internal;
	CLConnectionClient* fLocationdConnection;
	int fAlarmCounter;
	NSMutableDictionary* fAlarms;
	NSObject*<OS_dispatch_queue> fReplyQueue;
	BOOL fAlarmAvailable;
	NSObject*<OS_dispatch_source> fWatchdogTimer;

}
+(id)sharedInstance;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(char)activityAlarmAvailable;
-(void)listenForActivityAlarm:(id)arg1 ;
-(void)stopListeningForActivityAlarm:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
