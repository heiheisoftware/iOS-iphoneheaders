/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTLEServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <BTLEServer/ServerService.h>
#import <BTLEServer/ANCAlertSourceDelegate.h>

@protocol OS_dispatch_queue;
@class CBMutableCharacteristic, NSMutableDictionary, ANCAlertSource, NSObject;

@interface ANCService : ServerService <ANCAlertSourceDelegate> {

	CBMutableCharacteristic* _controlPoint;
	CBMutableCharacteristic* _notificationSource;
	CBMutableCharacteristic* _dataSource;
	unsigned _uidGenerator;
	NSMutableDictionary* _uidMap;
	NSMutableDictionary* _alertMap;
	ANCAlertSource* _alertSource;
	NSObject<OS_dispatch_queue>* _eventQueue;

}
-(int)handleControlPointWrite:(id)arg1 ;
-(int)handleGetNotificationAttributesCommand:(id)arg1 ;
-(int)handleGetAppAttributesCommand:(id)arg1 ;
-(id)notificationForUID:(unsigned)arg1 ;
-(id)responseForNotificationAttributeID:(unsigned char)arg1 maxLength:(unsigned short)arg2 notification:(id)arg3 ;
-(id)invocationForUpdateDataSource:(id)arg1 central:(id)arg2 ;
-(id)responseForAppAttributeID:(unsigned char)arg1 appIdentifier:(id)arg2 ;
-(id)eventFlagsToString:(unsigned char)arg1 ;
-(id)eventIDToString:(unsigned char)arg1 ;
-(void)handleWriteRequests:(id)arg1 ;
-(void)updateNotificationSource:(unsigned char)arg1 notification:(id)arg2 isSilent:(BOOL)arg3 ;
-(id)notificationForAlert:(id)arg1 ;
-(id)notificationAttributeIDToString:(unsigned char)arg1 ;
-(id)responseForAttributeID:(unsigned char)arg1 maxLength:(unsigned short)arg2 attribute:(id)arg3 ;
-(id)appAttributeIDToString:(unsigned char)arg1 ;
-(void)updateDataSource:(id)arg1 central:(id)arg2 ;
-(void)alertAdded:(id)arg1 isSilent:(BOOL)arg2 ;
-(void)alertUpdated:(id)arg1 isSilent:(BOOL)arg2 ;
-(void)alertRemoved:(id)arg1 isSilent:(BOOL)arg2 ;
-(void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2 ;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3 ;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3 ;
-(void)dealloc;
-(id)init;
@end

