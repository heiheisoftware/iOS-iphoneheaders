/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <CoreAudioKit/BTLEConnectionTable.h>
#import <CoreAudioKit/PeripheralForgottenDelegate.h>
#import <CoreAudioKit/PeripheralConnectionStateDelegate.h>

@class NSMutableArray, AMSBTLEConnectionManager, UIActivityIndicatorView, NSString;

@interface CABTMIDICentralViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, BTLEConnectionTable, PeripheralForgottenDelegate, PeripheralConnectionStateDelegate> {

	NSMutableArray* peripheralList;
	AMSBTLEConnectionManager* connectionManager;
	UIActivityIndicatorView* indicator;
	char didCleanup;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectionStateChanged:(id)arg1 ;
-(void)peripheralForgotten:(id)arg1 ;
-(void)updatePeripheralTable;
-(void)setUIEnabled:(char)arg1 ;
-(void)activateController:(id)arg1 ;
-(void)deactivateController:(id)arg1 ;
-(unsigned)peripheralCount;
-(id)peripheralAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)title;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)cleanup;
@end
