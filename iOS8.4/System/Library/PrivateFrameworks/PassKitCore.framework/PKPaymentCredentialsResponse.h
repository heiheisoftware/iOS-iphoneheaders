/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentCredentialsResponse : PKPaymentWebServiceResponse {

	NSArray* _credentials;

}

@property (nonatomic,retain) NSArray * credentials;              //@synthesize credentials=_credentials - In the implementation block
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(NSArray *)credentials;
-(void)setCredentials:(NSArray *)arg1 ;
@end
