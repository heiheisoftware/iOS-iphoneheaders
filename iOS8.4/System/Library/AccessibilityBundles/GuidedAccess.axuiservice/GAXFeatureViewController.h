/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXViewController.h>
#import <GuidedAccess/GAXFeatureViewDelegate.h>

@protocol GAXFeatureViewControllerDelegate;
@class GAXStyleProvider, GAXUIServer, NSArray, NSString;

@interface GAXFeatureViewController : GAXViewController <GAXFeatureViewDelegate> {

	id<GAXFeatureViewControllerDelegate> _delegate;
	GAXStyleProvider* _styleProvider;
	GAXUIServer* _userInterfaceServer;

}

@property (assign,nonatomic) id<GAXFeatureViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                           //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) GAXUIServer * userInterfaceServer;                          //@synthesize userInterfaceServer=_userInterfaceServer - In the implementation block
@property (nonatomic,readonly) long long applicationInterfaceOrientation; 
@property (nonatomic,readonly) NSArray * hardwareFeatureViewsParameters; 
@property (nonatomic,readonly) BOOL shouldDisplayMiniToolbar; 
@property (nonatomic,readonly) NSArray * systemFeatureViewsParameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setUserInterfaceServer:(GAXUIServer *)arg1 ;
-(GAXUIServer *)userInterfaceServer;
-(long long)applicationInterfaceOrientation;
-(void)_enumerateSystemFeatureViewsParametersUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_isUsingAppRestrictions;
-(id)_appFeatureViews;
-(id)_timeRestrictionFeatureViews;
-(NSArray *)hardwareFeatureViewsParameters;
-(NSArray *)systemFeatureViewsParameters;
-(id)_allFeatureViews;
-(id)_viewForPresentingOverlayUserInterface;
-(BOOL)shouldDisplayMiniToolbar;
-(void)_enumerateAppFeatureViewsParametersUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateHardwareFeatureViewsParametersUsingBlock:(/*^block*/id)arg1 ;
-(void)dismissOptionsAnimated:(BOOL)arg1 ;
-(id)_hardwareFeatureViews;
-(void)featureView:(id)arg1 didChangeState:(BOOL)arg2 ;
-(void)presentOptionsForFeatureView:(id)arg1 ;
-(id)styleProviderForFeatureView:(id)arg1 ;
-(void)featureView:(id)arg1 didChangeTimeRestrictionDuration:(long long)arg2 timeRestrictionsEnabled:(BOOL)arg3 ;
-(GAXStyleProvider *)styleProvider;
-(void)setStyleProvider:(GAXStyleProvider *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<GAXFeatureViewControllerDelegate>)arg1 ;
-(id<GAXFeatureViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
@end
