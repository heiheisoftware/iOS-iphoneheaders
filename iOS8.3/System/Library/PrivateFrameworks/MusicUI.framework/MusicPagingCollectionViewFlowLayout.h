/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:47:11 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface MusicPagingCollectionViewFlowLayout : UICollectionViewFlowLayout {

	float _distanceFromCenterForMinimumAlpha;
	float _minimumCellAlpha;
	int _numberOfItemsPerPage;

}

@property (assign,nonatomic) float distanceFromCenterForMinimumAlpha;              //@synthesize distanceFromCenterForMinimumAlpha=_distanceFromCenterForMinimumAlpha - In the implementation block
@property (assign,nonatomic) float minimumCellAlpha;                               //@synthesize minimumCellAlpha=_minimumCellAlpha - In the implementation block
@property (assign,nonatomic) int numberOfItemsPerPage;                             //@synthesize numberOfItemsPerPage=_numberOfItemsPerPage - In the implementation block
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(int)indexOfItemClosestToPoint:(CGPoint)arg1 ;
-(void)setDistanceFromCenterForMinimumAlpha:(float)arg1 ;
-(void)setMinimumCellAlpha:(float)arg1 ;
-(float)distanceFromCenterForMinimumAlpha;
-(float)minimumCellAlpha;
-(void)setNumberOfItemsPerPage:(int)arg1 ;
-(int)numberOfItemsPerPage;
@end
