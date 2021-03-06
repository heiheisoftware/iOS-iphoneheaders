/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class NSNumber, NSArray;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountIdentifier;
	long long _downloadIdentifier;
	NSNumber* _rentalKeyIdentifier;
	NSArray* _sinfs;
	BOOL _shouldValidateRentalInfo;

}

@property (readonly) NSArray * sinfs; 
@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSNumber * rentalKeyIdentifier; 
@property (readonly) long long downloadIdentifier; 
@property (assign,nonatomic) BOOL shouldValidateRentalInfo;              //@synthesize shouldValidateRentalInfo=_shouldValidateRentalInfo - In the implementation block
-(long long)downloadIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(id)sinfs;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(void)startWithConnectionResponseBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)accountIdentifier;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)initWithSinfs:(id)arg1 ;
-(id)rentalKeyIdentifier;
-(BOOL)shouldValidateRentalInfo;
-(void)setShouldValidateRentalInfo:(BOOL)arg1 ;
@end

