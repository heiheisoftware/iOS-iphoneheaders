/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <iAd/ADSActionViewController_RPC.h>

@class ADSAdSpaceController;

@interface ADSActionViewController : UIViewController <ADSActionViewController_RPC> {

	ADSAdSpaceController* _adSpaceController;

}

@property (assign,nonatomic) ADSAdSpaceController * adSpaceController; 
+(void)cancelRequestForActionViewControllerForAdSpaceController:(id)arg1 ;
+(void)requestActionViewControllerForAdSpaceController:(id)arg1 ;
+(id)_exportedInterface;
-(void)clientApplicationDidEnterBackground;
-(void)clientApplicationCancelledAction;
-(id)adSpaceController;
-(void)setAdSpaceController:(id)arg1 ;
-(void)didSetAdSpaceController;
-(void)dealloc;
-(void)_remote_viewControllerCreatedForAdSpaceControllerWithIdentifier:(id)arg1 ;
@end
