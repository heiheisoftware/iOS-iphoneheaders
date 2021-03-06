/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ADApplicationStateChangeEventListener, ADPowerEventListener, PLAggregateLogger;

@interface ADEventListener : NSObject {

	ADApplicationStateChangeEventListener* _appStateChangeEventListener;
	ADPowerEventListener* _powerEventListener;
	PLAggregateLogger* _aggregateLogger;

}
-(void)registerForThermalNotification;
-(void)checkForDeviceBoot;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
@end

