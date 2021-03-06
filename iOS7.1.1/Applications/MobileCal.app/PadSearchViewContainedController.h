/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/ListViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <MobileCal/ListTableViewDelegate.h>

@protocol PadSearchViewPopoverContentDelegate;
@interface PadSearchViewContainedController : ListViewController <UISearchBarDelegate, ListTableViewDelegate> {

	<PadSearchViewPopoverContentDelegate>* _popoverContentDelegate;

}

@property (retain) <PadSearchViewPopoverContentDelegate> * popoverContentDelegate;              //@synthesize popoverContentDelegate=_popoverContentDelegate - In the implementation block
-(id)noContentStringForListTableView:(id)arg1 ;
-(id)popoverContentDelegate;
-(void)setPopoverContentDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)navigationItem;
-(void).cxx_destruct;
@end

