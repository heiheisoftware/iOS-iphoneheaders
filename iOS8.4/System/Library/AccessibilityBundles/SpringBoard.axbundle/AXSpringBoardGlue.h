/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AXSpringBoardGlue : NSObject
+(void)removeVoiceOverInfoPanel:(double)arg1 ;
+(BOOL)canShowAXInfoPanel;
+(void)toggleVoiceOverInfoPanel;
+(void)resetCanShowAXInfoPanel;
+(BOOL)_showingBuddyLockScreen;
+(void)accessibilityInitializeBundle;
+(id)sharedInstance;
-(BOOL)isUILocked;
-(void)_accessibilitySetAllowShowNotificationGestureOverride:(BOOL)arg1 ;
-(BOOL)_accessibilityAllowShowNotificationGestureOverride;
-(BOOL)isDimmed;
@end
