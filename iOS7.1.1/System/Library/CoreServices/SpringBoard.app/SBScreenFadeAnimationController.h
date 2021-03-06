/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIWindow, UIView, SBFLockScreenDateView, SBLockScreenView, SBFadeAnimationSettings;

@interface SBScreenFadeAnimationController : NSObject {

	UIWindow* _fadeWindow;
	UIView* _overlayView;
	SBFLockScreenDateView* _dateView;
	float _originalDateLeftEdge;
	float _originalDateBottomEdge;
	float _finalTimeAlpha;
	float _finalDateAlpha;
	float _finalStatusBarAlpha;
	SBLockScreenView* _lockScreenView;
	BOOL _preparingToAnimateFadeIn;
	BOOL _animatingForFadeIn;
	BOOL _animatingForFadeOut;
	int _animationToken;
	/*^block*/ id _fadeInCompletionBlock;
	/*^block*/ id _fadeOutCompletionBlock;
	BOOL _animatingDateTime;
	BOOL _animatingWallpaper;
	BOOL _animatingOverlay;
	BOOL _animatingContent;
	SBFadeAnimationSettings* _settings;

}
+(id)sharedInstance;
-(BOOL)isFadeOutAnimationInProgress;
-(BOOL)isFadeInAnimationInProgress;
-(void)fadeOutWithCompletion:(/*^block*/ id)arg1 ;
-(void)_blankScreenStateChanged;
-(void)_mediaControlsDidShow;
-(void)_assistantVisibilityChanged;
-(void)_cleanupAnimationWhenInterruptingFadeIn:(BOOL)arg1 ;
-(void)_runCompletionHandlerForFadeIn:(BOOL)arg1 ;
-(void)_createFadeWindowForFadeIn:(BOOL)arg1 ;
-(void)_setRelevantLockScreenViewsHidden:(BOOL)arg1 ;
-(void)_adjustViewsForCurrentOrientation;
-(void)_startFadeInIfNecessary;
-(void)_startFadeAnimationsForFadeIn:(BOOL)arg1 ;
-(void)setDateViewAlpha:(float)arg1 ;
-(void)_handleAnimationCompletionIfNecessaryForFadeIn:(BOOL)arg1 ;
-(double)fadeInAnimationDuration;
-(double)fadeOutAnimationDuration;
-(void)updateDateFrameHorizontalOffset:(float)arg1 verticalOffset:(float)arg2 ;
-(void)abortAnimatedDateFrameChange;
-(void)hideDate;
-(void)prepareToFadeInWithTimeAlpha:(float)arg1 dateAlpha:(float)arg2 statusBarAlpha:(float)arg3 lockScreenView:(id)arg4 existingDateView:(id)arg5 completion:(/*^block*/ id)arg6 ;
-(void)dealloc;
-(id)init;
-(void)setTextColor:(id)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
@end

