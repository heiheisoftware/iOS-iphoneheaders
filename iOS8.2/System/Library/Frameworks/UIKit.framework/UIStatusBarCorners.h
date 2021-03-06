/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface UIStatusBarCorners : UIView {

	int _cornerStyle;
	int _cornerAlignment;
	UIView* _leftCorner;
	UIView* _rightCorner;

}
+(float)cornerRadius;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)cornerStyle;
-(id)initForAlignment:(int)arg1 style:(int)arg2 ;
-(id)_imageForCornerWithStyle:(int)arg1 ;
@end

