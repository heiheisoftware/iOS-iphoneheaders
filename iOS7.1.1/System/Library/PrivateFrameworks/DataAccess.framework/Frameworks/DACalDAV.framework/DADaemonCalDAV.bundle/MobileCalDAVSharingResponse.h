/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonCalDAV/DADataclassLockWatcher.h>
#import <DACalDAV/CalDAVCalendarPropertyRefreshDelegate.h>

@protocol DAEventsCalendarSharingResponseConsumer;
@class NSString, MobileCalDAVDaemonAccount, DACoreDAVTaskManager, CoreDAVTaskGroup;

@interface MobileCalDAVSharingResponse : NSObject <DADataclassLockWatcher, CalDAVCalendarPropertyRefreshDelegate> {

	NSString* _responseID;
	<DAEventsCalendarSharingResponseConsumer>* _consumer;
	NSString* _calendarID;
	int _response;
	MobileCalDAVDaemonAccount* _account;
	bool _waitingForGatekeeper;
	bool _holdingGatekeeperLock;
	bool _finished;
	DACoreDAVTaskManager* _taskManager;
	CoreDAVTaskGroup* _currentOperation;

}

@property (nonatomic,readonly) NSString * responseID;                                           //@synthesize responseID=_responseID - In the implementation block
@property (assign,nonatomic) <DAEventsCalendarSharingResponseConsumer> * consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,retain) NSString * calendarID;                                             //@synthesize calendarID=_calendarID - In the implementation block
@property (assign,nonatomic) int response;                                                      //@synthesize response=_response - In the implementation block
@property (retain) CoreDAVTaskGroup * currentOperation;                                         //@synthesize currentOperation=_currentOperation - In the implementation block
@property (nonatomic,readonly) DACoreDAVTaskManager * taskManager;                              //@synthesize taskManager=_taskManager - In the implementation block
+(id)responseWithCalendarID:(id)arg1 response:(int)arg2 consumer:(id)arg3 account:(id)arg4 ;
-(void)setResponse:(int)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(int)response;
-(id)waiterID;
-(void)calendarRefreshForPrincipal:(id)arg1 completedWithNewCTags:(id)arg2 newSyncTokens:(id)arg3 calendarHomeSyncToken:(id)arg4 updatedCalendars:(id)arg5 error:(id)arg6 ;
-(id)initWithCalendarID:(id)arg1 response:(int)arg2 consumer:(id)arg3 account:(id)arg4 ;
-(void)setCurrentOperation:(id)arg1 ;
-(void)_deleteSharingInvitationWithUID:(id)arg1 ;
-(void)_reallyRespondToSharingRequest;
-(id)currentOperation;
-(void)respondToSharingRequest;
-(id)responseID;
-(id)calendarID;
-(void)setCalendarID:(id)arg1 ;
-(id)taskManager;
-(void)setConsumer:(id)arg1 ;
-(id)consumer;
@end

