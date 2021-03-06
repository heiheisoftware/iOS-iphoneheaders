/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:00:29 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface MCDetailsDescriptionView : UIView {

	NSArray* _information;
	NSMutableArray* _labels;
	NSMutableArray* _fields;
	CGSize* _sizes;
	unsigned _sizesCount;
	float _idealHeight;
	char _usesDynamicAlignment;
	float _labelMaxWidth;

}
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)_labelFont;
-(float)heightForTableView;
-(void)_calculateHeightsForFrame:(CGRect)arg1 ;
-(id)_valueFont;
-(id)initWithFrame:(CGRect)arg1 data:(id)arg2 ;
-(void)setUsesDynamicAlignment:(char)arg1 ;
@end

