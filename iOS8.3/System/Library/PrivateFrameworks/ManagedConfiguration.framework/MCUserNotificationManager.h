/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:21:09 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MCUserNotificationManager : NSObject

@property (nonatomic,readonly) char hasOutstandingNotifications; 
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)mainQueueDidReceiveAppWhitelistChangedNotification;
-(void)cancelAllNotificationsCompletionBlock:(/*^block*/id)arg1 ;
-(char)hasOutstandingNotifications;
-(void)promptUserToLogIntoiTunesWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)inviteUserToVPPWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)displayUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonText:(id)arg3 alternateButtonText:(id)arg4 otherButtonText:(id)arg5 displayOnLockScreen:(char)arg6 displayInAppWhitelistModes:(char)arg7 dismissAfterTimeInterval:(double)arg8 assertion:(id)arg9 completionBlock:(/*^block*/id)arg10 ;
@end

