/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Accounts/DataclassOwners/Calendar.bundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Bookmarks/ACDDataclassOwnerProtocol.h>

@class ACAccountStore, EKEventsDataclassOwner, EKRemindersDataclassOwner;

@interface EKCalendarDataclassOwner : NSObject <ACDDataclassOwnerProtocol> {

	CalDatabaseRef _calDatabase;
	ACAccountStore* _accountStore;
	EKEventsDataclassOwner* _eventsOwner;
	EKRemindersDataclassOwner* _remindersOwner;

}
+(id)dataclasses;
-(void)_cleanKeepAwayFromServerCalsInStore:(void*)arg1 ;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(bool)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4 ;
-(bool)mergeEntityType:(int)arg1 fromStore:(void*)arg2 toStore:(void*)arg3 inDatabase:(CalDatabaseRef)arg4 ;
-(CalDatabaseRef)calDatabase;
-(id)accountStore;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end
