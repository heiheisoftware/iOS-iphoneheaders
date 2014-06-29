/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol StarkViewControllerPresentationDelegate;
@interface StarkViewControllerPresentation : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;
	<StarkViewControllerPresentationDelegate>* _delegate;

}

@property (assign,nonatomic) BOOL presenting;                                                          //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic,__weak) <StarkViewControllerPresentationDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(BOOL)presenting;
-(void).cxx_destruct;
@end
