/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXSpringBoardServerInstance/AXSpringBoardServerInstance-Structs.h>
#import <UIKit/UIView.h>

@protocol AXSBVoiceOverSwipeDetectorDelegate;
@class UILabel, UIImageView;

@interface AXSBVoiceOverSwipeDetectorView : UIView {

	UILabel* _titleLabel;
	UIImageView* _bgImageView;
	BOOL _swipeDetected;
	id<AXSBVoiceOverSwipeDetectorDelegate> _delegate;

}

@property (assign,nonatomic) id<AXSBVoiceOverSwipeDetectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<AXSBVoiceOverSwipeDetectorDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<AXSBVoiceOverSwipeDetectorDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_swipeDetected:(id)arg1 ;
-(void)_cancelVOSwipeActivation:(id)arg1 ;
@end

