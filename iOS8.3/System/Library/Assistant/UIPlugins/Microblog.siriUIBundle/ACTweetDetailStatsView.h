/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:04:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface ACTweetDetailStatsView : UIView {

	UILabel* _retweetsLabel;

}
+(id)_createLabel;
-(id)initWithFrame:(CGRect)arg1 tweet:(id)arg2 ;
-(CGSize)_calculateSizeForWidth:(float)arg1 setFrames:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

