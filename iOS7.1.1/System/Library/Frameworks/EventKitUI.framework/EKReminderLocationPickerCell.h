/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol EKReminderLocationPickerCellButtonHandler, EKStyleProvider;
@class UIImageView, UIButton;

@interface EKReminderLocationPickerCell : UITableViewCell {

	UIImageView* _spinner;
	UIImageView* _checkmark;
	UIButton* _failureButton;
	UIButton* _contactsButton;
	<EKReminderLocationPickerCellButtonHandler>* _buttonHandler;
	<EKStyleProvider>* _styleProvider;
	int _locationPickerCellAccessoryType;

}

@property (assign,nonatomic) int locationPickerCellAccessoryType;              //@synthesize locationPickerCellAccessoryType=_locationPickerCellAccessoryType - In the implementation block
-(int)locationPickerCellAccessoryType;
-(void)setLocationPickerCellAccessoryType:(int)arg1 ;
-(id)initWithStyle:(long long)arg1 buttonHandler:(id)arg2 styleProvider:(id)arg3 ;
-(id)_exclamationGlyphImage;
-(id)_failImage;
-(id)_failPressedImage;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void).cxx_destruct;
@end

