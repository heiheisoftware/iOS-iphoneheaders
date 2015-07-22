/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MusicTermsAgreementViewControllerDelegate;
@class UIBarButtonItem, UILabel, UIActivityIndicatorView, UITextView, NSString;

@interface MusicTermsAgreementViewController : UIViewController {

	UIBarButtonItem* _acceptingBarButtonItem;
	UIBarButtonItem* _agreeBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	UILabel* _loadingLabel;
	UIActivityIndicatorView* _loadingActivityIndicatorView;
	UIBarButtonItem* _sendEmailBarButtonItem;
	UITextView* _termsTextView;
	BOOL _accepting;
	BOOL _loading;
	id<MusicTermsAgreementViewControllerDelegate> _delegate;
	NSString* _termsText;

}

@property (assign,getter=isAccepting,nonatomic) BOOL accepting;                                          //@synthesize accepting=_accepting - In the implementation block
@property (assign,nonatomic,__weak) id<MusicTermsAgreementViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                              //@synthesize loading=_loading - In the implementation block
@property (nonatomic,copy) NSString * termsText;                                                         //@synthesize termsText=_termsText - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<MusicTermsAgreementViewControllerDelegate>)arg1 ;
-(id<MusicTermsAgreementViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(BOOL)isLoading;
-(void)_updateBarButtonItems;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setTermsText:(NSString *)arg1 ;
-(void)setAccepting:(BOOL)arg1 ;
-(void)_sendEmailBarButtonItemAction:(id)arg1 ;
-(void)_agreeBarButtonItemAction:(id)arg1 ;
-(void)_cancelBarButtonItemAction:(id)arg1 ;
-(BOOL)isAccepting;
-(NSString *)termsText;
-(void)setLoading:(BOOL)arg1 ;
-(void)_updateViewState;
@end
