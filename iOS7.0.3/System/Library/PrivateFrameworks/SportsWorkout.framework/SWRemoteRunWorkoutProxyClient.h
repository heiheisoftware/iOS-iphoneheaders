/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWRunWorkoutProxy.h>

@class NSTimer, NSString, NSDictionary;

@interface SWRemoteRunWorkoutProxyClient : SWRunWorkoutProxy {

	NSTimer* _updateTimer;
	NSString* _goalType;
	NSString* _presetGoal;
	float _goal;
	NSString* _sensorSearchState;
	NSString* _workoutState;
	NSDictionary* _workoutData;
	BOOL _hasEverStarted;
	BOOL _hasPowerSong;
	NSString* _powerSongName;
	BOOL _shouldControlMusic;
	int _musicSelection;
	NSString* _currentSongName;
	NSString* _currentAlbumName;
	NSString* _currentArtistName;

}
-(id)workoutData;
-(void)activateWorkout;
-(void)pauseWorkout;
-(void)playPowerSong;
-(BOOL)shouldControlMusic;
-(void)selectNextSong;
-(void)selectPreviousSong;
-(void)playOnDemandPrompt;
-(void)endWorkout;
-(id)goalType;
-(float)goal;
-(id)powerSongName;
-(void)prepareToActivateWorkout;
-(BOOL)hasPowerSong;
-(id)workoutState;
-(BOOL)hasEverStarted;
-(id)presetGoal;
-(void)goToNowPlaying;
-(void)pauseMusic;
-(void)playMusic;
-(void)_sensorSearchStateChanged:(id)arg1 ;
-(void)_workoutStateChanged:(id)arg1 ;
-(void)_nowPlayingChanged:(id)arg1 ;
-(int)musicSelection;
-(id)currentSongName;
-(id)currentAlbumName;
-(id)currentArtistName;
-(id)sensorSearchState;
-(void)_handlePropertyUpdateNotification:(id)arg1 ;
-(void)_checkinWithServer;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)dealloc;
-(id)init;
@end

