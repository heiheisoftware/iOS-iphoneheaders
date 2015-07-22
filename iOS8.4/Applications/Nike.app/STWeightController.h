/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Nike/STCustomSheetController.h>
#import <Nike/STWeightPickerDelegate.h>

@class STWeightPicker, NSString;

@interface STWeightController : STCustomSheetController <STWeightPickerDelegate> {

	STWeightPicker* _weightPicker;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_weightDidChange;
-(void)save;
-(id)init;
-(void)loadView;
-(void)weightPicker:(id)arg1 weightUnitDidChange:(int)arg2 ;
-(void)weightPicker:(id)arg1 weightDidChange:(float)arg2 ;
@end
