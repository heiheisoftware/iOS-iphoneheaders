/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:01:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/NSSecureCoding.h>

@class HAPMetadataTuple;

@interface HMDHAPMetadataTuple : NSObject <NSSecureCoding> {

	HAPMetadataTuple* _hapMetadataTuple;

}

@property (nonatomic,retain) HAPMetadataTuple * hapMetadataTuple;              //@synthesize hapMetadataTuple=_hapMetadataTuple - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHapMetadataTuple:(HAPMetadataTuple *)arg1 ;
-(HAPMetadataTuple *)hapMetadataTuple;
-(id)initWithHAPTuple:(id)arg1 ;
@end

