/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>

@class UIScrollView, UIImageView;

@interface RegulatoryPane : PSEditingPane {

	UIScrollView* _scrollView;
	UIImageView* _primaryImageView;
	UIImageView* _secondaryImageView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(char)shouldInsetContent;
-(void)viewDidBecomeVisible;
-(char)handlesDoneButton;
@end
