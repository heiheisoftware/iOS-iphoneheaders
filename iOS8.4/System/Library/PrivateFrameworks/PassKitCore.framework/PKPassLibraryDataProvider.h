/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassLibraryDataProvider <NSObject>
@required
-(id)passWithUniqueID:(id)arg1;
-(void)removePass:(id)arg1;
-(id)paymentPasses;
-(BOOL)canAddPaymentPass;
-(id)defaultCardIdentifier;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;

@end

