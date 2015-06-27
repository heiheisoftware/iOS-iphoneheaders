/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:26 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>

@class EKParticipant, NSString, NSOperationQueue;

@interface EKEventAttendeesEditItem : EKEventEditItem {

	EKParticipant* _selfOrganizer;
	NSString* _searchAccountID;
	NSOperationQueue* _availabilityQueue;
	int _numberOfConflicts;

}
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(char)editItemViewControllerCommit:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(char)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(id)injectableViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(char)configureForCalendarConstraints:(id)arg1 ;
-(char)requiresReconfigurationOnCommit;
-(char)forceTableReloadOnCommit;
-(char)forceRefreshStartAndEndDatesOnCommit;
-(char)forceRefreshInviteesItemOnCommit;
-(char)shouldAppearWithVisibility:(int)arg1 ;
-(id)attendeesWithoutSelfOrganizerAndLocations;
-(void)dealloc;
-(id)init;
@end
