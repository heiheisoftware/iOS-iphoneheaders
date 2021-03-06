/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SKUIProductPageOverlayDelegate.h>

@class NSString, SKUIProductPageOverlayController, SSURLBag, SKUIURL;

@interface ASURLResolutionViewController : SKUIViewController <SKUIProductPageOverlayDelegate> {

	NSString* _bagKey;
	BOOL _hasAppeared;
	NSString* _itemKind;
	SKUIProductPageOverlayController* _overlayController;
	int _tabBarIndex;
	SSURLBag* _urlBag;
	SKUIURL* _url;

}
-(id)initWithItemKind:(id)arg1 tabBarIndex:(int)arg2 ;
-(id)_initASURLResolutionViewController;
-(void)_attemptResolutionWithURL:(id)arg1 ;
-(id)_urlBag;
-(void)_dismissTransientViewController;
-(void)_attemptResolutionWithBagDictionary:(id)arg1 ;
-(void)_showNewsstandURL:(id)arg1 ;
-(void)_showProductPageURL:(id)arg1 ;
-(void)_showGenericURL:(id)arg1 ;
-(id)_URLRequestWithURL:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(id)initWithURL:(id)arg1 ;
-(void)productPageOverlayDidDismiss:(id)arg1 toPresentViewController:(id)arg2 ;
-(void).cxx_destruct;
-(id)initWithURLBagKey:(id)arg1 ;
@end

