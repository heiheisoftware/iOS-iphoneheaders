/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface TPStarkInCallButtonRing : UIView {

	BOOL _selected;
	BOOL _highlighted;
	BOOL _toggledOn;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                 //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL toggledOn;                   //@synthesize toggledOn=_toggledOn - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(BOOL)highlighted;
-(BOOL)selected;
-(BOOL)toggledOn;
-(void)setToggledOn:(BOOL)arg1 ;
@end

