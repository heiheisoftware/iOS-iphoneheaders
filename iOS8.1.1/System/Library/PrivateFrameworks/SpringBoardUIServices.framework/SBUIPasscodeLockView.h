/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, UIColor;


@protocol SBUIPasscodeLockView <NSObject>
@property (assign,nonatomic) id<SBUIPasscodeLockViewDelegate> delegate; 
@property (nonatomic,readonly) int style; 
@property (nonatomic,readonly) NSString * passcode; 
@property (assign,nonatomic) BOOL playsKeypadSounds; 
@property (assign,nonatomic) BOOL showsStatusField; 
@property (assign,nonatomic) BOOL showsEmergencyCallButton; 
@property (assign,nonatomic) double backgroundAlpha; 
@property (nonatomic,retain) UIColor * customBackgroundColor; 
@property (nonatomic,retain) id<SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider; 
@property (assign,nonatomic) unsigned long long biometricMatchMode; 
@required
-(void)setDelegate:(id)arg1;
-(id<SBUIPasscodeLockViewDelegate>)delegate;
-(int)style;
-(void)reset;
-(void)setBackgroundAlpha:(double)arg1;
-(void)setShowsEmergencyCallButton:(BOOL)arg1;
-(void)setCustomBackgroundColor:(id)arg1;
-(void)setBackgroundLegibilitySettingsProvider:(id)arg1;
-(NSString *)passcode;
-(void)resetForFailedPasscode;
-(UIColor *)customBackgroundColor;
-(void)setPlaysKeypadSounds:(BOOL)arg1;
-(void)setShowsStatusField:(BOOL)arg1;
-(void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3;
-(unsigned long long)biometricMatchMode;
-(void)resetForScreenOff;
-(void)resetForFailedMesaAttemptWithStatusText:(id)arg1 andSubtitle:(id)arg2;
-(void)autofillForSuccessfulMesaAttemptWithCompletion:(/*^block*/id)arg1;
-(void)setAllowsStatusTextUpdatingOnResignFirstResponder:(BOOL)arg1;
-(BOOL)playsKeypadSounds;
-(BOOL)showsStatusField;
-(BOOL)showsEmergencyCallButton;
-(double)backgroundAlpha;
-(id<SBFLegibilitySettingsProvider>)backgroundLegibilitySettingsProvider;
-(void)setBiometricMatchMode:(unsigned long long)arg1;

@end

