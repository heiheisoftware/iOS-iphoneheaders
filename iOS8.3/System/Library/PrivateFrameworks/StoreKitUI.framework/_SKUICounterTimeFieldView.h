/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:39:16 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface _SKUICounterTimeFieldView : UIView {

	UILabel* _labelLabel;
	UILabel* _valueLabel;
	unsigned _visibilityField;

}

@property (nonatomic,readonly) UILabel * labelLabel;                //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;                //@synthesize valueLabel=_valueLabel - In the implementation block
@property (assign,nonatomic) unsigned visibilityField;              //@synthesize visibilityField=_visibilityField - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)labelLabel;
-(void)setVisibilityField:(unsigned)arg1 ;
-(UILabel *)valueLabel;
-(unsigned)visibilityField;
@end
