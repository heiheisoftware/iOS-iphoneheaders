/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBLockScreenViewController, SBAlert, SBAlertManager;

@interface SBUIAnimationFadeAlertToLockscreen : SBUIMainScreenAnimationController {

	SBLockScreenViewController* _lockScreenViewController;
	SBAlert* _deactivatingAlert;
	SBAlertManager* _alertManager;

}
-(double)animationDelay;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)initWithLockScreenController:(id)arg1 deactivatingAlert:(id)arg2 alertManager:(id)arg3 ;
-(void)_startAnimation;
-(void)dealloc;
-(double)animationDuration;
@end

