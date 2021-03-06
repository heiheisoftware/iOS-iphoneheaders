/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBBannerGestureHandlerDelegate;
#import <SpringBoard/SpringBoard-Structs.h>
@class SBBannerContainerViewController, SBBannerController, SBBannerContextView;

@interface SBBannerGestureHandler : NSObject {

	id<SBBannerGestureHandlerDelegate> _delegate;
	SBBannerContainerViewController* _bannerViewController;
	SBBannerController* _bannerController;

}

@property (assign,nonatomic) id<SBBannerGestureHandlerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) SBBannerContextView * bannerView; 
@property (nonatomic,retain,readonly) SBBannerContainerViewController * bannerViewController;              //@synthesize bannerViewController=_bannerViewController - In the implementation block
@property (nonatomic,readonly) SBBannerController * bannerController;                                      //@synthesize bannerController=_bannerController - In the implementation block
+(id)notificationCenterHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
+(id)pullDownHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
-(SBBannerController *)bannerController;
-(char)handleGestureType:(int)arg1 state:(int)arg2 location:(CGPoint)arg3 displacement:(float)arg4 velocity:(float)arg5 ;
-(id)initWithBannerController:(id)arg1 bannerViewController:(id)arg2 ;
-(SBBannerContainerViewController *)bannerViewController;
-(SBBannerContextView *)bannerView;
-(void)dealloc;
-(void)setDelegate:(id<SBBannerGestureHandlerDelegate>)arg1 ;
-(id<SBBannerGestureHandlerDelegate>)delegate;
-(void)invalidate;
@end

