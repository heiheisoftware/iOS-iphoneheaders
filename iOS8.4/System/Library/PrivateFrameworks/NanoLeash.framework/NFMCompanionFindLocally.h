/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/companionfindlocallyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <NanoLeash/NFMIDSServiceDelegate.h>
#import <companionfindlocallyd/IDSServiceDelegate.h>
#import <companionfindlocallyd/NFMCompanionFindMyController.h>

@class NSTimer, IDSService, AVController, NSString;

@interface NFMCompanionFindLocally : NFMIDSServiceDelegate <IDSServiceDelegate, NFMCompanionFindMyController> {

	BOOL _flashEnabled;
	NSTimer* _flashScheduler;
	long long _flashCount;
	IDSService* _gizmoService;
	NSTimer* _alarm;
	AVController* _avController;

}

@property (nonatomic,retain) NSTimer * flashScheduler;                 //@synthesize flashScheduler=_flashScheduler - In the implementation block
@property (assign,nonatomic) long long flashCount;                     //@synthesize flashCount=_flashCount - In the implementation block
@property (assign,nonatomic) BOOL flashEnabled;                        //@synthesize flashEnabled=_flashEnabled - In the implementation block
@property (nonatomic,retain) IDSService * gizmoService;                //@synthesize gizmoService=_gizmoService - In the implementation block
@property (nonatomic,retain) NSTimer * alarm;                          //@synthesize alarm=_alarm - In the implementation block
@property (nonatomic,retain) AVController * avController;              //@synthesize avController=_avController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelAllAlerts:(id)arg1 ;
-(void)playSound:(id)arg1 ;
-(void)playSoundAndFlash:(id)arg1 ;
-(void)setFlashEnabled:(BOOL)arg1 ;
-(BOOL)_isDeviceLocked;
-(BOOL)_isFaceTimeOrCameraFrontmost;
-(BOOL)_isInFaceTimeCall;
-(void)flashLED;
-(void)updateFlashState;
-(BOOL)_playFindLocallySound;
-(void)flashLEDIfAppropriate;
-(BOOL)_playSoundAndFlash;
-(IDSService *)gizmoService;
-(NSTimer *)flashScheduler;
-(void)setFlashScheduler:(NSTimer *)arg1 ;
-(long long)flashCount;
-(void)setFlashCount:(long long)arg1 ;
-(BOOL)flashEnabled;
-(void)setGizmoService:(IDSService *)arg1 ;
-(NSTimer *)alarm;
-(void)setAlarm:(NSTimer *)arg1 ;
-(void)setAvController:(AVController *)arg1 ;
-(AVController *)avController;
-(id)init;
@end

