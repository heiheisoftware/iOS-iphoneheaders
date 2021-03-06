/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationItem.h>

@protocol StarkDrivingNavigationItemDelegate;
@class UIBarButtonItem, MNVoiceController;

@interface StarkDrivingNavigationItem : UINavigationItem {

	UIBarButtonItem* _endItem;
	UIBarButtonItem* _volumeControl;
	UIBarButtonItem* _overviewItem;
	UIBarButtonItem* _startSpace;
	UIBarButtonItem* _smallSpace;
	UIBarButtonItem* _largeSpace;
	UIBarButtonItem* _zoomOutItem;
	UIBarButtonItem* _zoomInItem;
	MNVoiceController* _voiceController;
	char _showsVolumeButton;
	int _overviewState;
	id<StarkDrivingNavigationItemDelegate> _delegate;

}

@property (assign,nonatomic) int overviewState;                                                   //@synthesize overviewState=_overviewState - In the implementation block
@property (assign,nonatomic,__weak) id<StarkDrivingNavigationItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsVolumeButton;                                              //@synthesize showsVolumeButton=_showsVolumeButton - In the implementation block
-(id)preferredFocusItem;
-(void)endRoute;
-(void)toggleOverview;
-(void)_toggleMute;
-(void)setOverviewState:(int)arg1 animated:(char)arg2 ;
-(int)overviewState;
-(void)setShowsVolumeButton:(char)arg1 animated:(char)arg2 ;
-(void)updateItem;
-(void)setOverviewState:(int)arg1 ;
-(void)setShowsVolumeButton:(char)arg1 ;
-(char)showsVolumeButton;
-(void)_zoomIn;
-(void)_zoomOut;
-(void)_updateContents;
-(id)mapView;
-(void)dealloc;
-(void)setDelegate:(id<StarkDrivingNavigationItemDelegate>)arg1 ;
-(id<StarkDrivingNavigationItemDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
@end

