/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/_HKQueryServerDataObject.h>

@class NSDictionary;

@interface _HKCorrelationQueryServerDataObject : _HKQueryServerDataObject {

	NSDictionary* _filterDictionary;
	int _version;

}

@property (nonatomic,retain) NSDictionary * filterDictionary;              //@synthesize filterDictionary=_filterDictionary - In the implementation block
@property (assign,nonatomic) int version;                                  //@synthesize version=_version - In the implementation block
+(char)supportsSecureCoding;
-(void)setFilterDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)filterDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
@end
