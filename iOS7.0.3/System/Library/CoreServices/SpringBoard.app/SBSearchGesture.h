/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSHashTable, SBSearchScrollView, UIView;

@interface SBSearchGesture : NSObject <UIScrollViewDelegate> {

	NSHashTable* _observers;
	SBSearchScrollView* _scrollView;
	BOOL _suppressObserverCallbacks;
	BOOL _animatingResetOrReveal;
	BOOL _enabled;
	UIView* _targetView;

}

@property (nonatomic,retain) UIView * targetView;                                                        //@synthesize targetView=_targetView - In the implementation block
@property (getter=isAnimatingResetOrReveal,nonatomic,readonly) BOOL animatingResetOrReveal;              //@synthesize animatingResetOrReveal=_animatingResetOrReveal - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                               //@synthesize enabled=_enabled - In the implementation block
+(id)sharedInstance;
-(void)revealAnimated:(BOOL)arg1 ;
-(void)_iconEditingStateChanged:(id)arg1 ;
-(void)_openFolderChanged:(id)arg1 ;
-(void)_displayLaunched:(id)arg1 ;
-(void)updateForRotation;
-(void)_updateForScrollingEnded;
-(void)_updateScrollingEnabled;
-(void)_updateForFinalContentOffset;
-(BOOL)_isShowingSearch;
-(void)resetAnimated:(BOOL)arg1 ;
-(BOOL)isAnimatingResetOrReveal;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(id)targetView;
-(void)setTargetView:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end

