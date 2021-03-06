/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/NSCopying.h>

@class NSDictionary, HKObjectType, NSString, NSPredicate;

@interface HKDataUnit : NSObject <NSCopying> {

	NSDictionary* _unitNameOverrides;
	NSDictionary* _singularUnitNameOverrides;
	HKObjectType* _dataType;
	NSString* _labelDisplayName;
	float _scalarValue;
	int _keyboardType;
	NSPredicate* _chartingPredicate;

}

@property (nonatomic,readonly) HKObjectType * dataType;                      //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) NSString * labelDisplayName;                  //@synthesize labelDisplayName=_labelDisplayName - In the implementation block
@property (nonatomic,readonly) float scalarValue;                            //@synthesize scalarValue=_scalarValue - In the implementation block
@property (assign,nonatomic) int keyboardType;                               //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,readonly) NSPredicate * chartingPredicate;              //@synthesize chartingPredicate=_chartingPredicate - In the implementation block
-(HKObjectType *)dataType;
-(id)_initAsCopyOf:(id)arg1 ;
-(id)initFromDictionary:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(id)sampleType;
-(void)_applyUnitNameOverrides:(id)arg1 ;
-(void)_applyChartingProperties:(id)arg1 ;
-(id)unitDisplayNameOverrideForUnit:(id)arg1 ;
-(id)singularUnitDisplayNameOverrideForUnit:(id)arg1 ;
-(id)adjustedValueForDaemonValue:(id)arg1 ;
-(id)adjustedValueForClientValue:(id)arg1 ;
-(char)isNikeFuel;
-(char)isCharacteristic;
-(id)_dataTypeForIdentifier:(id)arg1 ;
-(NSString *)labelDisplayName;
-(float)scalarValue;
-(NSPredicate *)chartingPredicate;
@end

