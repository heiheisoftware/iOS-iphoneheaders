/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoSystemSettings/NSSecureCoding.h>

@class NSString;

@interface NSSUsageBundleCategory : NSObject <NSSecureCoding> {

	NSString* _name;
	unsigned long long _size;

}

@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long size;              //@synthesize size=_size - In the implementation block
+(char)supportsSecureCoding;
-(unsigned long long)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSize:(unsigned long long)arg1 ;
@end
