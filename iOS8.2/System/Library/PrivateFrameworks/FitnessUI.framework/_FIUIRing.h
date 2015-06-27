/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FIUIAnimatableObject.h>

@class UIColor, _FIUIIcon;

@interface _FIUIRing : FIUIAnimatableObject {

	float _size;
	float _thickness;
	float _opacity;
	float _percentage;
	float _dotPercentage;
	UIColor* _topColor;
	UIColor* _bottomColor;
	_FIUIIcon* _icon;
	_FIUIIcon* _dotIcon;
	float _topColorRed;
	float _topColorGreen;
	float _topColorBlue;
	float _bottomColorRed;
	float _bottomColorGreen;
	float _bottomColorBlue;
	CGPoint _position;

}

@property (assign,nonatomic) CGPoint position;                      //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) float size;                            //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) float thickness;                       //@synthesize thickness=_thickness - In the implementation block
@property (assign,nonatomic) float opacity;                         //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) float percentage;                      //@synthesize percentage=_percentage - In the implementation block
@property (assign,nonatomic) float dotPercentage;                   //@synthesize dotPercentage=_dotPercentage - In the implementation block
@property (nonatomic,retain) UIColor * topColor;                    //@synthesize topColor=_topColor - In the implementation block
@property (nonatomic,retain) UIColor * bottomColor;                 //@synthesize bottomColor=_bottomColor - In the implementation block
@property (nonatomic,retain) _FIUIIcon * icon;                      //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) _FIUIIcon * dotIcon;                   //@synthesize dotIcon=_dotIcon - In the implementation block
@property (nonatomic,readonly) float topColorRed;                   //@synthesize topColorRed=_topColorRed - In the implementation block
@property (nonatomic,readonly) float topColorGreen;                 //@synthesize topColorGreen=_topColorGreen - In the implementation block
@property (nonatomic,readonly) float topColorBlue;                  //@synthesize topColorBlue=_topColorBlue - In the implementation block
@property (nonatomic,readonly) float bottomColorRed;                //@synthesize bottomColorRed=_bottomColorRed - In the implementation block
@property (nonatomic,readonly) float bottomColorGreen;              //@synthesize bottomColorGreen=_bottomColorGreen - In the implementation block
@property (nonatomic,readonly) float bottomColorBlue;               //@synthesize bottomColorBlue=_bottomColorBlue - In the implementation block
-(_FIUIIcon *)icon;
-(float)size;
-(id)init;
-(void)setSize:(float)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setIcon:(_FIUIIcon *)arg1 ;
-(id)_newAnimatablePropertyForType:(unsigned)arg1 ;
-(void)setDotIcon:(_FIUIIcon *)arg1 ;
-(void)setThickness:(float)arg1 ;
-(void)setTopColor:(UIColor *)arg1 ;
-(void)setBottomColor:(UIColor *)arg1 ;
-(void)removeAllAnimationsForRingPropertyType:(unsigned)arg1 ;
-(void)addAnimation:(id)arg1 forRingPropertyType:(unsigned)arg2 ;
-(_FIUIIcon *)dotIcon;
-(void)setPercentage:(float)arg1 ;
-(float)dotPercentage;
-(void)setDotPercentage:(float)arg1 ;
-(float)thickness;
-(float)topColorRed;
-(float)topColorGreen;
-(float)topColorBlue;
-(float)bottomColorRed;
-(float)bottomColorGreen;
-(float)bottomColorBlue;
-(UIColor *)topColor;
-(UIColor *)bottomColor;
-(float)percentage;
@end
