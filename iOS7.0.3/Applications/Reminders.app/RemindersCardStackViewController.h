/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIViewController.h>
#import <Reminders/RemindersCardStackViewDataSource.h>
#import <Reminders/RemindersCardStackViewDelegate.h>
#import <Reminders/RemindersArchiving.h>
#import <Reminders/RemindersListControllerDelegate.h>
#import <Reminders/RemindersSearchViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class RemindersCardStackView, RemindersListController, UIView, RemindersCardController, EKCalendar, RemindersSearchViewController;

@interface RemindersCardStackViewController : UIViewController <RemindersCardStackViewDataSource, RemindersCardStackViewDelegate, RemindersArchiving, RemindersListControllerDelegate, RemindersSearchViewControllerDelegate, UIScrollViewDelegate, UIActionSheetDelegate> {

	RemindersCardStackView* _stackView;
	RemindersListController* _highlightedList;
	UIView* _containerView;
	RemindersCardController* _newListCard;
	CGPoint _scrollOffsetAtDragStart;
	float _originalCardHeight;
	float _cachedCardSpacing;
	BOOL _isDeleting;
	EKCalendar* _reorderingCalendar;
	BOOL _isPresentingScheduledCard;
	BOOL _needsReload;
	RemindersSearchViewController* _searchViewController;

}

@property (assign,nonatomic) BOOL isPresentingScheduledCard;                            //@synthesize isPresentingScheduledCard=_isPresentingScheduledCard - In the implementation block
@property (readonly) RemindersSearchViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
@property (assign) BOOL needsReload;                                                    //@synthesize needsReload=_needsReload - In the implementation block
-(void)setNeedsReload:(BOOL)arg1 ;
-(BOOL)needsReload;
-(void)applyArchive:(id)arg1 ;
-(id)sortedCalendars;
-(void)highlightReminder:(id)arg1 withSearchTerm:(id)arg2 ;
-(void)eventStoreChangedWithChangedObjectIDs:(id)arg1 ;
-(void)alarmsFired;
-(float)cardSpacing;
-(int)numberOfCards;
-(BOOL)listControllerIsOnTop:(id)arg1 ;
-(void)listControllerBeganEditing:(id)arg1 ;
-(void)listControllerEndedEditing:(id)arg1 ;
-(void)listControllerWillBeShown:(id)arg1 ;
-(void)listControllerWillBeHidden:(id)arg1 ;
-(void)listControllerDeletedList:(id)arg1 atIndex:(int)arg2 ;
-(void)searchController:(id)arg1 willBecomeActive:(BOOL)arg2 ;
-(void)searchController:(id)arg1 didSelectReminder:(id)arg2 forSearchTerm:(id)arg3 ;
-(void)listControllerCanceledEditing:(id)arg1 ;
-(void)listControllerBeganModalEditing:(id)arg1 ;
-(void)listControllerEndedModalEditing:(id)arg1 ;
-(void)listControllerCreatedNewList:(id)arg1 ;
-(void)setIsPresentingScheduledCard:(BOOL)arg1 ;
-(id)cardAtIndex:(int)arg1 ;
-(void)_toggleScheduledCard;
-(BOOL)cardStackView:(id)arg1 cardShouldSlideBackIntoStackWhenDismissed:(id)arg2 ;
-(void)cardStackViewDidPresentCard:(id)arg1 ;
-(void)cardStackView:(id)arg1 willAddGestureRecognizer:(id)arg2 toCardAtIndex:(int)arg3 ;
-(void)cardStackView:(id)arg1 didDismissCard:(id)arg2 ;
-(int)indexOfCard:(id)arg1 ;
-(void)cardStackView:(id)arg1 cardDidMoveFromIndex:(int)arg2 toIndex:(int)arg3 ;
-(void)cardStackViewDidEndReordering:(id)arg1 ;
-(void)_loadInitialList;
-(id)searchViewController;
-(void)_reloadStack;
-(BOOL)isPresentingScheduledCard;
-(void)_presentScheduledCard;
-(void)unhighlightReminder;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)state;
-(int)preferredStatusBarStyle;
-(BOOL)shouldAutorotate;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)endEditing;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_stackView;
-(void).cxx_destruct;
-(id)archive;
@end
