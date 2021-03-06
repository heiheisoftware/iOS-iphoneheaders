/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:17:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UILabel.h>

@class UIColor;

@interface SCATOutlineLabel : UILabel {

	UIColor* _outlineColor;
	float _outlineThickness;

}

@property (nonatomic,retain) UIColor * outlineColor;              //@synthesize outlineColor=_outlineColor - In the implementation block
@property (assign,nonatomic) float outlineThickness;              //@synthesize outlineThickness=_outlineThickness - In the implementation block
-(float)outlineThickness;
-(void)setOutlineThickness:(float)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(UIColor *)outlineColor;
-(void)setOutlineColor:(UIColor *)arg1 ;
@end

