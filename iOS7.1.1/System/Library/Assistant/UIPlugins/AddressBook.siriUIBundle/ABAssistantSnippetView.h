/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/AddressBook.siriUIBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <UIKit/UIView.h>
#import <AddressBookUI/ABContactViewControllerDelegate.h>

@class ABContactViewController, SiriUISnippetViewController;

@interface ABAssistantSnippetView : UIView <ABContactViewControllerDelegate> {

	ABContactViewController* _contactViewController;
	SiriUISnippetViewController* _viewController;
	bool _allowsSelection;

}
-(void)_preventMoreSelections;
-(void)openContact:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 contact:(id)arg2 displayedProperties:(id)arg3 viewController:(id)arg4 ;
-(id)_displayIdentifier;
-(bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
@end
