/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:56 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, MicroPaymentClient, NSSet, NSData, NSDate, NSNumber;

@interface MicroPayment : NSManagedObject {

	NSString* _temporaryIdentifier;
	char _transientFailed;

}

@property (getter=isReady,nonatomic,readonly) char ready; 
@property (assign,getter=isTransientFailed,nonatomic) char transientFailed;              //@synthesize transientFailed=_transientFailed - In the implementation block
@property (nonatomic,readonly) NSString * matchingIdentifier; 
@property (nonatomic,retain) NSString * actionParams; 
@property (nonatomic,retain) NSString * applicationUsername; 
@property (nonatomic,retain) NSString * askPermissionRequestIdentifier; 
@property (nonatomic,retain) MicroPaymentClient * client; 
@property (nonatomic,retain) NSSet * downloads; 
@property (nonatomic,retain) NSData * errorData; 
@property (nonatomic,retain) NSDate * insertDate; 
@property (nonatomic,retain) NSDate * originalPurchaseDate; 
@property (nonatomic,retain) NSString * originalTransactionIdentifier; 
@property (nonatomic,retain) NSString * partnerIdentifier; 
@property (nonatomic,retain) NSString * partnerTransactionIdentifier; 
@property (nonatomic,retain) NSString * productIdentifier; 
@property (nonatomic,retain) NSDate * purchaseDate; 
@property (nonatomic,retain) NSNumber * quantity; 
@property (nonatomic,retain) NSData * receiptData; 
@property (nonatomic,retain) NSData * requestData; 
@property (nonatomic,retain) NSNumber * state; 
@property (nonatomic,retain) NSNumber * supportsDeferredPayment; 
@property (nonatomic,retain) NSString * transactionIdentifier; 
@property (nonatomic,retain) NSNumber * userDSID; 
+(id)paymentEntityFromContext:(id)arg1 ;
+(char)responseIsValid:(id)arg1 ;
-(char)isEqualToResponse:(id)arg1 compareAllFields:(char)arg2 ;
-(void)mergeValuesFromResponse:(id)arg1 ;
-(int)_clientStateForServerState:(int)arg1 ;
-(id)_temporaryIdentifier;
-(void)_updateDownloadsFromResponse:(id)arg1 ;
-(int)_serverStateForClientState:(int)arg1 ;
-(id)copyPaymentTransaction;
-(void)setValuesWithPaymentTransaction:(id)arg1 ;
-(char)isTransientFailed;
-(void)setTransientFailed:(char)arg1 ;
-(char)isReady;
-(NSString *)matchingIdentifier;
-(void)dealloc;
-(void)setFailedWithError:(id)arg1 ;
-(void)awakeFromInsert;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
@end

