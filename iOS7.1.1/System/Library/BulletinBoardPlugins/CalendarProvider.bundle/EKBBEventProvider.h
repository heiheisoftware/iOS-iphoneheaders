/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/BulletinBoardPlugins/CalendarProvider.bundle/CalendarProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarProvider/EKBBDataProvider.h>

@protocol OS_dispatch_queue;
@class _EKNotificationMonitor, NSMutableDictionary, NSObject, NSDateFormatter;

@interface EKBBEventProvider : EKBBDataProvider {

	_EKNotificationMonitor* _notificationMonitor;
	NSMutableDictionary* _notifications;
	NSObject<OS_dispatch_queue>* _invitesQueue;
	NSObject<OS_dispatch_queue>* _loaderQueue;
	bool _needsLoad;
	NSDateFormatter* _dateFormatter;

}
-(void)databaseChanged:(id)arg1 ;
-(void)_unalertedNotificationsReceived:(id)arg1 ;
-(void)_notificationCountChanged:(id)arg1 ;
-(void)_notificationsChanged:(id)arg1 ;
-(id)_notifications;
-(id)_resourceChangeURIFromBulletin:(id)arg1 ;
-(id)_bulletinRequestWithCalendarNotification:(id)arg1 ;
-(void)_addNotification:(id)arg1 replace:(bool)arg2 ;
-(bool)_loadNotifications;
-(id)_expirationDateForEventInvitation:(id)arg1 ;
-(void)_setPropertiesOnBulletinRequest:(id)arg1 fromResourceChange:(id)arg2 ;
-(id)_expirationDateForResourceChange:(id)arg1 ;
-(void)deviceUnlocked;
-(id)emptyModalTitle;
-(id)actionButtonTitleForAlertInfo:(id)arg1 ;
-(id)entityScheme;
-(unsigned long long)allowedEntityTypes;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)_calendarNotificationSettingChanged;
-(void)_reloadIfNeeded;
-(void)dealloc;
-(id)init;
-(id)_dateFormatter;
-(void).cxx_destruct;
-(id)sectionIdentifier;
-(id)sectionParameters;
-(void)dataProviderDidLoad;
-(id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)sortDescriptors;
-(void)_reload;
@end

