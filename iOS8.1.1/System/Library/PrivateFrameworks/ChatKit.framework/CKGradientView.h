/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@protocol CKGradientReferenceView;
@class UIView, NSArray;

@interface CKGradientView : UIView {

	UIView*<CKGradientReferenceView> _referenceView;
	NSArray* _colors;
	UIView* _effectView;
	CGRect _gradientFrame;

}

@property (assign,nonatomic) UIView*<CKGradientReferenceView> referenceView;              //@synthesize referenceView=_referenceView - In the implementation block
@property (nonatomic,retain) NSArray * colors;                                            //@synthesize colors=_colors - In the implementation block
@property (nonatomic,retain) UIView * effectView;                                         //@synthesize effectView=_effectView - In the implementation block
@property (assign,nonatomic) CGRect gradientFrame;                                        //@synthesize gradientFrame=_gradientFrame - In the implementation block
+(id)gradientViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setColors:(NSArray *)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id)description;
-(void)didMoveToSuperview;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(NSArray *)colors;
-(UIView *)effectView;
-(void)setEffectView:(UIView *)arg1 ;
-(id)gradient;
-(UIView*<CKGradientReferenceView>)referenceView;
-(void)setReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(CGRect)gradientFrame;
-(void)setGradientFrame:(CGRect)arg1 ;
-(void)updateAnimation;
-(void)updateGradientImage;
@end
