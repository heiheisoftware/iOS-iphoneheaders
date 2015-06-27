/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:52:23 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>
#import <CallHistorySyncHelper/IDSServiceDelegate.h>

@class IDSDevice, TransactionLog, NSString, NSArray;

@interface CHIDSPeerDevice : CHSynchronizedLoggable <IDSServiceDelegate> {

	int _status;
	IDSDevice* _device;
	TransactionLog* _txLog;
	int _configuration;
	NSString* _sendIdentifier;
	NSArray* _pendingTransactions;

}

@property (assign) int status;                                      //@synthesize status=_status - In the implementation block
@property (retain) IDSDevice * device;                              //@synthesize device=_device - In the implementation block
@property (retain) TransactionLog * txLog;                          //@synthesize txLog=_txLog - In the implementation block
@property (assign) int configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (retain) NSString * sendIdentifier;                       //@synthesize sendIdentifier=_sendIdentifier - In the implementation block
@property (retain) NSArray * pendingTransactions;                   //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TransactionLog *)txLog;
-(void)sendMessage:(id)arg1 withService:(id)arg2 ;
-(void)setSendIdentifier:(NSString *)arg1 ;
-(void)sendTransactions:(id)arg1 withService:(id)arg2 ;
-(NSString *)sendIdentifier;
-(void)flushTransactionsWithService:(id)arg1 ;
-(void)removeTemporaryBootstrapDataStore;
-(id)initWithDevice:(id)arg1 withConfiguration:(int)arg2 ;
-(void)sendBootstrapDataStoreWithService:(id)arg1 ;
-(void)setTxLog:(TransactionLog *)arg1 ;
-(void)setConfiguration:(int)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(int)configuration;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(NSArray *)pendingTransactions;
-(void)setPendingTransactions:(NSArray *)arg1 ;
-(IDSDevice *)device;
-(void)setDevice:(IDSDevice *)arg1 ;
@end
