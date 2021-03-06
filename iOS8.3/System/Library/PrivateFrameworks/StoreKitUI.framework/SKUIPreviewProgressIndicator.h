/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:55 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class SKUIShapeView, UIImageView;

@interface SKUIPreviewProgressIndicator : UIControl {

	SKUIShapeView* _backgroundView;
	UIImageView* _cancelImageView;
	SKUIShapeView* _foregroundView;
	char _isIndeterminate;
	float _progress;

}

@property (getter=isIndeterminate,nonatomic,readonly) char indeterminate;              //@synthesize isIndeterminate=_isIndeterminate - In the implementation block
@property (assign,nonatomic) float progress;                                           //@synthesize progress=_progress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)tintColorDidChange;
-(void)setProgress:(float)arg1 ;
-(void)setProgress:(float)arg1 animated:(char)arg2 ;
-(float)progress;
-(char)isIndeterminate;
-(void)reloadWithPlayerStatus:(id)arg1 animated:(char)arg2 ;
-(id)_newShapeViewWithBounds:(CGRect)arg1 lineWidth:(float)arg2 ;
-(void)_beginIndeterminateAnimation;
-(void)beginIndeterminateAnimation;
-(void)endIndeterminateAnimation;
@end

