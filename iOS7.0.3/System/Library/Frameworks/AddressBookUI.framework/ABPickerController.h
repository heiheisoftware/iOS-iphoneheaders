/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString, NSArray, UITableViewController, NSIndexPath;

@interface ABPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {

	BOOL _allowsCustomItems;
	NSString* _selectedItem;
	NSArray* _builtinItems;
	NSArray* _customItems;
	UITableViewController* _tableViewController;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,retain) NSString * selectedItem;                                  //@synthesize selectedItem=_selectedItem - In the implementation block
@property (assign,nonatomic) <ABPickerControllerDelegate> * delegate; 
@property (nonatomic,copy) NSArray * builtinItems;                                     //@synthesize builtinItems=_builtinItems - In the implementation block
@property (nonatomic,copy) NSArray * customItems;                                      //@synthesize customItems=_customItems - In the implementation block
@property (assign,nonatomic) BOOL allowsCustomItems;                                   //@synthesize allowsCustomItems=_allowsCustomItems - In the implementation block
@property (nonatomic,retain) UITableViewController * tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                          //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
-(id)_itemAtIndexPath:(id)arg1 ;
-(id)tableViewController;
-(void)cancelPicker:(id)arg1 ;
-(void)setTableViewController:(id)arg1 ;
-(void)setBuiltinItems:(id)arg1 ;
-(id)titleForPickerItem:(id)arg1 ;
-(id)titleForAddCustomItem;
-(void)setCustomItems:(id)arg1 ;
-(void)setAllowsCustomItems:(BOOL)arg1 ;
-(void)donePicker:(id)arg1 ;
-(BOOL)allowsCustomItems;
-(id)customItems;
-(id)builtinItems;
-(void)customLabelUpdated:(id)arg1 ;
-(void)setSelectedIndexPath:(id)arg1 ;
-(id)selectedIndexPath;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setSelectedItem:(id)arg1 ;
-(id)selectedItem;
@end

