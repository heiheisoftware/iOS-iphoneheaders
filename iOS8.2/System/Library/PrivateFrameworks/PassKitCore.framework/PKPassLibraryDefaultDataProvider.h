/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPassLibraryDataProvider.h>

@class PKPassLibrary, PKPaymentService, NSString;

@interface PKPassLibraryDefaultDataProvider : NSObject <PKPassLibraryDataProvider> {

	PKPassLibrary* _library;
	PKPaymentService* _paymentService;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)passWithUniqueID:(id)arg1 ;
-(void)removePass:(id)arg1 ;
-(id)paymentPasses;
-(char)canAddPaymentPass;
-(id)defaultCardIdentifier;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
@end
