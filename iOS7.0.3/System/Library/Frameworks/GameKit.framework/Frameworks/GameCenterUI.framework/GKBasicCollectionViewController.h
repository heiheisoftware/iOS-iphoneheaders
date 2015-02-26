/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKCollectionViewController.h>

@class NSArray, GKCollectionViewDataSource;

@interface GKBasicCollectionViewController : GKCollectionViewController {

	id _target;
	NSArray* _metricsForSections;
	GKCollectionViewDataSource* _initialDataSource;

}

@property (nonatomic,retain) id target;                                                   //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSArray * metricsForSections;                                //@synthesize metricsForSections=_metricsForSections - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * initialDataSource;              //@synthesize initialDataSource=_initialDataSource - In the implementation block
-(void)configureDataSource;
-(void)setInitialDataSource:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 title:(id)arg2 ;
-(id)metricsForSections;
-(void)setMetricsForSections:(id)arg1 ;
-(id)initialDataSource;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
@end
