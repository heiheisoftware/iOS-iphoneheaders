/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:23:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonCalDAV/DADataclassLockWatcher.h>
#import <DADaemonCalDAV/CalDAVCalendarPropertyRefreshDelegate.h>

@protocol DAEventsCalendarSharingResponseConsumer;
@class NSString, MobileCalDAVDaemonAccount, DACoreDAVTaskManager, CoreDAVTaskGroup;

@interface MobileCalDAVSharingResponse : NSObject <DADataclassLockWatcher, CalDAVCalendarPropertyRefreshDelegate> {

	NSString* _responseID;
	id<DAEventsCalendarSharingResponseConsumer> _consumer;
	NSString* _calendarID;
	int _response;
	MobileCalDAVDaemonAccount* _account;
	char _waitingForGatekeeper;
	char _holdingGatekeeperLock;
	char _finished;
	DACoreDAVTaskManager* _taskManager;
	CoreDAVTaskGroup* _currentOperation;

}

@property (nonatomic,readonly) NSString * responseID;                                                  //@synthesize responseID=_responseID - In the implementation block
@property (assign,nonatomic,__weak) id<DAEventsCalendarSharingResponseConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,retain) NSString * calendarID;                                                    //@synthesize calendarID=_calendarID - In the implementation block
@property (assign,nonatomic) int response;                                                             //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) CoreDAVTaskGroup * currentOperation;                                      //@synthesize currentOperation=_currentOperation - In the implementation block
@property (nonatomic,readonly) DACoreDAVTaskManager * taskManager;                                     //@synthesize taskManager=_taskManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responseWithCalendarID:(id)arg1 response:(int)arg2 consumer:(id)arg3 account:(id)arg4 ;
-(CoreDAVTaskGroup *)currentOperation;
-(void)cancel;
-(void)dealloc;
-(int)response;
-(void)finishWithError:(id)arg1 ;
-(void)setResponse:(int)arg1 ;
-(id)waiterID;
-(void)calendarRefreshForPrincipal:(id)arg1 completedWithNewCTags:(id)arg2 newSyncTokens:(id)arg3 calendarHomeSyncToken:(id)arg4 updatedCalendars:(id)arg5 error:(id)arg6 ;
-(id)initWithCalendarID:(id)arg1 response:(int)arg2 consumer:(id)arg3 account:(id)arg4 ;
-(void)setCurrentOperation:(CoreDAVTaskGroup *)arg1 ;
-(void)_deleteSharingInvitationWithUID:(id)arg1 ;
-(void)_reallyRespondToSharingRequest;
-(void)respondToSharingRequest;
-(NSString *)responseID;
-(void)setCalendarID:(NSString *)arg1 ;
-(NSString *)calendarID;
-(DACoreDAVTaskManager *)taskManager;
-(id<DAEventsCalendarSharingResponseConsumer>)consumer;
-(void)setConsumer:(id<DAEventsCalendarSharingResponseConsumer>)arg1 ;
@end

