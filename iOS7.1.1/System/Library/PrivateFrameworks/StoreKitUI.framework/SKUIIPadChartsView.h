/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, _UIBackdropView, UIView;

@interface SKUIIPadChartsView : UIView {

	NSArray* _allViewControllers;
	long long _animatingToNumberOfVisibleColumns;
	_UIBackdropView* _backdropView;
	UIView* _borderView0;
	UIView* _borderView1;
	long long _columnChangeAnimationCount;
	NSArray* _columnViews;
	UIEdgeInsets _contentInset;
	UIView* _headerBackgroundView;
	NSArray* _headerViews;
	long long _numberOfVisibleColumns;

}

@property (nonatomic,copy) NSArray * chartTableViewControllers;              //@synthesize allViewControllers=_allViewControllers - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                      //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) _UIBackdropView * backdropView;               //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) long long numberOfVisibleColumns;               //@synthesize numberOfVisibleColumns=_numberOfVisibleColumns - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void).cxx_destruct;
-(id)backdropView;
-(void)_reloadColumnViews;
-(long long)numberOfVisibleColumns;
-(void)_headerViewAction:(id)arg1 ;
-(id)_headerViewWithViewControllers:(id)arg1 ;
-(void)beginColumnChangeAnimationToNumberOfVisibleColumns:(long long)arg1 ;
-(void)endColumnChangeAnimation;
-(void)setChartTableViewControllers:(id)arg1 ;
-(void)setNumberOfVisibleColumns:(long long)arg1 ;
-(id)chartTableViewControllers;
@end

