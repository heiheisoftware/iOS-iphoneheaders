/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString;

@interface SGPostalAddress : SGLabeledObject {

	NSString* _cachedAddress;
	long long _cachedAddressDispatchOnceToken;
	NSString* _rawAddress;

}

@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) NSString * rawAddress;              //@synthesize rawAddress=_rawAddress - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)address:(id)arg1 label:(id)arg2 ;
+(id)postalAddress:(id)arg1 label:(id)arg2 ;
-(NSString *)address;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)rawAddress;
-(id)initWithAddress:(id)arg1 label:(id)arg2 ;
-(BOOL)isEqualToPostalAddress:(id)arg1 ;
@end
