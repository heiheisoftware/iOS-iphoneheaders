/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DASubCal/SubCalAccount.h>

@protocol SubCalDaemonAccountDelegate;
@interface SubCalDaemonAccount : SubCalAccount {

	id<SubCalDaemonAccountDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SubCalDaemonAccountDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SubCalDaemonAccountDelegate>)arg1 ;
-(id<SubCalDaemonAccountDelegate>)delegate;
-(char)monitorFoldersWithIDs:(id)arg1 ;
-(void)stopMonitoringFolders;
-(id)changeTrackingID;
-(id)storeExternalId;
-(void)subCalRefreshTask:(id)arg1 finishedWithError:(id)arg2 ;
-(void)subCalRefreshTask:(id)arg1 needsUsernamePasswordForHost:(id)arg2 continuation:(/*^block*/id)arg3 ;
-(void)subCalRefreshTask:(id)arg1 didRedirectToURL:(id)arg2 ;
-(void)refreshAllCalendars:(char)arg1 ;
-(char)_calendarExistsOnParent;
-(void)_refresh:(char)arg1 ;
@end
