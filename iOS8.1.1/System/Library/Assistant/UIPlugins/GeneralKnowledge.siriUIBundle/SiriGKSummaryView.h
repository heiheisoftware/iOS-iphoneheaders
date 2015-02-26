/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UITextView, UILabel, UIImageView, UIView;

@interface SiriGKSummaryView : SiriGKView {

	UITextView* _summaryTextView;
	UILabel* _captionLabel;
	UIImageView* _insetImageView;
	UIView* _placeholderView;

}
-(CGSize)_sizeThatFits:(CGSize)arg1 setFrames:(BOOL)arg2 ;
-(id)initWithText:(id)arg1 caption:(id)arg2 imageResource:(id)arg3 usingPersistentStore:(id)arg4 ;
-(void)_configureWithImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
