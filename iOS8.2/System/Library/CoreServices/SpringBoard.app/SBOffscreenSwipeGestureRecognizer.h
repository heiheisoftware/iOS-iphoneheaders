/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBPanGestureRecognizer.h>
#import <SpringBoard/_UIScreenEdgePanRecognizerDelegate.h>

@class _UIScreenEdgePanRecognizer, _UIScreenEdgePanRecognizerSettings, NSString;

@interface SBOffscreenSwipeGestureRecognizer : SBPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {

	unsigned m_offscreenEdge;
	char m_shouldUseUIKitHeuristics;
	float m_edgeMargin;
	float m_falseEdge;
	int m_touchesChecked;
	CGPoint m_firstTouch;
	float m_edgeCenter;
	float m_allowableDistanceFromEdgeCenter;
	char m_requiresSecondTouchInRange;
	_UIScreenEdgePanRecognizer* m_recognizer;

}

@property (assign,nonatomic) char shouldUseUIKitHeuristics; 
@property (assign,nonatomic) float edgeMargin; 
@property (assign,nonatomic) float falseEdge; 
@property (assign,nonatomic) float allowableDistanceFromEdgeCenter; 
@property (assign,nonatomic) char requiresSecondTouchInRange; 
@property (nonatomic,retain) _UIScreenEdgePanRecognizerSettings * settings; 
@property (assign,nonatomic) float edgeCenter; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)reloadDefaults;
-(void)setAllowableDistanceFromEdgeCenter:(float)arg1 ;
-(void)updateForBeganOrMovedTouches:(SBGestureContextRef)arg1 ;
-(char)_firstTouchInRange:(const SCD_Struct_SB32*)arg1 ;
-(void)setEdgeCenter:(float)arg1 ;
-(void)_updateAnimationDistanceAndEdgeCenter;
-(char)firstTouchQualifies:(const SCD_Struct_SB32*)arg1 ;
-(char)secondTouchQualifies:(const SCD_Struct_SB32*)arg1 ;
-(id)initForOffscreenEdge:(unsigned)arg1 ;
-(char)isHandlingLongPress;
-(void)setFalseEdge:(float)arg1 ;
-(CGRect)activeScreenBounds;
-(char)shouldUseUIKitHeuristics;
-(void)setShouldUseUIKitHeuristics:(char)arg1 ;
-(float)edgeMargin;
-(void)setEdgeMargin:(float)arg1 ;
-(float)falseEdge;
-(float)allowableDistanceFromEdgeCenter;
-(char)requiresSecondTouchInRange;
-(void)setRequiresSecondTouchInRange:(char)arg1 ;
-(float)edgeCenter;
-(void)dealloc;
-(_UIScreenEdgePanRecognizerSettings *)settings;
-(void)setState:(int)arg1 ;
-(void)reset;
-(void)screenEdgePanRecognizerStateDidChange:(id)arg1 ;
-(void)setSettings:(_UIScreenEdgePanRecognizerSettings *)arg1 ;
@end

