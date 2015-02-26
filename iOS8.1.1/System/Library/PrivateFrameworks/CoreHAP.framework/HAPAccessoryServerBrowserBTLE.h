/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessoryServerBrowser.h>
#import <CoreHAP/CBCentralManagerDelegate.h>

@protocol HAPAccessoryServerBrowserBTLEDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, CBCentralManager, NSMapTable, NSMutableArray, NSString;

@interface HAPAccessoryServerBrowserBTLE : HAPAccessoryServerBrowser <CBCentralManagerDelegate> {

	BOOL _performingGeneralScan;
	id<HAPAccessoryServerBrowserBTLEDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	CBCentralManager* _centralManager;
	NSMapTable* _discoveredPeripheralsWithAccessories;
	NSObject*<OS_dispatch_source> _lostAccessoryServerTimer;
	NSMutableArray* _powerOnCentralManagerCompletions;
	/*^block*/id _reachabilityCompletion;
	NSMapTable* _peripheralsWithConnectionRequestTuples;
	NSObject*<OS_dispatch_source> _targetedScanTimer;
	NSMutableArray* _targetedScanAccessoryIdentifiers;
	NSMapTable* _identifersWithReachabilityScanTuples;

}

@property (assign,nonatomic,__weak) id<HAPAccessoryServerBrowserBTLEDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                             //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) CBCentralManager * centralManager;                                      //@synthesize centralManager=_centralManager - In the implementation block
@property (nonatomic,retain) NSMapTable * discoveredPeripheralsWithAccessories;                      //@synthesize discoveredPeripheralsWithAccessories=_discoveredPeripheralsWithAccessories - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> lostAccessoryServerTimer;                 //@synthesize lostAccessoryServerTimer=_lostAccessoryServerTimer - In the implementation block
@property (assign,getter=isPerformingGeneralScan,nonatomic) BOOL performingGeneralScan;              //@synthesize performingGeneralScan=_performingGeneralScan - In the implementation block
@property (nonatomic,retain) NSMutableArray * powerOnCentralManagerCompletions;                      //@synthesize powerOnCentralManagerCompletions=_powerOnCentralManagerCompletions - In the implementation block
@property (nonatomic,copy) id reachabilityCompletion;                                                //@synthesize reachabilityCompletion=_reachabilityCompletion - In the implementation block
@property (nonatomic,retain) NSMapTable * peripheralsWithConnectionRequestTuples;                    //@synthesize peripheralsWithConnectionRequestTuples=_peripheralsWithConnectionRequestTuples - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> targetedScanTimer;                        //@synthesize targetedScanTimer=_targetedScanTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * targetedScanAccessoryIdentifiers;                      //@synthesize targetedScanAccessoryIdentifiers=_targetedScanAccessoryIdentifiers - In the implementation block
@property (nonatomic,retain) NSMapTable * identifersWithReachabilityScanTuples;                      //@synthesize identifersWithReachabilityScanTuples=_identifersWithReachabilityScanTuples - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<HAPAccessoryServerBrowserBTLEDelegate>)arg1 ;
-(id<HAPAccessoryServerBrowserBTLEDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(NSMapTable *)discoveredPeripheralsWithAccessories;
-(CBCentralManager *)centralManager;
-(void)_startDiscoveringAccessoryServers;
-(BOOL)isPerformingGeneralScan;
-(void)setPerformingGeneralScan:(BOOL)arg1 ;
-(void)_startScanningForPairingPeers;
-(void)_powerOnCentralManagerWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableArray *)targetedScanAccessoryIdentifiers;
-(void)_stopActiveScan;
-(void)_cancelLostAccessoryServerTimer;
-(void)_removeIdentifiersForReachabilityScan;
-(NSMutableArray *)powerOnCentralManagerCompletions;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(void)_discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)_performTimedConnectionRequestForIdentifier:(id)arg1 ;
-(void)setReachabilityCompletion:(id)arg1 ;
-(void)_probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_performTimedScanForIdentifiers:(id)arg1 workQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSMapTable *)identifersWithReachabilityScanTuples;
-(void)_updateTargetedScanTimer;
-(void)_callPowerOnCompletionsWithError:(id)arg1 ;
-(id)reachabilityCompletion;
-(BOOL)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2 name:(id*)arg3 pairingUsername:(id*)arg4 ;
-(BOOL)_shouldCreateHAPAccessoryServerWithIdentifier:(id)arg1 ;
-(void)_createHAPAccessoryAndNotifyDelegateWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 ;
-(NSObject*<OS_dispatch_source>)lostAccessoryServerTimer;
-(void)_setupLostAccessoryServerTimer;
-(void)_handleConnectionRequestCompletionForPeripheral:(id)arg1 ;
-(void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg1 ;
-(void)_performTargetedScanForAccessoryWithIdentifier:(id)arg1 ;
-(NSMapTable *)peripheralsWithConnectionRequestTuples;
-(NSObject*<OS_dispatch_source>)targetedScanTimer;
-(void)setTargetedScanTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_handleTargetedScanTimeout;
-(void)setLostAccessoryServerTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_removeLostAccessoryServers;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)connectToBTLEAccessoryServer:(id)arg1 ;
-(void)disconnectFromBTLEAccessoryServer:(id)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)setReachabilityCompletionHandler:(/*^block*/id)arg1 ;
-(void)probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setDiscoveredPeripheralsWithAccessories:(NSMapTable *)arg1 ;
-(void)setPowerOnCentralManagerCompletions:(NSMutableArray *)arg1 ;
-(void)setPeripheralsWithConnectionRequestTuples:(NSMapTable *)arg1 ;
-(void)setTargetedScanAccessoryIdentifiers:(NSMutableArray *)arg1 ;
-(void)setIdentifersWithReachabilityScanTuples:(NSMapTable *)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end
