/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:17:55 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface VPNStatusController : PSListController
-(void)dealloc;
-(id)init;
-(void)loadView;
-(id)_connection;
-(id)statusForConnection:(id)arg1 ;
-(void)_vpnStatusChanged:(id)arg1 ;
-(void)_timerUpdated:(id)arg1 ;
-(id)serverForConnection:(id)arg1 ;
-(id)usernameForConnection:(id)arg1 ;
-(id)typeForConnection:(id)arg1 ;
-(id)localIPForSpecifier:(id)arg1 ;
-(id)remoteIPForSpecifier:(id)arg1 ;
-(id)timeConnectedForSpecifier:(id)arg1 ;
-(id)specifiers;
@end
