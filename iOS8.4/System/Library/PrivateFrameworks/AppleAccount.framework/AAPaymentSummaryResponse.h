/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAPaymentSummaryResponse : AAResponse {

	NSDictionary* _responseParameters;

}

@property (nonatomic,readonly) unsigned long long numberOfCards; 
@property (nonatomic,readonly) NSString * description; 
-(NSString *)description;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(unsigned long long)numberOfCards;
@end
