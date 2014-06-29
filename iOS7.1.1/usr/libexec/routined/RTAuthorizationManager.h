/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/routined
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface RTAuthorizationManager : NSObject {

	BOOL _supported;
	BOOL _enabled;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (nonatomic,retain) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL supported;                                   //@synthesize supported=_supported - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                     //@synthesize enabled=_enabled - In the implementation block
+(id)sharedInstance;
-(void)fetchRoutineSupportedWithHandler:(/*^block*/ id)arg1 ;
-(void)updateRoutineEnabled:(BOOL)arg1 ;
-(BOOL)isCoreRoutineLocationClientEnabled;
-(void)handleAppResetChangeNotification;
-(BOOL)isLocationServicesEnabled;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(void).cxx_destruct;
-(void)setSupported:(BOOL)arg1 ;
-(BOOL)supported;
-(void)setRoutineEnabled:(BOOL)arg1 ;
-(void)fetchRoutineEnabledWithHandler:(/*^block*/ id)arg1 ;
-(void)fetchBBPluginSupportedWithHandler:(/*^block*/ id)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
@end
