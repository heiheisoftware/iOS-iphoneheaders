/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface SBSearchWikiRowImageCell : UITableViewCell {

	UILabel* _label;
	UIImageView* _valueImageView;

}

@property (assign) UILabel * label;                           //@synthesize label=_label - In the implementation block
@property (assign) UIImageView * valueImageView;              //@synthesize valueImageView=_valueImageView - In the implementation block
-(UIImageView *)valueImageView;
-(void)setValueImageView:(UIImageView *)arg1 ;
-(void)awakeFromNib;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

