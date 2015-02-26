/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /usr/lib/libactivator.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libactivator.dylib/LASettingsViewController.h>

@protocol LARootSettingsControllerDelegate;
@class NSIndexPath;

@interface LARootSettingsController : LASettingsViewController {

	void* libhide;
	/*function pointer*/void* libhideIsHidden;
	BOOL alive;
	id<LARootSettingsControllerDelegate> rootSettingsDelegate;
	BOOL showsPersistentSelection;
	NSIndexPath* selectedIndexPath;

}

@property (assign,nonatomic) id<LARootSettingsControllerDelegate> rootSettingsDelegate; 
@property (assign,nonatomic) BOOL showsPersistentSelection; 
@property (nonatomic,copy) NSIndexPath * selectedIndexPath; 
-(BOOL)showsAd;
-(id)viewControllerForIndexPath:(id)arg1 ;
-(void)performActionForIndexPath:(id)arg1 ;
-(void)setRootSettingsDelegate:(id<LARootSettingsControllerDelegate>)arg1 ;
-(id<LARootSettingsControllerDelegate>)rootSettingsDelegate;
-(BOOL)showsPersistentSelection;
-(void)setShowsPersistentSelection:(BOOL)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)showTweetSheet;
-(void)shareTheLoveHeld:(id)arg1 ;
-(id)eventModeForIndexPath:(id)arg1 ;
-(void)showResetAlert;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)loadView;
@end
