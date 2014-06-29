/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>

@protocol ASLoadConfigurationDelegate;
@class SKUILoadingView, SKUIReloadConfigurationOperation, NSOperationQueue;

@interface ASLoadConfigurationViewController : SKUIViewController {

	<ASLoadConfigurationDelegate>* _delegate;
	SKUILoadingView* _loadingView;
	SKUIReloadConfigurationOperation* _loadOperation;
	NSOperationQueue* _operationQueue;

}

@property (assign,nonatomic,__weak) <ASLoadConfigurationDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(id)init;
-(id)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void).cxx_destruct;
-(void)showError:(id)arg1 ;
@end
