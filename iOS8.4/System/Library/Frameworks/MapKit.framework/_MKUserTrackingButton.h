/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIButton.h>
#import <MapKit/MKUserTrackingButtonTarget.h>

@class _MKUserTrackingButtonController, NSMutableDictionary, MKMapView, NSString;

@interface _MKUserTrackingButton : UIButton <MKUserTrackingButtonTarget> {

	_MKUserTrackingButtonController* _controller;
	BOOL _inMiniBar;
	NSMutableDictionary* _customImages;
	NSMutableDictionary* _customLandscapeImagePhones;
	BOOL _selectsWhenTracking;

}

@property (assign,setter=_setSelectsWhenTracking:,getter=_selectsWhenTracking,nonatomic) BOOL selectsWhenTracking;              //@synthesize selectsWhenTracking=_selectsWhenTracking - In the implementation block
@property (nonatomic,retain) MKMapView * mapView; 
@property (nonatomic,retain) id<MKUserTrackingView> userTrackingView; 
@property (nonatomic,readonly) _MKUserTrackingButtonController * controller;                                                    //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithUserTrackingView:(id)arg1 ;
+(Class)_activityIndicatorClass;
+(id)buttonWithMapView:(id)arg1 ;
-(BOOL)_selectsWhenTracking;
-(void)_setSelectsWhenTracking:(BOOL)arg1 ;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id)_imageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3 ;
-(id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3 ;
-(id<MKUserTrackingView>)userTrackingView;
-(void)setUserTrackingView:(id<MKUserTrackingView>)arg1 ;
-(void)_repositionViews;
-(void)_updateForState:(long long)arg1 ;
-(BOOL)_isHighlightedForState:(long long)arg1 ;
-(id)_defaultImageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id)_defaultLandscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)sizeToFit;
-(void)updateForMiniBarState:(BOOL)arg1 ;
-(long long)_state;
-(CGRect)_selectedIndicatorBounds;
-(_MKUserTrackingButtonController *)controller;
-(void)_setState:(long long)arg1 ;
-(long long)_activityIndicatorStyle;
@end

