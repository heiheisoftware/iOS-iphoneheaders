/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIScreen, SBWindow, UIView;

@interface SBFolderControllerAnimationContext : NSObject {

	UIScreen* _screen;
	SBWindow* _animationWindow;
	UIView* _fallbackIconContainer;

}

@property (nonatomic,retain,readonly) UIScreen * screen;                           //@synthesize screen=_screen - In the implementation block
@property (nonatomic,retain,readonly) SBWindow * animationWindow;                  //@synthesize animationWindow=_animationWindow - In the implementation block
@property (nonatomic,retain,readonly) UIView * fallbackIconContainer;              //@synthesize fallbackIconContainer=_fallbackIconContainer - In the implementation block
+(id)contextWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3 ;
-(id)initWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3 ;
-(SBWindow *)animationWindow;
-(UIView *)fallbackIconContainer;
-(void)dealloc;
-(UIScreen *)screen;
@end
