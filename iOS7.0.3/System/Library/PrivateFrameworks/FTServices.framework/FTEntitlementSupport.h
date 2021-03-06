/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <FTServices/FTServices-Structs.h>
@class NSDictionary;

@interface FTEntitlementSupport : NSObject {

	CTServerConnectionRef _ctServerConnection;
	CFStringRef _entitlementStatus;

}

@property (nonatomic,readonly) BOOL faceTimeNonWiFiEntitled; 
@property (nonatomic,readonly) NSDictionary * registrationState; 
+(id)sharedInstance;
-(id)init;
-(BOOL)_registerForCTEntitlementNotifications;
-(void)_unregisterForCTEntitlementNotifications;
-(void)_handleEntitlementNotification:(CFDictionaryRef)arg1 ;
-(void)_registrationStateChanged;
-(id)_rawEntitlementValue;
-(id)registrationState;
-(BOOL)faceTimeNonWiFiEntitled;
-(void)_cleanupMachInfo;
-(BOOL)_setupCTServerConnection;
-(BOOL)_disconnectCTServerConnection;
-(BOOL)_reconnectCTServerConnectionIfNecessary;
-(void)_handleCTServiceRequestName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 contextInfo:(void*)arg3 ;
@end

