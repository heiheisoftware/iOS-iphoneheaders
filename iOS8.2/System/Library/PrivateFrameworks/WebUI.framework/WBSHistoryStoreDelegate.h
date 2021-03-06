/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>
@optional
-(char)historyStoreShouldScheduleMaintenance:(id)arg1;

@required
-(char)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
-(void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2;

@end

