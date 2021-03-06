/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:39:16 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIQuicklinksViewControllerDelegate.h>

@class SKUIQuicklinksViewController, SKUIQuicklinksPageComponent, NSString;

@interface SKUIQuicklinksPageSection : SKUIStorePageSection <SKUIQuicklinksViewControllerDelegate> {

	SKUIQuicklinksViewController* _quicklinksViewController;

}

@property (nonatomic,readonly) SKUIQuicklinksPageComponent * pageComponent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(int)numberOfCells;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_quicklinksViewController;
-(void)quicklinksViewController:(id)arg1 didSelectLink:(id)arg2 atIndex:(int)arg3 ;
@end

