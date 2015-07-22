/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PhoneBaseViewController <NSObject>
@optional
-(void)prepareToHandleURL:(id)arg1;
-(void)updateViewControllerForOrientation:(int)arg1;
-(void)prepareForTransitionInFromViewType:(int)arg1 animated:(char)arg2;
-(void)transitionInFromViewType:(int)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3;

@required
+(int)statusBarStyle;
+(id)defaultPNGName;
+(int)viewType;
-(char)shouldSnapshot;
-(void)prepareForSnapshot;
-(char)shouldDisableEdgeClip;
-(void)handleURL:(id)arg1;

@end
