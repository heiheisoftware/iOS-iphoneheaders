/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/nanosystemsettingsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <nanosystemsettingsd/nanosystemsettingsd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <nanosystemsettingsd/NSCopying.h>

@interface NSSAboutInfoRespMsg : PBCodable <NSCopying> {

	unsigned long long _availableStorageInBytes;
	unsigned long long _batteryCurrentCapacity;
	unsigned long long _numberOfApps;
	unsigned long long _numberOfPhotos;
	unsigned long long _numberOfSongs;
	BOOL _batteryIsCharging;
	SCD_Struct_NS3 _has;

}

@property (assign,nonatomic) BOOL hasAvailableStorageInBytes; 
@property (assign,nonatomic) unsigned long long availableStorageInBytes;              //@synthesize availableStorageInBytes=_availableStorageInBytes - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfApps; 
@property (assign,nonatomic) unsigned long long numberOfApps;                         //@synthesize numberOfApps=_numberOfApps - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSongs; 
@property (assign,nonatomic) unsigned long long numberOfSongs;                        //@synthesize numberOfSongs=_numberOfSongs - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfPhotos; 
@property (assign,nonatomic) unsigned long long numberOfPhotos;                       //@synthesize numberOfPhotos=_numberOfPhotos - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryCurrentCapacity; 
@property (assign,nonatomic) unsigned long long batteryCurrentCapacity;               //@synthesize batteryCurrentCapacity=_batteryCurrentCapacity - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryIsCharging; 
@property (assign,nonatomic) BOOL batteryIsCharging;                                  //@synthesize batteryIsCharging=_batteryIsCharging - In the implementation block
-(unsigned long long)availableStorageInBytes;
-(void)setAvailableStorageInBytes:(unsigned long long)arg1 ;
-(BOOL)hasAvailableStorageInBytes;
-(BOOL)hasNumberOfApps;
-(unsigned long long)numberOfApps;
-(BOOL)hasNumberOfSongs;
-(unsigned long long)numberOfSongs;
-(BOOL)hasNumberOfPhotos;
-(BOOL)hasBatteryCurrentCapacity;
-(unsigned long long)batteryCurrentCapacity;
-(BOOL)hasBatteryIsCharging;
-(BOOL)batteryIsCharging;
-(void)setHasAvailableStorageInBytes:(BOOL)arg1 ;
-(void)setNumberOfApps:(unsigned long long)arg1 ;
-(void)setHasNumberOfApps:(BOOL)arg1 ;
-(void)setNumberOfSongs:(unsigned long long)arg1 ;
-(void)setHasNumberOfSongs:(BOOL)arg1 ;
-(void)setHasNumberOfPhotos:(BOOL)arg1 ;
-(void)setBatteryCurrentCapacity:(unsigned long long)arg1 ;
-(void)setHasBatteryCurrentCapacity:(BOOL)arg1 ;
-(void)setBatteryIsCharging:(BOOL)arg1 ;
-(void)setHasBatteryIsCharging:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)numberOfPhotos;
-(void)setNumberOfPhotos:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

