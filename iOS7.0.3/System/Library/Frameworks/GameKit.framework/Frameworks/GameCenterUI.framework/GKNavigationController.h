/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UIViewControllerRestoration.h>

@class NSMutableArray;

@interface GKNavigationController : UINavigationController <UIViewControllerRestoration> {

	NSMutableArray* _deferredTransitions;

}

@property (nonatomic,retain) NSMutableArray * deferredTransitions;              //@synthesize deferredTransitions=_deferredTransitions - In the implementation block
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)setupGKNavigationController;
-(void)setDeferredTransitions:(id)arg1 ;
-(void)_performDeferredTransition;
-(id)deferredTransitions;
-(void)_deferTransitionOfType:(int)arg1 withViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)dealloc;
-(id)init;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg1 ;
@end

