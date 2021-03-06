/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UISiriWaveyViewDelegate.h>

@class UIKeyboardDicationBackground, UIButton, _UISiriWaveyView, UIDictationMeterView, NSString;

@interface UIDictationView : UIView <_UISiriWaveyViewDelegate> {

	UIKeyboardDicationBackground* _background;
	UIButton* _endpointButton;
	UIButton* _endpointButtonLandscape;
	UIButton* _waveTapEndpointButton;
	int _state;
	BOOL _keyboardInTransition;
	BOOL _automaticAppearanceWasEnabled;
	_UISiriWaveyView* _waveyView;
	UIDictationMeterView* _meterView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)activeInstance;
+(CGSize)layoutSize;
+(Class)dictationViewClass;
+(CGSize)viewSize;
-(void)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGPoint)contentOffset;
-(void)setState:(int)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(BOOL)visible;
-(void)applicationWillResignActive;
-(void)highlightEndpointButton;
-(void)finishReturnToKeyboard;
-(void)prepareForReturnToKeyboard;
-(BOOL)isShowing;
-(void)returnToKeyboard;
-(BOOL)drawsOwnBackground;
-(float)audioLevelForWaveyView:(id)arg1 ;
-(id)endpointButton;
-(CGSize)currentScreenSize;
-(void)applicationEnteredBackground;
-(CGPoint)positionForShow;
-(CGPoint)backgroundOffset;
-(void)endpointButtonPressed;
@end

