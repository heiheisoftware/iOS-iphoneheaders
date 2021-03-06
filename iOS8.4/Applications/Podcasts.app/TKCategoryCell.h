/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView, TKTheme;

@interface TKCategoryCell : UITableViewCell {

	UILabel* _label;
	UIView* _separatorView;
	TKTheme* _theme;

}

@property (retain) UILabel * label;                        //@synthesize label=_label - In the implementation block
@property (retain) UIView * separatorView;                 //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) TKTheme * theme;              //@synthesize theme=_theme - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(TKTheme *)theme;
-(void)setTheme:(TKTheme *)arg1 ;
@end

