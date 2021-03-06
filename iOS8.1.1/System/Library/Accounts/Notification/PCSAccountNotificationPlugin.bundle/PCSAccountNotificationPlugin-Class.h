/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Accounts/Notification/PCSAccountNotificationPlugin.bundle/PCSAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PCSAccountNotificationPlugin/ACDAccountNotificationPlugin.h>

@class NSString;

@interface PCSAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)iCloudEnvironmentForAccount:(id)arg1 ;
-(BOOL)careAboutAccount:(id)arg1 ;
-(BOOL)setupAccount:(id)arg1 type:(id)arg2 ;
-(id)escrowURL:(id)arg1 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

