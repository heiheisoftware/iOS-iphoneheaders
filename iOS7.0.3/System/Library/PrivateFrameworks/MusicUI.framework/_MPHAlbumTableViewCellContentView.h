/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/MusicTableViewCellContentView.h>

@class UIImageView, UILabel, NSAttributedString, UIImage, NSString;

@interface _MPHAlbumTableViewCellContentView : MusicTableViewCellContentView {

	UIImageView* _artworkImageView;
	UILabel* _detailLabel;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSAttributedString * detailAttributedString; 
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * title; 
-(id)artworkImage;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setArtworkImage:(id)arg1 ;
-(void)setDetailAttributedString:(id)arg1 ;
-(void)layoutSubviewsPad;
-(void)layoutSubviewsPhone;
-(id)detailAttributedString;
-(void).cxx_destruct;
@end

