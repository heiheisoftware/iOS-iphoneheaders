/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface ATUserDefaults : NSObject {

	NSMutableDictionary* _defaults;

}

@property (assign,nonatomic) BOOL hasCompletedDataMigration; 
@property (nonatomic,retain) NSDictionary * diskUsageInfo; 
+(id)sharedInstance;
+(void)synchronize;
+(id)readOnlyDefaults;
-(id)init;
-(void)setHasCompletedDataMigration:(BOOL)arg1 ;
-(BOOL)hasCompletedDataMigration;
-(void)setDiskUsageInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)diskUsageInfo;
-(void)_updateDefaults;
-(id)allHosts;
-(void)updateHostInfo:(id)arg1 disabledAssetTypes:(id)arg2 ;
-(void)updateLastSyncWithHostLibrary:(id)arg1 ;
-(void)removeHost:(id)arg1 ;
-(id)hostInfoForIdentifier:(id)arg1 ;
@end
