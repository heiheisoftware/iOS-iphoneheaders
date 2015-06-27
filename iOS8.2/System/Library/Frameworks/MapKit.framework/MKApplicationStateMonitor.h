/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKSApplicationStateMonitor;

@interface MKApplicationStateMonitor : NSObject {

	BKSApplicationStateMonitor* _appStateMonitor;
	char _inBackground;
	char _active;
	unsigned _observerCount;
	char _forceBackboardServicesMonitoring;

}

@property (assign,nonatomic) char forceBackboardServicesMonitoring;                  //@synthesize forceBackboardServicesMonitoring=_forceBackboardServicesMonitoring - In the implementation block
@property (getter=isInBackground,nonatomic,readonly) char inBackground;              //@synthesize inBackground=_inBackground - In the implementation block
@property (getter=isActive,nonatomic,readonly) char active;                          //@synthesize active=_active - In the implementation block
+(id)sharedInstance;
-(void)startObserving;
-(char)isInBackground;
-(void)_enterBackground;
-(void)_exitBackground;
-(void)_becomeActive;
-(void)setForceBackboardServicesMonitoring:(char)arg1 ;
-(char)forceBackboardServicesMonitoring;
-(void)_resignActive;
-(void)dealloc;
-(char)isActive;
-(void)stopObserving;
@end
