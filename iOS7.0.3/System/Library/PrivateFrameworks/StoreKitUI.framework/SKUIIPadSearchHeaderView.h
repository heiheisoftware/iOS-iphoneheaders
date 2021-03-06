/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <StoreKitUI/SKUIMenuViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol SKUIIPadSearchHeaderViewDelegate;
@class SKUIClientContext, NSMutableArray, UIPopoverController, NSMutableDictionary, NSArray, NSDictionary;

@interface SKUIIPadSearchHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {

	int _activeFacetIndex;
	SKUIClientContext* _clientContext;
	<SKUIIPadSearchHeaderViewDelegate>* _delegate;
	NSMutableArray* _facetButtons;
	UIPopoverController* _facetPopoverController;
	NSMutableDictionary* _facetSelections;
	NSArray* _searchFacets;

}

@property (assign,nonatomic,__weak) <SKUIIPadSearchHeaderViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * searchFacets;                                              //@synthesize searchFacets=_searchFacets - In the implementation block
@property (nonatomic,copy) NSDictionary * facetSelections;                                      //@synthesize facetSelections=_facetSelections - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)facetSelections;
-(void)setSearchFacets:(id)arg1 ;
-(void)setFacetSelections:(id)arg1 ;
-(void)_destroyFacetPopover;
-(void)_facetButtonAction:(id)arg1 ;
-(id)_titleForFacet:(id)arg1 ;
-(int)_selectedIndexForFacet:(id)arg1 ;
-(id)_newPopoverControllerWithFacet:(id)arg1 checkedIndex:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 clientContext:(id)arg2 ;
-(void)setSearchFacets:(id)arg1 selections:(id)arg2 ;
-(id)searchFacets;
-(void).cxx_destruct;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
@end

