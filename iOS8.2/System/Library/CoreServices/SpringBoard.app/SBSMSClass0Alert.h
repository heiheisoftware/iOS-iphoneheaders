/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUSSDAlert.h>

@interface SBSMSClass0Alert : SBUSSDAlert
+(void)alertWithString:(id)arg1 address:(id)arg2 ;
+(void)playMessageReceived;
+(void)registerForAlerts;
-(char)allowsStackingOfAlert:(id)arg1 ;
-(id)_initWithString:(id)arg1 ;
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
-(void)deactivate;
@end

