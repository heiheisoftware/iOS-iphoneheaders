/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUTableViewController.h>

@class NSIndexPath;

@interface MCDTableViewController : MPUTableViewController {

	NSIndexPath* _previouslySelectedIndexPath;
	bool _shouldHideIndexTitles;

}

@property (assign,nonatomic) bool shouldHideIndexTitles;              //@synthesize shouldHideIndexTitles=_shouldHideIndexTitles - In the implementation block
+(Class)_tableViewClass;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(bool)_viewControllerWasSelected;
-(void).cxx_destruct;
-(bool)shouldScrollToFirstDataSourceSectionOnInitialAppearance;
-(bool)shouldHideIndexTitles;
-(void)setShouldHideIndexTitles:(bool)arg1 ;
-(id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2 ;
-(id)_createTableView;
-(id)music_createNowPlayingButton;
@end

