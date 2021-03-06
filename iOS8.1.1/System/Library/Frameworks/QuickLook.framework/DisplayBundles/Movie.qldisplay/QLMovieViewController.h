/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Movie.qldisplay/Movie
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Movie/Movie-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIMovieScrubberDelegate.h>
#import <Movie/MPMoviePlayerControllerDelegate.h>

@protocol QLMovieViewControllerDelegate;
@class MPMoviePlayerController, NSURL, UIMovieScrubber, UIView, UIButton, NSTimer, UIImage, UIImageView, NSMutableDictionary, NSArray, UITapGestureRecognizer, QLMovieScrubberDataSource, NSString;

@interface QLMovieViewController : UIViewController <UIMovieScrubberDelegate, MPMoviePlayerControllerDelegate> {

	id<QLMovieViewControllerDelegate> _delegate;
	MPMoviePlayerController* _moviePlayer;
	NSURL* _contentURL;
	UIMovieScrubber* _scrubber;
	UIView* _overlayPlayButtonView;
	UIButton* _playPauseButton;
	UIView* _scrubberContainerView;
	NSTimer* _scrubberUpdateTimer;
	UIImage* _posterFrame;
	UIImageView* _posterFrameImageView;
	int _enableAnimationCount;
	double _animationDuration;
	/*^block*/id _canPlayBlock;
	int _controlStyle;
	double _scrubberVerticalOffset;
	unsigned _didAppear : 1;
	unsigned _showsPlayOverlay : 1;
	unsigned _showsScrubber : 1;
	unsigned _scrubberVisible : 1;
	unsigned _showsEmbeddedControls : 1;
	unsigned _canCreateMetadata : 1;
	unsigned _canPlay : 1;
	unsigned _wantsScrubberUpdates : 1;
	unsigned _isVisible : 1;
	unsigned _showingScrubber : 1;
	unsigned _scrubbing : 1;
	unsigned _shouldResumePlayAfterScrubbing : 1;
	unsigned _playing : 1;
	unsigned _needToPrepareToPlay : 1;
	unsigned _loadScrubberThumbnails : 1;
	unsigned _hasBeenPlayed : 1;
	BOOL _readyToPlay;
	NSMutableDictionary* _cachedThumbnails;
	NSArray* _landscapeSummaryThumbnailTimestamps;
	NSArray* _portraitSummaryThumbnailTimestamps;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	QLMovieScrubberDataSource* _scrubberDataSource;
	NSURL* _originalContentURL;
	BOOL _canEdit;

}

@property (assign) id<QLMovieViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL readyToPlay;                                        //@synthesize readyToPlay=_readyToPlay - In the implementation block
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) double animationDuration;                      //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) BOOL showsScrubber; 
@property (assign,nonatomic) double scrubberVerticalOffset; 
@property (assign,nonatomic) BOOL wantsScrubberUpdates; 
@property (assign,nonatomic) BOOL showsPlayOverlay; 
@property (assign,nonatomic) int controlStyle; 
@property (assign,nonatomic) BOOL canCreateMetadata; 
@property (assign,nonatomic) BOOL canPlay; 
@property (assign,nonatomic) BOOL canEdit;                                  //@synthesize canEdit=_canEdit - In the implementation block
@property (getter=isAudioOnly,readonly) BOOL audioOnly; 
@property (assign,nonatomic) BOOL disallowsAMRAudio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updatePlayButton:(BOOL)arg1 ;
-(void)_setScrubberVisible:(BOOL)arg1 duration:(double)arg2 ;
-(void)_createMovieViewIfNeeded;
-(void)_movieDidExitFullScreen:(id)arg1 ;
-(void)_setDoubleTapEnabled:(BOOL)arg1 ;
-(void)_setScrubberPlayVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_airPlayVideoActiveDidChange:(id)arg1 ;
-(void)_updatePrepareToPlayState;
-(void)setCanCreateMetadata:(BOOL)arg1 ;
-(void)setReadyToPlay:(BOOL)arg1 ;
-(void)_movieIsReadyForDisplay:(id)arg1 ;
-(void)_prepareMoviePlayerAfterDelay;
-(BOOL)_isAVNotificationApropos:(id)arg1 ;
-(void)_updateScrubberState;
-(void)_updateScrubberThumb;
-(void)setScrubberVerticalOffset:(double)arg1 ;
-(void)setWantsScrubberUpdates:(BOOL)arg1 ;
-(BOOL)mayBeAudioOnly;
-(void)_updatePosterFrame;
-(void)_updateMovieVisibility;
-(void)_moviePlaybackDidFinish:(id)arg1 ;
-(double)scrubberVerticalOffset;
-(void)_stopScrubberUpdateTimer;
-(void)_setPlaying:(BOOL)arg1 isNotification:(BOOL)arg2 ;
-(void)_cancelPrepareMoviePlayer;
-(void)_tearDownMovieView;
-(void)_updatePosterFrameBackgroundColor;
-(void)_updateScrubberTimer;
-(void)playPause:(id)arg1 ;
-(void)_updatePlaybackRange;
-(void)_moviePlaybackStateChanged:(id)arg1 ;
-(BOOL)wantsScrubberUpdates;
-(id)movieScrubber;
-(void)_updateScrubberLayout;
-(void)_movieIsPreparedForDisplay:(id)arg1 ;
-(void)preparePosterFrame;
-(void)setCanPlayBlock:(/*^block*/id)arg1 ;
-(BOOL)readyToPlay;
-(void)_playConditionally:(id)arg1 ;
-(void)_startScrubberUpdateTimer;
-(double)movieDuration;
-(void)setControlsVisible:(BOOL)arg1 duration:(double)arg2 ;
-(void)_avControllerPlaybackStateChanged:(id)arg1 ;
-(void)_updateScrubberDataSource;
-(id)_overlayPlayButtonView;
-(void)_movieDidEnterFullScreen:(id)arg1 ;
-(BOOL)canEdit;
-(void)setContentURL:(id)arg1 ;
-(id)initWithContentURL:(id)arg1 ;
-(id)contentURL;
-(int)controlStyle;
-(void)setControlStyle:(int)arg1 ;
-(void)prepareToPlay;
-(BOOL)isPreparedToPlay;
-(void)play;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(BOOL)moviePlayerBookmarkButtonPressed:(id)arg1 ;
-(BOOL)moviePlayerNextButtonPressed:(id)arg1 ;
-(BOOL)moviePlayerPreviousButtonPressed:(id)arg1 ;
-(BOOL)moviePlayerShareButtonPressed:(id)arg1 ;
-(void)moviePlayer:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)moviePlayerDidShowOverlay:(id)arg1 ;
-(void)moviePlayer:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)moviePlayerDidHideOverlay:(id)arg1 ;
-(BOOL)disallowsAMRAudio;
-(void)setDisallowsAMRAudio:(BOOL)arg1 ;
-(id)moviePlayer;
-(void)beginScrubbing;
-(void)scrubToValue:(double)arg1 ;
-(void)endScrubbing;
-(void)dealloc;
-(void)setDelegate:(id<QLMovieViewControllerDelegate>)arg1 ;
-(id<QLMovieViewControllerDelegate>)delegate;
-(void)setAnimationDuration:(double)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)disableAnimation;
-(void)enableAnimation;
-(BOOL)isAnimationEnabled;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(double)animationDuration;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)_doubleTapRecognized:(id)arg1 ;
-(id)_snapshotImage;
-(void)movieScrubber:(id)arg1 valueDidChange:(double)arg2 ;
-(void)movieScrubberDidFinishRequestingThumbnails:(id)arg1 ;
-(void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3 ;
-(void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(double)startTime;
-(void)pause;
-(CGSize)naturalSize;
-(BOOL)isAudioOnly;
-(void)setCanEdit:(BOOL)arg1 ;
-(void)setShowsScrubber:(BOOL)arg1 ;
-(void)setShowsPlayOverlay:(BOOL)arg1 ;
-(BOOL)canCreateMetadata;
-(void)_updateScrubberValue;
-(void)_createScrubberIfNeeded;
-(BOOL)showsPlayOverlay;
-(BOOL)showsScrubber;
-(double)endTime;
-(BOOL)canPlay;
-(void)play:(id)arg1 ;
-(BOOL)isPlaying;
-(void)setCanPlay:(BOOL)arg1 ;
@end

