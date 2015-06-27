/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:34 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SKUISearchRelatedViewDelegate;
@class _UIBackdropView, UIView, SKUIClientContext, NSArray, UILabel, NSMutableArray, UIScrollView, UIButton, NSString, CAGradientLayer;

@interface SKUISearchRelatedView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _borderView;
	SKUIClientContext* _clientContext;
	id<SKUISearchRelatedViewDelegate> _delegate;
	NSArray* _relatedQueries;
	UILabel* _titleLabel;
	NSMutableArray* _relatedButtons;
	UIScrollView* _scrollView;
	UIView* _scrollViewSuperview;
	UILabel* _noRelatedLabel;
	UIButton* _backButton;
	UIView* _separatorView;
	NSString* _previousRelatedSearchTerm;
	CAGradientLayer* _mask;

}

@property (nonatomic,readonly) _UIBackdropView * backdropView;                               //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSArray * relatedQueries;                                       //@synthesize relatedQueries=_relatedQueries - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISearchRelatedViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * previousRelatedSearchTerm;                             //@synthesize previousRelatedSearchTerm=_previousRelatedSearchTerm - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SKUISearchRelatedViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SKUISearchRelatedViewDelegate>)delegate;
-(_UIBackdropView *)backdropView;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_buttonAction:(id)arg1 ;
-(void)_backAction:(id)arg1 ;
-(void)setPreviousRelatedSearchTerm:(NSString *)arg1 ;
-(void)setRelatedQueries:(NSArray *)arg1 ;
-(NSArray *)relatedQueries;
-(NSString *)previousRelatedSearchTerm;
@end
