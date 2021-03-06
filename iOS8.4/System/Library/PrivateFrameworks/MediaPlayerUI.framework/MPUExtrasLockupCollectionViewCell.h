/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <MediaPlayerUI/MPUExtrasCarouselCollectionViewCell.h>

@class MPUExtrasConstrainedArtworkContainerView, UIView, UILabel, NSLayoutConstraint, NSString, MPUExtrasZoomingImageInteractiveTransitionSourceContext, UIPinchGestureRecognizer, IKLockupElement;

@interface MPUExtrasLockupCollectionViewCell : UICollectionViewCell <MPUExtrasCarouselCollectionViewCell> {

	CGSize _artworkSize;
	MPUExtrasConstrainedArtworkContainerView* _artworkContainerView;
	UIView* _textContainerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _descriptionLabel;
	unsigned long long _itemIndex;
	NSLayoutConstraint* _artworkContainerWidthConstraint;
	NSLayoutConstraint* _artworkContainerHeightConstraint;
	NSLayoutConstraint* _subtitleBaselineConstraint;
	NSLayoutConstraint* _descriptionBaselineConstraint;
	NSString* _zoomingImageTransitionIdentifier;
	MPUExtrasZoomingImageInteractiveTransitionSourceContext* _interactiveTransitionSourceContext;
	BOOL _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	IKLockupElement* _lockup;

}

@property (assign,nonatomic,__weak) IKLockupElement * lockup;              //@synthesize lockup=_lockup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)setTitleText:(id)arg1 ;
-(id)thumbnailImage;
-(void)setDescriptionText:(id)arg1 ;
-(void)setZoomingImageTransitionIdentifier:(id)arg1 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(id)descriptionTextStyle;
-(id)subtitleTextStyle;
-(void)setSubtitleText:(id)arg1 ;
-(void)setThumbnailImagePlaceholder:(id)arg1 ;
-(void)setThumbnailOverlayImage:(id)arg1 ;
-(void)_handlePinchGesture:(id)arg1 ;
-(void)setThumbnailMaxSize:(CGSize)arg1 ;
-(void)setThumbnailBorderColor:(id)arg1 ;
-(void)setThumbnailImageAccessibilityText:(id)arg1 ;
-(void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(BOOL)arg1 ;
-(unsigned long long)itemIndex;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(id)titleTextStyle;
-(void)setThumbnailImage:(id)arg1 ;
-(void)setLockup:(IKLockupElement *)arg1 ;
-(IKLockupElement *)lockup;
@end

