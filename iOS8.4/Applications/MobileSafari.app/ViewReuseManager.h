/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ViewReuseManagerDelegate;
#import <MobileSafari/MobileSafari-Structs.h>
@class NSMutableArray, NSMutableSet, NSArray;

@interface ViewReuseManager : NSObject {

	NSMutableArray* _trackedViews;
	NSMutableSet* _reusableViews;
	NSMutableSet* _viewsPendingRecycling;
	int _firstPreviouslyVisibleRepresentedObjectIndex;
	char _alwaysSendPrepareForReuse;
	Class _reusableViewClass;
	id<ViewReuseManagerDelegate> _delegate;

}

@property (nonatomic,readonly) Class reusableViewClass;                                 //@synthesize reusableViewClass=_reusableViewClass - In the implementation block
@property (assign,nonatomic,__weak) id<ViewReuseManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char alwaysSendPrepareForReuse;                            //@synthesize alwaysSendPrepareForReuse=_alwaysSendPrepareForReuse - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackedViews;                             //@synthesize trackedViews=_trackedViews - In the implementation block
-(id)initWithReusableViewClass:(Class)arg1 ;
-(void)updateTrackedViewsForRepresentedObjectsInRange:(NSRange)arg1 ;
-(NSArray *)trackedViews;
-(void)removeViewFromTrackedViews:(id)arg1 ;
-(void)recycleView:(id)arg1 ;
-(void)setAlwaysSendPrepareForReuse:(char)arg1 ;
-(void)insertView:(id)arg1 inTrackedViewsAtIndex:(int)arg2 ;
-(void)_recycleViewsInCollection:(id)arg1 ;
-(void)_addTrackedViewForRepresentedObjectAtIndex:(unsigned)arg1 ;
-(void)_recycleView:(id)arg1 ;
-(id)makeView;
-(char)alwaysSendPrepareForReuse;
-(void)dealloc;
-(void)setDelegate:(id<ViewReuseManagerDelegate>)arg1 ;
-(id)init;
-(id<ViewReuseManagerDelegate>)delegate;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(Class)reusableViewClass;
@end
