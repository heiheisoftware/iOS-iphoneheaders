/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKit/NSSecureCoding.h>

@class NSString, NSUUID;

@interface HMUser : NSObject <NSSecureCoding> {

	NSString* _name;
	NSUUID* _uuid;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                       //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(NSUUID *)uuid;
-(id)initWithName:(id)arg1 ;
-(void)configure:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
@end
